// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140166ef2 FUN_140166ef2 body=335 status=ok
// SIG undefined FUN_140166ef2(void)

void FUN_140166ef2(longlong *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  if (*param_1 != 0) goto LAB_140166f68;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a79c8c0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_140166f68;
    param_1[1] = 0;
LAB_140166fca:
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
    if (plVar5 == (longlong *)0x0) goto LAB_140166f68;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
      param_1[1] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_140166fca;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_140166f68:
  param_1 = (longlong *)*param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar3 = *param_2;
  *puVar6 = &PTR_FUN_14a7bed48;
  *(undefined1 *)(puVar6 + 1) = uVar3;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_1447aaeac(param_1,iVar4);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar4 * 8) = puVar6;
  return;
}



// FUNCTION 140167042 FUN_140167042 body=1785 status=ok
// SIG undefined FUN_140167042(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140167042(char *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar16;
  undefined1 auVar15 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auStack_278 [32];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
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
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  auVar31 = _DAT_149934d80;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    dVar16 = param_2[1];
    dVar1 = param_2[2];
    dVar19 = param_2[3];
    dVar14 = param_2[4];
    dVar24 = param_2[5];
    dVar17 = param_2[6];
    dVar18 = param_2[7];
    *(double *)(param_1 + 0x10) = *param_2;
    *(double *)(param_1 + 0x18) = dVar16;
    *(double *)(param_1 + 0x20) = dVar1;
    *(double *)(param_1 + 0x28) = dVar19;
    *(double *)(param_1 + 0x30) = dVar14;
    *(double *)(param_1 + 0x38) = dVar24;
    *(double *)(param_1 + 0x40) = dVar17;
    *(double *)(param_1 + 0x48) = dVar18;
    uVar10 = DAT_14cacb0f0;
    uVar9 = DAT_14cacb0e8;
    *(undefined8 *)(param_1 + 0x50) = _DAT_14cacb0e0;
    *(undefined8 *)(param_1 + 0x58) = uVar9;
    *(undefined8 *)(param_1 + 0x60) = uVar10;
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
  }
  else {
    auVar20 = *(undefined1 (*) [16])(param_1 + 0x50);
    dVar14 = auVar20._0_8_;
    dVar16 = auVar20._8_8_;
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x60);
    dVar24 = auVar15._0_8_;
    auVar21 = *(undefined1 (*) [16])(param_2 + 8);
    dVar17 = auVar21._0_8_;
    dVar1 = auVar21._8_8_;
    dVar18 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
    auVar20 = minpd(auVar21,auVar20);
    auVar22 = minpd(*(undefined1 (*) [16])(param_2 + 10),auVar15);
    auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
    auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
    iVar11 = movmskpd((int)local_b0,auVar21);
    auVar20._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    uVar12 = movmskpd((int)param_1,auVar20);
    if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar26 = *param_2;
      dVar27 = param_2[1];
      dVar3 = param_2[2];
      dVar4 = param_2[3];
      dVar5 = *(double *)(param_1 + 0x10);
      dVar6 = *(double *)(param_1 + 0x18);
      dVar7 = *(double *)(param_1 + 0x20);
      dVar8 = *(double *)(param_1 + 0x28);
      dVar19 = *(double *)(param_1 + 0x28);
      dVar1 = *(double *)(param_1 + 0x28);
      dVar2 = *(double *)(param_1 + 0x10);
      dVar30 = *(double *)(param_1 + 0x10);
      dVar33 = *(double *)(param_1 + 0x18);
      dVar28 = *(double *)(param_1 + 0x18);
      dVar29 = *(double *)(param_1 + 0x20);
      dVar25 = *(double *)(param_1 + 0x20);
      dVar17 = dVar27 * dVar29 * -1.0 + dVar3 * dVar33 + dVar4 * dVar2 * 1.0 + dVar26 * dVar19;
      dVar18 = dVar26 * dVar25 * 1.0 + dVar4 * dVar28 + dVar3 * dVar30 * -1.0 + dVar27 * dVar1;
      auVar31._0_8_ =
           dVar4 * dVar29 * 1.0 + ((dVar2 * dVar27 * 1.0 + dVar3 * dVar19) - dVar26 * dVar33);
      auVar31._8_8_ =
           dVar3 * dVar25 * -1.0 + ((dVar30 * dVar26 * -1.0 + dVar4 * dVar1) - dVar27 * dVar28);
      dVar14 = dVar14 * param_2[4];
      dVar16 = dVar16 * param_2[5];
      dVar24 = dVar24 * param_2[6];
      dVar2 = auVar15._8_8_ * param_2[7];
      dVar28 = dVar16 * dVar5 - dVar6 * dVar14;
      dVar29 = dVar24 * dVar6 - dVar7 * dVar16;
      dVar30 = dVar14 * dVar7 - dVar5 * dVar24;
      dVar33 = dVar2 * dVar8 - dVar8 * dVar2;
      dVar29 = dVar29 + dVar29;
      dVar30 = dVar30 + dVar30;
      dVar28 = dVar28 + dVar28;
      dVar33 = dVar33 + dVar33;
      local_d8 = (dVar28 * dVar6 - dVar7 * dVar30) + dVar19 * dVar29 + dVar14 +
                 *(double *)(param_1 + 0x30);
      dStack_d0 = (dVar29 * dVar7 - dVar28 * dVar5) + dVar1 * dVar30 + dVar16 +
                  *(double *)(param_1 + 0x38);
      local_c8 = (dVar30 * dVar5 - dVar6 * dVar29) + dVar19 * dVar28 + dVar24 +
                 *(double *)(param_1 + 0x40);
      dVar14 = (dVar33 * dVar8 - dVar33 * dVar8) + dVar1 * dVar33 + dVar2 +
               *(double *)(param_1 + 0x48);
    }
    else {
      dVar2 = *(double *)(param_1 + 0x10);
      dVar30 = *(double *)(param_1 + 0x18);
      dVar33 = *(double *)(param_1 + 0x20);
      dVar28 = dVar30 + dVar30;
      dVar29 = dVar33 + dVar33;
      dVar19 = dVar2 * (dVar2 + dVar2);
      dStack_190 = (DAT_149934d80._8_8_ - (dVar33 * dVar29 + dVar19)) * dVar16;
      local_168 = (1.0 - (dVar19 + dVar30 * dVar28)) * dVar24;
      dVar19 = *(double *)(param_1 + 0x28);
      dVar25 = dVar29 * dVar19;
      dVar26 = (dVar2 + dVar2) * *(double *)(param_1 + 0x28);
      dVar19 = dVar28 * dVar19;
      local_198 = (dVar28 * dVar2 - dVar25) * dVar16;
      dStack_170 = (dVar29 * dVar30 - dVar26) * dVar24;
      dVar2 = (dVar28 * dVar2 + dVar25) * dVar14;
      local_188 = (dVar29 * dVar30 + dVar26) * dVar16;
      local_178 = (dVar19 + *(double *)(param_1 + 0x10) * dVar29) * dVar24;
      local_1a8 = (*(double *)(param_1 + 0x10) * dVar29 - dVar19) * dVar14;
      local_1b8._8_4_ = SUB84(dVar2,0);
      local_1b8._0_8_ = ((double)DAT_149934d80 - (dVar33 * dVar29 + dVar30 * dVar28)) * dVar14;
      local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      uStack_160 = 0;
      local_158 = *(undefined8 *)(param_1 + 0x30);
      uStack_150 = *(undefined8 *)(param_1 + 0x38);
      local_148 = *(undefined8 *)(param_1 + 0x40);
      uStack_140 = 0x3ff0000000000000;
      dVar30 = *param_2;
      dVar33 = param_2[1];
      dVar28 = param_2[2];
      dVar29 = dVar33 + dVar33;
      dVar25 = dVar28 + dVar28;
      dVar2 = dVar30 * (dVar30 + dVar30);
      dVar19 = param_2[3];
      dVar26 = dVar25 * dVar19;
      dVar27 = (dVar30 + dVar30) * param_2[3];
      dVar19 = dVar29 * dVar19;
      local_218 = (dVar29 * dVar30 - dVar26) * dVar1;
      dStack_1f0 = (dVar25 * dVar33 - dVar27) * dVar18;
      local_238 = ((double)DAT_149934d80 - (dVar28 * dVar25 + dVar33 * dVar29)) * dVar17;
      dStack_210 = (DAT_149934d80._8_8_ - (dVar28 * dVar25 + dVar2)) * dVar1;
      dStack_230 = (dVar29 * dVar30 + dVar26) * dVar17;
      local_208 = (dVar25 * dVar33 + dVar27) * dVar1;
      local_1f8 = (dVar19 + *param_2 * dVar25) * dVar18;
      local_228 = (*param_2 * dVar25 - dVar19) * dVar17;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1e8 = (1.0 - (dVar2 + dVar33 * dVar29)) * dVar18;
      uStack_1e0 = 0;
      local_1d8 = param_2[4];
      dStack_1d0 = param_2[5];
      local_1c8 = param_2[6];
      uStack_1c0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_138,&local_238);
      FUN_144a1c686(&local_138,0x3e45798ee0000000);
      auVar15._8_8_ = -(ulonglong)(0.0 <= dVar16 * dVar1);
      auVar15._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar17);
      auVar20 = blendvpd(_DAT_149936790,auVar31,auVar15);
      uVar13 = -(ulonglong)(0.0 <= dVar24 * dVar18);
      dVar14 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar24 = auVar20._0_8_;
      local_128 = local_128 * dVar24;
      local_130 = local_130 * dVar24;
      local_138 = local_138 * dVar24;
      dVar24 = auVar20._8_8_;
      local_108 = local_108 * dVar24;
      local_110 = local_110 * dVar24;
      local_118 = dVar24 * local_118;
      local_e8 = local_e8 * dVar14;
      local_f0 = local_f0 * dVar14;
      local_f8 = dVar14 * local_f8;
      FUN_14481fd10(&local_258,&local_138);
      dVar14 = local_248 * local_248 + local_258 * local_258;
      dVar24 = dStack_240 * dStack_240 + dStack_250 * dStack_250;
      auVar23._0_8_ = dVar14 + dVar24;
      auVar23._8_8_ = dVar14 + dVar24;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
      auVar20 = sqrtpd(auVar23,auVar23);
      auVar31 = divpd(auVar31,auVar20);
      auVar32._0_8_ = auVar31._0_8_ * local_248;
      auVar32._8_8_ = auVar31._8_8_ * dStack_240;
      dVar17 = (double)((ulonglong)(local_258 * auVar31._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
      dVar18 = (double)((ulonglong)(dStack_250 * auVar31._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
      auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar22);
      dVar14 = 0.0;
    }
    *(double *)(param_1 + 0x10) = dVar17;
    *(double *)(param_1 + 0x18) = dVar18;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar31;
    *(double *)(param_1 + 0x30) = local_d8;
    *(double *)(param_1 + 0x38) = dStack_d0;
    *(double *)(param_1 + 0x40) = local_c8;
    *(double *)(param_1 + 0x48) = dVar14;
    uVar10 = DAT_14cacb0f0;
    uVar9 = DAT_14cacb0e8;
    *(undefined8 *)(param_1 + 0x50) = _DAT_14cacb0e0;
    *(undefined8 *)(param_1 + 0x58) = uVar9;
    *(undefined8 *)(param_1 + 0x60) = uVar10;
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
  }
  if ((local_b0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016773c FUN_14016773c body=2030 status=ok
// SIG undefined FUN_14016773c(void)

undefined8 *
FUN_14016773c(longlong *param_1,undefined8 *param_2,float param_3,float param_4,byte param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double *pdVar12;
  double *pdVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_318 [36];
  float local_2f4;
  float local_2f0;
  float local_2ec;
  double local_2e8 [12];
  undefined1 local_288 [4];
  undefined4 local_284;
  undefined8 local_278 [2];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_288[0] = 0;
  local_284 = 0;
  local_278[0] = 0;
  local_278[1] = 0;
  local_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25c = 0x3ff00000;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_234 = 0x3ff00000;
  uStack_230 = 0;
  uStack_22c = 0x3ff00000;
  local_228 = 0x3ff0000000000000;
  uStack_220 = 0;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    local_2f0 = param_4;
    fVar31 = param_4;
LAB_140167863:
    auVar27 = ZEXT816(0x3ff0000000000000);
    fVar15 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    fVar32 = param_4 + param_3;
    fVar33 = fVar32;
    if (fVar32 < 0.0 || fVar15 < fVar32) {
      if (fVar15 <= fVar32) {
        fVar33 = fVar15;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
    }
    local_2f4 = param_4;
    FUN_144943c1c(param_1,&local_1b8);
    fVar16 = (float)FUN_140167f2b(param_1);
    dVar17 = (double)fVar16;
    local_198 = dVar17 * local_198;
    dStack_190 = dVar17 * dStack_190;
    local_188 = dVar17 * local_188;
    dStack_180 = dStack_180 * 0.0;
    FUN_144943c1c(param_1,&local_218);
    plVar9 = param_1;
    uVar5 = FUN_140167f2b();
    uVar8 = SUB84(plVar9,0);
    dVar17 = (double)extraout_XMM0_Da;
    local_1f8 = dVar17 * local_1f8;
    dStack_1f0 = dVar17 * dStack_1f0;
    local_1e8 = dVar17 * local_1e8;
    dStack_1e0 = dStack_1e0 * 0.0;
    if (*(char *)((longlong)param_1 + 0x17c) == '\x01') {
      local_178 = ZEXT812(0x3ff0000000000000);
      uStack_16c = 0x3ff00000;
      local_168 = auVar27;
      local_1d8 = 1.0;
      dStack_1d0 = 1.0;
      local_1c8 = auVar27;
LAB_140167975:
    }
    else {
      plVar9 = param_1;
      uVar5 = (**(code **)(*param_1 + 0x2c0))();
      uVar8 = SUB84(plVar9,0);
      if ((char)uVar5 != '\0') {
        local_178._0_8_ = (double)local_178._0_8_ + 1.0;
        register0x000012c8 = stack0xfffffffffffffe90 + 1.0;
        local_168._8_8_ = 0;
        local_168._0_8_ = (double)local_168._0_8_ + 1.0;
        local_1c8._0_8_ = (double)local_1c8._0_8_ + 1.0;
        dStack_1d0 = dStack_1d0 + 1.0;
        local_1d8 = local_1d8 + 1.0;
        local_1c8._8_8_ = 0;
        goto LAB_140167975;
      }
    }
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_148 = 0.0;
    dStack_140 = 1.0;
    local_128 = ZEXT816(0);
    local_138 = ZEXT816(0);
    local_118 = 1.0;
    dStack_110 = 1.0;
    dVar17 = local_1a8 * local_1a8 + local_1b8 * local_1b8;
    dVar25 = dStack_1a0 * dStack_1a0 + dStack_1b0 * dStack_1b0;
    local_108._0_16_ = auVar27;
    auVar19._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar17 + dVar25)));
    auVar19._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar17 + dVar25)));
    iVar6 = movmskpd(uVar5,auVar19);
    if (iVar6 == 0) {
      auVar22._8_8_ = dStack_1d0;
      auVar22._0_8_ = local_1d8;
      auVar19 = minpd(auVar22,_local_178);
      auVar22 = minpd(local_1c8,local_168);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      iVar6 = movmskpd(0,auVar20);
      auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar7 = movmskpd(uVar8,auVar23);
      if ((uVar7 & 0x3fffffff) == 0 && iVar6 == 0) {
        local_2ec = param_3;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c8460b0) {
          FUN_144b3d300(&DAT_14c8460b0);
          if (DAT_14c8460b0 == -1) {
            DAT_14c8460a0 = 0x322bcc77322bcc77;
            DAT_14c8460a8 = 0x322bcc77322bcc77;
            _Init_thread_footer(&DAT_14c8460b0);
          }
        }
        auVar24._8_8_ = 0x3ff0000000000000;
        auVar24._0_8_ = 0x3ff0000000000000;
        auVar19 = divpd(auVar24,_local_178);
        auVar27 = divpd(auVar27,local_168);
        dVar18 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(local_178._0_8_)) &
                         auVar19._0_8_);
        dVar21 = (double)(-(ulonglong)
                           ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(local_178._8_8_)
                           ) & auVar19._8_8_);
        dVar30 = (double)(-(ulonglong)((double)(float)DAT_14c8460a8 < ABS(local_168._0_8_)) &
                         auVar27._0_8_);
        dVar3 = local_1f8 - local_198;
        dVar4 = dStack_1f0 - dStack_190;
        dVar29 = local_1e8 - local_188;
        dVar1 = -local_1b8;
        dVar2 = -dStack_1b0;
        dVar17 = local_1a8 * -1.0;
        dVar25 = dStack_1a0 * 1.0;
        dVar26 = dVar4 * dVar1 - dVar3 * dVar2;
        dVar28 = dVar29 * dVar2 - dVar4 * dVar17;
        dVar34 = dVar3 * dVar17 - dVar29 * dVar1;
        dVar35 = dVar25 * 0.0 - dVar25 * 0.0;
        dVar28 = dVar28 + dVar28;
        dVar34 = dVar34 + dVar34;
        dVar26 = dVar26 + dVar26;
        dVar35 = dVar35 + dVar35;
        local_138._0_8_ = ((dVar26 * dVar2 - dVar17 * dVar34) + dVar25 * dVar28 + dVar3) * dVar18;
        local_138._8_8_ = ((dVar28 * dVar17 - dVar26 * dVar1) + dVar25 * dVar34 + dVar4) * dVar21;
        dVar35 = ((dVar35 * dVar25 - dVar35 * dVar25) + dVar25 * dVar35 + 0.0) * 0.0;
        local_118 = local_1d8 * dVar18;
        dStack_110 = dStack_1d0 * dVar21;
        local_108._8_8_ = (double)local_1c8._8_8_ * 0.0;
        local_108._0_8_ = (double)local_1c8._0_8_ * dVar30;
        local_128._8_4_ = SUB84(dVar35,0);
        local_128._0_8_ = ((dVar34 * dVar1 - dVar2 * dVar28) + dVar25 * dVar26 + dVar29) * dVar30;
        local_128._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        local_158 = dStack_210 * dVar17 * -1.0 +
                    ((local_218 * dVar25 - local_1b8 * dStack_200 * 1.0) - local_208 * dStack_1b0);
        dStack_150 = local_218 * dVar17 * 1.0 +
                     ((dStack_210 * dVar25 - local_1b8 * local_208 * -1.0) - dStack_200 * dStack_1b0
                     );
        local_148 = dStack_200 * dVar17 * 1.0 +
                    dStack_1b0 * local_218 + (dVar25 * local_208 - local_1b8 * dStack_210 * 1.0);
        dStack_140 = local_208 * dVar17 * -1.0 +
                     dStack_1b0 * dStack_210 + (dVar25 * dStack_200 - local_1b8 * local_218 * -1.0);
        param_3 = local_2ec;
        fVar31 = local_2f0;
      }
      else {
        FUN_1402db8fa(&local_158,&local_218,&local_1b8);
      }
      lVar10 = 0xc;
      pdVar12 = &local_158;
      pdVar13 = local_2e8;
    }
    else {
      pdVar12 = (double *)&DAT_14c846480;
      pdVar13 = local_2e8;
      lVar10 = 0xc;
    }
    for (; lVar10 != 0; lVar10 = lVar10 + -1) {
      *pdVar13 = *pdVar12;
      pdVar12 = pdVar12 + 1;
      pdVar13 = pdVar13 + 1;
    }
    FUN_140167042(local_288,local_2e8);
    if (((fVar32 < 0.0 || fVar15 < fVar32) & param_5) == 1) {
      param_4 = local_2f4 - (fVar33 - param_3);
      param_3 = 0.0;
      if (fVar31 < 0.0) {
        param_3 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
      }
      goto LAB_140167863;
    }
  }
  puVar11 = local_278;
  puVar14 = param_2;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140167f2b FUN_140167f2b body=451 status=ok
// SIG undefined FUN_140167f2b(void)

undefined8 FUN_140167f2b(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  int local_64;
  ulonglong local_60;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_1 != 0) && (0.0 < (float)param_2)) &&
     (lVar3 = *(longlong *)(param_1 + 0x40), lVar3 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x588));
    plVar1 = (longlong *)(lVar3 + 0x538);
    lVar4 = *(longlong *)(param_1 + 0x160);
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar8 = (uint)lVar4 & 0xffff;
    if (*(int *)(lVar3 + 0x540) != *(int *)(lVar3 + 0x56c)) {
      lVar6 = lVar3 + 0x570;
      if (*(longlong *)(lVar3 + 0x578) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0x578);
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar3 + 0x580) - 1U &
                               ((uint)lVar4 << 0x10 | uVar8) + (int)((ulonglong)lVar4 >> 0x20) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar2 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x14);
          if (*plVar2 == lVar4) {
            if (plVar2 != (longlong *)0x0) goto LAB_14016802d;
            break;
          }
          iVar7 = *(int *)((longlong)plVar2 + 0xc);
        } while (iVar7 != -1);
      }
    }
    local_78 = 0;
    local_70 = param_1 + 0x160;
    FUN_1408e05d2(plVar1,&local_64);
    plVar2 = (longlong *)(*plVar1 + (longlong)local_64 * 0x14);
LAB_14016802d:
    fVar9 = *(float *)(plVar2 + 1);
    if (fVar9 < 0.0) {
      fVar9 = (float)FUN_1408e0795(lVar3,param_1 + 0x160);
      *(float *)(plVar2 + 1) = fVar9;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x588));
    if (0.0 < fVar9) {
      fVar9 = (float)param_2 / fVar9;
      goto LAB_140168053;
    }
  }
  fVar9 = 1.0;
  uVar10 = 0;
LAB_140168053:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar10,fVar9);
}



// FUNCTION 1401680f0 FUN_1401680f0 body=794 status=ok
// SIG undefined FUN_1401680f0(void)

void FUN_1401680f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *lpTlsValue;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4c8) != 0) goto LAB_1401682c8;
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar6 = (undefined8 *)lpTlsValue[1];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*lpTlsValue;
    if (puVar6 == (undefined8 *)0x0) {
      uVar4 = FUN_14470efbc(&DAT_14c896180);
      if (uVar4 == 0) {
        lpTlsValue[1] = 0;
LAB_1401683de:
        puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
        lpTlsValue[1] = puVar6;
        iVar3 = 0xff;
        puVar7 = puVar6;
        do {
          puVar5 = puVar7 + 0x20;
          *puVar7 = puVar5;
          iVar3 = iVar3 + -1;
          puVar7 = puVar5;
        } while (iVar3 != 0);
        goto LAB_140168317;
      }
      puVar6 = *(undefined8 **)
                (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8) + 8 +
                (ulonglong)(uVar4 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar4);
      lpTlsValue[1] = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_1401683de;
    }
    else {
      lpTlsValue[1] = puVar6;
      puVar5 = lpTlsValue;
LAB_140168317:
      *puVar5 = 0;
    }
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar3 = 0xff;
  }
  else {
    iVar3 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar6;
  *(int *)(lpTlsValue + 2) = iVar3;
  *puVar6 = UE::Tasks::Private::FTaskBase::vftable;
  puVar6[1] = &DAT_100000002;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  puVar6[6] = 0;
  puVar6[7] = 0x100000000;
  *(undefined1 *)(puVar6 + 8) = 1;
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0xe800000000000020;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0x100000000;
  *(undefined2 *)(puVar6 + 0x14) = 0;
  LOCK();
  bVar9 = *(char *)(puVar6 + 8) == '\x01';
  if (bVar9) {
    *(char *)(puVar6 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar9) {
    FUN_14008cdb0(puVar6 + 8);
  }
  *puVar6 = &PTR_FUN_14a38b7e8;
  if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
  }
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar6[9] = puVar6;
  puVar6[10] = puVar6;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar6[0xf] = uVar8;
  puVar6[0x10] = 0xc80000528e24a700;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  puVar6[0x15] = param_1;
  *puVar6 = &PTR_FUN_14a38b7d8;
  LOCK();
  *(longlong *)(param_1 + 0x4c8) = *(longlong *)(param_1 + 0x4c8) + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 1;
  UNLOCK();
  puVar6[2] = param_1 + 0x4c0;
  local_21 = 1;
  FUN_1447439e4(puVar6);
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
LAB_1401682c8:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016840c FUN_14016840c body=170 status=ok
// SIG undefined FUN_14016840c(void)

undefined4 * FUN_14016840c(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[8];
  bVar3 = param_3[0xc];
  bVar4 = param_3[0x10];
  bVar5 = param_3[0x14];
  iVar6 = *(int *)(param_3 + 4);
  iVar7 = *(int *)(param_3 + 0x18);
  FUN_1401684b8();
  FUN_1448e935e(param_1,&local_38,&DAT_14c9f9608,
                iVar6 * 2 +
                ((uint)bVar2 + (uint)bVar3 * 2 | iVar7 << 4 | (uint)bVar4 * 4 + (uint)bVar5 * 8) * 8
                | (uint)bVar1);
  FUN_1401684b8();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401684b8 FUN_1401684b8 body=289 status=ok
// SIG undefined FUN_1401684b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401684b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f96b0) {
    FUN_144b3d300(&DAT_14c9f96b0);
    if (DAT_14c9f96b0 == -1) {
      FUN_1401685da();
      FUN_1456d1de2();
      FUN_140db5666(&DAT_14c9f9608,0,&DAT_14c9f95a0,
                    L"FLumenSceneDirectLightingTraceDistanceFieldShadowsCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingSoftwareRayTracing.usf",
                    L"LumenSceneDirectLightingTraceDistanceFieldShadowsCS",5,0x180,FUN_147205350,
                    FUN_1472052f0,FUN_14176b4a0,&LAB_142d68e92,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9fe118);
      _DAT_14c9f9608 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e95);
      _Init_thread_footer(&DAT_14c9f96b0);
    }
  }
  return &DAT_14c9f9608;
}



// FUNCTION 1401685da FUN_1401685da body=258 status=ok
// SIG undefined FUN_1401685da(void)

void FUN_1401685da(void)

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
              0x110) < DAT_14c9fe198) {
    FUN_144b3d300(&DAT_14c9fe198);
    if (DAT_14c9fe198 == -1) {
      FUN_14164f5d4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x270;
      local_58 = 0x358;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe118,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9936b);
      _Init_thread_footer(&DAT_14c9fe198);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401686de FUN_1401686de body=1179 status=ok
// SIG undefined FUN_1401686de(void)

undefined8 FUN_1401686de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0;
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa8);
    lVar5 = (longlong)*(int *)(param_1 + 0xb0) * 0x88;
    do {
      FUN_140168de2(lVar6 + 0x50,local_98,param_4);
      cVar2 = FUN_140168b7a(local_98,0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar4 = local_98;
        if (0x18 < local_80) {
          ppppuVar4 = (undefined8 ****)local_98[0];
        }
        (*pcVar1)(ppppuVar4);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98[0]);
      }
      if (cVar2 != '\0') {
        FUN_1448729ea(lVar6,local_98,param_4);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar1 != (code *)0x0) {
          ppppuVar4 = (undefined8 ****)local_70[0];
          if (local_58 < 0x19) {
            ppppuVar4 = local_70;
          }
          (*pcVar1)(ppppuVar4);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        local_58 = local_80;
        if (local_80 < 0x19) {
          uVar3 = (ulonglong)((uint)local_78 * 0x120);
          if (*(code **)((longlong)&DAT_14c9a85b8 + uVar3) == (code *)0x0) {
            if (*(code **)((longlong)&DAT_14c9a85b0 + uVar3) == (code *)0x0) {
              memcpy(local_70,local_98,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
            }
            else {
              (**(code **)((longlong)&DAT_14c9a85b0 + uVar3))(local_70,local_98);
            }
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b8 + uVar3))(local_70,local_98);
          }
        }
        else {
          local_70[0] = local_98[0];
          local_98[0] = (undefined8 ****)0x0;
          local_80 = 0;
        }
        local_50 = local_78;
        local_78 = 0;
        if (DAT_14c9a85d0 != (code *)0x0) {
          ppppuVar4 = local_98;
          if (0x18 < local_80) {
            ppppuVar4 = (undefined8 ****)local_98[0];
          }
          (*DAT_14c9a85d0)(ppppuVar4);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(local_98[0]);
        }
        break;
      }
      lVar6 = lVar6 + 0x88;
      lVar5 = lVar5 + -0x88;
    } while (lVar5 != 0);
  }
  if (local_50 == 0) {
    FUN_1448729ea(param_1 + 8,local_98,param_4);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar4 = (undefined8 ****)local_70[0];
      if (local_58 < 0x19) {
        ppppuVar4 = local_70;
      }
      (*pcVar1)(ppppuVar4);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    local_58 = local_80;
    if (local_80 < 0x19) {
      uVar3 = (ulonglong)((uint)local_78 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar3) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar3) == (code *)0x0) {
          memcpy(local_70,local_98,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar3))(local_70,local_98);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar3))(local_70,local_98);
      }
    }
    else {
      local_70[0] = local_98[0];
      local_98[0] = (undefined8 ****)0x0;
      local_80 = 0;
    }
    local_50 = local_78;
    local_78 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar4 = local_98;
      if (0x18 < local_80) {
        ppppuVar4 = (undefined8 ****)local_98[0];
      }
      (*DAT_14c9a85d0)(ppppuVar4);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(local_98[0]);
    }
  }
  FUN_1448729ea(param_1 + 0x58,local_98,param_4);
  FUN_144875384(local_70,param_2,local_98);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar4 = local_98;
    if (0x18 < local_80) {
      ppppuVar4 = (undefined8 ****)local_98[0];
    }
    (*pcVar1)(ppppuVar4);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98[0]);
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar4 = local_70;
    if (0x18 < local_58) {
      ppppuVar4 = (undefined8 ****)local_70[0];
    }
    (*pcVar1)(ppppuVar4);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140168b7a FUN_140168b7a body=177 status=ok
// SIG undefined FUN_140168b7a(void)

ulonglong FUN_140168b7a(int *param_1,uint param_2)

{
  code *pcVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[8] == '\x01') {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*param_1 != 0);
  }
  else {
    piVar3 = &local_48;
    FUN_1400b56fe(piVar3,param_1,1);
    uVar2 = (ulonglong)(local_48 != 0);
    if (local_28 == 0) {
      uVar2 = (ulonglong)param_2 & 0xff;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        piVar3 = (int *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(piVar3);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140168c2c FUN_140168c2c body=57 status=ok
// SIG undefined FUN_140168c2c(void)

void FUN_140168c2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a41b0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a41b0 = FUN_140002ddd(FUN_1462a6474,uVar1,L"AttributeDefinedValueRow");
  }
  return;
}



// FUNCTION 140168c66 FUN_140168c66 body=262 status=ok
// SIG undefined FUN_140168c66(void)

longlong FUN_140168c66(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_3c;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar3 = FUN_140261af2();
    lVar5 = FUN_14477b664(uVar3);
    param_1[1] = lVar5;
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
LAB_140168c9d:
    local_34 = 0xffffffff;
    local_30 = param_1[4];
    local_40 = 0xffffffff;
    local_3c = param_1[3];
    local_48 = param_3;
    FUN_144873f38(lVar4,param_2);
    goto LAB_140168ccf;
  }
  if ((lVar5 != 0) && (*param_1 != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1);
        param_1[2] = lVar4;
        if (lVar4 != 0) goto LAB_140168c9d;
        goto LAB_140168d41;
      }
    }
    param_1[2] = 0;
  }
LAB_140168d41:
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_140168ccf:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140168d6e FUN_140168d6e body=57 status=ok
// SIG undefined FUN_140168d6e(void)

void FUN_140168d6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2ce8 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2ce8 = FUN_140002ddd(FUN_14173929a,uVar1,L"GbxAttributeFloat");
  }
  return;
}



// FUNCTION 140168da8 FUN_140168da8 body=57 status=ok
// SIG undefined FUN_140168da8(void)

void FUN_140168da8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d00 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d00 = FUN_140002ddd(FUN_1417392cb,uVar1,L"GbxAttributeInteger");
  }
  return;
}



// FUNCTION 140168de2 FUN_140168de2 body=2405 status=ok
// SIG undefined FUN_140168de2(void)

/* WARNING: Removing unreachable block (ram,0x0001401690ac) */
/* WARNING: Removing unreachable block (ram,0x00014016946c) */

longlong FUN_140168de2(char *param_1,longlong param_2,char *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  char local_b8;
  int local_b0 [2];
  char local_a8;
  undefined8 local_a0;
  longlong *local_98;
  int local_80;
  undefined1 local_78 [48];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar4 = *param_1;
  if (cVar4 == '\x02') {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_140169748(param_1 + 8,&local_e8);
      plVar7 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        local_d8 = *param_3;
        if (local_d8 == '\x01') {
          local_d8 = '\x02';
          if (*(longlong *)(param_3 + 8) == 0) {
            local_d0._0_4_ = 0;
            iVar8 = 0;
            uVar5 = (uint)local_d0;
          }
          else {
            uVar5 = *(uint *)(*(longlong *)(param_3 + 8) + 0xc);
            local_d0 = (longlong *)(ulonglong)uVar5;
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            iVar8 = *(int *)(lVar16 + 0x10);
            if (*(int *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar8 = *(int *)(lVar16 + 0x10);
              bVar17 = iVar8 == 0;
              if (bVar17) {
                *(int *)(lVar16 + 0x10) = iVar12;
                iVar8 = 0;
              }
              UNLOCK();
              uVar5 = (uint)local_d0;
              if (bVar17) {
                iVar8 = iVar12;
              }
            }
          }
          local_d0._0_4_ = uVar5;
          local_d0 = (longlong *)CONCAT44(iVar8,(uint)local_d0);
        }
        else if (local_d8 == '\x02') {
          local_d0 = *(longlong **)(param_3 + 8);
        }
        else if (local_d8 == '\x03') {
          local_d0 = *(longlong **)(param_3 + 8);
          local_c8 = *(longlong **)(param_3 + 0x10);
          if (local_c8 == (longlong *)0x0) {
            local_c0 = *(undefined8 *)(param_3 + 0x18);
            local_b8 = param_3[0x20];
          }
          else {
            LOCK();
            *(int *)((longlong)local_c8 + 0xc) = *(int *)((longlong)local_c8 + 0xc) + 1;
            UNLOCK();
            local_c0 = *(undefined8 *)(param_3 + 0x18);
            local_b8 = param_3[0x20];
          }
        }
        local_b0[0] = 0;
        if (*(int *)(param_3 + 0x28) != 0) {
          uVar10 = FUN_1448174c4(local_b0);
          FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)*(int *)(param_3 + 0x28) * 0x10 + -0x10);
        }
        local_a8 = '\0';
        local_80 = 0;
        FUN_1400606f6(local_78,local_e8);
        puVar9 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar9 = local_78;
        }
        puVar15 = &DAT_14c9a40e0;
        if (0 < local_40) {
          puVar15 = puVar9;
        }
        FUN_1400603ec(param_2,local_e8,puVar15);
        puVar9 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar9 = local_78;
        }
        FUN_1446fdf58(puVar9,local_40);
        if (local_48 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        lVar16 = DAT_14c9a3da0;
        if ((longlong)local_80 != 0) {
          lVar14 = (longlong)local_80 + -1;
          lVar13 = lVar14 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
          if (*(longlong *)(lVar16 + lVar13) != 0) {
            FUN_1400020a8();
          }
          lVar16 = DAT_14c9a3da0;
          iVar8 = (int)lVar14;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
          }
          *(undefined4 *)(lVar16 + lVar13) = 0xffffffff;
          iVar12 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar12 = DAT_14c9a3dd0;
          }
          *(int *)(lVar16 + 4 + lVar13) = iVar12;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar11 = DAT_14c9a3dc0;
          }
          iVar12 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar12 = iVar8;
          }
          bVar6 = (byte)lVar14 & 0x1f;
          DAT_14c9a3dd0 = iVar8;
          *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_80 = 0;
        }
        if (local_a8 != '\0') {
          if (local_a8 == '\x01') {
            local_a0 = 0;
          }
          else if ((local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_98 + 0x10))();
            }
          }
          local_a8 = '\0';
        }
        lVar16 = DAT_14c9a3da0;
        if ((longlong)local_b0[0] != 0) {
          lVar14 = (longlong)local_b0[0] + -1;
          lVar13 = lVar14 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
          if (*(longlong *)(lVar16 + lVar13) != 0) {
            FUN_1400020a8();
          }
          lVar16 = DAT_14c9a3da0;
          iVar8 = (int)lVar14;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
          }
          *(undefined4 *)(lVar16 + lVar13) = 0xffffffff;
          iVar12 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar12 = DAT_14c9a3dd0;
          }
          *(int *)(lVar16 + 4 + lVar13) = iVar12;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar11 = DAT_14c9a3dc0;
          }
          iVar12 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar12 = iVar8;
          }
          bVar6 = (byte)lVar14 & 0x1f;
          DAT_14c9a3dd0 = iVar8;
          *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_b0[0] = 0;
        }
        if ((local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c8 + 0x10))();
          }
        }
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
joined_r0x000140168ff0:
      if (plVar7 != (longlong *)0x0) goto LAB_14016903b;
    }
  }
  else if (cVar4 == '\x01') {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1401697d6(param_1 + 8,&local_d8);
      plVar7 = (longlong *)CONCAT71(uStack_d7,local_d8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x48))(plVar7,param_2,0,param_3);
      }
      plVar3 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_d0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      goto joined_r0x000140168ff0;
    }
  }
  else if (cVar4 == '\0') {
    local_d8 = *param_3;
    if (local_d8 == '\x01') {
      local_d8 = '\x02';
      if (*(longlong *)(param_3 + 8) == 0) {
        local_d0._0_4_ = 0;
        iVar8 = 0;
        uVar5 = (uint)local_d0;
      }
      else {
        uVar5 = *(uint *)(*(longlong *)(param_3 + 8) + 0xc);
        local_d0 = (longlong *)(ulonglong)uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar8 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar8 = *(int *)(lVar16 + 0x10);
          bVar17 = iVar8 == 0;
          if (bVar17) {
            *(int *)(lVar16 + 0x10) = iVar12;
            iVar8 = 0;
          }
          UNLOCK();
          uVar5 = (uint)local_d0;
          if (bVar17) {
            iVar8 = iVar12;
          }
        }
      }
      local_d0._0_4_ = uVar5;
      local_d0 = (longlong *)CONCAT44(iVar8,(uint)local_d0);
    }
    else if (local_d8 == '\x02') {
      local_d0 = *(longlong **)(param_3 + 8);
    }
    else if (local_d8 == '\x03') {
      local_d0 = *(longlong **)(param_3 + 8);
      local_c8 = *(longlong **)(param_3 + 0x10);
      if (local_c8 == (longlong *)0x0) {
        local_c0 = *(undefined8 *)(param_3 + 0x18);
        local_b8 = param_3[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_c8 + 0xc) = *(int *)((longlong)local_c8 + 0xc) + 1;
        UNLOCK();
        local_c0 = *(undefined8 *)(param_3 + 0x18);
        local_b8 = param_3[0x20];
      }
    }
    local_b0[0] = 0;
    if (*(int *)(param_3 + 0x28) != 0) {
      uVar10 = FUN_1448174c4(local_b0);
      FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)*(int *)(param_3 + 0x28) * 0x10 + -0x10);
    }
    local_a8 = '\0';
    local_80 = 0;
    uVar10 = FUN_144873cc0(param_1 + 0x20);
    FUN_1400606f6(local_78,uVar10,&local_d8);
    puVar9 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar9 = local_78;
    }
    puVar15 = &DAT_14c9a40e0;
    if (0 < local_40) {
      puVar15 = puVar9;
    }
    FUN_1400603ec(param_2,uVar10,puVar15);
    puVar9 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar9 = local_78;
    }
    FUN_1446fdf58(puVar9,local_40);
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    lVar16 = DAT_14c9a3da0;
    if ((longlong)local_80 != 0) {
      lVar14 = (longlong)local_80 + -1;
      lVar13 = lVar14 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
      if (*(longlong *)(lVar16 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar16 = DAT_14c9a3da0;
      iVar8 = (int)lVar14;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
      }
      *(undefined4 *)(lVar16 + lVar13) = 0xffffffff;
      iVar12 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar12 = DAT_14c9a3dd0;
      }
      *(int *)(lVar16 + 4 + lVar13) = iVar12;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar11 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar11 = DAT_14c9a3dc0;
      }
      iVar12 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar12 = iVar8;
      }
      bVar6 = (byte)lVar14 & 0x1f;
      DAT_14c9a3dd0 = iVar8;
      *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
           (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      local_80 = 0;
    }
    if (local_a8 != '\0') {
      if (local_a8 == '\x01') {
        local_a0 = 0;
      }
      else if ((local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      local_a8 = '\0';
    }
    lVar16 = DAT_14c9a3da0;
    if ((longlong)local_b0[0] != 0) {
      lVar14 = (longlong)local_b0[0] + -1;
      lVar13 = lVar14 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
      if (*(longlong *)(lVar16 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar16 = DAT_14c9a3da0;
      iVar8 = (int)lVar14;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
      }
      *(undefined4 *)(lVar16 + lVar13) = 0xffffffff;
      iVar12 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar12 = DAT_14c9a3dd0;
      }
      *(int *)(lVar16 + 4 + lVar13) = iVar12;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar11 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar11 = DAT_14c9a3dc0;
      }
      iVar12 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar12 = iVar8;
      }
      bVar6 = (byte)lVar14 & 0x1f;
      DAT_14c9a3dd0 = iVar8;
      *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
           (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      local_b0[0] = 0;
    }
    if ((local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    goto LAB_14016903b;
  }
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_14016903b:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140169748 FUN_140169748 body=83 status=ok
// SIG undefined FUN_140169748(void)

longlong * FUN_140169748(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14016979c();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14016979c FUN_14016979c body=57 status=ok
// SIG undefined FUN_14016979c(void)

void FUN_14016979c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4908 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4908 = FUN_140002ddd(FUN_14173afca,uVar1,L"GbxAttributeDef");
  }
  return;
}



// FUNCTION 1401697d6 FUN_1401697d6 body=83 status=ok
// SIG undefined FUN_1401697d6(void)

longlong * FUN_1401697d6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14016982a();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14016982a FUN_14016982a body=57 status=ok
// SIG undefined FUN_14016982a(void)

void FUN_14016982a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a41c8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a41c8 = FUN_140002ddd(FUN_141739b92,uVar1,L"AttributeValueResolver");
  }
  return;
}



// FUNCTION 140169864 FUN_140169864 body=2327 status=ok
// SIG undefined FUN_140169864(void)

/* WARNING: Removing unreachable block (ram,0x00014016a0b0) */

undefined8 * FUN_140169864(longlong *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  byte local_108;
  undefined4 local_100 [2];
  char local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  float local_98;
  ushort local_88;
  byte local_80;
  undefined4 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  cVar2 = *param_3;
  if (cVar2 == '\0') {
    lVar6 = *(longlong *)(param_3 + 4);
    sVar3 = *(short *)(param_3 + 0x10);
    if (sVar3 < 0) {
      if (lVar6 == 0) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0xc);
        *param_2 = *(undefined8 *)(param_3 + 4);
      }
      else if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
        uVar16 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar12 = (uint)lVar6 & 0xffff;
        plVar10 = param_1 + 10;
        if ((longlong *)param_1[0xb] != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0xb];
        }
        iVar5 = *(int *)((longlong)plVar10 +
                        (ulonglong)
                        ((int)param_1[0xc] - 1U &
                        (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar12) +
                        (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar5 != -1) {
          do {
            plVar10 = (longlong *)(param_1[3] + (longlong)iVar5 * 0x48);
            if (*plVar10 == lVar6) {
              if (plVar10 != (longlong *)0x0) {
                puVar8 = &local_a0;
                FUN_1447c3578(plVar10 + 1,puVar8,param_4);
                if (local_80 == 3) {
                  uVar16 = 3;
                  uVar17 = local_a0;
                }
                else {
                  puVar11 = &local_128;
                  FUN_1400b56fe(puVar11,&local_a0,3);
                  uVar17 = 0;
                  if (local_108 != 0) {
                    uVar17 = local_128;
                  }
                  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                                     (ulonglong)((uint)local_108 * 0x120));
                  if (pcVar7 != (code *)0x0) {
                    if (0x18 < (ushort)local_110) {
                      puVar11 = (undefined4 *)CONCAT44(uStack_124,local_128);
                    }
                    (*pcVar7)(puVar11);
                  }
                  if (0x18 < (ushort)local_110) {
                    FUN_1400020a8(CONCAT44(uStack_124,local_128));
                  }
                  uVar16 = (uint)local_80;
                }
                *(undefined4 *)(param_2 + 1) = uVar17;
                *param_2 = 0;
                pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar16 * 0x120));
                if (pcVar7 == (code *)0x0) goto LAB_140169c01;
                if (0x18 < local_88) {
                  puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
                }
                goto LAB_140169bff;
              }
              break;
            }
            iVar5 = (int)plVar10[8];
          } while (iVar5 != -1);
        }
      }
      goto LAB_140169cdf;
    }
    if ((int)param_1[1] <= (int)sVar3) goto LAB_140169cdf;
    local_130 = *(undefined8 *)(*param_1 + 4 + (longlong)(int)sVar3 * 0x14);
    if (lVar6 == DAT_14c9a6760) {
      FUN_1446dcdd4(&local_128,&local_130);
      if (DAT_14c9a66c8 != 0) {
        lVar6 = FUN_144837462(DAT_14c9a66c8,&local_128);
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        if (lVar6 == 0) goto LAB_140169cdf;
        cVar2 = *param_4;
        local_128 = CONCAT31(local_128._1_3_,cVar2);
        if (cVar2 == '\x01') {
          local_128 = CONCAT31(local_128._1_3_,2);
          if (*(longlong *)(param_4 + 8) == 0) {
            local_120._0_4_ = 0.0;
            iVar5 = 0;
            uVar16 = (uint)(float)local_120;
          }
          else {
            uVar16 = *(uint *)(*(longlong *)(param_4 + 8) + 0xc);
            local_120 = (ulonglong)uVar16;
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            iVar5 = *(int *)(lVar14 + 0x10);
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar13 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar13);
              }
              LOCK();
              iVar5 = *(int *)(lVar14 + 0x10);
              bVar15 = iVar5 == 0;
              if (bVar15) {
                *(int *)(lVar14 + 0x10) = iVar13;
                iVar5 = 0;
              }
              UNLOCK();
              uVar16 = (uint)(float)local_120;
              if (bVar15) {
                iVar5 = iVar13;
              }
            }
          }
          local_120._0_4_ = (float)uVar16;
          local_120 = CONCAT44(iVar5,(float)local_120);
        }
        else if (cVar2 == '\x02') {
          local_120 = *(ulonglong *)(param_4 + 8);
        }
        else if (cVar2 == '\x03') {
          local_120 = *(undefined8 *)(param_4 + 8);
          local_118 = *(longlong **)(param_4 + 0x10);
          if (local_118 == (longlong *)0x0) {
            local_110 = *(longlong *)(param_4 + 0x18);
            local_108 = param_4[0x20];
          }
          else {
            LOCK();
            *(int *)((longlong)local_118 + 0xc) = *(int *)((longlong)local_118 + 0xc) + 1;
            UNLOCK();
            local_110 = *(longlong *)(param_4 + 0x18);
            local_108 = param_4[0x20];
          }
        }
        local_100[0] = 0;
        if (*(int *)(param_4 + 0x28) != 0) {
          uVar9 = FUN_1448174c4(local_100);
          FUN_1400e08b0(uVar9,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
        }
        local_f8 = '\0';
        local_d0[0] = 0;
        FUN_1400606f6(&local_a0,lVar6);
        puVar8 = local_70;
        if (local_70 == (undefined4 *)0x0) {
          puVar8 = &local_a0;
        }
        puVar11 = (undefined4 *)&DAT_14c9a40e0;
        if (0 < local_68) {
          puVar11 = puVar8;
        }
        puVar8 = &local_c8;
        FUN_1400603ec(puVar8,lVar6,puVar11);
        puVar11 = local_70;
        if (local_70 == (undefined4 *)0x0) {
          puVar11 = &local_a0;
        }
        FUN_1446fdf58(puVar11,local_68);
        if (local_70 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 == 3) {
          uVar16 = 3;
          uVar17 = local_c8;
        }
        else {
          puVar11 = &local_a0;
          FUN_1400b56fe(puVar11,&local_c8,3);
          uVar17 = 0;
          if (local_80 != 0) {
            uVar17 = local_a0;
          }
          pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
          if (pcVar7 != (code *)0x0) {
            if (0x18 < local_88) {
              puVar11 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
            }
            (*pcVar7)(puVar11);
          }
          if (0x18 < local_88) {
            FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
          }
          uVar16 = (uint)local_a8;
        }
        pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar16 * 0x120));
        if (pcVar7 != (code *)0x0) {
          if (0x18 < local_b0) {
            puVar8 = (undefined4 *)CONCAT44(uStack_c4,local_c8);
          }
          (*pcVar7)(puVar8);
        }
        if (0x18 < local_b0) {
          FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
        }
        FUN_1448173f8(local_d0);
        if (local_f8 != '\0') {
          if (local_f8 == '\x01') {
            local_f0 = 0;
          }
          else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e8 + 0x10))();
            }
          }
          local_f8 = '\0';
        }
        FUN_1448173f8(local_100);
        if (((char)local_128 == '\x03') && (local_118 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
        *(undefined4 *)(param_2 + 1) = uVar17;
        goto LAB_140169cd8;
      }
      lVar6 = local_110;
      if (local_110 == 0) goto LAB_140169cdf;
    }
    else {
      if ((lVar6 != DAT_14c9a6768) || (lVar6 = FUN_141740d12(param_4), lVar6 == 0))
      goto LAB_140169cdf;
      puVar8 = &local_a0;
      FUN_140680162(lVar6,puVar8,&local_130);
      uVar16 = (uint)local_80;
      if (local_80 != 0) {
        if (local_80 == 3) {
          uVar16 = 3;
          uVar17 = local_a0;
        }
        else {
          puVar11 = &local_128;
          FUN_1400b56fe(puVar11,&local_a0,3);
          uVar17 = 0;
          if (local_108 != 0) {
            uVar17 = local_128;
          }
          pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_108 * 0x120));
          if (pcVar7 != (code *)0x0) {
            if (0x18 < (ushort)local_110) {
              puVar11 = (undefined4 *)CONCAT44(uStack_124,local_128);
            }
            (*pcVar7)(puVar11);
          }
          if (0x18 < (ushort)local_110) {
            FUN_1400020a8(CONCAT44(uStack_124,local_128));
          }
          uVar16 = (uint)local_80;
        }
        *(undefined4 *)(param_2 + 1) = uVar17;
        *param_2 = 0;
      }
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar16 * 0x120));
      if (pcVar7 != (code *)0x0) {
        if (0x18 < local_88) {
          puVar8 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
        }
LAB_140169bff:
        (*pcVar7)(puVar8);
      }
LAB_140169c01:
      if (local_88 < 0x19) goto LAB_140169cdf;
      lVar6 = CONCAT44(uStack_9c,local_a0);
    }
    FUN_1400020a8(lVar6);
  }
  else {
    sVar3 = *(short *)(param_3 + 0x10);
    if ((sVar3 < 0) || ((int)*(uint *)(param_1 + 1) <= (int)sVar3)) goto LAB_140169cdf;
    uVar4 = *(ushort *)(param_3 + 0x12);
    if (*(uint *)(param_1 + 1) <= (uint)uVar4 || (short)uVar4 < 0) goto LAB_140169cdf;
    lVar6 = *param_1 + (longlong)(int)sVar3 * 0x14;
    lVar14 = *param_1 + (ulonglong)uVar4 * 0x14;
    if (cVar2 == '\x0e') {
      FUN_140169864(param_1,&local_128,lVar6,param_4);
      if (((float)local_120 != 0.0) || (NAN((float)local_120))) {
        uVar16 = 0x3f800000;
      }
      else {
        FUN_140169864(param_1,&local_a0,lVar14,param_4);
        uVar16 = -(uint)(local_98 != 0.0) & 0x3f800000;
      }
    }
    else if (cVar2 == '\r') {
      FUN_140169864(param_1,&local_128,lVar6,param_4);
      uVar16 = 0;
      if (((float)local_120 != 0.0) || (NAN((float)local_120))) {
        FUN_140169864(param_1,&local_a0,lVar14,param_4);
        uVar16 = -(uint)(local_98 != 0.0) & 0x3f800000;
      }
    }
    else {
      FUN_140169864(param_1,&local_128,lVar14,param_4);
      uVar17 = (float)local_120;
      FUN_140169864(param_1,&local_a0,lVar6,param_4);
      uVar16 = FUN_142b38c5f(*param_3,local_98,uVar17);
    }
    *(uint *)(param_2 + 1) = uVar16;
LAB_140169cd8:
    *param_2 = 0;
  }
LAB_140169cdf:
  if (param_3[1] == '\x01') {
    *param_2 = 0;
    *(uint *)(param_2 + 1) = -(uint)(*(float *)(param_2 + 1) == 0.0) & 0x3f800000;
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016a17c FUN_14016a17c body=5637 status=ok
// SIG undefined FUN_14016a17c(void)

void FUN_14016a17c(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong *_Str;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  size_t sVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong **ppuVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined2 *puVar20;
  ulonglong **ppuVar21;
  undefined1 *puVar22;
  undefined4 uVar23;
  undefined8 unaff_RBX;
  uint uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  uint *puVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong *puVar32;
  int iVar33;
  longlong *plVar34;
  ulonglong *puVar35;
  bool bVar36;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 local_230;
  ulonglong local_228;
  longlong local_220;
  undefined4 local_214;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  uint *local_1c0;
  ulonglong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  int local_180;
  undefined1 local_178 [8];
  undefined8 local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  longlong local_118 [3];
  longlong local_100;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  ulonglong *local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(char *)(param_1 + 0x41) == '\0') &&
     (plVar6 = (longlong *)FUN_14000e0c8(param_1 + 0x18), plVar6 != (longlong *)0x0)) {
    plVar18 = (longlong *)(param_1 + 8);
    if (*(char *)(param_1 + 0x10) != '\0') {
      if (*(char *)(param_1 + 0x10) != '\x02') goto LAB_14016a307;
      plVar18 = (longlong *)(*plVar18 + 0x30);
    }
    lVar19 = *plVar18;
    if (lVar19 != 0) {
      lVar7 = FUN_1408cc5f4();
      if (*(int *)(plVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) {
        uVar23 = 0;
      }
      else {
        uVar23 = (undefined4)
                 CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                          *(longlong *)
                           (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                          == lVar7 + 0x30);
      }
      uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14c9a7570);
      local_168 = DAT_14c9a7568;
      FUN_1448075d0(&local_b8);
      pbVar2 = *(byte **)(lVar19 + 0x48);
      if (pbVar2 != (byte *)0x0) {
        if ((*pbVar2 & 2) == 0) {
          plVar18 = &DAT_14c9a1288;
        }
        else {
          plVar18 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        if ((int)plVar18[2] != *(int *)((longlong)plVar18 + 0x3c)) {
          plVar34 = plVar18 + 8;
          if ((longlong *)plVar18[9] != (longlong *)0x0) {
            plVar34 = (longlong *)plVar18[9];
          }
          iVar29 = *(int *)((longlong)plVar34 +
                           (ulonglong)((int)plVar18[10] - 1U & (uint)local_b8) * 4);
          if (iVar29 != -1) {
            do {
              lVar19 = *plVar18 + (longlong)iVar29 * 0x40;
              if (*(uint *)(*plVar18 + (longlong)iVar29 * 0x40) == (uint)local_b8) {
                if ((((lVar19 != 0) &&
                     (puVar26 = (undefined8 *)(lVar19 + 0x28), puVar26 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar26 != (byte *)0x0)) && ((*(byte *)*puVar26 & 0x40) == 0))
                goto LAB_14016a2c2;
                break;
              }
              iVar29 = *(int *)(lVar19 + 0x38);
            } while (iVar29 != -1);
          }
        }
      }
      puVar26 = &DAT_14c9a1308;
LAB_14016a2c2:
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (((byte *)*puVar26 != (byte *)0x0) && ((*(byte *)*puVar26 & 0x6b) == 2)) {
        local_198 = 0;
        uStack_190 = 0;
        pbVar2 = (byte *)*puVar26;
        puVar26 = &DAT_14c9a1270;
        if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
          puVar26 = *(undefined8 **)(pbVar2 + 8);
        }
        local_220 = param_1;
        local_208 = plVar6;
        if ((longlong)*(int *)(puVar26 + 2) != 0) {
          puVar16 = (undefined8 *)*puVar26;
          local_1d0 = puVar16 + (longlong)*(int *)(puVar26 + 2) * 2;
          local_1d8 = param_1 + 0x50;
          local_214 = uVar23;
          do {
            uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14c9a75b8);
            local_168 = DAT_14c9a75b0;
            FUN_1448075d0(&local_b8,&local_168);
            pbVar2 = (byte *)*puVar16;
            puVar26 = &DAT_14c9a1308;
            if (pbVar2 != (byte *)0x0) {
              plVar18 = &DAT_14c9a1288;
              if ((*pbVar2 & 2) != 0) {
                plVar18 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
              }
              puVar26 = &DAT_14c9a1308;
              if ((int)plVar18[2] != *(int *)((longlong)plVar18 + 0x3c)) {
                plVar34 = plVar18 + 8;
                if ((longlong *)plVar18[9] != (longlong *)0x0) {
                  plVar34 = (longlong *)plVar18[9];
                }
                iVar29 = *(int *)((longlong)plVar34 +
                                 (ulonglong)((int)plVar18[10] - 1U & (uint)local_b8) * 4);
                puVar26 = &DAT_14c9a1308;
                if (iVar29 != -1) {
                  do {
                    lVar19 = *plVar18 + (longlong)iVar29 * 0x40;
                    if (*(uint *)(*plVar18 + (longlong)iVar29 * 0x40) == (uint)local_b8) {
                      puVar26 = &DAT_14c9a1308;
                      if (lVar19 == 0) goto LAB_14016a491;
                      puVar13 = (undefined8 *)(lVar19 + 0x28);
                      puVar26 = &DAT_14c9a1308;
                      if ((puVar13 == (undefined8 *)0x0) ||
                         (((byte *)*puVar13 != (byte *)0x0 &&
                          (puVar26 = puVar13, (*(byte *)*puVar13 & 0x40) == 0))))
                      goto LAB_14016a491;
                      break;
                    }
                    iVar29 = *(int *)(lVar19 + 0x38);
                  } while (iVar29 != -1);
                  puVar26 = &DAT_14c9a1308;
                }
              }
            }
LAB_14016a491:
            pbVar2 = (byte *)*puVar26;
            local_1c8 = (longlong *)puVar26[1];
            if (local_1c8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
              UNLOCK();
            }
            if (local_a0 != 0) {
              FUN_1400020a8();
            }
            if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 1)) {
              uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14c9a75d0);
              local_168 = DAT_14c9a75c8;
              FUN_1448075d0(&local_b8,&local_168);
              pbVar3 = (byte *)*puVar16;
              puVar26 = &DAT_14c9a1308;
              if (pbVar3 != (byte *)0x0) {
                plVar18 = &DAT_14c9a1288;
                if ((*pbVar3 & 2) != 0) {
                  plVar18 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
                }
                puVar26 = &DAT_14c9a1308;
                if ((int)plVar18[2] != *(int *)((longlong)plVar18 + 0x3c)) {
                  plVar34 = plVar18 + 8;
                  if ((longlong *)plVar18[9] != (longlong *)0x0) {
                    plVar34 = (longlong *)plVar18[9];
                  }
                  iVar29 = *(int *)((longlong)plVar34 +
                                   (ulonglong)((int)plVar18[10] - 1U & (uint)local_b8) * 4);
                  puVar26 = &DAT_14c9a1308;
                  if (iVar29 != -1) {
                    do {
                      lVar19 = *plVar18 + (longlong)iVar29 * 0x40;
                      if (*(uint *)(*plVar18 + (longlong)iVar29 * 0x40) == (uint)local_b8) {
                        puVar26 = &DAT_14c9a1308;
                        if (lVar19 == 0) goto LAB_14016a5a7;
                        puVar13 = (undefined8 *)(lVar19 + 0x28);
                        puVar26 = &DAT_14c9a1308;
                        if ((puVar13 == (undefined8 *)0x0) ||
                           (((byte *)*puVar13 != (byte *)0x0 &&
                            (puVar26 = puVar13, (*(byte *)*puVar13 & 0x40) == 0))))
                        goto LAB_14016a5a7;
                        break;
                      }
                      iVar29 = *(int *)(lVar19 + 0x38);
                    } while (iVar29 != -1);
                    puVar26 = &DAT_14c9a1308;
                  }
                }
              }
LAB_14016a5a7:
              puVar35 = (ulonglong *)*puVar26;
              plVar18 = (longlong *)puVar26[1];
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                UNLOCK();
              }
              local_1f8 = puVar16;
              if (local_a0 != 0) {
                FUN_1400020a8();
              }
              puVar16 = local_1f8;
              if ((puVar35 == (ulonglong *)0x0) || (uVar23 = local_214, (*puVar35 & 0x6b) != 3)) {
                pbVar3 = (byte *)*local_1f8;
                plVar34 = &DAT_14c9a1288;
                if ((pbVar3 != (byte *)0x0) && (plVar34 = &DAT_14c9a1288, (*pbVar3 & 2) != 0)) {
                  plVar34 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
                }
                uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14c9a75d0);
                local_168 = DAT_14c9a75c8;
                FUN_1448075d0(&local_b8,&local_168);
                if ((int)plVar34[2] != *(int *)((longlong)plVar34 + 0x3c)) {
                  plVar14 = plVar34 + 8;
                  if ((longlong *)plVar34[9] != (longlong *)0x0) {
                    plVar14 = (longlong *)plVar34[9];
                  }
                  iVar29 = *(int *)((longlong)plVar14 +
                                   (ulonglong)((int)plVar34[10] - 1U & (uint)local_b8) * 4);
                  if (iVar29 != -1) {
                    do {
                      if (*(uint *)(*plVar34 + (longlong)iVar29 * 0x40) == (uint)local_b8) {
                        if (local_a0 != 0) {
                          FUN_1400020a8();
                        }
                        goto LAB_14016b095;
                      }
                      iVar29 = *(int *)((longlong)iVar29 * 0x40 + *plVar34 + 0x38);
                    } while (iVar29 != -1);
                  }
                }
                if (local_a0 != 0) {
                  FUN_1400020a8();
                }
                local_b8 = (ulonglong *)0x0;
                plStack_b0 = (longlong *)0x0;
                FUN_14009b010(&local_b8,3,0);
                plVar34 = plStack_b0;
                puVar35 = local_b8;
                uVar23 = local_214;
                if (plStack_b0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                  UNLOCK();
                }
                if (plVar18 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plVar18 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*plVar18)(plVar18);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar18 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                }
                plVar18 = plStack_b0;
                if (plStack_b0 != (longlong *)0x0) {
                  LOCK();
                  plVar14 = plStack_b0 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*plStack_b0)(plStack_b0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar18 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                }
                local_200 = plVar34;
                plVar18 = local_200;
              }
              local_200 = plVar18;
              if (((*pbVar2 & 3) == 1) &&
                 (_Str = *(ulonglong **)(pbVar2 + 8), _Str != (ulonglong *)0x0)) {
                sVar8 = strlen((char *)_Str);
                uVar5 = (uint)sVar8;
                if (uVar5 == 0) goto LAB_14016b473;
                lVar19 = (longlong)(int)uVar5;
                puVar32 = (ulonglong *)((longlong)_Str + lVar19 + -1);
                if (puVar32 < _Str) {
                  lVar7 = 0;
                }
                else {
                  uVar10 = 0;
                  do {
                    if (9 < (byte)((byte)*puVar32 - 0x30)) break;
                    uVar10 = uVar10 + 1;
                    puVar32 = (ulonglong *)((longlong)puVar32 + -1);
                  } while (_Str <= puVar32);
                  if ((((uVar10 == 0) || ((int)uVar5 <= (int)uVar10)) || (10 < uVar10)) ||
                     ((lVar28 = -(ulonglong)uVar10,
                      *(byte *)((longlong)_Str + lVar28 + lVar19 + -1) != 0x5f ||
                      ((uVar10 != 1 && (*(byte *)((longlong)_Str + lVar28 + lVar19) == 0x30)))))) {
LAB_14016a785:
                    lVar7 = 0;
                  }
                  else {
                    lVar31 = 0;
                    do {
                      lVar7 = (longlong)(char)*(byte *)((longlong)_Str + lVar28 + lVar19) +
                              lVar31 * 10;
                      lVar31 = lVar7 + -0x30;
                      lVar28 = lVar28 + 1;
                    } while (lVar28 != 0);
                    if (0x7ffffffe < lVar31) goto LAB_14016a785;
                    uVar5 = ~uVar10 + uVar5;
                    lVar7 = lVar7 + -0x2f;
                  }
                  if (uVar5 == 0) goto LAB_14016b473;
                }
                plStack_b0._0_5_ = (uint5)uVar5;
                local_b8 = _Str;
                uVar5 = FUN_14001a6c0(&local_b8,1);
                uVar30 = lVar7 << 0x20;
                local_1a0 = (ulonglong)uVar5;
              }
              else {
LAB_14016b473:
                local_1a0 = 0;
                uVar30 = 0;
              }
              local_1a0 = local_1a0 | uVar30;
              local_1a8 = FUN_140595974((longlong)
                                        (int)(-*(int *)((longlong)plVar6 + 0x5c) &
                                             ((int)plVar6[0xb] + *(int *)((longlong)plVar6 + 0x5c))
                                             - 1U),0);
              (**(code **)(*plVar6 + 0x2e8))(plVar6,local_1a8,1);
              local_b8 = &local_1a0;
              plStack_b0 = &local_1a8;
              FUN_1407f258a(local_1d8,&local_168,&local_b8,0);
              local_148 = 0;
              local_140 = 0;
              local_168 = 0;
              uStack_160 = 0;
              local_13c = 0xffffffff00000080;
              local_134 = 0;
              local_128 = (undefined1 *)0x0;
              local_120 = 0;
              plVar18 = local_208;
              plVar6 = local_208;
              if ((char)uVar23 != '\0') {
                plVar34 = &DAT_14c9a1288;
                if ((puVar35 != (ulonglong *)0x0) && (plVar34 = &DAT_14c9a1288, (*puVar35 & 2) != 0)
                   ) {
                  plVar34 = (longlong *)(puVar35[1] + 0x18);
                }
                uVar5 = *(uint *)(plVar34 + 6);
                if (uVar5 == 0) {
                  uVar30 = 1;
                  local_228 = 0;
                  iVar29 = 0;
                  uVar10 = 0;
                }
                else {
                  puVar27 = (uint *)plVar34[5];
                  if ((uint *)plVar34[5] == (uint *)0x0) {
                    puVar27 = (uint *)(plVar34 + 3);
                  }
                  uVar10 = *puVar27;
                  if (uVar10 == 0) {
                    iVar29 = uVar5 + 0x1e;
                    if (-1 < (int)(uVar5 - 1)) {
                      iVar29 = uVar5 - 1;
                    }
                    uVar30 = 0;
                    uVar15 = (ulonglong)(uint)(iVar29 >> 5);
                    if (iVar29 >> 5 < 1) {
                      uVar15 = uVar30;
                    }
                    iVar29 = 0;
                    do {
                      if (uVar15 == uVar30) goto LAB_14016a956;
                      iVar29 = iVar29 + 0x20;
                      uVar10 = puVar27[uVar30 + 1];
                      uVar30 = uVar30 + 1;
                    } while (uVar10 == 0);
                  }
                  else {
                    local_228 = 0;
                    iVar29 = 0;
                    uVar30 = local_228;
                  }
                  local_228 = uVar30;
                  uVar30 = (ulonglong)(-uVar10 & uVar10);
                  uVar15 = uVar30 * 2 + 1;
                  lVar19 = 0x3f;
                  if (uVar15 != 0) {
                    for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                    }
                  }
                  uVar10 = (iVar29 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                  if ((int)uVar5 <= (int)uVar10) {
                    uVar10 = uVar5;
                  }
                }
                if (uVar10 != uVar5) {
                  uVar24 = 0xffffffff;
                  local_1f0 = (ulonglong)uVar5;
                  local_1e8 = plVar34;
                  local_1c0 = (uint *)(plVar34 + 3);
                  do {
                    local_210 = (longlong *)CONCAT44(local_210._4_4_,iVar29);
                    lVar19 = (longlong)(int)uVar10 * 0x40 + *local_1e8;
                    local_118[0] = 0;
                    local_118[1] = 0;
                    FUN_1400b2348(lVar19,local_118,1);
                    FUN_1400f13a7(&local_e8,local_118,&DAT_149dfb77a);
                    FUN_1409f3d22(&local_168,&local_b8);
                    plVar6 = plStack_b0;
                    *plStack_b0 = local_e8;
                    uVar15 = 0;
                    local_e8 = 0;
                    *(int *)(plVar6 + 1) = (int)uStack_e0;
                    *(undefined4 *)((longlong)plVar6 + 0xc) = uStack_e0._4_4_;
                    uStack_e0 = 0;
                    FUN_1447a97f4(plVar6 + 2,lVar19);
                    *(undefined4 *)(plVar6 + 7) = 0xffffffff;
                    local_188 = (uint)local_b8;
                    iVar29 = (int)plVar6[1];
                    iVar12 = iVar29 + -1;
                    if (iVar29 == 0) {
                      iVar12 = 0;
                    }
                    if (0 < iVar12) {
                      puVar20 = &DAT_149dfb77a;
                      if (iVar29 != 0) {
                        puVar20 = (undefined2 *)*plVar6;
                      }
                      lVar19 = 0;
                      uVar15 = 0;
                      do {
                        uVar5 = ((uint)(ushort)puVar20[lVar19] +
                                (uint)(0x19 < (ushort)puVar20[lVar19] - 0x61) * 0x20) - 0x20;
                        uVar10 = (uint)(uVar15 >> 8) ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(((uint)uVar15 ^ uVar5) & 0xff) * 4);
                        uVar15 = (ulonglong)
                                 (uVar10 >> 8 ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(uVar10 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
                        lVar19 = lVar19 + 1;
                      } while (iVar12 != (int)lVar19);
                    }
                    local_238 = 0;
                    local_1e0 = uVar30;
                    cVar4 = FUN_1409f3baa(&local_168,uVar15,plVar6,&local_188);
                    puVar27 = local_1c0;
                    if (cVar4 == '\0') {
                      uVar5 = (int)uStack_160 - local_134;
                      iVar29 = 1;
                      if (3 < uVar5) {
                        uVar30 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
                        lVar19 = 0x3f;
                        if (uVar30 != 0) {
                          for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                          }
                        }
                        iVar29 = 1 << ((byte)lVar19 & 0x1f);
                      }
                      if (((int)uVar5 < 1) || (iVar29 <= local_120)) {
                        uVar5 = local_120 - 1U & (uint)uVar15;
                        *(uint *)((longlong)plVar6 + 0x3c) = uVar5;
                        puVar22 = local_128;
                        if (local_128 == (undefined1 *)0x0) {
                          puVar22 = local_130;
                        }
                        *(undefined4 *)(plVar6 + 7) =
                             *(undefined4 *)
                              (puVar22 + ((longlong)local_120 - 1U & (longlong)(int)uVar5) * 4);
                        puVar22 = local_128;
                        if (local_128 == (undefined1 *)0x0) {
                          puVar22 = local_130;
                        }
                        *(undefined4 *)
                         (puVar22 + ((longlong)local_120 - 1U & (longlong)(int)uVar5) * 4) =
                             local_188;
                      }
                      else {
                        local_120 = iVar29;
                        FUN_1409f3efe(&local_168);
                      }
                    }
                    if (local_e8 != 0) {
                      FUN_1400020a8();
                    }
                    uVar30 = local_1e0;
                    iVar29 = (int)local_210;
                    if (local_118[0] != 0) {
                      FUN_1400020a8();
                    }
                    uVar24 = uVar24 & ~(uint)uVar30;
                    puVar25 = (uint *)local_1e8[5];
                    if ((uint *)local_1e8[5] == (uint *)0x0) {
                      puVar25 = puVar27;
                    }
                    uVar5 = *(uint *)(local_1e8 + 6);
                    iVar12 = (int)local_228;
                    lVar19 = (longlong)iVar12;
                    uVar10 = puVar25[lVar19] & uVar24;
                    if (uVar10 == 0) {
                      iVar33 = uVar5 + 0x1e;
                      if (-1 < (int)(uVar5 - 1)) {
                        iVar33 = uVar5 - 1;
                      }
                      iVar33 = iVar33 >> 5;
                      iVar29 = iVar29 + 0x20;
                      iVar11 = iVar33;
                      if (iVar33 < iVar12) {
                        iVar11 = iVar12;
                      }
                      if (iVar12 < iVar33) {
                        lVar7 = 0;
                        do {
                          uVar10 = puVar25[lVar19 + lVar7 + 1];
                          if (uVar10 != 0) {
                            local_228 = (ulonglong)(iVar12 + (int)lVar7 + 1);
                            uVar24 = 0xffffffff;
                            goto LAB_14016b3e1;
                          }
                          iVar29 = iVar29 + 0x20;
                          lVar7 = lVar7 + 1;
                        } while (iVar11 - lVar19 != lVar7);
                        uVar24 = 0xffffffff;
                        lVar19 = (longlong)iVar11;
                      }
                      local_228 = lVar19 + 1;
                      uVar30 = local_1e0;
                      uVar23 = local_214;
                      uVar10 = uVar5;
                    }
                    else {
LAB_14016b3e1:
                      uVar30 = (ulonglong)(-uVar10 & uVar10);
                      uVar15 = uVar30 * 2 + 1;
                      lVar19 = 0x3f;
                      if (uVar15 != 0) {
                        for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                        }
                      }
                      uVar10 = (iVar29 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                      if ((int)uVar5 <= (int)uVar10) {
                        uVar10 = uVar5;
                      }
                    }
                    plVar18 = local_208;
                    plVar6 = local_208;
                  } while (uVar10 != (uint)local_1f0);
                }
              }
LAB_14016a956:
              do {
                lVar19 = plVar18[10];
                local_210 = plVar18;
                if (lVar19 != 0) {
LAB_14016a964:
                  if ((~*(uint *)(*(longlong *)(lVar19 + 8) + 0x18) & 0x8001) != 0)
                  goto code_r0x00014016a974;
                  local_228 = CONCAT71(local_228._1_7_,1);
                  lVar7 = 0;
LAB_14016a9a9:
                  if (lVar7 < (int)uStack_190) {
                    puVar27 = (uint *)(lVar7 * 0x50 + local_198);
                  }
                  else {
                    local_170 = *(undefined8 *)(lVar19 + 0x20);
                    FUN_1446dcdd4(&local_e8,&local_170);
                    FUN_140002850(lVar19,&local_188);
                    puVar20 = &DAT_149dfb77a;
                    if (local_180 != 0) {
                      puVar20 = (undefined2 *)CONCAT44(uStack_184,local_188);
                    }
                    FUN_1446f470e(local_178,puVar20);
                    FUN_1446dcdd4(local_118,local_178);
                    local_b8 = (ulonglong *)0x0;
                    plStack_b0 = (longlong *)0x0;
                    local_a8 = 0;
                    local_a0 = 0;
                    uStack_98 = 0;
                    FUN_1404e49fa(&local_b8,local_118);
                    local_90 = 0;
                    uStack_88 = 0;
                    local_80 = 0;
                    local_78 = 0;
                    uStack_70 = 0;
                    FUN_1404e49fa(&local_90,&local_e8);
                    uVar30 = uStack_190;
                    lVar28 = (longlong)(int)uStack_190;
                    uVar5 = (int)uStack_190 + 1;
                    uStack_190 = CONCAT44(uStack_190._4_4_,uVar5);
                    if (uStack_190._4_4_ < uVar5) {
                      FUN_141741a52(&local_198,uVar30 & 0xffffffff);
                    }
                    puVar27 = (uint *)(local_198 + lVar28 * 0x50);
                    puVar26 = (undefined8 *)(local_198 + lVar28 * 0x50);
                    *(undefined4 *)(puVar26 + 2) = 0;
                    *puVar26 = 0;
                    puVar26[1] = 0;
                    puVar26[3] = 0;
                    puVar26[4] = 0;
                    FUN_1404e49fa(puVar27,&local_b8);
                    puVar26[5] = 0;
                    puVar26[6] = 0;
                    *(undefined4 *)(puVar26 + 7) = 0;
                    puVar26[8] = 0;
                    puVar26[9] = 0;
                    FUN_1404e49fa(puVar26 + 5,&local_90);
                    if (local_78 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_a0 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_100 != 0) {
                      FUN_1400020a8();
                    }
                    if (CONCAT44(uStack_184,local_188) != 0) {
                      FUN_1400020a8();
                    }
                    if (local_d0 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  puVar26 = &DAT_14c9a1308;
                  if (puVar35 != (ulonglong *)0x0) {
                    plVar6 = &DAT_14c9a1288;
                    if ((*puVar35 & 2) != 0) {
                      plVar6 = (longlong *)(puVar35[1] + 0x18);
                    }
                    puVar26 = &DAT_14c9a1308;
                    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
                      plVar18 = plVar6 + 8;
                      if ((longlong *)plVar6[9] != (longlong *)0x0) {
                        plVar18 = (longlong *)plVar6[9];
                      }
                      iVar29 = *(int *)((longlong)plVar18 +
                                       (ulonglong)((int)plVar6[10] - 1U & *puVar27) * 4);
                      puVar26 = &DAT_14c9a1308;
                      if (iVar29 != -1) {
                        do {
                          lVar28 = *plVar6 + (longlong)iVar29 * 0x40;
                          if (*(uint *)(*plVar6 + (longlong)iVar29 * 0x40) == *puVar27) {
                            puVar26 = &DAT_14c9a1308;
                            if (lVar28 != 0) {
                              puVar16 = (undefined8 *)(lVar28 + 0x28);
                              puVar26 = &DAT_14c9a1308;
                              if ((puVar16 != (undefined8 *)0x0) &&
                                 (((byte *)*puVar16 == (byte *)0x0 ||
                                  (puVar26 = puVar16, (*(byte *)*puVar16 & 0x40) != 0)))) break;
                            }
                            goto LAB_14016ac07;
                          }
                          iVar29 = *(int *)(lVar28 + 0x38);
                        } while (iVar29 != -1);
                        puVar26 = &DAT_14c9a1308;
                      }
                    }
                  }
LAB_14016ac07:
                  local_b8 = (ulonglong *)*puVar26;
                  plStack_b0 = (longlong *)puVar26[1];
                  if (plStack_b0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
                    UNLOCK();
                  }
                  plVar6 = plStack_b0;
                  if (((char)uVar23 != '\0') &&
                     ((local_b8 == (ulonglong *)0x0 ||
                      ((*local_b8 & 3) == 0 || (*local_b8 & 0x68) != 0)))) {
                    local_e8 = 0;
                    uStack_e0 = 0;
                    FUN_1400b2348(puVar27,&local_e8,1);
                    iVar29 = (int)uStack_e0 + -1;
                    if ((int)uStack_e0 == 0) {
                      iVar29 = 0;
                    }
                    if (0 < iVar29) {
                      iVar12 = 0;
                      do {
                        iVar12 = iVar12 + 1;
                      } while (iVar29 != iVar12);
                    }
                    iVar29 = FUN_1409f3c5a(&local_168);
                    lVar28 = 0;
                    if (iVar29 != -1) {
                      lVar28 = (longlong)iVar29 * 0x40 + local_168;
                    }
                    puVar25 = (uint *)(lVar28 + 0x10);
                    if (lVar28 == 0) {
                      puVar25 = (uint *)0x0;
                    }
                    if (local_e8 != 0) {
                      FUN_1400020a8();
                    }
                    plVar18 = plStack_b0;
                    uVar23 = local_214;
                    plVar6 = plStack_b0;
                    if (puVar25 != (uint *)0x0) {
                      puVar26 = &DAT_14c9a1308;
                      if (puVar35 != (ulonglong *)0x0) {
                        plVar6 = &DAT_14c9a1288;
                        if ((*puVar35 & 2) != 0) {
                          plVar6 = (longlong *)(puVar35[1] + 0x18);
                        }
                        puVar26 = &DAT_14c9a1308;
                        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
                          plVar34 = plVar6 + 8;
                          if ((longlong *)plVar6[9] != (longlong *)0x0) {
                            plVar34 = (longlong *)plVar6[9];
                          }
                          iVar29 = *(int *)((longlong)plVar34 +
                                           (ulonglong)((int)plVar6[10] - 1U & *puVar25) * 4);
                          puVar26 = &DAT_14c9a1308;
                          if (iVar29 != -1) {
                            do {
                              lVar28 = *plVar6 + (longlong)iVar29 * 0x40;
                              if (*(uint *)(*plVar6 + (longlong)iVar29 * 0x40) == *puVar25) {
                                puVar26 = &DAT_14c9a1308;
                                if (lVar28 != 0) {
                                  puVar16 = (undefined8 *)(lVar28 + 0x28);
                                  puVar26 = &DAT_14c9a1308;
                                  if ((puVar16 != (undefined8 *)0x0) &&
                                     (((byte *)*puVar16 == (byte *)0x0 ||
                                      (puVar26 = puVar16, (*(byte *)*puVar16 & 0x40) != 0)))) break;
                                }
                                goto LAB_14016ade5;
                              }
                              iVar29 = *(int *)(lVar28 + 0x38);
                            } while (iVar29 != -1);
                            puVar26 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_14016ade5:
                      local_b8 = (ulonglong *)*puVar26;
                      plVar6 = (longlong *)puVar26[1];
                      if (plVar6 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                        UNLOCK();
                      }
                      if (plStack_b0 != (longlong *)0x0) {
                        LOCK();
                        plVar34 = plStack_b0 + 1;
                        *(int *)plVar34 = (int)*plVar34 + -1;
                        UNLOCK();
                        if ((int)*plVar34 == 0) {
                          puVar26 = (undefined8 *)*plStack_b0;
                          plStack_b0 = plVar6;
                          (*(code *)*puVar26)(plVar18);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar18 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          plVar6 = plStack_b0;
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar18 + 0x10))(plVar18);
                            plVar6 = plStack_b0;
                          }
                        }
                      }
                    }
                  }
                  plStack_b0 = plVar6;
                  if ((local_b8 == (ulonglong *)0x0) ||
                     ((*local_b8 & 0x68) != 0 || (*local_b8 & 3) == 0)) {
                    ppuVar17 = (ulonglong **)&DAT_14c9a1308;
                    if (puVar35 != (ulonglong *)0x0) {
                      plVar6 = &DAT_14c9a1288;
                      if ((*puVar35 & 2) != 0) {
                        plVar6 = (longlong *)(puVar35[1] + 0x18);
                      }
                      ppuVar17 = (ulonglong **)&DAT_14c9a1308;
                      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
                        plVar18 = plVar6 + 8;
                        if ((longlong *)plVar6[9] != (longlong *)0x0) {
                          plVar18 = (longlong *)plVar6[9];
                        }
                        iVar29 = *(int *)((longlong)plVar18 +
                                         (ulonglong)((int)plVar6[10] - 1U & puVar27[10]) * 4);
                        ppuVar17 = (ulonglong **)&DAT_14c9a1308;
                        if (iVar29 != -1) {
                          do {
                            lVar28 = *plVar6 + (longlong)iVar29 * 0x40;
                            if (*(uint *)(*plVar6 + (longlong)iVar29 * 0x40) == puVar27[10]) {
                              ppuVar17 = (ulonglong **)&DAT_14c9a1308;
                              if (lVar28 != 0) {
                                ppuVar21 = (ulonglong **)(lVar28 + 0x28);
                                ppuVar17 = (ulonglong **)&DAT_14c9a1308;
                                if ((ppuVar21 != (ulonglong **)0x0) &&
                                   ((*ppuVar21 == (ulonglong *)0x0 ||
                                    (ppuVar17 = ppuVar21, (**ppuVar21 & 0x40) != 0)))) break;
                              }
                              goto LAB_14016aef7;
                            }
                            iVar29 = *(int *)(lVar28 + 0x38);
                          } while (iVar29 != -1);
                          ppuVar17 = (ulonglong **)&DAT_14c9a1308;
                        }
                      }
                    }
LAB_14016aef7:
                    if ((*ppuVar17 != (ulonglong *)0x0) &&
                       (uVar30 = **ppuVar17, (uVar30 & 0x68) == 0 && (uVar30 & 3) != 0))
                    goto LAB_14016af25;
                  }
                  else {
                    ppuVar17 = &local_b8;
LAB_14016af25:
                    local_230 = 0;
                    local_238 = 0;
                    bVar9 = FUN_1446e0fc6(ppuVar17,local_1a8,lVar19,0xffffffff);
                    local_228 = CONCAT71(local_228._1_7_,(byte)local_228 & bVar9);
                  }
                  plVar6 = plStack_b0;
                  if (plStack_b0 != (longlong *)0x0) {
                    LOCK();
                    plVar18 = plStack_b0 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
                      (**(code **)*plStack_b0)(plStack_b0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar6 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                  lVar7 = lVar7 + 1;
                  plVar6 = (longlong *)(lVar19 + 0x18);
                  do {
                    for (lVar19 = *plVar6; lVar19 != 0; lVar19 = *(longlong *)(lVar19 + 0x18)) {
                      if ((~*(uint *)(*(longlong *)(lVar19 + 8) + 0x18) & 0x8001) == 0)
                      goto LAB_14016a9a9;
                    }
                    local_210 = (longlong *)(**(code **)(*local_210 + 0x2b0))();
                    plVar6 = local_210 + 10;
                  } while (local_210 != (longlong *)0x0);
                  local_210 = (longlong *)0x0;
                  plVar6 = local_208;
                  if ((local_228 & 1) != 0) break;
                  goto LAB_14016b061;
                }
LAB_14016a982:
                plVar18 = (longlong *)(**(code **)(*plVar18 + 0x2b0))();
              } while (plVar18 != (longlong *)0x0);
              local_1b0 = local_200;
              if (local_200 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_200 + 1) = (int)local_200[1] + 1;
                UNLOCK();
              }
              local_1b8 = puVar35;
              FUN_1448f0aa4(plVar6,local_1a8,&local_1b8,0);
LAB_14016b061:
              local_120 = 0;
              if (local_128 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_14099c296(&local_168);
              plVar18 = local_200;
              puVar16 = local_1f8;
LAB_14016b095:
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                plVar34 = plVar18 + 1;
                *(int *)plVar34 = (int)*plVar34 + -1;
                UNLOCK();
                if ((int)*plVar34 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar18 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
            }
            plVar18 = local_1c8;
            if (local_1c8 != (longlong *)0x0) {
              LOCK();
              plVar34 = local_1c8 + 1;
              *(int *)plVar34 = (int)*plVar34 + -1;
              UNLOCK();
              if ((int)*plVar34 == 0) {
                (**(code **)*local_1c8)(local_1c8);
                LOCK();
                piVar1 = (int *)((longlong)plVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            puVar16 = puVar16 + 2;
          } while (puVar16 != local_1d0);
        }
        param_1 = local_220;
        iVar29 = *(int *)(local_220 + 0x78);
        if (iVar29 == 0) {
          iVar12 = -1;
        }
        else {
          iVar12 = -1;
          lVar19 = *(longlong *)(local_220 + 0x70);
          if (*(longlong *)(local_220 + 0x70) == 0) {
            lVar19 = local_220 + 0x60;
          }
          uVar30 = (ulonglong)(iVar29 + 0x1fU >> 5);
          iVar33 = -0x3e - (iVar29 + 0x1fU & 0xffffffe0);
          uVar5 = 0xffffffff >> (-(char)iVar29 & 0x1fU);
          do {
            bVar36 = uVar30 == 0;
            uVar30 = uVar30 - 1;
            if (bVar36) goto LAB_14016b5af;
            iVar33 = iVar33 + 0x20;
            uVar10 = uVar5 & *(uint *)(lVar19 + uVar30 * 4);
            uVar5 = 0xffffffff;
          } while (uVar10 == 0);
          uVar30 = (ulonglong)uVar10 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar12 = -(((uint)lVar19 ^ 0x3f) + iVar33);
        }
LAB_14016b5af:
        iVar29 = iVar12 + 1;
        iVar33 = *(int *)(local_220 + 0x58);
        if (iVar29 < iVar33) {
          if ((0 < *(int *)(local_220 + 0x84)) &&
             (uVar30 = (ulonglong)*(uint *)(local_220 + 0x80),
             *(uint *)(local_220 + 0x80) != 0xffffffff)) {
            lVar19 = *(longlong *)(local_220 + 0x50);
            do {
              lVar7 = (longlong)(int)uVar30;
              if (iVar12 < (int)uVar30) {
                iVar33 = *(int *)(lVar19 + lVar7 * 0x18);
                iVar11 = *(int *)(lVar19 + 4 + lVar7 * 0x18);
                uVar30 = (ulonglong)iVar11;
                if (uVar30 != 0xffffffffffffffff) {
                  *(int *)(lVar19 + uVar30 * 0x18) = iVar33;
                }
                if (iVar33 == -1) {
                  *(int *)(local_220 + 0x80) = iVar11;
                }
                else {
                  *(int *)(lVar19 + 4 + (longlong)iVar33 * 0x18) = iVar11;
                }
                *(int *)(local_220 + 0x84) = *(int *)(local_220 + 0x84) + -1;
              }
              else {
                uVar30 = (ulonglong)*(uint *)(lVar19 + 4 + lVar7 * 0x18);
              }
            } while ((int)uVar30 != -1);
            iVar33 = *(int *)(local_220 + 0x58);
          }
          if (iVar33 != iVar29) {
            *(int *)(local_220 + 0x58) = iVar29;
          }
          *(int *)(local_220 + 0x78) = iVar29;
          iVar12 = iVar12 + 0x20;
          if (-1 < iVar29) {
            iVar12 = iVar29;
          }
          plVar6 = local_208;
          iVar33 = iVar29;
          if (iVar29 % 0x20 != 0) {
            lVar19 = local_220 + 0x60;
            if (*(longlong *)(local_220 + 0x70) != 0) {
              lVar19 = *(longlong *)(local_220 + 0x70);
            }
            bVar9 = -(char)(iVar29 % 0x20);
            *(uint *)(lVar19 + (longlong)(iVar12 >> 5) * 4) =
                 (uint)(*(int *)(lVar19 + (longlong)(iVar12 >> 5) * 4) << (bVar9 & 0x1f)) >>
                 (bVar9 & 0x1f);
            iVar33 = *(int *)(local_220 + 0x58);
          }
        }
        lVar19 = local_220 + 0x50;
        if (*(int *)(local_220 + 0x5c) != iVar33) {
          FUN_144727cd0(lVar19);
          iVar33 = *(int *)(param_1 + 0x58);
        }
        uVar5 = iVar33 - *(int *)(param_1 + 0x84);
        if (uVar5 < 4) {
          iVar29 = 1;
        }
        else {
          uVar30 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar7 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar29 = 1 << ((byte)lVar7 & 0x1f);
        }
        if ((0 < (int)uVar5 && *(int *)(param_1 + 0x98) < iVar29) ||
           (iVar29 < *(int *)(param_1 + 0x98))) {
          *(int *)(param_1 + 0x98) = iVar29;
          FUN_1407f2960(lVar19);
        }
        FUN_141741bf5(local_198,uStack_190 & 0xffffffff);
        if (local_198 != 0) {
          FUN_1400020a8();
        }
      }
      if (*(longlong **)(param_1 + 0x48) != plVar6) {
        if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) && (DAT_14c872a72 == '\0')) {
          FUN_140113f48();
        }
        FUN_1401924dc(plVar6);
        *(longlong **)(param_1 + 0x48) = plVar6;
      }
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
  }
LAB_14016a307:
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014016a974:
  lVar19 = *(longlong *)(lVar19 + 0x18);
  plVar6 = local_208;
  if (lVar19 == 0) goto LAB_14016a982;
  goto LAB_14016a964;
}



// FUNCTION 14016b782 FUN_14016b782 body=130 status=ok
// SIG undefined FUN_14016b782(void)

undefined8 FUN_14016b782(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9492d8) {
    FUN_144b3d300(&DAT_14c9492d8);
    if (DAT_14c9492d8 == -1) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      DAT_14c9492d0 = FUN_141473ad5(DAT_14c892c30);
      _Init_thread_footer(&DAT_14c9492d8);
    }
  }
  return DAT_14c9492d0;
}



// FUNCTION 14016b804 FUN_14016b804 body=57 status=ok
// SIG undefined FUN_14016b804(void)

void FUN_14016b804(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a55e0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a55e0 = FUN_140002ddd(FUN_14173bb46,uVar1,L"GbxParam");
  }
  return;
}



// FUNCTION 14016b83e FUN_14016b83e body=124 status=ok
// SIG undefined FUN_14016b83e(void)

undefined8 * FUN_14016b83e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x628);
  if ((lVar2 == 0) ||
     (iVar4 = *(int *)(lVar2 + 0x60) + *(int *)(lVar2 + 0x40) + *(int *)(lVar2 + 0x50) +
              *(int *)(lVar2 + 0x70) + *(int *)(lVar2 + 0x80) + *(int *)(lVar2 + 0x90),
     iVar5 = iVar4 + *(int *)(lVar2 + 0xa0),
     iVar5 == 0 || SCARRY4(iVar4,*(int *)(lVar2 + 0xa0)) != iVar5 < 0)) {
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    *param_2 = *(undefined8 *)(param_3 + 0x20);
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    uVar1 = DAT_14c8464e8;
    param_2[3] = DAT_14c8464e0;
    param_2[4] = uVar1;
    param_2[5] = DAT_14c8464f0;
    param_2[6] = 0;
  }
  else {
    FUN_14016b8ba(lVar2 + 0x38,param_2);
  }
  return param_2;
}



// FUNCTION 14016b8ba FUN_14016b8ba body=1401 status=ok
// SIG undefined FUN_14016b8ba(void)

void FUN_14016b8ba(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  undefined1 auStack_178 [44];
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
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
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_144875afe();
  if (*(int *)(param_1 + 8) == 0) {
    if ((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x18) == 0)) {
      fVar10 = 0.0;
      if (0 < (longlong)*(int *)(param_1 + 0x38)) {
        local_144 = (float)((local_e8 + local_d0) * 0.5);
        local_148 = (float)((local_f0 + local_d8) * 0.5);
        local_14c = (float)((local_f8 + local_e0) * 0.5);
        dVar12 = *param_3;
        dVar15 = param_3[1];
        dVar6 = param_3[2];
        local_108 = param_3[4];
        dStack_100 = param_3[5];
        dVar2 = param_3[3];
        local_110 = param_3[6];
        fVar10 = 0.0;
        lVar7 = 0;
        local_118 = local_d0;
        local_120 = local_f8;
        local_128 = local_d8;
        local_130 = local_e8;
        local_138 = local_e0;
        local_140 = local_f0;
        do {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x38 + lVar7 * 0x100);
          if (0 < lVar8) {
            lVar3 = *(longlong *)(lVar7 * 0x100 + *(longlong *)(param_1 + 0x30) + 0x30);
            lVar9 = 0;
            do {
              pdVar1 = (double *)(lVar3 + lVar9);
              dVar19 = *(double *)(lVar3 + 0x10 + lVar9) * param_3[10];
              dVar4 = *pdVar1 * param_3[8];
              dVar5 = pdVar1[1] * param_3[9];
              dVar17 = dVar4 * dVar6 - dVar12 * dVar19;
              dVar14 = dVar5 * dVar12 - dVar15 * dVar4;
              dVar16 = dVar19 * dVar15 - dVar6 * dVar5;
              dVar16 = dVar16 + dVar16;
              dVar17 = dVar17 + dVar17;
              dVar14 = dVar14 + dVar14;
              fVar13 = (float)((dVar14 * dVar15 - dVar17 * dVar6) + dVar2 * dVar16 + dVar4 +
                              local_108) - local_14c;
              fVar18 = (float)((dVar6 * dVar16 - dVar12 * dVar14) + param_3[3] * dVar17 + dVar5 +
                              dStack_100) - local_148;
              fVar11 = (float)(dVar14 * dVar2 + dVar19 + (dVar17 * dVar12 - dVar16 * dVar15) +
                              local_110) - local_144;
              fVar11 = fVar11 * fVar11 + fVar13 * fVar13 + fVar18 * fVar18;
              if (fVar10 <= fVar11) {
                fVar10 = fVar11;
              }
              lVar9 = lVar9 + 0x18;
            } while (lVar8 * 0x18 != lVar9);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != *(int *)(param_1 + 0x38));
      }
      dVar15 = (local_d0 - local_e8) * 0.5;
      dVar2 = (local_d8 - local_f0) * 0.5;
      dVar12 = (local_e0 - local_f8) * 0.5;
      param_2[3] = dVar12;
      param_2[4] = dVar2;
      param_2[5] = dVar15;
      *param_2 = dVar12 + local_f8;
      param_2[1] = dVar2 + local_f0;
      param_2[2] = dVar15 + local_e8;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      dVar2 = (double)fVar10;
      goto LAB_14016bc6b;
    }
  }
  else if ((((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x28) == 0)) &&
           (*(int *)(param_1 + 0x18) == 0)) && (*(int *)(param_1 + 0x38) == 0)) {
    dVar12 = (local_d0 - local_e8) * 0.5;
    dVar15 = (local_d8 - local_f0) * 0.5;
    dVar2 = (local_e0 - local_f8) * 0.5;
    param_2[3] = dVar2;
    param_2[4] = dVar15;
    param_2[5] = dVar12;
    *param_2 = local_f8 + dVar2;
    param_2[1] = dVar15 + local_f0;
    param_2[2] = dVar12 + local_e8;
    goto LAB_14016bc6b;
  }
  dVar2 = (local_d0 - local_e8) * 0.5;
  dVar12 = (local_d8 - local_f0) * 0.5;
  dVar15 = (local_e0 - local_f8) * 0.5;
  *param_2 = local_f8 + dVar15;
  param_2[1] = local_f0 + dVar12;
  param_2[2] = local_e8 + dVar2;
  param_2[3] = dVar15;
  param_2[4] = dVar12;
  param_2[5] = dVar2;
  dVar2 = SQRT(dVar2 * dVar2 + dVar15 * dVar15 + dVar12 * dVar12);
LAB_14016bc6b:
  param_2[6] = dVar2;
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016be34 FUN_14016be34 body=1339 status=ok
// SIG undefined FUN_14016be34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14016be34(longlong param_1,double *param_2,double *param_3,float param_4)

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
  undefined1 auVar10 [16];
  int iVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  undefined1 local_268 [32];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar10 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar18 = (double)param_4;
  dVar15 = dVar18 * *(double *)(param_1 + 0x30);
  dVar16 = dVar18 * *(double *)(param_1 + 0x38);
  dVar18 = dVar18 * *(double *)(param_1 + 0x40);
  auVar19 = *(undefined1 (*) [16])(param_3 + 8);
  dVar13 = auVar19._0_8_;
  dVar4 = auVar19._8_8_;
  auVar14 = *(undefined1 (*) [16])(param_3 + 10);
  dVar17 = auVar14._0_8_;
  auVar19 = minpd(_DAT_149934d80,auVar19);
  auVar23 = minpd(ZEXT816(0x3ff0000000000000),auVar14);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar11 = movmskpd((int)local_c0,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  uVar12 = movmskpd((int)param_1,auVar19);
  if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar2 = *param_3;
    dVar3 = param_3[1];
    dVar5 = param_3[2];
    dVar1 = param_3[3];
    dVar13 = dVar13 * dVar15;
    dVar4 = dVar4 * dVar16;
    dVar18 = dVar18 * dVar17;
    dVar15 = dVar4 * dVar2 - dVar13 * dVar3;
    dVar16 = dVar18 * dVar3 - dVar4 * dVar5;
    dVar17 = dVar13 * dVar5 - dVar18 * dVar2;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    dVar15 = dVar15 + dVar15;
    local_e8 = (dVar15 * dVar3 - dVar5 * dVar17) + dVar1 * dVar16 + dVar13 + param_3[4];
    dStack_e0 = (dVar16 * dVar5 - dVar15 * dVar2) + param_3[3] * dVar17 + dVar4 + param_3[5];
    local_d8 = (dVar17 * dVar2 - dVar3 * dVar16) + dVar1 * dVar15 + dVar18 + param_3[6];
  }
  else {
    dVar8 = *param_3;
    dVar2 = param_3[1];
    dVar9 = param_3[2];
    dVar7 = dVar2 + dVar2;
    dVar21 = dVar9 + dVar9;
    dVar1 = dVar8 * (dVar8 + dVar8);
    dVar5 = dVar2 * dVar7;
    auVar23._8_4_ = SUB84(dVar5,0);
    auVar23._0_8_ = dVar1;
    auVar23._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar3 = (DAT_149934d80._8_8_ - (dVar9 * dVar21 + dVar1)) * dVar4;
    local_278 = (1.0 - (dVar1 + dVar5)) * dVar17;
    dStack_270 = (0.0 - (dVar1 + auVar23._8_8_)) * auVar14._8_8_;
    dVar1 = param_3[3];
    dVar22 = dVar21 * dVar1;
    dVar24 = (dVar8 + dVar8) * param_3[3];
    dVar1 = dVar7 * dVar1;
    dVar6 = (dVar7 * dVar8 + dVar22) * dVar13;
    local_198 = (dVar21 * dVar2 + dVar24) * dVar4;
    dVar2 = (dVar21 * dVar2 - dVar24) * dVar17;
    local_1b8 = (*param_3 * dVar21 - dVar1) * dVar13;
    local_1c8._8_4_ = SUB84(dVar6,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar9 * dVar21 + dVar5)) * dVar13;
    local_1c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar3,0);
    local_1a8._0_8_ = (dVar7 * dVar8 - dVar22) * dVar4;
    local_1a8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    uStack_190 = 0;
    local_188._8_4_ = SUB84(dVar2,0);
    local_188._0_8_ = (dVar1 + *param_3 * dVar21) * dVar17;
    local_188._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_170 = 0;
    local_168 = param_3[4];
    dStack_160 = param_3[5];
    local_158 = param_3[6];
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0x3ff0000000000000;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    uStack_1d0 = 0x3ff0000000000000;
    local_1e8 = dVar15;
    dStack_1e0 = dVar16;
    local_1d8 = dVar18;
    local_178 = local_278;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar14._0_8_ = -(ulonglong)(0.0 <= dVar13);
    auVar19 = blendvpd(_DAT_149936790,auVar10,auVar14);
    dVar13 = (double)(~-(ulonglong)(0.0 <= dVar17) & 0xbff0000000000000 |
                     (ulonglong)((uint)(-(ulonglong)(0.0 <= dVar17) >> 0x20) & 0x3ff00000) << 0x20);
    dVar17 = auVar19._0_8_;
    local_138 = local_138 * dVar17;
    local_140 = local_140 * dVar17;
    local_148 = local_148 * dVar17;
    dVar17 = auVar19._8_8_;
    local_118 = local_118 * dVar17;
    local_120 = local_120 * dVar17;
    local_128 = dVar17 * local_128;
    local_f8 = local_f8 * dVar13;
    local_100 = local_100 * dVar13;
    local_108 = dVar13 * local_108;
    FUN_14481fd10(local_268,&local_148);
  }
  param_4 = param_4 * *(float *)(param_1 + 0x48);
  *param_2 = (double)((float)local_e8 - param_4);
  param_2[1] = (double)((float)dStack_e0 - param_4);
  param_2[2] = (double)((float)local_d8 - param_4);
  param_2[3] = (double)(param_4 + (float)local_e8);
  param_2[4] = (double)(param_4 + (float)dStack_e0);
  param_2[5] = (double)(param_4 + (float)local_d8);
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_c0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016c370 FUN_14016c370 body=107 status=ok
// SIG undefined FUN_14016c370(void)

undefined8
FUN_14016c370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,byte param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  if (iVar1 <= (int)(uint)param_6) {
    iVar3 = iVar1;
  }
  plVar2 = *(longlong **)(param_1 + 8 + (ulonglong)(iVar1 <= (int)(uint)param_6) * 8);
  (**(code **)(*plVar2 + 0x18))
            (plVar2,param_2,param_3,param_4,param_5,param_6 - (char)iVar3,param_7,param_8);
  return param_2;
}



// FUNCTION 14016c3dc FUN_14016c3dc body=1271 status=ok
// SIG undefined FUN_14016c3dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_14016c3dc(longlong param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5,byte param_6,byte param_7,uint param_8,int param_9)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 *local_100;
  longlong **local_f8;
  undefined1 *local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b4;
  byte local_b0;
  byte local_af;
  longlong *local_a8;
  uint local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined2 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar2 = *(uint **)(param_4 + 0x10);
  iVar6 = FUN_144b2c0a0(puVar2,(ulonglong)param_7,param_8,0);
  if (iVar6 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0fd10) && (FUN_144b3d300(&DAT_14cb0fd10), DAT_14cb0fd10 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar9 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VT.Verbose",1);
      if (plVar9 == (longlong *)0x0) {
        _DAT_14cb0fd08 = 0;
      }
      else {
        _DAT_14cb0fd08 = (**(code **)(*plVar9 + 0x68))(plVar9);
      }
      _Init_thread_footer(&DAT_14cb0fd10);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    uVar14 = 0xffffffff;
    uVar16 = (uint)param_7;
    if (puVar2[0x34] != uVar16 && (int)(uint)param_7 <= (int)puVar2[0x34]) {
      uVar14 = *(undefined4 *)(*(longlong *)(puVar2 + 0x32) + (ulonglong)param_7 * 4);
    }
    local_88 = *param_5;
    uStack_84 = (uint)param_6 << 0x1c | (uint)(param_7 & 0xf) << 0x18 | param_8 & 0xffffff;
    uVar11 = ((ulonglong)(uStack_84 >> 1) ^ CONCAT44(uStack_84,local_88)) * -0xae502812aa7333;
    uVar11 = (uVar11 >> 0x21 ^ uVar11) * -0x3b314601e57a13ad;
    uVar11 = uVar11 >> 0x21 ^ uVar11;
    local_80 = (undefined2)uVar11;
    uVar8 = *(uint *)(*(longlong *)(param_1 + 0x108) +
                     (ulonglong)((uint)*(ushort *)(param_1 + 0xfc) & (uint)uVar11) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xe8) + (longlong)(int)uVar8 * 0x40) ==
            CONCAT44(uStack_84,local_88)) {
          lVar12 = *(longlong *)(param_1 + 0xe8) + (longlong)(int)uVar8 * 0x40;
          lVar3 = *(longlong *)(lVar12 + 8);
          if (lVar3 == 0) {
            uVar7 = 3;
          }
          else {
            uVar7 = *(byte *)(lVar3 + 0xa0) & 1 | 2;
          }
          uVar11 = (ulonglong)CONCAT24(*(undefined2 *)(lVar12 + 0x38),uVar8);
          if (uVar11 != 0) {
            *param_2 = uVar11;
            *(uint *)(param_2 + 1) = uVar7;
            goto LAB_14016c82e;
          }
          break;
        }
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x110) + (ulonglong)uVar8 * 4);
      } while (uVar8 != 0xffffffff);
    }
    bVar4 = true;
    if ((*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0xa8)) -
        (*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0xd4)) <= *(int *)(DAT_14cb10000 + 4)) {
      bVar4 = (uint)(*(int *)(DAT_14cb0ffe8 + 4) << 0x14) < *(uint *)(param_1 + 0x60);
    }
    if ((param_9 == 1) || (!bVar4)) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0x400000000;
      local_108 = (undefined4 *)CONCAT44(local_108._4_4_,param_9);
      local_e4 = uVar14;
      local_e0 = param_3;
      FUN_143780aa4(param_4,&local_98,local_78);
      if ((local_90 & 0xfffffffe) == 2) {
        if (*puVar2 == 0) {
          uVar8 = 0xffffffff;
          iVar6 = 1;
        }
        else {
          uVar8 = 0xffffffff;
          uVar10 = 0;
          uVar7 = 0;
          do {
            uVar15 = uVar10;
            if (uVar8 < uVar10) {
              uVar15 = uVar8;
            }
            uVar5 = uVar10;
            if ((param_6 >> (uVar10 & 0x1f) & 1) == 0) {
              uVar15 = uVar8;
              uVar5 = uVar7;
            }
            uVar8 = uVar15;
            uVar10 = uVar10 + 1;
            uVar7 = uVar5;
          } while (*puVar2 != uVar10);
          iVar6 = uVar5 + 1;
        }
        uVar8 = FUN_144b2c0a0(puVar2,uVar16,param_8,uVar8);
        iVar6 = FUN_144b2c0a0(puVar2,uVar16,param_8,iVar6);
        local_100 = (undefined4 *)(ulonglong)(iVar6 - uVar8);
        local_108 = (undefined4 *)(ulonglong)uVar8;
        local_f8 = (longlong **)CONCAT44(local_f8._4_4_,param_9);
        FUN_14378108a(param_4,&local_a8,local_78,local_e4);
        if ((local_a0 & 0xfffffffe) == 2) {
          local_d8 = (longlong *)0x0;
          if (local_a8 != (longlong *)0x0) {
            local_d8 = local_a8;
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
          }
          plVar9 = local_d8;
          local_f8 = &local_d8;
          local_b8 = local_e4;
          local_b4 = param_8;
          local_b0 = param_7;
          local_af = param_6;
          local_d0 = local_98;
          local_c0 = *(undefined8 *)(param_4 + 8);
          local_100 = param_5;
          local_108 = &local_88;
          local_f0 = local_78;
          local_c8 = puVar2;
          FUN_143782830(param_1 + 0xe8,param_2,local_e0,param_1 + 0x10);
          *(undefined4 *)(param_2 + 1) = 2;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar9 + 0x28))(plVar9,1);
            }
          }
        }
        else {
          *param_2 = 0;
          *(uint *)(param_2 + 1) = local_a0;
        }
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_a8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)(*local_a8 + 0x28))(local_a8,1);
          }
        }
      }
      else {
        *param_2 = 0;
        *(uint *)(param_2 + 1) = local_90;
      }
      puVar13 = local_78;
      if (local_58 != (undefined1 *)0x0) {
        puVar13 = local_58;
      }
      FUN_144717c65(puVar13,local_50 & 0xffffffff);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 1;
    }
  }
LAB_14016c82e:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016c8d4 FUN_14016c8d4 body=432 status=ok
// SIG undefined FUN_14016c8d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14016c8d4(void)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  DWORDLONG *pDVar4;
  byte bVar5;
  ulonglong uVar6;
  DWORDLONG *pDVar7;
  undefined1 auStackY_168 [32];
  DWORD local_13c;
  undefined1 local_138 [16];
  uint local_128;
  DWORDLONG local_c8;
  DWORDLONG local_c0 [3];
  _SYSTEM_INFO local_a8;
  _MEMORYSTATUSEX local_78;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_168;
  if (DAT_14c75d648 == 0) {
    local_78.ullTotalPhys = 0;
    local_78.ullAvailVirtual = 0;
    local_78.ullAvailExtendedVirtual = 0;
    local_78.ullAvailPageFile = 0;
    local_78.ullTotalVirtual = 0;
    local_78.ullAvailPhys = 0;
    local_78.ullTotalPageFile = 0;
    local_78.dwLength = 0x40;
    local_78.dwMemoryLoad = 0;
    GlobalMemoryStatusEx(&local_78);
    local_a8.dwNumberOfProcessors = 0;
    local_a8.dwProcessorType = 0;
    local_a8.dwAllocationGranularity = 0;
    local_a8.wProcessorLevel = 0;
    local_a8.wProcessorRevision = 0;
    local_a8.lpMaximumApplicationAddress = (LPVOID)0x0;
    local_a8.dwActiveProcessorMask = 0;
    local_a8.u = (_union_552)0x0;
    local_a8.dwPageSize = 0;
    local_a8.lpMinimumApplicationAddress = (LPVOID)0x0;
    GetSystemInfo(&local_a8);
    DAT_14c75d648 = local_78.ullTotalPhys;
    DAT_14c75d650 = local_78.ullTotalPageFile;
    DAT_14c75d658 = (ulonglong)local_a8._0_8_ >> 0x20;
    DAT_14c75d660 = local_a8._40_8_ & 0xffffffff;
    uVar6 = (local_78.ullTotalPhys + (local_78.ullTotalPhys == 0)) - 1;
    if (uVar6 == 0) {
      bVar5 = 0;
    }
    else {
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      bVar5 = (byte)lVar1 ^ 0x3f;
    }
    _DAT_14c75d680 = 1L << (-bVar5 & 0x3f);
    _DAT_14c75d688 = (undefined4)(local_78.ullTotalPhys + 0x3fffffff >> 0x1e);
    _DAT_14c75d668 = DAT_14c75d660;
    _DAT_14c75d670 = DAT_14c75d658;
    cVar2 = FUN_142796d67();
    if (cVar2 != '\0') {
      memset(local_138,0,0x90);
      local_13c = 0;
      BVar3 = QueryInformationJobObject
                        ((HANDLE)0x0,JobObjectExtendedLimitInformation,local_138,0x90,&local_13c);
      if (BVar3 == 0) {
        GetLastError();
      }
      else if ((local_128 & 0x300) != 0) {
        pDVar7 = local_c0;
        if ((local_128 >> 9 & 1) == 0) {
          pDVar7 = &DAT_14c75d650;
        }
        pDVar4 = &local_c8;
        if ((local_128 >> 8 & 1) == 0) {
          pDVar4 = pDVar7;
        }
        DAT_14c75d650 = *pDVar4;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStackY_168) == DAT_14c707940) {
    return &DAT_14c75d648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016ca86 FUN_14016ca86 body=493 status=ok
// SIG undefined FUN_14016ca86(void)

float * FUN_14016ca86(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  
  plVar4 = (longlong *)FUN_1447262c2(param_4);
  if (plVar4 == (longlong *)0x0) {
LAB_14016cbd3:
    *(undefined2 *)(param_2 + 6) = 0;
    uVar2 = 0;
    goto LAB_14016cb7a;
  }
  lVar5 = FUN_14016cc74();
  if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_14016cbd3;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    dVar7 = (double)plVar4[0x27] * (double)plVar4[0x27] +
            (double)plVar4[0x25] * (double)plVar4[0x25] +
            (double)plVar4[0x26] * (double)plVar4[0x26];
    goto LAB_14016cbc1;
  case 1:
    dVar7 = (double)plVar4[0x25] * (double)plVar4[0x25] +
            (double)plVar4[0x26] * (double)plVar4[0x26];
LAB_14016cbc1:
    fVar6 = (float)SQRT(dVar7);
LAB_14016cbc5:
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = fVar6;
    uVar2 = 3;
    goto LAB_14016cb7a;
  case 2:
    bVar3 = (**(code **)(plVar4[0x2f] + 0xe0))(plVar4 + 0x2f);
    break;
  case 3:
    bVar3 = (**(code **)(plVar4[0x2f] + 0xe8))(plVar4 + 0x2f);
    break;
  case 4:
    cVar1 = (**(code **)(plVar4[0x2f] + 0xe8))();
    fVar6 = 0.0;
    if (cVar1 != '\0') {
      fVar6 = (float)(*(uint *)(plVar4 + 0x6d5) >> 2 & 1);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = fVar6;
    goto LAB_14016cb78;
  case 5:
    fVar6 = 0.0;
    if ((char)plVar4[0x220] == '\n') {
      fVar6 = (float)(uint)(plVar4[0x22] != 0);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    goto LAB_14016cb76;
  case 6:
    bVar3 = (**(code **)(*plVar4 + 0xf38))(plVar4);
    break;
  case 7:
    bVar3 = (**(code **)(plVar4[0x2f] + 0xf0))(plVar4 + 0x2f);
    break;
  case 8:
    bVar3 = (**(code **)(plVar4[0x2f] + 0xd8))(plVar4 + 0x2f);
    break;
  case 9:
    bVar3 = FUN_148d423f4(plVar4);
    break;
  case 10:
    bVar3 = FUN_148d42466(plVar4);
    break;
  default:
    fVar6 = 0.0;
    goto LAB_14016cbc5;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  fVar6 = (float)(uint)bVar3;
LAB_14016cb76:
  *param_2 = fVar6;
LAB_14016cb78:
  uVar2 = 1;
LAB_14016cb7a:
  *(undefined1 *)(param_2 + 8) = uVar2;
  return param_2;
}



// FUNCTION 14016cc74 FUN_14016cc74 body=228 status=ok
// SIG undefined FUN_14016cc74(void)

longlong FUN_14016cc74(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba8970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140c3e862;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464d1b74;
    local_38 = &LAB_148bffad8;
    local_40 = &LAB_141079788;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x4800;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacterMovementComponent",&DAT_14cba8970,FUN_1465d1462);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016cd5a FUN_14016cd5a body=143 status=ok
// SIG undefined FUN_14016cd5a(void)

void FUN_14016cd5a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10e8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10e8) = param_2;
    if ((uint)(*(int *)(param_1 + 0x10ec) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147329634(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10e0);
    if (*(longlong *)(param_1 + 0x10e0) == 0) {
      lVar2 = param_1;
    }
    FUN_144877ab7((longlong)iVar1 * 0x438 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x10e8) = param_2, param_3 == '\x01')) {
      FUN_147329750(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14016cdea FUN_14016cdea body=1212 status=ok
// SIG undefined FUN_14016cdea(void)

void FUN_14016cdea(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_14016d08b;
  lVar4 = FUN_14016d2a8();
  if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       != lVar4 + 0x30)) || (lVar4 = *(longlong *)(param_1 + 0xa38), lVar4 == 0))
  goto LAB_14016d08b;
  lVar8 = *(longlong *)(param_2 + 0x20);
  if (lVar8 == 0) {
LAB_14016d216:
    local_48._0_4_ = 0;
    lVar8 = 0;
    bVar9 = true;
    iVar3 = 0;
  }
  else {
    if (DAT_14cb63950 == 0) {
      local_70 = &local_48;
      local_48 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464ec72a;
      local_78 = &LAB_1486f5f75;
      local_80 = &LAB_140945686;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) {
      lVar4 = *(longlong *)(param_1 + 0xa38);
      goto LAB_14016d216;
    }
    lVar4 = *(longlong *)(param_1 + 0xa38);
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) != DAT_14cb63950 + 0x30) goto LAB_14016d216;
    uVar1 = *(uint *)(lVar8 + 0xc);
    local_48 = (code *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      bVar9 = false;
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar5;
      }
    }
    else {
      bVar9 = false;
      iVar3 = *(int *)(lVar7 + 0x10);
      local_48._0_4_ = uVar1;
    }
  }
  local_48 = (code *)CONCAT44(iVar3,(uint)local_48);
  if (((((*(int *)(param_2 + 0x15f8) == 0) || (uVar1 = *(uint *)(param_2 + 0x15f4), (int)uVar1 < 0))
       || ((DAT_14c9647dc <= (int)uVar1 ||
           ((plVar6 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_2 + 0x15f8))))))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar7 = *plVar6, lVar7 == 0)))) &&
     (((((*(int *)(param_2 + 0x15f0) == 0 || (uVar1 = *(uint *)(param_2 + 0x15ec), (int)uVar1 < 0))
        || (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar6 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_2 + 0x15f0))))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar7 = *plVar6, lVar7 == 0)))))) {
    local_50._0_4_ = 0;
    iVar3 = 0;
    uVar1 = (uint)local_50;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_50 = (ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_50;
      if (bVar10) {
        iVar3 = iVar5;
      }
    }
  }
  local_50._0_4_ = uVar1;
  local_50 = CONCAT44(iVar3,(uint)local_50);
  FUN_144877af8(lVar4,&local_50,&local_48,0);
  uVar2 = *(undefined8 *)(param_1 + 0xa38);
  if (bVar9) {
    local_48._0_4_ = 0;
    iVar3 = 0;
    uVar1 = (uint)local_48;
  }
  else {
    uVar1 = *(uint *)(lVar8 + 0xc);
    local_48 = (code *)(ulonglong)uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_48;
      if (bVar9) {
        iVar3 = iVar5;
      }
    }
  }
  local_48._0_4_ = uVar1;
  local_48 = (code *)CONCAT44(iVar3,(uint)local_48);
  local_50 = *(undefined8 *)(param_2 + 0x1720);
  FUN_144877af8(uVar2,&local_50,&local_48,0);
LAB_14016d08b:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14016d2a8 FUN_14016d2a8 body=228 status=ok
// SIG undefined FUN_14016d2a8(void)

longlong FUN_14016d2a8(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba85d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1464cf682;
    local_38 = &LAB_148bfe07f;
    local_40 = &LAB_140ceb2cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1960;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacterAnimInstance",&DAT_14cba85d0,FUN_1465d0500);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba85d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016d38e FUN_14016d38e body=121 status=ok
// SIG undefined FUN_14016d38e(void)

void FUN_14016d38e(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_14016d408(param_1 + 0x138);
  if (param_3 != '\0') {
    lVar2 = *(longlong *)(param_2 + 8);
    if (*(int *)(lVar2 + 0x148) < *(int *)(param_1 + 0x4c)) {
      *(int *)(lVar2 + 0x148) = *(int *)(param_1 + 0x4c);
      lVar2 = *(longlong *)(param_2 + 8);
    }
    piVar1 = (int *)(lVar2 + 0x150);
    if (((*(char *)(lVar2 + 0x188) != '\x01') || ((float)*(int *)(param_1 + 0x50) < (float)*piVar1))
       && ((int *)(param_1 + 0x50) != piVar1)) {
      FUN_14016d48c(piVar1,(int *)(param_1 + 0x50));
      return;
    }
  }
  return;
}



// FUNCTION 14016d408 FUN_14016d408 body=132 status=ok
// SIG undefined FUN_14016d408(void)

int FUN_14016d408(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 4;
    iVar4 = 0;
    do {
      cVar3 = FUN_144717174(lVar5,lVar5);
      if (cVar3 != '\0') {
        if (iVar4 != 1) {
          return -iVar4;
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
      iVar4 = iVar4 + -1;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14016d546(param_1,iVar4);
  }
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return iVar4;
}



// FUNCTION 14016d48c FUN_14016d48c body=185 status=ok
// SIG undefined FUN_14016d48c(void)

undefined4 * FUN_14016d48c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 7) == '\x01') {
      *(undefined1 *)(param_1 + 7) = 0;
    }
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  cVar1 = *(char *)(param_2 + 7);
  *(char *)(param_1 + 7) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar2 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 8,iVar2,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar2 << 2);
  }
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



// FUNCTION 14016d546 FUN_14016d546 body=269 status=ok
// SIG undefined FUN_14016d546(void)

void FUN_14016d546(longlong param_1,int param_2)

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



// FUNCTION 14016d654 FUN_14016d654 body=104 status=ok
// SIG undefined FUN_14016d654(void)

void * FUN_14016d654(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10;
    }
    else {
      FUN_14016d6bc(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14016d6bc FUN_14016d6bc body=103 status=ok
// SIG undefined FUN_14016d6bc(void)

void FUN_14016d6bc(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14016d724(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 14016d724 FUN_14016d724 body=132 status=ok
// SIG undefined FUN_14016d724(void)

void FUN_14016d724(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 14016d7a8 FUN_14016d7a8 body=264 status=ok
// SIG undefined FUN_14016d7a8(void)

void FUN_14016d7a8(longlong param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar1 = (longlong *)(param_1 + 400);
  iVar4 = *(int *)(param_1 + 0x198);
  lVar13 = (longlong)iVar4;
  if (0 < lVar13) {
    plVar11 = (longlong *)*plVar1;
    lVar12 = lVar13;
    do {
      if (((*param_2 == *plVar11) &&
          (*(int *)((longlong)plVar11 + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         ((char)plVar11[1] == (char)param_2[1])) {
        if (plVar11 != (longlong *)0x0) {
          if (((((*(float *)(plVar11 + 2) == *param_3) &&
                (!NAN(*(float *)(plVar11 + 2)) && !NAN(*param_3))) &&
               ((*(float *)((longlong)plVar11 + 0x14) == param_3[1] &&
                ((!NAN(*(float *)((longlong)plVar11 + 0x14)) && !NAN(param_3[1]) &&
                 (*(float *)(plVar11 + 3) == param_3[2])))))) &&
              (!NAN(*(float *)(plVar11 + 3)) && !NAN(param_3[2]))) &&
             ((*(float *)((longlong)plVar11 + 0x1c) == param_3[3] &&
              (!NAN(*(float *)((longlong)plVar11 + 0x1c)) && !NAN(param_3[3]))))) {
            return;
          }
          goto LAB_14016d852;
        }
        break;
      }
      plVar11 = plVar11 + 6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(uint *)(param_1 + 0x198) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x19c) < iVar4 + 1U) {
    FUN_1406a5838(plVar1,iVar4);
  }
  lVar12 = *plVar1;
  lVar13 = lVar13 * 0x30;
  plVar11 = (longlong *)(lVar12 + lVar13);
  *(undefined8 *)(lVar12 + lVar13) = 0;
  *(undefined1 *)(lVar12 + 8 + lVar13) = 2;
  *(undefined4 *)(lVar12 + 0xc + lVar13) = 0xffffffff;
  puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar13);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar13);
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  lVar10 = param_2[1];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar2 = (undefined4 *)(lVar12 + lVar13);
  *puVar2 = (int)*param_2;
  puVar2[1] = uVar5;
  puVar2[2] = (int)lVar10;
  puVar2[3] = uVar6;
  puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar13);
  *puVar3 = 0;
  puVar3[1] = 0;
LAB_14016d852:
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)(plVar11 + 2) = *param_3;
  *(float *)((longlong)plVar11 + 0x14) = fVar7;
  *(float *)(plVar11 + 3) = fVar8;
  *(float *)((longlong)plVar11 + 0x1c) = fVar9;
  FUN_143570e81(param_1);
  return;
}



// FUNCTION 14016d8b0 FUN_14016d8b0 body=269 status=ok
// SIG undefined FUN_14016d8b0(void)

void FUN_14016d8b0(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  undefined1 local_28;
  undefined4 local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  local_28 = 2;
  local_24 = 0xffffffff;
  local_48 = param_2 & 0xffffffff;
  local_40 = (undefined4)(param_2 >> 0x20);
  local_3c = 0xffffffff;
  local_38 = 2;
  local_30 = param_2;
  FUN_14487c068(param_1,&local_48,&local_20,0);
  if (((param_3 != 0) && (local_20 != 0)) &&
     (uVar1 = *(ulonglong *)(param_3 + 0x18), uVar1 != *(ulonglong *)(local_20 + 0x18))) {
    uVar2 = (uint)(uVar1 >> 0x10);
    uVar4 = (uint)uVar1 & 0xffff;
    local_48 = uVar1;
    uVar3 = FUN_1409d9780(param_1 + 0x2e0,
                          ((uint)uVar1 << 0x10 | uVar4) + (int)(uVar1 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
    local_50 = *(undefined8 *)(local_20 + 0x18);
    FUN_1409d9716(uVar3);
  }
  FUN_14016d9be(param_1,&local_30,param_3);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016d9be FUN_14016d9be body=529 status=ok
// SIG undefined FUN_14016d9be(void)

void FUN_14016d9be(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    FUN_1400337aa(param_3);
  }
  plVar1 = (longlong *)(param_1 + 0x1b0);
  lVar7 = (longlong)*(int *)(param_1 + 0x1b8);
  if (0 < lVar7) {
    plVar5 = (longlong *)*plVar1;
    lVar6 = lVar7;
    do {
      if (((*param_2 == *plVar5) &&
          (*(int *)((longlong)plVar5 + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         ((char)plVar5[1] == (char)param_2[1])) {
        if (plVar5 != (longlong *)0x0) {
          if ((param_3 == 0) || (plVar5[2] == param_3)) goto LAB_14016dabc;
          goto LAB_14016da91;
        }
        break;
      }
      plVar5 = plVar5 + 5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  uVar4 = *(int *)(param_1 + 0x1b8) + 1;
  *(uint *)(param_1 + 0x1b8) = uVar4;
  if (*(uint *)(param_1 + 0x1bc) < uVar4) {
    FUN_1417e03e8(plVar1);
  }
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + lVar7 * 0x28) = 0;
  *(undefined1 *)(lVar6 + 8 + lVar7 * 0x28) = 2;
  *(undefined4 *)(lVar6 + 0xc + lVar7 * 0x28) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar6 + 0x20 + lVar7 * 0x28) = 0;
  lVar3 = param_2[1];
  plVar1 = (longlong *)(lVar6 + lVar7 * 0x28);
  *plVar1 = *param_2;
  plVar1[1] = lVar3;
  puVar2 = (undefined8 *)(lVar6 + 0x18 + lVar7 * 0x28);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (param_3 != 0) {
    plVar5 = (longlong *)(lVar6 + lVar7 * 0x28);
LAB_14016da91:
    if (DAT_14cb0b430 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_145892f94;
      local_68 = &LAB_147d6dbf3;
      local_70 = &LAB_1464081e0;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000001;
      local_90 = 8;
      local_98 = 0x138;
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    if ((*(int *)(DAT_14cb0b430 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) == DAT_14cb0b430 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_3);
      }
      plVar5[2] = param_3;
      FUN_1406555d4(param_3,param_1,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
    }
  }
LAB_14016dabc:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14016dbec FUN_14016dbec body=317 status=ok
// SIG undefined FUN_14016dbec(void)

void FUN_14016dbec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14016dc5a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
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
LAB_14016dc5a:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14016dd2a FUN_14016dd2a body=113 status=ok
// SIG undefined FUN_14016dd2a(void)

void FUN_14016dd2a(longlong param_1,longlong param_2,char param_3)

{
  if (param_2 != 0) {
    FUN_14016ded4(param_1 + 0x438);
    FUN_14016e00e(*(undefined8 *)(param_1 + 0x18),param_2);
    if (2 < *(byte *)(param_2 + 0xc)) {
      FUN_14016dd9c(param_1 + 0x28,param_2);
      FUN_14016de36(param_1 + 0x78,param_2);
      if (param_3 != '\0') {
        FUN_14016df74(param_1 + 200,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14016dd9c FUN_14016dd9c body=154 status=ok
// SIG undefined FUN_14016dd9c(void)

undefined8 FUN_14016dd9c(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_14016e3f4(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14016de36 FUN_14016de36 body=157 status=ok
// SIG undefined FUN_14016de36(void)

undefined8 FUN_14016de36(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14016e61c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14016ded4 FUN_14016ded4 body=159 status=ok
// SIG undefined FUN_14016ded4(void)

undefined8 FUN_14016ded4(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_146e0f0fa(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14016df74 FUN_14016df74 body=154 status=ok
// SIG undefined FUN_14016df74(void)

undefined8 FUN_14016df74(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14016e4dc(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14016e00e FUN_14016e00e body=888 status=ok
// SIG undefined FUN_14016e00e(void)

void FUN_14016e00e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined2 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint local_5c;
  uint local_58;
  
  lVar10 = *param_2;
  if (param_2 != (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x1e8) + (longlong)(int)param_2[1] * 8);
    if (lVar5 != 0) {
      FUN_1407829ba((longlong)(int)param_2[1],lVar5);
      FUN_1400d25b0(param_1 + 0x20,param_2);
      FUN_140782a1c();
      FUN_140782aaa(param_1 + 0x26,lVar5);
      lVar10 = *param_2;
    }
  }
  uVar3 = *(uint *)(*(longlong *)(lVar10 + 0x80) + (longlong)(int)param_2[1] * 4);
  uVar22 = (ulonglong)uVar3;
  local_58 = 0;
  puVar9 = (undefined8 *)FUN_1447eab44(param_1 + 0x70,uVar22,0);
  *(undefined1 *)(puVar9 + 8) = 0;
  uVar15 = *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
  *(undefined2 *)(puVar9 + 7) = uVar15;
  lVar5 = *param_2;
  lVar12 = (longlong)(int)param_2[1];
  uVar4 = *(undefined4 *)(*(longlong *)(lVar5 + 0x80) + lVar12 * 4);
  lVar10 = *(longlong *)(lVar5 + 0xf8) + lVar12 * 0x18;
  lVar19 = *(longlong *)(lVar10 + 8);
  if (*(longlong *)(lVar10 + 8) == 0) {
    lVar19 = lVar10;
  }
  uVar18 = 0;
  uVar17 = 0;
  local_5c = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar7 = 0;
  uVar11 = 0;
  if ((longlong)*(int *)(lVar10 + 0x10) != 0) {
    lVar23 = (longlong)*(int *)(lVar10 + 0x10) * 8;
    lVar10 = 0;
    local_5c = 0;
    uVar17 = 0;
    uVar18 = 0;
    local_58 = 0;
    do {
      lVar6 = *(longlong *)(lVar19 + lVar10);
      if ((lVar6 != 0) &&
         ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 2) != 0)) {
        uVar14 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
        local_58 = local_58 | *(uint *)(lVar6 + 0x48 + uVar14 * 8);
        uVar18 = uVar18 | *(uint *)(lVar6 + 0x4c + uVar14 * 8);
        uVar17 = uVar17 | *(uint *)(lVar6 + 0x50 + uVar14 * 8);
        local_5c = local_5c | *(uint *)(lVar6 + 0x54 + uVar14 * 8);
      }
      lVar10 = lVar10 + 8;
    } while (lVar23 != lVar10);
    lVar10 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar7 = 0;
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(lVar19 + lVar10);
      if ((lVar6 != 0) &&
         ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 5) != 0)) {
        uVar14 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
        uVar21 = uVar21 | *(uint *)(lVar6 + 0x58 + uVar14 * 8);
        uVar20 = uVar20 | *(uint *)(lVar6 + 0x5c + uVar14 * 8);
        uVar7 = uVar7 | *(uint *)(lVar6 + 0x60 + uVar14 * 8);
        uVar11 = uVar11 | *(uint *)(lVar6 + 100 + uVar14 * 8);
      }
      lVar10 = lVar10 + 8;
    } while (lVar23 != lVar10);
  }
  *puVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 0xb0) + lVar12 * 8);
  puVar9[1] = param_2;
  *(undefined4 *)(puVar9 + 2) = uVar4;
  *(uint *)((longlong)puVar9 + 0x14) = local_58;
  *(uint *)(puVar9 + 3) = uVar18;
  *(uint *)((longlong)puVar9 + 0x1c) = uVar17;
  *(uint *)(puVar9 + 4) = local_5c;
  *(uint *)((longlong)puVar9 + 0x24) = uVar21;
  *(uint *)(puVar9 + 5) = uVar20;
  *(uint *)((longlong)puVar9 + 0x2c) = uVar7;
  *(uint *)(puVar9 + 6) = uVar11;
  *(undefined1 *)((longlong)puVar9 + 0x34) = 1;
  if ((-1 < (int)uVar3) && ((int)uVar3 < (int)param_1[0x6f])) {
    lVar10 = param_1[0x6e];
    puVar1 = (uint *)(lVar10 + uVar22 * 8);
    if ((puVar1 != (uint *)0x0) && (*(char *)(lVar10 + 4 + uVar22 * 8) != '\0')) {
      uVar3 = *puVar1;
      iVar8 = (int)param_1[0x6d];
      if ((int)(uVar3 + 1) < iVar8) {
        *(uint *)(lVar10 + (longlong)*(int *)(param_1[0x6c] + -0x38 + (longlong)iVar8 * 0x48) * 8) =
             uVar3;
        iVar8 = (int)param_1[0x6d];
      }
      iVar13 = ~uVar3 + iVar8;
      if (iVar13 != 0) {
        iVar16 = 1;
        if (iVar13 < 1) {
          iVar16 = iVar13;
        }
        memmove((void *)(param_1[0x6c] + (longlong)(int)uVar3 * 0x48),
                (void *)(param_1[0x6c] + (longlong)(iVar8 - iVar16) * 0x48),(longlong)iVar16 * 0x48)
        ;
        iVar8 = (int)param_1[0x6d];
      }
      *(int *)(param_1 + 0x6d) = iVar8 + -1;
      FUN_1448b7c04(param_1 + 0x6c);
      *(undefined8 *)(param_1[0x6e] + uVar22 * 8) = 0;
      uVar15 = *(undefined2 *)(puVar9 + 7);
    }
  }
  (**(code **)(*(longlong *)param_1[0x5b] + 0x80))((longlong *)param_1[0x5b],puVar9,uVar15);
  FUN_1456d1f2c(param_1[0x59],param_2);
  FUN_14487ca12(param_1,param_2);
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    pbVar2 = (byte *)(*(longlong *)(*param_2 + 0x2c0) + 10 + (longlong)(int)param_2[1] * 0x10);
    *pbVar2 = *pbVar2 & 0xfb;
  }
  return;
}



// FUNCTION 14016e386 FUN_14016e386 body=109 status=ok
// SIG undefined FUN_14016e386(void)

void FUN_14016e386(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(longlong *)(lVar3 + 8) == 0) {
LAB_14016e3d8:
        *(undefined1 *)(lVar3 + 0x118) = 1;
      }
      else if (*(longlong *)(lVar3 + 0x108) == param_2) {
        if (*(char *)(lVar3 + 0x118) == '\0') goto LAB_14016e3d8;
      }
      else if (*(longlong *)(lVar3 + 0x110) == param_2) {
        FUN_146cb4d0c(lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14016e3f4 FUN_14016e3f4 body=95 status=ok
// SIG undefined FUN_14016e3f4(void)

void FUN_14016e3f4(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14016e454(param_1,param_2,1);
  return;
}



// FUNCTION 14016e454 FUN_14016e454 body=136 status=ok
// SIG undefined FUN_14016e454(void)

void FUN_14016e454(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14016e4dc FUN_14016e4dc body=95 status=ok
// SIG undefined FUN_14016e4dc(void)

void FUN_14016e4dc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14016e53c(param_1,param_2,1);
  return;
}



// FUNCTION 14016e53c FUN_14016e53c body=87 status=ok
// SIG undefined FUN_14016e53c(void)

void FUN_14016e53c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14016e594(param_1,param_2,param_3);
  return;
}



// FUNCTION 14016e594 FUN_14016e594 body=136 status=ok
// SIG undefined FUN_14016e594(void)

void FUN_14016e594(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14016e61c FUN_14016e61c body=91 status=ok
// SIG undefined FUN_14016e61c(void)

void FUN_14016e61c(longlong *param_1,int param_2)

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
  FUN_14016e678(param_1,param_2,1);
  return;
}



// FUNCTION 14016e678 FUN_14016e678 body=134 status=ok
// SIG undefined FUN_14016e678(void)

void FUN_14016e678(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14016e6fe FUN_14016e6fe body=60 status=ok
// SIG undefined FUN_14016e6fe(void)

int FUN_14016e6fe(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14016e73a(param_1,iVar1);
  }
  FUN_14487d154((longlong)iVar1 * 0x150 + *param_1);
  return iVar1;
}



// FUNCTION 14016e73a FUN_14016e73a body=85 status=ok
// SIG undefined FUN_14016e73a(void)

void FUN_14016e73a(longlong param_1,int param_2)

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
    FUN_14016e816();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14016e790 FUN_14016e790 body=134 status=ok
// SIG undefined FUN_14016e790(void)

void FUN_14016e790(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 8 + (ulonglong)param_2 * 0x18) != 0) {
    FUN_1400020a8();
    lVar4 = *param_1;
  }
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar4 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14016e816 FUN_14016e816 body=452 status=ok
// SIG undefined FUN_14016e816(void)

void FUN_14016e816(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x150);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14016e933:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14016e970:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x150;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14016e86e;
LAB_14016e863:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14016e86e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xc3) goto code_r0x00014016e89a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x54 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14016e8f0:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14016e970;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14016e933;
code_r0x00014016e89a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14016e8f0;
    }
  }
  goto LAB_14016e863;
}



// FUNCTION 14016e9da FUN_14016e9da body=280 status=ok
// SIG undefined FUN_14016e9da(void)

void FUN_14016e9da(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = 0xffffffff;
  if ((((DAT_14c761b48 != 0) && (*(int *)(param_1 + 0x20c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x208), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x20c))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      uVar3 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 0x38))
                        (*(longlong **)(DAT_14c98e618 + 0x720),*(undefined4 *)(lVar4 + 0xe0));
    }
  }
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xe0);
  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xe0) = uVar3;
  FUN_14487d1b2(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xe0) = uVar2;
  return;
}



// FUNCTION 14016eaf2 FUN_14016eaf2 body=3401 status=ok
// SIG undefined FUN_14016eaf2(void)

undefined4
FUN_14016eaf2(longlong *param_1,void **param_2,longlong *param_3,longlong *param_4,ulonglong param_5
             ,undefined4 param_6,longlong *param_7,byte param_8)

{
  int *piVar1;
  void **ppvVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 in_R10;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  byte bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1d8 [32];
  char *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  byte local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong *plStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 local_130;
  float local_12c;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined1 local_104 [17];
  char local_f3;
  char local_f2;
  char local_f1;
  void *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  byte local_bc;
  undefined1 local_b8;
  byte local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1a8 = (longlong *)&local_f3;
  local_1b0 = (longlong *)&local_f2;
  local_1b8 = &local_f1;
  local_190 = param_4;
  FUN_144b013f4(param_1,local_104);
  local_130 = (undefined4)param_7[1];
  local_138 = *param_7;
  local_12c = *(float *)((longlong)param_7 + 0xc) * *(float *)((longlong)param_1 + 0x1ac);
  local_128 = param_7[2];
  lStack_120 = param_7[3];
  local_118 = param_7[4];
  lStack_110 = param_7[5];
  local_a8 = *param_3;
  fStack_98 = (float)param_3[2];
  uStack_94 = (undefined4)((ulonglong)param_3[2] >> 0x20);
  uStack_a0 = (undefined4)param_3[1];
  fStack_9c = (float)((ulonglong)param_3[1] >> 0x20);
  fStack_98 = fStack_98 + *(float *)((longlong)param_2 + 0x14);
  fStack_9c = fStack_9c + *(float *)(param_2 + 2);
  uStack_80._4_4_ = (float)((ulonglong)param_3[5] >> 0x20);
  local_78._0_4_ = (float)param_3[6];
  fVar26 = uStack_80._4_4_ * 0.0;
  uStack_90._4_4_ = (float)((ulonglong)param_3[3] >> 0x20);
  local_88._0_4_ = (float)param_3[4];
  local_88._4_4_ = (float)((ulonglong)param_3[4] >> 0x20);
  uStack_80._0_4_ = (float)param_3[5];
  fVar28 = local_88._4_4_ * 0.0;
  fVar27 = uStack_90._4_4_ * 0.0;
  uStack_90 = CONCAT44((float)local_88 * 0.0 + uStack_90._4_4_,(int)param_3[3]);
  local_88 = CONCAT44((float)uStack_80 * 0.0 + local_88._4_4_,fVar27 + (float)local_88);
  uStack_80 = CONCAT44((float)local_78 * 0.0 + uStack_80._4_4_ + *(float *)(param_2 + 2),
                       fVar28 + (float)uStack_80);
  local_78 = CONCAT44((int)((ulonglong)param_3[6] >> 0x20),
                      fVar26 + (float)local_78 + *(float *)((longlong)param_2 + 0x14));
  bVar24 = *(byte *)(param_1 + 7);
  if ((bVar24 & 8) != 0) {
    FUN_14697ecae(param_1,(int)param_2[4],*(undefined4 *)(param_2 + 5));
    bVar24 = *(byte *)(param_1 + 7);
  }
  if ((bVar24 & 4) != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,&local_a8,(int)param_2[4],*(undefined4 *)(param_2 + 5));
  }
  bVar24 = *(byte *)((longlong)param_2 + 0x2c) & 1;
  if (bVar24 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = CONCAT71((int7)((ulonglong)in_R10 >> 8),*(undefined1 *)((longlong)param_1 + 0x39)) &
             0xffffffffffffff10;
    uVar21 = CONCAT71((int7)(uVar21 >> 8),(byte)uVar21 >> 4);
  }
  pvVar6 = param_2[3];
  if (pvVar6 != (void *)0x0) {
    plVar17 = *(longlong **)((longlong)pvVar6 + 0x10);
    if (plVar17 == (longlong *)0x0) {
LAB_14016ed72:
      param_1[8] = 0;
      plVar18 = (longlong *)param_1[9];
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          plVar17 = (longlong *)0x0;
          bVar25 = true;
LAB_14016ed98:
          local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)uVar21);
          (**(code **)(*plVar18 + 0x10))();
          param_1[9] = (longlong)plVar17;
          uVar21 = (ulonglong)local_198 & 0xffffffff;
          uVar22 = uVar21;
          if (!bVar25) goto LAB_14016edbc;
        }
        else {
          param_1[9] = 0;
        }
      }
    }
    else {
      iVar14 = (int)plVar17[1];
      do {
        if (iVar14 == 0) goto LAB_14016ed72;
        LOCK();
        iVar9 = (int)plVar17[1];
        bVar25 = iVar14 == iVar9;
        if (bVar25) {
          *(int *)(plVar17 + 1) = iVar14 + 1;
          iVar9 = iVar14;
        }
        iVar14 = iVar9;
        UNLOCK();
      } while (!bVar25);
      param_1[8] = *(longlong *)((longlong)pvVar6 + 8);
      uVar22 = uVar21;
      if ((longlong *)param_1[9] != plVar17) {
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        plVar18 = (longlong *)param_1[9];
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            bVar25 = false;
            goto LAB_14016ed98;
          }
        }
        param_1[9] = (longlong)plVar17;
      }
LAB_14016edbc:
      LOCK();
      plVar18 = plVar17 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      uVar21 = uVar22;
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar17)(plVar17);
        uVar21 = uVar22 & 0xffffffff;
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          uVar21 = uVar22 & 0xffffffff;
        }
      }
    }
  }
  if (((longlong)*(int *)(param_5 + 0x128) < 1) ||
     (lVar16 = (longlong)
               *(int *)(*(longlong *)(param_5 + 0x120) + -4 +
                       (longlong)*(int *)(param_5 + 0x128) * 4), lVar16 == -1)) {
    local_b0 = 0;
  }
  else {
    lVar20 = *(longlong *)(param_5 + 0x130);
    lVar16 = lVar16 * 0x40;
    lVar19 = lVar20 + lVar16;
    local_f0 = (void *)0x0;
    iStack_e8 = *(int *)(lVar20 + 8 + lVar16);
    lVar23 = (longlong)iStack_e8;
    pvVar6 = *(void **)(lVar20 + lVar16);
    if (lVar23 == 0) {
      uStack_e4 = 0;
    }
    else {
      local_198 = (longlong *)CONCAT44(local_198._4_4_,(int)uVar21);
      FUN_146953154(&local_f0,iStack_e8,0);
      memcpy(local_f0,pvVar6,lVar23 * 0x24);
      uVar21 = (ulonglong)local_198 & 0xffffffff;
    }
    local_bc = *(byte *)(lVar19 + 0x34);
    if (local_bc == 1) {
      uStack_c0 = *(undefined4 *)(lVar19 + 0x30);
      local_d0 = *(longlong *)(lVar19 + 0x20);
      uStack_c8 = (undefined4)*(undefined8 *)(lVar19 + 0x28);
      uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x28) >> 0x20);
      uStack_e0 = (undefined4)*(undefined8 *)(lVar19 + 0x10);
      uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x10) >> 0x20);
      uStack_d8 = (undefined4)*(undefined8 *)(lVar19 + 0x18);
      uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x18) >> 0x20);
    }
    local_b8 = *(undefined1 *)(lVar19 + 0x38);
    local_b0 = 1;
  }
  ppvVar2 = (void **)(param_1 + 10);
  if (&local_f0 != ppvVar2) {
    if (local_b0 == 0) {
      if ((char)param_1[0x12] == '\0') goto LAB_14016ef75;
      if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x84) = 0;
      }
      if (*ppvVar2 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = 0;
    }
    else {
      if ((char)param_1[0x12] != '\0') {
        if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x84) = 0;
        }
        if (*ppvVar2 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      param_1[10] = (longlong)local_f0;
      local_f0 = (void *)0x0;
      *(int *)(param_1 + 0xb) = iStack_e8;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_e4;
      iStack_e8 = 0;
      uStack_e4 = 0;
      *(byte *)((longlong)param_1 + 0x84) = local_bc;
      if (local_bc == 1) {
        *(undefined4 *)(param_1 + 0x10) = uStack_c0;
        param_1[0xe] = local_d0;
        param_1[0xf] = CONCAT44(uStack_c4,uStack_c8);
        param_1[0xc] = CONCAT44(uStack_dc,uStack_e0);
        param_1[0xd] = CONCAT44(uStack_d4,uStack_d8);
      }
      *(undefined1 *)(param_1 + 0x11) = local_b8;
      uVar13 = 1;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar13;
  }
LAB_14016ef75:
  if ((local_b0 & 1) != 0) {
    if (local_bc == 1) {
      local_bc = 0;
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 0x2b) = param_6;
  bVar10 = *(byte *)((longlong)param_1 + 0x163) & 0xfc | param_8;
  bVar24 = bVar24 * '\x02';
  *(byte *)((longlong)param_1 + 0x163) = bVar24 | bVar10;
  bVar11 = *(char *)((longlong)param_2 + 0x2c) * '\x02' & 4;
  *(byte *)((longlong)param_1 + 0x163) = bVar24 | bVar10 & 0xfb | bVar11;
  if (param_1 + 0x13 != param_3) {
    param_1[0x19] = param_3[6];
    lVar16 = *param_3;
    lVar19 = param_3[1];
    lVar20 = param_3[2];
    lVar23 = param_3[3];
    lVar7 = param_3[5];
    param_1[0x17] = param_3[4];
    param_1[0x18] = lVar7;
    param_1[0x15] = lVar20;
    param_1[0x16] = lVar23;
    param_1[0x13] = lVar16;
    param_1[0x14] = lVar19;
  }
  if (param_1 + 0x1a != &local_a8) {
    param_1[0x20] = local_78;
    param_1[0x1e] = local_88;
    param_1[0x1f] = uStack_80;
    param_1[0x1c] = CONCAT44(uStack_94,fStack_98);
    param_1[0x1d] = uStack_90;
    param_1[0x1a] = local_a8;
    param_1[0x1b] = CONCAT44(fStack_9c,uStack_a0);
  }
  lVar16 = *param_7;
  lVar19 = param_7[1];
  lVar20 = param_7[2];
  lVar23 = param_7[3];
  lVar7 = param_7[5];
  param_1[0x27] = param_7[4];
  param_1[0x28] = lVar7;
  param_1[0x25] = lVar20;
  param_1[0x26] = lVar23;
  param_1[0x23] = lVar16;
  param_1[0x24] = lVar19;
  lVar16 = local_190[1];
  param_1[0x21] = *local_190;
  param_1[0x22] = lVar16;
  if ((longlong)*(int *)(param_5 + 0x150) < 1) {
    uVar13 = 0;
  }
  else {
    lVar16 = param_5 + 0x140;
    if (*(longlong *)(param_5 + 0x148) != 0) {
      lVar16 = *(longlong *)(param_5 + 0x148);
    }
    uVar13 = *(undefined1 *)(lVar16 + -1 + (longlong)*(int *)(param_5 + 0x150));
  }
  *(undefined1 *)((longlong)param_1 + 0x162) = uVar13;
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)((longlong)param_2[1] + 0xe0);
  *(undefined1 *)((longlong)param_1 + 0x161) = DAT_14c96b1e0;
  *(byte *)((longlong)param_1 + 0x163) =
       bVar24 | bVar10 & 0xf3 | bVar11 | *(char *)(param_5 + 0x908) << 3;
  local_168 = *(undefined4 *)param_2;
  uStack_164 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_160 = *(undefined4 *)(param_2 + 1);
  uStack_15c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_158 = *(undefined4 *)(param_2 + 2);
  uStack_154 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_148 = *(undefined4 *)(param_2 + 4);
  uStack_144 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_140 = *(undefined4 *)(param_2 + 5);
  uStack_13c._0_1_ = (byte)*(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_13c = CONCAT31((int3)((uint)*(undefined4 *)((longlong)param_2 + 0x2c) >> 8),
                        (byte)uStack_13c & 0xfe | (byte)uVar21);
  local_198 = param_1 + 0x29;
  plStack_150 = param_1;
  if (*(int *)(param_5 + 0x8f8) != 0) {
    lVar16 = param_5 + 0x8e0;
    if (*(longlong *)(param_5 + 0x8f0) != 0) {
      lVar16 = *(longlong *)(param_5 + 0x8f0);
    }
    lVar19 = param_5 + 0x8b0;
    if (*(longlong *)(param_5 + 0x8d0) != 0) {
      lVar19 = *(longlong *)(param_5 + 0x8d0);
    }
    if (*(longlong *)
         (lVar19 + (longlong)*(int *)(lVar16 + (longlong)(*(int *)(param_5 + 0x8f8) + -1) * 4) * 8)
        != 0) {
      if (((*local_198 != 0) && (param_1[0x2a] != 0)) && (0 < *(int *)(param_1[0x2a] + 8))) {
        FUN_146953710(local_198);
      }
      bVar24 = *(byte *)(param_1 + 6);
      iVar14 = *(int *)(param_5 + 0x8a8);
      *(uint *)(param_5 + 0x8a8) = iVar14 + 1U;
      if (*(uint *)(param_5 + 0x8ac) < iVar14 + 1U) {
        FUN_146968c16(param_5 + 0x260,iVar14);
      }
      lVar16 = param_5 + 0x260;
      if (*(longlong *)(param_5 + 0x8a0) != 0) {
        lVar16 = *(longlong *)(param_5 + 0x8a0);
      }
      lVar20 = (longlong)iVar14 * 0x20;
      *(longlong *)(lVar16 + lVar20) = param_1[0x29];
      lVar19 = param_1[0x2a];
      *(longlong *)(lVar16 + 8 + lVar20) = lVar19;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 0xc) = *(int *)(lVar19 + 0xc) + 1;
        UNLOCK();
      }
      *(longlong **)(lVar16 + lVar20 + 0x10) = param_1;
      *(bool *)(lVar16 + lVar20 + 0x18) = (bVar24 & 0x60) != 0;
    }
  }
  if ((byte)uVar21 != 0) {
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,*(undefined4 *)((longlong)param_1 + 0x2c));
    FUN_1449cd39c(param_2[1],param_1,0,param_6);
  }
  if (local_f1 == '\x01') {
    param_2 = &local_f0;
    FUN_1401bbb82(param_2,param_3);
    local_d0 = CONCAT71(local_d0._1_7_,local_f2 << 2 | (byte)local_d0 & 0xf9 | local_f3 * '\x02');
    FUN_1400d7f58(param_5 + 0x120,param_2);
  }
  cVar12 = *(char *)((longlong)param_1 + 0x36);
  if (cVar12 != '\0') {
    FUN_146953b6a(param_5,CONCAT71((int7)((ulonglong)param_2 >> 8),cVar12) & 0xffffffff);
  }
  cVar5 = *(char *)((longlong)param_1 + 0x37);
  if (cVar5 == '\x02') {
    uVar13 = 0;
  }
  else if (cVar5 == '\x03') {
    uVar13 = 1;
  }
  else {
    uVar13 = DAT_14c96b1e0;
    if (cVar5 == '\x01') {
      uVar13 = FUN_146949058();
    }
  }
  uVar8 = DAT_14c96b1e0;
  local_1a8 = &local_138;
  local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,param_6);
  local_1b8 = (char *)param_5;
  DAT_14c96b1e0 = uVar13;
  local_1a0 = param_8;
  uVar15 = (**(code **)(*param_1 + 0x230))(param_1,&local_168,param_3,local_104);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xef;
  if ((local_f1 != '\0') && (*(int *)(param_5 + 0x128) != 0)) {
    *(int *)(param_5 + 0x128) = *(int *)(param_5 + 0x128) + -1;
    FUN_14479f406(param_5 + 0x120);
  }
  if ((cVar12 != '\0') && (0 < *(int *)(param_5 + 0x150))) {
    *(int *)(param_5 + 0x150) = *(int *)(param_5 + 0x150) + -1;
    FUN_14696ab48(param_5 + 0x140);
  }
  if (((*(byte *)(param_1 + 6) & 1) != 0) &&
     (cVar12 = (**(code **)(*param_1 + 400))(param_1), plVar17 = DAT_14c968098, cVar12 != '\0')) {
    plVar18 = (longlong *)param_1[2];
    if (plVar18 == (longlong *)0x0) {
LAB_14016f33a:
      local_178 = 0;
      plStack_170 = (longlong *)0x0;
      cVar12 = (**(code **)(*plVar17 + 0x1a0))(plVar17);
    }
    else {
      iVar14 = (int)plVar18[1];
      do {
        if (iVar14 == 0) goto LAB_14016f33a;
        LOCK();
        iVar9 = (int)plVar18[1];
        bVar25 = iVar14 == iVar9;
        if (bVar25) {
          *(int *)(plVar18 + 1) = iVar14 + 1;
          iVar9 = iVar14;
        }
        iVar14 = iVar9;
        UNLOCK();
      } while (!bVar25);
      lVar16 = param_1[1];
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar18 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      local_178 = lVar16;
      plStack_170 = plVar18;
      cVar12 = (**(code **)(*plVar17 + 0x1a0))(plVar17);
      LOCK();
      plVar17 = plVar18 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    if ((cVar12 != '\0') && (lVar16 = (**(code **)(*param_1 + 0x218))(param_1), lVar16 != 0)) {
      plVar17 = (longlong *)(lVar16 + 8);
      cVar12 = *(char *)(lVar16 + 0x18);
      if (cVar12 != '\0') {
        if (cVar12 == '\x01') {
          plVar17 = (longlong *)FUN_1400c06fe(plVar17);
        }
        else if (cVar12 == '\x03') {
          plVar17 = param_7 + 4;
        }
        else {
          plVar17 = param_7 + 2;
        }
      }
      local_188 = *plVar17;
      lStack_180 = plVar17[1];
      local_1b0 = &local_188;
      local_f0 = *(void **)((longlong)param_3 + 0xc);
      iStack_e8 = (int)param_3[1];
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = (undefined4)*param_3;
      uStack_d8 = (undefined4)((ulonglong)*param_3 >> 0x20);
      uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_d0 = param_3[4];
      uStack_c8 = (undefined4)param_3[5];
      uStack_c4 = (undefined4)*(undefined8 *)((longlong)param_3 + 0x2c);
      uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x2c) >> 0x20);
      local_bc = local_bc & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U;
      local_1b8 = (char *)((ulonglong)local_1b8 & 0xffffffffffffff00);
      FUN_140239bd2(param_5,uVar15,&local_f0,lVar16);
    }
  }
  if (*(int *)(param_5 + 0x8f8) != 0) {
    lVar16 = param_5 + 0x8e0;
    if (*(longlong *)(param_5 + 0x8f0) != 0) {
      lVar16 = *(longlong *)(param_5 + 0x8f0);
    }
    lVar19 = param_5 + 0x8b0;
    if (*(longlong *)(param_5 + 0x8d0) != 0) {
      lVar19 = *(longlong *)(param_5 + 0x8d0);
    }
    if (*(longlong *)
         (lVar19 + (longlong)*(int *)(lVar16 + (longlong)(*(int *)(param_5 + 0x8f8) + -1) * 4) * 8)
        != 0) {
      lVar16 = *(longlong *)(param_5 + 0x8a0);
      if (*(longlong *)(param_5 + 0x8a0) == 0) {
        lVar16 = param_5 + 0x260;
      }
      lVar20 = (longlong)*(int *)(param_5 + 0x8a8) * 0x20;
      plVar17 = (longlong *)(lVar16 + -0x20 + lVar20);
      pvVar6 = (void *)*plVar17;
      lVar19 = plVar17[1];
      puVar4 = (undefined8 *)(lVar16 + -0x20 + lVar20);
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_146968d1c(param_5 + 0x260,*(int *)(param_5 + 0x8a8) + -1);
      iStack_e8 = (int)lVar19;
      uStack_e4 = (undefined4)((ulonglong)lVar19 >> 0x20);
      local_f0 = pvVar6;
      goto LAB_14016f4a4;
    }
  }
  local_f0 = DAT_14c979c58;
  iStack_e8 = (int)DAT_14c979c60;
  uStack_e4 = (undefined4)((ulonglong)DAT_14c979c60 >> 0x20);
  if (DAT_14c979c60 != 0) {
    LOCK();
    *(int *)(DAT_14c979c60 + 0xc) = *(int *)(DAT_14c979c60 + 0xc) + 1;
    UNLOCK();
  }
LAB_14016f4a4:
  plVar17 = local_198;
  if (*(char *)(param_5 + 0x168) == '\x01') {
    uVar15 = FUN_14020e732(param_5,uVar15,local_190);
  }
  if ((((*plVar17 != 0) && (param_1[0x2a] != 0)) && (0 < *(int *)(param_1[0x2a] + 8))) &&
     (cVar12 = FUN_14697dc0c(plVar17,&local_f0), cVar12 != '\0')) {
    FUN_1428693e8(local_198);
  }
  lVar16 = CONCAT44(uStack_e4,iStack_e8);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
    UNLOCK();
  }
  plVar17 = (longlong *)param_1[0x2a];
  param_1[0x29] = (longlong)local_f0;
  param_1[0x2a] = lVar16;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar15;
  plVar17 = (longlong *)CONCAT44(uStack_e4,iStack_e8);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  DAT_14c96b1e0 = uVar8;
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14016f83c FUN_14016f83c body=80 status=ok
// SIG undefined FUN_14016f83c(void)

void FUN_14016f83c(longlong param_1)

{
  if ((DAT_14c86a9fc == 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_14487d37c(param_1 + -0x4b8,0);
  return;
}



// FUNCTION 14016f88c FUN_14016f88c body=60 status=ok
// SIG undefined FUN_14016f88c(void)

void FUN_14016f88c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2);
    *(longlong *)(param_1 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14016f8c8 FUN_14016f8c8 body=159 status=ok
// SIG undefined FUN_14016f8c8(void)

void FUN_14016f8c8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 14016f968 FUN_14016f968 body=373 status=ok
// SIG undefined FUN_14016f968(void)

void FUN_14016f968(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14016f9f1;
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
LAB_14016f9f1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14016fade thunk_FUN_14016fae4 body=5 status=ok
// SIG undefined thunk_FUN_14016fae4(void)

void thunk_FUN_14016fae4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [8];
  undefined8 *puStack_98;
  int iStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  byte bStack_48;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
    uVar6 = FUN_140495e96(param_1 + 6);
    uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    *(uint *)((longlong)param_1 + 0x44) = uVar4 >> 0x10 ^ uVar4;
  }
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar7;
      puStack_98 = (undefined8 *)0x0;
      iStack_90 = 0;
      FUN_1446efa72(&puStack_98,0,3,0x10);
      puVar7 = puStack_98;
      iStack_90 = 3;
      *puStack_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      puStack_98[2] = lVar8;
      *puStack_98 = &PTR_FUN_14b9a69e0;
      puStack_98[3] = 0;
      iVar9 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(puStack_98 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar9 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar9 = *(int *)(lVar5 + 0x10);
          bVar11 = iVar9 == 0;
          if (bVar11) {
            *(int *)(lVar5 + 0x10) = iVar10;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar9 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar9;
      puVar7[4] = param_1;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_14487d8d8(&uStack_88,&puStack_98);
      bStack_48 = 1;
      FUN_14016fdb0(uVar2,auStack_a0,&uStack_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[bStack_48])(&uStack_88);
      if (iStack_90 != 0) {
        if (puStack_98 == (undefined8 *)0x0) goto LAB_14016fc6b;
        (**(code **)*puStack_98)(puStack_98,0);
        FUN_1446efa72(&puStack_98,0,0,0x10);
        iStack_90 = 0;
      }
      if (puStack_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
LAB_14016fc6b:
  if ((uStack_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14016fae4 FUN_14016fae4 body=714 status=ok
// SIG undefined FUN_14016fae4(void)

void FUN_14016fae4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
    uVar6 = FUN_140495e96(param_1 + 6);
    uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    *(uint *)((longlong)param_1 + 0x44) = uVar4 >> 0x10 ^ uVar4;
  }
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar7;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar7 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_98[2] = lVar8;
      *local_98 = &PTR_FUN_14b9a69e0;
      local_98[3] = 0;
      iVar9 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar9 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar9 = *(int *)(lVar5 + 0x10);
          bVar11 = iVar9 == 0;
          if (bVar11) {
            *(int *)(lVar5 + 0x10) = iVar10;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar9 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar7 + 0x1c) = iVar9;
      puVar7[4] = param_1;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar2,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_90 != 0) {
        if (local_98 == (undefined8 *)0x0) goto LAB_14016fc6b;
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
LAB_14016fc6b:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14016fdb0 FUN_14016fdb0 body=620 status=ok
// SIG undefined FUN_14016fdb0(void)

undefined8 * FUN_14016fdb0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_168 [32];
  undefined2 local_148;
  undefined1 local_146;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  byte local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8 [8];
  byte local_98;
  undefined8 local_88 [10];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_146 = 0;
  local_f8 = 0;
  local_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138._0_4_ = 0;
  uStack_138._4_4_ = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_148 = 0x104;
  if (&uStack_138 != param_3) {
    local_98 = *(byte *)(param_3 + 8);
    (*(code *)(&PTR_LAB_14aadfe40)[local_98])(local_d8,param_3);
    puVar9 = local_d8;
    puVar10 = local_88;
    for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = &uStack_138;
    puVar10 = local_d8;
    for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = local_88;
    puVar10 = &uStack_138;
    for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(local_d8);
  }
  uStack_140 = (undefined4)*(undefined8 *)(param_1 + 0x140);
  uStack_13c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
  if (((*(longlong *)(param_1 + 0x158) != 0) &&
      (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x158) + 0x30), lVar6 != 0)) &&
     (lVar6 = *(longlong *)(lVar6 + 0x360), lVar6 != 0)) {
    iVar3 = *(int *)(lVar6 + 0x1b0);
    if (((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar6 + 0x1a8))) &&
       (puVar7 = (undefined1 *)((longlong)iVar3 * 0x78 + *(longlong *)(lVar6 + 0x1a0)),
       puVar7 != (undefined1 *)0x0)) {
      local_146 = *puVar7;
    }
  }
  if ((DAT_14cb0be40 == 0) ||
     (lVar6 = *(longlong *)(param_1 + 0x150), *param_2 = 0, lVar6 == DAT_14c872be0)) {
    local_148 = CONCAT11(1,(undefined1)local_148);
    FUN_14496d3a8(param_1,local_88);
    *param_2 = local_88[0];
    iVar3 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
      FUN_1458de3d0(param_1 + 0x40,iVar3);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 8) = local_88[0];
    if (1 < *(int *)(param_1 + 0x48)) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      uVar8 = (ulonglong)(*(int *)(param_1 + 0x48) - 1);
      uVar4 = *(undefined8 *)(lVar6 + uVar8 * 8);
      do {
        uVar11 = (int)uVar8 - 1;
        uVar12 = (ulonglong)(uVar11 >> 1);
        uVar5 = *(undefined8 *)(lVar6 + uVar12 * 8);
        dVar2 = *(double *)
                 (*(longlong *)(param_1 + 8) + 8 + (ulonglong)((uint)uVar5 & 0xffffff) * 0x70);
        pdVar1 = (double *)
                 (*(longlong *)(param_1 + 8) + 8 + (ulonglong)((uint)uVar4 & 0xffffff) * 0x70);
        if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
        *(undefined8 *)(lVar6 + uVar8 * 8) = uVar5;
        *(undefined8 *)(lVar6 + uVar12 * 8) = uVar4;
        uVar8 = uVar12;
      } while (1 < uVar11);
    }
  }
  else {
    local_148 = local_148 & 0xff;
    uStack_140 = 0;
    uStack_13c = 0;
    FUN_14496d3a8(param_1,param_2);
    FUN_14496dca4(param_1 + 0xa0,local_88,param_2,0);
  }
  (*(code *)(&PTR_LAB_14a1c87a0)[local_f8])(&uStack_138);
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14017001e FUN_14017001e body=1 status=ok
// SIG undefined FUN_14017001e(void)

void FUN_14017001e(void)

{
  return;
}



// FUNCTION 140170020 FUN_140170020 body=1 status=ok
// SIG undefined FUN_140170020(void)

void FUN_140170020(void)

{
  return;
}



// FUNCTION 140170022 FUN_140170022 body=332 status=ok
// SIG undefined FUN_140170022(void)

bool FUN_140170022(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar2 = (longlong *)(param_1 + -0x30);
    lVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
         (*(char *)(lVar1 + 0x78fc) == '\x01')) {
        lVar1 = FUN_1459a85ac(plVar2);
        if (lVar1 != 0) {
          lVar1 = FUN_140d8e3ae(plVar2);
          bVar3 = lVar1 != 0;
          goto LAB_14017005d;
        }
      }
    }
  }
  bVar3 = false;
LAB_14017005d:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140170170 FUN_140170170 body=286 status=ok
// SIG undefined FUN_140170170(void)

undefined8 FUN_140170170(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa08);
      goto LAB_1401701ca;
    }
  }
  uVar2 = 0;
LAB_1401701ca:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140170290 FUN_140170290 body=1 status=ok
// SIG undefined FUN_140170290(void)

void FUN_140170290(void)

{
  return;
}



// FUNCTION 140170292 FUN_140170292 body=1 status=ok
// SIG undefined FUN_140170292(void)

void FUN_140170292(void)

{
  return;
}



// FUNCTION 140170294 FUN_140170294 body=130 status=ok
// SIG undefined FUN_140170294(void)

bool FUN_140170294(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  lVar5 = FUN_140170316(lVar3,uVar1,0);
  if (lVar5 == -1) {
    *(undefined4 *)
     (*(longlong *)(lVar3 + 0xb8) + 0x24 + (longlong)(int)(~*(uint *)(lVar3 + 0xdc) & uVar1) * 0x30)
         = 0;
    plVar4 = (longlong *)param_1[1];
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_1447808da(plVar4,iVar2);
    }
    *(uint *)(*plVar4 + (longlong)iVar2 * 4) = uVar1;
  }
  return lVar5 == -1;
}



// FUNCTION 140170316 FUN_140170316 body=943 status=ok
// SIG undefined FUN_140170316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140170316(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  code **local_a8;
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong *local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  lVar10 = (longlong)(int)(~*(uint *)(param_1 + 0xdc) & param_2) * 0x30;
  local_90 = *(ulonglong *)(lVar1 + lVar10);
  lVar7 = *(longlong *)(lVar1 + 8 + lVar10);
  uVar9 = local_90 & 0xffffffffffff;
  uVar8 = uVar9;
  if ((param_3 != 0) && ((short)(local_90 >> 0x30) == (short)(param_3 >> 0x30))) {
    uVar8 = param_3 & 0xffffffffffff;
    if ((param_3 & 0xffffffffffff) <= uVar9) {
      uVar8 = uVar9;
    }
    lVar7 = (lVar7 + uVar9) - uVar8;
  }
  lVar13 = (local_90 >> 0x30) * 0x98 + *(longlong *)(param_1 + 0xa8);
  local_88 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a0228) && (FUN_144b3d300(&DAT_14c9a0228), DAT_14c9a0228 == -1)) {
    DAT_14c9a0218 = (ulonglong *)0x0;
    _DAT_14c9a0220 = 0;
    atexit((_func_5014 *)&LAB_142b0f7e5);
    _Init_thread_footer(&DAT_14c9a0228);
  }
  uVar9 = uVar8 & 0xffffffffffff0000;
  uVar8 = lVar7 + uVar8 + 0xffff;
  lVar5 = (uVar8 | 0xffff) - uVar9;
  lVar7 = lVar5 + 0xffff;
  if (-1 < lVar5) {
    lVar7 = lVar5;
  }
  uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
  local_94 = uVar3 + 0x3f;
  uVar12 = local_94 >> 6;
  uVar4 = DAT_14c9a0224;
  iVar14 = 0;
  if (_DAT_14c9a0220 < 0) {
    _DAT_14c9a0220 = (ulonglong)DAT_14c9a0224 << 0x20;
    FUN_1448f21ac(&DAT_14c9a0218);
    uVar4 = DAT_14c9a0224;
    iVar14 = DAT_14c9a0220;
  }
  _DAT_14c9a0220 = CONCAT44(DAT_14c9a0224,iVar14 + uVar12);
  if (uVar4 - iVar14 < uVar12) {
    FUN_14479d316(&DAT_14c9a0218);
  }
  memset(DAT_14c9a0218 + iVar14,0,(ulonglong)(uVar12 * 8));
  lVar5 = local_88;
  uVar4 = local_94;
  if ((local_94 & 0xffffffc0) != uVar3) {
    DAT_14c9a0218[(ulonglong)uVar12 - 1] = -1L << ((byte)((ulonglong)lVar7 >> 0x10) & 0x3f);
  }
  lVar7 = (uVar8 & 0xffffffffffff0000) - 1;
  if (*(int *)(lVar13 + 0x80) != 0) {
    local_68 = *(undefined4 *)(lVar13 + 0x28);
    local_b0 = *(undefined4 *)(lVar13 + 0x24);
    local_b8 = *(undefined4 *)(lVar13 + 0x20);
    local_c0 = *(undefined8 *)(lVar13 + 0x18);
    local_80 = local_88 + 0xe0;
    local_50 = &local_80;
    local_60 = DAT_14c9a0218;
    local_a8 = &local_58;
    local_58 = FUN_142b0f7f6;
    local_c8 = 0;
    local_78 = uVar9;
    local_70 = lVar7;
    FUN_1401706c6(*(int *)(lVar13 + 0x80),local_80,uVar9,lVar7);
  }
  if ((*(int *)(lVar1 + lVar10 + 0x2c) == 1) && (*(int *)(lVar13 + 0x7c) != 0)) {
    local_68 = *(undefined4 *)(lVar13 + 0x28);
    local_b0 = *(undefined4 *)(lVar13 + 0x24);
    local_b8 = *(undefined4 *)(lVar13 + 0x20);
    local_c0 = *(undefined8 *)(lVar13 + 0x18);
    local_80 = lVar5 + 0xe0;
    local_50 = &local_80;
    local_60 = DAT_14c9a0218;
    local_a8 = &local_58;
    local_58 = FUN_142b0f7f6;
    local_c8 = 0;
    local_78 = uVar9;
    local_70 = lVar7;
    FUN_1401706c6(*(int *)(lVar13 + 0x7c),local_80,uVar9,lVar7);
  }
  uVar8 = 0xffffffffffffffff;
  if (0x3f < uVar4) {
    uVar6 = 0;
    puVar11 = DAT_14c9a0218;
    do {
      uVar2 = *puVar11;
      if (uVar2 != 0xffffffffffffffff) {
        uVar9 = (uVar6 & 0xffffffff) + uVar9;
        uVar8 = uVar2 & 1;
        while (uVar8 != 0) {
          uVar9 = uVar9 + 0x10000;
          uVar8 = uVar2 & 2;
          uVar2 = uVar2 >> 1;
        }
        uVar8 = local_90 & 0xffff000000000000 | uVar9;
        break;
      }
      uVar6 = uVar6 + 0x400000;
      puVar11 = puVar11 + 1;
    } while (((ulonglong)uVar12 + (ulonglong)((ulonglong)uVar12 == 0)) * 0x400000 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401706c6 FUN_1401706c6 body=828 status=ok
// SIG undefined FUN_1401706c6(void)

undefined8
FUN_1401706c6(uint param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             ulonglong param_6,int param_7,int param_8,undefined8 *param_9)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  int local_a8;
  int local_a0;
  code **local_98;
  uint *local_88;
  ulonglong local_80;
  longlong local_78;
  code *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = 1;
  if (param_1 == 0) goto LAB_1401709d5;
  local_78 = param_4 << ((byte)param_7 & 0x3f);
  local_88 = (uint *)((longlong)(int)(~DAT_14c99ff5c & param_1) * 0xc + DAT_14c99ff38);
  local_80 = param_5 + param_6 + 1 >> 1;
  if ((longlong)(param_3 << ((byte)param_7 & 0x3f)) < 0) {
LAB_140170856:
    uVar4 = local_88[1];
    if (uVar4 != 0) {
      pcVar1 = (code *)*param_9;
      uVar5 = param_9[1];
      do {
        lVar2 = *param_2;
        lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar4) * 0x30;
        uVar6 = *(ulonglong *)(lVar2 + lVar7) & 0xffffffffffff;
        if (((uVar6 <= param_4) && (param_3 <= (uVar6 + *(longlong *)(lVar2 + 8 + lVar7)) - 1)) &&
           (local_4c = uVar4, cVar3 = (*pcVar1)(uVar5,&local_4c), cVar3 == '\0'))
        goto LAB_1401709d3;
        uVar4 = *(uint *)(lVar2 + lVar7 + 0x20);
      } while (uVar4 != 0);
    }
    if (local_78 < 0) {
      pcVar1 = (code *)*param_9;
      if (param_7 == param_8) {
        uVar4 = local_88[2];
        if (uVar4 != 0) {
          uVar5 = param_9[1];
          do {
            lVar2 = *param_2;
            lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar4) * 0x30;
            uVar6 = *(ulonglong *)(lVar2 + lVar7) & 0xffffffffffff;
            if (((uVar6 <= param_4) && (param_3 <= (uVar6 + *(longlong *)(lVar2 + 8 + lVar7)) - 1))
               && (local_4c = uVar4, cVar3 = (*pcVar1)(uVar5,&local_4c), cVar3 == '\0'))
            goto LAB_1401709d3;
            uVar4 = *(uint *)(lVar2 + lVar7 + 0x20);
          } while (uVar4 != 0);
        }
      }
      else {
        local_98 = &local_70;
        local_68 = param_9[1];
        local_a8 = param_7 + 1;
        if (param_3 < local_80) {
          param_3 = local_80;
        }
        local_a0 = param_8;
        local_b0 = param_6;
        local_b8 = local_80;
        local_70 = pcVar1;
        cVar3 = FUN_1401706c6(local_88[2],param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1401709d3;
      }
    }
    uVar5 = 1;
  }
  else {
    pcVar1 = (code *)*param_9;
    if (param_7 == param_8) {
      uVar4 = *local_88;
      if (uVar4 != 0) {
        uVar5 = param_9[1];
        do {
          lVar2 = *param_2;
          lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar4) * 0x30;
          uVar6 = *(ulonglong *)(lVar2 + lVar7) & 0xffffffffffff;
          if (((uVar6 <= param_4) && (param_3 <= (uVar6 + *(longlong *)(lVar2 + 8 + lVar7)) - 1)) &&
             (local_4c = uVar4, cVar3 = (*pcVar1)(uVar5,&local_4c), cVar3 == '\0'))
          goto LAB_1401709d3;
          uVar4 = *(uint *)(lVar2 + lVar7 + 0x20);
        } while (uVar4 != 0);
      }
      goto LAB_140170856;
    }
    local_98 = &local_60;
    local_58 = param_9[1];
    local_a8 = param_7 + 1;
    local_b0 = local_80 - 1;
    uVar6 = local_b0;
    if (param_4 < local_b0) {
      uVar6 = param_4;
    }
    local_a0 = param_8;
    local_b8 = param_5;
    local_60 = pcVar1;
    cVar3 = FUN_1401706c6(*local_88,param_2,param_3,uVar6);
    if (cVar3 != '\0') goto LAB_140170856;
LAB_1401709d3:
    uVar5 = 0;
  }
LAB_1401709d5:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140170a04 FUN_140170a04 body=39 status=ok
// SIG undefined FUN_140170a04(void)

undefined4 FUN_140170a04(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 8))(param_1 + -8);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)(*(uint *)(lVar2 + 8) >> 8),(*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0);
  }
  return uVar1;
}



// FUNCTION 140170a76 FUN_140170a76 body=88 status=ok
// SIG undefined FUN_140170a76(void)

void FUN_140170a76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar1 = (longlong)*(int *)(lVar1 + 0x10) * 0x28;
    do {
      if (*plVar2 == *param_2) {
        lVar1 = FUN_1410cfc16();
        if (lVar1 == 0) {
          return;
        }
        FUN_1456d222c(lVar1,plVar2);
        return;
      }
      plVar2 = plVar2 + 5;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 140170ace FUN_140170ace body=83 status=ok
// SIG undefined FUN_140170ace(void)

void FUN_140170ace(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140170b22 FUN_140170b22 body=1862 status=ok
// SIG undefined FUN_140170b22(void)

undefined8 * FUN_140170b22(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar5 = FUN_141518b52();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
  }
  if (param_3[2] == 0) {
    if ((lVar6 != 0) && (*param_3 != 0)) {
      plVar12 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar12 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
        param_3[2] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar12 + 0x110))(plVar12);
        lVar6 = FUN_144aff482(uVar5,param_3);
        param_3[2] = lVar6;
        if (lVar6 != 0) goto LAB_140170b73;
      }
    }
  }
  else {
LAB_140170b73:
    if (param_4 != 0) {
      FUN_1440c9b46(param_1,&local_80,param_3,param_4);
      if (local_80 == (longlong *)0x0) {
        plVar7 = (longlong *)FUN_14001cc68(0x1d0,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14b9615b0;
        plVar12 = plVar7 + 2;
        FUN_1459da264(plVar12,param_3,param_4);
        local_70 = plVar12;
        local_68 = plVar7;
        FUN_148cebdfa(&local_70,plVar12);
        plVar11 = plStack_78;
        local_80 = plVar12;
        if (plVar7 == (longlong *)0x0) {
          if (plStack_78 != (longlong *)0x0) {
            plStack_78 = (longlong *)0x0;
LAB_140170cee:
            LOCK();
            plVar12 = plVar11 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar4 = *piVar1;
              UNLOCK();
joined_r0x000140170d1b:
              if (iVar4 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          if (plVar7 == plStack_78) {
            LOCK();
            plVar12 = plVar7 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar4 = *piVar1;
              UNLOCK();
              plVar11 = plVar7;
              goto joined_r0x000140170d1b;
            }
          }
          else {
            bVar13 = plStack_78 != (longlong *)0x0;
            plStack_78 = plVar7;
            if (bVar13) goto LAB_140170cee;
          }
        }
        plVar12 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_68 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        plVar12 = local_80;
        local_80[0x17] = 0;
        local_80[0x18] = 0;
        FUN_1412a753c(local_80 + 0x27);
        *(undefined4 *)(plVar12 + 0x33) = 0xffffffff;
        if (*(int *)((longlong)plVar12 + 0xe4) < 0) {
          *(undefined4 *)(plVar12 + 0x1c) = 0;
          FUN_146620cca(plVar12 + 0x1b,0);
        }
        else {
          *(undefined4 *)(plVar12 + 0x1c) = 0;
        }
        *(undefined8 *)((longlong)plVar12 + 0x11c) = 0;
        *(undefined8 *)((longlong)plVar12 + 0x124) = 0;
        *(undefined8 *)((longlong)plVar12 + 300) = 0;
        if ((((((*(int *)((longlong)plVar12 + 0xac) == 0) ||
               (uVar2 = *(uint *)(plVar12 + 0x15), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)
              ) || (((plVar11 = (longlong *)
                                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     plVar11 == (longlong *)0x0 ||
                     ((int)plVar11[2] != *(int *)((longlong)plVar12 + 0xac))) ||
                    (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
                     ((lVar6 = *plVar11, lVar6 == 0 || ((*(byte *)(lVar6 + 0x155) & 0x20) != 0))))))
                   )) || (*(int *)((longlong)plVar12 + 0xb4) == 0)) ||
           ((((uVar2 = *(uint *)(plVar12 + 0x16), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2))
             || (plVar11 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar11 == (longlong *)0x0)) ||
            ((((int)plVar11[2] != *(int *)((longlong)plVar12 + 0xb4) ||
              ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (lVar9 = *plVar11, lVar9 == 0))))))
        goto LAB_140170fc6;
        lVar8 = FUN_14145892e();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          plVar11 = *(longlong **)(lVar9 + 0x3a0);
          if ((plVar11 != (longlong *)0x0) &&
             (plVar7 = (longlong *)FUN_14048bbc8(plVar11 + 0xeb), plVar7 != (longlong *)0x0)) {
            lVar6 = FUN_14098e79e();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)) {
              lVar6 = (**(code **)(*plVar7 + 0xa00))(plVar7);
              if (lVar6 == 0) {
                uVar2 = *(uint *)((longlong)plVar7 + 0xc);
                *(uint *)((longlong)plVar12 + 0x124) = uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar6 = 0;
                }
                iVar4 = *(int *)(lVar6 + 0x10);
                if (*(int *)(lVar6 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar13 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar13) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar6 + 0x10);
                  bVar13 = iVar4 == 0;
                  if (bVar13) {
                    *(int *)(lVar6 + 0x10) = iVar10;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar13) {
                    iVar4 = iVar10;
                  }
                }
                *(int *)(plVar12 + 0x25) = iVar4;
                *(undefined8 *)((longlong)plVar12 + 0x11c) =
                     *(undefined8 *)((longlong)plVar12 + 0x124);
                plVar11 = plVar7;
              }
              lVar6 = (**(code **)(*plVar11 + 0x9f8))(plVar11);
              if (lVar6 == 0) {
LAB_14017112c:
                *(undefined4 *)((longlong)plVar12 + 300) = 0;
                iVar4 = 0;
              }
              else {
                lVar9 = FUN_14098e79e();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_14017112c;
                uVar2 = *(uint *)(lVar6 + 0xc);
                *(uint *)((longlong)plVar12 + 300) = uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar6 = 0;
                }
                iVar4 = *(int *)(lVar6 + 0x10);
                if (*(int *)(lVar6 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar13 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar13) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar6 + 0x10);
                  bVar13 = iVar4 == 0;
                  if (bVar13) {
                    *(int *)(lVar6 + 0x10) = iVar10;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (bVar13) {
                    iVar4 = iVar10;
                  }
                }
              }
              *(int *)(plVar12 + 0x26) = iVar4;
              plVar7 = (longlong *)FUN_14048bbc8(plVar11 + 0xeb);
              plVar11 = (longlong *)FUN_14048bbc8(plVar11 + 0xeb);
              if ((plVar11 == (longlong *)0x0) ||
                 (lVar6 = (**(code **)(*plVar11 + 0xa00))(plVar11), lVar6 == 0)) {
                plVar11 = (longlong *)0x0;
              }
              if (plVar7 != (longlong *)0x0) {
                do {
                  if ((char)plVar7[0x11c] == '\x01') {
                    local_70 = DAT_14cb7c588;
                    FUN_140bfca4e(plVar7 + 0x101,&DAT_14cb7bde0,&local_70,0);
                  }
                  else {
                    local_70._0_5_ = (uint5)(uint)local_70;
                    FUN_14146fdb6(plVar7,&local_70);
                  }
                  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x9f8))(plVar7);
                } while ((plVar7 != plVar11) && (plVar7 != (longlong *)0x0));
              }
              goto LAB_140170ef6;
            }
          }
LAB_140170fc6:
          *param_2 = 0;
          param_2[1] = 0;
          goto LAB_140170ba2;
        }
        lVar8 = FUN_1414ccafc();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (((*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30 ||
             (lVar9 = FUN_1411604c4(lVar9), lVar9 == 0)) ||
            (cVar3 = FUN_140b04bf4(plVar12,lVar6,lVar9), cVar3 == '\0')))) goto LAB_140170fc6;
LAB_140170ef6:
        *(undefined1 *)(plVar12 + 0x11) = 1;
        FUN_145c4685a(plVar12);
        FUN_145c40fd6(plVar12);
        FUN_141527b8c(plVar12);
        FUN_1418d87b0(plVar12);
        iVar4 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar4 + 1U) {
          FUN_146620dea((longlong *)(param_1 + 0x38),iVar4);
        }
        lVar6 = *(longlong *)(param_1 + 0x38);
        *(longlong **)(lVar6 + (longlong)iVar4 * 0x10) = plVar12;
        *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plStack_78;
        if (plStack_78 == (longlong *)0x0) {
          local_88 = (longlong *)0x0;
          local_90 = plVar12;
LAB_140170fef:
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
          UNLOCK();
          local_90 = local_80;
          local_88 = plStack_78;
          if (plStack_78 == (longlong *)0x0) goto LAB_140170fef;
          LOCK();
          *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
          UNLOCK();
          plVar12 = plStack_78;
        }
        plVar11 = local_90;
        FUN_145c575c6(param_1 + 0x20,&local_90);
        *param_2 = plVar11;
        param_2[1] = plVar12;
        local_80 = (longlong *)0x0;
        plStack_78 = (longlong *)0x0;
      }
      else {
        *param_2 = 0;
        param_2[1] = 0;
      }
LAB_140170ba2:
      plVar12 = plStack_78;
      if (plStack_78 == (longlong *)0x0) {
LAB_140170bcb:
        if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
      LOCK();
      plVar11 = plStack_78 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 != 0) goto LAB_140170bcb;
      (**(code **)*plStack_78)(plStack_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_140170bcb;
      (**(code **)(*plVar12 + 0x10))(plVar12);
      goto LAB_140170c3b;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140170c3b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14017126a FUN_14017126a body=86 status=ok
// SIG undefined FUN_14017126a(void)

void FUN_14017126a(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401712af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1401712c0 FUN_1401712c0 body=55 status=ok
// SIG undefined FUN_1401712c0(void)

void FUN_1401712c0(longlong *param_1)

{
  FUN_1401712f8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401712f8 FUN_1401712f8 body=510 status=ok
// SIG undefined FUN_1401712f8(void)

void FUN_1401712f8(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140171445;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      puVar3 = *(undefined8 **)(*param_1 + 8 + (longlong)iVar5 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_140171445;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_140171445:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar6 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1401714f6 FUN_1401714f6 body=90 status=ok
// SIG undefined FUN_1401714f6(void)

longlong FUN_1401714f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_148871a72(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x18;
  FUN_140171550(lVar2,1);
  return lVar2;
}



// FUNCTION 140171550 FUN_140171550 body=22 status=ok
// SIG undefined FUN_140171550(void)

void FUN_140171550(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 140171566 FUN_140171566 body=76 status=ok
// SIG undefined FUN_140171566(void)

void FUN_140171566(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  FUN_14487da93(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    FUN_147426a90(param_1 + 0x30,0);
  }
  FUN_1401715b2(param_1,param_2);
  return;
}



// FUNCTION 1401715b2 FUN_1401715b2 body=118 status=ok
// SIG undefined FUN_1401715b2(void)

void FUN_1401715b2(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  cVar1 = *(char *)(param_2 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,1);
  }
  uVar3 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar3,0,uVar2,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}



// FUNCTION 140171630 FUN_140171630 body=549 status=ok
// SIG undefined FUN_140171630(void)

void FUN_140171630(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x20) < 2) goto LAB_140171653;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined4 *)(lVar7 + 0xc7c);
    uVar6 = *puVar3;
    pbVar4 = (byte *)(lVar7 + 0xc80);
    bVar5 = *pbVar4;
    if ((bVar5 & 1) != 0) {
      *pbVar4 = 0;
      *puVar3 = 0xffffffff;
    }
    plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b406d60;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    *(undefined4 *)((longlong)plVar8 + 0x3c) = 0x80;
    *(undefined4 *)(plVar8 + 8) = 0xffffffff;
    if (plVar8 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0x10;
      plVar9 = *(longlong **)(param_1 + 0x30);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
LAB_1401717e1:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (plVar8 != (longlong *)0x0) goto LAB_14017173d;
      }
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x28) = plVar8 + 2;
      plVar9 = *(longlong **)(param_1 + 0x30);
      if (plVar8 == plVar9) {
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x30) = plVar8;
        if (plVar9 != (longlong *)0x0) goto LAB_1401717e1;
      }
LAB_14017173d:
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if ((bVar5 & 1) != 0) {
      *puVar3 = uVar6;
      *pbVar4 = 1;
    }
  }
  FUN_140171a5c(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  local_5c = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      local_58 = (longlong)local_5c * 0x60 + *(longlong *)(param_1 + 0x18) + 8;
      local_50 = &local_5c;
      FUN_140171856(*(undefined8 *)(param_1 + 0x28),local_44,&local_58,0);
      local_5c = local_5c + 1;
    } while (local_5c < *(int *)(param_1 + 0x20));
  }
LAB_140171653:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140171856 FUN_140171856 body=356 status=ok
// SIG undefined FUN_140171856(void)

undefined4 *
FUN_140171856(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14487db2c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1401719bc(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14487ddf8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401719bc FUN_1401719bc body=159 status=ok
// SIG undefined FUN_1401719bc(void)

void FUN_1401719bc(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_140c0518a(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140171a25;
    }
  }
  uVar2 = 0;
LAB_140171a25:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140171a5c FUN_140171a5c body=117 status=ok
// SIG undefined FUN_140171a5c(void)

void FUN_140171a5c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((iVar3 <= *(int *)(param_1 + 0x48) || (int)param_2 < 1) && *(int *)(param_1 + 0x48) <= iVar3)
  {
    FUN_140171c48(param_1);
    FUN_1401ad1b4(param_1,param_2);
    return;
  }
  FUN_1401ad1b4(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14487ddf8(param_1);
  return;
}



// FUNCTION 140171ad2 FUN_140171ad2 body=373 status=ok
// SIG undefined FUN_140171ad2(void)

void FUN_140171ad2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140171b5b;
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
LAB_140171b5b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 140171c48 FUN_140171c48 body=325 status=ok
// SIG undefined FUN_140171c48(void)

void FUN_140171c48(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 140171d94 FUN_140171d94 body=57 status=ok
// SIG undefined FUN_140171d94(void)

void FUN_140171d94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a630 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a630 = FUN_140002ddd(FUN_1464c9e7c,uVar1,L"GbxBodyNodeState_GbxAudio");
  }
  return;
}



// FUNCTION 140171dce FUN_140171dce body=43 status=ok
// SIG undefined FUN_140171dce(void)

void FUN_140171dce(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = param_2 + iVar1 + iVar1;
    if ((uint)(*(int *)(param_1 + 0x5c) - iVar1) < (uint)(param_2 + iVar1)) {
      FUN_140171dfa(param_1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 140171dfa FUN_140171dfa body=274 status=ok
// SIG undefined FUN_140171dfa(void)

void FUN_140171dfa(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x390;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x390)) {
      uVar5 = uVar4 / 0x390 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x390,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140171f20 FUN_140171f20 body=211 status=ok
// SIG undefined FUN_140171f20(void)

int FUN_140171f20(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x50 + (longlong)iVar1 * 0x60)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x60);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140171ff4 FUN_140171ff4 body=65 status=ok
// SIG undefined FUN_140171ff4(void)

void FUN_140171ff4(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xd0))();
  if (lVar1 != 0) {
    FUN_140172048(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 140172048 FUN_140172048 body=563 status=ok
// SIG undefined FUN_140172048(void)

void FUN_140172048(longlong *param_1,longlong *param_2,float param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x18))();
  iVar2 = (int)plVar3[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)plVar3[4];
    if ((uint *)plVar3[4] == (uint *)0x0) {
      puVar7 = (uint *)(plVar3 + 2);
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *plVar3;
      lVar8 = (longlong)iVar9 * 0x50;
      fVar15 = *(float *)(lVar11 + 0x1c + lVar8);
      if ((*(longlong *)(lVar11 + lVar8) == *(longlong *)(*param_2 + 0x268)) &&
         (*(int *)(lVar11 + 8 + lVar8) == *(int *)(*param_2 + 0x270))) {
        lVar11 = lVar11 + lVar8;
        if (fVar15 <= 0.0) {
          *(undefined4 *)(lVar11 + 0x24) = 0;
        }
        else {
          fVar16 = *(float *)(lVar11 + 0x20);
          *(float *)(lVar11 + 0x24) = fVar16;
          if ((*(byte *)(*param_2 + 0x18) & 8) == 0) {
            fVar16 = fVar16 * (fVar15 / *(float *)(lVar11 + 0x18));
            *(float *)(lVar11 + 0x24) = fVar16;
          }
          *(float *)(lVar11 + 0x24) =
               *(float *)(param_2 + 2) * *(float *)(param_2 + 3) *
               *(float *)((longlong)param_2 + 0x1c) * fVar16;
          fVar15 = fVar15 - param_3;
          *(float *)(lVar11 + 0x1c) = fVar15;
        }
      }
      if (fVar15 <= 0.0) {
        FUN_1456d2ba2(plVar3);
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)plVar3[4];
      if ((uint *)plVar3[4] == (uint *)0x0) {
        puVar7 = (uint *)(plVar3 + 2);
      }
      iVar2 = (int)plVar3[5];
      iVar9 = (int)uVar13;
      lVar11 = (longlong)iVar9;
      uVar4 = puVar7[lVar11] & uVar12;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar5 <= iVar9) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) {
            return;
          }
        }
        uVar13 = (ulonglong)(iVar9 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar2);
  }
  return;
}



// FUNCTION 14017227c FUN_14017227c body=44 status=ok
// SIG undefined FUN_14017227c(void)

void FUN_14017227c(longlong param_1)

{
  FUN_1401c3ca6();
  if (*(char *)(param_1 + 0x178) == '\x01') {
    FUN_1401722a8(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1401722a8 FUN_1401722a8 body=1084 status=ok
// SIG undefined FUN_1401722a8(void)

void FUN_1401722a8(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined4 local_290;
  undefined1 local_288;
  undefined1 local_280 [4];
  undefined4 local_27c;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  undefined4 local_1dc;
  byte local_1d3;
  undefined4 local_1b0;
  longlong *local_180;
  undefined4 *local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb77e30) {
    FUN_144b3d300(&DAT_14cb77e30);
    if (DAT_14cb77e30 == -1) {
      FUN_1446ddc76(&DAT_14cb77e28,"RadiateDamageGround",1);
      _Init_thread_footer(&DAT_14cb77e30);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  local_100 = lVar4;
  if (plVar1 == (longlong *)0x0) goto LAB_1401725e1;
  lVar3 = FUN_1401726e6();
  if (((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar3 + 0x38)) || (lVar4 == 0)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_1401725e1;
  fVar7 = *(float *)(param_1 + 0x188);
  if ((*(longlong *)(param_1 + 0x110) != 0) && (*(char *)(param_1 + 0x17a) == '\x01')) {
    FUN_14487e4ca();
    fVar7 = (float)((double)fVar7 + local_258);
  }
  lVar4 = plVar1[0x39];
  if (lVar4 == 0) {
    local_108 = DAT_14c8464f0;
    local_118 = DAT_14c8464e0;
    uStack_110 = DAT_14c8464e8;
    uVar5 = SUB84(DAT_14c8464f0,0);
    uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    local_118 = *(undefined8 *)(lVar4 + 0x260);
    uStack_110 = *(undefined8 *)(lVar4 + 0x268);
    local_108 = *(double *)(lVar4 + 0x270);
    uVar5 = SUB84(local_108,0);
    uVar6 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  local_128 = local_108;
  local_138 = local_118;
  uStack_130 = uStack_110;
  local_158 = local_118;
  uStack_150 = uStack_110;
  local_148 = local_108 -
              (double)(*(float *)(param_1 + 0x180 + ((ulonglong)param_2 & 0xff) * 4) + fVar7);
  local_170 = &local_c0;
  local_9c = 0;
  local_98 = 0x101;
  local_70 = 0;
  local_68 = 0x800000000;
  local_50 = 0;
  local_44 = 4;
  local_b0 = 0;
  local_a4 = 0;
  local_c0 = DAT_14cb77e28;
  local_af = 1;
  local_ad = 0;
  local_a0 = 0;
  local_ac = 0;
  local_aa = 0;
  local_60 = *(undefined4 *)((longlong)plVar1 + 0xc);
  local_48 = 1;
  local_b8 = plVar1[3];
  local_a9 = 0x101;
  local_178 = &local_160;
  local_15c = 0;
  local_160 = 3;
  local_180 = &local_100;
  local_168 = param_1;
  local_108 = (double)*(float *)(param_1 + 0x17c) + (double)CONCAT44(uVar6,uVar5);
  memset(local_280,0,0x100);
  local_1b0 = 0xffffffff;
  local_27c = 0x3f800000;
  local_1dc = 0xffffffff;
  cVar2 = FUN_1401727cc(&local_180,local_280,&local_118,&local_158);
  if (cVar2 == '\0') {
LAB_140172612:
    (**(code **)(*plVar1 + 0x5c8))(plVar1,0);
  }
  else {
    if ((local_1d3 & 2) != 0) {
      FUN_1401727cc(&local_180,local_280,&local_138,&local_158);
    }
    if ((local_1d3 & 2) != 0) goto LAB_140172612;
    plVar1 = (longlong *)plVar1[0x39];
    if (plVar1 != (longlong *)0x0) {
      local_c8 = ((double)fVar7 + local_260) - (double)plVar1[0x4e];
      local_d0 = local_268 - (double)plVar1[0x4d];
      local_d8 = local_270 - (double)plVar1[0x4c];
      local_f8 = plVar1[0x48];
      lStack_f0 = plVar1[0x49];
      local_e8 = (undefined4)plVar1[0x4a];
      uStack_e4 = *(undefined4 *)((longlong)plVar1 + 0x254);
      uStack_e0 = (undefined4)plVar1[0x4b];
      uStack_dc = *(undefined4 *)((longlong)plVar1 + 0x25c);
      local_288 = 0;
      local_290 = 0;
      local_298 = 0;
      (**(code **)(*plVar1 + 0x510))(plVar1,&local_d8,&local_f8,0);
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_1401725e1:
  if ((local_40 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401726e6 FUN_1401726e6 body=228 status=ok
// SIG undefined FUN_1401726e6(void)

longlong FUN_1401726e6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6ee50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1457e2796;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1487a0ef3;
    local_40 = &LAB_14653e8eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"RadiateDamageAreaActor",&DAT_14cb6ee50,FUN_14653e8c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ee50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401727cc FUN_1401727cc body=487 status=ok
// SIG undefined FUN_1401727cc(void)

ulonglong FUN_1401727cc(undefined8 *param_1,void *param_2,undefined4 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = param_1[3];
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = param_1[1];
  local_b8 = param_1[2];
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_c8 = &local_58;
  local_48 = param_4[2];
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = *(undefined8 *)(param_3 + 4);
  local_a0 = &local_31;
  local_b0 = &DAT_14cad0f10;
  local_c0 = DAT_14cad0ec4;
  FUN_1401e2596(*(undefined8 *)*param_1,&local_98,&local_79);
  if ((longlong)(int)uStack_90 == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = local_98 + 0xb8;
    lVar8 = (longlong)(int)uStack_90 << 8;
    do {
      if (((((*(byte *)(lVar6 + -0xb) & 3) == 1) &&
           ((((lVar4 = FUN_14485cccc(lVar6), lVar4 == 0 || ((*(byte *)(lVar4 + 0x62) & 4) == 0)) &&
             (*(int *)(lVar6 + 0x24) != 0)) &&
            ((uVar1 = *(uint *)(lVar6 + 0x20), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))))
          && (plVar5 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar5 != (longlong *)0x0)) &&
         (((((int)plVar5[2] == *(int *)(lVar6 + 0x24) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)
            ) && ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 &&
                  (*(char *)((longlong)plVar5 + 0x2eb) == '\x01')))) &&
          ((lVar4 = (**(code **)(*plVar5 + 0x7b8))
                              (plVar5,*(undefined8 *)(lVar6 + 0x38),1,0xffffffff), lVar4 == 0 ||
           (*(char *)(lVar4 + 0x77) == '\x02')))))) {
        cVar3 = FUN_143d0f86a(uVar2,(void *)(lVar6 + -0xb8));
        if (cVar3 != '\0') {
          memcpy(param_2,(void *)(lVar6 + -0xb8),0x100);
          uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          goto LAB_140172966;
        }
      }
      lVar6 = lVar6 + 0x100;
      lVar8 = lVar8 + -0x100;
    } while (lVar8 != 0);
    uVar7 = 0;
  }
LAB_140172966:
  if (local_98 != 0) {
    FUN_1400020a8(local_98);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1401729b4 FUN_1401729b4 body=1917 status=ok
// SIG undefined FUN_1401729b4(void)

undefined1 (*) [16] FUN_1401729b4(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  longlong *plVar21;
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
  double dVar33;
  double dVar34;
  double local_c0;
  
  lVar3 = *(longlong *)(param_1 + 0x668);
  if (((((((*(byte *)(param_1 + 0x790) & 4) != 0) && (*(longlong *)(param_1 + 0x120) == 0)) &&
        (*(int *)(param_1 + 0x7b4) != 0)) &&
       (((uVar2 = *(uint *)(param_1 + 0x7b0), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar21 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar21 != (longlong *)0x0 &&
         (((int)plVar21[2] == *(int *)(param_1 + 0x7b4) &&
          ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))))))) && (lVar4 = *plVar21, lVar4 != 0)) &&
     ((*(byte *)(param_1 + 0x9e) & 0x10) == 0)) {
    *(undefined8 *)param_2[3] = *(undefined8 *)(lVar4 + 400);
    uVar15 = *(undefined8 *)(lVar4 + 0x160);
    uVar16 = *(undefined8 *)(lVar4 + 0x168);
    uVar17 = *(undefined8 *)(lVar4 + 0x170);
    uVar18 = *(undefined8 *)(lVar4 + 0x178);
    uVar19 = *(undefined8 *)(lVar4 + 0x188);
    *(undefined8 *)param_2[2] = *(undefined8 *)(lVar4 + 0x180);
    *(undefined8 *)(param_2[2] + 8) = uVar19;
    *(undefined8 *)param_2[1] = uVar17;
    *(undefined8 *)(param_2[1] + 8) = uVar18;
    *(undefined8 *)*param_2 = uVar15;
    *(undefined8 *)(*param_2 + 8) = uVar16;
    return param_2;
  }
  if (((*(byte *)(param_1 + 0x7cc) & 0x80) == 0) ||
     (plVar21 = *(longlong **)(param_1 + 0x8c0), plVar21 == (longlong *)0x0)) {
    if (*(char *)(param_1 + 0x860) == '\0') {
      if (*(char *)(param_1 + 0x898) == '\0') {
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 100) & 1) == 0)) {
          dVar26 = 1.0;
          dVar23 = 1.0;
          dVar9 = 1.0;
          local_c0 = 1.0;
          dVar1 = DAT_14c8464f0;
          dVar8 = DAT_14c8464e0;
          dVar11 = DAT_14c8464e8;
        }
        else {
          dVar8 = *(double *)(lVar3 + 0x410);
          dVar11 = *(double *)(lVar3 + 0x418);
          dVar1 = *(double *)(lVar3 + 0x420);
          dVar26 = *(double *)(lVar3 + 0x428);
          dVar23 = *(double *)(lVar3 + 0x430);
          dVar9 = *(double *)(lVar3 + 0x438);
          iVar20 = _finite(dVar8);
          if ((((iVar20 != 0) && (iVar20 = _finite(dVar11), iVar20 != 0)) &&
              (iVar20 = _finite(dVar1), iVar20 != 0)) &&
             ((iVar20 = _finite(dVar26), iVar20 != 0 && (iVar20 = _finite(dVar23), iVar20 != 0)))) {
            _finite(dVar9);
          }
          dVar9 = (dVar9 - dVar1) * 0.5;
          dVar23 = (dVar23 - dVar11) * 0.5;
          dVar26 = (dVar26 - dVar8) * 0.5;
          dVar1 = dVar1 + dVar9;
          dVar11 = dVar11 + dVar23;
          dVar8 = dVar8 + dVar26;
          local_c0 = SQRT(dVar9 * dVar9 + dVar26 * dVar26 + dVar23 * dVar23);
        }
      }
      else {
        iVar20 = _finite(*(double *)(param_1 + 0x868));
        if (((iVar20 != 0) && (iVar20 = _finite(*(double *)(param_1 + 0x870)), iVar20 != 0)) &&
           ((iVar20 = _finite(*(double *)(param_1 + 0x878)), iVar20 != 0 &&
            ((iVar20 = _finite(*(double *)(param_1 + 0x880)), iVar20 != 0 &&
             (iVar20 = _finite(*(double *)(param_1 + 0x888)), iVar20 != 0)))))) {
          _finite(*(double *)(param_1 + 0x890));
        }
        dVar9 = (*(double *)(param_1 + 0x890) - *(double *)(param_1 + 0x878)) * 0.5;
        dVar23 = (*(double *)(param_1 + 0x888) - *(double *)(param_1 + 0x870)) * 0.5;
        dVar26 = (*(double *)(param_1 + 0x880) - *(double *)(param_1 + 0x868)) * 0.5;
        local_c0 = SQRT(dVar9 * dVar9 + dVar26 * dVar26 + dVar23 * dVar23);
        dVar1 = *(double *)(param_1 + 0x878) + dVar9;
        dVar8 = *(double *)(param_1 + 0x868) + dVar26;
        dVar11 = *(double *)(param_1 + 0x870) + dVar23;
      }
    }
    else {
      iVar20 = _finite(*(double *)(param_1 + 0x830));
      if ((((iVar20 != 0) && (iVar20 = _finite(*(double *)(param_1 + 0x838)), iVar20 != 0)) &&
          (iVar20 = _finite(*(double *)(param_1 + 0x840)), iVar20 != 0)) &&
         ((iVar20 = _finite(*(double *)(param_1 + 0x848)), iVar20 != 0 &&
          (iVar20 = _finite(*(double *)(param_1 + 0x850)), iVar20 != 0)))) {
        _finite(*(double *)(param_1 + 0x858));
      }
      dVar8 = (*(double *)(param_1 + 0x858) - *(double *)(param_1 + 0x840)) * 0.5;
      dVar22 = (*(double *)(param_1 + 0x850) - *(double *)(param_1 + 0x838)) * 0.5;
      dVar11 = (*(double *)(param_1 + 0x848) - *(double *)(param_1 + 0x830)) * 0.5;
      local_c0 = (double)*(float *)(param_1 + 0x3ac);
      dVar26 = dVar11 * local_c0;
      dVar23 = dVar22 * local_c0;
      dVar9 = dVar8 * local_c0;
      local_c0 = SQRT(dVar8 * dVar8 + dVar11 * dVar11 + dVar22 * dVar22) * local_c0;
      dVar1 = *(double *)(param_1 + 0x840) + dVar8;
      dVar8 = *(double *)(param_1 + 0x830) + dVar11;
      dVar11 = *(double *)(param_1 + 0x838) + dVar22;
    }
    dVar33 = *param_3;
    dVar14 = param_3[1];
    dVar22 = param_3[2];
    dVar28 = param_3[8];
    dVar24 = param_3[9];
    dVar25 = param_3[10];
    dVar12 = dVar14 + dVar14;
    dVar31 = dVar22 + dVar22;
    dVar27 = dVar33 * (dVar33 + dVar33);
    dVar5 = (1.0 - (dVar22 * dVar31 + dVar14 * dVar12)) * dVar28;
    dVar6 = (1.0 - (dVar22 * dVar31 + dVar27)) * dVar24;
    dVar27 = (1.0 - (dVar27 + dVar14 * dVar12)) * dVar25;
    dVar22 = param_3[3];
    dVar32 = dVar31 * dVar22;
    dVar34 = (dVar33 + dVar33) * param_3[3];
    dVar22 = dVar12 * dVar22;
    dVar29 = (dVar12 * dVar33 + dVar32) * dVar28;
    dVar30 = (dVar31 * dVar14 + dVar34) * dVar24;
    dVar13 = (dVar22 + *param_3 * dVar31) * dVar25;
    dVar28 = (*param_3 * dVar31 - dVar22) * dVar28;
    dVar24 = (dVar12 * dVar33 - dVar32) * dVar24;
    dVar25 = (dVar31 * dVar14 - dVar34) * dVar25;
    dVar22 = ABS(dVar9 * dVar13) + ABS(dVar23 * dVar24) + ABS(dVar26 * dVar5);
    dVar12 = ABS(dVar9 * dVar25) + ABS(dVar23 * dVar6) + ABS(dVar26 * dVar29);
    dVar33 = ABS(dVar27 * dVar9) + ABS(dVar23 * dVar30) + ABS(dVar28 * dVar26);
    dVar23 = dVar13 * dVar13 + dVar24 * dVar24 + dVar5 * dVar5;
    dVar26 = dVar25 * dVar25 + dVar6 * dVar6 + dVar29 * dVar29;
    dVar9 = dVar27 * dVar27 + dVar30 * dVar30 + dVar28 * dVar28;
    if (dVar23 <= dVar26) {
      dVar23 = dVar26;
    }
    if (dVar23 <= dVar9) {
      dVar23 = dVar9;
    }
    dVar26 = param_3[4];
    dVar6 = dVar1 * dVar25 + dVar11 * dVar6 + dVar8 * dVar29 + param_3[5];
    dVar9 = param_3[6];
    if (dVar23 < 0.0) {
      dVar23 = sqrt(dVar23);
    }
    else {
      dVar23 = SQRT(dVar23);
    }
    dVar25 = SQRT(dVar12 * dVar12 + dVar33 * dVar33 + dVar22 * dVar22);
    dVar14 = local_c0 * dVar23;
    if (dVar25 <= local_c0 * dVar23) {
      dVar14 = dVar25;
    }
    auVar10._8_4_ = SUB84(dVar6,0);
    auVar10._0_8_ = dVar1 * dVar13 + dVar11 * dVar24 + dVar8 * dVar5 + dVar26;
    auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *param_2 = auVar10;
    *(double *)param_2[1] = dVar1 * dVar27 + dVar11 * dVar30 + dVar8 * dVar28 + dVar9;
    auVar7._8_4_ = SUB84(dVar12,0);
    auVar7._0_8_ = dVar22;
    auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(param_2[1] + 8) = auVar7;
    *(double *)(param_2[2] + 8) = dVar33;
    *(double *)param_2[3] = dVar14;
  }
  else {
    (**(code **)(*plVar21 + 0x528))(plVar21,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 140173132 FUN_140173132 body=7090 status=ok
// SIG undefined FUN_140173132(void)

double * FUN_140173132(longlong param_1,double *param_2,double *param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  double *pdVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined8 *puVar12;
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
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_318 [32];
  double *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  double dStack_258;
  double local_248 [12];
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if ((*(byte *)(param_1 + 0x8a1) & 6) == 0) {
    dVar23 = *(double *)(param_1 + 0xb28);
    uVar21 = (undefined4)*(undefined8 *)(param_1 + 0xb30);
    uVar22 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xb30) >> 0x20);
    dVar15 = *(double *)(param_1 + 0xb38);
    if ((((*(int *)(param_1 + 0x66c) != 0) && (uVar1 = *(uint *)(param_1 + 0x668), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x66c))) &&
        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar8;
      }
      else {
        lVar7 = 0;
      }
      if (*(longlong *)(lVar7 + 0x658) == 0) {
        if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar7 + 0x660) != 0)) goto LAB_140174cdb;
        if (*(longlong *)(lVar7 + 0x660) != 0) goto LAB_14017351b;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_140174cdb:
          FUN_1456cec3c();
        }
LAB_14017351b:
        if ((*(byte *)(lVar7 + 0x89f) & 4) != 0) {
          if (DAT_14cad2858 == 0) {
            local_2c0 = local_168;
            local_168 = (undefined1  [8])FUN_144a7958c;
            local_2b0 = FUN_14081d0ea;
            local_2b8 = &LAB_146395584;
            local_2c8 = &LAB_147a0ba80;
            local_2d0 = &LAB_14575ccce;
            local_2d8 = L"Engine";
            local_2e0 = 0x40000000000;
            local_2e8 = 0x10000004;
            local_2f0 = 0x10;
            local_2f8 = (double *)CONCAT44(local_2f8._4_4_,0x1180);
            param_4 = FUN_1463bcebe;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
            dVar23 = *(double *)(lVar7 + 0xb28);
            uVar21 = (undefined4)*(undefined8 *)(lVar7 + 0xb30);
            uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0xb30) >> 0x20);
            dVar15 = *(double *)(lVar7 + 0xb38);
          }
        }
      }
    }
    lVar7 = DAT_14cad28c8;
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar6 = 0;
    }
    else if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    iVar2 = *(int *)(lVar7 + uVar6 * 4);
    pdVar9 = (double *)&DAT_14c846480;
    if (iVar2 == 0) {
      pdVar9 = param_3;
    }
    local_2f8 = local_248;
    pdVar11 = local_2f8;
    for (lVar7 = 0xc; auVar3 = _local_168, lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar11 = *pdVar9;
      pdVar9 = pdVar9 + 1;
      pdVar11 = pdVar11 + 1;
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_1 + 0xc61)) &
            0xffffffffffffff10;
    local_168._4_4_ = (float)(double)CONCAT44(uVar22,uVar21);
    local_168._0_4_ = (float)dVar23;
    dStack_160._4_4_ = auVar3._12_4_;
    dStack_160._0_4_ = (float)dVar15;
    FUN_14087b246(param_1,&local_288,local_168,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 4));
    if ((*(byte *)(param_1 + 0x89e) & 0x20) != 0) {
      dVar23 = *(double *)(param_1 + 0x270);
      dVar15 = *(double *)(param_1 + 0x260);
      dVar19 = *(double *)(param_1 + 0x268);
      if (iVar2 == 0) {
        dVar18 = local_288 + dStack_270;
        dVar34 = dStack_280 + uStack_268;
        dVar24 = local_278 + uStack_260;
        dStack_270 = local_288 - dStack_270;
        uStack_268 = dStack_280 - uStack_268;
        uStack_260 = local_278 - uStack_260;
        dVar16 = dStack_270;
        if (dVar18 <= dStack_270) {
          dVar16 = dVar18;
        }
        dVar14 = uStack_268;
        if (dVar34 <= uStack_268) {
          dVar14 = dVar34;
        }
        dVar33 = uStack_260;
        if (dVar24 <= uStack_260) {
          dVar33 = dVar24;
        }
        if (dStack_270 <= dVar18) {
          dStack_270 = dVar18;
        }
        if (uStack_268 <= dVar34) {
          uStack_268 = dVar34;
        }
        if (uStack_260 <= dVar24) {
          uStack_260 = dVar24;
        }
        dVar34 = dVar23 + -1.0;
        dVar24 = dVar19 + -1.0;
        dVar18 = dVar15 + -1.0;
        if (dVar18 <= dVar16) {
          dVar16 = dVar18;
        }
        if (dVar24 <= dVar14) {
          dVar14 = dVar24;
        }
        if (dVar34 <= dVar33) {
          dVar33 = dVar34;
        }
        if (dStack_270 <= dVar18) {
          dStack_270 = dVar18;
        }
        if (uStack_268 <= dVar24) {
          uStack_268 = dVar24;
        }
        if (uStack_260 <= dVar34) {
          uStack_260 = dVar34;
        }
        dVar18 = dVar23 + 1.0;
        dVar34 = dVar19 + 1.0;
        dVar24 = dVar15 + 1.0;
        if (dVar24 <= dVar16) {
          dVar16 = dVar24;
        }
        if (dVar34 <= dVar14) {
          dVar14 = dVar34;
        }
        if (dVar18 <= dVar33) {
          dVar33 = dVar18;
        }
        if (dStack_270 <= dVar24) {
          dStack_270 = dVar24;
        }
        if (uStack_268 <= dVar34) {
          uStack_268 = dVar34;
        }
        if (uStack_260 <= dVar18) {
          uStack_260 = dVar18;
        }
        uStack_260 = (uStack_260 - dVar33) * 0.5;
        uStack_268 = (uStack_268 - dVar14) * 0.5;
        dStack_270 = (dStack_270 - dVar16) * 0.5;
        dVar33 = dVar33 + uStack_260;
        dVar14 = dVar14 + uStack_268;
        dVar16 = dVar16 + dStack_270;
        dVar24 = SQRT((local_278 - dVar33) * (local_278 - dVar33) +
                      (local_288 - dVar16) * (local_288 - dVar16) +
                      (dStack_280 - dVar14) * (dStack_280 - dVar14)) + dStack_258;
        dStack_258 = SQRT(uStack_260 * uStack_260 +
                          dStack_270 * dStack_270 + uStack_268 * uStack_268);
        dVar23 = SQRT((dVar23 - dVar33) * (dVar23 - dVar33) +
                      (dVar15 - dVar16) * (dVar15 - dVar16) + (dVar19 - dVar14) * (dVar19 - dVar14))
                 + 1.0;
        if (dVar24 <= dVar23) {
          dVar24 = dVar23;
        }
        local_288 = dVar16;
        dStack_280 = dVar14;
        local_278 = dVar33;
        if (dVar24 <= dStack_258) {
          dStack_258 = dVar24;
        }
      }
      else {
        dVar34 = *param_3;
        dVar14 = param_3[1];
        dVar33 = param_3[2];
        dVar16 = param_3[8];
        dVar13 = param_3[9];
        dVar26 = param_3[10];
        dVar18 = dVar14 + dVar14;
        dVar29 = dVar33 + dVar33;
        dVar24 = dVar34 * (dVar34 + dVar34);
        dVar27 = (1.0 - (dVar33 * dVar29 + dVar14 * dVar18)) * dVar16;
        dVar17 = (1.0 - (dVar33 * dVar29 + dVar24)) * dVar13;
        dVar20 = (1.0 - (dVar24 + dVar14 * dVar18)) * dVar26;
        dVar24 = param_3[3];
        dVar33 = dVar29 * dVar24;
        dVar35 = (dVar34 + dVar34) * param_3[3];
        dVar24 = dVar18 * dVar24;
        dVar25 = (dVar18 * dVar34 + dVar33) * dVar16;
        dVar28 = (dVar29 * dVar14 + dVar35) * dVar13;
        dVar30 = (dVar24 + *param_3 * dVar29) * dVar26;
        dVar16 = (*param_3 * dVar29 - dVar24) * dVar16;
        dVar13 = (dVar18 * dVar34 - dVar33) * dVar13;
        dVar26 = (dVar29 * dVar14 - dVar35) * dVar26;
        dVar18 = ABS(dVar30 * uStack_260) + ABS(dVar13 * uStack_268) + ABS(dVar27 * dStack_270);
        dVar24 = ABS(dVar26 * uStack_260) + ABS(dVar17 * uStack_268) + ABS(dVar25 * dStack_270);
        dVar34 = ABS(dVar20 * uStack_260) + ABS(dVar28 * uStack_268) + ABS(dVar16 * dStack_270);
        dVar14 = dVar30 * dVar30 + dVar13 * dVar13 + dVar27 * dVar27;
        dVar33 = dVar26 * dVar26 + dVar17 * dVar17 + dVar25 * dVar25;
        dVar29 = dVar20 * dVar20 + dVar28 * dVar28 + dVar16 * dVar16;
        if (dVar14 <= dVar33) {
          dVar14 = dVar33;
        }
        if (dVar14 <= dVar29) {
          dVar14 = dVar29;
        }
        dVar33 = local_278 * dVar30 + dStack_280 * dVar13 + local_288 * dVar27 + param_3[4];
        dVar13 = local_278 * dVar26 + dStack_280 * dVar17 + local_288 * dVar25 + param_3[5];
        dVar16 = local_278 * dVar20 + dStack_280 * dVar28 + local_288 * dVar16 + param_3[6];
        local_2a0 = dVar15;
        local_298 = dVar19;
        local_290 = dVar23;
        if (dVar14 < 0.0) {
          dVar14 = sqrt(dVar14);
        }
        else {
          dVar14 = SQRT(dVar14);
        }
        dVar15 = SQRT(dVar24 * dVar24 + dVar34 * dVar34 + dVar18 * dVar18);
        dVar23 = dStack_258 * dVar14;
        if (dVar15 <= dStack_258 * dVar14) {
          dVar23 = dVar15;
        }
        dVar15 = dVar33 + dVar18;
        dVar18 = dVar33 - dVar18;
        dVar19 = dVar13 + dVar24;
        dVar14 = dVar16 + dVar34;
        dVar24 = dVar13 - dVar24;
        dVar34 = dVar16 - dVar34;
        local_288 = dVar18;
        if (dVar15 <= dVar18) {
          local_288 = dVar15;
        }
        dStack_280 = dVar24;
        if (dVar19 <= dVar24) {
          dStack_280 = dVar19;
        }
        if (dVar18 <= dVar15) {
          dVar18 = dVar15;
        }
        local_278 = dVar34;
        if (dVar14 <= dVar34) {
          local_278 = dVar14;
        }
        if (dVar24 <= dVar19) {
          dVar24 = dVar19;
        }
        if (dVar34 <= dVar14) {
          dVar34 = dVar14;
        }
        dVar19 = local_290 + -1.0;
        dVar14 = local_298 + -1.0;
        dVar15 = local_2a0 + -1.0;
        if (dVar15 <= local_288) {
          local_288 = dVar15;
        }
        if (dVar18 <= dVar15) {
          dVar18 = dVar15;
        }
        if (dVar14 <= dStack_280) {
          dStack_280 = dVar14;
        }
        if (dVar19 <= local_278) {
          local_278 = dVar19;
        }
        if (dVar24 <= dVar14) {
          dVar24 = dVar14;
        }
        if (dVar34 <= dVar19) {
          dVar34 = dVar19;
        }
        dVar15 = local_2a0 + 1.0;
        if (dVar15 <= local_288) {
          local_288 = dVar15;
        }
        if (dVar18 <= dVar15) {
          dVar18 = dVar15;
        }
        dVar15 = local_298 + 1.0;
        if (dVar15 <= dStack_280) {
          dStack_280 = dVar15;
        }
        if (dVar24 <= dVar15) {
          dVar24 = dVar15;
        }
        dVar15 = local_290 + 1.0;
        if (dVar15 <= local_278) {
          local_278 = dVar15;
        }
        if (dVar34 <= dVar15) {
          dVar34 = dVar15;
        }
        uStack_260 = (dVar34 - local_278) * 0.5;
        uStack_268 = (dVar24 - dStack_280) * 0.5;
        dStack_270 = (dVar18 - local_288) * 0.5;
        local_278 = local_278 + uStack_260;
        dStack_280 = dStack_280 + uStack_268;
        local_288 = local_288 + dStack_270;
        dStack_258 = SQRT(uStack_260 * uStack_260 +
                          dStack_270 * dStack_270 + uStack_268 * uStack_268);
        dVar15 = SQRT((local_290 - local_278) * (local_290 - local_278) +
                      (local_2a0 - local_288) * (local_2a0 - local_288) +
                      (local_298 - dStack_280) * (local_298 - dStack_280)) + 1.0;
        dVar23 = SQRT((dVar16 - local_278) * (dVar16 - local_278) +
                      (dVar33 - local_288) * (dVar33 - local_288) +
                      (dVar13 - dStack_280) * (dVar13 - dStack_280)) + dVar23;
        if (dVar23 <= dVar15) {
          dVar23 = dVar15;
        }
        if (dVar23 <= dStack_258) {
          dStack_258 = dVar23;
        }
        dVar19 = *param_3;
        dVar24 = param_3[1];
        dVar15 = param_3[2];
        local_158 = param_3[8];
        local_148 = param_3[9];
        dVar16 = param_3[10];
        dVar18 = dVar24 + dVar24;
        dVar34 = dVar15 + dVar15;
        dVar23 = dVar19 * (dVar19 + dVar19);
        local_168 = (undefined1  [8])((1.0 - (dVar15 * dVar34 + dVar24 * dVar18)) * local_158);
        dStack_140 = (1.0 - (dVar15 * dVar34 + dVar23)) * local_148;
        local_118 = (1.0 - (dVar23 + dVar24 * dVar18)) * dVar16;
        dVar23 = param_3[3];
        dVar14 = dVar34 * dVar23;
        dVar33 = (dVar19 + dVar19) * param_3[3];
        dVar23 = dVar18 * dVar23;
        dStack_160 = (dVar18 * dVar19 + dVar14) * local_158;
        local_138 = (dVar34 * dVar24 + dVar33) * local_148;
        dVar15 = (dVar23 + *param_3 * dVar34) * dVar16;
        local_158 = (*param_3 * dVar34 - dVar23) * local_158;
        local_148 = (dVar18 * dVar19 - dVar14) * local_148;
        dVar16 = (dVar34 * dVar24 - dVar33) * dVar16;
        uStack_150 = 0;
        uStack_130 = 0;
        local_128._8_4_ = SUB84(dVar16,0);
        local_128._0_8_ = dVar15;
        local_128._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        uStack_110 = 0;
        local_108 = param_3[4];
        dStack_100 = param_3[5];
        local_f8 = param_3[6];
        uStack_f0 = 0x3ff0000000000000;
        if ((((9.99999993922529e-09 < ABS((double)local_168)) ||
             (9.99999993922529e-09 < ABS(dStack_160))) ||
            ((9.99999993922529e-09 < ABS(local_158) ||
             ((9.99999993922529e-09 < ABS(local_148) || (9.99999993922529e-09 < ABS(dStack_140))))))
            ) || ((9.99999993922529e-09 < ABS(local_138) ||
                  (((9.99999993922529e-09 < ABS(dVar15) || (9.99999993922529e-09 < ABS(dVar16))) ||
                   (9.99999993922529e-09 < ABS(local_118))))))) {
          FUN_14007522e(local_1e8,local_168);
        }
        else {
          puVar10 = &DAT_14c846400;
          puVar12 = (undefined8 *)local_1e8;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        dVar15 = dStack_258;
        dVar18 = local_278 * (double)local_1a8._0_8_ +
                 dStack_280 * local_1c8 + local_288 * (double)local_1e8._0_8_ + local_188;
        dVar34 = local_278 * (double)local_1a8._8_8_ +
                 dStack_280 * dStack_1c0 + local_288 * (double)local_1e8._8_8_ + dStack_180;
        dVar33 = ABS(uStack_260 * (double)local_1a8._0_8_) +
                 ABS(uStack_268 * local_1c8) + ABS(dStack_270 * (double)local_1e8._0_8_);
        dVar13 = ABS(uStack_260 * (double)local_1a8._8_8_) +
                 ABS(uStack_268 * dStack_1c0) + ABS(dStack_270 * (double)local_1e8._8_8_);
        dVar14 = ABS(uStack_260 * local_198) +
                 ABS(uStack_268 * local_1b8) + ABS(dStack_270 * local_1d8);
        dVar23 = local_278 * local_198 + local_288 * local_1d8 + dStack_280 * local_1b8 + local_178;
        dVar19 = (double)local_1a8._0_8_ * (double)local_1a8._0_8_ +
                 local_1c8 * local_1c8 + (double)local_1e8._0_8_ * (double)local_1e8._0_8_;
        dVar24 = (double)local_1a8._8_8_ * (double)local_1a8._8_8_ +
                 dStack_1c0 * dStack_1c0 + (double)local_1e8._8_8_ * (double)local_1e8._8_8_;
        dVar16 = local_198 * local_198 + local_1d8 * local_1d8 + local_1b8 * local_1b8;
        if (dVar19 <= dVar24) {
          dVar19 = dVar24;
        }
        if (dVar19 <= dVar16) {
          dVar19 = dVar16;
        }
        if (dVar19 < 0.0) {
          dVar19 = sqrt(dVar19);
        }
        else {
          dVar19 = SQRT(dVar19);
        }
        dVar24 = SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar33 * dVar33);
        local_288 = dVar18;
        dStack_280 = dVar34;
        local_278 = dVar23;
        dStack_270 = dVar33;
        uStack_268 = dVar13;
        uStack_260 = dVar14;
        dStack_258 = dVar15 * dVar19;
        if (dVar24 <= dVar15 * dVar19) {
          dStack_258 = dVar24;
        }
      }
    }
    FUN_1436b73e0(param_1,&local_288,local_248);
    *(double *)(param_1 + 0x920) = dStack_258;
    *(double *)(param_1 + 0x910) = uStack_268;
    *(double *)(param_1 + 0x918) = uStack_260;
    *(double *)(param_1 + 0x900) = local_278;
    *(double *)(param_1 + 0x908) = dStack_270;
    *(double *)(param_1 + 0x8f0) = local_288;
    *(double *)(param_1 + 0x8f8) = dStack_280;
    *(byte *)(param_1 + 0x8a1) = ((iVar2 == 0) * '\x02' | *(byte *)(param_1 + 0x8a1) & 0xf9) + 2;
    if (iVar2 == 0) {
      dVar14 = *param_3;
      dVar33 = param_3[1];
      dVar19 = param_3[2];
      local_158 = param_3[8];
      local_148 = param_3[9];
      dVar13 = param_3[10];
      dVar26 = dVar33 + dVar33;
      dVar16 = dVar19 + dVar19;
      dVar23 = dVar14 * (dVar14 + dVar14);
      dVar15 = (1.0 - (dVar19 * dVar16 + dVar33 * dVar26)) * local_158;
      dStack_140 = (1.0 - (dVar19 * dVar16 + dVar23)) * local_148;
      local_118 = (1.0 - (dVar23 + dVar33 * dVar26)) * dVar13;
      dVar23 = param_3[3];
      dVar18 = dVar16 * dVar23;
      dVar34 = (dVar14 + dVar14) * param_3[3];
      dVar23 = dVar26 * dVar23;
      dVar24 = (dVar26 * dVar14 + dVar18) * local_158;
      local_138 = (dVar16 * dVar33 + dVar34) * local_148;
      dVar19 = (dVar23 + *param_3 * dVar16) * dVar13;
      local_158 = (*param_3 * dVar16 - dVar23) * local_158;
      local_148 = (dVar26 * dVar14 - dVar18) * local_148;
      dVar13 = (dVar16 * dVar33 - dVar34) * dVar13;
      dStack_160._0_4_ = SUB84(dVar24,0);
      local_168 = (undefined1  [8])dVar15;
      dStack_160._4_4_ = (int)((ulonglong)dVar24 >> 0x20);
      uStack_150 = 0;
      uStack_130 = 0;
      local_128._8_4_ = SUB84(dVar13,0);
      local_128._0_8_ = dVar19;
      local_128._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      uStack_110 = 0;
      local_108 = param_3[4];
      dStack_100 = param_3[5];
      local_f8 = param_3[6];
      uStack_f0 = 0x3ff0000000000000;
      if (((9.99999993922529e-09 < ABS(dVar15)) || (9.99999993922529e-09 < ABS(dVar24))) ||
         ((((9.99999993922529e-09 < ABS(local_158) ||
            ((9.99999993922529e-09 < ABS(local_148) || (9.99999993922529e-09 < ABS(dStack_140)))))
           || (9.99999993922529e-09 < ABS(local_138))) ||
          (((9.99999993922529e-09 < ABS(dVar19) || (9.99999993922529e-09 < ABS(dVar13))) ||
           (9.99999993922529e-09 < ABS(local_118))))))) {
        FUN_14007522e(local_1e8,local_168);
      }
      else {
        puVar10 = &DAT_14c846400;
        puVar12 = (undefined8 *)local_1e8;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      puVar10 = (undefined8 *)local_1e8;
      puVar12 = (undefined8 *)(param_1 + 0x930);
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      param_2[6] = dStack_258;
      *(undefined4 *)(param_2 + 4) = (undefined4)uStack_268;
      *(undefined4 *)((longlong)param_2 + 0x24) = uStack_268._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)uStack_260;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_260._4_4_;
      param_2[2] = local_278;
      param_2[3] = dStack_270;
      *param_2 = local_288;
      param_2[1] = dStack_280;
      goto LAB_140174a65;
    }
    *(undefined8 *)(param_1 + 0x930) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x938) = 0;
    *(undefined8 *)(param_1 + 0x940) = 0;
    *(undefined8 *)(param_1 + 0x948) = 0;
    *(undefined8 *)(param_1 + 0x950) = 0;
    *(undefined8 *)(param_1 + 0x958) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x960) = 0;
    *(undefined8 *)(param_1 + 0x968) = 0;
    *(undefined8 *)(param_1 + 0x970) = 0;
    *(undefined8 *)(param_1 + 0x978) = 0;
    *(undefined8 *)(param_1 + 0x980) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x988) = 0;
    *(undefined8 *)(param_1 + 0x990) = 0;
    *(undefined8 *)(param_1 + 0x998) = 0;
    *(undefined8 *)(param_1 + 0x9a0) = 0;
    *(undefined8 *)(param_1 + 0x9a8) = 0x3ff0000000000000;
    dVar33 = *param_3;
    dVar13 = param_3[1];
    dVar19 = param_3[2];
    dVar24 = param_3[8];
    dVar26 = param_3[9];
    dVar20 = param_3[10];
    dVar25 = dVar13 + dVar13;
    dVar16 = dVar19 + dVar19;
    dVar23 = dVar33 * (dVar33 + dVar33);
    dVar15 = (1.0 - (dVar19 * dVar16 + dVar13 * dVar25)) * dVar24;
    dVar19 = (1.0 - (dVar19 * dVar16 + dVar23)) * dVar26;
    dVar29 = (1.0 - (dVar23 + dVar13 * dVar25)) * dVar20;
    dVar23 = param_3[3];
    dVar18 = dVar16 * dVar23;
    dVar34 = (dVar33 + dVar33) * param_3[3];
    dVar23 = dVar25 * dVar23;
    dVar30 = (dVar25 * dVar33 + dVar18) * dVar24;
    dVar35 = (dVar16 * dVar13 + dVar34) * dVar26;
    dVar14 = (dVar23 + *param_3 * dVar16) * dVar20;
    dVar24 = (*param_3 * dVar16 - dVar23) * dVar24;
    dVar26 = (dVar25 * dVar33 - dVar18) * dVar26;
    dVar20 = (dVar16 * dVar13 - dVar34) * dVar20;
    dVar25 = local_288 * dVar15;
    dVar27 = local_288 * dVar30;
    dVar34 = dStack_280 * dVar26;
    dVar33 = dStack_280 * dVar19;
    dVar28 = local_278 * dVar14;
    dVar17 = local_278 * dVar20;
    dVar31 = ABS(dVar14 * uStack_260) + ABS(dVar26 * uStack_268) + ABS(dVar15 * dStack_270);
    dVar32 = ABS(dVar20 * uStack_260) + ABS(dVar19 * uStack_268) + ABS(dVar30 * dStack_270);
    dVar13 = ABS(dVar29 * uStack_260) + ABS(dVar35 * uStack_268) + ABS(dVar24 * dStack_270);
    dVar23 = local_288 * dVar24;
    dVar18 = dStack_280 * dVar35;
    dVar16 = local_278 * dVar29;
    dVar15 = dVar14 * dVar14 + dVar26 * dVar26 + dVar15 * dVar15;
    dVar19 = dVar20 * dVar20 + dVar19 * dVar19 + dVar30 * dVar30;
    dVar24 = dVar29 * dVar29 + dVar35 * dVar35 + dVar24 * dVar24;
    if (dVar15 <= dVar19) {
      dVar15 = dVar19;
    }
    if (dVar15 <= dVar24) {
      dVar15 = dVar24;
    }
    dVar24 = param_3[4];
    dVar14 = param_3[5];
    dVar19 = param_3[6];
    if (dVar15 < 0.0) {
      dVar15 = sqrt(dVar15);
    }
    else {
      dVar15 = SQRT(dVar15);
    }
    dVar20 = SQRT(dVar32 * dVar32 + dVar13 * dVar13 + dVar31 * dVar31);
    dVar26 = dVar15 * dStack_258;
    if (dVar20 <= dVar15 * dStack_258) {
      dVar26 = dVar20;
    }
    *param_2 = dVar28 + dVar34 + dVar25 + dVar24;
    param_2[1] = dVar17 + dVar33 + dVar27 + dVar14;
    param_2[2] = dVar16 + dVar18 + dVar23 + dVar19;
    param_2[3] = dVar31;
    param_2[4] = dVar32;
    param_2[5] = dVar13;
  }
  else {
    if ((*(byte *)(param_1 + 0x8a1) & 2) == 0) {
      dVar18 = *param_3;
      dVar34 = param_3[1];
      dVar14 = param_3[2];
      dVar33 = param_3[8];
      local_1c8 = param_3[9];
      dVar13 = param_3[10];
      dVar16 = dVar34 + dVar34;
      dVar15 = dVar14 + dVar14;
      dVar23 = dVar18 * (dVar18 + dVar18);
      dStack_1c0 = (1.0 - (dVar14 * dVar15 + dVar23)) * local_1c8;
      local_198 = (1.0 - (dVar23 + dVar34 * dVar16)) * dVar13;
      dVar23 = param_3[3];
      dVar19 = dVar15 * dVar23;
      dVar24 = (dVar18 + dVar18) * param_3[3];
      dVar23 = dVar16 * dVar23;
      dVar26 = (dVar16 * dVar18 + dVar19) * dVar33;
      local_1b8 = (dVar15 * dVar34 + dVar24) * local_1c8;
      local_1d8 = (*param_3 * dVar15 - dVar23) * dVar33;
      local_1c8 = (dVar16 * dVar18 - dVar19) * local_1c8;
      dVar19 = (dVar15 * dVar34 - dVar24) * dVar13;
      local_1e8._8_4_ = SUB84(dVar26,0);
      local_1e8._0_8_ = (1.0 - (dVar14 * dVar15 + dVar34 * dVar16)) * dVar33;
      local_1e8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar19,0);
      local_1a8._0_8_ = (dVar23 + *param_3 * dVar15) * dVar13;
      local_1a8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      uStack_190 = 0;
      local_188 = param_3[4];
      dStack_180 = param_3[5];
      local_178 = param_3[6];
      uStack_170 = 0x3ff0000000000000;
      FUN_1447fea8d(local_168,param_1 + 0x930);
      dVar23 = *(double *)(param_1 + 0x8f0);
      dVar15 = *(double *)(param_1 + 0x900);
      dVar19 = *(double *)(param_1 + 0x8f8);
      dVar16 = dVar15 * (double)local_128._0_8_ + dVar19 * local_148 + dVar23 * (double)local_168 +
               local_108;
      dVar18 = dVar15 * (double)local_128._8_8_ +
               *(double *)(param_1 + 0x8f8) * dStack_140 + dVar23 * dStack_160 + dStack_100;
      dVar24 = *(double *)(param_1 + 0x908);
      dVar34 = *(double *)(param_1 + 0x910);
      dVar14 = *(double *)(param_1 + 0x918);
      dVar27 = ABS(dVar14 * (double)local_128._0_8_) +
               ABS(dVar34 * local_148) + ABS(dVar24 * (double)local_168);
      dVar29 = ABS(*(double *)(param_1 + 0x918) * (double)local_128._8_8_) +
               ABS(*(double *)(param_1 + 0x910) * dStack_140) +
               ABS(*(double *)(param_1 + 0x908) * dStack_160);
      dVar24 = ABS(dVar14 * local_118) + ABS(dVar34 * local_138) + ABS(dVar24 * local_158);
      dVar23 = dVar15 * local_118 + dVar23 * local_158 + dVar19 * local_138 + local_f8;
      dVar26 = (double)local_128._0_8_ * (double)local_128._0_8_ +
               local_148 * local_148 + (double)local_168 * (double)local_168;
      dVar15 = (double)local_128._8_8_ * (double)local_128._8_8_ +
               dStack_140 * dStack_140 + dStack_160 * dStack_160;
      dVar19 = local_118 * local_118 + local_158 * local_158 + local_138 * local_138;
      if (dVar26 <= dVar15) {
        dVar26 = dVar15;
      }
      if (dVar26 <= dVar19) {
        dVar26 = dVar19;
      }
      if (0.0 <= dVar26) goto LAB_1401737bb;
LAB_14017346d:
      dVar26 = sqrt(dVar26);
    }
    else {
      dVar16 = *param_3;
      dVar18 = param_3[1];
      dVar19 = param_3[2];
      dVar33 = param_3[8];
      dVar25 = param_3[9];
      dVar28 = param_3[10];
      dVar26 = dVar18 + dVar18;
      dVar15 = dVar19 + dVar19;
      dVar23 = dVar16 * (dVar16 + dVar16);
      dVar34 = (1.0 - (dVar19 * dVar15 + dVar18 * dVar26)) * dVar33;
      dVar14 = (1.0 - (dVar19 * dVar15 + dVar23)) * dVar25;
      dVar17 = (1.0 - (dVar23 + dVar18 * dVar26)) * dVar28;
      dVar23 = param_3[3];
      dVar19 = dVar15 * dVar23;
      dVar24 = (dVar16 + dVar16) * param_3[3];
      dVar23 = dVar26 * dVar23;
      dVar13 = (dVar26 * dVar16 + dVar19) * dVar33;
      dVar20 = (dVar15 * dVar18 + dVar24) * dVar25;
      dVar30 = (dVar23 + *param_3 * dVar15) * dVar28;
      dVar33 = (*param_3 * dVar15 - dVar23) * dVar33;
      dVar25 = (dVar26 * dVar16 - dVar19) * dVar25;
      dVar28 = (dVar15 * dVar18 - dVar24) * dVar28;
      dVar23 = *(double *)(param_1 + 0x8f0);
      dVar15 = *(double *)(param_1 + 0x900);
      dVar19 = *(double *)(param_1 + 0x8f8);
      dVar24 = *(double *)(param_1 + 0x908);
      dVar16 = *(double *)(param_1 + 0x910);
      dVar18 = *(double *)(param_1 + 0x918);
      dVar27 = ABS(dVar30 * dVar18) + ABS(dVar25 * dVar16) + ABS(dVar34 * dVar24);
      dVar29 = ABS(dVar28 * *(double *)(param_1 + 0x918)) +
               ABS(dVar14 * *(double *)(param_1 + 0x910)) +
               ABS(dVar13 * *(double *)(param_1 + 0x908));
      dVar24 = ABS(dVar17 * dVar18) + ABS(dVar20 * dVar16) + ABS(dVar33 * dVar24);
      dVar26 = dVar30 * dVar30 + dVar25 * dVar25 + dVar34 * dVar34;
      dVar16 = dVar28 * dVar28 + dVar14 * dVar14 + dVar13 * dVar13;
      dVar18 = dVar17 * dVar17 + dVar20 * dVar20 + dVar33 * dVar33;
      if (dVar26 <= dVar16) {
        dVar26 = dVar16;
      }
      if (dVar26 <= dVar18) {
        dVar26 = dVar18;
      }
      dVar16 = dVar15 * dVar30 + dVar19 * dVar25 + dVar23 * dVar34 + param_3[4];
      dVar18 = dVar15 * dVar28 + *(double *)(param_1 + 0x8f8) * dVar14 + dVar23 * dVar13 +
               param_3[5];
      dVar23 = dVar15 * dVar17 + dVar19 * dVar20 + dVar23 * dVar33 + param_3[6];
      if (dVar26 < 0.0) goto LAB_14017346d;
LAB_1401737bb:
      dVar26 = SQRT(dVar26);
    }
    dVar26 = dVar26 * *(double *)(param_1 + 0x920);
    dVar15 = SQRT(dVar29 * dVar29 + dVar24 * dVar24 + dVar27 * dVar27);
    if (dVar15 <= dVar26) {
      dVar26 = dVar15;
    }
    if ((*(byte *)(param_1 + 0x89e) & 0x20) != 0) {
      dVar15 = *(double *)(param_1 + 0x270);
      dVar19 = *(double *)(param_1 + 0x260);
      dVar34 = *(double *)(param_1 + 0x268);
      dVar14 = dVar16 + dVar27;
      dVar33 = dVar18 + dVar29;
      dVar13 = dVar23 + dVar24;
      dVar27 = dVar16 - dVar27;
      dVar29 = dVar18 - dVar29;
      dVar24 = dVar23 - dVar24;
      dVar20 = dVar27;
      if (dVar14 <= dVar27) {
        dVar20 = dVar14;
      }
      dVar25 = dVar29;
      if (dVar33 <= dVar29) {
        dVar25 = dVar33;
      }
      dVar28 = dVar24;
      if (dVar13 <= dVar24) {
        dVar28 = dVar13;
      }
      if (dVar27 <= dVar14) {
        dVar27 = dVar14;
      }
      if (dVar29 <= dVar33) {
        dVar29 = dVar33;
      }
      if (dVar24 <= dVar13) {
        dVar24 = dVar13;
      }
      dVar33 = dVar15 + -1.0;
      dVar13 = dVar34 + -1.0;
      dVar14 = dVar19 + -1.0;
      if (dVar14 <= dVar20) {
        dVar20 = dVar14;
      }
      if (dVar27 <= dVar14) {
        dVar27 = dVar14;
      }
      if (dVar13 <= dVar25) {
        dVar25 = dVar13;
      }
      if (dVar33 <= dVar28) {
        dVar28 = dVar33;
      }
      if (dVar29 <= dVar13) {
        dVar29 = dVar13;
      }
      if (dVar24 <= dVar33) {
        dVar24 = dVar33;
      }
      dVar14 = dVar19 + 1.0;
      if (dVar14 <= dVar20) {
        dVar20 = dVar14;
      }
      if (dVar27 <= dVar14) {
        dVar27 = dVar14;
      }
      dVar14 = dVar34 + 1.0;
      if (dVar14 <= dVar25) {
        dVar25 = dVar14;
      }
      if (dVar29 <= dVar14) {
        dVar29 = dVar14;
      }
      dVar14 = dVar15 + 1.0;
      if (dVar14 <= dVar28) {
        dVar28 = dVar14;
      }
      if (dVar24 <= dVar14) {
        dVar24 = dVar14;
      }
      dVar24 = (dVar24 - dVar28) * 0.5;
      dVar14 = (dVar29 - dVar25) * 0.5;
      dVar33 = (dVar27 - dVar20) * 0.5;
      dVar28 = dVar28 + dVar24;
      dVar25 = dVar25 + dVar14;
      dVar20 = dVar20 + dVar33;
      *param_2 = dVar20;
      param_2[1] = dVar25;
      param_2[2] = dVar28;
      param_2[3] = dVar33;
      param_2[4] = dVar14;
      param_2[5] = dVar24;
      dVar15 = SQRT((dVar15 - dVar28) * (dVar15 - dVar28) +
                    (dVar19 - dVar20) * (dVar19 - dVar20) + (dVar34 - dVar25) * (dVar34 - dVar25)) +
               1.0;
      dVar26 = dVar26 + SQRT((dVar23 - dVar28) * (dVar23 - dVar28) +
                             (dVar16 - dVar20) * (dVar16 - dVar20) +
                             (dVar18 - dVar25) * (dVar18 - dVar25));
      if (dVar26 <= dVar15) {
        dVar26 = dVar15;
      }
      dVar23 = SQRT(dVar24 * dVar24 + dVar33 * dVar33 + dVar14 * dVar14);
      if (dVar26 <= dVar23) {
        dVar23 = dVar26;
      }
      param_2[6] = dVar23;
      goto LAB_140174a65;
    }
    *param_2 = dVar16;
    param_2[1] = dVar18;
    param_2[2] = dVar23;
    param_2[3] = dVar27;
    param_2[4] = dVar29;
    param_2[5] = dVar24;
  }
  param_2[6] = dVar26;
LAB_140174a65:
  if ((local_e0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140174ce6 FUN_140174ce6 body=234 status=ok
// SIG undefined FUN_140174ce6(void)

void FUN_140174ce6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined1 local_80 [28];
  char local_64;
  longlong local_58;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x840) == 0)) {
    FUN_1405f0e9c(local_88,param_2,5);
    if (local_64 == '\0') {
      do {
        lVar1 = local_58;
        if ((((local_58 != 0) && ((*(uint *)(local_58 + 8) >> 0x1e & 1) == 0)) &&
            (cVar2 = FUN_140174dd2(local_58), cVar2 != '\0')) &&
           ((cVar2 = FUN_1449e2a3e(lVar1), cVar2 == '\0' || (*(char *)(lVar1 + 0x179) != '\x04'))))
        {
          FUN_140b95304(param_1,lVar1,param_3,0);
        }
        FUN_14059e512(local_88);
      } while (local_64 == '\0');
    }
    if (local_30 == '\x01') {
      FUN_14024445c(local_80);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140174dd2 FUN_140174dd2 body=93 status=ok
// SIG undefined FUN_140174dd2(void)

bool FUN_140174dd2(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    if ((*(longlong *)(param_1 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    iVar1 = FUN_14487fd02(param_1);
    pcVar2 = (char *)(param_1 + 0x178);
    if (iVar1 != 3) {
      pcVar2 = (char *)(param_1 + 0x68);
    }
    bVar3 = *pcVar2 != '\0';
  }
  return bVar3;
}



// FUNCTION 140174e30 FUN_140174e30 body=80 status=ok
// SIG undefined FUN_140174e30(void)

void FUN_140174e30(longlong param_1)

{
  if ((DAT_14c86a9fc == 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_144880010(param_1 + -0x4b8,0);
  return;
}



// FUNCTION 140174e80 FUN_140174e80 body=60 status=ok
// SIG undefined FUN_140174e80(void)

void FUN_140174e80(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2);
    *(longlong *)(param_1 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140174ebc FUN_140174ebc body=381 status=ok
// SIG undefined FUN_140174ebc(void)

ulonglong FUN_140174ebc(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x18)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     ((uVar3 == 0 || (0x40 < (int)uVar5)))) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x555) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140174f88;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x1ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140174f88:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0x18;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x18,8);
    }
  }
  return uVar6;
}



// FUNCTION 14017503a FUN_14017503a body=373 status=ok
// SIG undefined FUN_14017503a(void)

void FUN_14017503a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401750c3;
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
LAB_1401750c3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1401751b0 FUN_1401751b0 body=208 status=ok
// SIG undefined FUN_1401751b0(void)

void FUN_1401751b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar8;
  ulonglong uVar7;
  
  uVar6 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar7 = (ulonglong)uVar6;
  FUN_140175280();
  *(uint *)(param_2 + 0x50) = DAT_14cb3bbcc + uVar6;
  lVar2 = *(longlong *)(param_2 + 0x38);
  lVar1 = lVar2 + uVar7;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x14);
  *(undefined4 *)(lVar2 + 8 + uVar7) = *(undefined4 *)(lVar3 + 0x1c);
  *(undefined8 *)(lVar2 + uVar7) = uVar4;
  lVar2 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar5 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x50);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar8 * 0x20) == lVar3)
        goto LAB_140175253;
        iVar8 = *(int *)(lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar5 = 0;
LAB_140175253:
  *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar5 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar5 + 8);
  *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(lVar5 + 0x14);
  return;
}



// FUNCTION 140175280 FUN_140175280 body=258 status=ok
// SIG undefined FUN_140175280(void)

void FUN_140175280(void)

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
              0x110) < DAT_14cb3bc10) {
    FUN_144b3d300(&DAT_14cb3bc10);
    if (DAT_14cb3bc10 == -1) {
      FUN_1456d2ccc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3bb90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3ce6d);
      _Init_thread_footer(&DAT_14cb3bc10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140175384 FUN_140175384 body=1291 status=ok
// SIG undefined FUN_140175384(void)

void FUN_140175384(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  void **ppvVar1;
  uint uVar2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_140175890();
  if (0 < (int)param_3[1]) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    FUN_140175d40();
    iVar7 = (int)param_3[1];
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7 * 8);
    }
    if ((int)uStack_70._4_4_ < iVar7 * 8) {
      FUN_14480809c(&local_78);
      iVar7 = (int)param_3[1];
    }
    if (iVar7 != 0) {
      plVar9 = (longlong *)*param_3;
      plVar11 = plVar9 + (longlong)iVar7 * 2;
      iVar7 = 0;
      do {
        uVar4 = uStack_60;
        if ((*plVar9 == 0) || (plVar9[1] == 0)) {
          lVar12 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_146e29d74(&local_68,uVar4 & 0xffffffff);
          }
          *(undefined4 *)(local_68 + lVar12 * 4) = 0;
          iVar8 = 8;
          do {
            uVar4 = uStack_70;
            lVar12 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_1447808da(&local_78,uVar4 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_78 + lVar12 * 4) = 0xffffffff;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        else {
          puVar6 = (undefined4 *)FUN_147c68856();
          uVar4 = uStack_60;
          lVar12 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_146e29d74(&local_68,uVar4 & 0xffffffff);
          }
          *(undefined4 *)(local_68 + lVar12 * 4) = *puVar6;
          iVar8 = 0;
          do {
            lVar12 = (**(code **)(*(longlong *)plVar9[1] + 0x308))((longlong *)plVar9[1],iVar8);
            uVar4 = uStack_70;
            lVar13 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (lVar12 == 0) {
              if (uStack_70._4_4_ < uVar5) {
                FUN_1447808da(&local_78,uVar4 & 0xffffffff);
              }
              *(undefined4 *)((longlong)local_78 + lVar13 * 4) = 0xffffffff;
            }
            else {
              if (uStack_70._4_4_ < uVar5) {
                FUN_1447808da(&local_78,uVar4 & 0xffffffff);
              }
              *(int *)((longlong)local_78 + lVar13 * 4) = iVar7;
              iVar7 = iVar7 + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 != 8);
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar11);
      if (0 < iVar7) {
        if ((int)uStack_80._4_4_ < iVar7) {
          FUN_14488054e(&local_88,iVar7);
        }
        if ((longlong)(int)param_3[1] != 0) {
          plVar9 = (longlong *)*param_3;
          plVar11 = plVar9 + (longlong)(int)param_3[1] * 2;
          do {
            if (*plVar9 != 0) {
              iVar7 = 0;
              do {
                lVar12 = (**(code **)(*(longlong *)plVar9[1] + 0x308))((longlong *)plVar9[1],iVar7);
                if (lVar12 != 0) {
                  puVar6 = (undefined4 *)FUN_14488068a(lVar12);
                  uVar4 = uStack_80;
                  lVar12 = (longlong)(int)uStack_80;
                  uVar5 = (int)uStack_80 + 1;
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
                  if (uStack_80._4_4_ < uVar5) {
                    FUN_1417255d0(&local_88,uVar4 & 0xffffffff);
                  }
                  *(undefined4 *)((longlong)local_88 + lVar12 * 4) = *puVar6;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 != 8);
            }
            plVar9 = plVar9 + 2;
          } while (plVar9 != plVar11);
        }
      }
    }
    lVar12 = *param_1;
    uVar5 = *(uint *)(lVar12 + 8);
    if ((uVar5 & 3) == 0) {
      lVar13 = *(longlong *)(lVar12 + 0x48);
      FUN_1400c0028(lVar12 + 0x90,&local_68);
      uVar2 = *(uint *)(lVar12 + 0xc);
      *(uint *)(lVar12 + 0xc) = uVar2 | 2;
      if ((lVar13 != 0 && uVar2 == 0) && (*(longlong *)(lVar13 + 8) != 0)) {
        FUN_144821112(*(longlong *)(lVar13 + 8) + 0x70,lVar13,uVar5 >> 3);
      }
    }
    else {
      lVar12 = FUN_140135db2(lVar12);
      FUN_1400c0028(lVar12 + 0x10,&local_68);
    }
    pvVar3 = local_78;
    lVar12 = *param_1;
    uVar5 = *(uint *)(lVar12 + 8);
    if ((uVar5 & 3) == 0) {
      lVar13 = *(longlong *)(lVar12 + 0x48);
      ppvVar1 = (void **)(lVar12 + 0xa0);
      if (ppvVar1 != &local_78) {
        iVar7 = (int)uStack_70;
        lVar10 = (longlong)(int)uStack_70;
        *(int *)(lVar12 + 0xa8) = (int)uStack_70;
        if ((int)uStack_70 == 0 && *(int *)(lVar12 + 0xac) == 0) {
          *(undefined4 *)(lVar12 + 0xac) = 0;
        }
        else {
          FUN_1447bda9e(ppvVar1,uStack_70 & 0xffffffff);
          if (iVar7 != 0) {
            memcpy(*ppvVar1,pvVar3,lVar10 << 2);
          }
        }
      }
      uVar2 = *(uint *)(lVar12 + 0xc);
      *(uint *)(lVar12 + 0xc) = uVar2 | 2;
      if ((lVar13 != 0 && uVar2 == 0) && (*(longlong *)(lVar13 + 8) != 0)) {
        FUN_144821112(*(longlong *)(lVar13 + 8) + 0x70,lVar13,uVar5 >> 3);
      }
    }
    else {
      lVar12 = FUN_140135db2(lVar12);
      FUN_1447bdc4c(lVar12 + 0x20,&local_78);
    }
    pvVar3 = local_88;
    lVar12 = *param_1;
    uVar5 = *(uint *)(lVar12 + 8);
    if ((uVar5 & 3) == 0) {
      lVar13 = *(longlong *)(lVar12 + 0x48);
      ppvVar1 = (void **)(lVar12 + 0xb0);
      if (ppvVar1 != &local_88) {
        iVar7 = (int)uStack_80;
        lVar10 = (longlong)(int)uStack_80;
        *(int *)(lVar12 + 0xb8) = (int)uStack_80;
        if ((int)uStack_80 == 0 && *(int *)(lVar12 + 0xbc) == 0) {
          *(undefined4 *)(lVar12 + 0xbc) = 0;
        }
        else {
          FUN_1400c0080(ppvVar1,uStack_80 & 0xffffffff);
          if (iVar7 != 0) {
            memcpy(*ppvVar1,pvVar3,lVar10 << 2);
          }
        }
      }
      uVar2 = *(uint *)(lVar12 + 0xc);
      *(uint *)(lVar12 + 0xc) = uVar2 | 2;
      if ((lVar13 != 0 && uVar2 == 0) && (*(longlong *)(lVar13 + 8) != 0)) {
        FUN_144821112(*(longlong *)(lVar13 + 8) + 0x70,lVar13,uVar5 >> 3);
      }
    }
    else {
      lVar12 = FUN_140135db2(lVar12);
      FUN_144aa451a(lVar12 + 0x30,&local_88);
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140175890 FUN_140175890 body=295 status=ok
// SIG undefined FUN_140175890(void)

void FUN_140175890(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 **local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14488054e(&local_58);
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar9 = 0;
      do {
        puVar6 = (undefined4 *)FUN_14488068a(*(undefined8 *)(lVar2 + lVar9));
        uVar4 = uStack_50;
        lVar8 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1417255d0(&local_58,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_58 + lVar8 * 4) = *puVar6;
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar9);
    }
  }
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 8) & 3) == 0) {
    local_40 = &local_58;
    local_60 = &local_40;
    local_68 = *(uint *)(lVar3 + 8) >> 3;
    FUN_1401759b8(lVar3 + 0x80,CONCAT71((int7)((ulonglong)local_40 >> 8),1),lVar3 + 0xc,
                  *(undefined8 *)(lVar3 + 0x48));
  }
  else {
    uVar7 = FUN_140135db2(lVar3);
    FUN_144aa451a(uVar7,&local_58);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401759b8 FUN_1401759b8 body=168 status=ok
// SIG undefined FUN_1401759b8(void)

void FUN_1401759b8(longlong *param_1,char param_2,uint *param_3,longlong param_4,undefined4 param_5,
                  undefined8 *param_6)

{
  uint uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_6;
  if (plVar2 != param_1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (((param_2 != '\0') && (uVar1 = *param_3, *param_3 = uVar1 | 2, param_4 != 0 && uVar1 == 0)) &&
     (*(longlong *)(param_4 + 8) != 0)) {
    FUN_144821112(*(longlong *)(param_4 + 8) + 0x70,param_4,param_5);
    return;
  }
  return;
}



// FUNCTION 140175a60 FUN_140175a60 body=108 status=ok
// SIG undefined FUN_140175a60(void)

undefined8 * FUN_140175a60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c994a48) {
    FUN_144b3d300(&DAT_14c994a48);
    if (DAT_14c994a48 == -1) {
      FUN_1456d094c(&DAT_14c994908);
      atexit((_func_5014 *)&LAB_1429e0cbb);
      _Init_thread_footer(&DAT_14c994a48);
    }
  }
  return &DAT_14c994908;
}



// FUNCTION 140175acc FUN_140175acc body=138 status=ok
// SIG undefined FUN_140175acc(void)

void FUN_140175acc(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14484244a();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x58) = param_2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c994a48) {
    FUN_144b3d300(&DAT_14c994a48);
    if (DAT_14c994a48 == -1) {
      FUN_1456d094c(&DAT_14c994908);
      atexit((_func_5014 *)&LAB_1429e0cbb);
      _Init_thread_footer(&DAT_14c994a48);
    }
  }
  FUN_140da7c9e(&DAT_14c994908,*param_1);
  return;
}



// FUNCTION 140175b56 FUN_140175b56 body=161 status=ok
// SIG undefined FUN_140175b56(void)

undefined4 * FUN_140175b56(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x130));
    FUN_14172bc3a(param_1 + 0x90,&local_2c);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x130));
  }
  else {
    FUN_14172bc3a(param_1 + 0x90,&local_2c);
  }
  *param_2 = local_2c;
  FUN_140da7c9e(param_1 + 0x18,local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140175bf8 FUN_140175bf8 body=328 status=ok
// SIG undefined FUN_140175bf8(void)

void FUN_140175bf8(undefined4 *param_1,longlong param_2)

{
  double *pdVar1;
  byte bVar2;
  
  pdVar1 = (double *)FUN_14484244a();
  if (pdVar1 != (double *)0x0) {
    *pdVar1 = (double)*(float *)(param_2 + 0x28);
    pdVar1[1] = (double)*(float *)(param_2 + 0x2c);
    bVar2 = *(byte *)(param_2 + 0x30);
    if (3 < bVar2) {
      bVar2 = 0;
    }
    *(byte *)((longlong)pdVar1 + 100) = bVar2;
    pdVar1[2] = (double)*(float *)(param_2 + 0x34);
    bVar2 = 0;
    if (*(byte *)(param_2 + 0x38) < 4) {
      bVar2 = *(byte *)(param_2 + 0x38);
    }
    *(byte *)((longlong)pdVar1 + 0x65) = bVar2;
    pdVar1[3] = (double)*(float *)(param_2 + 0x3c);
    pdVar1[6] = (double)*(float *)(param_2 + 0x40);
    pdVar1[7] = (double)*(float *)(param_2 + 0x44);
    *(undefined4 *)(pdVar1 + 10) = *(undefined4 *)(param_2 + 0x48);
    *(float *)(pdVar1 + 0xd) = *(float *)(param_2 + 100) * 10000.0;
    *(float *)((longlong)pdVar1 + 0x6c) = *(float *)(param_2 + 0x68) * 10000.0;
    *(float *)(pdVar1 + 0xe) = *(float *)(param_2 + 0x6c) * 10000.0;
    *(undefined4 *)((longlong)pdVar1 + 0x74) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(pdVar1 + 0xc) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined1 *)(pdVar1 + 0xf) = *(undefined1 *)(param_2 + 0x75);
    *(undefined4 *)((longlong)pdVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x78);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c994a48) {
    FUN_144b3d300(&DAT_14c994a48);
    if (DAT_14c994a48 == -1) {
      FUN_1456d094c(&DAT_14c994908);
      atexit((_func_5014 *)&LAB_1429e0cbb);
      _Init_thread_footer(&DAT_14c994a48);
    }
  }
  FUN_140da7c9e(&DAT_14c994908,*param_1);
  return;
}



// FUNCTION 140175d40 FUN_140175d40 body=315 status=ok
// SIG undefined FUN_140175d40(void)

void FUN_140175d40(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 4;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140175daa;
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
LAB_140175daa:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 140175e7c FUN_140175e7c body=115 status=ok
// SIG undefined FUN_140175e7c(void)

void FUN_140175e7c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140175ef0();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_140175ea7;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140175ea7:
    lVar2 = FUN_140175ef0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_140175ecc;
    }
  }
  lVar3 = 0;
LAB_140175ecc:
  FUN_1448a6f9c(param_1 + 0x870,lVar3);
  return;
}



// FUNCTION 140175ef0 FUN_140175ef0 body=228 status=ok
// SIG undefined FUN_140175ef0(void)

longlong FUN_140175ef0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8820 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a134;
    local_38 = &LAB_14748050b;
    local_40 = FUN_146329409;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/DataflowSimulation",L"DataflowSimulationManager",&DAT_14caa8820,
                  &DAT_14748050a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140175ffc FUN_140175ffc body=67 status=ok
// SIG undefined FUN_140175ffc(void)

undefined8 FUN_140175ffc(int param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) &&
     (((cVar1 = FUN_14017603f(), cVar1 != '\0' || (param_2 < 2)) &&
      ((*(byte *)(param_3 + 0x2a) & 4) != 0)))) {
    uVar2 = FUN_144880847(param_4,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14017603f FUN_14017603f body=109 status=ok
// SIG undefined FUN_14017603f(void)

undefined8 FUN_14017603f(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca97390;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar6 * 4));
}



// FUNCTION 1401760ac FUN_1401760ac body=124 status=ok
// SIG undefined FUN_1401760ac(void)

void FUN_1401760ac(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x78);
  if ((*(byte *)(param_2 + 0xb0) & 0x40) != 0) {
    pcVar1 = (code *)(**(code **)(**(longlong **)(param_2 + 0xb8) + 0x88))();
    (*pcVar1)(param_3,param_1);
    lVar2 = *(longlong *)(param_2 + 0x78);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x50)) {
    FUN_1448809ad(param_1,lVar2,param_3,param_4);
  }
  return;
}



// FUNCTION 140176128 FUN_140176128 body=166 status=ok
// SIG undefined FUN_140176128(void)

void FUN_140176128(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((*(int *)((longlong)param_3 + 0xc) != 0) &&
       (uVar1 = *(uint *)(param_3 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)((longlong)param_3 + 0xc))) &&
      (local_20 = *plVar2, local_20 != 0)))) {
    (**(code **)(*param_1 + 0x88))(param_1,&local_20,param_4,param_2);
    if (local_20 == 0) {
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401761d0 FUN_1401761d0 body=680 status=ok
// SIG undefined FUN_1401761d0(void)

void FUN_1401761d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(*param_2 + 8);
  lVar3 = lVar4;
  if ((((*(byte *)(lVar4 + 0x28) & 4) == 0) || (lVar5 = *(longlong *)(param_1 + 0x70), lVar5 == 0))
     || (*(longlong *)(param_3 + 8) != 0)) goto LAB_140176206;
  *(undefined8 *)(param_3 + 0x10) = 0;
  if ((*(uint *)(lVar5 + 8) & 0x809f600) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c949388) {
      FUN_144b3d300(&DAT_14c949388);
      if (DAT_14c949388 == -1) {
        FUN_1446f470e(&local_40,L"GbxHasStructType",1);
        DAT_14c949380 = FUN_141473ad5(local_40);
        _Init_thread_footer(&DAT_14c949388);
      }
    }
    if (((DAT_14c949380 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         != DAT_14c949380 + 0x30 ||
        (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 == (longlong *)0x0)))) goto LAB_1401763ce;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1401763ce;
    lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    if ((lVar3 == 0) || ((*(uint *)(lVar5 + 8) & 0x809f600) != 0)) goto LAB_1401763ce;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c949388) {
      FUN_144b3d300(&DAT_14c949388);
      if (DAT_14c949388 == -1) {
        FUN_1446f470e(&local_40,L"GbxHasStructType",1);
        DAT_14c949380 = FUN_141473ad5(local_40);
        _Init_thread_footer(&DAT_14c949388);
      }
    }
    if ((((DAT_14c949380 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
         != DAT_14c949380 + 0x30)) ||
       (plVar1 = *(longlong **)(lVar5 + 0xb8), plVar1 == (longlong *)0x0)) goto LAB_1401763ce;
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1401763ce;
    lVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    if (lVar3 == 0) goto LAB_1401763ce;
  }
  else {
LAB_1401763ce:
    lVar5 = 0;
  }
  *(longlong *)(param_3 + 8) = lVar5;
  lVar3 = *(longlong *)(*param_2 + 8);
LAB_140176206:
  FUN_14017647a(param_3,lVar3);
  if ((((*(byte *)(lVar4 + 0x28) & 1) != 0) && (lVar4 = *(longlong *)(param_1 + 0x70), lVar4 != 0))
     && (*(longlong *)(param_3 + 8) == 0)) {
    *(undefined8 *)(param_3 + 0x10) = 0;
    cVar2 = FUN_14170fc78(lVar4);
    if (cVar2 == '\0') {
      lVar4 = 0;
    }
    cVar2 = FUN_14170fc78(lVar4);
    if (cVar2 == '\0') {
      lVar4 = 0;
    }
    *(longlong *)(param_3 + 8) = lVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017647a FUN_14017647a body=161 status=ok
// SIG undefined FUN_14017647a(void)

longlong * FUN_14017647a(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 1);
  bVar1 = *(byte *)(param_2 + 5);
  if ((bVar1 & 1) != 0) {
    param_1[2] = 0;
    bVar1 = *(byte *)(param_2 + 5);
  }
  if (((bVar1 & 4) != 0) && (*param_1 != 0)) {
    local_19 = 0;
    FUN_14017651c(param_1,param_2);
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) {
    (**(code **)(*param_2 + 600))(param_2,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017651c FUN_14017651c body=233 status=ok
// SIG undefined FUN_14017651c(void)

void FUN_14017651c(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_1;
  uVar3 = 0;
  if ((param_1[1] != 0) && (plVar1 = *(longlong **)(param_1[1] + 0xb8), plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff48c(uVar4);
    }
  }
  local_38 = uVar3;
  FUN_14041ecbc(&local_40,&local_50);
  FUN_140176606(&local_48,&local_50,param_3);
  if (local_48 != 0) {
    local_50 = FUN_14041e92e();
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_50);
    }
    (**(code **)(*param_2 + 0x210))(param_2,&local_50,&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140176606 FUN_140176606 body=390 status=ok
// SIG undefined FUN_140176606(void)

undefined8 * FUN_140176606(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_868 [32];
  wchar_t *local_848;
  wchar_t *local_840;
  wchar_t *local_838;
  char local_830;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_868;
  cVar1 = FUN_14017678e(param_2);
  if ((cVar1 == '\0') && ((*param_3 & 1) != 0)) {
    local_848 = local_828;
    local_830 = '\0';
    local_838 = (wchar_t *)&local_28;
    local_840 = local_848;
    FUN_14005eb5c(param_2,&local_848);
    if (*param_3 == 1) {
      pwVar2 = local_840;
      if (local_838 <= local_840 + 2) {
        FUN_140213274(&local_848,2);
        pwVar2 = local_840;
      }
      pwVar2[0] = L'~';
      pwVar2[1] = L'!';
      local_840 = pwVar2 + 2;
      if (local_838 <= pwVar2 + 0x10) {
        FUN_140213274(&local_848,0xe);
      }
      builtin_wcsncpy(local_840,L"SkipNexusAccum",0xe);
      local_840 = local_840 + 0xe;
    }
    if (local_838 <= local_840 + 2) {
      FUN_140213274(&local_848,2);
    }
    local_840[0] = L'~';
    local_840[1] = L'!';
    local_840 = local_840 + 2;
    FUN_1446f82e2(param_1,(ulonglong)((longlong)local_840 - (longlong)local_848) >> 1,local_848,1);
    if (local_830 == '\x01') {
      FUN_1400020a8(local_848);
    }
  }
  else {
    *param_1 = *param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017678e FUN_14017678e body=374 status=ok
// SIG undefined FUN_14017678e(void)

ulonglong FUN_14017678e(undefined8 param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_898 [32];
  undefined1 *local_878;
  int local_870;
  undefined *local_868;
  undefined4 local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  ulonglong *local_848;
  char local_840;
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_898;
  local_858 = local_838;
  local_840 = '\0';
  local_848 = &local_38;
  local_850 = local_858;
  FUN_14005eb5c(param_1,&local_858);
  puVar2 = local_858;
  uVar5 = 0;
  iVar6 = (int)((ulonglong)((longlong)local_850 - (longlong)local_858) >> 1);
  iVar3 = 0;
  if (0 < iVar6) {
    iVar3 = iVar6;
  }
  if (1 < iVar6) {
    lVar7 = -(ulonglong)(uint)(iVar3 * 2);
    do {
      iVar3 = wcsncmp((wchar_t *)(puVar2 + lVar7 + (longlong)iVar6 * 2),L"~!",2);
      uVar4 = (uint)uVar5;
      if (iVar3 == 0) {
        if (uVar4 != 0xffffffff) {
          local_868 = &DAT_149e5e8d6;
          local_860 = 2;
          local_870 = ~uVar4 + iVar6;
          if (iVar6 <= (int)(~uVar4 + iVar6)) {
            local_870 = iVar6;
          }
          if (local_870 < 1) {
            local_870 = 0;
          }
          local_878 = puVar2 + ((longlong)iVar6 * 2 - (ulonglong)(uint)(local_870 * 2));
          iVar3 = FUN_144a08910(&local_878,&local_868,0);
          if (iVar3 + uVar4 != -2 && iVar3 != -1) {
            iVar3 = FUN_144a54874(&DAT_149e5e8d6,puVar2 + (longlong)iVar6 * 2 + -4,2);
            uVar5 = CONCAT71((int7)(uVar5 >> 8),iVar3 == 0);
            goto LAB_140176845;
          }
        }
        break;
      }
      uVar5 = (ulonglong)(uVar4 + 1);
      bVar1 = lVar7 < -5;
      lVar7 = lVar7 + 2;
    } while (bVar1);
    uVar5 = 0;
  }
LAB_140176845:
  if (local_840 == '\x01') {
    FUN_1400020a8(local_858);
  }
  if ((local_38 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140176906 FUN_140176906 body=86 status=ok
// SIG undefined FUN_140176906(void)

uint * FUN_140176906(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar2 = FUN_1447262c2(param_4);
  plVar3 = (longlong *)FUN_14017698e(uVar2);
  uVar5 = 2;
  uVar6 = 0;
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar6 = 0;
    if (lVar4 != 0) {
      bVar1 = FUN_14017695c(lVar4,0);
      uVar6 = (uint)bVar1;
      uVar5 = 1;
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar6;
  *(undefined1 *)(param_2 + 8) = uVar5;
  return param_2;
}



// FUNCTION 14017695c FUN_14017695c body=49 status=ok
// SIG undefined FUN_14017695c(void)

undefined8 FUN_14017695c(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_14494f566(param_1 + 0x98);
    uVar1 = FUN_143d6a38c();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14017698e FUN_14017698e body=968 status=ok
// SIG undefined FUN_14017698e(void)

longlong FUN_14017698e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) {
LAB_140176a83:
    lVar1 = 0;
  }
  else {
    do {
      if (DAT_14c951858 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1468c5283;
        local_50 = FUN_142809da0;
        local_58 = L"Engine";
        local_60 = 0x400000000;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar2 = param_1[2];
      iVar4 = *(int *)(lVar2 + 0x38);
      if ((*(int *)(DAT_14c951858 + 0x38) <= iVar4) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
          == DAT_14c951858 + 0x30)) goto LAB_140176a83;
      if (DAT_14cb61cd0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = (code *)&LAB_1463b31ae;
        local_48 = &LAB_1486dca4f;
        local_50 = (code *)&LAB_1464f50a6;
        local_58 = L"Game";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        lVar2 = param_1[2];
        iVar4 = *(int *)(lVar2 + 0x38);
      }
      if ((iVar4 < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8)
          != DAT_14cb61cd0 + 0x30)) {
        if (DAT_14cac9ca8 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1478c0a72;
          local_50 = (code *)&LAB_1417b2375;
          local_58 = L"Engine";
          local_60 = 0x1000000000;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          lVar2 = param_1[2];
          iVar4 = *(int *)(lVar2 + 0x38);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar4) &&
           (plVar5 = param_1,
           *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
           == DAT_14cac9ca8 + 0x30)) goto LAB_140176a3c;
        if (DAT_14cb5cdc8 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_148692775;
          local_50 = FUN_1464d923a;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
        }
        lVar2 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb5cdc8);
        if (lVar2 == 0) {
LAB_140176a7f:
          lVar1 = 0;
        }
        else {
          uVar3 = FUN_1447f7908();
          lVar1 = FUN_144718840(lVar2,uVar3);
          if (lVar2 == lVar1) goto LAB_140176a7f;
        }
      }
      else {
        plVar5 = (longlong *)param_1[0x141];
LAB_140176a3c:
        lVar1 = FUN_140176d57(plVar5);
      }
      param_1 = (longlong *)param_1[4];
    } while (lVar1 == 0 && param_1 != (longlong *)0x0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140176d57 FUN_140176d57 body=1122 status=ok
// SIG undefined FUN_140176d57(void)

longlong FUN_140176d57(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb5cdc8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148692775;
      local_50 = FUN_1464d923a;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb5cdc8);
    if (lVar1 != 0) {
      if (DAT_14cb5cdc8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148692775;
        local_50 = FUN_1464d923a;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
      }
      lVar4 = FUN_144718840(lVar1,DAT_14cb5cdc8);
      if (lVar1 != lVar4 && lVar4 != 0) goto LAB_140176e5b;
    }
    plVar2 = (longlong *)FUN_1401771ce(param_1);
    if ((plVar2 != (longlong *)0x0) && (lVar1 = (**(code **)(*plVar2 + 8))(plVar2), lVar1 != 0)) {
      if (DAT_14cb5cdc8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148692775;
        local_50 = FUN_1464d923a;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
      }
      lVar4 = FUN_144718840(lVar1,DAT_14cb5cdc8);
      if (lVar4 != 0) goto LAB_140176e5b;
    }
    if (DAT_14cb5c920 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_14868f36b;
      local_50 = FUN_1464d7452;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb5c920);
    if (lVar1 != 0) {
      if (DAT_14cb5c920 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_14868f36b;
        local_50 = FUN_1464d7452;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogActor",&DAT_14cb5c920,&DAT_14868f36a);
      }
      lVar3 = FUN_144718840(lVar1,DAT_14cb5c920);
      lVar4 = 0;
      if ((lVar1 != lVar3) && (lVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
      goto LAB_140176e5b;
    }
  }
  lVar4 = 0;
LAB_140176e5b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1401771ce FUN_1401771ce body=479 status=ok
// SIG undefined FUN_1401771ce(void)

undefined8 FUN_1401771ce(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  longlong local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb5cdc8 == 0) {
    local_40 = &local_18;
    local_18 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_1427b09ee;
    local_48 = &LAB_148692775;
    local_50 = FUN_1464d923a;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10004001;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
  }
  local_20 = DAT_14cb5cdc8;
  if ((DAT_14cb5cdc8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_144881120(param_1,&local_20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_14cb5cdc8 == 0) {
      local_40 = &local_18;
      local_18 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148692775;
      local_50 = FUN_1464d923a;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
    }
    uVar2 = FUN_144718840(lVar1,DAT_14cb5cdc8);
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401773ae FUN_1401773ae body=65 status=ok
// SIG undefined FUN_1401773ae(void)

undefined8 * FUN_1401773ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e17b10;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14003c080(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1401773f0 FUN_1401773f0 body=10 status=ok
// SIG undefined FUN_1401773f0(void)

void FUN_1401773f0(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (param_1 != &DAT_149966ef0) {
    if (DAT_14c77ed78 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14c77ed78)(DAT_14c77ed70);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001424da139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_1);
    return;
  }
  return;
}



// FUNCTION 1401773fa FUN_1401773fa body=1759 status=ok
// SIG undefined FUN_1401773fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401773fa(longlong param_1,longlong param_2,longlong *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  byte unaff_BPL;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar10 = *(longlong *)(param_2 + 0x40);
  lVar13 = param_2;
  if (lVar10 == 0) {
    lVar10 = FUN_14475ec7e(param_2);
    uVar29 = (undefined4)lVar13;
    if (lVar10 != 0) goto LAB_140177497;
    bVar6 = false;
  }
  else {
LAB_140177497:
    uVar29 = (undefined4)lVar13;
    iVar8 = FUN_14490d72a(lVar10);
    unaff_BPL = iVar8 - 1U < 2;
    bVar6 = true;
  }
  lVar10 = param_2;
  cVar7 = FUN_1400900b4();
  uVar9 = (undefined4)lVar10;
  if (((cVar7 == '\0') && (bVar6)) && ((unaff_BPL & 1) != 0)) {
    uVar9 = FUN_144a126be(param_1);
    cVar7 = FUN_147dcb886();
    if (cVar7 == '\0') goto LAB_140177509;
  }
  uVar11 = *(uint *)(param_1 + 0x178);
  if (uVar11 != 0) {
    iVar8 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar8 + uVar11;
    if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar8) < uVar11) {
      FUN_140178088(param_3,iVar8);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x170);
    lVar10 = (longlong)iVar8 * 0x160 + *param_3;
    FUN_140177ada(lVar10,uVar12,uVar11);
    uVar29 = (undefined4)uVar12;
    uVar9 = (undefined4)lVar10;
  }
LAB_140177509:
  lVar10 = param_3[1];
  if (((longlong)(int)lVar10 != 0) && (*(char *)(param_2 + 0xb0) == '\x01')) {
    auVar3 = *(undefined1 (*) [16])(param_2 + 0x90);
    auVar4 = *(undefined1 (*) [16])(param_2 + 0xa0);
    auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
    iVar8 = movmskpd(uVar9,auVar24);
    auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_));
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_));
    uVar11 = movmskpd(uVar29,auVar26);
    if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
      local_1a8 = DAT_14c8464a0;
      dStack_1a0 = DAT_14c8464a8;
      uStack_1b0 = DAT_14c8464b8;
      local_1b8 = DAT_14c8464b0;
      local_188 = DAT_14c8464c0;
      dStack_180 = DAT_14c8464c8;
      uStack_190 = uRam000000014c8464d8;
      local_198 = DAT_14c8464d0;
      uVar27 = (undefined4)DAT_14c846498;
      uVar28 = (undefined4)((ulonglong)DAT_14c846498 >> 0x20);
      uVar29 = (undefined4)DAT_14c846480;
      uVar9 = DAT_14c846480._4_4_;
      uVar30 = (undefined4)DAT_14c846488;
      uVar31 = DAT_14c846488._4_4_;
      dVar5 = DAT_14c846490;
    }
    else {
      auVar26 = divpd(_DAT_149934d80,auVar3);
      auVar24 = divpd(ZEXT816(0x3ff0000000000000),auVar4);
      local_188 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar26._0_8_);
      dStack_180 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar26._8_8_);
      local_198 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar24._0_8_);
      dVar15 = *(double *)(param_2 + 0x50);
      dVar20 = -dVar15;
      dVar22 = -*(double *)(param_2 + 0x58);
      dVar5 = *(double *)(param_2 + 0x60) * -1.0;
      dVar16 = *(double *)(param_2 + 0x68) * 1.0;
      dVar19 = *(double *)(param_2 + 0x70) * local_188;
      dVar21 = *(double *)(param_2 + 0x78) * dStack_180;
      uStack_190 = 0;
      dVar23 = *(double *)(param_2 + 0x80) * local_198;
      uVar27 = SUB84(dVar16,0);
      uVar28 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar17 = dVar21 * dVar20 - dVar22 * dVar19;
      dVar18 = dVar23 * dVar22 - dVar5 * dVar21;
      dVar25 = dVar19 * dVar5 - dVar20 * dVar23;
      dVar18 = dVar18 + dVar18;
      dVar25 = dVar25 + dVar25;
      dVar17 = dVar17 + dVar17;
      local_1a8 = 0.0 - ((dVar17 * dVar22 - dVar25 * dVar5) + dVar16 * dVar18 + dVar19);
      dStack_1a0 = 0.0 - (dVar17 * dVar15 + dVar5 * dVar18 + dVar16 * dVar25 + dVar21);
      local_1b8 = 0.0 - (dVar16 * dVar17 + dVar23 + (dVar25 * dVar20 - dVar18 * dVar22));
      uStack_1b0 = 0;
      uVar29 = SUB84(dVar15,0);
      uVar9 = (int)((ulonglong)dVar20 >> 0x20);
      uVar30 = SUB84(*(double *)(param_2 + 0x58),0);
      uVar31 = (int)((ulonglong)dVar22 >> 0x20);
    }
    lVar13 = *param_3;
    local_158 = (double)CONCAT44(uVar9,uVar29);
    dStack_150 = (double)CONCAT44(uVar9,uVar29);
    local_178 = (double)CONCAT44(uVar31,uVar30);
    dStack_170 = (double)CONCAT44(uVar31,uVar30);
    lVar14 = 0;
    local_168 = dVar5;
    dStack_160 = dVar5;
    do {
      dVar22 = dStack_180;
      dVar20 = local_188;
      dVar16 = local_198;
      pdVar1 = (double *)(lVar13 + 8 + lVar14);
      dVar19 = *pdVar1 * local_188;
      dVar21 = pdVar1[1] * dStack_180;
      dVar15 = *(double *)(lVar13 + 0x18 + lVar14) * local_198;
      dVar17 = dVar21 * (double)CONCAT44(uVar9,uVar29) - (double)CONCAT44(uVar31,uVar30) * dVar19;
      dVar18 = dVar15 * (double)CONCAT44(uVar31,uVar30) - dVar5 * dVar21;
      dVar25 = dVar19 * dVar5 - (double)CONCAT44(uVar9,uVar29) * dVar15;
      dVar18 = dVar18 + dVar18;
      dVar25 = dVar25 + dVar25;
      dVar17 = dVar17 + dVar17;
      pdVar1 = (double *)(lVar13 + 8 + lVar14);
      *pdVar1 = (dVar17 * (double)CONCAT44(uVar31,uVar30) - dVar25 * dVar5) +
                (double)CONCAT44(uVar28,uVar27) * dVar18 + dVar19 + local_1a8;
      pdVar1[1] = (dVar5 * dVar18 - (double)CONCAT44(uVar9,uVar29) * dVar17) +
                  (double)CONCAT44(uVar28,uVar27) * dVar25 + dVar21 + dStack_1a0;
      *(double *)(lVar13 + 0x18 + lVar14) =
           dVar17 * (double)CONCAT44(uVar28,uVar27) + dVar15 +
           (dVar25 * (double)CONCAT44(uVar9,uVar29) - dVar18 * (double)CONCAT44(uVar31,uVar30)) +
           local_1b8;
      FUN_144a7484c(lVar13 + 0x20 + lVar14,&local_148);
      local_128 = dStack_140 * local_168 * -1.0 +
                  local_158 * dStack_130 * 1.0 + (double)CONCAT44(uVar28,uVar27) * local_148 +
                  local_178 * local_138;
      dStack_120 = local_148 * dStack_160 * 1.0 +
                   dStack_150 * local_138 * -1.0 + (double)CONCAT44(uVar28,uVar27) * dStack_140 +
                   dStack_170 * dStack_130;
      local_118 = dStack_130 * local_168 * 1.0 +
                  ((local_158 * dStack_140 * 1.0 + (double)CONCAT44(uVar28,uVar27) * local_138) -
                  local_178 * local_148);
      dStack_110 = local_138 * dStack_160 * -1.0 +
                   ((dStack_150 * local_148 * -1.0 + (double)CONCAT44(uVar28,uVar27) * dStack_130) -
                   dStack_170 * dStack_140);
      FUN_1448052ee(&local_128,&local_108);
      *(undefined8 *)(lVar13 + 0x30 + lVar14) = local_f8;
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar14);
      *puVar2 = local_108;
      puVar2[1] = uStack_100;
      pdVar1 = (double *)(lVar13 + 0x40 + lVar14);
      dVar20 = *pdVar1 * dVar20;
      dVar22 = pdVar1[1] * dVar22;
      dVar16 = *(double *)(lVar13 + 0x50 + lVar14) * dVar16;
      dVar15 = dVar22 * (double)CONCAT44(uVar9,uVar29) - (double)CONCAT44(uVar31,uVar30) * dVar20;
      dVar17 = dVar16 * (double)CONCAT44(uVar31,uVar30) - dVar5 * dVar22;
      dVar18 = dVar20 * dVar5 - (double)CONCAT44(uVar9,uVar29) * dVar16;
      dVar17 = dVar17 + dVar17;
      dVar18 = dVar18 + dVar18;
      dVar15 = dVar15 + dVar15;
      pdVar1 = (double *)(lVar13 + 0x40 + lVar14);
      *pdVar1 = (dVar15 * (double)CONCAT44(uVar31,uVar30) - dVar18 * dVar5) +
                (double)CONCAT44(uVar28,uVar27) * dVar17 + dVar20;
      pdVar1[1] = (dVar5 * dVar17 - (double)CONCAT44(uVar9,uVar29) * dVar15) +
                  (double)CONCAT44(uVar28,uVar27) * dVar18 + dVar22;
      *(double *)(lVar13 + 0x50 + lVar14) =
           dVar15 * (double)CONCAT44(uVar28,uVar27) + dVar16 +
           (dVar18 * (double)CONCAT44(uVar9,uVar29) - dVar17 * (double)CONCAT44(uVar31,uVar30));
      lVar14 = lVar14 + 0x160;
    } while ((longlong)(int)lVar10 * 0x160 - lVar14 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140177ada FUN_140177ada body=60 status=ok
// SIG undefined FUN_140177ada(void)

void FUN_140177ada(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140177b16(param_1,param_2);
    param_1 = param_1 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return;
}



// FUNCTION 140177b16 FUN_140177b16 body=302 status=ok
// SIG undefined FUN_140177b16(void)

undefined8 * FUN_140177b16(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_144881636(param_1 + 0xd,param_2 + 0xd);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_140177c44(param_1 + 0x17,param_2 + 0x17);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  _Src = (void *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_14017819c(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],_Src,(longlong)iVar1 * 0x48);
  }
  puVar3 = param_2 + 0x23;
  puVar4 = param_1 + 0x23;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// FUNCTION 140177c44 FUN_140177c44 body=154 status=ok
// SIG undefined FUN_140177c44(void)

longlong FUN_140177c44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140177c70;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140177c70:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140177cde(param_1,param_2);
  return param_1;
}



// FUNCTION 140177cde FUN_140177cde body=408 status=ok
// SIG undefined FUN_140177cde(void)

longlong * FUN_140177cde(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong *_Dst;
  undefined8 *puVar12;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140177e76(param_1,(ulonglong)uVar1);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar7 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar9 = uVar7;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar10 = (undefined4 *)*param_2;
      puVar12 = (undefined8 *)(*param_1 + 0x10);
      uVar11 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(puVar12 + -2) = *puVar10;
          *(undefined4 *)((longlong)puVar12 + -0xc) = puVar10[1];
        }
        else {
          uVar3 = puVar10[1];
          uVar4 = puVar10[2];
          uVar5 = puVar10[3];
          *(undefined4 *)(puVar12 + -2) = *puVar10;
          *(undefined4 *)((longlong)puVar12 + -0xc) = uVar3;
          *(undefined4 *)(puVar12 + -1) = uVar4;
          *(undefined4 *)((longlong)puVar12 + -4) = uVar5;
          *puVar12 = 0;
          iVar2 = puVar10[6];
          _Src = *(void **)(puVar10 + 4);
          *(int *)(puVar12 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar12,iVar2,0);
            memcpy((void *)*puVar12,_Src,(longlong)iVar2 * 2);
          }
          puVar12[2] = *(undefined8 *)(puVar10 + 8);
        }
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 10;
        puVar12 = puVar12 + 5;
      } while (uVar1 != uVar11);
    }
  }
  return param_1;
}



// FUNCTION 140177e76 FUN_140177e76 body=529 status=ok
// SIG undefined FUN_140177e76(void)

void FUN_140177e76(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140177ea9;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_140177ea9;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140177ea9:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140178088 FUN_140178088 body=274 status=ok
// SIG undefined FUN_140178088(void)

void FUN_140178088(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x160;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14017819c FUN_14017819c body=334 status=ok
// SIG undefined FUN_14017819c(void)

void FUN_14017819c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14017820e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14017820e:
    iVar5 = (int)(uVar4 / 0x48);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x48,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140178320 FUN_140178320 body=581 status=ok
// SIG undefined FUN_140178320(void)

ulonglong FUN_140178320(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  uVar3 = FUN_14493c560();
  if (uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)((uVar3 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar3 >> 0xe) * 8);
  }
  *(undefined8 *)(lVar6 + 8) = param_2;
  do {
    while( true ) {
      do {
        uVar2 = *(ulonglong *)(param_1 + 8);
        if ((uVar2 & 0x3ffffff) == 0) {
          puVar7 = (ulonglong *)0x0;
        }
        else {
          puVar7 = (ulonglong *)
                   ((ulonglong)(((uint)uVar2 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)(((uint)uVar2 & 0x3ffffff) >> 0xe) * 8)
                   );
        }
        uVar5 = *puVar7;
      } while (*(ulonglong *)(param_1 + 8) != uVar2);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar2 == *(ulonglong *)(param_1 + 8)) {
        *(ulonglong *)(param_1 + 8) = uVar4 | (uint)uVar5 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *puVar7;
    if (uVar5 == uVar1) {
      *puVar7 = uVar4 | uVar3;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14274643a();
  }
  LOCK();
  uVar4 = *(ulonglong *)(param_1 + 8);
  if (uVar2 == uVar4) {
    *(ulonglong *)(param_1 + 8) = uVar5 | uVar3;
    uVar4 = uVar2;
  }
  UNLOCK();
  return uVar4;
}



// FUNCTION 140178566 FUN_140178566 body=119 status=ok
// SIG undefined FUN_140178566(void)

void FUN_140178566(longlong *param_1)

{
  char cVar1;
  
  FUN_1401785de();
  if (((param_1[0x3e] != 0) && ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0)) &&
     ((longlong *)param_1[0x841] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf38))(param_1);
      if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x88b) & 1) != 0)) {
        cVar1 = FUN_140fb2a86(param_1,0);
        if (cVar1 != '\0') {
          FUN_1411229e0(param_1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1401785de FUN_1401785de body=145 status=ok
// SIG undefined FUN_1401785de(void)

void FUN_1401785de(longlong *param_1)

{
  char cVar1;
  
  if ((((param_1[0x3e] != 0) && ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0)) &&
      ((longlong *)param_1[0x39d] != (longlong *)0x0)) &&
     ((cVar1 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))(), cVar1 != '\0' &&
      (cVar1 = (**(code **)(*param_1 + 0xeb8))(param_1), cVar1 == '\0')))) {
    if (((*(byte *)(param_1 + 0x774) & 1) == 0) && (cVar1 = FUN_140178670(param_1), cVar1 == '\0'))
    {
      return;
    }
    cVar1 = (**(code **)(*param_1 + 0xed0))(param_1);
    if (cVar1 != '\0') {
      *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 0x20;
      *(byte *)(param_1 + 0x774) = *(byte *)(param_1 + 0x774) | 1;
                    /* WARNING: Could not recover jumptable at 0x000140178668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xec0))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140178670 FUN_140178670 body=365 status=ok
// SIG undefined FUN_140178670(void)

undefined8 FUN_140178670(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x3b60) != 0) && (cVar2 = FUN_1401787de(), cVar2 != '\0')) &&
     ((&DAT_00001100)[param_1] == '\x01')) {
    FUN_14880f230(param_1,&local_30);
    dVar6 = local_30 * local_30 + local_28 * local_28;
    if ((dVar6 != 1.0) || (NAN(dVar6))) {
      dVar4 = DAT_14c8464e0;
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar6) {
        dVar5 = local_28 * (1.0 / SQRT(dVar6));
        dVar4 = local_30 * (1.0 / SQRT(dVar6));
        dVar7 = 0.0;
      }
    }
    else {
      dVar4 = local_30;
      dVar5 = local_28;
      dVar7 = (double)(-(ulonglong)(local_20 == 0.0) & (ulonglong)local_20);
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x3b60) + 0x114);
    if (((fVar1 <= 0.0) ||
        (fVar1 <= (float)(dVar7 * 0.0 +
                         dVar4 * *(double *)(param_1 + 0x128) + dVar5 * *(double *)(param_1 + 0x130)
                         ))) &&
       ((cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd0))(param_1 + 0x178),
        cVar2 == '\0' || (*(char *)(*(longlong *)(param_1 + 0x3b60) + 0x11c) == '\x01')))) {
      uVar3 = 1;
      goto LAB_14017869d;
    }
  }
  uVar3 = 0;
LAB_14017869d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1401787de FUN_1401787de body=81 status=ok
// SIG undefined FUN_1401787de(void)

undefined8 FUN_1401787de(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_1 + 0x4110) != 0) && ((&DAT_00001100)[param_1] == '\x01')) &&
      (*(char *)(param_1 + 0x4170) == '\0')) &&
     (((lVar1 = *(longlong *)(param_1 + 0x3b60), lVar1 != 0 &&
       ((~*(uint *)(param_1 + 0x498) & 3) == 0)) &&
      (*(double *)(param_1 + 0x510) <= (double)*(float *)(lVar1 + 0x110))))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 14017883c FUN_14017883c body=953 status=ok
// SIG undefined FUN_14017883c(void)

void FUN_14017883c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  char local_b8;
  longlong local_b0;
  undefined8 local_a8;
  char local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_14477dc2a();
  FUN_14477dadc(uVar4,param_2);
  cVar2 = (**(code **)(*param_1 + 0x100))(param_1);
  if ((*(char *)((longlong)param_1 + 0x29) == '\0') || ((char)param_1[5] == cVar2)) {
    cVar7 = '\0';
    goto LAB_140178894;
  }
  fVar8 = (float)(**(code **)(*param_1 + 0x108))(param_1);
  if (fVar8 <= 1e-08) {
LAB_140178ba4:
    cVar7 = '\0';
  }
  else {
    plVar6 = (longlong *)FUN_14025b9ca(param_2);
    if (plVar6 == (longlong *)0x0) goto LAB_140178ba4;
    FUN_144ae08a0(&local_98);
    uVar9 = (**(code **)(*param_1 + 0x108))(param_1);
    local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar9);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_98);
    (**(code **)(*plVar6 + 0x30))(plVar6,*param_2,*(undefined4 *)((longlong)param_2 + 0x14));
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
    }
    cVar7 = '\x01';
  }
  cVar3 = (**(code **)(*param_1 + 0x128))(param_1);
  if (cVar3 != '\0') {
    local_98 = (longlong *)*param_2;
    plStack_90 = (longlong *)param_2[1];
    local_88 = CONCAT31(local_88._1_3_,1);
    uStack_84 = 0xffffffffffffffff;
    FUN_140320438(param_1 + 3);
  }
LAB_140178894:
  uVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
  local_b0 = param_2[1];
  local_a8 = 0;
  local_a0 = cVar2;
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a42d310;
    plVar6 = plVar5 + 2;
    FUN_140178c00(plVar6,param_2,uVar4);
    uVar4 = DAT_14cacd6c0;
    local_98 = plVar6;
    plStack_90 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_1447d2a40(&local_b0,param_2,&local_98,DAT_14cacd6c0);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_1447d2a40(&local_b0,param_2,&local_98,uVar4);
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  local_c8 = param_2[1];
  local_c0 = 0;
  local_b8 = cVar7;
  if (cVar7 != '\0') {
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14a42d900;
    local_98 = plVar6 + 2;
    plVar6[2] = (longlong)&PTR_FUN_14a42d920;
    uVar4 = DAT_14cacb914;
    plStack_90 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      FUN_1447d2a40(&local_c8,param_2,&local_98,DAT_14cacb914);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_1447d2a40(&local_c8,param_2,&local_98,uVar4);
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  *(char *)(param_1 + 5) = cVar2;
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  plVar6 = (longlong *)param_1[3];
  if (plVar6 != (longlong *)0x0) {
    local_98 = (longlong *)*param_2;
    plStack_90 = (longlong *)param_2[1];
    local_88 = (undefined4)param_2[2];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_78 = (undefined4)param_2[4];
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_70 = (undefined4)param_2[5];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_84 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),(int)param_1[4]);
    if ((plVar6[1] != 0) && ((*(byte *)(plVar6[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_98,plVar6);
      FUN_144b1fd46(&local_98,param_1[3]);
      FUN_144b1fe18(&local_98,param_1[3]);
      plVar6 = (longlong *)param_1[3];
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_98);
  }
  if (local_b8 == '\x01') {
    FUN_1447d2706(local_c8 + 0x148,local_c0);
  }
  if (local_a0 == '\x01') {
    FUN_1447d2706(local_b0 + 0x148,local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140178c00 FUN_140178c00 body=574 status=ok
// SIG undefined FUN_140178c00(void)

undefined8 * FUN_140178c00(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 ***local_78;
  undefined1 ***local_70;
  undefined1 *local_68;
  undefined8 ***pppuStack_60;
  undefined1 **local_58;
  undefined1 **local_50;
  code *local_48;
  undefined1 ***local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14a7d4e20;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(longlong *)(param_2 + 8) == 0) {
    cVar8 = '\0';
    goto LAB_140178d4c;
  }
  local_58 = (undefined1 **)0x0;
  pppuStack_60 = &local_70;
  local_68 = &LAB_14794b244;
  local_48 = (code *)&LAB_14794b236;
  local_70 = &local_58;
  local_50 = &local_68;
  local_40 = &local_50;
  FUN_14015e554(*(longlong *)(param_2 + 8) + 0x148,DAT_14cacd6c0);
  if (local_58 == (undefined1 **)0x0) {
LAB_140178cb6:
    cVar8 = '\0';
  }
  else {
    uVar3 = *(uint *)(local_58 + 2);
    *(uint *)(param_1 + 2) = uVar3 + 1;
    puVar6 = local_58[1];
    param_1[3] = puVar6;
    if ((uVar3 & 1) == 0) goto LAB_140178cb6;
    cVar8 = FUN_14793b368(puVar6,param_1[1]);
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    local_68 = (undefined1 *)0x0;
    pppuStack_60 = (undefined1 ****)0x0;
    local_50 = &local_80;
    local_80 = &LAB_1433f533c;
    local_48 = FUN_1433f528e;
    local_78 = &local_58;
    local_58 = &local_68;
    local_40 = &local_50;
    FUN_140178e40(*(longlong *)(param_2 + 8) + 0x148,DAT_14caccb08);
    if ((undefined1 ****)pppuStack_60 != (undefined1 ****)0x0) {
      LOCK();
      *(int *)((longlong)pppuStack_60 + 0xc) = *(int *)((longlong)pppuStack_60 + 0xc) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[5];
    param_1[4] = local_68;
    param_1[5] = pppuStack_60;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    if ((undefined1 ****)pppuStack_60 != (undefined1 ****)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)pppuStack_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppuStack_60)[2])();
      }
    }
  }
LAB_140178d4c:
  plVar4 = (longlong *)param_1[5];
  if (plVar4 != (longlong *)0x0) {
    iVar9 = (int)plVar4[1];
    do {
      if (iVar9 == 0) goto LAB_140178d9a;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar12 = iVar9 == iVar7;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      if (cVar8 == '\0') {
        uVar10 = param_1[1];
      }
      else {
        param_1[1] = 0;
        uVar10 = 0;
      }
      lVar11 = *(longlong *)(lVar5 + 0x18);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(lVar5 + 0x10);
      }
      *(undefined8 *)(lVar11 + 0x290) = uVar10;
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_140178d9a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140178e40 FUN_140178e40 body=302 status=ok
// SIG undefined FUN_140178e40(void)

void FUN_140178e40(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x908) != *(int *)(param_1 + 0x92c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x930;
    if (*(longlong *)(param_1 + 0x940) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x940);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x948) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x900);
      if (*(longlong *)(param_1 + 0x900) == 0) {
        lVar3 = param_1;
      }
      do {
        lVar6 = lVar3 + (longlong)iVar5 * 0x120;
        if (*(longlong *)(lVar3 + (longlong)iVar5 * 0x120) == param_2) {
          if (((lVar6 != 0) && (lVar6 + 8 != 0)) && (*(int *)(lVar6 + 0x110) != 0)) {
            lVar3 = lVar6 + 8;
            if (*(longlong *)(lVar6 + 0x108) != 0) {
              lVar3 = *(longlong *)(lVar6 + 0x108);
            }
            lVar6 = (longlong)(*(int *)(lVar6 + 0x110) + -1) * 0x20;
            plVar1 = *(longlong **)(lVar3 + lVar6);
            (**(code **)(*plVar1 + 8))(plVar1,&local_38);
            if (local_38 == param_2) {
              (*(code *)*param_3)(param_3[1],lVar3 + lVar6);
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x118);
      } while (iVar5 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140178f70 FUN_140178f70 body=745 status=ok
// SIG undefined FUN_140178f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140178f70(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa8bc) {
    FUN_144b3d300(&DAT_14caaa8bc);
    if (DAT_14caaa8bc == -1) {
      _DAT_14caaa8b0 = 0;
      DAT_14caaa8b8 = -1;
      _Init_thread_footer(&DAT_14caaa8bc);
    }
  }
  if (DAT_14caaa8b8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa8c8) {
      FUN_144b3d300(&DAT_14caaa8c8);
      if (DAT_14caaa8c8 == -1) {
        FUN_1446ddc76(&DAT_14caaa8c0,"MirrorDataTable",1);
        _Init_thread_footer(&DAT_14caaa8c8);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar6,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_34,DAT_14caaa8c0,param_1,DAT_14caaa288);
    DAT_14caaa8b8 = local_2c;
    _DAT_14caaa8b0 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa8b8 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined8 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined8 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined8 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined8 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017925a FUN_14017925a body=744 status=ok
// SIG undefined FUN_14017925a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14017925a(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa8fc) {
    FUN_144b3d300(&DAT_14caaa8fc);
    if (DAT_14caaa8fc == -1) {
      _DAT_14caaa8f0 = 0;
      DAT_14caaa8f8 = -1;
      _Init_thread_footer(&DAT_14caaa8fc);
    }
  }
  if (DAT_14caaa8f8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa908) {
      FUN_144b3d300(&DAT_14caaa908);
      if (DAT_14caaa908 == -1) {
        FUN_1446ddc76(&DAT_14caaa900,"bMirror",1);
        _Init_thread_footer(&DAT_14caaa908);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar6,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_34,DAT_14caaa900,param_1,DAT_14caaa288);
    DAT_14caaa8f8 = local_2c;
    _DAT_14caaa8f0 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa8f8 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017954e FUN_14017954e body=972 status=ok
// SIG undefined FUN_14017954e(void)

void FUN_14017954e(longlong param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  uint local_60;
  undefined4 local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  int *local_48;
  uint local_40;
  int local_3c;
  undefined1 *local_38;
  uint local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017991c(local_28);
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_30 = (uint)bVar1;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_38 = (undefined1 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar1 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar5 = uVar2 & 0x7fff;
    if (uVar5 == 0x7fff) {
      local_38 = local_2c;
      local_30 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x80);
      local_30 = 1;
      local_38 = (undefined1 *)
                 ((ulonglong)(uVar5 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                 (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_40 = (uint)bVar1;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_48 = (int *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar1 * 4 +
                      *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar5 = uVar2 & 0x7fff;
    if (uVar5 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x80);
      local_40 = 1;
      local_48 = (int *)((ulonglong)(uVar5 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                        (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_50 = (uint)bVar1;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_58 = (int *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar1 * 4 +
                      *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar5 = uVar2 & 0x7fff;
    if (uVar5 == 0x7fff) {
      local_58 = &local_4c;
      local_50 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x80);
      local_50 = 1;
      local_58 = (int *)((ulonglong)(uVar5 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                        (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_60 = (uint)bVar1;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_68 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar1 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar5 = uVar2 & 0x7fff;
    if (uVar5 == 0x7fff) {
      local_68 = &local_5c;
      local_60 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x80);
      local_60 = 1;
      local_68 = (undefined4 *)
                 ((ulonglong)(uVar5 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70) +
                 (longlong)*(int *)(lVar4 + 0x4c) * 4);
    }
  }
  piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar6 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar7 = 0;
    do {
      if (((*(char *)(param_1 + 0x94) == '\x01') && (*(char *)(param_1 + 0x2b0) == '\x01')) &&
         (*(int *)(local_20 + 8) != 0)) {
        *local_48 = *(int *)(param_1 + 0x290) + 1;
        local_48 = local_48 + (int)local_40;
        *local_58 = *(int *)(local_20 + 8) + *(int *)(param_1 + 0x290);
        local_58 = local_58 + (int)local_50;
        *local_68 = *(undefined4 *)(local_20 + 8);
      }
      else {
        *local_48 = 0;
        local_48 = local_48 + (int)local_40;
        *local_58 = 0;
        local_58 = local_58 + (int)local_50;
        *local_68 = 0;
      }
      local_68 = local_68 + (int)local_60;
      iVar7 = iVar7 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
    } while (iVar7 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017991c FUN_14017991c body=148 status=ok
// SIG undefined FUN_14017991c(void)

void FUN_14017991c(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 1401799b0 FUN_1401799b0 body=79 status=ok
// SIG undefined FUN_1401799b0(void)

undefined8 * FUN_1401799b0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140179af6(param_1,iVar1);
      FUN_144882cee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140179a00 FUN_140179a00 body=88 status=ok
// SIG undefined FUN_140179a00(void)

undefined8 * FUN_140179a00(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140179be4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xba0);
      }
    }
  }
  return param_1;
}



// FUNCTION 140179a58 FUN_140179a58 body=93 status=ok
// SIG undefined FUN_140179a58(void)

undefined8 * FUN_140179a58(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1447350ca(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140179cda(param_1,iVar1);
      FUN_140179ab5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140179ab5 FUN_140179ab5 body=65 status=ok
// SIG undefined FUN_140179ab5(void)

void FUN_140179ab5(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2 * 8);
      *(longlong **)(param_1 + lVar2 * 8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 140179af6 FUN_140179af6 body=238 status=ok
// SIG undefined FUN_140179af6(void)

void FUN_140179af6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
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



// FUNCTION 140179be4 FUN_140179be4 body=245 status=ok
// SIG undefined FUN_140179be4(void)

void FUN_140179be4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0xba0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    iVar2 = (int)(uVar1 / 0xba0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xba0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140179cda FUN_140179cda body=317 status=ok
// SIG undefined FUN_140179cda(void)

void FUN_140179cda(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140179d57;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
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
LAB_140179d57:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140179e18 FUN_140179e18 body=329 status=ok
// SIG undefined FUN_140179e18(void)

void FUN_140179e18(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140179e86;
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
LAB_140179e86:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x28)) {
      uVar5 = uVar3 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x28,8);
  }
  return;
}



// FUNCTION 140179f62 FUN_140179f62 body=96 status=ok
// SIG undefined FUN_140179f62(void)

void FUN_140179f62(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  if (param_1[0x10] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x1f8))(param_1);
    if (lVar2 != 0) {
      FUN_1448830cc(param_1[0x10] + 0x8e8,param_1 + 0xf,lVar2);
    }
  }
  FUN_140179fc2(param_1,param_2);
  return;
}



// FUNCTION 140179fc2 FUN_140179fc2 body=494 status=ok
// SIG undefined FUN_140179fc2(void)

void FUN_140179fc2(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  float local_78;
  undefined1 local_70;
  char local_59;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  fVar5 = (float)(**(code **)(*param_1 + 0x1c8))(param_1);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x1c0))(param_1);
  if (plVar4 == (longlong *)0x0) goto LAB_14017a0a6;
  fVar6 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  cVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (cVar1 == '\0') {
LAB_14017a0d5:
    if (plVar4[8] == 0) goto LAB_14017a076;
    if ((char)param_1[8] == '\0') {
      fVar6 = *(float *)((longlong)param_1 + 0x2c);
    }
    else {
      (**(code **)(*param_1 + 0x1e8))(param_1,&local_59);
      fVar6 = fVar5;
      if (local_59 == '\x02') {
LAB_14017a173:
        *(float *)((longlong)param_1 + 0x2c) = fVar6;
      }
      else if (local_59 == '\x01') {
        fVar6 = (float)(**(code **)(*param_1 + 0x1f0))(param_1);
        goto LAB_14017a173;
      }
      fVar7 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
      fVar6 = *(float *)((longlong)param_1 + 0x2c);
      if (fVar7 <= *(float *)((longlong)param_1 + 0x2c)) {
        fVar6 = fVar7;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x2c) = fVar6;
    }
    fVar6 = (float)(**(code **)(*param_1 + 0x198))(param_1,fVar5,fVar6);
    local_78 = 0.0;
    if ((fVar6 == 0.0) && (!NAN(fVar6))) {
      *(float *)((longlong)param_1 + 0x2c) = fVar5;
    }
    if (1e-08 < ABS(*(float *)(param_2 + 0x28)) && 1e-08 < ABS(*(float *)(plVar4 + 0x16))) {
      local_78 = fVar6 / (*(float *)(param_2 + 0x28) * *(float *)(plVar4 + 0x16));
    }
  }
  else {
    (**(code **)(*param_1 + 0x158))(param_1,&local_58);
    if (local_58 != 0) goto LAB_14017a0d5;
    cVar1 = (**(code **)(*param_1 + 0x168))(param_1);
    if (cVar1 == '\x02') goto LAB_14017a0d5;
LAB_14017a076:
    *(float *)((longlong)param_1 + 0x2c) = fVar5;
    local_78 = 0.0;
  }
  uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  local_70 = 1;
  FUN_1447a9f5a(param_1,param_2,plVar4,uVar2);
LAB_14017a0a6:
  *(undefined1 *)(param_1 + 8) = 0;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017a1cc FUN_14017a1cc body=157 status=ok
// SIG undefined FUN_14017a1cc(void)

void FUN_14017a1cc(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x1c0))(param_1);
    if (plVar1 == (longlong *)0x0) {
      fVar2 = 0.0;
    }
    else {
      (**(code **)(*plVar1 + 0x318))(plVar1,&local_20);
      fVar2 = (float)(((double)((longlong)(int)param_1[0xd] * (longlong)local_1c) +
                      (double)((ulonglong)(double)local_1c & 0x8000000000000000)) / (double)local_20
                     );
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 14017a26a FUN_14017a26a body=148 status=ok
// SIG undefined FUN_14017a26a(void)

float FUN_14017a26a(longlong *param_1,float param_2,float param_3)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  
  param_2 = param_2 - param_3;
  cVar1 = (**(code **)(*param_1 + 0x120))();
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x1c0))(param_1);
    fVar3 = (float)(**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (fVar3 * 0.5 < ABS(param_2)) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x1c0))(param_1);
      fVar3 = (float)(**(code **)(*plVar2 + 0x2b0))(plVar2);
      if (param_2 <= 0.0) {
        param_2 = param_2 + fVar3;
      }
      else {
        param_2 = param_2 - fVar3;
      }
    }
  }
  return param_2;
}



// FUNCTION 14017a308 FUN_14017a308 body=11 status=ok
// SIG undefined FUN_14017a308(void)

void FUN_14017a308(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014017a30f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
  return;
}



// FUNCTION 14017a314 FUN_14017a314 body=39 status=ok
// SIG undefined FUN_14017a314(void)

void FUN_14017a314(longlong param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_1401cd118(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014017a334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bifrost::telemetry::rowBuilder::vEndObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
  return;
}



// FUNCTION 14017a33c FUN_14017a33c body=116 status=ok
// SIG undefined FUN_14017a33c(void)

void FUN_14017a33c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14017a3b0(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147c63c3e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14017a3b0 FUN_14017a3b0 body=353 status=ok
// SIG undefined FUN_14017a3b0(void)

void FUN_14017a3b0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14017a435;
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
LAB_14017a435:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14017a512 FUN_14017a512 body=558 status=ok
// SIG undefined FUN_14017a512(void)

void FUN_14017a512(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0 [2];
  longlong *local_c0;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = *(longlong *)(param_2 + 8);
  }
  local_58 = 0;
  uStack_50 = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar6 = 0;
    do {
      bVar7 = (longlong)uStack_50 < 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (bVar7) {
        FUN_1448831cc(&local_58,0);
      }
      bVar7 = local_d8 == 0;
      local_60 = (longlong *)0x0;
      local_68 = 0;
      FUN_14017a903(lVar6 * 0x80 + *(longlong *)(param_1 + 0xb8),param_2,&local_60,&local_68);
      if (local_60 == (longlong *)0x0 || bVar7) {
        if (local_68 != 0) {
          FUN_14017ac5a(local_d0);
          FUN_14017aacc(local_d0);
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_c0 + 0x10))();
            }
          }
        }
      }
      else {
        (**(code **)(*local_60 + 0x18))(local_60,*(undefined8 *)(local_d8 + 0x100),&local_58);
      }
      if (0 < (int)uStack_50) {
        FUN_14017a7ae(param_1,param_2,&local_58);
        iVar3 = *(int *)(param_3 + 8) + (int)uStack_50;
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar3);
        }
        if (*(int *)(param_3 + 0xc) < iVar3) {
          FUN_1448831cc(param_3);
        }
        lVar2 = local_58;
        if ((int)uStack_50 != 0) {
          lVar5 = (longlong)(int)uStack_50;
          lVar4 = 0;
          do {
            local_d0[0] = *(longlong *)(lVar2 + lVar4);
            if (local_d0[0] != 0) {
              FUN_14017a742(param_3);
            }
            lVar4 = lVar4 + 8;
          } while (lVar5 * 8 != lVar4);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0xc0));
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017a742 FUN_14017a742 body=107 status=ok
// SIG undefined FUN_14017a742(void)

ulonglong FUN_14017a742(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_14017a76d;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_14017a76d:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14017a7ae FUN_14017a7ae body=341 status=ok
// SIG undefined FUN_14017a7ae(void)

void FUN_14017a7ae(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((*(byte *)(param_1 + 0xcc) & 1) != 0) {
    uVar1 = *(uint *)(param_3 + 1);
    if ((int)*(uint *)(param_1 + 0xe0) < (int)*(uint *)(param_3 + 1)) {
      uVar1 = *(uint *)(param_1 + 0xe0);
    }
    if (0 < (int)uVar1) {
      lVar7 = 8;
      uVar8 = 0;
      do {
        if (*(longlong *)(*param_3 + uVar8 * 8) != 0) {
          if ((((param_2 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar7) == 0)) ||
              (plVar3 = (longlong *)FUN_144741050(*(longlong *)(param_1 + 0xd8) + lVar7 + 8),
              *plVar3 == 0)) ||
             (lVar4 = FUN_144aee8ce(param_2,*(longlong *)(param_1 + 0xd8) + lVar7), lVar4 == 0)) {
LAB_14017a80e:
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + -8 + lVar7);
            if (lVar4 == 0) goto LAB_14017a826;
          }
          else {
            lVar5 = FUN_1402d2740();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_14017a80e;
          }
          *(longlong *)(*param_3 + uVar8 * 8) = lVar4;
        }
LAB_14017a826:
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar1 != uVar8);
    }
  }
  if ((0 < *(int *)(param_1 + 0xf0)) && ((longlong)(int)param_3[1] != 0)) {
    plVar2 = (longlong *)*param_3;
    plVar3 = plVar2 + (int)param_3[1];
    do {
      if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
        plVar6 = *(longlong **)(param_1 + 0xe8);
        lVar7 = (longlong)*(int *)(param_1 + 0xf0) << 4;
        do {
          if (*plVar6 == *plVar2) {
            if (plVar6 != (longlong *)0x0) {
              *plVar2 = plVar6[1];
            }
            break;
          }
          plVar6 = plVar6 + 2;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar3);
  }
  return;
}



// FUNCTION 14017a903 FUN_14017a903 body=455 status=ok
// SIG undefined FUN_14017a903(void)

void FUN_14017a903(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_2 == 0) || (param_1[1] == 0)) {
LAB_14017a939:
    lVar7 = *param_1;
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0xe0) == 0)) goto LAB_14017a94e;
  }
  else {
    plVar3 = (longlong *)FUN_144741050(param_1 + 2);
    if (*plVar3 == 0) goto LAB_14017a939;
    uVar4 = FUN_144741050(param_1 + 2);
    cVar2 = FUN_14487ac36(uVar4);
    if (cVar2 != '\0') {
      local_50 = (undefined4)param_1[2];
      local_58 = param_1[1];
      local_48 = 0;
      uStack_40 = 0;
      lVar7 = 0;
      piVar5 = (int *)(**(code **)(*(longlong *)(param_2 + 0x40) + 0x58))
                                (param_2 + 0x40,&local_58,0);
      if (piVar5 != (int *)0x0) {
        iVar1 = *piVar5;
        if ((((longlong)iVar1 < 0) || (*(int *)(param_2 + 0x78) <= iVar1)) ||
           (lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar1 * 8), lVar7 == 0))
        {
          lVar7 = 0;
        }
        else {
          uVar4 = FUN_145a7883e();
          lVar7 = FUN_144718840(lVar7,uVar4);
        }
      }
      *param_3 = lVar7;
      if (local_48 != 0) {
        FUN_1400020a8();
        lVar7 = *param_3;
      }
      if (lVar7 != 0) goto LAB_14017a94e;
    }
    local_50 = (undefined4)param_1[2];
    local_58 = param_1[1];
    local_48 = 0;
    uStack_40 = 0;
    piVar5 = (int *)(**(code **)(*(longlong *)(param_2 + 0x40) + 0x58))(param_2 + 0x40,&local_58,0);
    if (piVar5 == (int *)0x0) {
LAB_14017aa64:
      lVar7 = 0;
    }
    else {
      iVar1 = *piVar5;
      if ((((longlong)iVar1 < 0) || (*(int *)(param_2 + 0x88) <= iVar1)) ||
         (lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x80) + (longlong)iVar1 * 8), lVar7 == 0))
      goto LAB_14017aa64;
      lVar6 = FUN_1406d0862();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_14017aa64;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0xe0) == 0)) goto LAB_14017a939;
  }
  *param_4 = lVar7;
LAB_14017a94e:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14017aacc FUN_14017aacc body=398 status=ok
// SIG undefined FUN_14017aacc(void)

void FUN_14017aacc(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar11 = *(uint *)(param_1 + 0x18), -1 < (int)uVar11))
       && ((int)uVar11 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar3 = *plVar8, lVar3 != 0)))) {
    lVar6 = (longlong)(int)(*(longlong **)(param_1 + 0x20))[1];
    if (lVar6 != 0) {
      plVar10 = (longlong *)**(longlong **)(param_1 + 0x20);
      plVar8 = plVar10 + lVar6;
      do {
        lVar6 = *plVar10;
        lVar9 = lVar6 + 0x10;
        if (*(longlong *)(lVar6 + 0x30) != 0) {
          lVar9 = *(longlong *)(lVar6 + 0x30);
        }
        iVar1 = *(int *)(lVar6 + 0x38);
        if ((longlong)iVar1 != 0) {
          lVar6 = 0;
          do {
            iVar4 = *(int *)(lVar9 + lVar6);
            uVar5 = (ulonglong)iVar4;
            if (-1 < (longlong)uVar5) {
              iVar2 = (int)param_2[1];
              if (iVar4 < iVar2) {
                if (*(longlong *)(*param_2 + uVar5 * 8) != 0) goto LAB_14017ac2d;
LAB_14017abf2:
                iVar4 = (int)uVar5;
                if ((*(int *)(lVar3 + 0x160) <= iVar4) ||
                   (lVar7 = *(longlong *)
                             (*(longlong *)(lVar3 + 0x158) + (uVar5 & 0xffffffff) * 0x30),
                   lVar7 == 0)) goto LAB_14017ac14;
              }
              else {
                uVar11 = (iVar4 - iVar2) + 1;
                *(int *)(param_2 + 1) = iVar4 + 1;
                if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar11) {
                  FUN_144769b64(param_2);
                }
                memset((void *)((longlong)iVar2 * 8 + *param_2),0,(longlong)(int)uVar11 << 3);
                uVar5 = (ulonglong)*(uint *)(lVar9 + lVar6);
                if (-1 < (int)*(uint *)(lVar9 + lVar6)) goto LAB_14017abf2;
LAB_14017ac14:
                FUN_14003fbd6();
                iVar4 = *(int *)(lVar9 + lVar6);
                lVar7 = DAT_14caea080;
              }
              *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar7;
            }
LAB_14017ac2d:
            lVar6 = lVar6 + 0x1c;
          } while ((longlong)iVar1 * 0x1c != lVar6);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar8);
    }
  }
  return;
}



// FUNCTION 14017ac5a FUN_14017ac5a body=543 status=ok
// SIG undefined FUN_14017ac5a(void)

undefined8 * FUN_14017ac5a(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14adff230;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 3) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar8 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar8 = iVar10;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar8;
  param_1[4] = *(undefined8 *)(param_2 + 0xe0);
  if ((DAT_14cb0d2b0 == 0) || (*(char *)(DAT_14cb0d2b0 + 0xd58) != '\x01')) {
    uVar9 = *(undefined4 *)(param_2 + 0x150);
  }
  else {
    uVar9 = 0;
    if (DAT_14c760db4 != 1) {
      uVar9 = DAT_14c761b9c;
    }
    if (DAT_14c761de0 == 0) {
      uVar9 = DAT_14c761b9c;
    }
    uVar9 = FUN_144b1da20(param_2 + 0xe8,uVar9);
  }
  lVar11 = DAT_14cb0d2b0;
  *(undefined4 *)(param_1 + 5) = uVar9;
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0xd58) != '\x01')) {
    uVar9 = *(undefined4 *)(param_2 + 0x150);
  }
  else {
    uVar9 = 0;
    if (DAT_14c760db4 != 1) {
      uVar9 = DAT_14c761b9c;
    }
    if (DAT_14c761de0 == 0) {
      uVar9 = DAT_14c761b9c;
    }
    uVar9 = FUN_144b1da20(param_2 + 0xe8,uVar9);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  dVar1 = *(double *)(param_2 + 0x210);
  dVar2 = *(double *)(param_2 + 0x228);
  dVar3 = *(double *)(param_2 + 0x200);
  dVar4 = *(double *)(param_2 + 0x208);
  dVar5 = *(double *)(param_2 + 0x220);
  dVar6 = *(double *)(param_2 + 0x218);
  param_1[6] = dVar3 - dVar6;
  param_1[7] = dVar4 - dVar5;
  param_1[8] = dVar1 - dVar2;
  param_1[9] = dVar3 + dVar6;
  param_1[10] = dVar4 + dVar5;
  param_1[0xb] = dVar1 + dVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return param_1;
}



// FUNCTION 14017ae7a FUN_14017ae7a body=59 status=ok
// SIG undefined FUN_14017ae7a(void)

void FUN_14017ae7a(longlong *param_1)

{
  FUN_14017aeb5(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14017aeb5 FUN_14017aeb5 body=47 status=ok
// SIG undefined FUN_14017aeb5(void)

void FUN_14017aeb5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14017aee4 FUN_14017aee4 body=304 status=ok
// SIG undefined FUN_14017aee4(void)

undefined4 *
FUN_14017aee4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14017b016(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_144883308(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14017b2d2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017b016 FUN_14017b016 body=700 status=ok
// SIG undefined FUN_14017b016(void)

int * FUN_14017b016(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14017b1eb;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_14017b1eb:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x20);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14017b2d2 FUN_14017b2d2 body=670 status=ok
// SIG undefined FUN_14017b2d2(void)

void FUN_14017b2d2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14017b345;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14017b345:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14017b570 FUN_14017b570 body=433 status=ok
// SIG undefined FUN_14017b570(void)

void FUN_14017b570(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1403a682c;
      local_40 = 0;
      local_48 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14017b722(param_1,local_28);
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017b722 FUN_14017b722 body=435 status=ok
// SIG undefined FUN_14017b722(void)

void FUN_14017b722(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
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
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1[4];
  local_28 = param_2;
  if (lVar4 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_14017b7b1;
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          if (DVar2 != DVar3) goto LAB_14017b7b1;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_14017b7b1:
  lVar4 = param_1[0x7c];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar4;
  }
  FUN_14017b8d6(lVar4,&local_28);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017b8d6 FUN_14017b8d6 body=190 status=ok
// SIG undefined FUN_14017b8d6(void)

bool FUN_14017b8d6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x8f0) != *(int *)(param_1 + 0x91c)) {
    lVar3 = *param_2;
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    lVar5 = param_1 + 0x920;
    if (*(longlong *)(param_1 + 0x928) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x928);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x930) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x8e8) + (longlong)iVar4 * 0x48);
        if (*plVar1 == lVar3) {
          if (plVar1 == (longlong *)0x0) {
            return false;
          }
          if (plVar1 == (longlong *)&DAT_fffffffffffffff8) {
            return false;
          }
          if ((char)plVar1[6] == '\x01') {
            lVar3 = plVar1[7];
          }
          else {
            lVar3 = FUN_14018aa1e();
          }
          return lVar3 != 0;
        }
        iVar4 = (int)plVar1[8];
      } while (iVar4 != -1);
    }
  }
  return false;
}



// FUNCTION 14017b994 FUN_14017b994 body=272 status=ok
// SIG undefined FUN_14017b994(void)

void FUN_14017b994(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 != 0) && (1 < *(byte *)(lVar4 + 0x90))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    iVar7 = 0x7f;
    if (param_2 < 0x7f) {
      iVar7 = param_2;
    }
    iVar8 = -1;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    *(char *)(lVar4 + 0x1b6) = (char)iVar8;
    *(byte *)(lVar4 + 0x94) = *(byte *)(lVar4 + 0x94) | 8;
    if ((lVar5 != 0) && (lVar4 = *(longlong *)(lVar5 + 8), lVar4 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
        if (*(int *)(lVar5 + 0x18) == -1) {
          lVar6 = *(longlong *)(lVar4 + 0x98);
          uVar3 = *(uint *)(lVar5 + 0x1c);
          piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
          lVar6 = lVar6 + (ulonglong)uVar3 * 0x10;
          iVar7 = *(int *)(lVar6 + 0x1a0);
          *(int *)(lVar5 + 0x18) = iVar7;
          *(uint *)(lVar6 + 0x1a0) = iVar7 + 1U;
          if (*(uint *)(lVar6 + 0x1a4) < iVar7 + 1U) {
            FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar7);
          }
          lVar6 = *(longlong *)(lVar6 + 0x198);
          lVar9 = (longlong)iVar7 * 0x20;
          *(longlong *)(lVar6 + lVar9) = lVar5;
          *(undefined4 *)(lVar6 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014017ba12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar4 + 0x98) + 0x160,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14017baa4 FUN_14017baa4 body=272 status=ok
// SIG undefined FUN_14017baa4(void)

void FUN_14017baa4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 != 0) && (1 < *(byte *)(lVar4 + 0x90))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    iVar7 = 0x7f;
    if (param_2 < 0x7f) {
      iVar7 = param_2;
    }
    iVar8 = -1;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    *(char *)(lVar4 + 0x1b7) = (char)iVar8;
    *(byte *)(lVar4 + 0x94) = *(byte *)(lVar4 + 0x94) | 8;
    if ((lVar5 != 0) && (lVar4 = *(longlong *)(lVar5 + 8), lVar4 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
        if (*(int *)(lVar5 + 0x18) == -1) {
          lVar6 = *(longlong *)(lVar4 + 0x98);
          uVar3 = *(uint *)(lVar5 + 0x1c);
          piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
          lVar6 = lVar6 + (ulonglong)uVar3 * 0x10;
          iVar7 = *(int *)(lVar6 + 0x1a0);
          *(int *)(lVar5 + 0x18) = iVar7;
          *(uint *)(lVar6 + 0x1a0) = iVar7 + 1U;
          if (*(uint *)(lVar6 + 0x1a4) < iVar7 + 1U) {
            FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar7);
          }
          lVar6 = *(longlong *)(lVar6 + 0x198);
          lVar9 = (longlong)iVar7 * 0x20;
          *(longlong *)(lVar6 + lVar9) = lVar5;
          *(undefined4 *)(lVar6 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014017bb22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar4 + 0x98) + 0x160,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14017bbb4 FUN_14017bbb4 body=272 status=ok
// SIG undefined FUN_14017bbb4(void)

void FUN_14017bbb4(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 != 0) && (1 < *(byte *)(lVar4 + 0x90))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    iVar7 = 0x7f;
    if (param_2 < 0x7f) {
      iVar7 = param_2;
    }
    iVar8 = -1;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    *(char *)(lVar4 + 0x1b8) = (char)iVar8;
    *(byte *)(lVar4 + 0x94) = *(byte *)(lVar4 + 0x94) | 8;
    if ((lVar5 != 0) && (lVar4 = *(longlong *)(lVar5 + 8), lVar4 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
        if (*(int *)(lVar5 + 0x18) == -1) {
          lVar6 = *(longlong *)(lVar4 + 0x98);
          uVar3 = *(uint *)(lVar5 + 0x1c);
          piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
          lVar6 = lVar6 + (ulonglong)uVar3 * 0x10;
          iVar7 = *(int *)(lVar6 + 0x1a0);
          *(int *)(lVar5 + 0x18) = iVar7;
          *(uint *)(lVar6 + 0x1a0) = iVar7 + 1U;
          if (*(uint *)(lVar6 + 0x1a4) < iVar7 + 1U) {
            FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar7);
          }
          lVar6 = *(longlong *)(lVar6 + 0x198);
          lVar9 = (longlong)iVar7 * 0x20;
          *(longlong *)(lVar6 + lVar9) = lVar5;
          *(undefined4 *)(lVar6 + 8 + lVar9) = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014017bc32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar4 + 0x98) + 0x160,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14017bcc4 FUN_14017bcc4 body=132 status=ok
// SIG undefined FUN_14017bcc4(void)

void FUN_14017bcc4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,param_4);
  return;
}



// FUNCTION 14017bd48 FUN_14017bd48 body=338 status=ok
// SIG undefined FUN_14017bd48(void)

void FUN_14017bd48(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0xb) {
    uVar6 = 10;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (10 < *(uint *)(param_1 + 0x5c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14017bdd4;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14017bdd4:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x5c) = (int)uVar6;
  FUN_14017bcc4(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 14017be9c FUN_14017be9c body=493 status=ok
// SIG undefined FUN_14017be9c(void)

void FUN_14017be9c(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar6 = param_1 + 0x48;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      while (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 0x18),
            *puVar1 != param_2) {
        iVar7 = (int)puVar1[2];
        if (iVar7 == -1) {
          return;
        }
      }
      if (puVar1 == (ulonglong *)0x0) {
        return;
      }
      if (puVar1 == (ulonglong *)&DAT_fffffffffffffff8) {
        return;
      }
      iVar7 = *(int *)((longlong)puVar1 + 0xc);
      uVar3 = puVar1[1];
      iVar8 = *(int *)(param_1 + 0x138);
      *(uint *)(param_1 + 0x138) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x13c) < iVar8 + 1U) {
        FUN_14017bd48(param_1 + 0xe0,iVar8);
      }
      lVar6 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x130);
      }
      *(ulonglong *)(lVar6 + (longlong)iVar8 * 8) = uVar3;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - iVar7;
      if (*(int *)((longlong)puVar1 + 0xc) != 0) {
        uVar5 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x60) + (longlong)(int)((int)puVar1[1] + uVar5) * 4) =
               0xffffffff;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((longlong)puVar1 + 0xc));
      }
      iVar7 = *(int *)(param_1 + 0x74 + (ulonglong)*(byte *)(param_1 + 0x140) * 4);
      iVar8 = *(int *)(param_1 + 0x68);
      if (iVar7 < *(int *)(param_1 + 0x68)) {
        iVar8 = iVar7;
      }
      FUN_14017c08a(param_1 + 0x60,iVar8,1);
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        lVar6 = param_1 + 0x48;
        if (*(longlong *)(param_1 + 0x50) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x50);
        }
        iVar7 = *(int *)(lVar6 + ((longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x58) - 1U) *
                                 4);
        if (iVar7 != -1) {
          lVar2 = *(longlong *)(param_1 + 0x10);
LAB_14017c010:
          puVar1 = (ulonglong *)(lVar2 + (longlong)iVar7 * 0x18);
          if (*puVar1 != param_2) goto code_r0x00014017c020;
          iVar8 = *(int *)(lVar6 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          if (iVar8 == iVar7) {
            piVar9 = (int *)(lVar6 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          }
          else {
            do {
              piVar9 = (int *)(lVar2 + (longlong)iVar8 * 0x18 + 0x10);
              iVar8 = *piVar9;
            } while (iVar8 != iVar7);
          }
          *piVar9 = (int)puVar1[2];
          FUN_14017c0da();
        }
      }
LAB_14017c048:
      *(undefined1 *)(param_1 + 0x160) = 1;
    }
  }
  return;
code_r0x00014017c020:
  iVar7 = (int)puVar1[2];
  if (iVar7 == -1) goto LAB_14017c048;
  goto LAB_14017c010;
}



// FUNCTION 14017c08a FUN_14017c08a body=78 status=ok
// SIG undefined FUN_14017c08a(void)

void FUN_14017c08a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447808da();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_144780a3c();
      return;
    }
  }
  return;
}



// FUNCTION 14017c0da FUN_14017c0da body=114 status=ok
// SIG undefined FUN_14017c0da(void)

void FUN_14017c0da(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14017c158 FUN_14017c158 body=132 status=ok
// SIG undefined FUN_14017c158(void)

void FUN_14017c158(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_141142122(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 3 + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff)
             ,(ulonglong)uVar2 * 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d9a54c(param_1);
    return;
  }
  return;
}



// FUNCTION 14017c1dc FUN_14017c1dc body=162 status=ok
// SIG undefined FUN_14017c1dc(void)

void FUN_14017c1dc(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar2 = (uint *)*param_2;
  lVar7 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar5 = *(longlong *)(lVar7 + 0x20);
  lVar6 = 0;
  lVar3 = lVar5 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar3 = lVar6;
  }
  lVar4 = lVar5 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar8 = lVar5 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar8 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar1 = *(ushort *)(lVar7 + 0xe);
  if (uVar1 != 0) {
    lVar7 = 0;
    do {
      FUN_14017c27e(*(undefined8 *)(lVar5 + lVar7),*(undefined8 *)(lVar8 + lVar7),lVar4,
                    lVar3 + lVar7);
      lVar7 = lVar7 + 8;
      lVar4 = lVar4 + 0x60;
    } while ((ulonglong)uVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 14017c27e FUN_14017c27e body=231 status=ok
// SIG undefined FUN_14017c27e(void)

void FUN_14017c27e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [10];
  byte local_98;
  undefined8 local_90;
  undefined8 local_88 [10];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((int)param_2 < *(int *)(param_3 + 0xb)) ||
     (*(int *)((longlong)param_3 + 0x5c) != 0x7fffffff &&
      *(int *)((longlong)param_3 + 0x5c) <= (int)param_2)) {
    FUN_1400f0374(local_e8,param_1,0,param_2);
    if (local_e8 != param_3) {
      local_38 = local_98;
      (*(code *)(&PTR_LAB_14a46c4a0)[local_98])(local_88);
      puVar3 = local_88;
      puVar4 = param_3;
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    param_3[0xb] = local_90;
  }
  cVar1 = FUN_144809632(param_3,param_2,param_4);
  if (cVar1 == '\0') {
    *param_4 = 0x10000000000000;
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017c366 FUN_14017c366 body=362 status=ok
// SIG undefined FUN_14017c366(void)

longlong FUN_14017c366(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = (**(code **)(*(longlong *)(param_2 + 0x28) + 0x78))(param_2 + 0x28);
  if (((*(longlong *)(lVar5 + 0x30) != 0) &&
      (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0), lVar5 != 0)) &&
     (uVar1 = *(ulonglong *)(lVar5 + 0x3f0), uVar1 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar1);
    }
    local_28 = uVar1;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar1);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar1);
    }
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar3 = FUN_14017c546((longlong *)(param_1 + 0x30),uVar2 >> 0x10 ^ uVar2,&local_28);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x30);
      lVar5 = 0;
      if ((lVar6 + (longlong)iVar3 * 0x60 != 0) &&
         (plVar7 = (longlong *)(lVar6 + (longlong)iVar3 * 0x60 + 8), plVar7 != (longlong *)0x0)) {
        uVar4 = FUN_1447addd0(param_2 + 0x7c,0x10);
        iVar3 = FUN_14017c4d2(plVar7,uVar4,param_2 + 0x7c);
        if (iVar3 == -1) {
          lVar6 = 0;
        }
        else {
          lVar6 = (longlong)iVar3 * 0x30 + *plVar7;
        }
        lVar5 = lVar6 + 0x10;
        if (lVar6 == 0) {
          lVar5 = 0;
        }
      }
      goto LAB_14017c477;
    }
  }
  lVar5 = 0;
LAB_14017c477:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017c4d2 FUN_14017c4d2 body=116 status=ok
// SIG undefined FUN_14017c4d2(void)

int FUN_14017c4d2(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14017c546 FUN_14017c546 body=216 status=ok
// SIG undefined FUN_14017c546(void)

int FUN_14017c546(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x58 + (longlong)iVar1 * 0x60)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x60);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14017c61e FUN_14017c61e body=798 status=ok
// SIG undefined FUN_14017c61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017c61e(longlong param_1,longlong *param_2,byte param_3,char param_4,int param_5,
                  char param_6)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78 [4];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_a8 = param_1;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1400821c8(param_2,0);
  }
  uVar6 = _DAT_14cb0cc00;
  if (param_3 != 4) {
    uVar6 = (uint)param_3;
  }
  uVar6 = uVar6 & 0xff;
  uVar3 = uVar6;
  if (param_4 != '\0') {
    uVar6 = 0;
    uVar3 = 3;
  }
  if (param_5 == 5) {
    param_5 = DAT_14c760db4;
  }
  iVar11 = 0;
  if (param_6 == '\0') {
    iVar11 = param_5;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0x400000000;
  lVar12 = local_a8;
  local_98 = param_2;
  iVar15 = 4;
  if (param_6 == '\0') {
    iVar15 = param_5;
  }
  do {
    iVar2 = iVar11;
    if (iVar11 <= iVar15) {
      do {
        if (0 < (longlong)*(int *)(lVar12 + 600)) {
          lVar8 = 0;
          lVar10 = 0;
          do {
            lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x250) + lVar8 * 8);
            if (*(int *)(lVar14 + 0x24) == iVar2) {
              if (*(char *)(lVar14 + 0x20) == '\x04') {
                lVar10 = lVar14;
              }
              if (*(char *)(lVar14 + 0x20) == (char)uVar6) break;
            }
            lVar14 = lVar10;
            lVar8 = lVar8 + 1;
            lVar10 = lVar14;
          } while (*(int *)(lVar12 + 600) != lVar8);
          if (lVar14 != 0) {
            puVar5 = local_58;
            if (local_58 == (undefined8 *)0x0) {
              puVar5 = local_78;
            }
            lVar10 = (longlong)(int)local_50;
            if (lVar10 != 0) {
              uVar9 = 0;
              do {
                if (*(longlong *)((longlong)puVar5 + uVar9) == lVar14) {
                  if ((int)(~uVar9 >> 3) != 0) goto LAB_14017c763;
                  break;
                }
                uVar9 = uVar9 + 8;
              } while (lVar10 * 8 - uVar9 != 0);
            }
            uVar7 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar7);
            if (local_50._4_4_ < uVar7) {
              FUN_147bb1cb0(local_78);
              lVar12 = local_a8;
            }
            puVar5 = local_58;
            if (local_58 == (undefined8 *)0x0) {
              puVar5 = local_78;
            }
            puVar5[lVar10] = lVar14;
          }
        }
LAB_14017c763:
        bVar16 = iVar2 != iVar15;
        iVar2 = iVar2 + 1;
      } while (bVar16);
    }
    plVar4 = local_98;
    bVar16 = uVar6 == uVar3;
    uVar6 = uVar6 + 1;
    if (bVar16) {
      puVar5 = local_78;
      if (local_58 != (undefined8 *)0x0) {
        puVar5 = local_58;
      }
      if ((longlong)(int)local_50 != 0) {
        puVar13 = puVar5 + (int)local_50;
        do {
          uVar1 = *puVar5;
          iVar11 = 0;
          do {
            FUN_14017c93e(uVar1,&local_88,iVar11);
            if ((longlong)local_80 != 0) {
              lVar10 = (longlong)local_80 * 0x1c + local_88;
              lVar12 = local_88;
              local_a0 = puVar13;
              do {
                local_90 = 0;
                FUN_14017ca90(lVar12,local_a8,uVar1,&local_90);
                if (local_90 != 0) {
                  lVar8 = *plVar4;
                  iVar15 = (int)plVar4[1];
                  lVar14 = (longlong)iVar15;
                  if (lVar14 != 0) {
                    uVar9 = 0;
                    do {
                      if (*(longlong *)(lVar8 + uVar9) == local_90) {
                        if ((int)(~uVar9 >> 3) != 0) goto LAB_14017c84b;
                        break;
                      }
                      uVar9 = uVar9 + 8;
                    } while (lVar14 * 8 - uVar9 != 0);
                  }
                  *(uint *)(plVar4 + 1) = iVar15 + 1U;
                  if (*(uint *)((longlong)plVar4 + 0xc) < iVar15 + 1U) {
                    FUN_14473b392(plVar4,iVar15);
                    lVar8 = *plVar4;
                  }
                  *(longlong *)(lVar8 + lVar14 * 8) = local_90;
                }
LAB_14017c84b:
                lVar12 = lVar12 + 0x1c;
                puVar13 = local_a0;
              } while (lVar12 != lVar10);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 != 7);
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar13);
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14017c93e FUN_14017c93e body=338 status=ok
// SIG undefined FUN_14017c93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14017c93e(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  undefined *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      lVar7 = 0x18;
      if (iVar1 != 1) goto LAB_14017c98f;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_14017c98f;
    }
  }
  lVar7 = 0x10;
LAB_14017c98f:
  if (*(longlong *)(param_1 + lVar7) == 0) {
    puVar6 = &DAT_14caefcd8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caefe90) {
      FUN_144b3d300(&DAT_14caefe90);
      if (DAT_14caefe90 == -1) {
        puVar6 = &DAT_14caefcd8;
        memset(&DAT_14caefcd8,0,0xc4);
        memset(&DAT_14caefda0,0,0xe8);
        _DAT_14caefe88 = 0x1ffffff;
        DAT_14caefe8c = 0;
        atexit((_func_5014 *)&LAB_14357c04e);
        _Init_thread_footer(&DAT_14caefe90);
      }
    }
  }
  else {
    puVar6 = (undefined *)(*(longlong *)(*(longlong *)(param_1 + lVar7) + 0x28) + 0x70);
  }
  lVar7 = (param_3 & 0xffffffff) * 0x10;
  puVar2 = *(undefined **)(puVar6 + lVar7 + 0x30);
  puVar5 = puVar6 + ((longlong)puVar2 >> 0x18) + 0x30 + lVar7;
  if (((ulonglong)puVar2 & 1) == 0) {
    puVar5 = puVar2;
  }
  *param_2 = puVar5;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar6 + lVar7 + 0x38);
  return param_2;
}



// FUNCTION 14017ca90 FUN_14017ca90 body=76 status=ok
// SIG undefined FUN_14017ca90(void)

void FUN_14017ca90(int *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*param_1 == 0) && (param_1[2] == 0)) ||
     (cVar1 = (**(code **)(*param_2 + 0x3c8))(param_2,param_1,param_4,0), cVar1 == '\0')) {
    uVar2 = FUN_140081bf9(param_3,param_1[5]);
    *param_4 = uVar2;
  }
  return;
}



// FUNCTION 14017cadc FUN_14017cadc body=334 status=ok
// SIG undefined FUN_14017cadc(void)

void FUN_14017cadc(longlong *param_1,double *param_2,longlong param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = FUN_14017cc2c(param_1,param_2,local_68);
  iVar7 = (int)param_1[1];
  iVar9 = *(int *)(param_3 + 0x208) + iVar7;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (*(int *)(param_3 + 0x20c) < iVar9) {
    FUN_1488e2dca(param_3);
    iVar7 = (int)param_1[1];
  }
  if (iVar7 != 0) {
    lVar4 = *param_1;
    lVar10 = 0;
    do {
      pdVar2 = (double *)(lVar4 + 0x10 + lVar10);
      if ((((*param_2 < *pdVar2 || *param_2 == *pdVar2) &&
           (*(double *)(lVar4 + lVar10) < param_2[2] || *(double *)(lVar4 + lVar10) == param_2[2]))
          && (pdVar2 = (double *)(lVar4 + 0x18 + lVar10),
             param_2[1] < *pdVar2 || param_2[1] == *pdVar2)) &&
         (dVar3 = *(double *)(lVar4 + 8 + lVar10), dVar3 < param_2[3] || dVar3 == param_2[3])) {
        iVar9 = *(int *)(param_3 + 0x208);
        *(uint *)(param_3 + 0x208) = iVar9 + 1U;
        if (*(uint *)(param_3 + 0x20c) < iVar9 + 1U) {
          FUN_1488e2ec0(param_3,iVar9);
        }
        lVar8 = *(longlong *)(param_3 + 0x200);
        if (*(longlong *)(param_3 + 0x200) == 0) {
          lVar8 = param_3;
        }
        uVar5 = *(undefined8 *)(lVar4 + lVar10 + 0x30);
        puVar1 = (undefined8 *)(lVar8 + (longlong)iVar9 * 0x10);
        *puVar1 = *(undefined8 *)(lVar4 + lVar10 + 0x28);
        puVar1[1] = uVar5;
      }
      lVar10 = lVar10 + 0x38;
    } while ((longlong)iVar7 * 0x38 - lVar10 != 0);
  }
  if (0 < (int)uVar6) {
    uVar11 = 0;
    do {
      FUN_14017cadc(local_68[uVar11],param_2,param_3);
      uVar11 = uVar11 + 1;
    } while (uVar6 != uVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017cc2c FUN_14017cc2c body=145 status=ok
// SIG undefined FUN_14017cc2c(void)

ulonglong FUN_14017cc2c(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar7 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x18);
    }
    return uVar8;
  }
  return 0;
}



// FUNCTION 14017ccdc FUN_14017ccdc body=856 status=ok
// SIG undefined FUN_14017ccdc(void)

void FUN_14017ccdc(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14017d036();
  lVar7 = *(longlong *)(param_1 + 0x48);
  lVar8 = (longlong)param_2;
  lVar11 = lVar8 * 0x10;
  dVar4 = (double)*(float *)(lVar7 + 0xc + lVar11);
  dVar5 = (double)*(float *)(lVar7 + 4 + lVar11);
  lVar9 = lVar8 * 0x18;
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ = (double)*(float *)(lVar7 + lVar11);
  local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_f8._8_4_ = SUB84(dVar4,0);
  local_f8._0_8_ = (double)*(float *)(lVar7 + 8 + lVar11);
  local_f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar9);
  local_e8 = *puVar1;
  uStack_e0 = puVar1[1];
  local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar9);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  uVar10 = 0;
  FUN_14017d076(*(longlong *)(param_1 + 0xf8) + lVar9,lVar8 * 8 + *(longlong *)(param_1 + 0x60),
                local_108,0);
  if (*param_3 != 0) {
    uVar10 = *(undefined1 *)(*param_3 + 0x1a);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x158) + lVar8) = uVar10;
  if (*(char *)(*(longlong *)(param_1 + 0x158) + lVar8) != '\x01') goto LAB_14017cf99;
  (**(code **)(*(longlong *)*param_3 + 0x80))((longlong *)*param_3,local_108);
  lVar7 = *(longlong *)(param_1 + 0x110);
  lVar8 = lVar8 * 0x30;
  *(undefined8 *)(lVar7 + 0x10 + lVar8) = local_f8._0_8_;
  *(undefined8 *)(lVar7 + lVar8) = local_108._0_8_;
  ((undefined8 *)(lVar7 + lVar8))[1] = local_108._8_8_;
  puVar2 = (undefined4 *)(lVar7 + 0x18 + lVar8);
  *puVar2 = local_f8._8_4_;
  puVar2[1] = local_f8._12_4_;
  puVar2[2] = (undefined4)local_e8;
  puVar2[3] = local_e8._4_4_;
  *(undefined8 *)(lVar7 + 0x28 + lVar8) = uStack_e0;
  FUN_144883bb2(param_1,param_2);
  lVar7 = *(longlong *)(param_1 + 0x48);
  dVar4 = (double)*(float *)(lVar7 + 0xc + lVar11);
  dVar5 = (double)*(float *)(lVar7 + 4 + lVar11);
  local_108._8_4_ = SUB84(dVar5,0);
  local_108._0_8_ = (double)*(float *)(lVar7 + lVar11);
  local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_f8._8_4_ = SUB84(dVar4,0);
  local_f8._0_8_ = (double)*(float *)(lVar7 + 8 + lVar11);
  local_f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar9);
  local_e8 = *puVar1;
  uStack_e0 = puVar1[1];
  local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar9);
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  lVar7 = *(longlong *)(param_1 + 0xf8);
  iVar3 = *(int *)(lVar7 + 0x10 + lVar9);
  lVar11 = *(longlong *)(lVar7 + 8 + lVar9);
  lVar7 = lVar7 + lVar9;
  if (lVar11 != 0) {
    lVar7 = lVar11;
  }
  if ((longlong)iVar3 < 1) {
    uVar15 = 0;
    uVar17 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar22 = 0;
    uVar23 = 0;
    dVar6 = 0.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    uVar14 = uVar15;
    uVar16 = uVar17;
    if (iVar3 != 0) goto LAB_14017ceea;
  }
  else {
    uVar12 = 0xffffffff;
    uVar13 = 0x7fefffff;
    uVar14 = 0xffffffff;
    uVar16 = 0xffefffff;
LAB_14017ceea:
    lVar9 = 0;
    uVar15 = uVar12;
    uVar17 = uVar13;
    uVar18 = uVar14;
    uVar19 = uVar16;
    uVar20 = uVar14;
    uVar21 = uVar16;
    uVar22 = uVar12;
    uVar23 = uVar13;
    uVar24 = uVar12;
    uVar25 = uVar13;
    do {
      lVar11 = *(longlong *)(lVar7 + lVar9);
      if ((*(byte *)(lVar11 + 8) & 3) == 0) {
        FUN_146e22506(lVar11,local_108);
      }
      else {
        FUN_1447269c8(lVar11,local_108);
      }
      lVar11 = *(longlong *)(lVar7 + lVar9);
      dVar4 = *(double *)(lVar11 + 0x28);
      if (dVar4 <= (double)CONCAT44(uVar23,uVar22)) {
        uVar22 = SUB84(dVar4,0);
        uVar23 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      dVar4 = *(double *)(lVar11 + 0x20);
      if (dVar4 <= (double)CONCAT44(uVar25,uVar24)) {
        uVar24 = SUB84(dVar4,0);
        uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      dVar4 = *(double *)(lVar11 + 0x18);
      if (dVar4 <= (double)CONCAT44(uVar17,uVar15)) {
        uVar15 = SUB84(dVar4,0);
        uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      dVar4 = *(double *)(lVar11 + 0x40);
      if ((double)CONCAT44(uVar16,uVar14) <= dVar4) {
        uVar14 = SUB84(dVar4,0);
        uVar16 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      dVar4 = *(double *)(lVar11 + 0x38);
      if ((double)CONCAT44(uVar19,uVar18) <= dVar4) {
        uVar18 = SUB84(dVar4,0);
        uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      dVar4 = *(double *)(lVar11 + 0x30);
      if ((double)CONCAT44(uVar21,uVar20) <= dVar4) {
        uVar20 = SUB84(dVar4,0);
        uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
    dVar6 = (double)CONCAT44(uVar21,uVar20) + 0.0;
    dVar5 = (double)CONCAT44(uVar19,uVar18) + 0.0;
    dVar4 = (double)CONCAT44(uVar16,uVar14) + 0.0;
  }
  lVar7 = *(longlong *)(param_1 + 0x140);
  *(ulonglong *)(lVar7 + lVar8) = CONCAT44(uVar17,uVar15);
  *(ulonglong *)(lVar7 + 8 + lVar8) = CONCAT44(uVar25,uVar24);
  *(ulonglong *)(lVar7 + 0x10 + lVar8) = CONCAT44(uVar23,uVar22);
  *(double *)(lVar7 + 0x18 + lVar8) = dVar6;
  *(double *)(lVar7 + 0x20 + lVar8) = dVar5;
  *(double *)(lVar7 + 0x28 + lVar8) = dVar4;
LAB_14017cf99:
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14017d036 FUN_14017d036 body=64 status=ok
// SIG undefined FUN_14017d036(void)

void FUN_14017d036(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_3;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
  if (puVar3 != puVar2) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014017d073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14017d076 FUN_14017d076 body=888 status=ok
// SIG undefined FUN_14017d076(void)

void FUN_14017d076(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar13 = *param_2;
  local_88 = param_4;
  if (lVar13 == 0) {
    FUN_146d843d0(param_1,0);
  }
  else {
    lVar15 = param_1[2];
    local_90 = param_2;
    if (*(char *)(lVar13 + 0x1c) == '\x05') {
      iVar3 = *(int *)(lVar13 + 0x28);
      FUN_140279438(param_1,iVar3,1);
      if (0 < (longlong)iVar3) {
        uVar14 = 0;
        do {
          puVar4 = *(undefined8 **)(*(longlong *)(lVar13 + 0x20) + uVar14 * 8);
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
            UNLOCK();
          }
          local_80 = puVar4;
          if ((longlong)uVar14 < (longlong)(int)lVar15) {
            plVar10 = (longlong *)param_1[1];
            if ((longlong *)param_1[1] == (longlong *)0x0) {
              plVar10 = param_1;
            }
            if (puVar4 != *(undefined8 **)(plVar10[uVar14] + 0x10)) {
              FUN_14172beea(plVar10 + uVar14,&local_80);
              plVar10 = (longlong *)param_1[1];
              if ((longlong *)param_1[1] == (longlong *)0x0) {
                plVar10 = param_1;
              }
              *(uint *)(plVar10[uVar14] + 8) =
                   (*(uint *)(plVar10[uVar14] + 8) & 7) + (int)uVar14 * 8;
            }
          }
          else {
            local_78 = (undefined8 *)0x0;
            puVar11 = (undefined8 *)FUN_14472711d(puVar4,&local_78);
            if ((puVar11 == puVar4) || (local_78 == (undefined8 *)0x0)) {
              lVar12 = FUN_14001cc68(0x80,0x10);
              FUN_1400dde4e(lVar12,uVar14 & 0xffffffff,&local_80);
            }
            else {
              lVar12 = FUN_14001cc68(0xc0,0x10);
              if (puVar4 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
                UNLOCK();
              }
              local_78 = puVar4;
              FUN_1400ddebe(lVar12,uVar14 & 0xffffffff,&local_78);
            }
            plVar10 = (longlong *)param_1[1];
            if ((longlong *)param_1[1] == (longlong *)0x0) {
              plVar10 = param_1;
            }
            puVar4 = (undefined8 *)plVar10[uVar14];
            plVar10[uVar14] = lVar12;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          if (local_80 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_80 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)local_80 + 0xc) == 0)) {
              (**(code **)*local_80)(local_80,1);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != (longlong)iVar3);
      }
    }
    else {
      if (*(int *)((longlong)param_1 + 0x14) < 1) {
        FUN_146d8acfa(param_1,1);
      }
      FUN_140279438(param_1,1,1);
      if ((int)lVar15 == 0) {
        lVar13 = *param_2;
        local_78 = (undefined8 *)0x0;
        lVar15 = FUN_14472711d(lVar13);
        if ((lVar15 == lVar13) || (local_78 == (undefined8 *)0x0)) {
          lVar13 = FUN_14001cc68(0x80,0x10);
          FUN_1400dde4e(lVar13,0,param_2);
        }
        else {
          lVar13 = FUN_14001cc68(0xc0,0x10);
          local_78 = (undefined8 *)*param_2;
          if (local_78 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
            UNLOCK();
          }
          FUN_1400ddebe(lVar13,0,&local_78);
        }
        plVar10 = (longlong *)param_1[1];
        if ((longlong *)param_1[1] == (longlong *)0x0) {
          plVar10 = param_1;
        }
        puVar4 = (undefined8 *)*plVar10;
        *plVar10 = lVar13;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      else {
        plVar10 = (longlong *)param_1[1];
        if ((longlong *)param_1[1] == (longlong *)0x0) {
          plVar10 = param_1;
        }
        FUN_14172beea(plVar10,param_2);
      }
    }
    if (*(char *)(*local_90 + 0x1a) == '\x01') {
      plVar10 = (longlong *)param_1[1];
      if ((longlong *)param_1[1] == (longlong *)0x0) {
        plVar10 = param_1;
      }
      lVar13 = param_1[2];
      if ((longlong)(int)lVar13 != 0) {
        lVar15 = 0;
        do {
          lVar12 = *(longlong *)((longlong)plVar10 + lVar15);
          plVar5 = *(longlong **)(lVar12 + 0x10);
          if ((plVar5 == (longlong *)0x0) || (*(char *)((longlong)plVar5 + 0x1a) != '\x01')) {
            uVar6 = *(undefined4 *)(param_3 + 0x20);
            uVar7 = *(undefined4 *)(param_3 + 0x24);
            uVar8 = *(undefined4 *)(param_3 + 0x28);
            uVar9 = *(undefined4 *)(param_3 + 0x2c);
            uVar2 = *(undefined8 *)(param_3 + 0x30);
            *(undefined4 *)(lVar12 + 0x18) = uVar6;
            *(undefined4 *)(lVar12 + 0x1c) = uVar7;
            *(undefined4 *)(lVar12 + 0x20) = uVar8;
            *(undefined4 *)(lVar12 + 0x24) = uVar9;
            *(undefined8 *)(lVar12 + 0x28) = uVar2;
            *(undefined4 *)(lVar12 + 0x30) = uVar6;
            *(undefined4 *)(lVar12 + 0x34) = uVar7;
            *(undefined4 *)(lVar12 + 0x38) = uVar8;
            *(undefined4 *)(lVar12 + 0x3c) = uVar9;
            *(undefined8 *)(lVar12 + 0x40) = uVar2;
          }
          else {
            (**(code **)(*plVar5 + 0x88))(plVar5,&local_78,param_3);
            *(undefined8 *)(lVar12 + 0x28) = local_68;
            *(undefined8 **)(lVar12 + 0x18) = local_78;
            *(undefined8 *)(lVar12 + 0x20) = uStack_70;
            *(undefined4 *)(lVar12 + 0x30) = local_60;
            *(undefined4 *)(lVar12 + 0x34) = uStack_5c;
            *(undefined4 *)(lVar12 + 0x38) = uStack_58;
            *(undefined4 *)(lVar12 + 0x3c) = uStack_54;
            *(undefined8 *)(lVar12 + 0x40) = local_50;
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)(int)lVar13 * 8 != lVar15);
      }
    }
  }
  if ((local_88 != 0) && (*(longlong *)(local_88 + 8) != 0)) {
    FUN_140259f0c(*(longlong *)(local_88 + 8) + 0x70,local_88,(int)param_1[2]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14017d40e FUN_14017d40e body=52 status=ok
// SIG undefined FUN_14017d40e(void)

void FUN_14017d40e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_14017d583(lVar1,*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14017d442 FUN_14017d442 body=52 status=ok
// SIG undefined FUN_14017d442(void)

void FUN_14017d442(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14017d619(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14017d476 FUN_14017d476 body=14 status=ok
// SIG undefined FUN_14017d476(void)

void FUN_14017d476(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14017daa0();
    return;
  }
  return;
}



// FUNCTION 14017d484 FUN_14017d484 body=255 status=ok
// SIG undefined FUN_14017d484(void)

void FUN_14017d484(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  *param_1 = &PTR_LAB_14a37fd70;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar6 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar6;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
  return;
}



// FUNCTION 14017d583 FUN_14017d583 body=150 status=ok
// SIG undefined FUN_14017d583(void)

void FUN_14017d583(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar4 = *(longlong *)(param_1 + 0x18);
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
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 14017d619 FUN_14017d619 body=150 status=ok
// SIG undefined FUN_14017d619(void)

void FUN_14017d619(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar4 = *(longlong *)(param_1 + 8);
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
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14017d6b0 FUN_14017d6b0 body=128 status=ok
// SIG undefined FUN_14017d6b0(void)

void FUN_14017d6b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x108;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
  }
  FUN_1447241a4(lVar1,*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1 + 0xe0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
  }
  FUN_14472427c(lVar1,*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_14017d484(param_1);
  return;
}



// FUNCTION 14017d730 FUN_14017d730 body=99 status=ok
// SIG undefined FUN_14017d730(void)

void FUN_14017d730(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14017d794 FUN_14017d794 body=389 status=ok
// SIG undefined FUN_14017d794(void)

ulonglong FUN_14017d794(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x18)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x555) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14017d842;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x1ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14017d842:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0x18;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x18,8);
    }
  }
  return uVar6;
}



// FUNCTION 14017d91a FUN_14017d91a body=389 status=ok
// SIG undefined FUN_14017d91a(void)

ulonglong FUN_14017d91a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x18)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x555) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x1ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14017d9c8;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x1ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14017d9c8:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0x18;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x18,8);
    }
  }
  return uVar6;
}



// FUNCTION 14017daa0 FUN_14017daa0 body=450 status=ok
// SIG undefined FUN_14017daa0(void)

void FUN_14017daa0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14017dbbb:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14017dbf8:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14017daf6;
LAB_14017daeb:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14017daf6:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014017db22;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14017db78:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14017dbf8;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14017dbbb;
code_r0x00014017db22:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14017db78;
    }
  }
  goto LAB_14017daeb;
}



// FUNCTION 14017dc62 FUN_14017dc62 body=353 status=ok
// SIG undefined FUN_14017dc62(void)

void FUN_14017dc62(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14017dce7;
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
LAB_14017dce7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14017ddc4 FUN_14017ddc4 body=319 status=ok
// SIG undefined FUN_14017ddc4(void)

void FUN_14017ddc4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14017de2e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
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
LAB_14017de2e:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14017df04 FUN_14017df04 body=370 status=ok
// SIG undefined FUN_14017df04(void)

void FUN_14017df04(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14017df8f;
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
LAB_14017df8f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14017e076 FUN_14017e076 body=370 status=ok
// SIG undefined FUN_14017e076(void)

void FUN_14017e076(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14017e101;
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
LAB_14017e101:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14017e1e8 FUN_14017e1e8 body=22 status=ok
// SIG undefined FUN_14017e1e8(void)

undefined8 FUN_14017e1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14017e1fe(param_2,param_3);
  return 0;
}



// FUNCTION 14017e1fe FUN_14017e1fe body=219 status=ok
// SIG undefined FUN_14017e1fe(void)

undefined8 FUN_14017e1fe(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((cVar1 != '\0') && (*param_1 != 0)) {
    if (DAT_14caa7e28 == 0) {
      uVar2 = FUN_140608922();
      DAT_14caa7e28 = FUN_140002ddd(FUN_1417948e9,uVar2,L"GameplayTag");
    }
    local_50 = DAT_14caa7e28;
    if ((DAT_14caa7e28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(DAT_14caa7e28);
    }
    FUN_144a884d2(local_48,"searchgameplaytag",0);
    local_58 = 0;
    (**(code **)(*param_2 + 0x58))(param_2,local_48,&local_50,param_1);
    FUN_144a73aae(local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017e2da FUN_14017e2da body=55 status=ok
// SIG undefined FUN_14017e2da(void)

void FUN_14017e2da(longlong *param_1)

{
  FUN_14017e312(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14017e312 FUN_14017e312 body=123 status=ok
// SIG undefined FUN_14017e312(void)

void FUN_14017e312(longlong param_1,int param_2)

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



// FUNCTION 14017e38e FUN_14017e38e body=93 status=ok
// SIG undefined FUN_14017e38e(void)

void FUN_14017e38e(longlong param_1,int param_2)

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
  FUN_14017e3ec();
  return;
}



// FUNCTION 14017e3ec FUN_14017e3ec body=262 status=ok
// SIG undefined FUN_14017e3ec(void)

void FUN_14017e3ec(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar3 = (int)param_4 * param_3;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar4 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar4) {
      FUN_140023dd8(puVar2,(uint)(0xf < iVar3) * 8 + 8 + iVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar4 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar4;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 14017e500 FUN_14017e500 body=136 status=ok
// SIG undefined FUN_14017e500(void)

void FUN_14017e500(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1410ef478(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x20 + *param_1),0,(ulonglong)uVar2 << 5);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d8a708(param_1);
    return;
  }
  return;
}



// FUNCTION 14017e588 FUN_14017e588 body=64 status=ok
// SIG undefined FUN_14017e588(void)

void FUN_14017e588(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_14017e5c8();
  if ((iVar1 == 0) && (*(char *)(param_2 + 0x98) != '\x01')) {
    FUN_1448859f0(param_2 + 0x20,*(undefined8 *)(param_2 + 0x30));
    return;
  }
  FUN_142400d60(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14017e5c8 FUN_14017e5c8 body=734 status=ok
// SIG undefined FUN_14017e5c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14017e5c8(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaaabc) {
    FUN_144b3d300(&DAT_14caaaabc);
    if (DAT_14caaaabc == -1) {
      _DAT_14caaaab0 = 0;
      DAT_14caaaab8 = -1;
      _Init_thread_footer(&DAT_14caaaabc);
    }
  }
  if (DAT_14caaaab8 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaaac8) {
      FUN_144b3d300(&DAT_14caaaac8);
      if (DAT_14caaaac8 == -1) {
        FUN_1446ddc76(&DAT_14caaaac0,"RefPoseType",1);
        _Init_thread_footer(&DAT_14caaaac8);
      }
    }
    if (DAT_14caa9d68 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caa9d68 = FUN_140002ddd(FUN_14632f48b,uVar6,L"AnimNode_RefPose");
    }
    FUN_14094e66e(&local_34,DAT_14caaaac0,param_1,DAT_14caa9d68);
    DAT_14caaaab8 = local_2c;
    _DAT_14caaaab0 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaaab8 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14017e8a8 FUN_14017e8a8 body=313 status=ok
// SIG undefined FUN_14017e8a8(void)

void FUN_14017e8a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(longlong *)(param_1 + 0x20) == param_2) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    if ((longlong)*(int *)(param_2 + 0x2b8) != 0) {
      plVar7 = *(longlong **)(param_2 + 0x2b0);
      plVar1 = plVar7 + *(int *)(param_2 + 0x2b8);
      do {
        puVar4 = (undefined8 *)*plVar7;
        iVar3 = *(int *)(param_1 + 0x68);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x60);
          lVar6 = 0;
          do {
            FUN_14017ee32(*(undefined8 *)(lVar5 + lVar6),puVar4);
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar3 * 8 != lVar6);
        }
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    *(undefined4 *)(param_2 + 0x2b8) = 0;
    if (*(int *)(param_2 + 700) < 0) {
      FUN_1462858c6(param_2 + 0x2b0,0);
    }
    FUN_14017ed0e(param_2);
    uVar2 = *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x6c) < uVar2 + 1) {
      FUN_1456fe4d2(param_1 + 0x60,(ulonglong)uVar2);
    }
    memmove((void *)((longlong)*(void **)(param_1 + 0x60) + 8),*(void **)(param_1 + 0x60),
            (ulonglong)uVar2 << 3);
    **(longlong **)(param_1 + 0x60) = param_2;
    FUN_14017eb66(param_1,*(undefined4 *)(param_1 + 0xb4));
    return;
  }
  FUN_14017e9e2(param_1,param_2);
  return;
}



// FUNCTION 14017e9e2 FUN_14017e9e2 body=154 status=ok
// SIG undefined FUN_14017e9e2(void)

void FUN_14017e9e2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0xb8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  if (*(longlong *)(param_1 + 0x20) == param_2) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_144885d74(param_2);
  FUN_14017ea7c(param_2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar2;
    *puVar1 = puVar2;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014017ea63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
  return;
}



// FUNCTION 14017ea7c FUN_14017ea7c body=233 status=ok
// SIG undefined FUN_14017ea7c(void)

void FUN_14017ea7c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_144885c08();
  iVar1 = *(int *)(param_1 + 0x2b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(int *)(param_1 + 0x2dc) < 0) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    FUN_146ce58ec(param_1 + 0x2d0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  FUN_144885b3a(param_1 + 0x160);
  if (*(int *)(param_1 + 0x2ac) < 0) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    FUN_1462858c6(param_1 + 0x2a0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (*(int *)(param_1 + 700) < 0) {
    FUN_1462858c6(param_1 + 0x2b0,0);
    return;
  }
  return;
}



// FUNCTION 14017eb66 FUN_14017eb66 body=103 status=ok
// SIG undefined FUN_14017eb66(void)

void FUN_14017eb66(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0xb4) = iVar2;
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x68);
  if (iVar2 < (int)*(uint *)(param_1 + 0x68)) {
    do {
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 - 1;
      FUN_14017e9e2(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + -8 + lVar1));
    } while ((longlong)*(int *)(param_1 + 0xb4) < (longlong)uVar3);
    FUN_14017ec92(param_1 + 0x60,iVar2,0);
    return;
  }
  return;
}



// FUNCTION 14017ebce FUN_14017ebce body=72 status=ok
// SIG undefined FUN_14017ebce(void)

void FUN_14017ebce(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14017ec16(param_2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 14017ec16 FUN_14017ec16 body=69 status=ok
// SIG undefined FUN_14017ec16(void)

void FUN_14017ec16(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_14017ec5b(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_1418c1506(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 14017ec5b FUN_14017ec5b body=55 status=ok
// SIG undefined FUN_14017ec5b(void)

void FUN_14017ec5b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14017ec92 FUN_14017ec92 body=124 status=ok
// SIG undefined FUN_14017ec92(void)

void FUN_14017ec92(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456fe4d2(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_145901e10(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14017ed0e FUN_14017ed0e body=160 status=ok
// SIG undefined FUN_14017ed0e(void)

void FUN_14017ed0e(longlong param_1)

{
  if (DAT_14c75f000 == '\0') {
    FUN_144885d74(param_1);
    FUN_144885b3a(param_1 + 0x160);
  }
  if (DAT_14c75f001 == '\0') {
    FUN_144885c08(param_1);
  }
  if (*(int *)(param_1 + 0x2dc) < 0) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    FUN_146ce58ec(param_1 + 0x2d0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2ac)) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  FUN_1462858c6(param_1 + 0x2a0,0);
  return;
}



// FUNCTION 14017edae FUN_14017edae body=131 status=ok
// SIG undefined FUN_14017edae(void)

void FUN_14017edae(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 + (longlong)param_2 * 0x40);
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x40) != 0) {
    FUN_1400020a8();
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  if (puVar1[2] != 0) {
    FUN_1400020a8();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (puVar1[4] != 0) {
    FUN_1400020a8();
  }
  puVar1[4] = 0;
  puVar1[5] = 0;
  if (puVar1[6] != 0) {
    FUN_1400020a8();
  }
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}


