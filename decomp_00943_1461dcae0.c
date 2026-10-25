// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1461dcae0 FUN_1461dcae0 body=147 status=ok
// SIG undefined FUN_1461dcae0(void)

void FUN_1461dcae0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461dcb74 FUN_1461dcb74 body=164 status=ok
// SIG undefined FUN_1461dcb74(void)

void FUN_1461dcb74(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14163b030();
  puVar3 = (undefined8 *)*param_2;
  if (*(int *)((longlong)puVar3 + 0x14) == 0) {
    local_28 = *puVar3;
    local_20 = (longlong *)puVar3[1];
    if (local_20 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      plVar5 = local_20;
    }
    uVar4 = FUN_145ce2ae6(param_1,&local_28);
    FUN_14163b282(param_1,uVar4);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dcc1a FUN_1461dcc1a body=4159 status=ok
// SIG undefined FUN_1461dcc1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461dcc1a(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  char cVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  wchar_t *pwVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar32 [16];
  double dVar30;
  double dVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  double dVar39;
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_418 [32];
  undefined1 local_3f8 [16];
  double *local_3e8;
  double *local_3e0;
  undefined1 local_3d8 [16];
  double *local_3c8;
  double *local_3c0;
  undefined1 local_3b8 [16];
  double *local_3a8;
  double *local_3a0;
  undefined1 local_398 [16];
  double *local_388;
  double *local_380;
  undefined1 local_378 [16];
  double *local_368;
  double *local_360;
  undefined1 local_358 [16];
  double *local_348;
  double *local_340;
  double *local_338;
  undefined1 *local_330;
  double local_328 [2];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  int local_2bc;
  undefined1 local_2b8 [16];
  int local_29c;
  double local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
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
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188 [4];
  double local_168 [10];
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_2b8 = ZEXT816(0);
  iVar15 = (int)param_1[4];
  local_29c = param_2;
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  if (iVar15 == 0) {
    uVar17 = 0;
    iVar15 = 0;
  }
  else {
    FUN_1461ddc9e(local_2b8);
    iVar15 = local_2b8._8_4_;
    uVar17 = local_2b8._12_4_;
  }
  local_2b8._8_4_ = iVar15 + 1U;
  if (uVar17 < iVar15 + 1U) {
    FUN_1410918d2(local_2b8,iVar15);
  }
  *(int *)(local_2b8._0_8_ + (longlong)iVar15 * 4) = local_29c;
  do {
    FUN_1461ddc5a(param_1,&local_2bc,&local_29c);
    auVar34 = _DAT_149934d80;
    if (*(char *)(param_1[3] + (longlong)local_2bc) == '\0') {
      uVar11 = local_2b8._8_4_;
      lVar22 = (longlong)(int)local_2b8._8_4_;
      uVar17 = local_2b8._8_4_ + 1;
      local_2b8._8_4_ = uVar17;
      if ((uint)local_2b8._12_4_ < uVar17) {
        FUN_1410918d2(local_2b8,uVar11);
      }
      *(int *)(local_2b8._0_8_ + lVar22 * 4) = local_29c;
      local_29c = local_2bc;
      iVar15 = local_2b8._8_4_;
    }
    else {
      lVar22 = *param_1;
      lVar18 = (longlong)local_29c * 0x60;
      pdVar13 = (double *)(lVar22 + lVar18);
      lVar19 = (longlong)local_2bc * 0x60;
      pdVar14 = (double *)(lVar22 + lVar19);
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      local_308 = ZEXT816(0);
      local_2d8 = ZEXT816(0x3ff0000000000000);
      auVar26 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar19);
      dVar2 = auVar26._0_8_;
      dVar4 = auVar26._8_8_;
      auVar44 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar19);
      dVar3 = auVar44._0_8_;
      auVar1 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar18);
      auVar32 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar18);
      auVar26 = minpd(auVar1,auVar26);
      auVar31 = minpd(auVar32,auVar44);
      auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
      iVar15 = movmskpd((int)lVar22,auVar27);
      auVar26._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      uVar17 = movmskpd((int)lVar18,auVar26);
      if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar29 = *pdVar13;
        dVar42 = pdVar13[1];
        dVar36 = pdVar13[2];
        dVar38 = pdVar13[3];
        dVar7 = *pdVar14;
        dVar8 = pdVar14[1];
        dVar9 = pdVar14[2];
        dVar10 = pdVar14[3];
        dVar25 = pdVar14[3];
        dVar30 = pdVar14[3];
        dVar37 = pdVar14[1];
        dVar28 = pdVar14[1];
        dVar39 = pdVar14[2];
        dVar43 = pdVar14[2];
        local_328[0] = dVar42 * dVar39 * -1.0 +
                       dVar36 * dVar37 + dVar38 * *pdVar14 * 1.0 + dVar29 * dVar25;
        local_328[1] = dVar29 * dVar43 * 1.0 +
                       dVar38 * dVar28 + dVar36 * *pdVar14 * -1.0 + dVar42 * dVar30;
        local_318._0_8_ =
             dVar38 * dVar39 * 1.0 + ((*pdVar14 * dVar42 * 1.0 + dVar36 * dVar25) - dVar29 * dVar37)
        ;
        local_318._8_8_ =
             dVar36 * dVar43 * -1.0 +
             ((*pdVar14 * dVar29 * -1.0 + dVar38 * dVar30) - dVar42 * dVar28);
        dVar37 = pdVar13[4] * dVar2;
        dVar28 = pdVar13[5] * dVar4;
        dVar39 = pdVar13[6] * dVar3;
        dVar43 = pdVar13[7] * auVar44._8_8_;
        dVar29 = dVar28 * dVar7 - dVar8 * dVar37;
        dVar36 = dVar39 * dVar8 - dVar9 * dVar28;
        dVar38 = dVar37 * dVar9 - dVar7 * dVar39;
        dVar42 = dVar43 * dVar10 - dVar10 * dVar43;
        dVar36 = dVar36 + dVar36;
        dVar38 = dVar38 + dVar38;
        dVar29 = dVar29 + dVar29;
        dVar42 = dVar42 + dVar42;
        local_308._0_8_ = (dVar29 * dVar8 - dVar9 * dVar38) + dVar25 * dVar36 + dVar37 + pdVar14[4];
        local_308._8_8_ = (dVar36 * dVar9 - dVar29 * dVar7) + dVar30 * dVar38 + dVar28 + pdVar14[5];
        dStack_2f0 = (dVar42 * dVar10 - dVar42 * dVar10) + dVar30 * dVar42 + dVar43 + pdVar14[7];
        local_2f8 = (dVar38 * dVar7 - dVar8 * dVar36) + dVar25 * dVar29 + dVar39 + pdVar14[6];
      }
      else {
        dVar30 = *pdVar14;
        dVar37 = pdVar14[1];
        dVar25 = pdVar14[2];
        dVar28 = dVar37 + dVar37;
        dVar39 = dVar25 + dVar25;
        dVar43 = dVar30 * (dVar30 + dVar30);
        local_1f8 = ((double)DAT_149934d80 - (dVar25 * dVar39 + dVar37 * dVar28)) * dVar2;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar25 * dVar39 + dVar43)) * dVar4;
        local_1a8 = (1.0 - (dVar43 + dVar37 * dVar28)) * dVar3;
        dVar25 = pdVar14[3];
        dVar43 = dVar39 * dVar25;
        dVar29 = (dVar30 + dVar30) * pdVar14[3];
        dVar25 = dVar28 * dVar25;
        dStack_1f0 = (dVar28 * dVar30 + dVar43) * dVar2;
        local_1c8 = (dVar39 * dVar37 + dVar29) * dVar4;
        local_1b8 = (dVar25 + *pdVar14 * dVar39) * dVar3;
        local_1d8 = (dVar28 * dVar30 - dVar43) * dVar4;
        dStack_1b0 = (dVar39 * dVar37 - dVar29) * dVar3;
        local_1e8 = (*pdVar14 * dVar39 - dVar25) * dVar2;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar14[4];
        dStack_190 = pdVar14[5];
        local_188[0] = pdVar14[6];
        local_188[1] = 1.0;
        dVar30 = *pdVar13;
        dVar37 = pdVar13[1];
        dVar28 = pdVar13[2];
        local_268 = pdVar13[8];
        local_258 = pdVar13[9];
        dStack_230 = pdVar13[10];
        dVar29 = dVar37 + dVar37;
        dVar39 = dVar28 + dVar28;
        dVar25 = dVar30 * (dVar30 + dVar30);
        local_278 = ((double)DAT_149934d80 - (dVar28 * dVar39 + dVar37 * dVar29)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar28 * dVar39 + dVar25)) * local_258;
        local_228 = (1.0 - (dVar25 + dVar37 * dVar29)) * dStack_230;
        dVar25 = pdVar13[3];
        dVar28 = dVar39 * dVar25;
        dVar43 = (dVar30 + dVar30) * pdVar13[3];
        dVar25 = dVar29 * dVar25;
        dStack_270 = (dVar29 * dVar30 + dVar28) * local_268;
        local_248 = (dVar39 * dVar37 + dVar43) * local_258;
        local_238 = (dVar25 + *pdVar13 * dVar39) * dStack_230;
        local_268 = (*pdVar13 * dVar39 - dVar25) * local_268;
        local_258 = (dVar29 * dVar30 - dVar28) * local_258;
        dStack_230 = (dVar39 * dVar37 - dVar43) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = pdVar13[4];
        dStack_210 = pdVar13[5];
        local_208 = pdVar13[6];
        uStack_200 = 0x3ff0000000000000;
        pdVar13 = local_188 + 2;
        FUN_1447fea8d(pdVar13);
        FUN_144a1c686(pdVar13,0x3e45798ee0000000);
        auVar31._8_8_ = -(ulonglong)(0.0 <= auVar1._8_8_ * dVar4);
        auVar31._0_8_ = -(ulonglong)(0.0 <= auVar1._0_8_ * dVar2);
        auVar26 = blendvpd(_DAT_149936790,auVar34,auVar31);
        uVar21 = -(ulonglong)(0.0 <= auVar32._0_8_ * dVar3);
        dVar25 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
        dVar30 = auVar26._0_8_;
        local_168[0] = local_168[0] * dVar30;
        local_188[3] = local_188[3] * dVar30;
        local_188[2] = local_188[2] * dVar30;
        dVar30 = auVar26._8_8_;
        local_168[4] = local_168[4] * dVar30;
        local_168[3] = local_168[3] * dVar30;
        local_168[2] = dVar30 * local_168[2];
        local_168[8] = local_168[8] * dVar25;
        local_168[7] = local_168[7] * dVar25;
        local_168[6] = dVar25 * local_168[6];
        pdVar14 = &local_298;
        pdVar13 = (double *)FUN_14481fd10(pdVar14,pdVar13);
        dVar25 = (double)CONCAT44(uStack_28c,uStack_290);
        dVar30 = local_288 * local_288 + local_298 * local_298;
        dVar37 = dStack_280 * dStack_280 + dVar25 * dVar25;
        auVar35._0_8_ = dVar30 + dVar37;
        auVar35._8_8_ = dVar30 + dVar37;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar26 = sqrtpd(auVar35,auVar35);
        auVar34 = divpd(auVar34,auVar26);
        auVar41._0_8_ = auVar34._0_8_ * local_288;
        auVar41._8_8_ = auVar34._8_8_ * dStack_280;
        local_328[0] = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        local_328[1] = (double)((ulonglong)(dVar25 * auVar34._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar24);
        dStack_2f0 = 0.0;
        local_308 = local_118;
        local_2f8 = local_108;
      }
      dVar3 = auVar32._0_8_ * dVar3;
      dVar25 = auVar32._8_8_ * auVar44._8_8_;
      dVar4 = auVar1._8_8_ * dVar4;
      dVar2 = auVar1._0_8_ * dVar2;
      local_2e8._8_4_ = SUB84(dVar4,0);
      local_2e8._0_8_ = dVar2;
      local_2e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_2d8._8_4_ = SUB84(dVar25,0);
      local_2d8._0_8_ = dVar3;
      local_2d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar34._8_8_ =
           -(ulonglong)((double)((ulonglong)local_328[1] & 0x7ff0000000000000) == INFINITY);
      auVar34._0_8_ =
           -(ulonglong)((double)((ulonglong)local_328[0] & 0x7ff0000000000000) == INFINITY);
      iVar15 = movmskpd((int)pdVar13,auVar34);
      auVar44._8_8_ = -(ulonglong)((double)(local_318._8_8_ & 0x7ff0000000000000) == INFINITY);
      auVar44._0_8_ = -(ulonglong)((double)(local_318._0_8_ & 0x7ff0000000000000) == INFINITY);
      uVar17 = movmskpd((int)pdVar14,auVar44);
      if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar32._8_8_ = -(ulonglong)((double)(local_308._8_8_ & 0x7ff0000000000000) == INFINITY);
        auVar32._0_8_ = -(ulonglong)((double)(local_308._0_8_ & 0x7ff0000000000000) == INFINITY);
        iVar15 = movmskpd(iVar15,auVar32);
        auVar1._8_8_ = -(ulonglong)
                        ((double)((ulonglong)dStack_2f0 & 0x7ff0000000000000) == INFINITY);
        auVar1._0_8_ = -(ulonglong)((double)((ulonglong)local_2f8 & 0x7ff0000000000000) == INFINITY)
        ;
        uVar17 = movmskpd(0,auVar1);
        if ((uVar17 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_1461dd1c7;
        lVar22 = -(ulonglong)((double)((ulonglong)dVar4 & 0x7ff0000000000000) == INFINITY);
        auVar5._8_4_ = (int)lVar22;
        auVar5._0_8_ = -(ulonglong)((double)((ulonglong)dVar2 & 0x7ff0000000000000) == INFINITY);
        auVar5._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        iVar15 = movmskpd(iVar15,auVar5);
        lVar22 = -(ulonglong)((double)((ulonglong)dVar25 & 0x7ff0000000000000) == INFINITY);
        auVar6._8_4_ = (int)lVar22;
        auVar6._0_8_ = -(ulonglong)((double)((ulonglong)dVar3 & 0x7ff0000000000000) == INFINITY);
        auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
        uVar17 = movmskpd(0,auVar6);
        if ((uVar17 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_1461dd1c7;
      }
      else {
LAB_1461dd1c7:
        cVar12 = FUN_144a78e48((longlong)local_29c * 0x60 + *param_1);
        pwVar20 = L"false";
        pwVar16 = L"false";
        if (cVar12 != '\0') {
          pwVar16 = L"true";
        }
        cVar12 = FUN_144a78e48((longlong)local_2bc * 0x60 + *param_1);
        if (cVar12 != '\0') {
          pwVar20 = L"true";
        }
        FUN_140056680(&local_1f8,L"NaN created in during FTransform Multiplication\n");
        FUN_142787b30(local_188 + 2,local_29c);
        FUN_142787b30(local_168 + 2,local_2bc);
        FUN_140230a18(local_168 + 6,pwVar16);
        FUN_140230a18(local_118,pwVar20);
        local_330 = local_f8;
        local_338 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,
                      L"\tBoneIndex {0} : ParentBoneIndex {1} BoneTransformNaN={2} : ParentTransformNaN={3}\n"
                      ,&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        lVar22 = 0x80;
        do {
          if (*(longlong *)((longlong)local_188 + lVar22) != 0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + -0x20;
        } while (lVar22 != 0);
        FUN_1467f64aa((longlong)local_29c * 0x60 + *param_1,local_358);
        FUN_14146ec20(local_188 + 2,local_358);
        local_340 = local_168 + 2;
        local_348 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tBone {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1467f64aa((longlong)local_2bc * 0x60 + *param_1,local_378);
        FUN_14146ec20(local_188 + 2,local_378);
        local_360 = local_168 + 2;
        local_368 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tParent {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1467f64aa(local_328,local_398);
        FUN_14146ec20(local_188 + 2,local_398);
        local_380 = local_168 + 2;
        local_388 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tResult {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3b8,(longlong)local_29c * 0x60 + *param_1,0x60,0);
        FUN_14146ec20(local_188 + 2,local_3b8);
        local_3a0 = local_168 + 2;
        local_3a8 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tBone B64 {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3d8,(longlong)local_2bc * 0x60 + *param_1,0x60,0);
        FUN_14146ec20(local_188 + 2,local_3d8);
        local_3c0 = local_168 + 2;
        local_3c8 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tParent B64 {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        FUN_1468028f2(local_3f8,local_328,0x60,0);
        FUN_14146ec20(local_188 + 2,local_3f8);
        local_3e0 = local_168 + 2;
        local_3e8 = local_188 + 2;
        FUN_1407adb6e(&local_298);
        FUN_140230a2e(&local_278,L"\tResult B64 {0}\n",&local_298);
        iVar15 = dStack_270._0_4_ + -1;
        if (dStack_270._0_4_ == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_1f8,local_278,iVar15);
        if (local_278 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1407adb3e(local_298,uStack_290);
        if (local_298 != 0.0) {
          FUN_1400020a8();
        }
        if (local_168[0] != 0.0) {
          FUN_1400020a8();
        }
        if (local_1f8 != 0.0) {
          FUN_1400020a8();
        }
      }
      lVar22 = (longlong)local_29c * 0x60;
      pdVar13 = local_328;
      pdVar14 = (double *)(*param_1 + lVar22);
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      lVar18 = *param_1;
      dVar2 = *(double *)(lVar18 + lVar22);
      dVar3 = ((double *)(lVar18 + lVar22))[1];
      pdVar13 = (double *)(lVar18 + 0x10 + lVar22);
      dVar4 = *pdVar13;
      dVar25 = pdVar13[1];
      dVar30 = dVar4 * dVar4 + dVar2 * dVar2;
      dVar37 = dVar25 * dVar25 + dVar3 * dVar3;
      auVar33._0_8_ = dVar30 + dVar37;
      auVar33._8_8_ = dVar30 + dVar37;
      auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar33._8_8_);
      auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar33._0_8_);
      auVar34 = sqrtpd(auVar33,auVar33);
      auVar26 = divpd(_DAT_149934d80,auVar34);
      auVar40._0_8_ = auVar26._0_8_ * dVar4;
      auVar40._8_8_ = auVar26._8_8_ * dVar25;
      auVar34 = blendvpd(_DAT_149935300,auVar40,auVar23);
      *(ulonglong *)(lVar18 + lVar22) =
           (ulonglong)(dVar2 * auVar26._0_8_) & -(ulonglong)(1e-08 <= auVar33._0_8_);
      ((ulonglong *)(lVar18 + lVar22))[1] =
           (ulonglong)(dVar3 * auVar26._8_8_) & -(ulonglong)(1e-08 <= auVar33._8_8_);
      *(undefined1 (*) [16])(lVar18 + 0x10 + lVar22) = auVar34;
      *(undefined1 *)(param_1[3] + (longlong)local_29c) = 1;
      local_29c = *(int *)(local_2b8._0_8_ + -4 + (longlong)(int)local_2b8._8_4_ * 4);
      iVar15 = local_2b8._8_4_ + -1;
      local_2b8._8_4_ = iVar15;
    }
    if (iVar15 == 0) {
      if (local_2b8._0_8_ != 0) {
        FUN_1400020a8();
      }
      if ((local_f0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1461ddc5a FUN_1461ddc5a body=68 status=ok
// SIG undefined FUN_1461ddc5a(void)

undefined4 * FUN_1461ddc5a(longlong param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x10);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    iVar1 = *param_3;
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x78))) {
      uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 8 + (longlong)iVar1 * 0xc);
    }
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1461ddc9e FUN_1461ddc9e body=96 status=ok
// SIG undefined FUN_1461ddc9e(void)

void FUN_1461ddc9e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1461ddcfe FUN_1461ddcfe body=495 status=ok
// SIG undefined FUN_1461ddcfe(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1461ddcfe(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64 [3];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  local_50 = (longlong)DAT_14c760ba8 << 3;
  local_64[1] = 1;
  local_58 = 0;
  local_48 = 0x1000100000001;
  local_40 = 0;
  uStack_3c = 1;
  uStack_38 = 0;
  uStack_34 = 1;
  local_30 = 4;
  local_64[0] = 1 << (*(byte *)(*param_1 + 8) & 0x1f);
  plVar1 = param_1 + 0xd;
  local_b0 = local_64;
  local_90 = &local_70;
  local_70 = 0;
  local_98 = &local_78;
  local_78 = 0;
  local_88 = (undefined4)local_50;
  uStack_84 = 0;
  uStack_80 = 0x28;
  local_a0 = L"PostBuildInfoBuffer";
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = 8;
  local_c8 = 2;
  lVar5 = FUN_1401297de(*(undefined8 *)(*param_1 + 0x10),local_64 + 1,8,&local_88);
  lVar4 = param_1[0xc];
  if (lVar4 != lVar5) {
    param_1[0xc] = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)(lVar5 + 0x30) + 8))(lVar5 + 0x30);
    }
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))(lVar4 + 0x30);
    }
  }
  (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_88);
  if (plVar1 != (longlong *)&local_88) {
    lVar4 = *plVar1;
    *plVar1 = CONCAT44(uStack_84,local_88);
    local_88 = 0;
    uStack_84 = 0;
    if (lVar4 == 0) goto LAB_1461dde76;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (CONCAT44(uStack_84,local_88) != 0) {
    LOCK();
    puVar2 = (uint *)(CONCAT44(uStack_84,local_88) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1461dde76:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ddf04 FUN_1461ddf04 body=607 status=ok
// SIG undefined FUN_1461ddf04(void)

undefined8 * FUN_1461ddf04(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4f0dc0;
  param_1[0x1f] = &PTR_FUN_14a4f1130;
  FUN_1406ed278(param_1 + 0x20);
  FUN_1406ed278(param_1 + 0x42);
  FUN_1406ed278(param_1 + 100);
  FUN_1406ed278(param_1 + 0x86);
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0xd9) = 0x101;
  local_50 = 0;
  local_48 = 0x100000000;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_140f937a0(&local_68,param_1 + 0x42);
  FUN_140f937a0(&local_68,param_1 + 0x20);
  FUN_140f937a0(&local_68,param_1 + 100);
  FUN_140f937a0(&local_68,param_1 + 0x86);
  local_70 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_70[1] = (longlong)&DAT_100000001;
  *local_70 = (longlong)&PTR_FUN_14a492060;
  local_78 = local_70 + 2;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  local_70[6] = 2;
  if (local_50 == 0) {
    local_70[9] = local_58;
    *(undefined4 *)(local_70 + 7) = local_68;
    *(undefined4 *)((longlong)local_70 + 0x3c) = uStack_64;
    *(undefined4 *)(local_70 + 8) = uStack_60;
    *(undefined4 *)((longlong)local_70 + 0x44) = uStack_5c;
  }
  local_70[10] = local_50;
  local_50 = 0;
  *(undefined4 *)(local_70 + 0xb) = (undefined4)local_48;
  *(undefined4 *)((longlong)local_70 + 0x5c) = local_48._4_4_;
  local_48 = 0x100000000;
  FUN_140aec6f8(&local_78);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    param_1[0x1c] = local_78;
    plVar4 = (longlong *)param_1[0x1d];
    if (plVar4 == (longlong *)0x0) goto LAB_1461de09b;
    param_1[0x1d] = 0;
LAB_1461de101:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461de09b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_78;
    plVar4 = (longlong *)param_1[0x1d];
    if (local_70 != plVar4) {
      param_1[0x1d] = local_70;
      if (plVar4 == (longlong *)0x0) goto LAB_1461de09b;
      goto LAB_1461de101;
    }
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461de09b;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461de09b:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_68);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461de164 FUN_1461de164 body=265 status=ok
// SIG undefined FUN_1461de164(void)

void FUN_1461de164(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 != 0) {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x1800000000;
    FUN_141226200(param_1,local_108,0);
    puVar3 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar3 = local_108;
    }
    lVar4 = (longlong)(int)local_40;
    if (lVar4 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(puVar3 + lVar2) != 0) {
          local_110 = 0;
          FUN_14485c47a(&local_110);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14163bfaa(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = local_110;
        }
        lVar2 = lVar2 + 8;
      } while (lVar4 * 8 != lVar2);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461de26e FUN_1461de26e body=68 status=ok
// SIG undefined FUN_1461de26e(void)

void FUN_1461de26e(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x6e8);
  memset(_Dst,0,0x6e8);
  FUN_1461de2b2(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1461de2b2 FUN_1461de2b2 body=345 status=ok
// SIG undefined FUN_1461de2b2(void)

undefined8 * FUN_1461de2b2(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b895660;
  FUN_144a5dc74(param_1 + 0x16);
  FUN_144a5dc74(param_1 + 0x18);
  FUN_144a5dc74(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3e] = 0xf;
  *(undefined2 *)(param_1 + 0x3f) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  FUN_14163c10c(param_1 + 0x42);
  FUN_140c5455a(param_1 + 0x62);
  FUN_1413526be(param_1 + 0x7d);
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0x10000ffffffff;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  FUN_14124e07a(param_1 + 0xcd);
  return param_1;
}



// FUNCTION 1461de40b FUN_1461de40b body=124 status=ok
// SIG undefined FUN_1461de40b(void)

void FUN_1461de40b(void)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140d6b588();
  if (cVar1 != '\0') {
    FUN_1457a1ca8(local_28);
    FUN_1461de4ea(local_38,local_28);
    FUN_1461de488(local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461de488 FUN_1461de488 body=98 status=ok
// SIG undefined FUN_1461de488(void)

void FUN_1461de488(undefined8 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1401aee1c();
  EnterCriticalSection(lpCriticalSection);
  FUN_144a787a6(lpCriticalSection + 1,param_1);
  FUN_1448097c4(lpCriticalSection + 1,&DAT_149e01f64,&DAT_149e065c6,0);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001461de4da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 1461de4ea FUN_1461de4ea body=263 status=ok
// SIG undefined FUN_1461de4ea(void)

undefined8 FUN_1461de4ea(undefined8 param_1)

{
  undefined1 auStack_2b8 [32];
  undefined2 **local_298;
  longlong local_290;
  int local_288;
  longlong local_280;
  int local_278;
  undefined4 *local_270;
  undefined4 local_268;
  code *local_260;
  undefined8 **local_258;
  undefined4 local_24c;
  undefined2 *local_248;
  undefined2 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined2 local_228 [260];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1457a1ca8(&local_290);
  local_248 = local_228;
  local_230 = '\0';
  local_238 = &local_20;
  local_298 = &local_248;
  local_258 = &local_298;
  local_278 = local_288 + -1;
  if (local_288 == 0) {
    local_278 = 0;
  }
  local_260 = FUN_142788866;
  local_270 = &local_24c;
  local_24c = 0x5c002f;
  local_268 = 2;
  local_280 = local_290;
  local_240 = local_248;
  FUN_1461de5f2();
  *local_240 = 0;
  FUN_140056680(param_1,local_248);
  if (local_230 == '\x01') {
    FUN_1400020a8(local_248);
  }
  if (local_290 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461de5f2 FUN_1461de5f2 body=187 status=ok
// SIG undefined FUN_1461de5f2(void)

void FUN_1461de5f2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_3;
  local_50 = param_3[1];
  iVar1 = *(int *)(param_2 + 1);
  local_28 = local_58;
  uStack_20 = local_50;
  if (iVar1 == 1) {
    local_38 = (undefined2 *)*param_1;
    iStack_30 = *(int *)(param_1 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1401905f7(&local_38,*(undefined2 *)*param_2);
  }
  else if (iVar1 == 0) {
    local_28 = *param_1;
    uStack_20 = param_1[1];
    FUN_1427929e8(&local_58,param_4);
  }
  else {
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_48 = *(undefined4 *)param_1;
    uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_40 = *(undefined4 *)(param_1 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_38 = (undefined2 *)*param_2;
    iStack_30 = iVar1;
    FUN_14163c445();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461de6ae FUN_1461de6ae body=199 status=ok
// SIG undefined FUN_1461de6ae(void)

void FUN_1461de6ae(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14163cc85();
  uVar2 = FUN_14001cc68(0x60,0x10);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14a57e110;
  local_40 = FUN_1477efd98;
  local_68[0] = &DAT_1477efdb8;
  FUN_1458d078e(uVar2,local_68,&DAT_14c99e43c,1);
  if (local_68[0] != (undefined *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461de776 FUN_1461de776 body=12 status=ok
// SIG undefined FUN_1461de776(void)

void FUN_1461de776(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001461de77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1461de782 FUN_1461de782 body=36 status=ok
// SIG undefined FUN_1461de782(void)

undefined8 FUN_1461de782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1461de7a6 FUN_1461de7a6 body=219 status=ok
// SIG undefined FUN_1461de7a6(void)

void FUN_1461de7a6(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  void **local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  local_50 = (int)param_6[1];
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_6;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_60 = &local_58;
  local_68 = param_5;
  FUN_1461de882(param_1,param_2,param_3,param_4);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461de882 FUN_1461de882 body=400 status=ok
// SIG undefined FUN_1461de882(void)

void FUN_1461de882(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  void **local_70;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  plVar6 = (longlong *)(ulonglong)uVar1;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 + 1;
  uVar4 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar4 < 1) {
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
  }
  else {
    local_68 = 0;
    do {
      lVar8 = uVar4 * 0x10 + -8;
      uVar7 = param_2;
      uVar9 = uVar4;
      while ((param_2 = uVar7, *(int *)(*param_1 + lVar8) != 0 &&
             (plVar5 = *(longlong **)(*param_1 + -8 + lVar8), plVar5 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_6[1];
        lVar10 = (longlong)local_50;
        _Src = (void *)*param_6;
        if (lVar10 == 0) {
          local_4c = 0;
        }
        else {
          local_64 = (uint)uVar7;
          local_60 = param_3;
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar10 * 2);
          uVar7 = (ulonglong)local_64;
          param_3 = local_60;
        }
        local_70 = &local_58;
        local_78 = param_5;
        param_2 = uVar7 & 0xffffffff;
        cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar7,param_3,param_4);
        plVar6 = plVar5;
        if (cVar3 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar2 = uVar9 < 2;
        uVar7 = param_2;
        uVar9 = uVar9 - 1;
        if (bVar2) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_68 & 1) == 0) goto LAB_1461de976;
          goto LAB_1461de9c3;
        }
      }
      uVar4 = uVar9 - 1;
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      local_68 = (uint)plVar6;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1461de9c3:
    FUN_14474d06a(param_1,0);
  }
LAB_1461de976:
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dea14 FUN_1461dea14 body=38 status=ok
// SIG undefined FUN_1461dea14(void)

undefined8 FUN_1461dea14(undefined8 param_1,int param_2)

{
  FUN_14163d542();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461dea3a FUN_1461dea3a body=40 status=ok
// SIG undefined FUN_1461dea3a(void)

undefined8 FUN_1461dea3a(undefined8 param_1,int param_2)

{
  FUN_14163d78a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461dea62 FUN_1461dea62 body=503 status=ok
// SIG undefined FUN_1461dea62(void)

longlong * FUN_1461dea62(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar4 == 0) {
LAB_1461debf2:
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar5 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_1461debf2;
  lVar5 = FUN_1404281d6(lVar4);
  if (lVar5 != 0) {
    lVar6 = FUN_144a7a5f4();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_1461deafe;
  }
  lVar5 = 0;
LAB_1461deafe:
  uVar3 = FUN_145898580(param_1,lVar5);
  local_50 = (code *)CONCAT71(local_50._1_7_,uVar3);
  local_40 = param_3[1];
  local_38 = (longlong *)param_3[2];
  if (local_38 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    plVar7 = local_38;
  }
  local_58 = (longlong *)FUN_1461dec5a(&local_40,&local_50);
  local_60 = local_58 + 2;
  FUN_1461ded70();
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
  local_50 = FUN_14589852a;
  local_48 = 0;
  FUN_1461dee12(&local_40,&local_60);
  FUN_14100c9d8(lVar4 + 0x6170,&local_50,&local_40);
  FUN_1449db362(&local_40);
  plVar7 = local_58;
  *param_2 = (longlong)local_60;
  param_2[1] = (longlong)local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 1461dec5a FUN_1461dec5a body=149 status=ok
// SIG undefined FUN_1461dec5a(void)

undefined8 * FUN_1461dec5a(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99f6e0;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1461decf0(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461decf0 FUN_1461decf0 body=128 status=ok
// SIG undefined FUN_1461decf0(void)

undefined8 * FUN_1461decf0(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99f720;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99f700;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1461ded70 FUN_1461ded70 body=162 status=ok
// SIG undefined FUN_1461ded70(void)

void FUN_1461ded70(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461dedaf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461dedaf;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461dedaf:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461dee0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461dee12 FUN_1461dee12 body=300 status=ok
// SIG undefined FUN_1461dee12(void)

longlong * FUN_1461dee12(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f740;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4aa9f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99f740;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1461def3e FUN_1461def3e body=261 status=ok
// SIG undefined FUN_1461def3e(void)

void FUN_1461def3e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  plVar3 = (longlong *)FUN_14001cc68(0x58,0x10);
  FUN_1461df0e6(plVar3,&local_50,param_2);
  plVar1 = plVar3 + 2;
  local_48 = plVar1;
  local_40 = plVar3;
  FUN_1461df044(&local_48,plVar1);
  local_38 = plVar1;
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1449db362(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461df044 FUN_1461df044 body=162 status=ok
// SIG undefined FUN_1461df044(void)

void FUN_1461df044(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461df083;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461df083;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461df083:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461df0e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461df0e6 FUN_1461df0e6 body=198 status=ok
// SIG undefined FUN_1461df0e6(void)

undefined8 * FUN_1461df0e6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b98c780;
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_3);
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = &PTR_FUN_14b98c7a0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14114e6dc(param_1 + 8,&local_38);
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461df1d6 FUN_1461df1d6 body=234 status=ok
// SIG undefined FUN_1461df1d6(void)

bool FUN_1461df1d6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_58,0);
    lVar5 = local_58;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
    local_58 = 0;
    local_50 = 0;
    FUN_14594ec66(&local_58,param_1 + 8);
    local_68 = &local_58;
    (*pcVar2)(iVar1 + lVar4,param_2,param_3,param_4);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461df2c2 FUN_1461df2c2 body=47 status=ok
// SIG undefined FUN_1461df2c2(void)

void FUN_1461df2c2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb938b8);
                    /* WARNING: Could not recover jumptable at 0x0001461df2ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1461df2f2 FUN_1461df2f2 body=510 status=ok
// SIG undefined FUN_1461df2f2(void)

void FUN_1461df2f2(PSRWLOCK param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  PVOID pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  AcquireSRWLockShared(param_1);
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_1461df4f2(param_1 + 1,uVar3,param_2);
  uVar7 = local_78;
  if (iVar4 != -1) {
    pvVar5 = (PVOID)((longlong)iVar4 * 0x70 + (longlong)param_1[1].Ptr);
    if (((longlong *)((longlong)pvVar5 + 0x10) != (longlong *)0x0 && pvVar5 != (PVOID)0x0) &&
       (*(longlong *)((longlong)pvVar5 + 0x10) == *(longlong *)(param_3 + 2))) {
      plVar8 = (longlong *)((longlong)pvVar5 + 0x18);
      local_48 = (longlong)pvVar5 + 0x28;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      local_38 = 0;
      if (*(int *)((longlong)pvVar5 + 0x40) != 0) {
        FUN_1449c0562(&local_50);
      }
      local_88 = local_50;
      local_80 = local_48;
      local_78 = local_40;
      uVar7 = local_78;
      local_70 = local_38;
      local_6c = local_34;
      local_58 = 0;
      local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      local_90 = plVar8;
      local_68 = plVar8;
      local_60 = plVar8;
      if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar7;
        do {
          local_a8 = *param_3;
          uStack_a4 = param_3[1];
          uStack_a0 = param_3[2];
          uStack_9c = param_3[3];
          lVar6 = (longlong)iVar4 * 0x60 + *local_90;
          pcVar1 = *(code **)(lVar6 + 0x10);
          plVar8 = *(longlong **)(lVar6 + 0x20);
          if (*(longlong **)(lVar6 + 0x20) == (longlong *)0x0) {
            plVar8 = (longlong *)(lVar6 + 0x30);
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar2 = (*pcVar1)(uVar7,&local_a8);
          if (cVar2 == '\0') {
            FUN_146fe1e64(local_68,local_78._4_4_);
            local_58 = CONCAT11(local_58._1_1_,1);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
        } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
        uVar7 = local_78;
        if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
          FUN_146fe1c5c(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
          uVar7 = local_78;
        }
      }
    }
  }
  local_78 = uVar7;
  ReleaseSRWLockShared(param_1);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461df4f2 FUN_1461df4f2 body=115 status=ok
// SIG undefined FUN_1461df4f2(void)

int FUN_1461df4f2(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x70;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x68);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1461df57e FUN_1461df57e body=290 status=ok
// SIG undefined FUN_1461df57e(void)

void FUN_1461df57e(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  if (param_2 <= *(ulonglong *)(param_2 + 0x18)) {
    *(int *)(*param_3 + lVar6 * 4) = (int)*(ulonglong *)(param_2 + 0x18) - (int)param_2;
  }
  uVar2 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar4 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *(short *)(param_1 + 2)) goto LAB_1461df5e2;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1461df5e2:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + 4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *(short *)(param_1 + 4)) goto LAB_1461df636;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1461df636:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + 8 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *(short *)(param_1 + 6)) goto LAB_1461df67b;
      puVar1 = puVar1 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1461df67b:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar4 + 0xc + lVar6 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1461df6a0 FUN_1461df6a0 body=91 status=ok
// SIG undefined FUN_1461df6a0(void)

void FUN_1461df6a0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 4) != 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 & 0xfb;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  FUN_1461df6fc(param_1 + 0x58);
  return;
}



// FUNCTION 1461df6fc FUN_1461df6fc body=221 status=ok
// SIG undefined FUN_1461df6fc(void)

void FUN_1461df6fc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] << 5;
    do {
      local_89 = 0;
      local_78 = 0;
      local_68 = &PTR_LAB_14b42bff0;
      local_88[0] = FUN_143e3a2b0;
      local_60 = param_1;
      local_58 = &local_89;
      local_50 = lVar1;
      (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))(*(longlong **)(lVar1 + 0x10),local_88);
      if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
        FUN_140457ffc(*(longlong *)(lVar1 + 0x10) + 0x18,lVar1);
      }
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  FUN_140ac2d12(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461df7da FUN_1461df7da body=89 status=ok
// SIG undefined FUN_1461df7da(void)

int FUN_1461df7da(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    iVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar4 * 8);
      iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
      iVar3 = iVar3 + iVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x18));
  }
  return iVar3;
}



// FUNCTION 1461df83e FUN_1461df83e body=617 status=ok
// SIG undefined FUN_1461df83e(void)

undefined8 * FUN_1461df83e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_30,L"NewReflectionComponent",1);
  uVar2 = FUN_14596e9ae();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_145a0b3ec(param_1,param_2);
  *param_1 = &PTR_FUN_14a70c7e0;
  lVar1 = param_1[0x72];
  FUN_144a62f0c(lVar1,*(undefined8 *)(lVar1 + 0x38),7);
  *(undefined8 *)(lVar1 + 0x1c8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x1d0) = 0x408f400000000000;
  *(undefined8 *)(lVar1 + 0x1d8) = 0x408f400000000000;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x39] = lVar1;
  FUN_1446f470e(&local_38,L"DrawRadius0",1);
  uVar2 = FUN_145898c84();
  local_50 = 0;
  local_58 = 1;
  plVar3 = (longlong *)FUN_14048696c(param_1,local_38,uVar2,uVar2);
  FUN_140486fc4(plVar3,param_1[0x72],0);
  *(byte *)((longlong)plVar3 + 0x62c) = *(byte *)((longlong)plVar3 + 0x62c) | 1;
  *(byte *)(plVar3 + 0x3f) = *(byte *)(plVar3 + 0x3f) | 0x10;
  FUN_144a62f0c(plVar3,plVar3[7],10);
  *(byte *)((longlong)plVar3 + 0x2de) = *(byte *)((longlong)plVar3 + 0x2de) | 0x10;
  (**(code **)(*plVar3 + 0x728))(plVar3,DAT_14cad0f30,1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  *(longlong **)(lVar1 + 0x318) = plVar3;
  FUN_1446f470e(&local_40,L"DrawBox1",1);
  uVar2 = FUN_14088b378();
  local_50 = 0;
  local_58 = 1;
  plVar3 = (longlong *)FUN_14048696c(param_1,local_40,uVar2,uVar2);
  FUN_140486fc4(plVar3,param_1[0x72],0);
  *(byte *)((longlong)plVar3 + 0x62c) = *(byte *)((longlong)plVar3 + 0x62c) | 1;
  *(byte *)((longlong)plVar3 + 0x2de) = *(byte *)((longlong)plVar3 + 0x2de) | 0x10;
  (**(code **)(*plVar3 + 0x728))(plVar3,DAT_14cad0f30,1);
  *(undefined4 *)(plVar3 + 0xc5) = 0xff645a28;
  plVar3[200] = 0x3ff0000000000000;
  plVar3[0xc9] = 0x3ff0000000000000;
  plVar3[0xca] = 0x3ff0000000000000;
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  *(longlong **)(lVar1 + 800) = plVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dfaa8 FUN_1461dfaa8 body=169 status=ok
// SIG undefined FUN_1461dfaa8(void)

bool FUN_1461dfaa8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dfb52 FUN_1461dfb52 body=145 status=ok
// SIG undefined FUN_1461dfb52(void)

void FUN_1461dfb52(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1403ca102(param_1);
    }
    if (lVar2 == param_2) {
      lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,lVar1,1);
      if (lVar1 == 0) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = (float)*(double *)(lVar1 + 0x6d0);
      }
      *(float *)(param_1 + 0xef4) = fVar3;
      if ((*(char *)(param_1 + 0x518) == '\0') &&
         (*(undefined1 *)(param_1 + 0x518) = 1, *(char *)(param_1 + 0x178) != '\x03')) {
        FUN_1486e051e(param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461dfbe4 FUN_1461dfbe4 body=9 status=ok
// SIG undefined FUN_1461dfbe4(void)

void FUN_1461dfbe4(longlong param_1)

{
  FUN_1461dfbee(param_1 + 0x10);
  return;
}



// FUNCTION 1461dfbee FUN_1461dfbee body=178 status=ok
// SIG undefined FUN_1461dfbee(void)

void FUN_1461dfbee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c1900;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_1461dfcd5(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1461dfca0(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461dfc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461dfca0 FUN_1461dfca0 body=53 status=ok
// SIG undefined FUN_1461dfca0(void)

void FUN_1461dfca0(longlong *param_1)

{
  FUN_1461dfd0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461dfcd5 FUN_1461dfcd5 body=55 status=ok
// SIG undefined FUN_1461dfcd5(void)

void FUN_1461dfcd5(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1461dfd0c FUN_1461dfd0c body=335 status=ok
// SIG undefined FUN_1461dfd0c(void)

void FUN_1461dfd0c(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x40 + 0x28)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461dfe5c FUN_1461dfe5c body=68 status=ok
// SIG undefined FUN_1461dfe5c(void)

void FUN_1461dfe5c(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x318);
  memset(_Dst,0,0x318);
  FUN_14163e816(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1461dfea8 FUN_1461dfea8 body=623 status=ok
// SIG undefined FUN_1461dfea8(void)

undefined8 * FUN_1461dfea8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400841f8();
  puVar4 = (undefined8 *)FUN_14494321d(8);
  *puVar4 = &PTR_FUN_14a1561b0;
  param_1[6] = puVar4;
  memset(param_1 + 7,0,0x7f0);
  *param_1 = &PTR_FUN_14a152750;
  param_1[5] = &PTR_FUN_14a1529f0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 2;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x110] = 2;
  *(undefined1 *)(param_1 + 0x111) = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_1461dff61;
  lVar5 = FUN_145c635e4();
  local_40 = FUN_14705fc64;
  local_38 = 0;
  FUN_14705dea4(lVar5 + 0x900,local_30,param_1,&local_40);
  local_40 = FUN_14705e05c;
  local_38 = 0;
  FUN_14705df80(lVar5 + 0x918,local_30,param_1,&local_40);
  FUN_14704f774(&local_40,lVar5);
  plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar3 == (longlong *)0x0) {
    param_1[0x109] = local_40;
    plVar6 = (longlong *)param_1[0x10a];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x10a] = 0;
LAB_1461e00dc:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001461e00c9:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[0x109] = local_40;
    plVar6 = (longlong *)param_1[0x10a];
    if (plVar3 == plVar6) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar3;
        goto joined_r0x0001461e00c9;
      }
    }
    else {
      param_1[0x10a] = plVar3;
      if (plVar6 != (longlong *)0x0) goto LAB_1461e00dc;
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_40 = FUN_14705e342;
  local_38 = 0;
  FUN_14705e266(param_1[0x109] + 0x90,local_30,param_1,&local_40);
  local_40 = FUN_14705e39c;
  local_38 = 0;
  FUN_14705e266(param_1[0x109] + 0xa8,local_30,param_1,&local_40);
LAB_1461dff61:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e0118 FUN_1461e0118 body=9 status=ok
// SIG undefined FUN_1461e0118(void)

void FUN_1461e0118(longlong param_1)

{
  FUN_1461e0122(param_1 + 0x10);
  return;
}



// FUNCTION 1461e0122 FUN_1461e0122 body=176 status=ok
// SIG undefined FUN_1461e0122(void)

void FUN_1461e0122(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c1e00;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_1461e0207(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1461e01d2(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461e01ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461e01d2 FUN_1461e01d2 body=53 status=ok
// SIG undefined FUN_1461e01d2(void)

void FUN_1461e01d2(longlong *param_1)

{
  FUN_1461e023e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461e0207 FUN_1461e0207 body=55 status=ok
// SIG undefined FUN_1461e0207(void)

void FUN_1461e0207(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1461e023e FUN_1461e023e body=339 status=ok
// SIG undefined FUN_1461e023e(void)

void FUN_1461e023e(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x50 + 0x30)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461e0392 FUN_1461e0392 body=891 status=ok
// SIG undefined FUN_1461e0392(void)

double * FUN_1461e0392(longlong param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double dVar12;
  double *pdVar13;
  double dVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)(param_1 + 0x16f8);
  if (cVar1 == '\0') {
    iVar15 = (int)param_1 + 0x16d4;
    dVar12 = (double)FUN_14479d2ce();
    if (dVar12 == 0.0) goto LAB_1461e03da;
    lVar2 = *(longlong *)((longlong)dVar12 + 0x1c8);
    if (lVar2 == 0) {
      local_48 = DAT_14c846508;
      uStack_50 = (undefined4)DAT_14c846500;
      uStack_4c = DAT_14c846500._4_4_;
    }
    else {
      dVar17 = *(double *)(lVar2 + 0x240);
      dVar18 = *(double *)(lVar2 + 0x248);
      dVar19 = *(double *)(lVar2 + 0x250);
      dVar7 = *(double *)(lVar2 + 600);
      pdVar13 = *(double **)(lVar2 + 0x228);
      local_78 = dVar17;
      uStack_70 = dVar18;
      local_68 = dVar19;
      dStack_60 = dVar7;
      if (pdVar13 == (double *)0x0) {
        iVar15 = 0x40;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar12;
        dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar13[5] = dVar12;
        dVar12 = DAT_14c846508;
        pdVar13[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar13;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar18 != pdVar13[1]);
      auVar3._0_8_ = -(ulonglong)(dVar17 != *pdVar13);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar18 != pdVar13[1]) >> 0x20);
      iVar11 = movmskpd(SUB84(dVar12,0),auVar3);
      auVar5._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
      auVar5._0_8_ = -(ulonglong)(dVar19 != pdVar13[2]);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
      uVar16 = movmskpd(iVar15,auVar5);
      if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
        pdVar13[2] = local_68;
        pdVar13[3] = dStack_60;
        *(undefined4 *)pdVar13 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar13 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar13[6] = local_48;
        pdVar13[4] = local_58;
        pdVar13[5] = (double)CONCAT44(uStack_4c,uStack_50);
      }
      local_48 = pdVar13[6];
      uStack_50 = *(undefined4 *)(pdVar13 + 5);
      uStack_4c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') goto LAB_1461e03da;
      lVar2 = *(longlong *)(param_1 + 0x1c8);
      if (lVar2 == 0) {
        pdVar13 = (double *)&DAT_14c8464e0;
        dVar12 = DAT_14c8464f0;
      }
      else {
        pdVar13 = (double *)(lVar2 + 0x260);
        dVar12 = *(double *)(lVar2 + 0x270);
      }
      dVar12 = *(double *)(param_1 + 0x16f0) - dVar12;
      dVar17 = *(double *)(param_1 + 0x16e8) - pdVar13[1];
      dVar18 = *(double *)(param_1 + 0x16e0) - *pdVar13;
      *param_2 = dVar18;
      param_2[1] = dVar17;
      param_2[2] = dVar12;
      dVar19 = dVar12 * dVar12 + dVar18 * dVar18 + dVar17 * dVar17;
      if (9.99999993922529e-09 < dVar19) {
        dVar19 = 1.0 / SQRT(dVar19);
        *param_2 = dVar18 * dVar19;
        param_2[1] = dVar17 * dVar19;
        param_2[2] = dVar12 * dVar19;
      }
      goto LAB_1461e0494;
    }
    iVar15 = (int)param_1 + 0x1704;
    dVar12 = (double)FUN_14479d2ce();
    if (dVar12 == 0.0) {
LAB_1461e03da:
      param_2[2] = DAT_14c8462e8;
      uVar10 = DAT_14c8462e0._4_4_;
      uVar9 = (undefined4)DAT_14c8462e0;
      uVar8 = DAT_14c8462d8._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8462d8;
      *(undefined4 *)((longlong)param_2 + 4) = uVar8;
      *(undefined4 *)(param_2 + 1) = uVar9;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
    }
    dVar17 = *(double *)((longlong)dVar12 + 0x240);
    dVar18 = *(double *)((longlong)dVar12 + 0x248);
    dVar19 = *(double *)((longlong)dVar12 + 0x250);
    dVar7 = *(double *)((longlong)dVar12 + 600);
    pdVar13 = *(double **)((longlong)dVar12 + 0x228);
    dVar14 = dVar12;
    local_78 = dVar17;
    uStack_70 = dVar18;
    local_68 = dVar19;
    dStack_60 = dVar7;
    if (pdVar13 == (double *)0x0) {
      iVar15 = 0x40;
      pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
      dVar14 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar14;
      dVar14 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar14;
      dVar14 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar13[5] = dVar14;
      dVar14 = DAT_14c846508;
      pdVar13[6] = DAT_14c846508;
      *(double **)((longlong)dVar12 + 0x228) = pdVar13;
    }
    auVar4._8_4_ = (int)-(ulonglong)(dVar18 != pdVar13[1]);
    auVar4._0_8_ = -(ulonglong)(dVar17 != *pdVar13);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar18 != pdVar13[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar14,0),auVar4);
    auVar6._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
    auVar6._0_8_ = -(ulonglong)(dVar19 != pdVar13[2]);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
    uVar16 = movmskpd(iVar15,auVar6);
    if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
      pdVar13[2] = local_68;
      pdVar13[3] = dStack_60;
      *(undefined4 *)pdVar13 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar13 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_70._4_4_;
      FUN_1448052ee(&local_78,&local_58);
      pdVar13[6] = local_48;
      pdVar13[4] = local_58;
      pdVar13[5] = (double)CONCAT44(uStack_4c,uStack_50);
    }
    local_48 = pdVar13[6];
    uStack_50 = *(undefined4 *)(pdVar13 + 5);
    uStack_4c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
  }
  local_58 = 0.0;
  FUN_144a76660(&local_58,param_2);
LAB_1461e0494:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e071a FUN_1461e071a body=623 status=ok
// SIG undefined FUN_1461e071a(void)

undefined8 * FUN_1461e071a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_30,L"NewReflectionComponent",1);
  uVar2 = FUN_14596e7d6();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_145a0b3ec(param_1,param_2);
  *param_1 = &PTR_FUN_14a5d68c0;
  lVar1 = param_1[0x72];
  FUN_144a62f0c(lVar1,*(undefined8 *)(lVar1 + 0x38),7);
  *(undefined8 *)(lVar1 + 0x1c8) = 0x408f400000000000;
  *(undefined8 *)(lVar1 + 0x1d0) = 0x408f400000000000;
  *(undefined8 *)(lVar1 + 0x1d8) = 0x4079000000000000;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x39] = lVar1;
  FUN_1446f470e(&local_38,L"DrawBox0",1);
  uVar2 = FUN_14088b378();
  local_50 = 0;
  local_58 = 1;
  plVar3 = (longlong *)FUN_14048696c(param_1,local_38,uVar2,uVar2);
  FUN_140486fc4(plVar3,param_1[0x72],0);
  *(byte *)((longlong)plVar3 + 0x62c) = *(byte *)((longlong)plVar3 + 0x62c) | 1;
  *(byte *)((longlong)plVar3 + 0x2de) = *(byte *)((longlong)plVar3 + 0x2de) | 0x10;
  (**(code **)(*plVar3 + 0x728))(plVar3,DAT_14cad0f30,1);
  plVar3[200] = 0x3ff0000000000000;
  plVar3[0xc9] = 0x3ff0000000000000;
  plVar3[0xca] = 0x3ff0000000000000;
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  *(longlong **)(lVar1 + 0x318) = plVar3;
  FUN_1446f470e(&local_40,L"DrawBox1",1);
  uVar2 = FUN_14088b378();
  local_50 = 0;
  local_58 = 1;
  plVar3 = (longlong *)FUN_14048696c(param_1,local_40,uVar2,uVar2);
  FUN_140486fc4(plVar3,param_1[0x72],0);
  *(byte *)((longlong)plVar3 + 0x62c) = *(byte *)((longlong)plVar3 + 0x62c) | 1;
  *(byte *)((longlong)plVar3 + 0x2de) = *(byte *)((longlong)plVar3 + 0x2de) | 0x10;
  (**(code **)(*plVar3 + 0x728))(plVar3,DAT_14cad0f30,1);
  *(undefined4 *)(plVar3 + 0xc5) = 0xff645a28;
  plVar3[200] = 0x3ff0000000000000;
  plVar3[0xc9] = 0x3ff0000000000000;
  plVar3[0xca] = 0x3ff0000000000000;
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar3);
  }
  *(longlong **)(lVar1 + 800) = plVar3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e098a FUN_1461e098a body=627 status=ok
// SIG undefined FUN_1461e098a(void)

void FUN_1461e098a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458b3d9a();
  lVar5 = *(longlong *)(param_1 + 0x210);
  if (lVar5 != 0) {
    FUN_141085fe4(param_1,&local_48);
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_1461e0bfe(lVar5,&DAT_14cbd2980,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar4 = (int *)((longlong)plVar2 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x210);
    FUN_141085fe4(param_1,&local_48);
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      local_38 = local_48 + 0x168;
      if (local_48 == 0) {
        local_38 = local_48;
      }
      local_30 = local_40;
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_1461e0bfe(uVar6,&DAT_14cbd29a8,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar4 = (int *)((longlong)plVar2 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar4 = (int *)((longlong)local_40 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e0bfe FUN_1461e0bfe body=211 status=ok
// SIG undefined FUN_1461e0bfe(void)

bool FUN_1461e0bfe(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar6 = (longlong *)FUN_1461e0cd8(param_1 + 0x28,*param_2,param_2);
  lVar3 = plVar6[2];
  if (lVar3 != 0) goto LAB_1461e0c6d;
  lVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    plVar6[2] = lVar4;
    plVar7 = (longlong *)plVar6[3];
    if (plVar7 != (longlong *)0x0) {
      plVar6[3] = 0;
LAB_1461e0c94:
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001461e0cc1:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar6[2] = lVar4;
    plVar7 = (longlong *)plVar6[3];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
        goto joined_r0x0001461e0cc1;
      }
    }
    else {
      plVar6[3] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_1461e0c94;
    }
  }
  if (((longlong *)*plVar6 != (longlong *)0x0) &&
     (plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar6 + 0x18))(), plVar6 != (longlong *)0x0))
  {
    (**(code **)(*plVar6 + 0x10))(plVar6,param_3);
  }
LAB_1461e0c6d:
  return lVar3 == 0;
}



// FUNCTION 1461e0cd8 FUN_1461e0cd8 body=190 status=ok
// SIG undefined FUN_1461e0cd8(void)

longlong FUN_1461e0cd8(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x50;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x50) == *param_3) {
          if (lVar3 != 0) goto LAB_1461e0d47;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x48);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14898d438(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x50 + *param_1;
LAB_1461e0d47:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x28;
}



// FUNCTION 1461e0d98 FUN_1461e0d98 body=553 status=ok
// SIG undefined FUN_1461e0d98(void)

bool FUN_1461e0d98(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) goto LAB_1461e0ebe;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar4;
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1461e0f15:
      LOCK();
      plVar5 = plVar9 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar8 = *piVar2;
        UNLOCK();
joined_r0x0001461e0f4e:
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar4;
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == plVar9) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar8 = *piVar2;
        UNLOCK();
        plVar9 = plVar5;
        goto joined_r0x0001461e0f4e;
      }
    }
    else {
      *(longlong **)(param_1 + 0x10) = plVar5;
      if (plVar9 != (longlong *)0x0) goto LAB_1461e0f15;
    }
  }
  local_78 = 0;
  local_68 = &PTR_LAB_14b42bf00;
  local_88 = &LAB_14898d7ba;
  local_60 = param_1 + -0x68;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_1 + -0x38);
  plVar5 = (longlong *)*param_2;
  plStack_90 = *(longlong **)(param_1 + -0x58);
  if (plStack_90 == (longlong *)0x0) {
LAB_1461e0eed:
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar8 = (int)plStack_90[1];
    do {
      if (iVar8 == 0) goto LAB_1461e0eed;
      LOCK();
      iVar7 = (int)plStack_90[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plStack_90 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar6 = *(longlong *)(param_1 + -0x60);
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
    local_98 = lVar6 + 0x68;
    if (lVar6 == 0) {
      local_98 = 0;
    }
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar9 = plStack_90;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1 + -0x38,&local_98);
  plVar5 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar5 = plVar9 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1461e0ebe:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar3 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e0fc2 FUN_1461e0fc2 body=151 status=ok
// SIG undefined FUN_1461e0fc2(void)

void FUN_1461e0fc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461e105a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e105a FUN_1461e105a body=7 status=ok
// SIG undefined FUN_1461e105a(void)

void FUN_1461e105a(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x16c) = param_2;
  return;
}



// FUNCTION 1461e1062 FUN_1461e1062 body=38 status=ok
// SIG undefined FUN_1461e1062(void)

undefined8 FUN_1461e1062(undefined8 param_1,int param_2)

{
  FUN_1461e1088();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461e1088 FUN_1461e1088 body=121 status=ok
// SIG undefined FUN_1461e1088(void)

void FUN_1461e1088(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a8dd0;
  plVar3 = (longlong *)param_1[0xb];
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
  *param_1 = &PTR_FUN_14b411430;
  plVar3 = (longlong *)param_1[8];
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
                    /* WARNING: Could not recover jumptable at 0x0001461e10fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461e1102 FUN_1461e1102 body=179 status=ok
// SIG undefined FUN_1461e1102(void)

bool FUN_1461e1102(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 1461e11b6 FUN_1461e11b6 body=155 status=ok
// SIG undefined FUN_1461e11b6(void)

void FUN_1461e11b6(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (param_4 != 0)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_144a2f878();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        plVar2 = (longlong *)FUN_140e8d764(param_1);
        lVar1 = *plVar2;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
        *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
        FUN_1461e1252(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001461e1241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x58));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461e1252 FUN_1461e1252 body=300 status=ok
// SIG undefined FUN_1461e1252(void)

void FUN_1461e1252(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_1[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_1;
  if ((iStack_44 != iVar4) || (uStack_50 != plVar1)) {
    do {
      lVar2 = *local_80 + (longlong)iStack_64 * 0x28;
      iVar3 = *(int *)(lVar2 + 0x14);
      FUN_140989cc7(*(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10));
      *(undefined4 *)(lVar2 + 0x10) = 0;
      if ((iVar3 < 0) && (*(int *)(lVar2 + 0x14) != 0)) {
        FUN_140989f18((undefined8 *)(lVar2 + 8),0);
      }
      *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e1380 FUN_1461e1380 body=99 status=ok
// SIG undefined FUN_1461e1380(void)

void FUN_1461e1380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001461e13df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001461e13c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1461e1420 FUN_1461e1420 body=116 status=ok
// SIG undefined FUN_1461e1420(void)

void FUN_1461e1420(longlong *param_1,int param_2)

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
  FUN_1461e1494((longlong)param_2 * 0x28 + *param_1);
  FUN_1461e14ea(param_1,param_2);
  return;
}



// FUNCTION 1461e1494 FUN_1461e1494 body=86 status=ok
// SIG undefined FUN_1461e1494(void)

void FUN_1461e1494(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145e06910(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001461e14e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461e14ea FUN_1461e14ea body=116 status=ok
// SIG undefined FUN_1461e14ea(void)

void FUN_1461e14ea(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1461e156a FUN_1461e156a body=625 status=ok
// SIG undefined FUN_1461e156a(void)

undefined8 * FUN_1461e156a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14596d9a8();
  *param_1 = &PTR_FUN_14abf9d60;
  param_1[5] = &PTR_FUN_14abfa080;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffff;
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) & 0xfe;
  FUN_145dc33e0(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_1400b22c2(&local_30,"Run EQS Query");
  if ((undefined8 **)(param_1 + 6) == &local_30) {
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_30;
    *(undefined4 *)(param_1 + 7) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_24;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14ac04970;
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
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14ac04780;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_1);
  puVar1[4] = FUN_14384b852;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_144a450dc(param_1 + 0x29,&local_30);
  FUN_1449db362(&local_30);
  plVar2 = (longlong *)FUN_1413f6fa8();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(lVar3 + 0xd3);
  local_38 = FUN_141235bf0();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_1446f470e(&local_40,L"EQSQueryBlackboardKey",1);
  FUN_1458b8c86(param_1 + 0x19,param_1,local_40,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e17e8 FUN_1461e17e8 body=626 status=ok
// SIG undefined FUN_1461e17e8(void)

undefined8 * FUN_1461e17e8(undefined8 *param_1)

{
  FUN_14120658e();
  *param_1 = &PTR_FUN_14b92bdb0;
  param_1[0x72] = &PTR_FUN_14b92c4c0;
  param_1[0x73] = &PTR_FUN_14b92c530;
  param_1[0x74] = &PTR_FUN_14b92c5a0;
  param_1[0x75] = &PTR_FUN_14b92c5d0;
  param_1[0x76] = &PTR_FUN_14b92c600;
  param_1[0x77] = &PTR_FUN_14b92c630;
  param_1[0x78] = &PTR_FUN_14b92c670;
  param_1[0x79] = &PTR_FUN_14b92c690;
  param_1[0x7a] = &PTR_FUN_14b92c6c0;
  param_1[0x7b] = &PTR_FUN_14b92c790;
  param_1[0x7c] = &PTR_FUN_14b92c7e0;
  param_1[0x7d] = &PTR_FUN_14b92c8a0;
  param_1[0x7e] = &PTR_FUN_14b92c8c0;
  param_1[0x7f] = &PTR_FUN_14b92c940;
  param_1[0x80] = &PTR_FUN_14b92c960;
  param_1[0x81] = &PTR_FUN_14b92c970;
  param_1[0x82] = &PTR_FUN_14b92c9b0;
  param_1[0x83] = &PTR_FUN_14b92ca20;
  param_1[0x84] = &PTR_FUN_14b92ca50;
  param_1[0x85] = &PTR_FUN_14b92caf0;
  param_1[0x86] = &PTR_FUN_14b92cb10;
  param_1[0x87] = &PTR_FUN_14b92cb30;
  param_1[0x2a7] = &PTR_FUN_14b92cb50;
  param_1[0x2a8] = &PTR_FUN_14b92cb90;
  param_1[0x2a9] = &PTR_FUN_14b92cbb0;
  param_1[0x2aa] = &PTR_FUN_14b92cc50;
  param_1[0x2ab] = &PTR_FUN_14b92cc80;
  param_1[0x30e] = &PTR_FUN_14b92cca0;
  param_1[0x30f] = &PTR_FUN_14b92cce0;
  param_1[0x310] = &PTR_FUN_14b92cd10;
  param_1[0x3a1] = &PTR_FUN_14b92cd30;
  param_1[0x3a2] = &PTR_FUN_14b92ce20;
  param_1[0x3a3] = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 1;
  param_1[0x3a9] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3aa] = 0x3f80000000000001;
  param_1[0x3ab] = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  param_1[0x3ad] = 0;
  *(undefined4 *)(param_1 + 0x3ae) = 0;
  param_1[0x3af] = 0;
  param_1[0x3b0] = 0;
  *(undefined4 *)(param_1 + 0x3b1) = 0x4fc71eb4;
  *(undefined8 *)((longlong)param_1 + 0x1d96) = 0;
  param_1[0x3b2] = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  *(undefined4 *)(param_1 + 0x3b7) = 0xbf800000;
  param_1[0x3b8] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3ba] = 0;
  return param_1;
}



// FUNCTION 1461e1a5a FUN_1461e1a5a body=3116 status=ok
// SIG undefined FUN_1461e1a5a(void)

void FUN_1461e1a5a(longlong *param_1,undefined8 param_2,undefined4 *param_3,char param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_1[0x10] != 0) {
    if (((param_1[0x1d] != 0) && ((int)param_1[0x1e] - 1U < 0xfffffffe)) &&
       (lVar5 = (**(code **)(*param_1 + 0x180))(param_1),
       (double)(*(float *)(param_1 + 0x66) + *(float *)(param_1[0x10] + 0x2d0)) <
       *(double *)(lVar5 + 0x6d0))) {
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      *(float *)(param_1 + 0x66) = (float)*(double *)(lVar5 + 0x6d0);
      lVar5 = param_1[0x30];
      if (lVar5 == 0) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar5 = param_1[4];
        }
        else {
          lVar5 = 0;
        }
      }
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1407f7f84(&local_158,uVar6);
      if (uStack_150 != (longlong *)0x0) {
        iVar10 = (int)uStack_150[1];
        do {
          if (iVar10 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar11 = (int)uStack_150[1];
          bVar13 = iVar10 == iVar11;
          if (bVar13) {
            *(int *)(uStack_150 + 1) = iVar10 + 1;
            iVar11 = iVar10;
          }
          iVar10 = iVar11;
          UNLOCK();
          plVar12 = uStack_150;
        } while (!bVar13);
        LOCK();
        piVar2 = (int *)((longlong)uStack_150 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*uStack_150 + 0x10))();
        }
        lVar8 = local_158;
        if (plVar12 != (longlong *)0x0) {
          if (local_158 != 0) {
            local_128 = 0;
            uStack_120 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = (longlong *)0x0;
            local_118 = 0xc0;
            local_108 = 0;
            local_f8 = 0;
            local_c8 = 0;
            local_b8 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0x3ff0000000000000;
            local_68 = 0x3ff0000000000000;
            local_60 = 0x3ff0000000000000;
            local_58 = 0;
            local_50 = 0;
            local_54 = (undefined4)param_1[0x4e];
            local_190 = param_1[0x1d];
            FUN_1446dcdd4(&local_188);
            if (((DAT_14cb78ff0 != 0) &&
                (lVar9 = FUN_144837462(DAT_14cb78ff0,&local_188), lVar5 != 0)) && (lVar9 != 0)) {
              local_198 = 0;
              local_1a8 = 0;
              local_1a0 = &local_158;
              FUN_1408f2522(lVar8,lVar9,lVar5,param_2);
            }
            if (local_170 != 0) {
              FUN_1400020a8();
            }
            FUN_141466e9a(&local_158);
          }
          LOCK();
          plVar1 = plVar12 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
      }
    }
    lVar5 = param_1[0x10];
    if ((*(byte *)(lVar5 + 0x34c) & 1) != 0) {
      iVar11 = (int)param_1[0xd6];
      iVar10 = *(int *)((longlong)param_1 + 0x6b4);
      if (param_4 == '\0') {
        if (iVar11 < iVar10 || iVar10 == 0) {
          local_178 = *(undefined8 *)(param_3 + 4);
          local_188 = *param_3;
          uStack_184 = param_3[1];
          uStack_180 = param_3[2];
          uStack_17c = param_3[3];
          if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
            lVar8 = (longlong)*(int *)(lVar5 + 0x48) * 0x28;
            plVar12 = (longlong *)(*(longlong *)(lVar5 + 0x40) + 8);
            do {
              plVar1 = plVar12 + -1;
              plVar7 = (longlong *)FUN_14479d2ce(plVar1);
              if (plVar7 == (longlong *)0x0) {
                if (*plVar12 != 0) {
                  plVar7 = (longlong *)FUN_140007850();
                  cVar4 = (*(code *)PTR_FUN_14c758760)();
                  if ((plVar7 == (longlong *)0x0) || (cVar4 == '\0')) {
                    FUN_14485c47a(plVar1,plVar7);
                    if (plVar7 == (longlong *)0x0) goto LAB_1461e1d71;
                  }
                  else {
                    uVar3 = *(uint *)((longlong)plVar7 + 0xc);
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar5 = 0;
                    }
                    if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                      FUN_14485c47a(plVar1,plVar7);
                    }
                  }
                  if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1461e1d4c;
                }
              }
              else {
LAB_1461e1d4c:
                lVar5 = FUN_144a797b2();
                if ((((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) && (lVar5 = FUN_145a557f0(), lVar5 != 0)) &&
                   ((*(int *)(lVar5 + 0x38) <= (int)plVar7[7] &&
                    (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30
                    )))) {
                  lVar5 = plVar7[0x22];
                  if (lVar5 == 0) {
                    (**(code **)(*plVar7 + 1000))(plVar7);
                    lVar5 = plVar7[0x22];
                    if (lVar5 == 0) goto LAB_1461e1d71;
                  }
                  uVar6 = *(undefined8 *)(lVar5 + 0x28);
                  *(longlong **)(lVar5 + 0x28) = param_1;
                  local_148 = local_178;
                  local_158 = CONCAT44(uStack_184,local_188);
                  uStack_150 = (longlong *)CONCAT44(uStack_17c,uStack_180);
                  FUN_14876f8ae(lVar5,param_1,param_2,&local_158);
                  *(undefined8 *)(lVar5 + 0x28) = uVar6;
                }
              }
LAB_1461e1d71:
              plVar12 = plVar12 + 5;
              lVar8 = lVar8 + -0x28;
            } while (lVar8 != 0);
          }
        }
      }
      else {
        if (iVar11 < iVar10) {
          iVar11 = iVar11 + 1;
          *(int *)(param_1 + 0xd6) = iVar11;
          local_178 = *(undefined8 *)(param_3 + 4);
          local_188 = *param_3;
          uStack_184 = param_3[1];
          uStack_180 = param_3[2];
          uStack_17c = param_3[3];
          if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
            lVar8 = (longlong)*(int *)(lVar5 + 0x48) * 0x28;
            plVar12 = (longlong *)(*(longlong *)(lVar5 + 0x40) + 8);
            do {
              plVar1 = plVar12 + -1;
              plVar7 = (longlong *)FUN_14479d2ce(plVar1);
              if (plVar7 == (longlong *)0x0) {
                if (*plVar12 != 0) {
                  plVar7 = (longlong *)FUN_140007850();
                  cVar4 = (*(code *)PTR_FUN_14c758760)();
                  if ((plVar7 == (longlong *)0x0) || (cVar4 == '\0')) {
                    FUN_14485c47a(plVar1,plVar7);
                    if (plVar7 == (longlong *)0x0) goto LAB_1461e2047;
                  }
                  else {
                    uVar3 = *(uint *)((longlong)plVar7 + 0xc);
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar5 = 0;
                    }
                    if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                      FUN_14485c47a(plVar1,plVar7);
                    }
                  }
                  if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1461e2023;
                }
              }
              else {
LAB_1461e2023:
                lVar5 = FUN_144a797b2();
                if ((((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) && (lVar5 = FUN_145a557f0(), lVar5 != 0)) &&
                   ((*(int *)(lVar5 + 0x38) <= (int)plVar7[7] &&
                    (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30
                    )))) {
                  lVar5 = plVar7[0x22];
                  if (lVar5 == 0) {
                    (**(code **)(*plVar7 + 1000))(plVar7);
                    lVar5 = plVar7[0x22];
                    if (lVar5 == 0) goto LAB_1461e2047;
                  }
                  uVar6 = *(undefined8 *)(lVar5 + 0x28);
                  *(longlong **)(lVar5 + 0x28) = param_1;
                  local_148 = local_178;
                  local_158 = CONCAT44(uStack_184,local_188);
                  uStack_150 = (longlong *)CONCAT44(uStack_17c,uStack_180);
                  FUN_14876f5f6(lVar5,param_1,param_2);
                  *(undefined8 *)(lVar5 + 0x28) = uVar6;
                }
              }
LAB_1461e2047:
              plVar12 = plVar12 + 5;
              lVar8 = lVar8 + -0x28;
            } while (lVar8 != 0);
            iVar11 = (int)param_1[0xd6];
            iVar10 = *(int *)((longlong)param_1 + 0x6b4);
          }
          if (iVar11 == iVar10) {
            *(byte *)((longlong)param_1 + 0x102) = *(byte *)((longlong)param_1 + 0x102) & 0x7f;
            lVar5 = param_1[0x10];
            if ((*(byte *)(lVar5 + 0x358) & 1) != 0) {
              *param_5 = 1;
              lVar5 = param_1[0x10];
            }
            if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
              lVar8 = (longlong)*(int *)(lVar5 + 0x48) * 0x28;
              plVar12 = (longlong *)(*(longlong *)(lVar5 + 0x40) + 8);
              do {
                plVar1 = plVar12 + -1;
                plVar7 = (longlong *)FUN_14479d2ce(plVar1);
                if (plVar7 == (longlong *)0x0) {
                  if (*plVar12 != 0) {
                    plVar7 = (longlong *)FUN_140007850();
                    cVar4 = (*(code *)PTR_FUN_14c758760)();
                    if ((plVar7 == (longlong *)0x0) || (cVar4 == '\0')) {
                      FUN_14485c47a(plVar1,plVar7);
                      if (plVar7 == (longlong *)0x0) goto LAB_1461e2188;
                    }
                    else {
                      uVar3 = *(uint *)((longlong)plVar7 + 0xc);
                      if ((int)uVar3 < DAT_14c9647dc) {
                        lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                      }
                      else {
                        lVar5 = 0;
                      }
                      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                        FUN_14485c47a(plVar1,plVar7);
                      }
                    }
                    if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1461e2164;
                  }
                }
                else {
LAB_1461e2164:
                  lVar5 = FUN_144a797b2();
                  if ((((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                        lVar5 + 0x30)) && (lVar5 = FUN_145a557f0(), lVar5 != 0)) &&
                     ((*(int *)(lVar5 + 0x38) <= (int)plVar7[7] &&
                      (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                       lVar5 + 0x30)))) {
                    lVar5 = plVar7[0x22];
                    if (lVar5 == 0) {
                      (**(code **)(*plVar7 + 1000))(plVar7);
                      lVar5 = plVar7[0x22];
                      if (lVar5 == 0) goto LAB_1461e2188;
                    }
                    uVar6 = *(undefined8 *)(lVar5 + 0x28);
                    *(longlong **)(lVar5 + 0x28) = param_1;
                    FUN_14876f7d2(lVar5,param_1,param_2);
                    *(undefined8 *)(lVar5 + 0x28) = uVar6;
                  }
                }
LAB_1461e2188:
                plVar12 = plVar12 + 5;
                lVar8 = lVar8 + -0x28;
              } while (lVar8 != 0);
              lVar5 = param_1[0x10];
            }
            if ((*(byte *)(lVar5 + 0x358) & 2) != 0) {
              FUN_14163f334(param_1,0,1);
            }
          }
        }
        else if (iVar10 == 0) {
          local_178 = *(undefined8 *)(param_3 + 4);
          local_188 = *param_3;
          uStack_184 = param_3[1];
          uStack_180 = param_3[2];
          uStack_17c = param_3[3];
          if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
            lVar8 = (longlong)*(int *)(lVar5 + 0x48) * 0x28;
            plVar12 = (longlong *)(*(longlong *)(lVar5 + 0x40) + 8);
            do {
              plVar1 = plVar12 + -1;
              plVar7 = (longlong *)FUN_14479d2ce(plVar1);
              if (plVar7 == (longlong *)0x0) {
                if (*plVar12 != 0) {
                  plVar7 = (longlong *)FUN_140007850();
                  cVar4 = (*(code *)PTR_FUN_14c758760)();
                  if ((plVar7 == (longlong *)0x0) || (cVar4 == '\0')) {
                    FUN_14485c47a(plVar1,plVar7);
                    if (plVar7 == (longlong *)0x0) goto LAB_1461e1ef2;
                  }
                  else {
                    uVar3 = *(uint *)((longlong)plVar7 + 0xc);
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar5 = 0;
                    }
                    if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                      FUN_14485c47a(plVar1,plVar7);
                    }
                  }
                  if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1461e1ecd;
                }
              }
              else {
LAB_1461e1ecd:
                lVar5 = FUN_144a797b2();
                if ((((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) && (lVar5 = FUN_145a557f0(), lVar5 != 0)) &&
                   ((*(int *)(lVar5 + 0x38) <= (int)plVar7[7] &&
                    (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30
                    )))) {
                  lVar5 = plVar7[0x22];
                  if (lVar5 == 0) {
                    (**(code **)(*plVar7 + 1000))(plVar7);
                    lVar5 = plVar7[0x22];
                    if (lVar5 == 0) goto LAB_1461e1ef2;
                  }
                  uVar6 = *(undefined8 *)(lVar5 + 0x28);
                  *(longlong **)(lVar5 + 0x28) = param_1;
                  local_148 = local_178;
                  local_158 = CONCAT44(uStack_184,local_188);
                  uStack_150 = (longlong *)CONCAT44(uStack_17c,uStack_180);
                  FUN_14876f5f6(lVar5,param_1,param_2,&local_158);
                  *(undefined8 *)(lVar5 + 0x28) = uVar6;
                }
              }
LAB_1461e1ef2:
              plVar12 = plVar12 + 5;
              lVar8 = lVar8 + -0x28;
            } while (lVar8 != 0);
          }
        }
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((longlong)param_1 + 0x324);
      }
    }
    if ((param_1[0xf1] != 0) && ((DAT_14cb26569 & 1) != 0)) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar5 = param_1[4];
      }
      else {
        lVar5 = 0;
      }
      if (*(longlong *)(lVar5 + 0x540) != 0) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar5 = param_1[4];
        }
        else {
          lVar5 = 0;
        }
        uVar6 = *(undefined8 *)(lVar5 + 0x540);
        FUN_140056680(&local_158,L"OnBounce");
        FUN_14028d5f4(uVar6,param_1,param_1[0xf1],&local_158);
        if (local_158 != 0) {
          FUN_1400020a8();
        }
      }
    }
    local_178 = *(undefined8 *)(param_3 + 4);
    local_188 = *param_3;
    uStack_184 = param_3[1];
    uStack_180 = param_3[2];
    uStack_17c = param_3[3];
    lVar5 = (longlong)*(int *)(param_1[0x10] + 0x48);
    if (lVar5 != 0) {
      lVar5 = lVar5 * 0x28;
      plVar12 = (longlong *)(*(longlong *)(param_1[0x10] + 0x40) + 8);
      do {
        plVar1 = plVar12 + -1;
        plVar7 = (longlong *)FUN_14479d2ce(plVar1);
        if (plVar7 == (longlong *)0x0) {
          if (*plVar12 != 0) {
            plVar7 = (longlong *)FUN_140007850();
            cVar4 = (*(code *)PTR_FUN_14c758760)();
            if ((plVar7 == (longlong *)0x0) || (cVar4 == '\0')) {
              FUN_14485c47a(plVar1,plVar7);
              if (plVar7 == (longlong *)0x0) goto LAB_1461e20e6;
            }
            else {
              uVar3 = *(uint *)((longlong)plVar7 + 0xc);
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(plVar1,plVar7);
              }
            }
            if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1461e20c2;
          }
        }
        else {
LAB_1461e20c2:
          lVar8 = FUN_144a797b2();
          if ((((*(int *)(lVar8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) && (lVar8 = FUN_145a557f0(), lVar8 != 0)) &&
             ((*(int *)(lVar8 + 0x38) <= (int)plVar7[7] &&
              (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)))) {
            lVar8 = plVar7[0x22];
            if (lVar8 == 0) {
              (**(code **)(*plVar7 + 1000))(plVar7);
              lVar8 = plVar7[0x22];
              if (lVar8 == 0) goto LAB_1461e20e6;
            }
            uVar6 = *(undefined8 *)(lVar8 + 0x28);
            *(longlong **)(lVar8 + 0x28) = param_1;
            local_148 = local_178;
            local_158 = CONCAT44(uStack_184,local_188);
            uStack_150 = (longlong *)CONCAT44(uStack_17c,uStack_180);
            FUN_14876f406(lVar8,param_1,param_2);
            *(undefined8 *)(lVar8 + 0x28) = uVar6;
          }
        }
LAB_1461e20e6:
        plVar12 = plVar12 + 5;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461e2688 FUN_1461e2688 body=201 status=ok
// SIG undefined FUN_1461e2688(void)

undefined8 * FUN_1461e2688(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  lVar4 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar1 + lVar4);
    uVar6 = (ulonglong)uVar5;
    uVar7 = *(ushort *)((longlong)L"StatelessConnectHandlerComponent" + lVar4);
    if (uVar5 != uVar7) break;
    if (uVar5 == 0) goto LAB_1461e26f5;
LAB_1461e26c9:
    lVar4 = lVar4 + 2;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1461e26c9;
  }
  if (uVar5 != uVar7) {
    uVar2 = 0;
    puVar3 = (undefined8 *)0x0;
    goto LAB_1461e273a;
  }
LAB_1461e26f5:
  uVar2 = FUN_14001cc68(0x170,0x10);
  FUN_14163f4ca(uVar2);
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14a9fccf0;
  puVar3[2] = uVar2;
LAB_1461e273a:
  *param_2 = uVar2;
  param_2[1] = puVar3;
  return param_2;
}



// FUNCTION 1461e2752 FUN_1461e2752 body=45 status=ok
// SIG undefined FUN_1461e2752(void)

longlong FUN_1461e2752(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1461e2780(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461e2780 FUN_1461e2780 body=534 status=ok
// SIG undefined FUN_1461e2780(void)

void FUN_1461e2780(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_LAB_14aa95320;
  param_1[1] = &PTR_FUN_14aa95340;
  param_1[3] = &PTR_FUN_14aa95530;
  param_1[0x19] = &PTR_FUN_14aa95560;
  param_1[7] = 0;
  FUN_14163ff7c(param_1 + 1,1,0,0,2);
  FUN_14080c2b4();
  if (DAT_14c98e618 != 0) {
    FUN_140457ffc(*(longlong *)(DAT_14c98e618 + 0x20) + 0x30,param_1);
    FUN_140457ffc(*(longlong *)(DAT_14c98e618 + 0x20) + 0x48,param_1);
    FUN_140457ffc(*(longlong *)(DAT_14c98e618 + 0x20) + 0x60,param_1);
  }
  if (*(char *)(param_1 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  if (param_1[0x5c] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[0x5c] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1461e29ae(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_1461e29ae(param_1[0x58],*(undefined4 *)(param_1 + 0x59));
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x51);
  plVar5 = (longlong *)param_1[0x4c];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = (longlong *)param_1[0x4a];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = (longlong *)param_1[0x48];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e8f2e(param_1 + 0x31);
  FUN_14493db24(param_1 + 0x1a);
  FUN_1461e2a1a(param_1 + 1);
  return;
}



// FUNCTION 1461e29ae FUN_1461e29ae body=69 status=ok
// SIG undefined FUN_1461e29ae(void)

void FUN_1461e29ae(longlong param_1,int param_2)

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



// FUNCTION 1461e29f4 FUN_1461e29f4 body=38 status=ok
// SIG undefined FUN_1461e29f4(void)

undefined8 FUN_1461e29f4(undefined8 param_1,int param_2)

{
  FUN_14163f904();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461e2a1a FUN_1461e2a1a body=180 status=ok
// SIG undefined FUN_1461e2a1a(void)

void FUN_1461e2a1a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_14aaddc20;
  param_1[2] = &PTR_LAB_14aadde10;
  if (param_1[0x12] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x12] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1461e2ace(param_1 + 7);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1 + 2);
  *param_1 = &PTR_LAB_14aadd7d0;
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1461e2ace FUN_1461e2ace body=186 status=ok
// SIG undefined FUN_1461e2ace(void)

void FUN_1461e2ace(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aaddfe8;
  param_1[1] = &PTR_FUN_14aaddff0;
  param_1[3] = &PTR_FUN_14aade070;
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14477c0e3(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 3);
  param_1[1] = &PTR_LAB_14aadd7d0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1461e2b88 FUN_1461e2b88 body=103 status=ok
// SIG undefined FUN_1461e2b88(void)

ulonglong FUN_1461e2b88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461e2bd2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461e2bd2;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461e2bf0 FUN_1461e2bf0 body=404 status=ok
// SIG undefined FUN_1461e2bf0(void)

void FUN_1461e2bf0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461e2d86(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e2d86 FUN_1461e2d86 body=1521 status=ok
// SIG undefined FUN_1461e2d86(void)

void FUN_1461e2d86(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [40];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  longlong *local_1a8 [2];
  undefined1 local_198 [16];
  longlong *local_188 [2];
  wchar_t *local_178;
  longlong *local_170;
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  undefined1 local_f0 [8];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  wchar_t *local_90;
  longlong *local_88;
  undefined4 local_80 [4];
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = param_3;
  if (param_2 != 0) {
    lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar5 != 0) {
      lVar5 = FUN_1448e494c(lVar5,param_2);
      cVar4 = FUN_14490d20c(lVar5,param_3,param_4);
      if ((cVar4 == '\0') && (*(char *)(lVar5 + 0x28) == '\0')) {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_145715fae(&local_90,&local_98);
        local_80[0] = 4;
        FUN_14023423e(&local_70,&local_90);
        FUN_140056680(&local_b8,L"ParamName");
        FUN_140233eec(&local_a8,&local_b8,local_80);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*local_70 + 0x10))();
          local_70 = (longlong *)0x0;
          local_68 = 0;
        }
        if (local_90 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_90 + 0x10))();
        }
        FUN_1446ddc76(local_f0,&DAT_14a492018,1);
        FUN_14276766e(local_80,local_f0);
        FUN_144a5dc74(local_100);
        FUN_1427679d4(local_80,&local_e8,local_100);
        local_90 = L"SetScalarParamOn";
        local_88._0_4_ = 0x10;
        FUN_1446e940c(local_134,&local_90);
        local_90 = L"KismetMaterialLibrary";
        local_88._0_4_ = 0x15;
        FUN_1446e940c(local_138,&local_90);
        FUN_140208bae(local_130,local_138,local_134,L"SetScalarParameterValue called on");
        FUN_1467eb2e4(&local_120,local_130,1);
        local_110 = local_120;
        local_108 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_e8,&local_d8,&local_110);
        FUN_144a5dc74(local_168);
        FUN_1468756a4(&local_158,param_2,local_168);
        local_148 = local_158;
        local_140 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_d8,&local_b8,&local_148);
        local_90 = L"WithInvalidParam";
        local_88._0_4_ = 0x10;
        FUN_1446e940c(local_1ac,&local_90);
        local_90 = L"KismetMaterialLibrary";
        local_88 = (longlong *)CONCAT44(local_88._4_4_,0x15);
        FUN_1446e940c(local_1b0,&local_90);
        FUN_140208bae(local_1a8,local_1b0,local_1ac,
                      L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                     );
        FUN_14023409e(local_198,local_1a8,1);
        FUN_140233c04(local_188,local_198,&local_a8);
        FUN_1467eb2e4(&local_178,local_188,1);
        local_90 = local_178;
        local_88 = local_170;
        if (local_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_170 + 1) = (int)local_170[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_b8,local_c8,&local_90);
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
            }
          }
        }
        plVar1 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_88 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_170 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar2 = (int *)((longlong)local_170 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_170 + 0x10))(local_170);
            }
          }
        }
        if (local_188[0] != (longlong *)0x0) {
          (**(code **)(*local_188[0] + 0x10))();
        }
        if (local_1a8[0] != (longlong *)0x0) {
          (**(code **)(*local_1a8[0] + 0x10))();
        }
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)local_b0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
            }
          }
        }
        plVar1 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_140 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_150 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar2 = (int *)((longlong)local_150 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_150 + 0x10))(local_150);
            }
          }
        }
        if (local_168[0] != (longlong *)0x0) {
          (**(code **)(*local_168[0] + 0x10))();
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        plVar1 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_108 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_118 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_118 + 0x10))(local_118);
            }
          }
        }
        if (local_130[0] != (longlong *)0x0) {
          (**(code **)(*local_130[0] + 0x10))();
        }
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar2 = (int *)((longlong)local_e0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_e0 + 0x10))(local_e0);
            }
          }
        }
        if (local_100[0] != (longlong *)0x0) {
          (**(code **)(*local_100[0] + 0x10))();
        }
        FUN_1427678c0(local_80);
        *(undefined1 *)(lVar5 + 0x28) = 1;
        FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e3378 FUN_1461e3378 body=51 status=ok
// SIG undefined FUN_1461e3378(void)

void FUN_1461e3378(longlong *param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  for (puVar1 = (undefined8 *)param_1[6]; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[1]) {
    (**(code **)(*param_1 + 0x10))(param_1,*puVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}



// FUNCTION 1461e33b6 FUN_1461e33b6 body=633 status=ok
// SIG undefined FUN_1461e33b6(void)

undefined8 * FUN_1461e33b6(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b68cdd0;
  param_1[0x72] = &PTR_FUN_14b68d440;
  param_1[0x73] = &PTR_FUN_14b68d460;
  param_1[0x74] = &PTR_FUN_14b68d490;
  param_1[0x75] = &PTR_FUN_14b68d4a0;
  param_1[0x76] = &PTR_FUN_14b68d510;
  param_1[0x77] = &PTR_FUN_14b68d540;
  param_1[0x78] = &PTR_FUN_14b68d570;
  param_1[0x7f] = &PTR_FUN_14b68d620;
  param_1[0x80] = &PTR_FUN_14b68d690;
  param_1[0x81] = &PTR_FUN_14b68d700;
  param_1[0x82] = &PTR_FUN_14b68d730;
  param_1[0x83] = &PTR_FUN_14b68d770;
  param_1[0x84] = &PTR_FUN_14b68d810;
  param_1[0x85] = &PTR_FUN_14b68d830;
  param_1[0x89] = &PTR_FUN_14b68d850;
  param_1[0x8a] = &PTR_FUN_14b68d910;
  param_1[0x8b] = &PTR_FUN_14b68d990;
  param_1[0x8c] = &PTR_FUN_14b68d9e0;
  param_1[0x8d] = &PTR_FUN_14b68da20;
  param_1[0x8e] = &PTR_FUN_14b68da40;
  param_1[0x8f] = &PTR_FUN_14b68da60;
  param_1[0x90] = &PTR_FUN_14b68da80;
  param_1[0x91] = &PTR_FUN_14b68daa0;
  param_1[0x92] = &PTR_FUN_14b68dac0;
  param_1[0x93] = &PTR_FUN_14b68dae0;
  param_1[0x94] = &PTR_FUN_14b68db00;
  param_1[0x95] = &PTR_FUN_14b68db20;
  param_1[0x96] = &PTR_FUN_14b68db40;
  param_1[0x34b] = &PTR_FUN_14b68db60;
  param_1[0x352] = &PTR_FUN_14b68db70;
  param_1[0x353] = &PTR_FUN_14b68dbb0;
  param_1[0x354] = &PTR_FUN_14b68dbf0;
  param_1[0x355] = &PTR_FUN_14b68dc40;
  param_1[0x356] = &PTR_FUN_14b68dc70;
  param_1[0x359] = &PTR_FUN_14b68dcb0;
  param_1[0x35a] = &PTR_FUN_14b68dcc0;
  param_1[0x35b] = &PTR_FUN_14b68dcf0;
  param_1[0x35c] = &PTR_FUN_14b68dd90;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  *(undefined4 *)(param_1 + 0x4c1) = 0xf00000d0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  *(undefined1 *)(param_1 + 0x4c4) = 1;
  param_1[0x4c9] = 0;
  param_1[0x4c5] = 0x407f400000000000;
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  return param_1;
}



// FUNCTION 1461e363a FUN_1461e363a body=1277 status=ok
// SIG undefined FUN_1461e363a(void)

undefined8 * FUN_1461e363a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_144a0768c();
  FUN_1409e1656(param_1 + 5);
  *param_1 = &PTR_FUN_14b6ebb10;
  param_1[5] = &PTR_FUN_14b6ebdb0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 1;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = &PTR_FUN_14b6fb670;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = &PTR_FUN_14b6fb670;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7c] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0xd7) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined4 *)(param_1 + 0xda) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined4 *)(param_1 + 0xdd) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0xe3) = 2;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 2;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x744) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xed] = puVar1;
  param_1[0xec] = puVar1;
  *(undefined1 *)((longlong)param_1 + 0x771) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  return param_1;
}



// FUNCTION 1461e3b42 FUN_1461e3b42 body=634 status=ok
// SIG undefined FUN_1461e3b42(void)

undefined8 * FUN_1461e3b42(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b5c09f0;
  param_1[0x72] = &PTR_FUN_14b5c1030;
  param_1[0x73] = &PTR_FUN_14b5c10a0;
  param_1[0x74] = &PTR_FUN_14b5c1110;
  param_1[0x75] = &PTR_FUN_14b5c1140;
  param_1[0x76] = &PTR_FUN_14b5c1170;
  param_1[0x77] = &PTR_FUN_14b5c11a0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined8 *)((longlong)param_1 + 0x52b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  FUN_1411c3dfa(param_1 + 0xaa);
  param_1[0xaa] = &PTR_FUN_14b5c4a70;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0;
  param_1[0xfc] = 2;
  FUN_1446f470e(&local_58,L"SceneComponent0",1);
  uVar1 = FUN_144a799b0();
  local_60 = 0;
  local_68 = 1;
  lVar2 = FUN_14048696c(param_1,local_58,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  FUN_141323f6e(param_1 + 0x78,param_2);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e3dbe FUN_1461e3dbe body=288 status=ok
// SIG undefined FUN_1461e3dbe(void)

void FUN_1461e3dbe(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457fc042();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar1 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe1a60);
  }
  if (*plVar1 == 0) {
    puVar2 = &DAT_14c9a12e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_140625092(*plVar1,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar2,&local_20,1);
  *(undefined8 *)(param_1 + 0x370) = local_20;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar1 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe1a68);
  }
  if (*plVar1 == 0) {
    puVar2 = &DAT_14c9a12e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_140625092(*plVar1,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar2,&local_20,1);
  *(undefined8 *)(param_1 + 0x378) = local_20;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1461e3ee0(*(longlong *)(param_1 + 0x288),param_1 + 0x160);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e3ee0 FUN_1461e3ee0 body=356 status=ok
// SIG undefined FUN_1461e3ee0(void)

void FUN_1461e3ee0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457fcffc();
  puVar4 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe2e50);
  pbVar1 = (byte *)*puVar4;
  puVar5 = &DAT_149e02088;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) {
    puVar5 = &DAT_149e02088;
    if (*(undefined1 **)(pbVar1 + 8) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(pbVar1 + 8);
    }
  }
  FUN_1400b22c2(&local_30,puVar5);
  if ((longlong *)(param_1 + 0x380) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x380) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x380) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x388) = local_28;
    *(undefined4 *)(param_1 + 0x38c) = local_24;
  }
  puVar6 = &DAT_14c9a1308;
  puVar4 = &DAT_14c9a1308;
  if (*param_2 != 0) {
    puVar4 = (undefined8 *)FUN_1408db3b0(*param_2,"virtual_cell_count");
  }
  uVar3 = FUN_140e1edd4(puVar4,0);
  *(undefined4 *)(param_1 + 0x3a4) = uVar3;
  if (*param_2 != 0) {
    puVar6 = (undefined8 *)FUN_1408db3b0(*param_2,"minimum_cell_count");
  }
  uVar3 = FUN_140e1edd4(puVar6,0);
  *(undefined4 *)(param_1 + 0x3b0) = uVar3;
  puVar2 = *(ushort **)(param_1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461e4046 FUN_1461e4046 body=816 status=ok
// SIG undefined FUN_1461e4046(void)

void FUN_1461e4046(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  pwVar9 = DAT_14cb97818;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (*(int *)((longlong)plVar8 + 0x5c4) == -1) {
    if ((char)plVar8[0xb7] == '\0') {
      lVar2 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
      if ((lVar2 != 0) && (lVar3 = FUN_14119d4d6(lVar2), lVar3 != 0)) {
        if (*(longlong *)(lVar2 + 0x30) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
        }
        lVar2 = FUN_14127aa70(uVar5,*(undefined4 *)(lVar3 + 0xe0));
        if (lVar2 != 0) {
          FUN_1461e4378(lVar2,&local_38);
          pwVar9 = local_38;
        }
      }
      local_38 = (wchar_t *)0x0;
      uStack_30 = 0;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      local_58 = 0;
      FUN_14063337c(&DAT_14c846b20,L"-ForceNetMode=",&local_38,1);
      FUN_140056680(&local_48,&DAT_14a9e5386);
      pwVar7 = local_48;
      pwVar6 = local_48;
      if (local_40 == 0) {
        pwVar6 = L"";
      }
      pwVar4 = L"";
      if ((int)uStack_30 != 0) {
        pwVar4 = local_38;
      }
      iVar1 = wcscmp(pwVar4,pwVar6);
      if (pwVar7 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar7);
      }
      pwVar7 = DAT_14cb97820;
      if (iVar1 != 0) {
        FUN_140056680(&local_48,L"Offline");
        pwVar7 = local_48;
        pwVar6 = local_48;
        if (local_40 == 0) {
          pwVar6 = L"";
        }
        pwVar4 = L"";
        if ((int)uStack_30 != 0) {
          pwVar4 = local_38;
        }
        iVar1 = wcscmp(pwVar4,pwVar6);
        if (pwVar7 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar7);
        }
        pwVar7 = DAT_14cb977f8;
        if (iVar1 != 0) {
          FUN_140056680(&local_48,L"OnlinePublic");
          pwVar7 = local_48;
          pwVar6 = local_48;
          if (local_40 == 0) {
            pwVar6 = L"";
          }
          pwVar4 = L"";
          if ((int)uStack_30 != 0) {
            pwVar4 = local_38;
          }
          iVar1 = wcscmp(pwVar4,pwVar6);
          if (pwVar7 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar7);
          }
          pwVar7 = DAT_14cb97828;
          if (iVar1 != 0) {
            FUN_140056680(&local_48,L"OnlineFriendsOnly");
            pwVar7 = local_48;
            pwVar6 = local_48;
            if (local_40 == 0) {
              pwVar6 = L"";
            }
            pwVar4 = L"";
            if ((int)uStack_30 != 0) {
              pwVar4 = local_38;
            }
            iVar1 = wcscmp(pwVar4,pwVar6);
            if (pwVar7 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar7);
            }
            pwVar7 = DAT_14cb97818;
            if (iVar1 != 0) {
              FUN_140056680(&local_48,L"OnlineInviteOnly");
              pwVar7 = local_48;
              if (local_40 == 0) {
                pwVar7 = L"";
              }
              pwVar6 = L"";
              if ((int)uStack_30 != 0) {
                pwVar6 = local_38;
              }
              iVar1 = wcscmp(pwVar6,pwVar7);
              if (local_48 != (wchar_t *)0x0) {
                FUN_1400020a8(local_48);
              }
              pwVar7 = pwVar9;
              if (iVar1 == 0) {
                pwVar7 = DAT_14cb97830;
              }
            }
          }
        }
      }
      lVar2 = *(longlong *)(param_1 + 0x20);
      *(wchar_t **)(lVar2 + 0x5b0) = pwVar7;
      *(undefined1 *)(lVar2 + 0x5b8) = 1;
      if (local_38 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    FUN_1416418a4(param_1,plVar8 + 0xb6);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461e4378 FUN_1461e4378 body=11 status=ok
// SIG undefined FUN_1461e4378(void)

undefined8 * FUN_1461e4378(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 1461e438e FUN_1461e438e body=636 status=ok
// SIG undefined FUN_1461e438e(void)

undefined8 * FUN_1461e438e(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ae736a();
  *param_1 = &PTR_FUN_14a4dabd0;
  param_1[0xd] = &PTR_LAB_14a4daeb0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1000;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_1413336e6();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_40 = FUN_1458f0824();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    FUN_140909372(&local_40,&local_38);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_50 = FUN_145957af6();
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_50);
    }
    FUN_140909372(&local_50,&local_48);
    local_58 = param_1[2];
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_60 = FUN_1458d4322();
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_60);
    }
    FUN_140909372(&local_60,&local_58);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e4614 FUN_1461e4614 body=584 status=ok
// SIG undefined FUN_1461e4614(void)

void FUN_1461e4614(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
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
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = iVar1 != 0;
  local_50 = local_48;
  FUN_1416420c4(local_28,local_30,local_31,iVar2 != 0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e4866 FUN_1461e4866 body=605 status=ok
// SIG undefined FUN_1461e4866(void)

undefined8 * FUN_1461e4866(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  longlong *local_88;
  longlong *local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_14001cc68(0xd0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b426e80;
  plVar6 = plVar4 + 2;
  memset(plVar6,0,0xc0);
  FUN_1461e4ac4(plVar6);
  lVar2 = *(longlong *)(param_3 + 0x18);
  plVar3 = *(longlong **)(param_3 + 0x20);
  local_88 = plVar6;
  local_80 = plVar4;
  if (plVar3 == (longlong *)0x0) {
    plVar4[0x17] = lVar2;
    plVar6 = (longlong *)plVar4[0x18];
    if (plVar6 == (longlong *)0x0) goto LAB_1461e4933;
    plVar4[0x18] = 0;
LAB_1461e4a26:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_1461e4933;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar4[0x17] = lVar2;
    plVar6 = (longlong *)plVar4[0x18];
    if (plVar3 == plVar6) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      plVar4[0x18] = (longlong)plVar3;
      if (plVar6 != (longlong *)0x0) goto LAB_1461e4a26;
    }
  }
  LOCK();
  plVar6 = plVar3 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1461e4933:
  if ((*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) == 0) ||
     (plVar6 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x90), plVar6 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 8))();
  }
  plVar6 = local_88;
  FUN_14485c47a(local_88 + 0x17,uVar5);
  local_98 = local_78;
  local_68 = 0;
  local_58 = &PTR_LAB_14b426f10;
  local_78[0] = &LAB_143e273b8;
  FUN_1461e4b34(param_1,param_1 + 0x60,param_3,&local_88);
  plVar3 = local_80;
  *param_2 = plVar6;
  param_2[1] = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_80 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_80)(local_80);
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
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461e4ac4 FUN_1461e4ac4 body=112 status=ok
// SIG undefined FUN_1461e4ac4(void)

void FUN_1461e4ac4(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_14b242840;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}



// FUNCTION 1461e4b34 FUN_1461e4b34 body=451 status=ok
// SIG undefined FUN_1461e4b34(void)

void FUN_1461e4b34(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0 [4];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = param_1;
  FUN_1461e4cf8(local_d0,param_4);
  local_b8 = *param_4 + 0x58;
  local_c0 = *(undefined8 *)(param_3 + 0x10);
  local_b0 = 0;
  local_a8 = 0;
  FUN_141368656(&local_b0,local_d0);
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1449db362(local_d0);
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    do {
      lVar6 = lVar8 * 0x50 + *param_2;
      local_d0[0] = (undefined4)lVar8;
      pcVar1 = (code *)*param_5;
      plVar4 = (longlong *)param_5[2];
      if ((longlong *)param_5[2] == (longlong *)0x0) {
        plVar4 = param_5 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      iVar2 = (*pcVar1)(uVar3,local_d0,lVar6);
      if (iVar2 != -1) {
        if ((longlong)*(int *)(local_d8 + 0x58) != 0) {
          lVar7 = *(longlong *)(local_d8 + 0x50);
          lVar5 = (longlong)*(int *)(local_d8 + 0x58) * 0x18;
          do {
            FUN_1413ebb2a(&local_c0,iVar2,lVar7);
            lVar7 = lVar7 + 0x18;
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != 0);
        }
        if ((longlong)*(int *)(lVar6 + 0x30) != 0) {
          lVar7 = *(longlong *)(lVar6 + 0x28);
          lVar6 = (longlong)*(int *)(lVar6 + 0x30) * 0x18;
          do {
            FUN_1413ebb2a(&local_c0,iVar2,lVar7);
            lVar7 = lVar7 + 0x18;
            lVar6 = lVar6 + -0x18;
          } while (lVar6 != 0);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[1]);
  }
  FUN_1413685a0(&local_c0);
  if (*param_5 != 0) {
    plVar4 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e4cf8 FUN_1461e4cf8 body=298 status=ok
// SIG undefined FUN_1461e4cf8(void)

longlong * FUN_1461e4cf8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b427140;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b426ea0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_143e26e1a;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b427140;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b426ea0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_143e26e1a;
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
  return param_1;
}



// FUNCTION 1461e4e22 FUN_1461e4e22 body=710 status=ok
// SIG undefined FUN_1461e4e22(void)

void FUN_1461e4e22(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  undefined1 *local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_a4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  local_158 = local_148;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_158 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_160 = iVar1 != 0;
  local_168 = local_44;
  FUN_1416424cc(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e50ea FUN_1461e50ea body=25 status=ok
// SIG undefined FUN_1461e50ea(void)

undefined8 FUN_1461e50ea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461e5104 FUN_1461e5104 body=518 status=ok
// SIG undefined FUN_1461e5104(void)

void FUN_1461e5104(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x230);
  if ((longlong)*(int *)(param_1 + 0x238) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    plVar7 = (longlong *)(lVar4 + 0x78);
    do {
      cVar1 = FUN_144729dda(plVar7 + -0xd);
      if (cVar1 != '\0') {
        uVar3 = FUN_14479d2ce(plVar7 + -0xd);
        local_60 = 0;
        local_58 = 0x6000;
        local_50 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        FUN_14148df3c(uVar3,0,&local_60,&DAT_14c8464e0);
      }
      cVar1 = FUN_144729dda(param_1 + 8);
      if ((cVar1 != '\0') && (*plVar7 != 0)) {
        lVar4 = FUN_14479d2ce(param_1 + 8);
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar5;
        lVar4 = FUN_144a61814(uVar3);
        if (lVar4 != 0) {
          FUN_1405a424c(uVar3);
        }
        *plVar7 = 0;
      }
      cVar1 = FUN_14144f426(param_1);
      if ((cVar1 == '\0') && (plVar7[-0xf] != 0)) {
        FUN_14144fcb6(plVar7[-0xf],&DAT_14cbd3e00,0);
      }
      plVar7 = plVar7 + 0x13;
      lVar8 = lVar8 + -0x98;
    } while (lVar8 != 0);
    uVar6 = *(undefined4 *)(param_1 + 0x238);
    lVar4 = *(longlong *)(param_1 + 0x230);
  }
  FUN_14164267b(lVar4,uVar6);
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_1461e530c(param_1 + 0x230);
  }
  if (param_2 != 0) {
    iVar2 = FUN_14490d72a(param_2);
    if (iVar2 != 3) {
      local_60 = param_2 + 0x230;
      local_58 = 0;
      FUN_1461e533c(&local_60);
      if (local_50 != 0) {
        do {
          FUN_145aa4abc(param_1);
          local_58 = local_58 + 1;
          FUN_1461e533c(&local_60);
        } while (local_50 != 0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e530c FUN_1461e530c body=48 status=ok
// SIG undefined FUN_1461e530c(void)

void FUN_1461e530c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 1461e533c FUN_1461e533c body=146 status=ok
// SIG undefined FUN_1461e533c(void)

void FUN_1461e533c(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    param_1[2] = 0;
    return;
  }
  if ((int)((longlong *)*param_1)[1] <= iVar1) goto LAB_1461e538a;
  lVar5 = (longlong)iVar1 * 8 + *(longlong *)*param_1;
  do {
    lVar5 = FUN_14479d2ce(lVar5);
    if (lVar5 == 0) {
LAB_1461e538a:
      lVar5 = 0;
    }
    else {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1461e538a;
    }
    uVar3 = *(uint *)(param_1 + 1);
    while( true ) {
      param_1[2] = lVar5;
      if ((int)uVar3 < 0) {
        return;
      }
      if (lVar5 != 0) {
        return;
      }
      plVar2 = (longlong *)*param_1;
      if ((int)plVar2[1] <= (int)uVar3) {
        return;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 1) = uVar3;
      if ((int)uVar3 < (int)plVar2[1]) break;
      lVar5 = 0;
    }
    lVar5 = (ulonglong)uVar3 * 8 + *plVar2;
  } while( true );
}



// FUNCTION 1461e53ce FUN_1461e53ce body=521 status=ok
// SIG undefined FUN_1461e53ce(void)

void FUN_1461e53ce(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    return;
  }
  plVar4 = (longlong *)FUN_141466a68();
  lVar6 = plVar4[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar6 = plVar4[0x22];
  }
  plVar4 = (longlong *)(lVar6 + 0x120);
  lVar12 = *(longlong *)(param_1 + 0x10);
  lVar5 = FUN_140fb37c4();
  if (lVar12 == lVar5) {
    uVar8 = (ulonglong)*(int *)(lVar6 + 0x128);
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x28);
    if (lVar12 == 0) {
      return;
    }
    uVar3 = *(uint *)(lVar6 + 0x128);
    uVar8 = (ulonglong)(int)uVar3;
    if ((longlong)uVar8 < 1) {
      uVar10 = 0xffffffff;
      uVar9 = 0xffffffff;
    }
    else {
      uVar11 = 0xffffffff;
      uVar7 = 0;
      uVar10 = 0xffffffff;
      do {
        lVar5 = *(longlong *)(*plVar4 + uVar7 * 8);
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) {
          if (lVar12 != lVar5) {
            iVar1 = *(int *)(lVar5 + 0x38);
            iVar2 = *(int *)(lVar12 + 0x38);
            if ((iVar2 < iVar1) ||
               (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar1 * 8) != lVar5 + 0x30))
            {
              if ((uVar10 == 0xffffffff) &&
                 ((uVar10 = 0xffffffff, iVar2 <= iVar1 &&
                  (uVar10 = 0xffffffff,
                  *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) == lVar12 + 0x30)
                  ))) {
                uVar10 = (uint)uVar7;
              }
              goto LAB_1461e5491;
            }
          }
          uVar11 = uVar7 & 0xffffffff;
        }
LAB_1461e5491:
        uVar9 = (uint)uVar11;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    if (((uVar10 & uVar9) != 0xffffffff) && (uVar9 != uVar3)) {
      if (uVar9 == 0xffffffff) {
        if (uVar10 == 0xffffffff) {
          return;
        }
        *(uint *)(lVar6 + 0x128) = uVar3 + 1;
        if (*(uint *)(lVar6 + 300) < uVar3 + 1) {
          FUN_1461e55d8(plVar4,uVar3);
        }
        lVar12 = (longlong)(int)uVar10;
        _Src = (void *)(*plVar4 + lVar12 * 8);
        lVar6 = *plVar4 + lVar12 * 8;
        lVar12 = lVar12 << 3;
      }
      else {
        uVar10 = uVar9 + 1;
        *(uint *)(lVar6 + 0x128) = uVar3 + 1;
        if (*(uint *)(lVar6 + 300) < uVar3 + 1) {
          FUN_1461e55d8(plVar4,uVar3);
        }
        lVar6 = (longlong)(int)uVar10;
        _Src = (void *)(*plVar4 + lVar6 * 8);
        lVar12 = lVar6 * 8;
        lVar6 = *plVar4 + lVar6 * 8;
      }
      memmove((void *)(lVar6 + 8),_Src,(ulonglong)(uVar3 - uVar10) << 3);
      plVar4 = (longlong *)(lVar12 + *plVar4);
      goto LAB_1461e5440;
    }
  }
  uVar3 = (int)uVar8 + 1;
  *(uint *)(lVar6 + 0x128) = uVar3;
  if (*(uint *)(lVar6 + 300) < uVar3) {
    FUN_1461e55d8(plVar4,uVar8 & 0xffffffff);
  }
  plVar4 = (longlong *)(uVar8 * 8 + *plVar4);
LAB_1461e5440:
  *plVar4 = param_1;
  return;
}



// FUNCTION 1461e55d8 FUN_1461e55d8 body=132 status=ok
// SIG undefined FUN_1461e55d8(void)

void FUN_1461e55d8(longlong param_1,int param_2)

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



// FUNCTION 1461e565c FUN_1461e565c body=9 status=ok
// SIG undefined FUN_1461e565c(void)

void FUN_1461e565c(longlong param_1)

{
  FUN_1461e5666(param_1 + 0x10);
  return;
}



// FUNCTION 1461e5666 FUN_1461e5666 body=178 status=ok
// SIG undefined FUN_1461e5666(void)

void FUN_1461e5666(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c66f0;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_1461e574d(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1461e5718(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461e5714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1461e5718 FUN_1461e5718 body=53 status=ok
// SIG undefined FUN_1461e5718(void)

void FUN_1461e5718(longlong *param_1)

{
  FUN_1461e5784();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461e574d FUN_1461e574d body=55 status=ok
// SIG undefined FUN_1461e574d(void)

void FUN_1461e574d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1461e5784 FUN_1461e5784 body=357 status=ok
// SIG undefined FUN_1461e5784(void)

void FUN_1461e5784(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x38 + 0x28)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461e58ea FUN_1461e58ea body=292 status=ok
// SIG undefined FUN_1461e58ea(void)

void FUN_1461e58ea(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60 [4];
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1461e5a10(puVar2,local_68);
  *param_3 = uVar1;
  FUN_144a2da94(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e5a10 FUN_1461e5a10 body=196 status=ok
// SIG undefined FUN_1461e5a10(void)

undefined4 FUN_1461e5a10(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  uVar2 = FUN_1405d5f74(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e5ad6 FUN_1461e5ad6 body=228 status=ok
// SIG undefined FUN_1461e5ad6(void)

longlong * FUN_1461e5ad6(longlong *param_1)

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
  pcVar13 = FUN_1485f71fe;
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
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461e5bbc FUN_1461e5bbc body=274 status=ok
// SIG undefined FUN_1461e5bbc(void)

void FUN_1461e5bbc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1461e5cd0(param_1,puVar3,local_30);
  FUN_140b4e72c(param_3,uVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e5cd0 FUN_1461e5cd0 body=52 status=ok
// SIG undefined FUN_1461e5cd0(void)

longlong FUN_1461e5cd0(longlong param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  
  if ((int)param_3 < 1) {
    *param_2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x17d8);
    *param_2 = (int)param_3 <= iVar1;
    if ((int)param_3 <= iVar1) {
      return *(longlong *)(param_1 + 0x17d0) + (ulonglong)param_3 * 0x78 + -0x78;
    }
  }
  return param_1 + 0x1620;
}



// FUNCTION 1461e5d0c FUN_1461e5d0c body=1791 status=ok
// SIG undefined FUN_1461e5d0c(void)

undefined8 * FUN_1461e5d0c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1406ee02c();
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *param_1 = &PTR_FUN_14afdef10;
  param_1[0x72] = &PTR_FUN_14afdf550;
  param_1[0x73] = &PTR_FUN_14afdf580;
  param_1[0x74] = &PTR_FUN_14afdf5b0;
  param_1[0x82] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x83) = 0xdfd4fbca;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x86] = 0x44160000;
  param_1[0x87] = 0x42b40000;
  param_1[0x88] = 0xc1f0000042b40000;
  param_1[0x89] = 0x43120000;
  *(undefined2 *)(param_1 + 0x8a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x452) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_1405e4918(param_1,0x3d088889);
  *(undefined4 *)(param_1 + 0x34) = 0x402ccccd;
  FUN_1446f470e(&local_48,L"Root",1);
  uVar1 = FUN_144a799b0();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_48,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  FUN_1446f470e(&local_50,L"SunDirectionalLightComponent",1);
  uVar1 = FUN_141331fc4();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_50,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x78] = lVar2;
  FUN_1446f470e(&local_58,L"MoonDirectionalLightComponent",1);
  uVar1 = FUN_141331fc4();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_58,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x79] = lVar2;
  FUN_1446f470e(&local_60,L"SkyLightComponent",1);
  uVar1 = FUN_141221a30();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_60,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7a] = lVar2;
  FUN_1446f470e(&local_68,L"SkyAtmosphereComponent",1);
  uVar1 = FUN_1415495a0();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_68,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7b] = lVar2;
  FUN_1446f470e(&local_70,L"VolumetricCloudComponent",1);
  uVar1 = FUN_14586b90e();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_70,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7c] = lVar2;
  FUN_1446f470e(&local_78,L"ExponentialHeightFogComponent",1);
  uVar1 = FUN_1415494ba();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_78,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7d] = lVar2;
  FUN_1446f470e(&local_80,L"PostProcessComponent",1);
  uVar1 = FUN_1458da770();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_80,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7e] = lVar2;
  FUN_1446f470e(&local_88,L"NiagaraCloudscapeComponent",1);
  uVar1 = FUN_1458c3a16();
  local_c0 = 0;
  local_c8 = 1;
  lVar2 = FUN_14048696c(param_1,local_88,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7f] = lVar2;
  FUN_140486fc4(param_1[0x78],param_1[0x39],0);
  FUN_140486fc4(param_1[0x79],param_1[0x39],0);
  *(undefined4 *)(param_1[0x78] + 0x46c) = 0;
  *(undefined4 *)(param_1[0x78] + 0x454) = 1;
  *(undefined4 *)(param_1[0x79] + 0x46c) = 1;
  *(undefined4 *)(param_1[0x79] + 0x454) = 0;
  *(undefined4 *)(param_1[0x7d] + 0x378) = 0;
  *(undefined4 *)(param_1[0x7d] + 0x37c) = 0;
  *(undefined1 *)(param_1[0x78] + 0x1fb) = 1;
  local_a0 = 0xc047000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = 0;
  FUN_14020f75c(param_1[0x78],&local_a0,0,0);
  *(undefined1 *)(param_1[0x79] + 0x1fb) = 1;
  local_b8 = 0xc047000000000000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c8 = 0;
  FUN_14020f75c(param_1[0x79],&local_b8,0,0);
  FUN_140486fc4(param_1[0x7a],param_1[0x39],0);
  FUN_140486fc4(param_1[0x7b],param_1[0x39],0);
  FUN_140486fc4(param_1[0x7c],param_1[0x39],0);
  FUN_140486fc4(param_1[0x7d],param_1[0x39],0);
  FUN_140486fc4(param_1[0x7e],param_1[0x39],0);
  FUN_140486fc4(param_1[0x7f],param_1[0x39],0);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xb9 | 6;
  *(undefined4 *)(param_1 + 0x9e) = 0x41700000;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e640c FUN_1461e640c body=156 status=ok
// SIG undefined FUN_1461e640c(void)

void FUN_1461e640c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1461e64aa(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e64aa FUN_1461e64aa body=7 status=ok
// SIG undefined FUN_1461e64aa(void)

void FUN_1461e64aa(undefined8 param_1)

{
  FUN_1414beecc(param_1,0);
  return;
}



// FUNCTION 1461e64b2 FUN_1461e64b2 body=8391 status=ok
// SIG undefined FUN_1461e64b2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461e64b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_4968 [32];
  undefined4 local_4948;
  undefined ***local_4940;
  undefined8 *local_4930;
  undefined8 local_4928;
  undefined8 local_4920;
  undefined8 local_4918;
  undefined8 local_4910;
  undefined8 local_4908;
  undefined **local_4900;
  undefined **local_48f8 [20];
  longlong *local_4858;
  undefined **local_4840;
  undefined **local_4838 [20];
  longlong *local_4798;
  undefined **local_4780;
  undefined **local_4778 [20];
  longlong *local_46d8;
  undefined **local_46c8 [20];
  longlong *local_4628;
  undefined **local_4618 [20];
  longlong *local_4578;
  undefined **local_4560;
  undefined **local_4558 [20];
  longlong *plStack_44b8;
  undefined **local_44a8 [20];
  longlong *local_4408;
  undefined **local_43f8 [20];
  longlong *local_4358;
  undefined **local_4340;
  undefined **local_4338 [20];
  longlong *plStack_4298;
  undefined **local_4280;
  undefined **local_4278 [20];
  longlong *local_41d8;
  undefined **local_41c8 [20];
  longlong *local_4128;
  undefined **local_4110;
  undefined **local_4108 [20];
  longlong *local_4068;
  undefined **local_4058 [20];
  longlong *local_3fb8;
  undefined **local_3fa0;
  undefined **local_3f98;
  undefined1 *puStack_3f90;
  longlong *local_3ef8;
  undefined8 local_3ee0;
  undefined8 local_3ed8;
  undefined8 local_3ed0;
  undefined8 local_3ec8;
  undefined8 local_3ec0;
  undefined8 local_3eb8;
  undefined8 local_3eb0;
  undefined8 local_3ea8;
  undefined8 local_3ea0;
  undefined **local_3e98;
  undefined1 *puStack_3e90;
  undefined1 local_3e88 [144];
  longlong *local_3df8;
  undefined1 local_3dd8 [176];
  undefined1 local_3d28 [176];
  undefined1 local_3c78 [176];
  undefined1 local_3bc8 [544];
  undefined1 local_39a8 [176];
  undefined1 local_38f8 [176];
  undefined1 local_3848 [176];
  undefined1 local_3798 [176];
  undefined4 local_36e8;
  undefined4 uStack_36e4;
  undefined4 uStack_36e0;
  undefined4 uStack_36dc;
  undefined4 local_36d8;
  undefined4 local_36d4;
  undefined4 uStack_36d0;
  undefined4 uStack_36cc;
  undefined4 uStack_36c8;
  undefined4 local_36c4;
  undefined1 local_36b8 [176];
  undefined1 local_3608 [176];
  undefined1 local_3558 [176];
  undefined1 local_34a8 [176];
  undefined1 local_33f8 [176];
  undefined **local_3348 [2];
  undefined1 local_3338 [16];
  undefined1 local_3328 [160];
  undefined1 local_3288 [176];
  undefined1 local_31d8 [176];
  undefined1 local_3128 [176];
  undefined8 local_3078;
  undefined8 uStack_3070;
  undefined4 local_3068;
  undefined8 local_3064;
  undefined8 uStack_305c;
  undefined4 local_3054;
  undefined8 local_3050;
  undefined8 uStack_3048;
  undefined4 local_3040;
  undefined8 local_303c;
  undefined8 uStack_3034;
  undefined4 local_302c;
  undefined8 local_3028;
  undefined8 uStack_3020;
  undefined4 local_3018;
  undefined4 uStack_3014;
  undefined4 uStack_3010;
  undefined4 uStack_300c;
  undefined **local_2fc8;
  undefined4 local_2fc0;
  undefined4 uStack_2fbc;
  undefined4 uStack_2fb8;
  undefined4 uStack_2fb4;
  undefined4 local_2fb0;
  undefined4 uStack_2fac;
  undefined4 uStack_2fa8;
  undefined4 uStack_2fa4;
  undefined4 local_2fa0;
  undefined4 uStack_2f9c;
  undefined4 uStack_2f98;
  undefined4 uStack_2f94;
  longlong local_2f90;
  undefined8 local_2f88 [10];
  undefined4 local_2f38;
  undefined1 local_2f34;
  undefined8 local_2f30;
  longlong local_2f28;
  undefined8 local_2f20;
  undefined **local_2f18;
  undefined8 uStack_2f10;
  undefined **local_2f08;
  undefined4 uStack_2f00;
  undefined4 uStack_2efc;
  undefined **local_2ef8;
  undefined4 local_2ef0;
  undefined4 uStack_2eec;
  undefined4 uStack_2ee8;
  undefined4 uStack_2ee4;
  undefined4 local_2ee0;
  undefined4 uStack_2edc;
  undefined4 uStack_2ed8;
  undefined4 uStack_2ed4;
  undefined4 local_2ed0;
  undefined4 uStack_2ecc;
  undefined4 uStack_2ec8;
  undefined4 uStack_2ec4;
  longlong local_2ec0;
  undefined8 local_2eb8 [10];
  undefined4 local_2e68;
  undefined1 local_2e64;
  undefined8 local_2e60;
  longlong local_2e58;
  undefined8 local_2e50;
  undefined8 local_2e48;
  undefined8 uStack_2e40;
  undefined8 local_2e38;
  undefined8 uStack_2e30;
  undefined4 local_2e28;
  undefined4 uStack_2e24;
  undefined4 uStack_2e20;
  undefined4 uStack_2e1c;
  undefined4 local_2e18;
  undefined4 uStack_2e14;
  undefined4 uStack_2e10;
  undefined4 uStack_2e0c;
  undefined1 local_2e08;
  undefined8 local_2dc8;
  undefined8 uStack_2dc0;
  undefined4 local_2db8;
  undefined4 uStack_2db4;
  undefined4 uStack_2db0;
  undefined4 uStack_2dac;
  undefined **local_27f8 [20];
  longlong *local_2758;
  undefined **local_2258 [2];
  undefined1 local_2248 [880];
  undefined **local_1ed8;
  undefined4 local_1ed0;
  undefined4 uStack_1ecc;
  undefined4 uStack_1ec8;
  undefined4 uStack_1ec4;
  undefined4 local_1ec0;
  undefined4 uStack_1ebc;
  undefined4 uStack_1eb8;
  undefined4 uStack_1eb4;
  undefined4 local_1eb0;
  undefined4 uStack_1eac;
  undefined4 uStack_1ea8;
  undefined4 uStack_1ea4;
  longlong local_1ea0;
  undefined8 local_1e98 [10];
  undefined4 local_1e48;
  undefined1 local_1e44;
  undefined8 local_1e40;
  longlong local_1e38;
  undefined8 local_1e30;
  undefined8 local_1e28;
  undefined8 uStack_1e20;
  undefined **local_1e18;
  undefined **local_1e08;
  undefined8 local_1e00;
  undefined8 uStack_1df8;
  undefined8 local_1df0;
  undefined8 uStack_1de8;
  undefined4 local_1de0;
  undefined4 uStack_1ddc;
  undefined4 uStack_1dd8;
  undefined4 uStack_1dd4;
  longlong local_1dd0;
  undefined8 local_1dc8 [10];
  undefined4 local_1d78;
  undefined1 local_1d74;
  undefined8 local_1d70;
  longlong local_1d68;
  undefined8 local_1d60;
  undefined4 local_1d58;
  undefined4 uStack_1d54;
  undefined4 uStack_1d50;
  undefined4 uStack_1d4c;
  undefined4 local_1d48;
  undefined4 uStack_1d44;
  undefined4 uStack_1d40;
  undefined4 uStack_1d3c;
  undefined4 local_1d38;
  undefined4 uStack_1d34;
  undefined4 uStack_1d30;
  undefined4 uStack_1d2c;
  undefined1 local_1d28;
  undefined **local_1d18;
  undefined1 *puStack_1d10;
  longlong *local_1c78;
  undefined **local_1778 [20];
  longlong *local_16d8;
  undefined **local_11d8 [2];
  undefined1 local_11c8 [880];
  undefined **local_e58;
  undefined4 local_e50;
  undefined4 uStack_e4c;
  undefined4 uStack_e48;
  undefined4 uStack_e44;
  undefined4 local_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 local_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  longlong local_e20;
  undefined8 local_e18 [10];
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined8 local_dc0;
  longlong local_db8;
  undefined8 local_db0;
  undefined **local_da8;
  undefined8 uStack_da0;
  undefined **local_d98;
  undefined **local_d88;
  undefined4 local_d80;
  undefined4 uStack_d7c;
  undefined4 uStack_d78;
  undefined4 uStack_d74;
  undefined4 local_d70;
  undefined4 uStack_d6c;
  undefined4 uStack_d68;
  undefined4 uStack_d64;
  undefined4 local_d60;
  undefined4 uStack_d5c;
  undefined4 uStack_d58;
  undefined4 uStack_d54;
  longlong local_d50;
  undefined8 local_d48 [10];
  undefined4 local_cf8;
  undefined1 local_cf4;
  undefined8 local_cf0;
  longlong local_ce8;
  undefined8 local_ce0;
  undefined4 local_cd8;
  undefined4 uStack_cd4;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  undefined4 local_cc8;
  undefined4 uStack_cc4;
  undefined4 uStack_cc0;
  undefined4 uStack_cbc;
  undefined4 local_cb8;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined4 uStack_cac;
  undefined1 local_ca8;
  undefined **local_c98 [2];
  undefined1 local_c88 [880];
  undefined **local_918;
  undefined4 local_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 local_900;
  undefined4 uStack_8fc;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 local_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  longlong local_8e0;
  undefined8 auStack_8d8 [10];
  undefined4 local_888;
  undefined1 local_884;
  undefined8 local_880;
  longlong local_878;
  undefined8 local_870;
  undefined **local_868;
  undefined8 uStack_860;
  undefined **local_858;
  undefined **local_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  longlong local_810;
  undefined8 auStack_808 [10];
  undefined4 local_7b8;
  undefined1 local_7b4;
  undefined8 local_7b0;
  longlong local_7a8;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined1 local_768;
  undefined **local_758 [110];
  undefined1 local_3e8 [888];
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x1461e64c8;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4968;
  FUN_140ca8d78(local_3348);
  local_4940 = local_c98;
  local_c98[0] = DAT_14c84635c;
  local_4948 = 0x3f800000;
  FUN_1414fd764(&local_3e98,&DAT_14c98dc00,0x40800000,&DAT_14c98dc28);
  FUN_140f13d9e(local_3338,&local_3e98);
  local_11d8[0] = DAT_14c84635c;
  local_4948 = 0x3f800000;
  local_4940 = local_11d8;
  FUN_1414fd764(local_1778,&DAT_14c98dc00,0x40800000,&DAT_14c98dae8);
  FUN_140f13d9e(local_3288,local_1778);
  local_4940 = local_2258;
  local_2258[0] = DAT_14c84635c;
  local_4948 = 0x3f800000;
  FUN_1414fd764(&local_1d18,&DAT_14c98dc00,0x40800000,&DAT_14c98dae8);
  FUN_140f13d9e(local_31d8,&local_1d18);
  local_4940 = local_758;
  local_758[0] = DAT_14c84635c;
  local_4948 = 0x3f800000;
  FUN_1414fd764(local_27f8,&DAT_14c98dbc4,0x40800000,&DAT_14c98dbb0);
  FUN_140f13d9e(local_3128,local_27f8);
  local_3078 = _DAT_14c98dac0;
  uStack_3070 = uRam000000014c98dac8;
  local_3068 = DAT_14c98dad0;
  local_3064 = _DAT_14c98db38;
  uStack_305c = uRam000000014c98db40;
  local_3054 = DAT_14c98db48;
  local_3050 = _DAT_14c98db38;
  uStack_3048 = uRam000000014c98db40;
  local_3040 = DAT_14c98db48;
  local_303c = _DAT_14c98db38;
  uStack_3034 = uRam000000014c98db40;
  local_302c = DAT_14c98db48;
  local_3028 = _DAT_14c968064;
  uStack_3020 = uRam000000014c96806c;
  local_3018 = _DAT_14c968074;
  uStack_3014 = uRam000000014c968078;
  uStack_3010 = uRam000000014c96807c;
  uStack_300c = uRam000000014c968080;
  FUN_141478cf2(local_3e8,local_3348);
  plVar3 = local_2758;
  local_27f8[0] = &PTR_FUN_149ed05f0;
  if (local_2758 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2758 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2758)(local_2758);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_1c78;
  local_1d18 = &PTR_FUN_149ed05f0;
  if (local_1c78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1c78)(local_1c78);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_16d8;
  local_1778[0] = &PTR_FUN_149ed05f0;
  if (local_16d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_16d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_16d8)(local_16d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_3df8;
  local_3e98 = &PTR_FUN_149ed05f0;
  if (local_3df8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3df8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3df8)(local_3df8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffd6b6(local_3348);
  FUN_141478cf2(local_3348,local_3e8);
  local_27f8[0] = DAT_14c967ffc;
  local_4948 = 0x3f800000;
  local_4940 = local_27f8;
  FUN_1414fd764(&local_3e98,&DAT_14c98dc00,0x40800000,&DAT_14c98dc28);
  FUN_140f13d9e(local_3338,&local_3e98);
  local_c98[0] = DAT_14c967ffc;
  local_4940 = local_c98;
  local_4948 = 0x3f800000;
  FUN_1414fd764(local_1778,&DAT_14c98dc00,0x40800000,&DAT_14c98dae8);
  FUN_140f13d9e(local_3288,local_1778);
  local_11d8[0] = DAT_14c967ffc;
  local_4948 = 0x3f800000;
  local_4940 = local_11d8;
  FUN_1414fd764(&local_1d18,&DAT_14c98dc00,0x40800000,&DAT_14c98dae8);
  FUN_140f13d9e(local_31d8,&local_1d18);
  FUN_141478cf2(local_758,local_3348);
  local_1d18 = &PTR_FUN_149ed05f0;
  if (local_1c78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1c78 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1c78)(local_1c78);
      LOCK();
      piVar2 = (int *)((longlong)local_1c78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1c78 + 0x10))(local_1c78);
      }
    }
  }
  plVar3 = local_16d8;
  local_1778[0] = &PTR_FUN_149ed05f0;
  if (local_16d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_16d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_16d8)(local_16d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_3df8;
  local_3e98 = &PTR_FUN_149ed05f0;
  if (local_3df8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3df8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3df8)(local_3df8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffd6b6(local_3348);
  FUN_140f13d18(local_3348);
  FUN_141254448(local_3338,local_3e8);
  local_2e38 = 0;
  uStack_2e30 = 0;
  local_1d18 = (undefined **)&DAT_3f8000003f800000;
  puStack_1d10 = &DAT_3f8000003f800000;
  local_11d8[0] = (undefined **)0x4180000041800000;
  local_4930 = param_1;
  (**(code **)(*(longlong *)*param_1 + 0xe8))
            ((longlong *)*param_1,local_27f8,"Starship/CoreWidgets/ComboBox/wide-chevron-down",
             L".svg");
  local_4940 = (undefined ***)CONCAT44(local_4940._4_4_,3);
  local_4948 = 0;
  FUN_14140806a(&local_3e98,local_27f8,local_11d8,&local_1d18);
  local_3e98 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_2fc8,&local_3e98);
  local_2258[0] = DAT_14c84635c;
  local_4940 = local_2258;
  local_4948 = 0x3f800000;
  FUN_1414fd764(local_1778,&DAT_14c98dbc4,0,&DAT_14c98dbb0);
  FUN_140f13d9e(&local_2ef8,local_1778);
  local_2e48 = 0;
  uStack_2e40 = 0;
  local_c98[0] = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_c88,local_3338);
  local_918 = &PTR_FUN_149ed05f0;
  local_910 = local_2fc0;
  uStack_90c = uStack_2fbc;
  uStack_908 = uStack_2fb8;
  uStack_904 = uStack_2fb4;
  local_900 = local_2fb0;
  uStack_8fc = uStack_2fac;
  uStack_8f8 = uStack_2fa8;
  uStack_8f4 = uStack_2fa4;
  local_8f0 = local_2fa0;
  uStack_8ec = uStack_2f9c;
  uStack_8e8 = uStack_2f98;
  uStack_8e4 = uStack_2f94;
  local_8e0 = local_2f90;
  if ((local_2f90 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_2f88;
  puVar7 = auStack_8d8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_884 = local_2f34;
  local_888 = local_2f38;
  local_880 = local_2f30;
  local_878 = local_2f28;
  if (local_2f28 != 0) {
    LOCK();
    *(int *)(local_2f28 + 8) = *(int *)(local_2f28 + 8) + 1;
    UNLOCK();
  }
  local_870 = local_2f20;
  local_868 = local_2f18;
  uStack_860 = uStack_2f10;
  local_858 = local_2f08;
  local_848 = &PTR_FUN_149ed05f0;
  local_840 = CONCAT44(uStack_2eec,local_2ef0);
  uStack_838 = CONCAT44(uStack_2ee4,uStack_2ee8);
  local_830 = CONCAT44(uStack_2edc,local_2ee0);
  uStack_828 = CONCAT44(uStack_2ed4,uStack_2ed8);
  local_820 = local_2ed0;
  uStack_81c = uStack_2ecc;
  uStack_818 = uStack_2ec8;
  uStack_814 = uStack_2ec4;
  local_810 = local_2ec0;
  if ((local_2ec0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_2eb8;
  puVar7 = auStack_808;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_7b4 = local_2e64;
  local_7b8 = local_2e68;
  local_7b0 = local_2e60;
  local_7a8 = local_2e58;
  if (local_2e58 != 0) {
    LOCK();
    *(int *)(local_2e58 + 8) = *(int *)(local_2e58 + 8) + 1;
    UNLOCK();
  }
  local_7a0 = local_2e50;
  local_798 = (undefined4)local_2e48;
  uStack_794 = local_2e48._4_4_;
  uStack_790 = (undefined4)uStack_2e40;
  uStack_78c = uStack_2e40._4_4_;
  local_788 = (undefined4)local_2e38;
  uStack_784 = local_2e38._4_4_;
  uStack_780 = (undefined4)uStack_2e30;
  uStack_77c = uStack_2e30._4_4_;
  local_778 = local_2e28;
  uStack_774 = uStack_2e24;
  uStack_770 = uStack_2e20;
  uStack_76c = uStack_2e1c;
  local_768 = (undefined1)local_2e18;
  local_1778[0] = &PTR_FUN_149ed05f0;
  if (local_16d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_16d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_16d8)(local_16d8);
      LOCK();
      piVar2 = (int *)((longlong)local_16d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_16d8 + 0x10))(local_16d8);
      }
    }
  }
  plVar3 = local_3df8;
  local_3e98 = &PTR_FUN_149ed05f0;
  if (local_3df8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3df8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3df8)(local_3df8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_27f8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd624(local_3348);
  uVar4 = *local_4930;
  FUN_1446ddc76(&local_3ea0,"ComboButton",1);
  FUN_1416427d0(uVar4,local_3ea0,local_c98);
  local_3348[0] = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_3338,local_c88);
  local_2fc8 = &PTR_FUN_149ed05f0;
  local_2fc0 = local_910;
  uStack_2fbc = uStack_90c;
  uStack_2fb8 = uStack_908;
  uStack_2fb4 = uStack_904;
  local_2fb0 = local_900;
  uStack_2fac = uStack_8fc;
  uStack_2fa8 = uStack_8f8;
  uStack_2fa4 = uStack_8f4;
  local_2fa0 = local_8f0;
  uStack_2f9c = uStack_8ec;
  uStack_2f98 = uStack_8e8;
  uStack_2f94 = uStack_8e4;
  local_2f90 = local_8e0;
  if ((local_8e0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = auStack_8d8;
  puVar7 = local_2f88;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_2f34 = local_884;
  local_2f38 = local_888;
  local_2f30 = local_880;
  local_2f28 = local_878;
  if (local_878 != 0) {
    LOCK();
    *(int *)(local_878 + 8) = *(int *)(local_878 + 8) + 1;
    UNLOCK();
  }
  local_2f20 = local_870;
  local_2f18 = local_868;
  uStack_2f10 = uStack_860;
  local_2f08 = local_858;
  local_2ef8 = &PTR_FUN_149ed05f0;
  local_2ef0 = (undefined4)local_840;
  uStack_2eec = local_840._4_4_;
  uStack_2ee8 = (undefined4)uStack_838;
  uStack_2ee4 = uStack_838._4_4_;
  local_2ee0 = (undefined4)local_830;
  uStack_2edc = local_830._4_4_;
  uStack_2ed8 = (undefined4)uStack_828;
  uStack_2ed4 = uStack_828._4_4_;
  local_2ed0 = local_820;
  uStack_2ecc = uStack_81c;
  uStack_2ec8 = uStack_818;
  uStack_2ec4 = uStack_814;
  local_2ec0 = local_810;
  if ((local_810 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = auStack_808;
  puVar7 = local_2eb8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_2e64 = local_7b4;
  local_2e68 = local_7b8;
  local_2e60 = local_7b0;
  local_2e58 = local_7a8;
  if (local_7a8 != 0) {
    LOCK();
    *(int *)(local_7a8 + 8) = *(int *)(local_7a8 + 8) + 1;
    UNLOCK();
  }
  local_2e50 = local_7a0;
  local_2e48 = CONCAT44(uStack_794,local_798);
  uStack_2e40 = CONCAT44(uStack_78c,uStack_790);
  local_2e38 = CONCAT44(uStack_784,local_788);
  uStack_2e30 = CONCAT44(uStack_77c,uStack_780);
  local_2e28 = local_778;
  uStack_2e24 = uStack_774;
  uStack_2e20 = uStack_770;
  uStack_2e1c = uStack_76c;
  local_2e18 = CONCAT31(local_2e18._1_3_,local_768);
  FUN_141254448(local_3338,local_758);
  local_11d8[0] = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_11c8,local_3338);
  local_e58 = &PTR_FUN_149ed05f0;
  local_e50 = local_2fc0;
  uStack_e4c = uStack_2fbc;
  uStack_e48 = uStack_2fb8;
  uStack_e44 = uStack_2fb4;
  local_e40 = local_2fb0;
  uStack_e3c = uStack_2fac;
  uStack_e38 = uStack_2fa8;
  uStack_e34 = uStack_2fa4;
  local_e30 = local_2fa0;
  uStack_e2c = uStack_2f9c;
  uStack_e28 = uStack_2f98;
  uStack_e24 = uStack_2f94;
  local_e20 = local_2f90;
  if ((local_2f90 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_2f88;
  puVar7 = local_e18;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_dc4 = local_2f34;
  local_dc8 = local_2f38;
  local_dc0 = local_2f30;
  local_db8 = local_2f28;
  if (local_2f28 != 0) {
    LOCK();
    *(int *)(local_2f28 + 8) = *(int *)(local_2f28 + 8) + 1;
    UNLOCK();
  }
  local_db0 = local_2f20;
  local_da8 = local_2f18;
  uStack_da0 = uStack_2f10;
  local_d98 = local_2f08;
  local_d88 = &PTR_FUN_149ed05f0;
  local_d80 = local_2ef0;
  uStack_d7c = uStack_2eec;
  uStack_d78 = uStack_2ee8;
  uStack_d74 = uStack_2ee4;
  local_d70 = local_2ee0;
  uStack_d6c = uStack_2edc;
  uStack_d68 = uStack_2ed8;
  uStack_d64 = uStack_2ed4;
  local_d60 = local_2ed0;
  uStack_d5c = uStack_2ecc;
  uStack_d58 = uStack_2ec8;
  uStack_d54 = uStack_2ec4;
  local_d50 = local_2ec0;
  if ((local_2ec0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_2eb8;
  puVar7 = local_d48;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_cf4 = local_2e64;
  local_cf8 = local_2e68;
  local_cf0 = local_2e60;
  local_ce8 = local_2e58;
  if (local_2e58 != 0) {
    LOCK();
    *(int *)(local_2e58 + 8) = *(int *)(local_2e58 + 8) + 1;
    UNLOCK();
  }
  local_ce0 = local_2e50;
  local_cd8 = (undefined4)local_2e48;
  uStack_cd4 = local_2e48._4_4_;
  uStack_cd0 = (undefined4)uStack_2e40;
  uStack_ccc = uStack_2e40._4_4_;
  local_cc8 = (undefined4)local_2e38;
  uStack_cc4 = local_2e38._4_4_;
  uStack_cc0 = (undefined4)uStack_2e30;
  uStack_cbc = uStack_2e30._4_4_;
  local_cb8 = local_2e28;
  uStack_cb4 = uStack_2e24;
  uStack_cb0 = uStack_2e20;
  uStack_cac = uStack_2e1c;
  local_ca8 = (undefined1)local_2e18;
  FUN_140ffd624(local_3348);
  puVar6 = local_4930;
  uVar4 = *local_4930;
  FUN_1446ddc76(&local_3ea8,"EditorUtilityComboButton",1);
  FUN_1416427d0(uVar4,local_3ea8,local_c98);
  FUN_1457c71ee(local_3348);
  local_2dc8 = 0;
  uStack_2dc0 = 0;
  local_2db8 = 0x41000000;
  uStack_2db4 = 0x40400000;
  uStack_2db0 = 0x41000000;
  uStack_2dac = 0x40400000;
  FUN_141254448(local_3328,local_c88);
  FUN_140f13d9e(&uStack_2fb8,&local_918);
  local_2f08 = local_868;
  uStack_2f00 = (undefined4)uStack_860;
  uStack_2efc = uStack_860._4_4_;
  local_2ef8 = local_858;
  FUN_140f13d9e(&uStack_2ee8,&local_848);
  local_2e38 = CONCAT44(uStack_794,local_798);
  uStack_2e30 = CONCAT44(uStack_78c,uStack_790);
  local_2e28 = local_788;
  uStack_2e24 = uStack_784;
  uStack_2e20 = uStack_780;
  uStack_2e1c = uStack_77c;
  local_2e18 = local_778;
  uStack_2e14 = uStack_774;
  uStack_2e10 = uStack_770;
  uStack_2e0c = uStack_76c;
  local_2e08 = local_768;
  FUN_1461e857a(local_1778,local_3348);
  local_3348[0] = &PTR_FUN_149ee32c0;
  FUN_140ffd624(local_3338);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3eb0,"ComboBox",1);
  FUN_1416428b6(uVar4,local_3eb0,local_1778);
  FUN_1461e857a(local_3348,local_1778);
  FUN_141254448(local_3328,local_11c8);
  FUN_140f13d9e(&uStack_2fb8,&local_e58);
  local_2f08 = local_da8;
  uStack_2f00 = (undefined4)uStack_da0;
  uStack_2efc = uStack_da0._4_4_;
  local_2ef8 = local_d98;
  FUN_140f13d9e(&uStack_2ee8,&local_d88);
  local_2e38 = CONCAT44(uStack_cd4,local_cd8);
  uStack_2e30 = CONCAT44(uStack_ccc,uStack_cd0);
  local_2e28 = local_cc8;
  uStack_2e24 = uStack_cc4;
  uStack_2e20 = uStack_cc0;
  uStack_2e1c = uStack_cbc;
  local_2e18 = local_cb8;
  uStack_2e14 = uStack_cb4;
  uStack_2e10 = uStack_cb0;
  uStack_2e0c = uStack_cac;
  local_2e08 = local_ca8;
  FUN_1461e857a(&local_1d18,local_3348);
  local_3348[0] = &PTR_FUN_149ee32c0;
  FUN_140ffd624(local_3338);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3eb8,"EditorUtilityComboBox",1);
  FUN_1416428b6(uVar4,local_3eb8,local_1778);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3ec0,"SimpleButtonLabelAndIcon",1);
  uVar4 = FUN_141492734(uVar4,local_3ec0,0,0);
  FUN_140f13d18(local_3348);
  FUN_141254448(local_3338,uVar4);
  local_2e38 = 0;
  uStack_2e30 = 0;
  local_3f98 = (undefined **)&DAT_3f8000003f800000;
  puStack_3f90 = &DAT_3f8000003f800000;
  local_4108[0] = (undefined **)0x4180000041800000;
  (**(code **)(*(longlong *)*puVar6 + 0xe8))
            ((longlong *)*puVar6,local_4058,"Starship/CoreWidgets/ComboBox/wide-chevron-down",
             L".svg");
  local_4940 = (undefined ***)CONCAT44(local_4940._4_4_,3);
  local_4948 = 0;
  FUN_14140806a(&local_3e98,local_4058,local_4108,&local_3f98);
  local_3e98 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_2fc8,&local_3e98);
  local_2f18 = (undefined **)0x0;
  local_4940 = local_41c8;
  local_41c8[0] = DAT_14c84635c;
  local_4948 = 0x3f800000;
  FUN_1414fd764(local_27f8,&DAT_14c98dbc4,0,&DAT_14c98dbb0);
  FUN_140f13d9e(&local_2ef8,local_27f8);
  local_2e48 = 0;
  uStack_2e40 = 0;
  local_2258[0] = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_2248,local_3338);
  local_1ed8 = &PTR_FUN_149ed05f0;
  local_1ed0 = local_2fc0;
  uStack_1ecc = uStack_2fbc;
  uStack_1ec8 = uStack_2fb8;
  uStack_1ec4 = uStack_2fb4;
  local_1ec0 = local_2fb0;
  uStack_1ebc = uStack_2fac;
  uStack_1eb8 = uStack_2fa8;
  uStack_1eb4 = uStack_2fa4;
  local_1eb0 = local_2fa0;
  uStack_1eac = uStack_2f9c;
  uStack_1ea8 = uStack_2f98;
  uStack_1ea4 = uStack_2f94;
  local_1ea0 = local_2f90;
  if ((local_2f90 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_2f88;
  puVar7 = local_1e98;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1e44 = local_2f34;
  local_1e48 = local_2f38;
  local_1e40 = local_2f30;
  local_1e38 = local_2f28;
  if (local_2f28 != 0) {
    LOCK();
    *(int *)(local_2f28 + 8) = *(int *)(local_2f28 + 8) + 1;
    UNLOCK();
  }
  local_1e30 = local_2f20;
  local_1e28 = local_2f18;
  uStack_1e20 = uStack_2f10;
  local_1e18 = local_2f08;
  local_1e08 = &PTR_FUN_149ed05f0;
  local_1e00 = CONCAT44(uStack_2eec,local_2ef0);
  uStack_1df8 = CONCAT44(uStack_2ee4,uStack_2ee8);
  local_1df0 = CONCAT44(uStack_2edc,local_2ee0);
  uStack_1de8 = CONCAT44(uStack_2ed4,uStack_2ed8);
  local_1de0 = local_2ed0;
  uStack_1ddc = uStack_2ecc;
  uStack_1dd8 = uStack_2ec8;
  uStack_1dd4 = uStack_2ec4;
  local_1dd0 = local_2ec0;
  if ((local_2ec0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_4930;
  puVar7 = local_2eb8;
  puVar8 = local_1dc8;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_1d74 = local_2e64;
  local_1d78 = local_2e68;
  local_1d70 = local_2e60;
  local_1d68 = local_2e58;
  if (local_2e58 != 0) {
    LOCK();
    *(int *)(local_2e58 + 8) = *(int *)(local_2e58 + 8) + 1;
    UNLOCK();
  }
  local_1d60 = local_2e50;
  local_1d58 = (undefined4)local_2e48;
  uStack_1d54 = local_2e48._4_4_;
  uStack_1d50 = (undefined4)uStack_2e40;
  uStack_1d4c = uStack_2e40._4_4_;
  local_1d48 = (undefined4)local_2e38;
  uStack_1d44 = local_2e38._4_4_;
  uStack_1d40 = (undefined4)uStack_2e30;
  uStack_1d3c = uStack_2e30._4_4_;
  local_1d38 = local_2e28;
  uStack_1d34 = uStack_2e24;
  uStack_1d30 = uStack_2e20;
  uStack_1d2c = uStack_2e1c;
  local_1d28 = (undefined1)local_2e18;
  local_27f8[0] = &PTR_FUN_149ed05f0;
  if (local_2758 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2758 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2758)(local_2758);
      LOCK();
      piVar2 = (int *)((longlong)local_2758 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2758 + 0x10))(local_2758);
      }
    }
  }
  local_3e98 = &PTR_FUN_149ed05f0;
  if (local_3df8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3df8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3df8)(local_3df8);
      LOCK();
      piVar2 = (int *)((longlong)local_3df8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3df8 + 0x10))(local_3df8);
      }
    }
  }
  if (local_4058[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd624(local_3348);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3ec8,"SimpleComboButton",1);
  FUN_1416427d0(uVar4,local_3ec8,local_2258);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3ed0,"SimpleButton",1);
  uVar4 = FUN_141492734(uVar4,local_3ed0,0,0);
  FUN_141254448(local_2248,uVar4);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3ed8,"SimpleComboButtonWithIcon",1);
  FUN_1416427d0(uVar4,local_3ed8,local_2258);
  FUN_1457c71ee(local_3348);
  local_2dc8 = 0;
  uStack_2dc0 = 0;
  local_2db8 = 0x41000000;
  uStack_2db4 = 0x40000000;
  uStack_2db0 = 0x41000000;
  uStack_2dac = 0x40000000;
  FUN_141254448(local_3328,local_2248);
  FUN_140f13d9e(&uStack_2fb8,&local_1ed8);
  local_2f08 = (undefined **)local_1e28;
  uStack_2f00 = (undefined4)uStack_1e20;
  uStack_2efc = uStack_1e20._4_4_;
  local_2ef8 = local_1e18;
  FUN_140f13d9e(&uStack_2ee8,&local_1e08);
  local_2e38 = CONCAT44(uStack_1d54,local_1d58);
  uStack_2e30 = CONCAT44(uStack_1d4c,uStack_1d50);
  local_2e28 = local_1d48;
  uStack_2e24 = uStack_1d44;
  uStack_2e20 = uStack_1d40;
  uStack_2e1c = uStack_1d3c;
  local_2e18 = local_1d38;
  uStack_2e14 = uStack_1d34;
  uStack_2e10 = uStack_1d30;
  uStack_2e0c = uStack_1d2c;
  local_2e08 = local_1d28;
  FUN_1461e857a(local_27f8,local_3348);
  local_3348[0] = &PTR_FUN_149ee32c0;
  FUN_140ffd624(local_3338);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_3ee0,"SimpleComboBox",1);
  FUN_1416428b6(uVar4,local_3ee0,local_27f8);
  FUN_1457c724e(&local_3e98);
  local_3fa0 = DAT_14c84635c;
  FUN_1412ce202(&local_3f98);
  FUN_140f13d9e(local_38f8,&local_3f98);
  FUN_1411bc404(local_4058,&DAT_14c98db10);
  FUN_140f13d9e(local_39a8,local_4058);
  local_4110 = DAT_14c84635c;
  FUN_1412ce202(local_4108);
  FUN_140f13d9e(local_3798,local_4108);
  FUN_1411bc404(local_41c8,&DAT_14c98db10);
  FUN_140f13d9e(local_3848,local_41c8);
  local_4940 = &local_4280;
  local_4280 = DAT_14c84635c;
  local_4948 = 0x3f800000;
  FUN_1414fd764(local_4278,&DAT_14c98db24,0x40800000,&DAT_14c98dcc8);
  FUN_140f13d9e(local_3e88,local_4278);
  local_4340 = DAT_14c84635c;
  FUN_1412ce202(local_4338);
  FUN_140f13d9e(local_3d28,local_4338);
  FUN_1411bc404(local_43f8,&DAT_14c98db10);
  FUN_140f13d9e(local_3dd8,local_43f8);
  FUN_1411bc404(local_44a8,&DAT_14c98db10);
  FUN_140f13d9e(local_34a8,local_44a8);
  local_4560 = DAT_14c84635c;
  FUN_1412ce202(local_4558);
  FUN_140f13d9e(local_3bc8,local_4558);
  FUN_1411bc404(local_4618,&DAT_14c98db10);
  FUN_140f13d9e(local_3c78,local_4618);
  FUN_1411bc404(local_46c8,&DAT_14c98db10);
  FUN_140f13d9e(local_33f8,local_46c8);
  local_36e8 = _DAT_14c98db4c;
  uStack_36e4 = uRam000000014c98db50;
  uStack_36e0 = uRam000000014c98db54;
  uStack_36dc = uRam000000014c98db58;
  local_36d8 = DAT_14c98db5c;
  local_36d4 = _DAT_14c98db4c;
  uStack_36d0 = uRam000000014c98db50;
  uStack_36cc = uRam000000014c98db54;
  uStack_36c8 = uRam000000014c98db58;
  local_36c4 = DAT_14c98db5c;
  local_4780 = DAT_14c84635c;
  FUN_1412ce202(local_4778);
  FUN_140f13d9e(local_36b8,local_4778);
  local_4840 = DAT_14c84635c;
  FUN_1412ce202(local_4838);
  FUN_140f13d9e(local_3608,local_4838);
  local_4900 = DAT_14c84635c;
  FUN_1412ce202(local_48f8);
  FUN_140f13d9e(local_3558,local_48f8);
  FUN_1415bc658(local_3348,&local_3e98);
  local_48f8[0] = &PTR_FUN_149ed05f0;
  if (local_4858 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4858 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4858)(local_4858);
      LOCK();
      piVar2 = (int *)((longlong)local_4858 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4858 + 0x10))(local_4858);
      }
    }
  }
  local_4838[0] = &PTR_FUN_149ed05f0;
  if (local_4798 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4798 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4798)(local_4798);
      LOCK();
      piVar2 = (int *)((longlong)local_4798 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4798 + 0x10))(local_4798);
      }
    }
  }
  local_4778[0] = &PTR_FUN_149ed05f0;
  if (local_46d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_46d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_46d8)(local_46d8);
      LOCK();
      piVar2 = (int *)((longlong)local_46d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_46d8 + 0x10))(local_46d8);
      }
    }
  }
  local_46c8[0] = &PTR_FUN_149ed05f0;
  if (local_4628 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4628 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4628)(local_4628);
      LOCK();
      piVar2 = (int *)((longlong)local_4628 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4628 + 0x10))(local_4628);
      }
    }
  }
  local_4618[0] = &PTR_FUN_149ed05f0;
  if (local_4578 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4578 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4578)(local_4578);
      LOCK();
      piVar2 = (int *)((longlong)local_4578 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4578 + 0x10))(local_4578);
      }
    }
  }
  local_4558[0] = &PTR_FUN_149ed05f0;
  if (plStack_44b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_44b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_44b8)(plStack_44b8);
      LOCK();
      piVar2 = (int *)((longlong)plStack_44b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_44b8 + 0x10))(plStack_44b8);
      }
    }
  }
  local_44a8[0] = &PTR_FUN_149ed05f0;
  if (local_4408 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4408 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4408)(local_4408);
      LOCK();
      piVar2 = (int *)((longlong)local_4408 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4408 + 0x10))(local_4408);
      }
    }
  }
  local_43f8[0] = &PTR_FUN_149ed05f0;
  if (local_4358 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4358 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4358)(local_4358);
      LOCK();
      piVar2 = (int *)((longlong)local_4358 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4358 + 0x10))(local_4358);
      }
    }
  }
  local_4338[0] = &PTR_FUN_149ed05f0;
  if (plStack_4298 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_4298 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_4298)(plStack_4298);
      LOCK();
      piVar2 = (int *)((longlong)plStack_4298 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_4298 + 0x10))(plStack_4298);
      }
    }
  }
  local_4278[0] = &PTR_FUN_149ed05f0;
  if (local_41d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_41d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_41d8)(local_41d8);
      LOCK();
      piVar2 = (int *)((longlong)local_41d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_41d8 + 0x10))(local_41d8);
      }
    }
  }
  local_41c8[0] = &PTR_FUN_149ed05f0;
  if (local_4128 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4128 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4128)(local_4128);
      LOCK();
      piVar2 = (int *)((longlong)local_4128 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4128 + 0x10))(local_4128);
      }
    }
  }
  local_4108[0] = &PTR_FUN_149ed05f0;
  if (local_4068 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4068 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4068)(local_4068);
      LOCK();
      piVar2 = (int *)((longlong)local_4068 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4068 + 0x10))(local_4068);
      }
    }
  }
  local_4058[0] = &PTR_FUN_149ed05f0;
  if (local_3fb8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3fb8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3fb8)(local_3fb8);
      LOCK();
      piVar2 = (int *)((longlong)local_3fb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3fb8 + 0x10))(local_3fb8);
      }
    }
  }
  local_3f98 = &PTR_FUN_149ed05f0;
  if (local_3ef8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3ef8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3ef8)(local_3ef8);
      LOCK();
      piVar2 = (int *)((longlong)local_3ef8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3ef8 + 0x10))(local_3ef8);
      }
    }
  }
  FUN_1415bbd66(&local_3e98);
  uVar4 = *puVar6;
  FUN_1446ddc76(&local_4908,"ComboBox.Row",1);
  FUN_1415bc19a(uVar4,local_4908,local_3348);
  plVar3 = (longlong *)*puVar6;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3e98 = (undefined **)&DAT_3f8000003f800000;
  puStack_3e90 = &DAT_3f8000003f800000;
  local_4058[0] = DAT_14c967fac;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_3f98,"Icons/PlusSymbol_12x",&DAT_149eca162);
  local_4940 = (undefined ***)CONCAT44(local_4940._4_4_,1);
  local_4948 = 0;
  FUN_14140806a(uVar4,&local_3f98,local_4058,&local_3e98);
  FUN_1446ddc76(&local_4910,"EditableComboBox.Add",1);
  FUN_141408132(plVar3,local_4910,uVar4);
  if (local_3f98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar6;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3e98 = (undefined **)&DAT_3f8000003f800000;
  puStack_3e90 = &DAT_3f8000003f800000;
  local_4058[0] = DAT_14c967fac;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_3f98,"Icons/Cross_12x",&DAT_149eca162);
  local_4940 = (undefined ***)CONCAT44(local_4940._4_4_,1);
  local_4948 = 0;
  FUN_14140806a(uVar4,&local_3f98,local_4058,&local_3e98);
  FUN_1446ddc76(&local_4918,"EditableComboBox.Delete",1);
  FUN_141408132(plVar3,local_4918,uVar4);
  if (local_3f98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar6;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3e98 = (undefined **)&DAT_3f8000003f800000;
  puStack_3e90 = &DAT_3f8000003f800000;
  local_4058[0] = DAT_14c967fac;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_3f98,"Icons/ellipsis_12x",&DAT_149eca162);
  local_4940 = (undefined ***)CONCAT44(local_4940._4_4_,1);
  local_4948 = 0;
  FUN_14140806a(uVar4,&local_3f98,local_4058,&local_3e98);
  FUN_1446ddc76(&local_4920,"EditableComboBox.Rename",1);
  FUN_141408132(plVar3,local_4920,uVar4);
  if (local_3f98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar6;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_3e98 = (undefined **)&DAT_3f8000003f800000;
  puStack_3e90 = &DAT_3f8000003f800000;
  local_4058[0] = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_3f98,"Common/Check",&DAT_149eca162);
  local_4940 = (undefined ***)CONCAT44(local_4940._4_4_,1);
  local_4948 = 0;
  FUN_14140806a(uVar4,&local_3f98,local_4058,&local_3e98);
  FUN_1446ddc76(&local_4928,"EditableComboBox.Accept",1);
  FUN_141408132(plVar3,local_4928,uVar4);
  if (local_3f98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_1415bbd66(local_3348);
  local_27f8[0] = &PTR_FUN_149ee32c0;
  FUN_140ffd624();
  FUN_140ffd624(local_2258);
  local_1d18 = &PTR_FUN_149ee32c0;
  FUN_140ffd624();
  local_1778[0] = &PTR_FUN_149ee32c0;
  FUN_140ffd624();
  FUN_140ffd624(local_11d8);
  FUN_140ffd624(local_c98);
  FUN_140ffd6b6(local_758);
  FUN_140ffd6b6(local_3e8);
  if ((local_70 ^ (ulonglong)auStack_4968) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e857a FUN_1461e857a body=308 status=ok
// SIG undefined FUN_1461e857a(void)

undefined8 * FUN_1461e857a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  
  *param_1 = &PTR_FUN_149ee32c0;
  param_1[2] = &PTR_FUN_149ee3280;
  FUN_141478cf2(param_1 + 4,param_2 + 0x20);
  FUN_140e361c2(param_1 + 0x72,param_2 + 0x390);
  uVar2 = *(undefined4 *)(param_2 + 0x444);
  uVar3 = *(undefined4 *)(param_2 + 0x448);
  uVar4 = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)((longlong)param_1 + 0x444) = uVar2;
  *(undefined4 *)(param_1 + 0x89) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44c) = uVar4;
  param_1[0x8a] = *(undefined8 *)(param_2 + 0x450);
  FUN_140e361c2(param_1 + 0x8c,param_2 + 0x460);
  uVar2 = *(undefined4 *)(param_2 + 0x514);
  uVar3 = *(undefined4 *)(param_2 + 0x518);
  uVar4 = *(undefined4 *)(param_2 + 0x51c);
  uVar5 = *(undefined4 *)(param_2 + 0x520);
  uVar6 = *(undefined4 *)(param_2 + 0x524);
  uVar7 = *(undefined4 *)(param_2 + 0x528);
  uVar8 = *(undefined4 *)(param_2 + 0x52c);
  uVar9 = *(undefined4 *)(param_2 + 0x530);
  uVar10 = *(undefined4 *)(param_2 + 0x534);
  uVar11 = *(undefined4 *)(param_2 + 0x538);
  uVar12 = *(undefined4 *)(param_2 + 0x53c);
  *(undefined4 *)(param_1 + 0xa2) = *(undefined4 *)(param_2 + 0x510);
  *(undefined4 *)((longlong)param_1 + 0x514) = uVar2;
  *(undefined4 *)(param_1 + 0xa3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x51c) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x524) = uVar6;
  *(undefined4 *)(param_1 + 0xa5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x52c) = uVar8;
  *(undefined4 *)(param_1 + 0xa6) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x534) = uVar10;
  *(undefined4 *)(param_1 + 0xa7) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x53c) = uVar12;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0x540);
  lVar1 = *(longlong *)(param_2 + 0x550);
  param_1[0xaa] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar16 = DAT_14c950c29;
  uVar2 = *(undefined4 *)(param_2 + 0x55c);
  uVar3 = *(undefined4 *)(param_2 + 0x560);
  uVar4 = *(undefined4 *)(param_2 + 0x564);
  *(undefined4 *)(param_1 + 0xab) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)((longlong)param_1 + 0x55c) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x564) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0x568);
  param_1[0xad] = lVar1;
  if ((lVar1 != 0 & bVar16) == 1) {
    FUN_1456cec3c();
  }
  uVar13 = *(undefined8 *)(param_2 + 0x578);
  param_1[0xae] = *(undefined8 *)(param_2 + 0x570);
  param_1[0xaf] = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x588);
  uVar14 = *(undefined8 *)(param_2 + 0x590);
  uVar15 = *(undefined8 *)(param_2 + 0x598);
  param_1[0xb0] = *(undefined8 *)(param_2 + 0x580);
  param_1[0xb1] = uVar13;
  param_1[0xb2] = uVar14;
  param_1[0xb3] = uVar15;
  return param_1;
}



// FUNCTION 1461e86ae FUN_1461e86ae body=356 status=ok
// SIG undefined FUN_1461e86ae(void)

void FUN_1461e86ae(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    FUN_140cfc4c2(&local_38);
    *(undefined4 *)(param_1 + 0x78) = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x7c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x80) = uStack_30;
    *(undefined4 *)(param_1 + 0x84) = uStack_2c;
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar1 = FUN_14108b142(param_1);
      if (lVar1 != 0) {
        lVar1 = FUN_14108b142(param_1);
        if (*(char *)(lVar1 + 0x68) == '\0') {
          lVar1 = FUN_1461e8814(param_1);
          if (lVar1 != 0) {
            uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
            local_38 = (undefined8 *)0x0;
            uStack_30 = 0;
            FUN_1446efa72(&local_38,0,3,0x10);
            uStack_30 = 3;
            *local_38 = &PTR_LAB_14b42a950;
            LOCK();
            UNLOCK();
            lVar4 = DAT_14c758608 + 1;
            lVar1 = DAT_14c758608 + 1;
            if (lVar4 == 0) {
              LOCK();
              UNLOCK();
              lVar4 = DAT_14c758608 + 2;
              lVar1 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar1;
            local_38[2] = lVar4;
            *local_38 = &PTR_FUN_14b99ff20;
            local_38[3] = param_1;
            local_38[4] = &LAB_146012402;
            uVar3 = FUN_1461e8814(param_1);
            FUN_145a375e4(uVar2,&local_40,uVar3,&local_38);
            *(undefined8 *)(param_1 + 0x88) = local_40;
            FUN_1449db362(&local_38);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e8814 FUN_1461e8814 body=136 status=ok
// SIG undefined FUN_1461e8814(void)

void FUN_1461e8814(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = FUN_140feeb70();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x30) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1461e88a8 FUN_1461e88a8 body=1306 status=ok
// SIG undefined FUN_1461e88a8(void)

undefined8 * FUN_1461e88a8(undefined8 *param_1)

{
  FUN_140f2184e();
  *param_1 = &PTR_FUN_14b7e7190;
  param_1[0x72] = &PTR_FUN_14b7e7d60;
  param_1[0xe9] = &PTR_FUN_14b7e7dc0;
  param_1[0xea] = &PTR_FUN_14b7e7dd8;
  param_1[0x10c] = &PTR_FUN_14b7e7df0;
  param_1[0x10d] = &PTR_FUN_14b7e7e10;
  param_1[0x10e] = &PTR_FUN_14b7e7e50;
  param_1[0x10f] = &PTR_FUN_14b7e7e70;
  param_1[0x214] = &PTR_FUN_14b7e7e90;
  param_1[0x215] = &PTR_FUN_14b7e7f50;
  param_1[0x216] = &PTR_FUN_14b7e7f80;
  param_1[0x217] = &PTR_FUN_14b7e7ff0;
  param_1[0x218] = &PTR_FUN_14b7e8020;
  param_1[0x219] = &PTR_FUN_14b7e80a0;
  param_1[0x21a] = &PTR_FUN_14b7e8110;
  param_1[0x21b] = &PTR_FUN_14b7e8140;
  param_1[0x21c] = &PTR_FUN_14b7e8170;
  param_1[0x21d] = &PTR_FUN_14b7e81e0;
  param_1[0x21e] = &PTR_FUN_14b7e8200;
  param_1[0x21f] = &PTR_FUN_14b7e8220;
  param_1[0x220] = &PTR_FUN_14b7e8250;
  param_1[0x221] = &PTR_FUN_14b7e8290;
  param_1[0x222] = &PTR_FUN_14b7e82b0;
  param_1[0x223] = &PTR_FUN_14b7e82d0;
  param_1[0x224] = &PTR_FUN_14b7e8300;
  param_1[0x225] = &PTR_FUN_14b7e8340;
  param_1[0x226] = &PTR_FUN_14b7e8360;
  param_1[0x227] = &PTR_FUN_14b7e8380;
  param_1[0x228] = &PTR_FUN_14b7e8420;
  param_1[0x229] = &PTR_FUN_14b7e8450;
  param_1[0x22a] = &PTR_FUN_14b7e8470;
  param_1[0x22b] = &PTR_FUN_14b7e84b0;
  param_1[0x22c] = &PTR_FUN_14b7e84e0;
  param_1[0x22d] = &PTR_FUN_14b7e8500;
  param_1[0x22e] = &PTR_FUN_14b7e8530;
  param_1[0x22f] = &PTR_FUN_14b7e8580;
  param_1[0x230] = &PTR_FUN_14b7e85b0;
  param_1[0x231] = &PTR_FUN_14b7e8600;
  param_1[0x232] = &PTR_FUN_14b7e8630;
  param_1[0x233] = &PTR_FUN_14b7e8650;
  param_1[0x236] = &PTR_FUN_14b7e8690;
  param_1[0x744] = &PTR_FUN_14b7e86b0;
  param_1[0x745] = &PTR_FUN_14b7e86d0;
  param_1[0x746] = &PTR_FUN_14b7e8700;
  param_1[0x747] = &PTR_FUN_14b7e87e0;
  param_1[0x748] = &PTR_FUN_14b7e8800;
  param_1[0x749] = &PTR_FUN_14b7e8818;
  param_1[0x750] = &PTR_FUN_14b7e8830;
  param_1[0x751] = &PTR_FUN_14b7e8850;
  param_1[0x752] = &PTR_FUN_14b7e8890;
  param_1[0x759] = &PTR_FUN_14b7e8940;
  param_1[0x75a] = &PTR_FUN_14b7e8980;
  param_1[0x75b] = &PTR_FUN_14b7e89b0;
  param_1[0x75c] = &PTR_FUN_14b7e89e0;
  param_1[0x75d] = &PTR_FUN_14b7e8a20;
  param_1[0x761] = &PTR_FUN_14b7e8a40;
  param_1[0x764] = &PTR_FUN_14b7e8a50;
  param_1[0x765] = &PTR_FUN_14b7e8a90;
  param_1[0x766] = &PTR_FUN_14b7e8ba0;
  param_1[0x767] = &PTR_FUN_14b7e8bc0;
  param_1[0x768] = &PTR_FUN_14b7e8be0;
  param_1[0x769] = &PTR_FUN_14b7e8c80;
  param_1[0x76a] = &PTR_FUN_14b7e8d20;
  param_1[0x76b] = &PTR_FUN_14b7e8d60;
  param_1[0x76c] = &PTR_FUN_14b7e8d90;
  param_1[0x76d] = &PTR_FUN_14b7e8e20;
  param_1[0x76e] = &PTR_FUN_14b7e8e90;
  param_1[0x773] = &PTR_FUN_14b7e8ec0;
  param_1[0x774] = &PTR_FUN_14b7e8f00;
  param_1[0x775] = &PTR_FUN_14b7e8f30;
  param_1[0x776] = &PTR_FUN_14b7e8f48;
  param_1[0x777] = &PTR_FUN_14b7e8f60;
  param_1[0x778] = &PTR_FUN_14b7e8f90;
  param_1[0x779] = &PTR_FUN_14b7e8fc0;
  param_1[0x77c] = &PTR_FUN_14b7e9000;
  param_1[0x77d] = &PTR_FUN_14b7e9020;
  param_1[0x77e] = &PTR_FUN_14b7e90f0;
  param_1[0x77f] = &PTR_FUN_14b7e9110;
  param_1[0x780] = &PTR_FUN_14b7e9130;
  param_1[0x781] = &PTR_FUN_14b7e9160;
  param_1[0x782] = &PTR_FUN_14b7e9180;
  param_1[0x783] = &PTR_FUN_14b7e91a0;
  param_1[0x784] = &PTR_FUN_14b7e91d0;
  param_1[0x785] = &PTR_FUN_14b7e9200;
  param_1[0x786] = &PTR_FUN_14b7e9220;
  param_1[0x787] = &PTR_FUN_14b7e9240;
  param_1[0x788] = &PTR_FUN_14b7e9270;
  param_1[0x789] = &PTR_FUN_14b7e9290;
  param_1[0x78a] = &PTR_FUN_14b7e92b0;
  param_1[0x78b] = &PTR_FUN_14b7e9300;
  param_1[0x78c] = &PTR_FUN_14b7e9340;
  param_1[0x78d] = &PTR_FUN_14b7e93a0;
  return param_1;
}



// FUNCTION 1461e8dc2 FUN_1461e8dc2 body=205 status=ok
// SIG undefined FUN_1461e8dc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461e8dc2(void)

{
  if ((DAT_14c9e98a7 & 2) == 0) {
    DAT_14c9e98a7 = DAT_14c9e98a7 | 2;
    _DAT_14c9e9848 = L"FDeferredLightPS";
    _DAT_14c9e9860 = FUN_146826540;
    _DAT_14c9e9868 = FUN_146825d77;
    _DAT_14c9e9870 = FUN_146825fd6;
    _DAT_14c9e9878 = FUN_1407e02ea;
    _DAT_14c9e9880 = FUN_146826273;
    _DAT_14c9e9858 = FUN_1471d2c50;
    _DAT_14c9e9898 = 0xffffffff000000e0;
    _DAT_14c9e98a0 = 8;
    DAT_14c9e98a4 = 0;
    _DAT_14c9e9888 = &LAB_1471d2c7a;
    FUN_1461e8e90();
    FUN_1407e00cc(&DAT_14c9e9840);
    return;
  }
  return;
}



// FUNCTION 1461e8e90 FUN_1461e8e90 body=123 status=ok
// SIG undefined FUN_1461e8e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461e8e90(void)

{
  _DAT_14c9eb8b0 = L"BASE";
  DAT_14c9eb8da = 4;
  _DAT_14c9eb8b8 = FUN_140b35ae4();
  _DAT_14c9eb8c0 = DAT_14c9e9850;
  _DAT_14c9eb8c8 = &LAB_14682652b;
  DAT_14c9e9850 = &DAT_14c9eb8b0;
  DAT_14c9e98a5 = DAT_14c9e98a5 + '\x01';
  _DAT_14c9eb8d0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb8b8 + 100) != '\0') {
    DAT_14c9e98a6 = DAT_14c9e98a6 + '\x01';
  }
  return;
}



// FUNCTION 1461e8f0c FUN_1461e8f0c body=24 status=ok
// SIG undefined FUN_1461e8f0c(void)

void FUN_1461e8f0c(void)

{
  FUN_1461e8f24();
  FUN_1461e91aa();
  FUN_1461e9438();
  return;
}



// FUNCTION 1461e8f24 FUN_1461e8f24 body=644 status=ok
// SIG undefined FUN_1461e8f24(void)

void FUN_1461e8f24(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FGeometryCollectionTransferVertexScalarAttributeNode",1);
  FUN_1446ddc76(&local_d0,"TransferVertexScalarAttribute",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection",1);
  FUN_1400b22c2(local_e8,
                "Transfer a named scalar attribute from the Source Collection to the Target Collection"
               );
  FUN_1446ddc76(local_100,"TransferVertexScalarAttribute",1);
  FUN_1446ddc76(local_108,"FGeometryCollectionTransferVertexScalarAttributeNode",1);
  if (DAT_14cc261e8 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar3,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  FUN_1406751de(local_f8,DAT_14cc261e8,local_108,local_100);
  if (DAT_14cc261e8 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar3,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc261e8);
  if (DAT_14cc261e8 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc261e8 =
         FUN_140002ddd(FUN_14675b798,uVar3,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc261e8);
  FUN_1446ddc76(local_118,"FGeometryCollectionTransferVertexScalarAttributeNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be71770;
  local_50 = FUN_1497c90c8;
  local_78 = FUN_1497c92fe;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e91aa FUN_1461e91aa body=653 status=ok
// SIG undefined FUN_1461e91aa(void)

void FUN_1461e91aa(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SetVertexColorInCollectionFromVertexSelection",1);
  FUN_1446ddc76(&local_d8,"Collection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SetVertexColorInCollectionFromVertexSelection",1);
  FUN_1446ddc76(local_108,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode",1);
  if (DAT_14cc26218 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc26218 =
         FUN_140002ddd(FUN_14675b8c5,uVar3,
                       L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc26218,local_108,local_100);
  if (DAT_14cc26218 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc26218 =
         FUN_140002ddd(FUN_14675b8c5,uVar3,
                       L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26218);
  if (DAT_14cc26218 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc26218 =
         FUN_140002ddd(FUN_14675b8c5,uVar3,
                       L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26218);
  FUN_1446ddc76(local_118,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be71790;
  local_50 = FUN_1497c9336;
  local_78 = FUN_1497c953a;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e9438 FUN_1461e9438 body=653 status=ok
// SIG undefined FUN_1461e9438(void)

void FUN_1461e9438(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  longlong local_98;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1446ddc76(&local_c8,"FSetVertexColorInCollectionFromFloatArrayDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SetVertexColorInCollectionFromFloatArray",1);
  FUN_1446ddc76(&local_d8,"Collection|Utilities",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SetVertexColorInCollectionFromFloatArray",1);
  FUN_1446ddc76(local_108,"FSetVertexColorInCollectionFromFloatArrayDataflowNode",1);
  if (DAT_14cc26200 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc26200 =
         FUN_140002ddd(FUN_14675b82f,uVar3,L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc26200,local_108,local_100);
  if (DAT_14cc26200 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc26200 =
         FUN_140002ddd(FUN_14675b82f,uVar3,L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26200);
  if (DAT_14cc26200 == 0) {
    uVar3 = FUN_14596eea1();
    DAT_14cc26200 =
         FUN_140002ddd(FUN_14675b82f,uVar3,L"SetVertexColorInCollectionFromFloatArrayDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26200);
  FUN_1446ddc76(local_118,"FSetVertexColorInCollectionFromFloatArrayDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be717b0;
  local_50 = FUN_1497c9572;
  local_78 = FUN_1497c9718;
  FUN_1411d7a02(uVar3,local_c0);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e96c6 FUN_1461e96c6 body=89 status=ok
// SIG undefined FUN_1461e96c6(void)

void FUN_1461e96c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1410fa8b6();
  (**(code **)(*param_1 + 0x2f0))(param_1);
  FUN_1461e9720(local_18,param_1);
  FUN_1416dff58(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e9720 FUN_1461e9720 body=239 status=ok
// SIG undefined FUN_1461e9720(void)

undefined8 FUN_1461e9720(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a8e9b60;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b549c00;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_148b09810;
  FUN_145c22c52(&DAT_14cb0ca98,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e9818 FUN_1461e9818 body=322 status=ok
// SIG undefined FUN_1461e9818(void)

void FUN_1461e9818(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x2b);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x26];
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
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461e9960 FUN_1461e9960 body=168 status=ok
// SIG undefined FUN_1461e9960(void)

void FUN_1461e9960(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x1d8))(plVar3,&local_2c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28,local_2c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e9a0a FUN_1461e9a0a body=156 status=ok
// SIG undefined FUN_1461e9a0a(void)

void FUN_1461e9a0a(undefined8 param_1,undefined8 *param_2,float param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    *puVar3 = &PTR_FUN_14b9c6ed8;
    puVar3[1] = *param_2;
    lVar4 = 0x14;
    do {
      *(undefined1 *)((longlong)puVar3 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
      ((undefined8 *)((longlong)puVar3 + lVar4))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar3 + lVar4 + 0x30) = 0;
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != 0xbc);
    puVar3[3] = (double)param_3;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 1461e9aa6 FUN_1461e9aa6 body=246 status=ok
// SIG undefined FUN_1461e9aa6(void)

void FUN_1461e9aa6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(DAT_14cb98ab0 + 0x28);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x180) == 0)) &&
     (*(longlong *)(param_1 + 0x188) == 0)) {
    FUN_1461e9b9e(local_38,param_1,FUN_146239ea0);
    FUN_140c6314c(lVar1 + 0x30,&local_40,local_38);
    FUN_1449db362(local_38);
    *(undefined8 *)(param_1 + 0x180) = local_40;
    lVar1 = *(longlong *)(DAT_14cb98ab0 + 0x28);
    FUN_1461e9b9e(local_38,param_1,FUN_146239d9c);
    FUN_140c6314c(lVar1 + 0x48,&local_40,local_38);
    FUN_1449db362(local_38);
    *(undefined8 *)(param_1 + 0x188) = local_40;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461e9b9e FUN_1461e9b9e body=415 status=ok
// SIG undefined FUN_1461e9b9e(void)

longlong * FUN_1461e9b9e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1461e9c74:
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b990830;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1461e9c74;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b990830;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 1461e9d3e FUN_1461e9d3e body=767 status=ok
// SIG undefined FUN_1461e9d3e(void)

void FUN_1461e9d3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *_Src;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  void *local_58;
  longlong *local_50;
  void *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461ea03e();
  puVar4 = (undefined8 *)*param_2;
  if (*(int *)((longlong)puVar4 + 0x14) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    local_48 = (void *)*puVar4;
    local_40 = (longlong *)puVar4[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    uVar9 = FUN_145ce2ae6(uVar6,&local_48);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    iVar10 = FUN_144a7cc9e(param_1 + 0x1a0,uVar9);
    if ((0 < iVar10) && (*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1d4))) {
      FUN_145dd6c28(param_1);
    }
  }
  else {
    lVar11 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
    if (lVar11 != 0) {
      lVar11 = FUN_140b64196(lVar11);
      if (lVar11 != 0) {
        FUN_146048f14(*(undefined8 *)(param_1 + 0x50),&local_58);
        _Src = local_58;
        local_48 = (void *)0x0;
        local_40 = (longlong *)CONCAT44(local_40._4_4_,(int)local_50);
        if ((longlong)(int)local_50 == 0) {
          local_40 = (longlong *)((ulonglong)local_50 & 0xffffffff);
        }
        else {
          FUN_1446dd670(&local_48,(ulonglong)local_50 & 0xffffffff,0);
          memcpy(local_48,_Src,(longlong)(int)local_50 * 2);
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8(local_58);
        }
        local_58 = *(void **)*param_2;
        local_50 = (longlong *)((undefined8 *)*param_2)[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_141642c4c(lVar11,&local_48,&local_58);
        plVar5 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar7 = FUN_1414e62ca();
    if (cVar7 != '\0') {
      cVar7 = FUN_145dd6ca2(param_1 + 0x1f8,param_2);
      if (cVar7 != '\0') {
        uVar8 = FUN_145c29970(*(undefined8 *)(param_1 + 0x50));
        *(undefined1 *)(param_1 + 0x22c) = uVar8;
        local_48 = *(void **)*param_2;
        plVar5 = (longlong *)((undefined8 *)*param_2)[1];
        if (plVar5 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_40 = plVar5;
        }
        FUN_140056680(&local_58,L"player_left");
        FUN_145c29a14(param_1,&local_58,&local_48);
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar1 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ea03e FUN_1461ea03e body=67 status=ok
// SIG undefined FUN_1461ea03e(void)

void FUN_1461ea03e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x14) != 0) {
    FUN_145eeedcc(param_1,lVar1,1);
    lVar1 = *param_2;
  }
  if (*(char *)(lVar1 + 0x18) == '\0') {
    FUN_141589cce(param_1);
  }
  FUN_145eee922(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1461ea08c FUN_1461ea08c body=651 status=ok
// SIG undefined FUN_1461ea08c(void)

undefined8 * FUN_1461ea08c(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145ae736a();
  *param_1 = &PTR_FUN_14b2145b0;
  param_1[0xd] = &PTR_FUN_14b214890;
  param_1[0x18] = 0x10000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1d] = 0x10000000000;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_20 = FUN_1413336e6();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_40 = FUN_1458f0824();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_40);
    }
    FUN_140909372(&local_40,&local_38);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_50 = FUN_145957af6();
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_50);
    }
    FUN_140909372(&local_50,&local_48);
    local_58 = param_1[2];
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    local_60 = FUN_1458d4322();
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_60);
    }
    FUN_140909372(&local_60,&local_58);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ea318 FUN_1461ea318 body=519 status=ok
// SIG undefined FUN_1461ea318(void)

void FUN_1461ea318(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a7484c(param_2 + 0x28,local_98);
  local_78 = *(undefined4 *)(param_2 + 0x10);
  uStack_74 = *(undefined4 *)(param_2 + 0x14);
  uStack_70 = (int)*(undefined8 *)(param_2 + 0x18);
  uStack_6c = (int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  local_68 = *(undefined8 *)(param_2 + 0x20);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  if (param_3 == '\0') {
    lVar4 = FUN_1461ea520(param_1[6]);
  }
  else {
    plVar1 = param_1 + 0xf;
    iVar3 = (int)param_1[0x11];
    if ((-1 < (longlong)iVar3) && (iVar3 < (int)param_1[0x10])) {
      lVar4 = *(longlong *)(*plVar1 + (longlong)iVar3 * 8);
      *(byte *)(lVar4 + 0x1f8) = *(byte *)(lVar4 + 0x1f8) | 1;
      puVar8 = local_98;
      puVar9 = (undefined8 *)(lVar4 + 0x240);
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      goto LAB_1461ea41b;
    }
    lVar4 = FUN_1461ea520(param_1[6]);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    iVar3 = (int)param_1[0x10];
    *(uint *)(param_1 + 0x10) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x84) < iVar3 + 1U) {
      FUN_1461ea5d2(plVar1,iVar3);
    }
    lVar7 = *plVar1;
    *(longlong *)(lVar7 + (longlong)iVar3 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
      lVar4 = *(longlong *)(lVar7 + (longlong)iVar3 * 8);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,lVar4,local_98,0);
LAB_1461ea41b:
  uVar5 = FUN_140e3ec56();
  uVar6 = FUN_140a2e4c6();
  FUN_144a54316(uVar6,param_2,uVar5,lVar4);
  uVar2 = (*(uint *)(lVar4 + 0x2d4) & 0xfffffffd) + (uint)*(byte *)(param_2 + 0x54) * 2;
  *(uint *)(lVar4 + 0x2d4) = uVar2;
  uVar2 = (uVar2 & 0xfffffffb) + (uint)*(byte *)(param_2 + 0x55) * 4;
  *(uint *)(lVar4 + 0x2d4) = uVar2;
  *(uint *)(lVar4 + 0x2d4) = (uVar2 & 0xfffffff7) + (uint)*(byte *)(param_2 + 0x56) * 8;
  FUN_14045627c(lVar4,1,1);
  FUN_1448215fa(lVar4);
  *(int *)(param_1 + 0x11) = (int)param_1[0x11] + 1;
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461ea520 FUN_1461ea520 body=177 status=ok
// SIG undefined FUN_1461ea520(void)

undefined8 FUN_1461ea520(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140e3ec56();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ea5d2 FUN_1461ea5d2 body=132 status=ok
// SIG undefined FUN_1461ea5d2(void)

void FUN_1461ea5d2(longlong param_1,int param_2)

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



// FUNCTION 1461ea678 FUN_1461ea678 body=306 status=ok
// SIG undefined FUN_1461ea678(void)

void FUN_1461ea678(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    lVar1 = FUN_14479d2ce(param_1 + 9);
    if (*(char *)(lVar1 + 0x178) == '\x03') {
      local_68 = *(undefined8 *)param_2;
      local_60 = param_2[2];
      FUN_1448075d0(local_58);
      if (DAT_14cb758b8 == 0) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar1 = FUN_144837462(DAT_14cb758b8,local_58);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        if (lVar1 != 0) {
          if (*(char *)(lVar1 + 0x48) == '\x01') {
            FUN_143cf5f90(param_1,param_2);
          }
          else {
            uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
            puVar3 = (ulonglong *)FUN_14105a298(uVar2);
            uVar4 = 0;
            if ((param_3 & 0xffffffff) <= *puVar3) {
              uVar4 = *puVar3 - (param_3 & 0xffffffff);
            }
            uVar5 = 0x7fffffff;
            if (uVar4 < 0x7fffffff) {
              uVar5 = uVar4;
            }
            if (DAT_14c7638c0 == '\0') {
              uVar5 = uVar4;
            }
            *puVar3 = uVar5;
            FUN_14105a360(param_1,param_2);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ea7ac FUN_1461ea7ac body=227 status=ok
// SIG undefined FUN_1461ea7ac(void)

bool FUN_1461ea7ac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x28,&local_50,0);
    lVar4 = local_50;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x30);
    local_50 = 0;
    local_48 = 0;
    FUN_140146ccc(&local_50,param_1 + 0x10);
    local_58 = &local_50;
    (*pcVar1)(lVar3,param_2,param_3,*(undefined4 *)(param_1 + 8));
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ea890 FUN_1461ea890 body=37 status=ok
// SIG undefined FUN_1461ea890(void)

void FUN_1461ea890(undefined8 param_1,void *param_2)

{
  memset(param_2,0,800);
  FUN_1461ea8b6(param_2);
  return;
}



// FUNCTION 1461ea8b6 FUN_1461ea8b6 body=143 status=ok
// SIG undefined FUN_1461ea8b6(void)

undefined8 * FUN_1461ea8b6(undefined8 *param_1)

{
  FUN_1461ea946();
  *param_1 = &PTR_FUN_14b61b850;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x6000;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
  FUN_145a9bcf6(param_1 + 0x59);
  return param_1;
}



// FUNCTION 1461ea946 FUN_1461ea946 body=82 status=ok
// SIG undefined FUN_1461ea946(void)

undefined8 * FUN_1461ea946(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1461ea998();
  *param_1 = &PTR_FUN_14b40c730;
  param_1[0x34] = 0xbf800000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  iVar1 = DAT_14cb80af0 + 1;
  *(int *)((longlong)param_1 + 0x1ac) = DAT_14cb80af0;
  DAT_14cb80af0 = iVar1;
  return param_1;
}



// FUNCTION 1461ea998 FUN_1461ea998 body=238 status=ok
// SIG undefined FUN_1461ea998(void)

void FUN_1461ea998(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *param_1 = &PTR_FUN_14b1b5400;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}



// FUNCTION 1461eaa86 FUN_1461eaa86 body=1670 status=ok
// SIG undefined FUN_1461eaa86(void)

void FUN_1461eaa86(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_144729dda(param_1 + 0xc18);
  if (cVar1 == '\0') goto switchD_1461eab7c_caseD_1f;
  uVar2 = FUN_14479d2ce(param_1 + 0xc18);
  local_28 = 0;
  FUN_14485c47a(&local_28,uVar2);
  local_38 = local_28;
  local_50 = local_28;
  local_68 = local_28;
  local_80 = local_28;
  local_98 = local_28;
  local_b0 = local_28;
  local_c8 = local_28;
  local_d0 = param_1;
  local_c0 = param_2;
  local_b8 = param_1;
  local_a8 = param_2;
  local_a0 = param_1;
  local_90 = param_2;
  local_88 = param_1;
  local_78 = param_2;
  local_70 = param_1;
  local_60 = param_2;
  local_58 = param_1;
  local_48 = param_2;
  local_40 = param_1;
  local_30 = param_2;
  switch(param_2) {
  case 2:
    lVar3 = param_1 + 0x3c0;
    param_1 = param_1 + 0x3a8;
    break;
  case 3:
    lVar3 = param_1 + 0x420;
    param_1 = param_1 + 0x408;
    break;
  case 4:
    lVar3 = param_1 + 0x480;
    param_1 = param_1 + 0x468;
    goto LAB_1461eabef;
  case 5:
    lVar3 = param_1 + 0x4c8;
    param_1 = param_1 + 0x4b0;
    goto LAB_1461eabef;
  case 6:
    lVar3 = param_1 + 0x4f0;
    param_1 = param_1 + 0x4d8;
    goto LAB_1461eabef;
  case 7:
    lVar3 = param_1 + 0x510;
    param_1 = param_1 + 0x4f8;
LAB_1461eabef:
    FUN_1416431d8(&local_88,param_1,lVar3);
    goto switchD_1461eab7c_caseD_1f;
  case 8:
    lVar3 = param_1 + 0x530;
    param_1 = param_1 + 0x518;
    goto LAB_1461ead14;
  case 9:
    lVar3 = param_1 + 0x578;
    param_1 = param_1 + 0x560;
    goto LAB_1461ead14;
  case 10:
    lVar3 = param_1 + 0x598;
    param_1 = param_1 + 0x580;
    goto LAB_1461ead14;
  case 0xb:
    lVar3 = param_1 + 0x5b8;
    param_1 = param_1 + 0x5a0;
    goto LAB_1461ead14;
  case 0xc:
    lVar3 = param_1 + 0x238;
    param_1 = param_1 + 0x220;
    goto LAB_1461eac4f;
  case 0xd:
    lVar3 = param_1 + 600;
    param_1 = param_1 + 0x240;
    goto LAB_1461eac4f;
  case 0xe:
    lVar3 = param_1 + 0x278;
    param_1 = param_1 + 0x260;
    goto LAB_1461eac4f;
  case 0xf:
    lVar3 = param_1 + 0x298;
    param_1 = param_1 + 0x280;
    goto LAB_1461eac4f;
  case 0x10:
    lVar3 = param_1 + 0x378;
    param_1 = param_1 + 0x360;
    goto LAB_1461eac2f;
  case 0x11:
    lVar3 = param_1 + 0x3a0;
    param_1 = param_1 + 0x388;
LAB_1461eac2f:
    FUN_141643714(&local_b8,param_1,lVar3);
    goto switchD_1461eab7c_caseD_1f;
  case 0x12:
    lVar3 = param_1 + 0x3e0;
    param_1 = param_1 + 0x3c8;
    break;
  case 0x13:
    lVar3 = param_1 + 0x158;
    param_1 = param_1 + 0x140;
    break;
  case 0x14:
    lVar3 = param_1 + 0x178;
    param_1 = param_1 + 0x160;
    break;
  case 0x15:
    lVar3 = param_1 + 0x198;
    param_1 = param_1 + 0x180;
    break;
  case 0x16:
    lVar3 = param_1 + 0x1b8;
    param_1 = param_1 + 0x1a0;
    break;
  case 0x17:
    lVar3 = param_1 + 0x18;
    break;
  case 0x18:
    lVar3 = param_1 + 0x38;
    param_1 = param_1 + 0x20;
    break;
  case 0x19:
    lVar3 = param_1 + 0x58;
    param_1 = param_1 + 0x40;
    break;
  case 0x1a:
    lVar3 = param_1 + 0x78;
    param_1 = param_1 + 0x60;
    break;
  case 0x1b:
    lVar3 = param_1 + 0x6c8;
    param_1 = param_1 + 0x6b0;
    break;
  case 0x1c:
    lVar3 = param_1 + 0x6a8;
    param_1 = param_1 + 0x690;
    break;
  case 0x1d:
    lVar3 = param_1 + 0x6e8;
    param_1 = param_1 + 0x6d0;
    break;
  case 0x1e:
    lVar3 = param_1 + 0x708;
    param_1 = param_1 + 0x6f0;
    break;
  default:
    goto switchD_1461eab7c_caseD_1f;
  case 0x20:
    FUN_14411e306(&local_d0,param_1 + 0x870,param_1 + 0x888);
    goto switchD_1461eab7c_caseD_1f;
  case 0x21:
    lVar3 = param_1 + 0x848;
    param_1 = param_1 + 0x830;
    break;
  case 0x22:
    lVar3 = param_1 + 0x400;
    param_1 = param_1 + 1000;
    break;
  case 0x23:
    lVar3 = param_1 + 0x828;
    param_1 = param_1 + 0x810;
    break;
  case 0x25:
    lVar3 = param_1 + 0x118;
    param_1 = param_1 + 0x100;
    break;
  case 0x26:
    lVar3 = param_1 + 0x138;
    param_1 = param_1 + 0x120;
    break;
  case 0x27:
    lVar3 = param_1 + 0x768;
    param_1 = param_1 + 0x750;
    break;
  case 0x28:
    lVar3 = param_1 + 0x7a8;
    param_1 = param_1 + 0x790;
    break;
  case 0x29:
    lVar3 = param_1 + 0x788;
    param_1 = param_1 + 0x770;
    break;
  case 0x2a:
    lVar3 = param_1 + 0x7c8;
    param_1 = param_1 + 0x7b0;
    break;
  case 0x2b:
    lVar3 = param_1 + 0xb8;
    param_1 = param_1 + 0xa0;
    break;
  case 0x2c:
    lVar3 = param_1 + 0xd8;
    param_1 = param_1 + 0xc0;
    break;
  case 0x2d:
    lVar3 = param_1 + 0x98;
    param_1 = param_1 + 0x80;
    break;
  case 0x2e:
    lVar3 = param_1 + 0x440;
    param_1 = param_1 + 0x428;
    break;
  case 0x2f:
    lVar3 = param_1 + 0x460;
    param_1 = param_1 + 0x448;
    break;
  case 0x30:
    lVar3 = param_1 + 0xf8;
    param_1 = param_1 + 0xe0;
    break;
  case 0x31:
    lVar3 = param_1 + 0x868;
    param_1 = param_1 + 0x850;
    break;
  case 0x32:
    lVar3 = param_1 + 0x1d8;
    param_1 = param_1 + 0x1c0;
    break;
  case 0x33:
    lVar3 = param_1 + 0x8d0;
    param_1 = param_1 + 0x8b8;
    break;
  case 0x34:
    lVar3 = param_1 + 0x8b0;
    param_1 = param_1 + 0x898;
    break;
  case 0x35:
    lVar3 = param_1 + 0x808;
    param_1 = param_1 + 0x7f0;
    break;
  case 0x36:
    lVar3 = param_1 + 0x7e8;
    param_1 = param_1 + 2000;
    break;
  case 0x37:
    lVar3 = param_1 + 0x218;
    param_1 = param_1 + 0x200;
    goto LAB_1461eac4f;
  case 0x38:
    lVar3 = param_1 + 0x5f8;
    param_1 = param_1 + 0x5e0;
    goto LAB_1461ead14;
  case 0x39:
    FUN_14411e59e(&local_58,param_1 + 0x608,param_1 + 0x620);
    goto switchD_1461eab7c_caseD_1f;
  case 0x3a:
    lVar3 = param_1 + 0x728;
    param_1 = param_1 + 0x710;
    break;
  case 0x3b:
    lVar3 = param_1 + 0x748;
    param_1 = param_1 + 0x730;
    break;
  case 0x3c:
    lVar3 = param_1 + 0x2b8;
    param_1 = param_1 + 0x2a0;
    goto LAB_1461eac4f;
  case 0x3d:
    lVar3 = param_1 + 0x2d8;
    param_1 = param_1 + 0x2c0;
    goto LAB_1461eac4f;
  case 0x3e:
    lVar3 = param_1 + 0x2f8;
    param_1 = param_1 + 0x2e0;
    goto LAB_1461eac4f;
  case 0x3f:
    lVar3 = param_1 + 0x318;
    param_1 = param_1 + 0x300;
    goto LAB_1461eac4f;
  case 0x41:
    lVar3 = param_1 + 0x338;
    param_1 = param_1 + 800;
    goto LAB_1461eac4f;
  case 0x42:
    lVar3 = param_1 + 0x358;
    param_1 = param_1 + 0x340;
LAB_1461eac4f:
    FUN_141643476(&local_a0,param_1,lVar3);
    goto switchD_1461eab7c_caseD_1f;
  case 0x43:
    lVar3 = param_1 + 0x950;
    param_1 = param_1 + 0x938;
    break;
  case 0x44:
    lVar3 = param_1 + 0x648;
    param_1 = param_1 + 0x630;
    goto LAB_1461ead14;
  case 0x45:
    lVar3 = param_1 + 0x8f0;
    param_1 = param_1 + 0x8d8;
    break;
  case 0x46:
    lVar3 = param_1 + 0x1f8;
    param_1 = param_1 + 0x1e0;
    break;
  case 0x47:
    lVar3 = param_1 + 0x910;
    param_1 = param_1 + 0x8f8;
    break;
  case 0x48:
    lVar3 = param_1 + 0x930;
    param_1 = param_1 + 0x918;
    break;
  case 0x49:
    lVar3 = param_1 + 0x9e8;
    param_1 = param_1 + 0x9d0;
    break;
  case 0x4a:
    lVar3 = param_1 + 0x558;
    param_1 = param_1 + 0x540;
    goto LAB_1461ead14;
  case 0x4b:
    lVar3 = param_1 + 0x5d8;
    param_1 = param_1 + 0x5c0;
LAB_1461ead14:
    FUN_14411e068(&local_70,param_1,lVar3);
    goto switchD_1461eab7c_caseD_1f;
  }
  FUN_141642f40(&local_40,param_1,lVar3);
switchD_1461eab7c_caseD_1f:
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461eb10e FUN_1461eb10e body=208 status=ok
// SIG undefined FUN_1461eb10e(void)

void FUN_1461eb10e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar3 != 0) && (iVar2 = FUN_14490d72a(lVar3), iVar2 == 3)) {
      return;
    }
    cVar1 = FUN_1461eb1de(param_1);
    if ((cVar1 == '\0') &&
       (lVar3 = (**(code **)(*param_1 + 0x180))(param_1), 0 < *(int *)(lVar3 + 0x238))) {
      iVar2 = 0;
      lVar6 = 0;
      do {
        plVar4 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar6);
        if ((plVar4 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*plVar4 + 0x6c8))(plVar4), cVar1 == '\0')) {
          lVar5 = FUN_144a5dd5e();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              == lVar5 + 0x30)) {
            FUN_148c364a6(plVar4,param_2);
          }
        }
        lVar6 = lVar6 + 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(lVar3 + 0x238));
    }
  }
  return;
}



// FUNCTION 1461eb1de FUN_1461eb1de body=126 status=ok
// SIG undefined FUN_1461eb1de(void)

undefined8 FUN_1461eb1de(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
LAB_1461eb254:
    bVar7 = (byte)param_3;
  }
  else {
    lVar4 = FUN_1403ca142();
    bVar7 = (byte)param_3;
    plVar1 = *(longlong **)(lVar3 + 0x1f0);
    if (plVar1 == (longlong *)0x0) goto LAB_1461eb254;
    bVar2 = 0;
    uVar6 = 0;
    if (lVar4 != 0) {
      lVar3 = plVar1[2];
      if (lVar3 == 0) goto LAB_1461eb24b;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (param_3 = *(longlong *)(lVar3 + 0x30),
         *(longlong *)(param_3 + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        uVar5 = (**(code **)(*plVar1 + 0x498))();
        bVar7 = (byte)uVar5 < 6;
        uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        bVar2 = 1;
        goto LAB_1461eb24b;
      }
      goto LAB_1461eb254;
    }
  }
  bVar2 = 0;
  uVar6 = 0;
LAB_1461eb24b:
  return CONCAT71(uVar6,bVar2 & bVar7);
}



// FUNCTION 1461eb25c FUN_1461eb25c body=106 status=ok
// SIG undefined FUN_1461eb25c(void)

void FUN_1461eb25c(longlong param_1)

{
  undefined2 *puVar1;
  
  FUN_145c01e8c();
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(int *)(param_1 + 0x3f4) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 1000),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 1000);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  FUN_1461eb2c6(param_1);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 1461eb2c6 FUN_1461eb2c6 body=561 status=ok
// SIG undefined FUN_1461eb2c6(void)

void FUN_1461eb2c6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1407329d4(*(longlong *)(param_1 + 0x3c8),1,&local_48);
    lVar3 = local_48;
    lVar6 = (longlong)(int)uStack_40;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + lVar7);
        if (lVar2 != 0) {
          lVar5 = FUN_144a7a726();
          if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
             ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
            local_50 = lVar2;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar2);
            }
            FUN_1491cfa42(param_1 + 0x418,&local_50);
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    iVar1 = *(int *)(param_1 + 0x420);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x418);
      lVar6 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar6);
        if ((plVar4 != (longlong *)0x0) && ((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0)) {
          (**(code **)(*plVar4 + 0x4a0))(plVar4,&DAT_14cadad64);
          FUN_1401bf202(plVar4);
          (**(code **)(*plVar4 + 0x420))(plVar4,0);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x404) < 0) {
    *(undefined4 *)(param_1 + 0x400) = 0;
    FUN_1402191ca(param_1 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x400) = 0;
  }
  if (*(int *)(param_1 + 0x414) < 0) {
    *(undefined4 *)(param_1 + 0x410) = 0;
    FUN_1401a2688(param_1 + 0x408,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x410) = 0;
  }
  if (*(int *)(param_1 + 0x424) < 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    FUN_1474beb1a(param_1 + 0x418,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  if (*(int *)(param_1 + 0x434) < 0) {
    *(undefined4 *)(param_1 + 0x430) = 0;
    FUN_145fd96a4(param_1 + 0x428,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461eb500 FUN_1461eb500 body=660 status=ok
// SIG undefined FUN_1461eb500(void)

longlong * FUN_1461eb500(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = FUN_14007ca06();
  FUN_1406ed334(param_1,uVar4);
  *param_1 = (longlong)&PTR_FUN_14b423000;
  param_1[0x1f] = (longlong)&PTR_FUN_14b423370;
  FUN_1406ed278(param_1 + 0x20);
  FUN_1406ed278(param_1 + 0x42);
  FUN_1406ed278(param_1 + 100);
  FUN_1406ed278(param_1 + 0x86);
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfe;
  local_70 = 2;
  uStack_68 = 2;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_70);
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  local_58 = 0;
  local_50 = 0x100000000;
  FUN_140f937a0(&local_70,param_1 + 0x20);
  FUN_140f937a0(&local_70,param_1 + 0x42);
  FUN_140f937a0(&local_70,param_1 + 100);
  FUN_140f937a0(&local_70,param_1 + 0x86);
  local_78 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_78[1] = (longlong)&DAT_100000001;
  *local_78 = (longlong)&PTR_FUN_14a492060;
  local_80 = local_78 + 2;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 2;
  if (local_58 == 0) {
    local_78[9] = local_60;
    *(undefined4 *)(local_78 + 7) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_78 + 0x3c) = local_70._4_4_;
    *(undefined4 *)(local_78 + 8) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)local_78 + 0x44) = uStack_68._4_4_;
  }
  local_78[10] = local_58;
  local_58 = 0;
  *(undefined4 *)(local_78 + 0xb) = (undefined4)local_50;
  *(undefined4 *)((longlong)local_78 + 0x5c) = local_50._4_4_;
  local_50 = 0x100000000;
  FUN_140aec6f8(&local_80);
  plVar1 = local_78;
  if (local_78 == (longlong *)0x0) {
    param_1[0x1c] = (longlong)local_80;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_1461eb6cb;
    param_1[0x1d] = 0;
LAB_1461eb732:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1461eb6cb;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)local_80;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_78 != plVar5) {
      param_1[0x1d] = (longlong)local_78;
      if (plVar5 == (longlong *)0x0) goto LAB_1461eb6cb;
      goto LAB_1461eb732;
    }
    LOCK();
    plVar5 = local_78 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1461eb6cb;
    (**(code **)*local_78)(local_78);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1461eb6cb:
  plVar1 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_70);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461eb796 FUN_1461eb796 body=246 status=ok
// SIG undefined FUN_1461eb796(void)

undefined8 *
FUN_1461eb796(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_1461eb88e(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461eb88e FUN_1461eb88e body=423 status=ok
// SIG undefined FUN_1461eb88e(void)

void FUN_1461eb88e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461eb964:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6880;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461eb964;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c6880;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461eba1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461eba36 FUN_1461eba36 body=608 status=ok
// SIG undefined FUN_1461eba36(void)

longlong *
FUN_1461eba36(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar1 = FUN_14117928e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_3;
      if ((lVar2 == 0) || (DAT_14c950c29 == 0)) {
        if (lVar2 == 0) goto LAB_1461ebaca;
      }
      else {
        FUN_1456cec3c(lVar2);
      }
      lVar1 = FUN_14592c82e();
      if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        lVar2 = *param_3;
        *param_2 = lVar2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
        }
        goto LAB_1461ebbc1;
      }
    }
  }
LAB_1461ebaca:
  local_50 = *param_3;
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_60 = param_6;
  local_68 = param_5;
  FUN_1416439b2(param_1,&local_48,&local_50,param_4);
  lVar2 = local_48;
  if (DAT_14c950c29 == 1) {
    if (local_48 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = local_48;
    }
  }
  *param_3 = lVar2;
  if ((*(longlong *)(param_1 + 0x518) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x518) + 0x90), lVar1 != 0)) {
    local_58 = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_60 = param_6;
    local_68 = param_5;
    FUN_1461ebc9c(lVar1,&local_48,&local_58,param_4);
    lVar2 = local_48;
    if (local_48 != 0) {
      lVar1 = FUN_14117928e();
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
        if (local_48 != 0 &&
            *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
            lVar1 + 0x30) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c();
          }
          *param_3 = local_48;
        }
      }
    }
    lVar2 = *param_3;
  }
  *param_2 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_1461ebbc1:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ebc9c FUN_1461ebc9c body=11 status=ok
// SIG undefined FUN_1461ebc9c(void)

undefined8 * FUN_1461ebc9c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1461ebcb2 FUN_1461ebcb2 body=829 status=ok
// SIG undefined FUN_1461ebcb2(void)

undefined8 * FUN_1461ebcb2(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14b212880;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar2 = FUN_14009d2a0();
  FUN_145c2e608();
  *(undefined2 *)(param_1 + 6) = DAT_14cb8a3cc;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_28 = FUN_145920b2e();
    if (local_28 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_28);
    }
    local_30 = param_1[2];
    if ((local_30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_30,&local_28);
    local_38 = FUN_14099c56c();
    if (local_38 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_38);
    }
    local_40 = param_1[2];
    if ((local_40 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_40,&local_38);
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_48,uVar1);
    uVar1 = DAT_14cb8a3cc;
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_50,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc2);
    local_58 = param_1[2];
    if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_58,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc4);
    local_60 = param_1[2];
    if ((local_60 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_60,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc6);
    local_68 = param_1[2];
    if ((local_68 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_68,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xbc);
    local_70 = param_1[2];
    if ((local_70 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_70,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xbe);
    local_78 = param_1[2];
    if ((local_78 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_78,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0xc0);
    local_80 = param_1[2];
    if ((local_80 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_80,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ebff0 FUN_1461ebff0 body=205 status=ok
// SIG undefined FUN_1461ebff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461ebff0(void)

{
  if ((DAT_14cb32b3f & 2) == 0) {
    DAT_14cb32b3f = DAT_14cb32b3f | 2;
    _DAT_14cb32ae0 = L"NiagaraFillIntBufferCS";
    _DAT_14cb32af8 = FUN_146826540;
    _DAT_14cb32b00 = FUN_146825d77;
    _DAT_14cb32b08 = FUN_146825fd6;
    _DAT_14cb32b10 = FUN_1407e02ea;
    _DAT_14cb32b18 = FUN_146826273;
    _DAT_14cb32af0 = FUN_14804e740;
    _DAT_14cb32b30 = 0xffffffff000000e0;
    _DAT_14cb32b38 = 8;
    DAT_14cb32b3c = 0;
    _DAT_14cb32b20 = &LAB_14804e76a;
    FUN_1461ec0be();
    FUN_1407e00cc(&DAT_14cb32ad8);
    return;
  }
  return;
}



// FUNCTION 1461ec0be FUN_1461ec0be body=123 status=ok
// SIG undefined FUN_1461ec0be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461ec0be(void)

{
  _DAT_14cb357e0 = L"BASE";
  DAT_14cb3580a = 4;
  _DAT_14cb357e8 = FUN_140b35ae4();
  _DAT_14cb357f0 = DAT_14cb32ae8;
  _DAT_14cb357f8 = &LAB_14682652b;
  DAT_14cb32ae8 = &DAT_14cb357e0;
  DAT_14cb32b3d = DAT_14cb32b3d + '\x01';
  _DAT_14cb35800 = 0x100000000;
  if (*(char *)(_DAT_14cb357e8 + 100) != '\0') {
    DAT_14cb32b3e = DAT_14cb32b3e + '\x01';
  }
  return;
}



// FUNCTION 1461ec13a FUN_1461ec13a body=226 status=ok
// SIG undefined FUN_1461ec13a(void)

longlong * FUN_1461ec13a(longlong *param_1)

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
  pcVar13 = FUN_146462472;
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



// FUNCTION 1461ec222 FUN_1461ec222 body=132 status=ok
// SIG undefined FUN_1461ec222(void)

undefined1 * FUN_1461ec222(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x93;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1461ec21e;
}



// FUNCTION 1461ec2a6 FUN_1461ec2a6 body=138 status=ok
// SIG undefined FUN_1461ec2a6(void)

code * FUN_1461ec2a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumElements";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461ec222;
}



// FUNCTION 1461ec338 FUN_1461ec338 body=666 status=ok
// SIG undefined FUN_1461ec338(void)

undefined8 * FUN_1461ec338(undefined8 *param_1)

{
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af095a0;
  param_1[6] = &PTR_FUN_14af09880;
  param_1[7] = &PTR_FUN_14af098a0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3ff00000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0x3ff0000000000000;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x21] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4e] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x50] = &PTR_LAB_14af12260;
  param_1[0x51] = param_1;
  param_1[0x4c] = &LAB_148517a1a;
  param_1[0x56] = 0;
  param_1[0x58] = &PTR_LAB_14af12280;
  param_1[0x59] = param_1;
  param_1[0x54] = &LAB_148517a42;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0x100000000;
  return param_1;
}



// FUNCTION 1461ec5d2 FUN_1461ec5d2 body=437 status=ok
// SIG undefined FUN_1461ec5d2(void)

void FUN_1461ec5d2(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar4 = FUN_140334a94(lVar4,uVar5);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x188) != 0)) {
      lVar6 = FUN_14119cfbe();
      plVar3 = *(longlong **)(lVar4 + 0x188);
      if (((plVar3 != (longlong *)0x0) &&
          (((lVar6 != 0 && (lVar4 = plVar3[2], lVar4 != 0)) &&
           (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        (**(code **)(*plVar3 + 0x478))(plVar3,param_1);
      }
    }
  }
  param_1[0x4c] = 0;
  plVar3 = (longlong *)param_1[0x4d];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x4d] = 0;
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
  param_1[0x4a] = 0;
  plVar3 = (longlong *)param_1[0x4b];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x4b] = 0;
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
  param_1[0x48] = 0;
  plVar3 = (longlong *)param_1[0x49];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x49] = 0;
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
  FUN_1461ec788(param_1,0);
  FUN_141125c4a(param_1,param_2);
  return;
}



// FUNCTION 1461ec788 FUN_1461ec788 body=238 status=ok
// SIG undefined FUN_1461ec788(void)

void FUN_1461ec788(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    lVar1 = FUN_140e94dc2(lVar1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x30,param_1);
      if (param_2 != '\0') {
        local_38 = FUN_148b58bb0;
        local_30 = 0;
        FUN_148b58ab0(lVar1 + 0x30,local_28,param_1);
      }
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1400b6e86(lVar1);
    if (lVar1 != 0) {
      FUN_1401073f6(lVar1 + 0x180,param_1);
      if (param_2 != '\0') {
        FUN_148b58c5a(&local_40);
        FUN_148b58bdc(lVar1 + 0x180,param_1,local_40);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ec88e FUN_1461ec88e body=507 status=ok
// SIG undefined FUN_1461ec88e(void)

void FUN_1461ec88e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  local_68 = local_3c;
  FUN_1461eca8a(local_18,&local_58,local_34,local_38);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461eca8a FUN_1461eca8a body=135 status=ok
// SIG undefined FUN_1461eca8a(void)

void FUN_1461eca8a(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_140d4a076();
  if (lVar1 != 0) {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_58 = param_5;
    FUN_1416440ba(lVar1,&local_48,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ecb12 FUN_1461ecb12 body=506 status=ok
// SIG undefined FUN_1461ecb12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461ecb12(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _DAT_14ca9f348 = (undefined *)0x0;
  _DAT_14ca9f350 = 0;
  DAT_14ca9f370 = 0;
  DAT_14ca9f358 = &DAT_14ca9f378;
  DAT_14ca9f368 = &DAT_14ca9f3e8;
  _DAT_14ca9f378 = 0x2f2f;
  DAT_14ca9f37a = 0x20;
  _DAT_14ca9f37b = 0x7361486775626544;
  _DAT_14ca9f383 = 0x5f68;
  DAT_14ca9f360 = &DAT_14ca9f385;
  local_38 = &local_28;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0x20;
  FUN_14164422e(&local_38,&DAT_14ca9f358);
  puVar1 = DAT_14ca9f360;
  if (DAT_14ca9f368 <= DAT_14ca9f360 + 1) {
    FUN_145753a78(&DAT_14ca9f358,1);
    puVar1 = DAT_14ca9f360;
  }
  *puVar1 = 10;
  DAT_14ca9f360 = puVar1 + 1;
  if (DAT_14ca9f368 <= puVar1 + 10) {
    FUN_145753a78(&DAT_14ca9f358,9);
  }
  *(undefined8 *)DAT_14ca9f360 = 0x203120656e696c23;
  *(undefined1 *)((longlong)DAT_14ca9f360 + 8) = 0x22;
  pcVar2 = (char *)((longlong)DAT_14ca9f360 + 9);
  if (DAT_14ca9f368 <= (char *)((longlong)DAT_14ca9f360 + 0x1f)) {
    DAT_14ca9f360 = (char *)((longlong)DAT_14ca9f360 + 9);
    FUN_145753a78(&DAT_14ca9f358,0x16);
    pcVar2 = DAT_14ca9f360;
  }
  builtin_strncpy(pcVar2,"__UE_FILENAME_SENTINEL",0x16);
  DAT_14ca9f360 = pcVar2 + 0x16;
  if (DAT_14ca9f368 <= pcVar2 + 0x18) {
    FUN_145753a78(&DAT_14ca9f358,2);
  }
  DAT_14ca9f360[0] = '\"';
  DAT_14ca9f360[1] = '\n';
  DAT_14ca9f360 = DAT_14ca9f360 + 2;
  _DAT_14ca9f350 = (int)DAT_14ca9f360 - (int)DAT_14ca9f358;
  _DAT_14ca9f348 = DAT_14ca9f358;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ecd0e FUN_1461ecd0e body=348 status=ok
// SIG undefined FUN_1461ecd0e(void)

undefined8 *
FUN_1461ecd0e(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_1461ece06:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_1461ece06;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_1461ece6e(uVar6,&local_58,&local_68,param_4);
  plVar2 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461ece6e FUN_1461ece6e body=158 status=ok
// SIG undefined FUN_1461ece6e(void)

undefined8 *
FUN_1461ece6e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = &PTR_LAB_14b528c20;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1458c75be(param_1 + 1,param_4);
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
  param_1[3] = lVar4;
  *param_1 = &PTR_FUN_14b528bb0;
  param_1[4] = *param_2;
  lVar3 = param_2[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



// FUNCTION 1461ecf18 FUN_1461ecf18 body=667 status=ok
// SIG undefined FUN_1461ecf18(void)

/* WARNING: Removing unreachable block (ram,0x0001461ed191) */
/* WARNING: Removing unreachable block (ram,0x0001461ed15f) */
/* WARNING: Removing unreachable block (ram,0x0001461ed178) */
/* WARNING: Removing unreachable block (ram,0x0001461ed1aa) */

undefined8 * FUN_1461ecf18(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6620d0;
  plVar1 = param_1 + 0x16;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_140056680(&local_30,L"Param1");
  iVar2 = *(int *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xbc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"Param2");
  iVar2 = *(int *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xbc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"Param3");
  iVar2 = *(int *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xbc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  FUN_140056680(&local_30,L"Param4");
  iVar2 = *(int *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xbc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461ed1ba FUN_1461ed1ba body=134 status=ok
// SIG undefined FUN_1461ed1ba(void)

void FUN_1461ed1ba(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 8))(&local_20);
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar2);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461ed242 FUN_1461ed242 body=246 status=ok
// SIG undefined FUN_1461ed242(void)

void FUN_1461ed242(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar3 = FUN_14060e84c();
  if (lVar3 == 0) goto LAB_1461ed313;
  lVar4 = FUN_144a5dd5e();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (lVar6 = lVar3,
     *(longlong *)
      (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
     lVar4 + 0x30)) {
    lVar6 = 0;
  }
  FUN_14485c47a(param_1 + 0x58,lVar6);
  if (*(longlong *)(lVar3 + 0x398) == 0) {
LAB_1461ed329:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_144a7b4ca();
    lVar3 = *(longlong *)(lVar3 + 0x398);
    if (lVar3 == 0) goto LAB_1461ed329;
    lVar6 = 0;
    if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_1461ed329;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar6 = lVar3;
      }
    }
  }
  lVar3 = param_1 + 0x60;
  FUN_14485c47a(lVar3,lVar6);
  cVar2 = FUN_144729dda(lVar3);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    lVar3 = FUN_14479d2ce(lVar3);
    uVar5 = FUN_14479d2ce(lVar3 + 0x4e0);
  }
  FUN_14485c47a(param_1 + 0x68,uVar5);
LAB_1461ed313:
  FUN_1461ed338(param_1);
  FUN_146004106(param_1);
  return;
}



// FUNCTION 1461ed338 FUN_1461ed338 body=322 status=ok
// SIG undefined FUN_1461ed338(void)

void FUN_1461ed338(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (**(code **)(*param_1 + 0x180))();
  FUN_14027ab42(&local_38,uVar6);
  if (plStack_30 != (longlong *)0x0) {
    iVar5 = (int)plStack_30[1];
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)plStack_30[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plStack_30 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar8 = plStack_30;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)plStack_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_30 + 0x10))();
    }
    lVar7 = local_38;
    if (plVar8 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_1461ed52a(local_38 + 0x40,&local_38,param_1);
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        FUN_1461ed71e(lVar7,&local_38);
        if ((longlong)(int)plStack_30 != 0) {
          lVar9 = (longlong)(int)plStack_30 << 3;
          lVar7 = local_38;
          do {
            cVar4 = FUN_144729dda(lVar7);
            if (cVar4 != '\0') {
              uVar6 = FUN_14479d2ce(lVar7);
              FUN_1461ed47c(param_1,uVar6,0);
            }
            lVar7 = lVar7 + 8;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
        if (local_38 != 0) {
          FUN_1400020a8(local_38);
        }
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461ed47c FUN_1461ed47c body=173 status=ok
// SIG undefined FUN_1461ed47c(void)

void FUN_1461ed47c(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    local_28 = (undefined8 *)0x0;
    FUN_14485c47a();
    iVar1 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
      FUN_1461ed868((longlong *)(param_1 + 0x70),iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = local_28;
  }
  else if (param_3 == 1) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_28 = &local_30;
    FUN_1462400a0(param_1 + 0x70);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ed52a FUN_1461ed52a body=244 status=ok
// SIG undefined FUN_1461ed52a(void)

undefined8 FUN_1461ed52a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b9683d0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b968360;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1461ed47c;
  FUN_1461ed620(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ed620 FUN_1461ed620 body=216 status=ok
// SIG undefined FUN_1461ed620(void)

undefined8 * FUN_1461ed620(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ed706 FUN_1461ed706 body=24 status=ok
// SIG undefined FUN_1461ed706(void)

bool FUN_1461ed706(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1461ed71e FUN_1461ed71e body=329 status=ok
// SIG undefined FUN_1461ed71e(void)

void FUN_1461ed71e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xd8);
  local_40 = param_1 + 0xe8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x100) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_60 = local_38;
  iStack_5c = iStack_34;
  local_58 = local_30;
  local_54 = local_2c;
  local_70 = local_48;
  local_68 = local_40;
  local_78 = plVar1;
  local_50 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      cVar4 = FUN_144729dda((longlong)iStack_5c * 0x10 + *local_78);
      lVar5 = (longlong)iStack_5c;
      if (cVar4 == '\0') {
        FUN_145e42e20(local_50,iStack_5c);
      }
      else {
        lVar3 = *local_78;
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1461ed868(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar5 * 0x10 + lVar3);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ed868 FUN_1461ed868 body=132 status=ok
// SIG undefined FUN_1461ed868(void)

void FUN_1461ed868(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461ed8ec FUN_1461ed8ec body=682 status=ok
// SIG undefined FUN_1461ed8ec(void)

void FUN_1461ed8ec(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  int local_a8 [6];
  longlong local_90;
  undefined1 local_80;
  int local_78 [6];
  longlong local_60;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar7 = (longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  local_c0 = (longlong *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x48);
  local_b8 = plVar7;
  if (iVar3 < iVar4) {
    if (iVar4 != 0) {
      lVar9 = *local_c0;
      lVar6 = (longlong)iVar4 * 0x30 + lVar9;
      local_b0 = param_1 + 0x18;
      do {
        FUN_1447a97f4(local_78,lVar9);
        local_50 = *(undefined1 *)(lVar9 + 0x28);
        if ((longlong)*(int *)(param_1 + 0x38) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x30);
          lVar5 = (longlong)*(int *)(param_1 + 0x38) * 0x30 + lVar8;
          do {
            FUN_1447a97f4(local_a8,lVar8);
            iVar4 = local_78[0];
            iVar3 = local_a8[0];
            local_80 = *(undefined1 *)(lVar8 + 0x28);
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            if (iVar3 == iVar4) goto LAB_1461edaf6;
            lVar8 = lVar8 + 0x30;
          } while (lVar8 != lVar5);
        }
        FUN_1447325ac(local_78,local_a8,1);
        FUN_141165eb6(local_b0,local_a8);
LAB_1461edaf6:
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 0x30;
        plVar7 = local_b8;
      } while (lVar9 != lVar6);
    }
  }
  else if (iVar4 < iVar3) {
    if (iVar3 != 0) {
      lVar9 = *plVar7;
      lVar6 = (longlong)iVar3 * 0x30 + lVar9;
      do {
        FUN_1447a97f4(local_78,lVar9);
        local_50 = *(undefined1 *)(lVar9 + 0x28);
        if ((longlong)*(int *)(param_1 + 0x48) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x40);
          lVar5 = (longlong)*(int *)(param_1 + 0x48) * 0x30 + lVar8;
          do {
            FUN_1447a97f4(local_a8,lVar8);
            iVar4 = local_78[0];
            iVar3 = local_a8[0];
            local_80 = *(undefined1 *)(lVar8 + 0x28);
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            plVar7 = local_b8;
            if (iVar4 == iVar3) goto LAB_1461ed9e4;
            lVar8 = lVar8 + 0x30;
          } while (lVar8 != lVar5);
        }
        FUN_1447325ac(local_78,local_a8,1);
        FUN_141165eb6(param_1,local_a8);
LAB_1461ed9e4:
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != lVar6);
    }
  }
  else if (0 < iVar3) {
    lVar9 = 0;
    lVar6 = 0;
    do {
      lVar8 = *local_b8;
      bVar1 = *(byte *)(*local_c0 + 0x28 + lVar9);
      bVar2 = *(byte *)(lVar8 + 0x28 + lVar9);
      if (bVar2 < bVar1) {
        FUN_1447325ac(lVar8 + lVar9,local_78,1);
        lVar8 = param_1 + 0x18;
LAB_1461edb60:
        FUN_141165eb6(lVar8,local_78);
      }
      else if (bVar1 < bVar2) {
        FUN_1447325ac(lVar8 + lVar9,local_78,1);
        lVar8 = param_1;
        goto LAB_1461edb60;
      }
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + 0x30;
      plVar7 = local_b8;
    } while (lVar6 < *(int *)(param_1 + 0x38));
  }
  FUN_140d9aa7c(local_c0,plVar7);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461edb98 FUN_1461edb98 body=158 status=ok
// SIG undefined FUN_1461edb98(void)

void FUN_1461edb98(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cadae30);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = param_2;
    local_30 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001461edc06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x640))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461edc44 FUN_1461edc44 body=148 status=ok
// SIG undefined FUN_1461edc44(void)

bool FUN_1461edc44(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461edcda FUN_1461edcda body=111 status=ok
// SIG undefined FUN_1461edcda(void)

void FUN_1461edcda(undefined8 *param_1)

{
  FUN_1447a1747(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b9d8650;
  FUN_1461edd49(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461edd49 FUN_1461edd49 body=60 status=ok
// SIG undefined FUN_1461edd49(void)

void FUN_1461edd49(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1461edd86 FUN_1461edd86 body=64 status=ok
// SIG undefined FUN_1461edd86(void)

void FUN_1461edd86(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1414b2f6c();
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001461eddbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))
              (plVar1,*(undefined4 *)(param_1 + 0x60),param_1 + 0x68,*(undefined4 *)(param_1 + 0x78)
              );
    return;
  }
  return;
}



// FUNCTION 1461eddc6 FUN_1461eddc6 body=46 status=ok
// SIG undefined FUN_1461eddc6(void)

undefined8 FUN_1461eddc6(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1416445ba(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1461eddf4 FUN_1461eddf4 body=44 status=ok
// SIG undefined FUN_1461eddf4(void)

longlong FUN_1461eddf4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140734c0a();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x110;
  }
  return lVar2;
}



// FUNCTION 1461ede2c FUN_1461ede2c body=675 status=ok
// SIG undefined FUN_1461ede2c(void)

undefined8 * FUN_1461ede2c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_1413f988e();
  *param_1 = &PTR_FUN_14b7a9430;
  param_1[0x72] = &PTR_FUN_14b7a9b70;
  param_1[0x73] = &PTR_FUN_14b7a9be0;
  param_1[0x74] = &PTR_FUN_14b7a9c50;
  param_1[0x75] = &PTR_FUN_14b7a9c80;
  param_1[0x76] = &PTR_FUN_14b7a9cb0;
  param_1[0x77] = &PTR_FUN_14b7a9ce0;
  param_1[0x78] = &PTR_FUN_14b7a9d20;
  param_1[0x79] = &PTR_FUN_14b7a9d40;
  param_1[0x7a] = &PTR_FUN_14b7a9d70;
  param_1[0x7b] = &PTR_FUN_14b7a9e40;
  param_1[0x7c] = &PTR_FUN_14b7a9e90;
  param_1[0x7d] = &PTR_FUN_14b7a9f50;
  param_1[0x7e] = &PTR_FUN_14b7a9f70;
  param_1[0x7f] = &PTR_FUN_14b7a9ff0;
  param_1[0x80] = &PTR_FUN_14b7aa010;
  param_1[0x81] = &PTR_FUN_14b7aa020;
  param_1[0x82] = &PTR_FUN_14b7aa060;
  param_1[0x83] = &PTR_FUN_14b7aa0d0;
  param_1[0x84] = &PTR_FUN_14b7aa100;
  param_1[0x85] = &PTR_FUN_14b7aa1a0;
  param_1[0x86] = &PTR_FUN_14b7aa1c0;
  param_1[0x87] = &PTR_FUN_14b7aa1e0;
  param_1[0x2a7] = &PTR_FUN_14b7aa200;
  param_1[0x2a8] = &PTR_FUN_14b7aa240;
  param_1[0x2a9] = &PTR_FUN_14b7aa270;
  param_1[0x2aa] = &PTR_FUN_14b7aa290;
  param_1[0x2ab] = &PTR_FUN_14b7aa2d0;
  param_1[0x2ac] = &PTR_FUN_14b7aa320;
  param_1[0x588] = &PTR_FUN_14b7aa340;
  param_1[0x589] = &PTR_FUN_14b7aa380;
  param_1[0x58a] = &PTR_FUN_14b7aa3a0;
  param_1[0x58b] = &PTR_FUN_14b7aa3f0;
  param_1[0x58c] = &PTR_FUN_14b7aa420;
  param_1[0x58d] = &PTR_FUN_14b7aa440;
  param_1[0x5e4] = 0;
  param_1[0x5e5] = 0;
  param_1[0x5e9] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x5e7] = DAT_14c8464e0;
  param_1[0x5e8] = uVar2;
  *(undefined4 *)(param_1 + 0x5ea) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2f54) = 1;
  param_1[0x5eb] = 0;
  param_1[0x5ec] = 0;
  param_1[0x5ed] = 0;
  param_1[0x5ee] = 0;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    plVar1 = param_1 + 0x5eb;
    param_1[0x5ee] = &DAT_14cbcca70;
    param_1[0x5ed] = param_1;
    lVar3 = DAT_14cbcca70;
    while( true ) {
      param_1[0x5eb] = lVar3;
      LOCK();
      lVar4 = *(longlong *)param_1[0x5ee];
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *(longlong *)param_1[0x5ee] = (longlong)plVar1;
        lVar4 = lVar3;
      }
      UNLOCK();
      if (bVar5) break;
      param_1[0x5eb] = lVar4;
      lVar3 = *(longlong *)param_1[0x5ee];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1461ee0d0 FUN_1461ee0d0 body=71 status=ok
// SIG undefined FUN_1461ee0d0(void)

void FUN_1461ee0d0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14094c9c2();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_141644926(*(longlong *)(lVar1 + 0x30),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1461ee118 FUN_1461ee118 body=236 status=ok
// SIG undefined FUN_1461ee118(void)

void FUN_1461ee118(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1461ee206();
  if (*(longlong *)(param_1 + 0x398) != 0) {
    local_30 = *(longlong *)(param_1 + 0x398);
    FUN_140bfeb58(param_3);
  }
  lVar2 = *(longlong *)(param_1 + 0xa08);
  if (lVar2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      local_30 = lVar2;
      FUN_140bfeb58(param_3);
      FUN_148ccf2b6(lVar2,param_2,param_3);
      goto LAB_1461ee168;
    }
  }
  lVar2 = 0;
LAB_1461ee168:
  lVar1 = *(longlong *)(param_1 + 0xf40);
  if (lVar1 != lVar2 && lVar1 != 0) {
    local_30 = lVar1;
    FUN_140bfeb58(param_3);
    FUN_148ccf2b6(*(undefined8 *)(param_1 + 0xf40),param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ee206 FUN_1461ee206 body=108 status=ok
// SIG undefined FUN_1461ee206(void)

void FUN_1461ee206(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x440);
  if (lVar2 != 0) {
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_1447d05f2(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x448);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_1447d05f2(param_3,iVar1);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
  return;
}



// FUNCTION 1461ee272 FUN_1461ee272 body=73 status=ok
// SIG undefined FUN_1461ee272(void)

void FUN_1461ee272(void)

{
  FUN_1461ee2bc(&DAT_14c8684f8);
  FUN_145a34d36(&DAT_14c8683b8);
  FUN_141359509(DAT_14c8683a8,DAT_14c8683b0);
  if (DAT_14c8683a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1461ee2bc FUN_1461ee2bc body=173 status=ok
// SIG undefined FUN_1461ee2bc(void)

void FUN_1461ee2bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1461ee3a2(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1461ee3da(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1461ee36a(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1461ee36a(param_1);
  return;
}



// FUNCTION 1461ee36a FUN_1461ee36a body=55 status=ok
// SIG undefined FUN_1461ee36a(void)

void FUN_1461ee36a(longlong *param_1)

{
  FUN_1461ee412(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461ee3a2 FUN_1461ee3a2 body=55 status=ok
// SIG undefined FUN_1461ee3a2(void)

void FUN_1461ee3a2(longlong *param_1)

{
  FUN_1461ee6fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461ee3da FUN_1461ee3da body=55 status=ok
// SIG undefined FUN_1461ee3da(void)

void FUN_1461ee3da(longlong *param_1)

{
  FUN_1461ee586(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461ee412 FUN_1461ee412 body=369 status=ok
// SIG undefined FUN_1461ee412(void)

void FUN_1461ee412(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
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
      if (*(longlong *)(*local_70 + 0x30 + (longlong)iStack_54 * 0x80) != 0) {
        lVar4 = *local_70 + (longlong)iStack_54 * 0x80;
        plVar2 = *(longlong **)(lVar4 + 0x40);
        plVar5 = (longlong *)(lVar4 + 0x50);
        if (plVar2 != (longlong *)0x0) {
          plVar5 = plVar2;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140240048(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar3 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1461ee586 FUN_1461ee586 body=369 status=ok
// SIG undefined FUN_1461ee586(void)

void FUN_1461ee586(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
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
      if (*(longlong *)(*local_70 + 0x30 + (longlong)iStack_54 * 0x80) != 0) {
        lVar4 = *local_70 + (longlong)iStack_54 * 0x80;
        plVar2 = *(longlong **)(lVar4 + 0x40);
        plVar5 = (longlong *)(lVar4 + 0x50);
        if (plVar2 != (longlong *)0x0) {
          plVar5 = plVar2;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140240048(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar3 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1461ee6fa FUN_1461ee6fa body=401 status=ok
// SIG undefined FUN_1461ee6fa(void)

void FUN_1461ee6fa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
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
      if (*(longlong *)(*local_70 + 0x30 + (longlong)iStack_54 * 0x80) != 0) {
        lVar4 = *local_70 + (longlong)iStack_54 * 0x80;
        plVar2 = *(longlong **)(lVar4 + 0x40);
        plVar5 = (longlong *)(lVar4 + 0x50);
        if (plVar2 != (longlong *)0x0) {
          plVar5 = plVar2;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140240048(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar3 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461ee894 FUN_1461ee894 body=683 status=ok
// SIG undefined FUN_1461ee894(void)

undefined8 * FUN_1461ee894(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1412202b0();
  *param_1 = &PTR_FUN_14af06a40;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0x4024000000000000;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1b) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar4;
  param_1[0x1d] = DAT_14c8464f0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  FUN_141300fc0(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x4e) = 1;
  local_c8 = 0;
  FUN_1411b354a(param_1 + 0x4f,0,0,0);
  FUN_1457e37e0(param_1 + 0x94);
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xae] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xaf] = uVar1;
  param_1[0xb0] = DAT_14c8464f0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5b3) = 0;
  local_b8 = param_1[0x10];
  uStack_70 = param_1[0x11];
  local_a8 = (longlong *)param_1[0x12];
  uStack_60 = param_1[0x13];
  local_58 = param_1[0x14];
  uStack_50 = param_1[0x15];
  local_48 = param_1[0x16];
  uStack_40 = param_1[0x17];
  uVar6 = local_48;
  uVar7 = uStack_40;
  local_68 = local_a8;
  uVar5 = uStack_60;
  local_78 = local_b8;
  uVar1 = uStack_70;
  param_1[0x16] = CONCAT44(uStack_84,local_88);
  param_1[0x17] = CONCAT44(uStack_7c,uStack_80);
  param_1[0x14] = &PTR_LAB_14af11800;
  param_1[0x15] = param_1;
  param_1[0x12] = 0;
  param_1[0x13] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x10] = &LAB_143b89766;
  param_1[0x11] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar1;
  uStack_60 = uVar5;
  local_48 = uVar6;
  uStack_40 = uVar7;
  if (local_b8 != 0) {
    plVar8 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar8 = &local_98;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  param_1[0x48] = 0x3f0c8c8d3f800000;
  param_1[0x49] = 0x3f80000000000000;
  param_1[0x4a] = 0x3f80000000000000;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4c] = &DAT_3f8000003f800000;
  param_1[0x4d] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_1 + 0x49);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x28) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x41000000;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461eeb40 FUN_1461eeb40 body=40 status=ok
// SIG undefined FUN_1461eeb40(void)

undefined8 FUN_1461eeb40(undefined8 param_1,int param_2)

{
  FUN_1461eeb68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461eeb68 FUN_1461eeb68 body=652 status=ok
// SIG undefined FUN_1461eeb68(void)

void FUN_1461eeb68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6858e0;
  param_1[0x72] = &PTR_FUN_14b685f60;
  param_1[0x73] = &PTR_FUN_14b685f80;
  param_1[0x74] = &PTR_FUN_14b685fb0;
  param_1[0x75] = &PTR_FUN_14b685fc0;
  param_1[0x76] = &PTR_FUN_14b686030;
  param_1[0x77] = &PTR_FUN_14b686060;
  param_1[0x78] = &PTR_FUN_14b686090;
  param_1[0x7f] = &PTR_FUN_14b686140;
  param_1[0x80] = &PTR_FUN_14b6861b0;
  param_1[0x81] = &PTR_FUN_14b686220;
  param_1[0x82] = &PTR_FUN_14b686250;
  param_1[0x83] = &PTR_FUN_14b686290;
  param_1[0x84] = &PTR_FUN_14b686330;
  param_1[0x85] = &PTR_FUN_14b686350;
  param_1[0x89] = &PTR_FUN_14b686370;
  param_1[0x8a] = &PTR_FUN_14b686430;
  param_1[0x8b] = &PTR_FUN_14b6864b0;
  param_1[0x8c] = &PTR_FUN_14b686500;
  param_1[0x8d] = &PTR_FUN_14b686540;
  param_1[0x8e] = &PTR_FUN_14b686560;
  param_1[0x8f] = &PTR_FUN_14b686580;
  param_1[0x90] = &PTR_FUN_14b6865a0;
  param_1[0x91] = &PTR_FUN_14b6865c0;
  param_1[0x92] = &PTR_FUN_14b6865e0;
  param_1[0x93] = &PTR_FUN_14b686600;
  param_1[0x94] = &PTR_FUN_14b686620;
  param_1[0x95] = &PTR_FUN_14b686640;
  param_1[0x96] = &PTR_FUN_14b686660;
  param_1[0x34b] = &PTR_FUN_14b686680;
  param_1[0x352] = &PTR_FUN_14b686690;
  param_1[0x353] = &PTR_FUN_14b6866d0;
  param_1[0x354] = &PTR_FUN_14b686710;
  param_1[0x355] = &PTR_FUN_14b686760;
  param_1[0x356] = &PTR_FUN_14b686790;
  param_1[0x359] = &PTR_FUN_14b6867d0;
  param_1[0x35a] = &PTR_FUN_14b6867e0;
  param_1[0x35b] = &PTR_FUN_14b686810;
  param_1[0x35c] = &PTR_FUN_14b6868b0;
  param_1[0x4bf] = &PTR_FUN_14b6868d0;
  FUN_1457e6316(param_1 + 0x4ea);
  FUN_1457e6256(param_1 + 0x4c5);
  param_1[0x4bf] = &PTR_LAB_14b6809e0;
  FUN_144760e21(param_1[0x4c0],*(undefined4 *)(param_1 + 0x4c1));
  if (param_1[0x4c0] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1461eedf4 FUN_1461eedf4 body=122 status=ok
// SIG undefined FUN_1461eedf4(void)

void FUN_1461eedf4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1461eeebc(param_1,iVar1);
    }
    FUN_1461eee6f((longlong)iVar1 * 0x280 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148eee5d6(param_1,param_2,iVar1 - param_2);
    FUN_148eee63c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1461eee6f FUN_1461eee6f body=76 status=ok
// SIG undefined FUN_1461eee6f(void)

void FUN_1461eee6f(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x270;
    do {
      FUN_1413526be(param_1 + -0x270);
      *(undefined1 *)(param_1 + -8) = 1;
      FUN_140056680(param_1,&DAT_149dfb77a);
      param_1 = param_1 + 0x280;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1461eeebc FUN_1461eeebc body=147 status=ok
// SIG undefined FUN_1461eeebc(void)

void FUN_1461eeebc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x280,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x280)) {
      uVar5 = uVar4 / 0x280 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x280,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461eef50 FUN_1461eef50 body=192 status=ok
// SIG undefined FUN_1461eef50(void)

bool FUN_1461eef50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
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
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 1461ef012 FUN_1461ef012 body=63 status=ok
// SIG undefined FUN_1461ef012(void)

undefined1 FUN_1461ef012(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1461ef052(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 1461ef052 FUN_1461ef052 body=205 status=ok
// SIG undefined FUN_1461ef052(void)

longlong FUN_1461ef052(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xfc);
  uVar2 = *(undefined4 *)(param_2 + 0x100);
  uVar3 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  FUN_1461ef120(param_1 + 0x110,param_2 + 0x110);
  lVar5 = *(longlong *)(param_2 + 0x120);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x120);
    }
  }
  *(longlong *)(param_1 + 0x120) = lVar5;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 300) == '\x01') {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 300) != '\x01') {
        return param_1;
      }
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 300) = uVar4;
  }
  return param_1;
}



// FUNCTION 1461ef120 FUN_1461ef120 body=79 status=ok
// SIG undefined FUN_1461ef120(void)

undefined8 * FUN_1461ef120(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c457cc(param_1,iVar1);
      FUN_148c4582e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1461ef19a FUN_1461ef19a body=25 status=ok
// SIG undefined FUN_1461ef19a(void)

undefined8 FUN_1461ef19a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461ef1b4 FUN_1461ef1b4 body=205 status=ok
// SIG undefined FUN_1461ef1b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461ef1b4(void)

{
  if ((DAT_14cb32a17 & 2) == 0) {
    DAT_14cb32a17 = DAT_14cb32a17 | 2;
    _DAT_14cb329b8 = L"NiagaraComputeFreeIDsCS";
    _DAT_14cb329d0 = FUN_146826540;
    _DAT_14cb329d8 = FUN_146825d77;
    _DAT_14cb329e0 = FUN_146825fd6;
    _DAT_14cb329e8 = FUN_1407e02ea;
    _DAT_14cb329f0 = FUN_146826273;
    _DAT_14cb329c8 = FUN_14804e52e;
    _DAT_14cb32a08 = 0xffffffff000000e0;
    _DAT_14cb32a10 = 8;
    DAT_14cb32a14 = 0;
    _DAT_14cb329f8 = &LAB_14804e558;
    FUN_1461ef282();
    FUN_1407e00cc(&DAT_14cb329b0);
    return;
  }
  return;
}



// FUNCTION 1461ef282 FUN_1461ef282 body=123 status=ok
// SIG undefined FUN_1461ef282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461ef282(void)

{
  _DAT_14cb357b0 = L"BASE";
  DAT_14cb357da = 4;
  _DAT_14cb357b8 = FUN_140b35ae4();
  _DAT_14cb357c0 = DAT_14cb329c0;
  _DAT_14cb357c8 = &LAB_14682652b;
  DAT_14cb329c0 = &DAT_14cb357b0;
  DAT_14cb32a15 = DAT_14cb32a15 + '\x01';
  _DAT_14cb357d0 = 0x100000000;
  if (*(char *)(_DAT_14cb357b8 + 100) != '\0') {
    DAT_14cb32a16 = DAT_14cb32a16 + '\x01';
  }
  return;
}



// FUNCTION 1461ef2fe FUN_1461ef2fe body=226 status=ok
// SIG undefined FUN_1461ef2fe(void)

longlong * FUN_1461ef2fe(longlong *param_1)

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
  pcVar13 = FUN_1464623ea;
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



// FUNCTION 1461ef3e6 FUN_1461ef3e6 body=132 status=ok
// SIG undefined FUN_1461ef3e6(void)

undefined1 * FUN_1461ef3e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IDToIndexTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1461ef3e2;
}



// FUNCTION 1461ef46a FUN_1461ef46a body=138 status=ok
// SIG undefined FUN_1461ef46a(void)

code * FUN_1461ef46a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWFreeIDListSizes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480536ba;
}



// FUNCTION 1461ef4f4 FUN_1461ef4f4 body=75 status=ok
// SIG undefined FUN_1461ef4f4(void)

void FUN_1461ef4f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1461ef540(*(undefined8 *)(param_1 + 0x28));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x40) = lVar1;
  FUN_14129a52a(*(longlong *)(param_1 + 0x28) + 0x2a0,param_1,lVar1);
  return;
}



// FUNCTION 1461ef540 FUN_1461ef540 body=98 status=ok
// SIG undefined FUN_1461ef540(void)

void FUN_1461ef540(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459cc046();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ef5ae FUN_1461ef5ae body=684 status=ok
// SIG undefined FUN_1461ef5ae(void)

undefined8 * FUN_1461ef5ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined2 *local_68;
  ulonglong *local_60;
  undefined2 local_54;
  undefined2 local_52;
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cf8c0;
  param_1[0xc] = 0x10000000000;
  param_1[0x11] = 0x10000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  *(undefined1 *)((longlong)param_1 + 0x32) = 2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar4 + 0xf1a);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_70 = FUN_145a67404();
    if (local_70 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_70);
    }
    local_78 = param_1[2];
    if ((local_78 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_78,&local_70);
    goto LAB_1461ef686;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a4d80d0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
  *(undefined4 *)(plVar5 + 8) = 0xffffffff;
  if (plVar5 == (longlong *)0x0) {
    param_1[0x16] = 0x10;
    plVar6 = (longlong *)param_1[0x17];
    if (plVar6 != (longlong *)0x0) {
      param_1[0x17] = 0;
LAB_1461ef73f:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_1461ef767;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[0x16] = plVar5 + 2;
    plVar6 = (longlong *)param_1[0x17];
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      param_1[0x17] = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_1461ef73f;
    }
LAB_1461ef767:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_54 = *(undefined2 *)(lVar4 + 0xf1a);
  local_60 = (ulonglong *)&local_52;
  local_68 = &local_54;
  FUN_1447c44f6(param_1 + 8,&local_68);
  local_54 = *(undefined2 *)(lVar3 + 0x11a);
  local_52 = *(undefined2 *)(lVar3 + 0x11c);
  local_60 = local_50;
  local_68 = &local_54;
  FUN_1403b5126(param_1 + 8,&local_68,2);
LAB_1461ef686:
  if ((local_50[0] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ef85c FUN_1461ef85c body=359 status=ok
// SIG undefined FUN_1461ef85c(void)

void FUN_1461ef85c(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  ulonglong *local_c8;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar3 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
  if (bVar3 == 1) {
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      if (cVar2 != '\0') {
        bVar3 = (&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)];
        goto LAB_1461ef8a7;
      }
    }
  }
  else if ((*(uint *)(param_1 + 8) & 0xffffff) != 0) {
LAB_1461ef8a7:
    if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_f8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_f8);
  }
  local_21 = 3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 1) {
    FUN_144893a1c(param_1 + 0x20);
  }
  memset(&local_d0,0,0x90);
  FUN_144869430(&local_d0);
  local_40 = 0;
  local_d0 = &PTR_FUN_149e1e590;
  local_30 = 0;
  local_38 = param_1 + 0x20;
  FUN_144a69558(&local_d0,1);
  (*(code *)local_d0[0x1e])(&local_d0,0);
  local_d0 = &PTR_FUN_149e1e330;
  puVar1 = (undefined1 *)*local_c8 + 1;
  if ((undefined1 *)local_c8[1] < puVar1) {
    FUN_144a2420a(&local_d0,&local_21,1);
  }
  else {
    local_21 = *(undefined1 *)*local_c8;
    *local_c8 = (ulonglong)puVar1;
  }
  FUN_144a7fc42(&local_d0);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461efdd0 FUN_1461efdd0 body=274 status=ok
// SIG undefined FUN_1461efdd0(void)

void FUN_1461efdd0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar2 = (longlong)local_40;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar2 * 2);
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_2[1];
  lVar2 = (longlong)local_50;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar2 * 2);
  }
  FUN_1461efee4(param_1,&local_58,&local_48);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461efee4 FUN_1461efee4 body=422 status=ok
// SIG undefined FUN_1461efee4(void)

void FUN_1461efee4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [44];
  uint local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  plVar7 = (longlong *)(ulonglong)uVar1;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
  }
  else {
    local_6c = 0;
    do {
      lVar10 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((*(int *)(*param_1 + lVar10) != 0 &&
             (plVar6 = *(longlong **)(*param_1 + -8 + lVar10), plVar6 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_3[1];
        lVar8 = (longlong)local_50;
        pvVar2 = (void *)*param_3;
        if (lVar8 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar2,lVar8 * 2);
        }
        local_68 = (void *)0x0;
        local_60 = (int)param_2[1];
        lVar8 = (longlong)local_60;
        pvVar2 = (void *)*param_2;
        if (lVar8 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,pvVar2,lVar8 * 2);
        }
        cVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,&local_68);
        plVar7 = plVar6;
        if (cVar4 == '\0') break;
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_6c & 1) != 0) goto LAB_1461f007c;
          goto LAB_1461eff21;
        }
      }
      uVar5 = uVar9 - 1;
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
      local_6c = (uint)plVar7;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1461f007c:
    FUN_14474d06a(param_1,0);
  }
LAB_1461eff21:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f008c FUN_1461f008c body=2363 status=ok
// SIG undefined FUN_1461f008c(void)

void FUN_1461f008c(ulonglong param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  char cVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  bool bVar23;
  undefined1 auStack_1f8 [43];
  undefined1 local_1cd;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined2 local_198;
  undefined2 local_196;
  undefined1 local_193;
  undefined4 local_190;
  undefined1 local_18c;
  int *local_188;
  ulonglong uStack_180;
  undefined8 *local_178;
  longlong local_170;
  ulonglong *local_168;
  undefined8 *local_160;
  ulonglong local_158;
  longlong *local_150;
  int local_148;
  longlong local_140;
  undefined2 local_138;
  uint uStack_136;
  undefined2 uStack_132;
  undefined4 local_130;
  uint uStack_12c;
  int local_128;
  uint local_120;
  undefined2 local_11a;
  undefined8 local_118;
  int local_110;
  undefined8 local_108;
  uint *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_d0 [40];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1a8 = FUN_14009d2a0();
  local_138 = *(undefined2 *)(local_1a8 + 0xfc);
  uStack_136 = uStack_136 & 0xffffff;
  local_130 = 0x6ff;
  uStack_12c = uStack_12c & 0xffffff00;
  local_178 = &local_118;
  local_118._0_4_ = CONCAT22(*(undefined2 *)(local_1a8 + 0x11a),*(undefined2 *)(local_1a8 + 0x11c));
  local_170 = (longlong)&local_118 + 4;
  FUN_1461f0a4e();
  if ((short)local_108 != -1) {
    lVar11 = *(longlong *)(param_1 + 0x28);
    local_1cc = CONCAT31(local_1cc._1_3_,*(undefined1 *)(lVar11 + 0x298));
    FUN_14150e78a(&local_168,lVar11 + 0x28,&local_f8);
    uVar9 = local_158 & 0xffffffff;
    local_1c0 = CONCAT44(local_1c0._4_4_,*(int *)(lVar11 + 0x38));
    if ((int)local_158 != *(int *)(lVar11 + 0x38)) {
      local_1b8 = param_1 + 200;
      do {
        lVar11 = *(longlong *)(local_160[0xc] + (longlong)(int)uVar9 * 8);
        if ((char)local_1cc == '\0') {
          *(undefined4 *)(lVar11 + 0x14) = 0;
          local_1c8 = lVar11;
        }
        else {
          local_1c8 = 0;
        }
        if (*(ushort *)(lVar11 + 0xc) != 0) {
          plVar13 = *(longlong **)(lVar11 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar11 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar13 + 0x1e) == (short)local_108) goto LAB_1461f01cf;
            plVar13 = plVar13 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar13 = (longlong *)0x0;
LAB_1461f01cf:
        iVar20 = *(int *)(lVar11 + 0x14);
        if (iVar20 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
        }
        LOCK();
        *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
        UNLOCK();
        uVar4 = *(ushort *)(lVar11 + 0xe);
        if (uVar4 != 0) {
          lVar11 = *plVar13;
          lVar8 = 0;
          do {
            if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar11 + lVar8) != 0)) {
              FUN_1456cec3c();
            }
            lVar15 = local_1b8;
            iVar14 = *(int *)(lVar11 + 8 + lVar8);
            iVar17 = (iVar14 - *(int *)(param_1 + 0xe0)) + 1;
            if (0 < iVar17) {
              local_1b0 = param_1;
              uVar7 = FUN_144a54ea4(local_1b8,iVar17);
              param_1 = local_1b0;
              FUN_1447c6044(lVar15,uVar7,iVar17,0);
            }
            lVar15 = *(longlong *)(param_1 + 0xd8);
            if (*(longlong *)(param_1 + 0xd8) == 0) {
              lVar15 = local_1b8;
            }
            iVar17 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar17 = iVar14;
            }
            puVar2 = (uint *)(lVar15 + (longlong)(iVar17 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar14 & 0x1f);
            lVar8 = lVar8 + 0x10;
          } while ((ulonglong)uVar4 * 0x10 != lVar8);
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
          UNLOCK();
          if (iVar20 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar13 + 1));
          }
        }
        if (local_1c8 != 0) {
          *(undefined4 *)(local_1c8 + 0x14) = 1;
        }
        uVar9 = FUN_1403b8464(&local_168);
        local_158 = CONCAT44(local_158._4_4_,(int)uVar9);
      } while ((int)uVar9 != (int)local_1c0);
    }
    if (local_168 != (ulonglong *)0x0) {
      if (*(char *)(local_160 + 0x4e) == '\0') {
        *(int *)((longlong)local_160 + 0x264) = *(int *)((longlong)local_160 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)local_160 + 0x264) = *(int *)((longlong)local_160 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  puVar2 = (uint *)(param_1 + 200);
  puVar12 = *(uint **)(param_1 + 0xd8);
  if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
    puVar12 = puVar2;
  }
  uVar5 = *(int *)(param_1 + 0xe0) + 0x1f;
  if (0x1f < uVar5) {
    lVar11 = 0;
    do {
      uVar19 = *puVar12;
      if (uVar19 != 0) {
        iVar20 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> iVar20 & 1) == 0; iVar20 = iVar20 + 1) {
          }
        }
        if ((iVar20 - (int)lVar11 < *(int *)(param_1 + 0xe0)) && (iVar20 + 1 != (int)lVar11)) {
          local_188 = (int *)0x0;
          uStack_180 = 0;
          local_198 = *(undefined2 *)(local_1a8 + 0x4e);
          local_196 = *(undefined2 *)(local_1a8 + 0xfc);
          local_193 = 0;
          local_190 = 0x6ff;
          local_18c = 0;
          local_11a = *(undefined2 *)(local_1a8 + 0x11c);
          FUN_1461f0b00(&local_108);
          local_168 = (ulonglong *)&local_11a;
          local_160 = &local_118;
          FUN_1447c44f6(local_d0);
          if (((short)local_108 != -1) && (local_108._2_2_ != -1)) {
            lVar11 = *(longlong *)(param_1 + 0x28);
            cVar16 = *(char *)(lVar11 + 0x298);
            FUN_14150e78a(&local_138,lVar11 + 0x28,&local_f8);
            if (local_128 != *(int *)(lVar11 + 0x38)) {
              local_1b8 = CONCAT71(local_1b8._1_7_,cVar16);
              local_1cc = *(int *)(lVar11 + 0x38);
              do {
                iVar20 = local_128;
                lVar8 = CONCAT44(uStack_12c,local_130);
                lVar15 = (longlong)local_128;
                lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar15 * 8);
                if (cVar16 == '\0') {
                  *(undefined4 *)(lVar11 + 0x14) = 0;
                  local_1c0 = lVar11;
                }
                else {
                  local_1c0 = 0;
                }
                if (*(ushort *)(lVar11 + 0xc) != 0) {
                  plVar13 = *(longlong **)(lVar11 + 0x28);
                  lVar10 = (ulonglong)*(ushort *)(lVar11 + 0xc) << 5;
                  do {
                    if (*(short *)((longlong)plVar13 + 0x1e) == local_108._2_2_) goto LAB_1461f049f;
                    plVar13 = plVar13 + 4;
                    lVar10 = lVar10 + -0x20;
                  } while (lVar10 != 0);
                }
                plVar13 = (longlong *)0x0;
LAB_1461f049f:
                iVar14 = *(int *)(lVar11 + 0x14);
                if (iVar14 == 1) {
                  AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
                }
                LOCK();
                *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
                UNLOCK();
                local_1c8 = *plVar13;
                if (*(ushort *)(lVar11 + 0xc) != 0) {
                  puVar22 = *(ulonglong **)(lVar11 + 0x28);
                  lVar10 = (ulonglong)*(ushort *)(lVar11 + 0xc) << 5;
                  do {
                    if (*(short *)((longlong)puVar22 + 0x1e) == (short)local_108)
                    goto LAB_1461f04f5;
                    puVar22 = puVar22 + 4;
                    lVar10 = lVar10 + -0x20;
                  } while (lVar10 != 0);
                }
                puVar22 = (ulonglong *)0x0;
LAB_1461f04f5:
                iVar17 = *(int *)(lVar11 + 0x14);
                if (iVar17 == 1) {
                  AcquireSRWLockShared((PSRWLOCK)(puVar22 + 1));
                }
                LOCK();
                *(int *)(puVar22 + 3) = (int)puVar22[3] + 1;
                UNLOCK();
                local_1b0 = *puVar22;
                local_160 = (undefined8 *)CONCAT44(local_160._4_4_,iVar17);
                local_140 = local_1c8;
                uVar9 = (ulonglong)
                        *(ushort *)(*(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar15 * 8) + 0xe);
                local_168 = puVar22;
                local_158 = local_1b0;
                local_150 = plVar13;
                local_148 = iVar14;
                local_118 = lVar8;
                local_110 = iVar20;
                lVar11 = FUN_141645258(&local_118);
                uVar4 = *(ushort *)(local_1a8 + 0x11a);
                bVar23 = true;
                if ((uVar4 != 0xffff) &&
                   (*(uint *)(lVar11 + 0x20) != (uint)uVar4 &&
                    (int)(uint)uVar4 <= (int)*(uint *)(lVar11 + 0x20))) {
                  bVar23 = (*(uint *)(lVar11 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1)
                           == 0;
                }
                if (uVar9 != 0) {
                  uVar21 = 0;
                  local_1cd = bVar23;
                  local_1a0 = uVar9;
                  do {
                    uVar5 = *(uint *)(local_1c8 + 8 + uVar21 * 0x10);
                    lVar11 = *(longlong *)(local_1c8 + uVar21 * 0x10);
                    local_120 = uVar5;
                    if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
                      FUN_1456cec3c(lVar11);
                    }
                    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0xe0))) {
                      puVar12 = *(uint **)(param_1 + 0xd8);
                      if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
                        puVar12 = puVar2;
                      }
                      if ((puVar12[uVar5 >> 5] >> (uVar5 & 0x1f) & 1) != 0) {
                        iVar20 = 0;
                        if (0 < (int)(uint)uStack_180) {
                          iVar20 = 0;
                          uVar19 = (uint)uStack_180;
                          do {
                            uVar1 = (uVar19 >> 1) + iVar20;
                            if (local_188[(ulonglong)uVar1 * 6] < (int)uVar5) {
                              iVar20 = uVar1 + (uVar19 & 1);
                            }
                            bVar23 = 1 < uVar19;
                            uVar19 = uVar19 >> 1;
                          } while (bVar23);
                        }
                        uVar7 = *(undefined4 *)(local_1b0 + uVar21 * 4);
                        if (((((int)(uint)uStack_180 <= iVar20) || (iVar20 == -1)) ||
                            ((int)uVar5 < local_188[(longlong)iVar20 * 6])) ||
                           (plVar13 = (longlong *)(local_188 + (longlong)iVar20 * 6 + 2),
                           plVar13 == (longlong *)0x0)) {
                          plVar13 = (longlong *)FUN_1461f0c3e(&local_188,&local_120);
                        }
                        iVar20 = (int)plVar13[1];
                        *(uint *)(plVar13 + 1) = iVar20 + 1U;
                        if (*(uint *)((longlong)plVar13 + 0xc) < iVar20 + 1U) {
                          FUN_1461f0bba(plVar13,iVar20);
                        }
                        lVar8 = *plVar13;
                        *(longlong *)(lVar8 + (longlong)iVar20 * 0x10) = lVar11;
                        if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
                          FUN_1456cec3c(lVar11);
                        }
                        lVar8 = lVar8 + (longlong)iVar20 * 0x10;
                        *(undefined4 *)(lVar8 + 8) = uVar7;
                        *(undefined1 *)(lVar8 + 0xc) = local_1cd;
                        uVar9 = local_1a0;
                      }
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar21 != uVar9);
                }
                FUN_1461f09f8(&local_168);
                cVar16 = (char)local_1b8;
                if (local_1c0 != 0) {
                  *(undefined4 *)(local_1c0 + 0x14) = 1;
                }
                local_128 = FUN_1403b8464(&local_138,local_128 + 1);
              } while (local_128 != local_1cc);
            }
            if (CONCAT26(uStack_132,CONCAT42(uStack_136,local_138)) != 0) {
              lVar11 = CONCAT44(uStack_12c,local_130);
              if (*(char *)(lVar11 + 0x270) == '\0') {
                *(int *)(lVar11 + 0x264) = *(int *)(lVar11 + 0x264) + -1;
              }
              else {
                LOCK();
                *(int *)(lVar11 + 0x264) = *(int *)(lVar11 + 0x264) + -1;
                UNLOCK();
              }
            }
          }
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if ((longlong)(int)(uint)uStack_180 != 0) {
            piVar3 = local_188 + (longlong)(int)(uint)uStack_180 * 6;
            piVar18 = local_188;
            do {
              iVar20 = *piVar18;
              puVar12 = *(uint **)(param_1 + 0xd8);
              if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
                puVar12 = puVar2;
              }
              iVar14 = iVar20 + 0x1f;
              if (-1 < iVar20) {
                iVar14 = iVar20;
              }
              bVar6 = (byte)iVar20 & 0x1f;
              puVar12[iVar14 >> 5] =
                   puVar12[iVar14 >> 5] & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
              FUN_1461f14ee(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar20 * 0x10),
                            piVar18 + 2);
              piVar18 = piVar18 + 6;
            } while (piVar18 != piVar3);
          }
          local_108 = 0x100000000;
          local_f8 = 0xffffffff;
          local_f0 = 0;
          local_100 = puVar2;
          if (*(int *)(param_1 + 0xe0) == 0) {
            local_f8._4_4_ = 0;
          }
          else {
            FUN_1449c0562(&local_108);
          }
          if (local_f8._4_4_ < (int)local_100[6]) {
            iVar20 = local_f8._4_4_;
            do {
              lVar11 = *(longlong *)(param_1 + 0x40);
              FUN_1461f0e22(*(undefined8 *)(lVar11 + 8 + (longlong)iVar20 * 0x10));
              FUN_1461f11d8(param_1 + 0x78,lVar11 + (longlong)iVar20 * 0x10,iVar20);
              FUN_1461f0dae((longlong *)(param_1 + 0x40),iVar20);
              local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
              FUN_1449c0562(&local_108);
              iVar20 = local_f8._4_4_;
            } while (local_f8._4_4_ < (int)local_100[6]);
          }
          *(undefined4 *)(param_1 + 0xe0) = 0;
          FUN_1461f09c8(local_188,uStack_180 & 0xffffffff);
          if (local_188 != (int *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar11 = lVar11 + -0x20;
      puVar12 = puVar12 + 1;
    } while ((ulonglong)(uVar5 & 0xffffffe0) + lVar11 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f09c8 FUN_1461f09c8 body=47 status=ok
// SIG undefined FUN_1461f09c8(void)

void FUN_1461f09c8(longlong param_1,int param_2)

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



// FUNCTION 1461f09f8 FUN_1461f09f8 body=85 status=ok
// SIG undefined FUN_1461f09f8(void)

void FUN_1461f09f8(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001461f0a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1461f0a4e FUN_1461f0a4e body=177 status=ok
// SIG undefined FUN_1461f0a4e(void)

undefined8 * FUN_1461f0a4e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1403b5126(param_2 + 2,&local_48,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f0b00 FUN_1461f0b00 body=184 status=ok
// SIG undefined FUN_1461f0b00(void)

undefined8 * FUN_1461f0b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[6] = 0x10000000000;
  param_1[0xb] = 0x10000000000;
  param_1[0x12] = 0x10000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0x10000000000;
  local_32 = *(undefined2 *)param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  local_32 = *(undefined2 *)((longlong)param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_1 + 2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461f0bba FUN_1461f0bba body=132 status=ok
// SIG undefined FUN_1461f0bba(void)

void FUN_1461f0bba(longlong param_1,int param_2)

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



// FUNCTION 1461f0c3e FUN_1461f0c3e body=219 status=ok
// SIG undefined FUN_1461f0c3e(void)

int * FUN_1461f0c3e(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar1) {
    uVar8 = 0;
    uVar5 = (ulonglong)uVar1;
    do {
      uVar6 = (int)(uVar5 >> 1) + (int)uVar8;
      uVar4 = (uint)uVar5;
      if (*(int *)(lVar3 + (ulonglong)uVar6 * 0x18) < *param_2) {
        uVar8 = (ulonglong)(uVar6 + (uVar4 & 1));
      }
      uVar5 = uVar5 >> 1;
    } while (1 < uVar4);
    if (((int)uVar8 < (int)uVar1) && (*(int *)(lVar3 + uVar8 * 0x18) <= *param_2)) {
      piVar7 = (int *)(lVar3 + uVar8 * 0x18);
      FUN_1461f09c8(piVar7,1);
      goto LAB_1461f0c9d;
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_1461f0d1a(param_1,uVar1);
    lVar3 = *param_1;
  }
  lVar2 = uVar8 * 0x18;
  memmove((void *)(lVar3 + lVar2 + 0x18),(void *)(lVar3 + lVar2),
          (ulonglong)(uVar1 - (int)uVar8) * 0x18);
  piVar7 = (int *)(lVar2 + *param_1);
LAB_1461f0c9d:
  *piVar7 = *param_2;
  piVar7[2] = 0;
  piVar7[3] = 0;
  piVar7[4] = 0;
  piVar7[5] = 0;
  return piVar7 + 2;
}



// FUNCTION 1461f0d1a FUN_1461f0d1a body=147 status=ok
// SIG undefined FUN_1461f0d1a(void)

void FUN_1461f0d1a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1461f0dae FUN_1461f0dae body=116 status=ok
// SIG undefined FUN_1461f0dae(void)

void FUN_1461f0dae(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 1461f0e22 FUN_1461f0e22 body=207 status=ok
// SIG undefined FUN_1461f0e22(void)

void FUN_1461f0e22(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((char)param_1[6] == '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 5);
    if ((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) goto LAB_1461f0e40;
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) != 0) goto LAB_1461f0e40;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
LAB_1461f0e40:
  lVar3 = param_1[7];
  lVar2 = *(longlong *)(lVar3 + 0x448);
  if ((lVar2 != 0) && ((longlong)(int)param_1[9] != 0)) {
    lVar3 = param_1[8];
    lVar4 = (longlong)(int)param_1[9] << 4;
    do {
      FUN_1461f0ef2(lVar2,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    lVar3 = param_1[7];
  }
  if (*(longlong *)(lVar3 + 0x440) != 0) {
    FUN_1475530a6(*(longlong *)(lVar3 + 0x440),param_1);
    return;
  }
  return;
}



// FUNCTION 1461f0ef2 FUN_1461f0ef2 body=233 status=ok
// SIG undefined FUN_1461f0ef2(void)

void FUN_1461f0ef2(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar2 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_14027673a(plVar1,(uint)(ushort)param_2[1] + (uVar2 >> 0x10 ^ uVar2) * 0x133 +
                               0x288252e3,param_2);
  if (iVar3 != -1) {
    lVar7 = *plVar1 + (longlong)iVar3 * 0x40;
    if ((lVar7 != 0) && (lVar8 = *plVar1 + (longlong)iVar3 * 0x40 + 0x10, lVar8 != 0)) {
      lVar5 = (longlong)*(int *)(lVar7 + 0x30);
      if (0 < lVar5) {
        uVar6 = lVar5 + 1;
        lVar5 = lVar5 * 0x14;
        do {
          lVar5 = lVar5 + -0x14;
          lVar4 = *(longlong *)(lVar7 + 0x28);
          if (*(longlong *)(lVar7 + 0x28) == 0) {
            lVar4 = lVar8;
          }
          FUN_140cc0e78(*(undefined8 *)(param_1 + 0x58),lVar4 + lVar5);
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      FUN_1461f0fdc(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1461f0fdc FUN_1461f0fdc body=248 status=ok
// SIG undefined FUN_1461f0fdc(void)

void FUN_1461f0fdc(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar5 = (longlong)(int)((uint)(ushort)param_2[1] + (uVar2 >> 0x10 ^ uVar2) * 0x133 + 0x288252e3)
            & (longlong)(int)param_1[9] - 1U;
    iVar4 = *(int *)((longlong)plVar3 + uVar5 * 4);
    if (iVar4 != -1) {
      puVar6 = (ulonglong *)((longlong)plVar3 + uVar5 * 4);
      bVar1 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar4 * 0x40 + *param_1);
        uVar5 = *param_2;
        if ((uVar5 != 0 & bVar1) == 1) {
          FUN_1456cec3c(uVar5);
          bVar1 = DAT_14c950c29;
        }
        if (((*puVar7 == uVar5) && ((int)puVar7[1] == (int)param_2[1])) &&
           (*(char *)((longlong)puVar7 + 0xc) == *(char *)((longlong)param_2 + 0xc))) {
          FUN_1461f10d4(param_1,(int)*puVar6);
          return;
        }
        iVar4 = (int)puVar7[7];
        puVar6 = puVar7 + 7;
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1461f10d4 FUN_1461f10d4 body=89 status=ok
// SIG undefined FUN_1461f10d4(void)

void FUN_1461f10d4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x40 + 0x38);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_1461f112e();
  return;
}



// FUNCTION 1461f112e FUN_1461f112e body=54 status=ok
// SIG undefined FUN_1461f112e(void)

void FUN_1461f112e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x28 + (longlong)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1461f1164(param_1,param_2);
  return;
}



// FUNCTION 1461f1164 FUN_1461f1164 body=116 status=ok
// SIG undefined FUN_1461f1164(void)

void FUN_1461f1164(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1461f11d8 FUN_1461f11d8 body=559 status=ok
// SIG undefined FUN_1461f11d8(void)

void FUN_1461f11d8(longlong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  uVar1 = *param_2;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  iVar3 = (int)param_1[9];
  if (iVar3 != 0) {
    if ((uVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar1);
      iVar3 = (int)param_1[9];
    }
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (longlong)(int)(iVar3 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar7 = iVar3, iVar7 != -1) {
      lVar6 = *param_1;
      iVar3 = *(int *)(lVar6 + 0x10 + (longlong)iVar7 * 0x18);
      if ((uVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(uVar1);
        lVar6 = *param_1;
      }
      uVar2 = *(ulonglong *)(lVar6 + (longlong)iVar7 * 0x18);
      if (((DAT_14c950c29 & 1) != 0) && (uVar2 != 0)) {
        FUN_1456cec3c(uVar2);
      }
      if ((uVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(uVar1);
      }
      if (uVar2 == uVar1) {
        do {
          if (*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x18) == param_3) {
            FUN_1461f1408(param_1,iVar7);
          }
          do {
            iVar7 = iVar3;
            if (iVar7 == -1) {
              return;
            }
            lVar6 = *param_1;
            iVar3 = *(int *)(lVar6 + 0x10 + (longlong)iVar7 * 0x18);
            if ((uVar1 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(uVar1);
              lVar6 = *param_1;
            }
            uVar2 = *(ulonglong *)(lVar6 + (longlong)iVar7 * 0x18);
            if (((DAT_14c950c29 & 1) != 0) && (uVar2 != 0)) {
              FUN_1456cec3c(uVar2);
            }
            if ((uVar1 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(uVar1);
            }
          } while (uVar2 != uVar1);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1461f1408 FUN_1461f1408 body=91 status=ok
// SIG undefined FUN_1461f1408(void)

void FUN_1461f1408(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1461f1464(param_1,param_2,1);
  return;
}



// FUNCTION 1461f1464 FUN_1461f1464 body=138 status=ok
// SIG undefined FUN_1461f1464(void)

void FUN_1461f1464(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1461f14ee FUN_1461f14ee body=1403 status=ok
// SIG undefined FUN_1461f14ee(void)

void FUN_1461f14ee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1461f1b11(*param_2,(int)param_2[1]);
  plVar14 = param_1 + 8;
  if (((int)param_1[9] == (int)param_2[1]) &&
     (cVar6 = FUN_1461f1a8f(*plVar14,*param_2), cVar6 != '\0')) {
    (**(code **)(*param_1 + 0x2b0))(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  local_b8 = *(longlong *)(param_1[7] + 0x448);
  (**(code **)(*param_1 + 0x2b0))(param_1);
  iVar15 = (int)param_2[1];
  local_98 = 0;
  uStack_90 = 0;
  if (0 < iVar15 || 0 < (longlong)(int)param_1[9]) {
    local_a8 = (longlong)iVar15;
    iVar8 = 0;
    iVar17 = 0;
    local_e4 = iVar15;
    local_a0 = (longlong)(int)param_1[9];
    do {
      bVar3 = iVar8 < iVar15;
      bVar4 = iVar17 < (int)local_a0;
      local_e8 = iVar17;
      if ((iVar17 < (int)local_a0) && (iVar8 < iVar15)) {
        lVar12 = (longlong)iVar8;
        lVar18 = (longlong)iVar17;
        lVar16 = lVar18 << 0x20;
        lVar19 = lVar18 * 0x10;
        lVar10 = lVar12 << 0x20;
        lVar13 = lVar12 * 0x10;
        lVar11 = 0;
        local_d8 = param_2;
        local_e0 = plVar14;
        do {
          lVar12 = lVar12 + 1;
          lVar18 = lVar18 + 1;
          lVar1 = *local_e0;
          lVar2 = *local_d8;
          lVar9 = *(longlong *)(lVar11 + lVar2 + lVar13);
          if ((DAT_14c950c29 == '\x01') && (lVar9 != 0)) {
            local_d0 = lVar12;
            local_c8 = lVar18;
            local_c0 = lVar10;
            local_b0 = lVar11;
            FUN_1456cec3c(lVar9);
            lVar12 = local_d0;
            lVar18 = local_c8;
            lVar10 = local_c0;
            lVar11 = local_b0;
          }
          param_2 = local_d8;
          plVar14 = local_e0;
          iVar17 = local_e8;
          if (*(longlong *)(lVar1 + lVar19 + lVar11) != lVar9) {
            lVar9 = *local_d8;
LAB_1461f1636:
            if (*(ulonglong *)(*local_e0 + (lVar16 >> 0x1c)) <
                *(ulonglong *)(lVar9 + (lVar10 >> 0x1c))) {
              (**(code **)(*param_1 + 0x2c0))(param_1,*local_e0 + (lVar16 >> 0x1c));
              uVar5 = uStack_90;
              lVar18 = (longlong)(int)uStack_90;
              uVar7 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
              if (uStack_90._4_4_ < uVar7) {
                FUN_1446f48e2(&local_98,uVar5 & 0xffffffff);
              }
              *(int *)(local_98 + lVar18 * 4) = iVar17;
              iVar17 = iVar17 + 1;
              iVar15 = local_e4;
            }
            else {
              lVar18 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              FUN_1410cc13e(&local_88,param_1[7],lVar9 + (lVar10 >> 0x1c));
              lVar12 = (lVar10 >> 0x20) * 0x10;
              *(undefined1 *)(*param_2 + 0xc + lVar12) = 1;
              (**(code **)(*param_1 + 0x2b8))(param_1,lVar12 + *param_2);
              iVar8 = iVar8 + 1;
              *(undefined8 *)(lVar18 + 0xec8) = local_60;
              plVar14 = local_e0;
              iVar15 = local_e4;
            }
            goto LAB_1461f1723;
          }
          lVar9 = *local_d8;
          local_d0 = lVar12;
          local_c8 = lVar18;
          local_c0 = lVar10;
          if (*(int *)(lVar11 + 8 + lVar1 + lVar19) != *(int *)(lVar11 + 8 + lVar2 + lVar13))
          goto LAB_1461f1636;
          if (*(char *)(lVar11 + 0xc + lVar9 + lVar13) == '\0') {
            (**(code **)(*param_1 + 0x2c0))(param_1,param_1[8] + lVar19 + lVar11);
            if (local_b8 != 0) {
              FUN_1461f0ef2(local_b8,*local_e0 + lVar19 + lVar11);
            }
            plVar14 = local_d8;
            local_b0 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            FUN_1410cc13e(&local_88,param_1[7],*local_d8 + lVar13 + lVar11);
            *(undefined1 *)(lVar11 + 0xc + *plVar14 + lVar13) = 1;
            (**(code **)(*param_1 + 0x2b8))(param_1,*plVar14 + lVar13 + lVar11);
            *(undefined8 *)(local_b0 + 0xec8) = local_60;
          }
          bVar3 = local_d0 < local_a8;
          local_e8 = local_e8 + 1;
          iVar8 = iVar8 + 1;
          bVar4 = local_c8 < local_a0;
          param_2 = local_d8;
          plVar14 = local_e0;
          if (local_a0 <= local_c8) break;
          lVar16 = lVar16 + 0x100000000;
          lVar11 = lVar11 + 0x10;
          lVar10 = local_c0 + 0x100000000;
          lVar18 = local_c8;
          lVar12 = local_d0;
        } while (local_d0 < local_a8);
      }
      iVar15 = local_e4;
      iVar17 = local_e8;
      if ((!bVar4) && (!bVar3)) break;
      if (bVar4) {
        (**(code **)(*param_1 + 0x2c0))(param_1,(longlong)local_e8 * 0x10 + param_1[8]);
        uVar5 = uStack_90;
        lVar18 = (longlong)(int)uStack_90;
        uVar7 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
        if (uStack_90._4_4_ < uVar7) {
          FUN_1446f48e2(&local_98,uVar5 & 0xffffffff);
        }
        *(int *)(local_98 + lVar18 * 4) = local_e8;
        iVar17 = local_e8 + 1;
      }
      else if (bVar3) {
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar12 = (longlong)iVar8 * 0x10;
        FUN_1410cc13e(&local_88,param_1[7],*param_2 + lVar12);
        *(undefined1 *)(*param_2 + 0xc + lVar12) = 1;
        (**(code **)(*param_1 + 0x2b8))(param_1,lVar12 + *param_2);
        iVar8 = iVar8 + 1;
        *(undefined8 *)(lVar18 + 0xec8) = local_60;
      }
LAB_1461f1723:
    } while ((iVar17 < (int)local_a0) || (iVar8 < iVar15));
  }
  lVar18 = local_98;
  if (local_b8 != 0) {
    lVar12 = (longlong)(int)uStack_90;
    if (lVar12 != 0) {
      lVar10 = 0;
      do {
        FUN_1461f0ef2(local_b8,(longlong)*(int *)(lVar18 + lVar10) * 0x10 + *plVar14);
        lVar10 = lVar10 + 4;
      } while (lVar12 * 4 != lVar10);
    }
  }
  lVar18 = *plVar14;
  lVar12 = plVar14[1];
  lVar10 = param_2[1];
  *plVar14 = *param_2;
  plVar14[1] = lVar10;
  local_88._0_4_ = (undefined4)lVar18;
  local_88._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
  uStack_80._0_4_ = (undefined4)lVar12;
  uStack_80._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
  *(undefined4 *)param_2 = (undefined4)local_88;
  *(undefined4 *)((longlong)param_2 + 4) = local_88._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  local_88 = lVar18;
  uStack_80 = lVar12;
  (**(code **)(*param_1 + 0x2c8))(param_1);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f1a8f FUN_1461f1a8f body=130 status=ok
// SIG undefined FUN_1461f1a8f(void)

ulonglong FUN_1461f1a8f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4);
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      if (((*(longlong *)(param_1 + lVar4) != lVar1) ||
          (*(int *)(param_1 + 8 + lVar4) != *(int *)(param_2 + 8 + lVar4))) ||
         (*(char *)(param_1 + 0xc + lVar4) != *(char *)(param_2 + 0xc + lVar4))) {
        uVar3 = 0;
        break;
      }
      lVar4 = lVar4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1461f1b11 FUN_1461f1b11 body=885 status=ok
// SIG undefined FUN_1461f1b11(void)

void FUN_1461f1b11(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_388 [40];
  longlong *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_348[0] = (undefined4)(longlong)(fVar15 + fVar15);
    local_360 = &local_358;
    do {
      puVar10 = (ulonglong *)*local_360;
      puVar13 = (ulonglong *)local_360[1];
      iVar9 = (int)local_360[2];
      iVar7 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar10) >> 4);
      if (iVar9 != 0) {
LAB_1461f1be0:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = (ulonglong)(iVar7 + 1U >> 1);
          uVar1 = puVar10[uVar8 * 2];
          uVar2 = (puVar10 + uVar8 * 2)[1];
          uVar3 = puVar10[1];
          puVar10[uVar8 * 2] = *puVar10;
          (puVar10 + uVar8 * 2)[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          puVar11 = puVar13 + 2;
          bVar5 = DAT_14c950c29;
          local_58 = uVar1;
          uStack_50 = uVar2;
          puVar4 = puVar10;
joined_r0x0001461f1c21:
          while (puVar4 = puVar4 + 2, bVar6 = DAT_14c950c29, puVar4 <= puVar13) {
            uVar1 = *puVar4;
            if (((bVar5 & 1) != 0) && (uVar1 != 0)) {
              FUN_1456cec3c(uVar1);
              bVar5 = DAT_14c950c29;
            }
            bVar6 = DAT_14c950c29;
            if (*puVar10 == uVar1) goto LAB_1461f1cad;
            if (*puVar10 < *puVar4) break;
          }
          goto joined_r0x0001461f1c2a;
        }
        for (; puVar4 = puVar10, bVar5 = DAT_14c950c29, puVar11 = puVar10, puVar10 < puVar13;
            puVar13 = puVar13 + -2) {
          while (puVar12 = puVar4, puVar11 = puVar11 + 2, puVar11 <= puVar13) {
            uVar1 = *puVar11;
            if (((bVar5 & 1) != 0) && (uVar1 != 0)) {
              FUN_1456cec3c(uVar1);
              bVar5 = DAT_14c950c29;
            }
            if (*puVar12 == uVar1) {
              bVar14 = (ushort)puVar12[1] < (ushort)puVar11[1];
            }
            else {
              bVar14 = *puVar12 < *puVar11;
            }
            puVar4 = puVar11;
            if (!bVar14) {
              puVar4 = puVar12;
            }
          }
          uVar1 = *puVar12;
          uVar2 = puVar12[1];
          uVar3 = puVar13[1];
          *puVar12 = *puVar13;
          puVar12[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
          local_58 = uVar1;
          uStack_50 = uVar2;
        }
        goto LAB_1461f1e66;
      }
LAB_1461f1dbc:
      FUN_147565637(puVar10);
LAB_1461f1e66:
      local_360 = local_360 + -3;
    } while (&local_358 <= local_360);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1461f1cad:
  if ((ushort)puVar4[1] <= (ushort)puVar10[1]) goto joined_r0x0001461f1c21;
joined_r0x0001461f1c2a:
  do {
    while( true ) {
      puVar12 = puVar11;
      puVar11 = puVar12 + -2;
      if (puVar11 <= puVar10) goto LAB_1461f1ce4;
      uVar1 = *puVar10;
      if (((bVar6 & 1) != 0) && (uVar1 != 0)) {
        FUN_1456cec3c(uVar1);
        bVar6 = DAT_14c950c29;
      }
      if (*puVar11 == uVar1) break;
      if (*puVar11 < *puVar10) {
        puVar12 = puVar11 + 2;
        goto LAB_1461f1ce4;
      }
    }
  } while ((ushort)puVar10[1] <= (ushort)puVar11[1]);
LAB_1461f1ce4:
  if (puVar4 <= puVar11) {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar3 = puVar11[1];
    *puVar4 = *puVar11;
    puVar4[1] = uVar3;
    local_58._0_4_ = (undefined4)uVar1;
    local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
    uStack_50._0_4_ = (undefined4)uVar2;
    uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
    *(undefined4 *)puVar11 = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
    *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
    bVar5 = DAT_14c950c29;
    local_58 = uVar1;
    uStack_50 = uVar2;
    goto joined_r0x0001461f1c21;
  }
  uVar1 = *puVar10;
  uVar2 = puVar10[1];
  uVar3 = puVar11[1];
  *puVar10 = *puVar11;
  puVar10[1] = uVar3;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)(uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)(uVar2 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  iVar9 = iVar9 + -1;
  puVar12 = puVar12 + -4;
  local_58 = uVar1;
  uStack_50 = uVar2;
  if ((longlong)puVar12 - (longlong)puVar10 < (longlong)puVar13 - (longlong)puVar4) {
    if (puVar4 < puVar13) {
      *local_360 = (longlong)puVar4;
      local_360[1] = (longlong)puVar13;
      *(int *)(local_360 + 2) = iVar9;
      local_360 = local_360 + 3;
    }
    if (puVar11 <= puVar10 + 2) goto LAB_1461f1e66;
  }
  else {
    if (puVar10 + 2 < puVar11) {
      *local_360 = (longlong)puVar10;
      local_360[1] = (longlong)puVar12;
      *(int *)(local_360 + 2) = iVar9;
      local_360 = local_360 + 3;
    }
    puVar10 = puVar4;
    puVar12 = puVar13;
    if (puVar13 <= puVar4) goto LAB_1461f1e66;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar10) >> 4);
  puVar13 = puVar12;
  if (iVar9 == 0) goto LAB_1461f1dbc;
  goto LAB_1461f1be0;
}



// FUNCTION 1461f1e88 FUN_1461f1e88 body=103 status=ok
// SIG undefined FUN_1461f1e88(void)

ulonglong FUN_1461f1e88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461f1ed2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461f1ed2;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461f1ef0 FUN_1461f1ef0 body=330 status=ok
// SIG undefined FUN_1461f1ef0(void)

void FUN_1461f1ef0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1461f204e();
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x1f0) != 0)) &&
      (lVar6 = FUN_1458774f4(), lVar6 != 0)) && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x178);
    bVar3 = true;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      uVar7 = 0;
    }
    else {
      iVar4 = *(int *)(puVar8 + 1);
      uVar7 = 0;
      do {
        if (iVar4 == 0) {
          puVar8 = (undefined8 *)0x0;
          goto LAB_1461f1f83;
        }
        LOCK();
        iVar2 = *(int *)(puVar8 + 1);
        bVar9 = iVar4 == iVar2;
        if (bVar9) {
          *(int *)(puVar8 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar9);
      uVar7 = *(undefined8 *)(param_1 + 0x170);
      bVar3 = false;
    }
LAB_1461f1f83:
    uVar5 = FUN_145c29964(uVar7);
    local_38 = 0;
    local_30 = *(longlong *)(param_1 + 0x178);
    if (local_30 != 0) {
      iVar4 = *(int *)(local_30 + 8);
      do {
        if (iVar4 == 0) {
          local_30 = 0;
          goto LAB_1461f1fca;
        }
        LOCK();
        iVar2 = *(int *)(local_30 + 8);
        bVar9 = iVar4 == iVar2;
        if (bVar9) {
          *(int *)(local_30 + 8) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar9);
      if (local_30 != 0) {
        local_38 = *(undefined8 *)(param_1 + 0x170);
      }
    }
LAB_1461f1fca:
    FUN_145c29984(lVar6,&local_38,uVar5);
    if (!bVar3) {
      LOCK();
      piVar1 = (int *)(puVar8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar8)(puVar8);
        LOCK();
        piVar1 = (int *)((longlong)puVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f204e FUN_1461f204e body=1 status=ok
// SIG undefined FUN_1461f204e(void)

void FUN_1461f204e(void)

{
  return;
}



// FUNCTION 1461f2050 FUN_1461f2050 body=302 status=ok
// SIG undefined FUN_1461f2050(void)

void FUN_1461f2050(longlong param_1)

{
  undefined8 *_Dst;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 ***local_40 [3];
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0;
  _Dst = (undefined8 *)(param_1 + 0xf8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x118) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x110)) {
      puVar2 = (undefined8 *)*_Dst;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x110)) {
    FUN_1400020a8(*_Dst);
  }
  *(undefined2 *)(param_1 + 0x110) = 0;
  pcVar1 = DAT_14c9a85b8;
  if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar1 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0)) {
    memcpy(_Dst,local_40,(longlong)DAT_14c9a8510);
  }
  else {
    (*pcVar1)(_Dst,local_40);
  }
  *(undefined1 *)(param_1 + 0x118) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_40[0];
    if (local_28 < 0x19) {
      ppppuVar3 = local_40;
    }
    (*DAT_14c9a85d0)(ppppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461f2180 FUN_1461f2180 body=134 status=ok
// SIG undefined FUN_1461f2180(void)

void FUN_1461f2180(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xb28) != -1) && (param_2 == 0 && *(longlong *)(param_1 + 0xb20) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140ef6a7a(*(undefined8 *)(param_1 + 0xb00),*(undefined4 *)(param_1 + 0xb08));
  *(undefined4 *)(param_1 + 0xb08) = 0;
  if (*(int *)(param_1 + 0xb0c) != 0) {
    FUN_1460651de(param_1 + 0xb00,0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 1461f2206 FUN_1461f2206 body=393 status=ok
// SIG undefined FUN_1461f2206(void)

void FUN_1461f2206(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[0x4d] == param_3) {
    *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
    lVar3 = param_1[0x4c];
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x178) == '\x03') {
        if ((char)param_1[0x46] != '\0') {
          uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x10e0) + 0x50))(lVar3 + 0x10e0);
          FUN_140c4a7e8(uVar2,(char)param_1[0x46],1);
          *(undefined1 *)(param_1 + 0x46) = 0;
          lVar3 = param_1[0x4c];
        }
        if (0 < (longlong)*(int *)(lVar3 + 0x4950)) {
          lVar5 = *(longlong *)(lVar3 + 0x4948);
          lVar4 = (longlong)*(int *)(lVar3 + 0x4950) << 5;
          do {
            if (*(char *)(lVar5 + 0x1c) == '\0') {
              FUN_1456e2770(lVar3 + 0x4780,lVar5);
            }
            lVar5 = lVar5 + 0x20;
            lVar4 = lVar4 + -0x20;
          } while (lVar4 != 0);
        }
      }
      FUN_1456e2a36(param_1 + -0x118,param_1 + 0x32);
      lVar3 = param_1[0x4c];
      plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*plVar1 + 0x6a0))(plVar1,lVar3);
      if (lVar3 != 0) {
        FUN_140f065f6(lVar3,param_1,param_3);
      }
      if ((char)param_1[-0xe9] == '\x03') {
        if (param_1[0x4a] != 0) {
          FUN_145ac621c(param_1 + 3);
        }
        lVar3 = param_1[0x49];
        if ((longlong)(int)lVar3 != 0) {
          lVar5 = param_1[0x48];
          lVar4 = 0;
          do {
            plVar1 = *(longlong **)(lVar5 + lVar4);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x20))(plVar1,param_1[0x4c]);
            }
            lVar4 = lVar4 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar4);
        }
      }
      param_1[0x4c] = 0;
    }
  }
  return;
}



// FUNCTION 1461f2390 FUN_1461f2390 body=242 status=ok
// SIG undefined FUN_1461f2390(void)

void FUN_1461f2390(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  code **local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined1 local_46;
  bool bStack_45;
  undefined1 local_44 [2];
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  bool bStack_3b;
  uint local_38;
  undefined1 local_34;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_40 = *(undefined2 *)(lVar2 + 0xfe);
  local_42 = *(undefined2 *)(lVar1 + 0x50);
  local_3e = *(undefined2 *)(lVar1 + 0xbc);
  local_34 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_38 = *(uint *)(lVar1 + 0x290);
  bVar3 = (local_38 & 0xfffffeff) == 1;
  _local_3c = CONCAT11(bVar3,local_3c);
  local_60 = param_1 + 0x40;
  local_50 = *(undefined8 *)(lVar1 + 0x548);
  local_68 = &local_50;
  local_78 = &local_46;
  _local_46 = CONCAT11(bVar3,local_3c);
  local_70 = &local_30;
  local_30 = FUN_14115c94c;
  local_28 = 3;
  FUN_1461f2484(local_44,local_54,lVar1 + 0x28,param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


