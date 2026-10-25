// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408cde4b FUN_1408cde4b body=1659 status=ok
// SIG undefined FUN_1408cde4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1408cde4b(longlong param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                      double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 in_stack_00000050;
  undefined1 auStack_268 [32];
  undefined1 local_248 [16];
  double *local_238;
  undefined1 *puStack_230;
  undefined1 *local_228;
  undefined1 *puStack_220;
  undefined8 *local_218;
  undefined8 *puStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  longlong local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [28];
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_158 [13];
  ulonglong local_f0;
  
  uVar4 = in_stack_00000050;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x54) = 0;
  auVar28 = _DAT_149934d80;
  local_248 = ZEXT816(0);
  local_238 = (double *)0x0;
  puStack_230 = (undefined1 *)0x3ff0000000000000;
  local_228 = (undefined1 *)0x0;
  puStack_220 = (undefined1 *)0x0;
  local_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  local_208 = _DAT_149934d80;
  local_1f8 = ZEXT816(0x3ff0000000000000);
  dVar22 = *param_5;
  dVar21 = param_5[1];
  dVar10 = param_5[2];
  dVar12 = param_5[3];
  dVar23 = dVar10 * dVar10 + dVar22 * dVar22;
  dVar25 = dVar12 * dVar12 + dVar21 * dVar21;
  auVar11._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar23 + dVar25)));
  auVar11._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar23 + dVar25)));
  iVar5 = movmskpd((int)local_f0,auVar11);
  if (iVar5 == 0) {
    auVar11 = minpd(*(undefined1 (*) [16])(param_3 + 8),*(undefined1 (*) [16])(param_5 + 8));
    auVar14 = minpd(*(undefined1 (*) [16])(param_3 + 10),*(undefined1 (*) [16])(param_5 + 10));
    auVar30._8_8_ = -(ulonglong)(auVar11._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar11._0_8_ < 0.0);
    iVar5 = movmskpd(0,auVar30);
    auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
    auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
    uVar6 = movmskpd((int)param_1,auVar15);
    if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8460b0) {
        FUN_144b3d300(&DAT_14c8460b0);
        if (DAT_14c8460b0 == -1) {
          DAT_14c8460a0 = 0x322bcc77322bcc77;
          DAT_14c8460a8 = 0x322bcc77322bcc77;
          _Init_thread_footer(&DAT_14c8460b0);
        }
      }
      dVar22 = *param_5;
      dVar21 = param_5[1];
      dVar10 = param_5[2];
      dVar12 = param_5[3];
      auVar11 = *(undefined1 (*) [16])(param_5 + 8);
      auVar30 = divpd(auVar28,auVar11);
      auVar28 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_5 + 10));
      dVar24 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar11._0_8_)) &
                       auVar30._0_8_);
      dVar26 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar11._8_8_)) &
                       auVar30._8_8_);
      dVar17 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_5 + 10),0))) & auVar28._0_8_);
      dVar29 = param_3[4] - param_5[4];
      dVar31 = param_3[5] - param_5[5];
      dVar34 = param_3[6] - param_5[6];
      dVar32 = -dVar22;
      dVar33 = -dVar21;
      dVar13 = dVar10 * -1.0;
      dVar16 = dVar12 * 1.0;
      dVar18 = dVar31 * dVar32 - dVar29 * dVar33;
      dVar20 = dVar34 * dVar33 - dVar31 * dVar13;
      dVar35 = dVar29 * dVar13 - dVar34 * dVar32;
      dVar36 = dVar16 * 0.0 - dVar16 * 0.0;
      dVar20 = dVar20 + dVar20;
      dVar35 = dVar35 + dVar35;
      dVar18 = dVar18 + dVar18;
      dVar36 = dVar36 + dVar36;
      dVar27 = *param_3;
      dVar1 = param_3[1];
      dVar2 = param_3[2];
      dVar3 = param_3[3];
      dVar25 = param_5[1];
      dVar23 = param_5[1];
      dVar19 = dVar27 * dVar13 * 1.0 + ((dVar1 * dVar16 - *param_5 * dVar2 * -1.0) - dVar3 * dVar23)
      ;
      local_208._8_8_ = param_3[9] * dVar26;
      local_208._0_8_ = param_3[8] * dVar24;
      local_1f8._8_8_ = param_3[0xb] * 0.0;
      local_1f8._0_8_ = param_3[10] * dVar17;
      local_228 = (undefined1 *)
                  (((dVar18 * dVar33 - dVar13 * dVar35) + dVar16 * dVar20 + dVar29) * dVar24);
      puStack_220 = (undefined1 *)
                    (((dVar20 * dVar13 - dVar18 * dVar32) + dVar16 * dVar35 + dVar31) * dVar26);
      local_218 = (undefined8 *)
                  (((dVar35 * dVar32 - dVar33 * dVar20) + dVar16 * dVar18 + dVar34) * dVar17);
      puStack_210 = (undefined8 *)
                    (((dVar36 * dVar16 - dVar36 * dVar16) + dVar16 * dVar36 + 0.0) * 0.0);
      local_248._8_4_ = SUB84(dVar19,0);
      local_248._0_8_ =
           dVar1 * dVar13 * -1.0 + ((dVar27 * dVar16 - *param_5 * dVar3 * 1.0) - dVar2 * dVar25);
      local_248._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      local_238 = (double *)
                  (dVar3 * dVar13 * 1.0 +
                  dVar25 * dVar27 + (dVar16 * dVar2 - *param_5 * dVar1 * 1.0));
      puStack_230 = (undefined1 *)
                    (dVar2 * dVar13 * -1.0 +
                    dVar23 * dVar1 + (dVar16 * dVar3 - *param_5 * dVar27 * -1.0));
    }
    else {
      FUN_1402db8fa(local_248,param_3,param_5);
      dVar22 = *param_5;
      dVar21 = param_5[1];
      dVar10 = param_5[2];
      dVar12 = param_5[3];
    }
    puVar8 = (undefined8 *)local_248;
  }
  else {
    puVar8 = &DAT_14c846480;
  }
  puVar9 = local_158;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  dVar23 = *param_6;
  dVar25 = param_6[1];
  dVar19 = -dVar22;
  dVar21 = -dVar21;
  dVar10 = dVar10 * -1.0;
  dVar12 = dVar12 * 1.0;
  dVar18 = dVar25 * dVar19 - dVar23 * dVar21;
  dVar36 = param_6[2] * dVar21 - dVar25 * dVar10;
  dVar27 = dVar23 * dVar10 - dVar19 * param_6[2];
  dVar36 = dVar36 + dVar36;
  dVar27 = dVar27 + dVar27;
  dVar18 = dVar18 + dVar18;
  local_168 = dVar12 * dVar18 + param_6[2] + (dVar27 * dVar19 - dVar36 * dVar21);
  local_178 = (dVar18 * dVar21 - dVar27 * dVar10) + dVar12 * dVar36 + dVar23;
  dStack_170 = dVar22 * dVar18 + dVar10 * dVar36 + dVar12 * dVar27 + dVar25;
  local_238 = &local_178;
  local_218 = &local_180;
  local_180 = 0x7fefffffffffffff;
  puStack_210 = &local_188;
  local_188 = 0x7fefffffffffffff;
  local_18c = 0xffffffff;
  local_248._8_8_ = local_158;
  local_248._0_8_ = param_4;
  puStack_230 = &stack0x00000038;
  local_228 = &stack0x00000040;
  puStack_220 = &stack0x00000048;
  local_208._8_8_ = local_1d8;
  local_208._0_8_ = local_1c0;
  local_1f8._8_8_ = local_1a8;
  local_1f8._0_8_ = &local_18c;
  local_1e0 = uVar4;
  local_1e8 = param_1;
  FUN_1408ce4c7(param_2,param_3);
  if ((local_f0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ce4c7 FUN_1408ce4c7 body=1145 status=ok
// SIG undefined FUN_1408ce4c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ce4c7(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  char cVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [104];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar2) {
  case 0:
    local_e0 = param_3[10];
    local_f0 = *(undefined4 *)(param_3 + 8);
    uStack_ec = *(undefined4 *)((longlong)param_3 + 0x44);
    uStack_e8 = *(undefined4 *)(param_3 + 9);
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x4c);
    local_100 = param_3[6];
    uStack_f8 = param_3[7];
    local_108 = *(undefined8 *)param_3[5];
    local_110 = *(undefined8 *)param_3[4];
    local_118 = *(undefined8 *)param_3[3];
    cVar15 = FUN_1408d1ff2(*param_3,param_1,param_3[1],param_3[2]);
    break;
  case 1:
    local_e0 = param_3[10];
    local_f0 = *(undefined4 *)(param_3 + 8);
    uStack_ec = *(undefined4 *)((longlong)param_3 + 0x44);
    uStack_e8 = *(undefined4 *)(param_3 + 9);
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x4c);
    local_100 = param_3[6];
    uStack_f8 = param_3[7];
    local_108 = *(undefined8 *)param_3[5];
    local_110 = *(undefined8 *)param_3[4];
    local_118 = *(undefined8 *)param_3[3];
    cVar15 = FUN_1408d0576(*param_3,param_1,param_3[1],param_3[2]);
    break;
  case 3:
    local_e0 = param_3[10];
    local_f0 = *(undefined4 *)(param_3 + 8);
    uStack_ec = *(undefined4 *)((longlong)param_3 + 0x44);
    uStack_e8 = *(undefined4 *)(param_3 + 9);
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x4c);
    local_100 = param_3[6];
    uStack_f8 = param_3[7];
    local_108 = *(undefined8 *)param_3[5];
    local_110 = *(undefined8 *)param_3[4];
    local_118 = *(undefined8 *)param_3[3];
    cVar15 = FUN_1408ceb42(*param_3,param_1,param_3[1],param_3[2]);
    break;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_d8,param_2);
    FUN_1408ce4c7(*(undefined8 *)(param_1 + 0x20),local_d8,param_3);
    goto LAB_1408ce599;
  case 8:
switchD_1408ce535_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
  default:
    switch(uVar2) {
    case 0x40:
      break;
    case 0x41:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
    case 0x48:
      goto switchD_1408ce535_caseD_8;
    default:
      switch(uVar2) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
      }
    }
  case 2:
  case 5:
  case 6:
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
  }
  if (cVar15 != '\0') {
    pdVar3 = (double *)param_3[1];
    pdVar4 = (double *)param_3[8];
    dVar20 = *pdVar4 - pdVar3[4];
    dVar21 = pdVar4[1] - pdVar3[5];
    dVar16 = pdVar4[2] - pdVar3[6];
    auVar1 = *(undefined1 (*) [16])(pdVar3 + 8);
    dVar10 = -*pdVar3;
    dVar11 = -pdVar3[1];
    dVar18 = pdVar3[2] * -1.0;
    dVar19 = pdVar3[3] * 1.0;
    dVar22 = dVar20 * dVar18 - dVar10 * dVar16;
    dVar12 = dVar21 * dVar10 - dVar20 * dVar11;
    dVar13 = dVar16 * dVar11 - dVar21 * dVar18;
    dVar13 = dVar13 + dVar13;
    dVar22 = dVar22 + dVar22;
    dVar12 = dVar12 + dVar12;
    auVar17 = divpd(_DAT_149934d80,auVar1);
    dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar17._8_8_) *
            (*pdVar3 * dVar12 + dVar18 * dVar13 + dVar19 * dVar22 + dVar21);
    dVar21 = pdVar3[10];
    pauVar5 = (undefined1 (*) [16])param_3[0xc];
    auVar8._8_4_ = SUB84(dVar9,0);
    auVar8._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar17._0_8_)
                   * ((dVar12 * dVar11 - dVar22 * dVar18) + dVar19 * dVar13 + dVar20);
    auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *pauVar5 = auVar8;
    *(double *)pauVar5[1] =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar21)) & (ulonglong)(1.0 / dVar21)) *
         (dVar19 * dVar12 + dVar16 + (dVar22 * dVar10 - dVar13 * dVar11));
    puVar6 = (undefined8 *)param_3[8];
    lVar7 = param_3[0xc];
    *(undefined8 *)(lVar7 + 0x28) = puVar6[2];
    uVar14 = puVar6[1];
    *(undefined8 *)(lVar7 + 0x18) = *puVar6;
    *(undefined8 *)(lVar7 + 0x20) = uVar14;
    puVar6 = (undefined8 *)param_3[9];
    lVar7 = param_3[0xc];
    *(undefined8 *)(lVar7 + 0x40) = puVar6[2];
    uVar14 = puVar6[1];
    *(undefined8 *)(lVar7 + 0x30) = *puVar6;
    *(undefined8 *)(lVar7 + 0x38) = uVar14;
    *(undefined8 *)(param_3[0xc] + 0x48) = *(undefined8 *)param_3[7];
    *(undefined4 *)(param_3[0xc] + 0x50) = *(undefined4 *)param_3[10];
    *(undefined8 *)param_3[0xd] = *(undefined8 *)param_3[6];
  }
LAB_1408ce599:
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ceb42 FUN_1408ceb42 body=4388 status=ok
// SIG undefined FUN_1408ceb42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408ceb42(longlong param_1,longlong param_2,double *param_3,double *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,double *param_8,
                  double *param_9,undefined8 *param_10,double *param_11,undefined4 *param_12)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  void *_Dst;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  double *pdVar14;
  ulonglong uVar15;
  int iVar16;
  double *pdVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  size_t _Size;
  longlong lVar29;
  bool bVar30;
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar47;
  double dVar46;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_3b8 [32];
  double *local_398;
  double *local_390;
  uint local_388;
  uint local_384;
  int local_380;
  uint local_37c;
  uint local_378;
  int local_374;
  ulonglong local_370;
  void *local_368;
  longlong local_360;
  uint local_354;
  uint local_350;
  uint local_34c;
  ulonglong local_348;
  ulonglong local_340;
  undefined8 local_338;
  ulonglong local_330;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  uint local_310;
  uint local_30c;
  ulonglong local_308;
  ulonglong local_300;
  double *local_2f8;
  ulonglong local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  longlong lStack_2a0;
  double local_298 [4];
  double local_278;
  double dStack_270;
  double local_268;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130 [3];
  undefined8 *local_118;
  double local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  uVar48 = (undefined4)param_7;
  uVar49 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar45 = param_6;
  if (DAT_14c75eff8 == '\0') {
    uVar45 = 0;
    uVar48 = 0;
    uVar49 = 0;
  }
  dVar46 = *(double *)(param_2 + 0x10);
  dVar34 = *(double *)(param_2 + 0x50);
  dVar35 = *(double *)(param_2 + 0x48) * dVar34 + *(double *)(param_2 + 0x30);
  dVar38 = *(double *)(param_2 + 0x40) * dVar34 + *(double *)(param_2 + 0x28);
  dVar34 = dVar34 * *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x20);
  local_188 = *(double *)(param_2 + 0x30);
  if (dVar35 <= *(double *)(param_2 + 0x30)) {
    local_188 = dVar35;
  }
  dStack_190 = *(double *)(param_2 + 0x28);
  if (dVar38 <= *(double *)(param_2 + 0x28)) {
    dStack_190 = dVar38;
  }
  local_198 = *(double *)(param_2 + 0x20);
  if (dVar34 <= *(double *)(param_2 + 0x20)) {
    local_198 = dVar34;
  }
  local_170 = *(double *)(param_2 + 0x30);
  if (*(double *)(param_2 + 0x30) <= dVar35) {
    local_170 = dVar35;
  }
  dStack_178 = *(double *)(param_2 + 0x28);
  if (*(double *)(param_2 + 0x28) <= dVar38) {
    dStack_178 = dVar38;
  }
  local_180 = *(double *)(param_2 + 0x20);
  if (*(double *)(param_2 + 0x20) <= dVar34) {
    local_180 = dVar34;
  }
  local_198 = local_198 - dVar46;
  dStack_190 = dStack_190 - dVar46;
  local_188 = local_188 - dVar46;
  local_180 = local_180 + dVar46;
  dStack_178 = dStack_178 + dVar46;
  local_170 = local_170 + dVar46;
  local_2e8 = *param_3;
  dStack_2e0 = param_3[1];
  local_2d8 = param_3[2];
  dStack_2d0 = param_3[3];
  local_2c8 = 0;
  dStack_2c0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2a8 = 0x3ff0000000000000;
  lStack_2a0 = 0x3ff0000000000000;
  local_298[0] = 1.0;
  local_298[1] = 0.0;
  local_2f8 = param_4;
  FUN_1400c6592(&local_198,&local_160,&local_2e8);
  lStack_2a0 = param_1 + 0x20;
  local_2e8 = 1.79769313486232e+308;
  dStack_2e0 = 1.79769313486232e+308;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0;
  dStack_2c0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2a8 = CONCAT44(local_2a8._4_4_,0xffffffff);
  pdVar14 = param_3;
  pdVar17 = local_298;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar17 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar17 = pdVar17 + 1;
  }
  local_228 = CONCAT44(uVar49,uVar48);
  dVar34 = (local_138 - local_150) * 0.5;
  dVar35 = (local_140 - local_158) * 0.5;
  dVar38 = (local_148 - local_160) * 0.5;
  local_150 = local_150 + dVar34;
  local_158 = local_158 + dVar35;
  local_160 = local_160 + dVar38;
  local_208._0_4_ = (float)local_278;
  local_208._4_4_ = (float)dStack_270;
  local_218._0_4_ = (float)(local_278 + local_160);
  local_218._4_4_ = (float)(dStack_270 + local_158);
  local_218._8_4_ = (float)(local_268 + local_150);
  local_218._12_4_ = 0;
  local_208._8_4_ = (float)local_268;
  local_208._12_4_ = 0;
  dVar46 = local_2f8[1];
  fVar43 = (float)local_2f8[2];
  local_1d8._0_4_ = (float)*local_2f8;
  local_1d8._4_4_ = (float)dVar46;
  local_1d8._8_4_ = fVar43;
  local_1d8._12_4_ = 0;
  local_1f8 = (float)(double)param_5 * local_1d8._0_4_ + local_208._0_4_;
  fStack_1f4 = (float)(double)param_5 * local_1d8._4_4_ + local_208._4_4_;
  fStack_1f0 = (float)(double)param_5 * fVar43 + (float)local_268;
  fStack_1ec = (float)(double)param_5 * 0.0 + 0.0;
  fVar44 = (float)local_298[2];
  fVar47 = (float)local_298[3];
  fVar50 = (float)local_298[0];
  fVar51 = (float)local_298[1];
  auVar52 = divps(_DAT_1499314a0,local_1d8);
  local_1b8 = -(uint)(ABS(local_1d8._0_4_) < 1e-08);
  uStack_1b4 = -(uint)(ABS(local_1d8._4_4_) < 1e-08);
  uStack_1b0 = -(uint)(ABS(fVar43) < 1e-08);
  uStack_1ac = 0xffffffff;
  local_1e8 = ~local_1b8 & auVar52._0_4_;
  uStack_1e4 = ~uStack_1b4 & auVar52._4_4_;
  uStack_1e0 = ~uStack_1b0 & auVar52._8_4_;
  uStack_1dc = 0;
  uStack_1a0 = (ulonglong)(uint)(float)ABS(dVar34);
  local_1a8 = CONCAT44((float)ABS(dVar35),(float)ABS(dVar38));
  auVar40._0_4_ = fVar50 * fVar50 + fVar51 * fVar51;
  auVar39._4_4_ = fVar44 * fVar44 + fVar47 * fVar47;
  auVar39._0_4_ = auVar40._0_4_;
  auVar39._8_4_ = auVar39._4_4_;
  auVar39._12_4_ = auVar39._4_4_;
  auVar40._8_8_ = auVar39._8_8_;
  auVar40._4_4_ = auVar40._0_4_;
  auVar53._0_4_ = auVar39._4_4_ + auVar40._0_4_;
  auVar53._4_4_ = auVar39._4_4_ + auVar40._0_4_;
  auVar53._8_4_ = auVar40._0_4_ + auVar39._4_4_;
  auVar53._12_4_ = auVar40._0_4_ + auVar39._4_4_;
  auVar52._4_4_ = -(uint)(1e-08 <= auVar53._4_4_);
  auVar52._0_4_ = -(uint)(1e-08 <= auVar53._0_4_);
  auVar52._8_4_ = -(uint)(1e-08 <= auVar53._8_4_);
  auVar52._12_4_ = -(uint)(1e-08 <= auVar53._12_4_);
  auVar40 = sqrtps(auVar40,auVar53);
  auVar40 = divps(_DAT_1499314a0,auVar40);
  auVar42._0_4_ = auVar40._0_4_ * fVar50;
  auVar42._4_4_ = auVar40._4_4_ * fVar51;
  auVar42._8_4_ = auVar40._8_4_ * fVar44;
  auVar42._12_4_ = auVar40._12_4_ * fVar47;
  local_1c8 = blendvps(_DAT_149932320,auVar42,auVar52);
  dVar34 = *param_3;
  dVar31 = param_3[1];
  dVar33 = param_3[2];
  dVar41 = local_160 * dVar33 - dVar34 * local_150;
  dVar36 = local_158 * dVar34 - local_160 * dVar31;
  dVar37 = local_150 * dVar31 - local_158 * dVar33;
  dVar37 = dVar37 + dVar37;
  dVar41 = dVar41 + dVar41;
  dVar36 = dVar36 + dVar36;
  dVar31 = (dVar36 * dVar31 - dVar41 * dVar33) + param_3[3] * dVar37 + local_160 + param_3[4];
  dVar33 = (dVar33 * dVar37 - dVar36 * dVar34) + param_3[3] * dVar41 + local_158 + param_3[5];
  local_198 = *(double *)(param_1 + 0x138) - dVar38;
  local_188 = *(double *)(param_1 + 0x150) + dVar38;
  local_180 = *(double *)(param_1 + 0x158) + dVar35;
  dStack_190 = *(double *)(param_1 + 0x140) - dVar35;
  dVar34 = *local_2f8;
  local_110 = (double)(-(ulonglong)(0.0 < dVar46) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar46) & -(ulonglong)(dVar46 < 0.0) & 0xbff0000000000000)
              * dVar35;
  uStack_100 = dVar33 - local_110;
  local_110 = dVar46 * (double)param_5 + dVar33 + local_110;
  dVar46 = *(double *)(param_1 + 0x50);
  dVar33 = (double)(-(ulonglong)(0.0 < dVar34) & 0x3ff0000000000000 |
                   ~-(ulonglong)(0.0 < dVar34) & -(ulonglong)(dVar34 < 0.0) & 0xbff0000000000000) *
           dVar38;
  local_108 = (undefined8 *)(dVar31 - dVar33);
  local_118 = (undefined8 *)(dVar34 * (double)param_5 + dVar31 + dVar33);
  dVar34 = *(double *)(param_1 + 0x58);
  local_238 = param_2;
  local_230 = uVar45;
  local_130[0] = dVar38;
  local_130[1] = dVar35;
  cVar5 = FUN_1448596be(&local_198);
  puVar4 = local_118;
  if (cVar5 != '\0') {
    dVar31 = *(double *)(param_1 + 0xb0);
    dVar33 = *(double *)(param_1 + 0xb8);
    dVar36 = *(double *)(param_1 + 0xe0);
    dVar37 = *(double *)(param_1 + 0xd8);
    uVar11 = (uint)(((double)local_108 / dVar46 - dVar31) / dVar37);
    uVar20 = (uint)((uStack_100 / dVar34 - dVar33) / dVar36);
    iVar16 = *(int *)(param_1 + 0xd0);
    uVar9 = iVar16 - 1;
    uVar7 = 0;
    if (0 < (int)uVar11) {
      uVar7 = uVar11;
    }
    if (iVar16 <= (int)uVar11) {
      uVar7 = uVar9;
    }
    uVar25 = (ulonglong)uVar7;
    iVar6 = *(int *)(param_1 + 0xd4);
    uVar11 = 0;
    if (0 < (int)uVar20) {
      uVar11 = uVar20;
    }
    uVar19 = iVar6 - 1;
    if (iVar6 <= (int)uVar20) {
      uVar11 = uVar19;
    }
    uVar21 = (uint)(((double)local_118 / dVar46 - dVar31) / dVar37);
    uVar23 = (uint)((local_110 / dVar34 - dVar33) / dVar36);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar16 <= (int)uVar21) {
      uVar20 = uVar9;
    }
    uVar21 = 0;
    if (0 < (int)uVar23) {
      uVar21 = uVar23;
    }
    if (iVar6 <= (int)uVar23) {
      uVar21 = uVar19;
    }
    uVar23 = -(uVar20 - uVar7);
    if ((int)uVar23 < 0) {
      uVar23 = uVar20 - uVar7;
    }
    uVar26 = -(uVar21 - uVar11);
    if ((int)uVar26 < 0) {
      uVar26 = uVar21 - uVar11;
    }
    local_118 = param_5;
    local_360 = param_1;
    if (uVar26 == 0 && uVar23 == 0) {
      puVar3 = local_108;
      if ((double)puVar4 <= (double)local_108) {
        puVar3 = puVar4;
      }
      dVar41 = uStack_100;
      if (local_110 <= uStack_100) {
        dVar41 = local_110;
      }
      uVar11 = (uint)((((double)puVar3 - dVar38) / dVar46 - dVar31) / dVar37);
      uVar20 = (uint)(((dVar41 - dVar35) / dVar34 - dVar33) / dVar36);
      uVar7 = 0;
      if (0 < (int)uVar11) {
        uVar7 = uVar11;
      }
      puVar3 = local_108;
      if ((double)local_108 <= (double)puVar4) {
        puVar3 = puVar4;
      }
      if (iVar16 <= (int)uVar11) {
        uVar7 = uVar9;
      }
      uVar11 = 0;
      if (0 < (int)uVar20) {
        uVar11 = uVar20;
      }
      if (iVar6 <= (int)uVar20) {
        uVar11 = uVar19;
      }
      dVar41 = uStack_100;
      if (uStack_100 <= local_110) {
        dVar41 = local_110;
      }
      uVar21 = (uint)((((double)puVar3 + dVar38) / dVar46 - dVar31) / dVar37);
      uVar23 = (uint)(((dVar41 + dVar35) / dVar34 - dVar33) / dVar36);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar16 <= (int)uVar21) {
        uVar20 = uVar9;
      }
      uVar9 = 0;
      if (0 < (int)uVar23) {
        uVar9 = uVar23;
      }
      if (iVar6 <= (int)uVar23) {
        uVar9 = uVar19;
      }
      if ((int)uVar11 <= (int)uVar9) {
        do {
          uVar19 = uVar7;
          if ((int)uVar7 <= (int)uVar20) {
            do {
              cVar5 = FUN_1408cfc68(&local_2e8,(*(ushort *)(local_360 + 0x92) - 1) * uVar11 + uVar19
                                    ,&local_118);
              if (cVar5 == '\0') goto LAB_1408cf922;
              uVar19 = uVar19 + 1;
            } while (uVar20 + 1 != uVar19);
          }
          bVar30 = uVar11 != uVar9;
          uVar11 = uVar11 + 1;
        } while (bVar30);
      }
    }
    else {
      local_388 = CONCAT31(local_388._1_3_,(int)uVar7 < (int)uVar20);
      local_370 = CONCAT71(local_370._1_7_,(int)uVar11 < (int)uVar21);
      uVar9 = uVar23 - uVar26;
      local_300 = (ulonglong)uVar9;
      local_368 = (void *)CONCAT71(local_368._1_7_,uVar23 >= uVar26 && uVar9 != 0);
      local_384 = CONCAT31(local_384._1_3_,uVar23 < uVar26 || uVar9 == 0);
      uVar45 = *(undefined8 *)(param_1 + 0xd0);
      iVar27 = (int)uVar45;
      iVar6 = (int)((ulonglong)uVar45 >> 0x20) * iVar27;
      iVar16 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar16 = iVar6;
      }
      _Size = (size_t)((iVar16 >> 3) + 1);
      local_354 = uVar23;
      local_350 = uVar26;
      local_310 = uVar21;
      local_30c = uVar20;
      _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0));
      memset(_Dst,0,_Size);
      local_108 = (undefined8 *)0x0;
      uStack_100 = 4.94065645841247e-324;
      FUN_1408cff98(&local_108,0);
      *local_108 = CONCAT44(uVar11,uVar7);
      iVar6 = uVar11 * iVar27 + uVar7;
      iVar16 = uVar11 * iVar27 + uVar7 + 7;
      if (-1 < iVar6) {
        iVar16 = iVar6;
      }
      local_108[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar16 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar6 & 7));
      local_340 = (ulonglong)uVar11;
      local_338 = uVar45;
      local_330 = uVar25;
      if (0 < (int)uStack_100) {
        local_318 = -local_350;
        local_320 = (uint)(byte)local_370 * 2 + -1;
        local_308 = (ulonglong)(byte)local_384;
        uVar9 = local_384 & 0xff;
        uVar20 = -uVar9;
        local_348 = (ulonglong)uVar20;
        local_34c = (uint)(byte)local_368;
        local_384 = -local_34c;
        local_324 = (local_388 & 0xff) * 2 + -1;
        local_31c = local_34c * iVar27 + uVar9;
        local_314 = local_384 * iVar27 + uVar20;
        local_2f0 = (ulonglong)((local_384 & 1) << 3);
        lVar29 = 0;
        lVar10 = local_360;
        local_388 = uVar11;
        local_37c = uVar7;
        local_378 = uVar11;
        local_370 = uVar25;
        local_368 = _Dst;
        do {
          dVar46 = (double)local_108[lVar29 * 2 + 1];
          uVar7 = local_388;
          uVar9 = local_37c;
          uVar11 = local_378;
          uVar25 = local_370;
          if (dVar46 <= (double)local_118) {
            uVar9 = *(uint *)((longlong)local_108 + lVar29 * 0x10 + 4);
            uVar25 = local_108[lVar29 * 2];
            iVar16 = (int)uVar25;
            uVar15 = uVar25 & 0xffffffff;
            lVar22 = 0;
            piVar12 = &local_380;
            bVar30 = true;
            do {
              bVar8 = bVar30;
              iVar6 = *(int *)(lVar10 + 0xd0 + lVar22 * 4);
              iVar27 = (int)uVar15;
              if (iVar27 < iVar6) {
                if (iVar27 < 1) {
                  iVar27 = 0;
                }
              }
              else {
                iVar27 = iVar6 + -1;
              }
              *piVar12 = iVar27;
              lVar22 = 1;
              uVar15 = (ulonglong)uVar9;
              piVar12 = &local_374;
              bVar30 = false;
            } while (bVar8);
            iVar6 = (int)(uVar25 >> 0x20);
            if (((local_380 == iVar16) && (local_374 == iVar6)) &&
               (cVar5 = FUN_1408cfc68(&local_2e8,(*(ushort *)(lVar10 + 0x92) - 1) * iVar6 + iVar16,
                                      &local_118), cVar5 == '\0')) break;
            uVar7 = local_388;
            uVar9 = local_37c;
            uVar11 = local_378;
            uVar25 = local_370;
            if (dVar46 < 0.0) {
              auVar32._0_8_ =
                   *(double *)((longlong)local_130 + local_2f0) /
                   ABS(*(double *)(lVar10 + 0x50 + local_2f0));
              auVar32._8_8_ = 0;
              if (auVar32._0_8_ < 0.0) {
                auVar52 = roundpd(auVar32,auVar32,1);
                dVar46 = auVar52._0_8_;
              }
              else {
                auVar52 = roundpd(auVar32,auVar32,2);
                dVar46 = auVar52._0_8_;
              }
              iVar27 = (int)dVar46;
              if (0 < iVar27) {
                uVar25 = local_348;
                if (((int)local_348 <= iVar16) && (iVar13 = iVar6 + local_34c, -1 < iVar13)) {
                  iVar28 = (int)local_308 + iVar16;
                  uVar9 = (int)local_338 * iVar13 + iVar28;
                  iVar24 = iVar27;
                  do {
                    dVar46 = uStack_100;
                    if ((*(int *)(local_360 + 0xd0) <= iVar28) ||
                       (*(int *)(local_360 + 0xd4) <= iVar13)) break;
                    uVar7 = uVar9 + 7;
                    if (-1 < (int)uVar9) {
                      uVar7 = uVar9;
                    }
                    bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar7 >> 3));
                    if ((bVar2 >> (uVar9 & 7) & 1) == 0) {
                      *(byte *)((longlong)_Dst + (longlong)((int)uVar7 >> 3)) =
                           (byte)(1 << ((byte)uVar9 & 7)) | bVar2;
                      lVar10 = (longlong)(int)uStack_100;
                      uVar7 = (int)uStack_100 + 1;
                      uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar7);
                      if (uStack_100._4_4_ < uVar7) {
                        local_328 = iVar24;
                        FUN_1408cff98(&local_108,(ulonglong)dVar46 & 0xffffffff);
                        uVar25 = local_348;
                        iVar24 = local_328;
                      }
                      local_108[lVar10 * 2] = CONCAT44(iVar13,iVar28);
                      local_108[lVar10 * 2 + 1] = 0;
                      _Dst = local_368;
                    }
                    iVar13 = iVar13 + local_34c;
                    uVar9 = uVar9 + local_31c;
                    iVar28 = iVar28 + (int)local_308;
                    iVar24 = iVar24 + -1;
                  } while (iVar24 != 0);
                }
                lVar10 = local_360;
                iVar6 = iVar6 + local_384;
                iVar16 = iVar16 + (int)uVar25;
                uVar9 = (int)local_338 * iVar6 + iVar16;
                do {
                  dVar46 = uStack_100;
                  if ((((iVar16 < 0) || (iVar6 < 0)) || (*(int *)(lVar10 + 0xd0) <= iVar16)) ||
                     (*(int *)(lVar10 + 0xd4) <= iVar6)) break;
                  uVar7 = uVar9 + 7;
                  if (-1 < (int)uVar9) {
                    uVar7 = uVar9;
                  }
                  bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar7 >> 3));
                  if ((bVar2 >> (uVar9 & 7) & 1) == 0) {
                    *(byte *)((longlong)_Dst + (longlong)((int)uVar7 >> 3)) =
                         (byte)(1 << ((byte)uVar9 & 7)) | bVar2;
                    lVar22 = (longlong)(int)uStack_100;
                    uVar7 = (int)uStack_100 + 1;
                    uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar7);
                    if (uStack_100._4_4_ < uVar7) {
                      FUN_1408cff98(&local_108,(ulonglong)dVar46 & 0xffffffff);
                      uVar25 = local_348;
                    }
                    local_108[lVar22 * 2] = CONCAT44(iVar6,iVar16);
                    local_108[lVar22 * 2 + 1] = 0;
                    _Dst = local_368;
                  }
                  iVar6 = iVar6 + local_384;
                  uVar9 = uVar9 + local_314;
                  iVar16 = iVar16 + (int)uVar25;
                  iVar27 = iVar27 + -1;
                } while (iVar27 != 0);
              }
              dVar46 = uStack_100;
              uVar9 = local_37c;
              if (((uint)local_370 != local_30c) ||
                 (uVar7 = local_310, uVar11 = local_378, uVar25 = (ulonglong)local_30c,
                 local_388 != local_310)) {
                iVar16 = (int)local_300 * 2;
                uVar25 = local_370;
                uVar15 = local_330;
                if (local_318 <= iVar16) {
                  local_300 = (ulonglong)((int)local_300 - local_350);
                  uVar9 = (uint)local_370 + local_324;
                  uVar25 = (ulonglong)uVar9;
                  uVar15 = (ulonglong)uVar9;
                }
                uVar18 = local_340;
                uVar7 = local_378;
                if (iVar16 <= (int)local_354) {
                  local_300 = (ulonglong)((int)local_300 + local_354);
                  uVar7 = local_388 + local_320;
                  uVar18 = (ulonglong)uVar7;
                  uVar25 = (ulonglong)uVar9;
                }
                uVar19 = uVar7 * (int)local_338 + (int)uVar25;
                uVar20 = uVar7 * (int)local_338 + (int)uVar25 + 7;
                if (-1 < (int)uVar19) {
                  uVar20 = uVar19;
                }
                bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar20 >> 3));
                uVar11 = uVar7;
                local_340 = uVar18;
                local_330 = uVar15;
                if ((bVar2 >> (uVar19 & 7) & 1) == 0) {
                  *(byte *)((longlong)_Dst + (longlong)((int)uVar20 >> 3)) =
                       (byte)(1 << ((byte)uVar19 & 7)) | bVar2;
                  lVar22 = (longlong)(int)uStack_100;
                  uVar9 = (int)uStack_100 + 1;
                  uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar9);
                  if (uStack_100._4_4_ < uVar9) {
                    FUN_1408cff98(&local_108,(ulonglong)dVar46 & 0xffffffff);
                  }
                  local_108[lVar22 * 2] = uVar15 & 0xffffffff | uVar18 << 0x20;
                  local_108[lVar22 * 2 + 1] = 0xbff0000000000000;
                  _Dst = local_368;
                  uVar7 = (uint)uVar18;
                  uVar9 = (uint)uVar15;
                  uVar11 = (uint)uVar18;
                  uVar25 = uVar15 & 0xffffffff;
                }
              }
            }
          }
          local_370 = uVar25;
          local_378 = uVar11;
          local_37c = uVar9;
          local_388 = uVar7;
          lVar29 = lVar29 + 1;
        } while (lVar29 < (int)uStack_100);
      }
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8(_Dst);
      }
    }
  }
LAB_1408cf922:
  dVar46 = (double)(-(ulonglong)(0.0 < (double)param_5) & (ulonglong)(local_2e8 / (double)param_5));
  local_130[0] = dStack_2e0;
  local_198 = dVar46;
  if (dVar46 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_390 = local_130;
      local_398 = &local_198;
      FUN_146d4aafb(local_2f8[2] * dStack_2b0 + *local_2f8 * dStack_2c0 + local_2f8[1] * local_2b8,
                    param_5,param_6,param_7);
    }
    *param_8 = local_198;
    *param_9 = local_130[0];
    param_10[2] = local_2c8;
    *param_10 = local_2d8;
    param_10[1] = dStack_2d0;
    param_11[2] = dStack_2b0;
    *param_11 = dStack_2c0;
    param_11[1] = local_2b8;
    *param_12 = (undefined4)local_2a8;
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar46 <= 1.0;
}



// FUNCTION 1408cfc68 FUN_1408cfc68 body=815 status=ok
// SIG undefined FUN_1408cfc68(void)

undefined8 FUN_1408cfc68(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_1408d00a0(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_1408d00a0(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_1408cfee6;
        }
        uVar16 = 0;
        goto LAB_1408cfee8;
      }
    }
  }
LAB_1408cfee6:
  uVar16 = 1;
LAB_1408cfee8:
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408cff98 FUN_1408cff98 body=262 status=ok
// SIG undefined FUN_1408cff98(void)

void FUN_1408cff98(longlong param_1,int param_2)

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



// FUNCTION 1408d00a0 FUN_1408d00a0 body=1237 status=ok
// SIG undefined FUN_1408d00a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d00a0(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  char cVar8;
  int iVar9;
  double *pdVar10;
  double dVar11;
  float fVar12;
  float fVar14;
  double dVar13;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  double dVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_1a8 [32];
  double *local_188;
  double *local_180;
  undefined8 **local_178;
  float *local_170;
  float *local_168;
  undefined1 local_160;
  undefined *local_158;
  undefined8 *local_148;
  undefined8 local_140;
  code *local_138;
  double local_130;
  float local_128;
  float local_124;
  undefined1 *local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  pdVar2 = (double *)*param_1;
  fVar12 = *param_3;
  fVar14 = param_3[1];
  fVar15 = param_3[2];
  local_b8 = *param_5 - fVar12;
  fStack_b4 = param_5[1] - fVar14;
  fStack_b0 = param_5[2] - fVar15;
  fStack_ac = param_5[3] - param_3[3];
  local_c8 = *param_4 - fVar12;
  fStack_c4 = param_4[1] - fVar14;
  fStack_c0 = param_4[2] - fVar15;
  fStack_bc = param_4[3] - param_3[3];
  local_d8 = 0;
  uStack_d0 = 0;
  fStack_e0 = (float)(pdVar2[0x10] - (double)(float)*(undefined8 *)(param_3 + 2));
  fStack_dc = (float)(pdVar2[0x11] -
                     (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20));
  local_e8 = (float)(pdVar2[0xe] - (double)fVar12);
  fStack_e4 = (float)(pdVar2[0xf] - (double)fVar14);
  dVar3 = pdVar2[0x16];
  dVar1 = *(double *)((longlong)dVar3 + 0x10);
  fVar19 = (float)pdVar2[0x17] - (float)dVar1;
  fVar20 = (float)pdVar2[0x17] - (float)dVar1;
  fVar21 = fStack_b4 * local_c8 - fStack_c4 * local_b8;
  fVar24 = fStack_b0 * fStack_c4 - fStack_c0 * fStack_b4;
  fVar26 = local_b8 * fStack_c0 - local_c8 * fStack_b0;
  fVar28 = fStack_ac * fStack_bc - fStack_bc * fStack_ac;
  fVar28 = fVar28 * fVar28;
  fVar22 = fVar26 * fVar26 + fVar24 * fVar24;
  fVar25 = fVar24 * fVar24 + fVar26 * fVar26;
  fVar27 = fVar28 + fVar21 * fVar21;
  fVar28 = fVar21 * fVar21 + fVar28;
  auVar16._0_4_ = fVar27 + fVar22;
  auVar16._4_4_ = fVar28 + fVar25;
  auVar16._8_4_ = fVar22 + fVar27;
  auVar16._12_4_ = fVar25 + fVar28;
  auVar16 = sqrtps(auVar16,auVar16);
  auVar16 = divps(_DAT_1499314a0,auVar16);
  fVar24 = auVar16._0_4_ * fVar24;
  fVar26 = auVar16._4_4_ * fVar26;
  fVar21 = auVar16._8_4_ * fVar21;
  fVar29 = *(float *)(pdVar2 + 0x24) * -1.0;
  fVar30 = *(float *)((longlong)pdVar2 + 0x124) * -1.0;
  fVar31 = *(float *)(pdVar2 + 0x25) * -1.0;
  fVar32 = *(float *)((longlong)pdVar2 + 300) * 1.0;
  fVar22 = fVar26 * fVar29 - fVar24 * fVar30;
  fVar25 = fVar21 * fVar30 - fVar26 * fVar31;
  fVar27 = fVar24 * fVar31 - fVar21 * fVar29;
  fVar22 = fVar22 + fVar22;
  fVar25 = fVar25 + fVar25;
  fVar27 = fVar27 + fVar27;
  fVar12 = fVar12 - *(float *)(pdVar2 + 0x1e);
  fVar14 = fVar14 - *(float *)((longlong)pdVar2 + 0xf4);
  fVar15 = fVar15 - *(float *)(pdVar2 + 0x1f);
  fVar28 = fVar14 * fVar29 - fVar30 * fVar12;
  fVar17 = fVar15 * fVar30 - fVar31 * fVar14;
  fVar18 = fVar12 * fVar31 - fVar29 * fVar15;
  fVar28 = fVar28 + fVar28;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar24 = (fVar22 * fVar30 - fVar27 * fVar31) + fVar32 * fVar25 + fVar24;
  fVar26 = (fVar25 * fVar31 - fVar22 * fVar29) + fVar32 * fVar27 + fVar26;
  fVar22 = (fVar27 * fVar29 - fVar25 * fVar30) + fVar32 * fVar22 + fVar21;
  if (0.0 <= (double)(0.0 - fVar22) * *(double *)((longlong)dVar3 + 0x48) +
             (double)(0.0 - fVar24) * *(double *)((longlong)dVar3 + 0x38) +
             (double)(0.0 - fVar26) * *(double *)((longlong)dVar3 + 0x40)) {
    dVar23 = *(double *)((longlong)dVar3 + 0x50);
    dVar13 = *(double *)((longlong)dVar3 + 0x48) * dVar23 + *(double *)((longlong)dVar3 + 0x30);
    dVar11 = *(double *)((longlong)dVar3 + 0x40) * dVar23 + *(double *)((longlong)dVar3 + 0x28);
    dVar23 = *(double *)((longlong)dVar3 + 0x38) * dVar23 + *(double *)((longlong)dVar3 + 0x20);
  }
  else {
    dVar23 = *(double *)((longlong)dVar3 + 0x20);
    dVar11 = *(double *)((longlong)dVar3 + 0x28);
    dVar13 = *(double *)((longlong)dVar3 + 0x30);
  }
  fVar12 = fVar22 * (((fVar18 * fVar29 - fVar17 * fVar30) + fVar32 * fVar28 + fVar15) -
                    (float)dVar13) +
           fVar24 * (((fVar28 * fVar30 - fVar18 * fVar31) + fVar32 * fVar17 + fVar12) -
                    (float)dVar23) +
           fVar26 * (((fVar17 * fVar31 - fVar28 * fVar29) + fVar32 * fVar18 + fVar14) -
                    (float)dVar11);
  auVar4._4_4_ = -(uint)(fVar12 < fVar20);
  auVar4._0_4_ = -(uint)(fVar12 < fVar19);
  auVar4._8_4_ = -(uint)(fVar12 < fVar19);
  auVar4._12_4_ = -(uint)(fVar12 < fVar20);
  iVar9 = movmskps(param_2,auVar4);
  bVar7 = true;
  if (iVar9 == 0) {
    local_188 = pdVar2 + 0x22;
    local_128 = (float)dVar1;
    local_120 = &LAB_144a386e2;
    local_148 = &local_d8;
    local_140 = 0;
    local_138 = FUN_14014b546;
    local_158 = &DAT_149f52c20;
    local_168 = &local_118;
    local_170 = &local_108;
    local_178 = (undefined8 **)&local_ec;
    local_180 = (double *)CONCAT44(local_180._4_4_,(float)*(double *)param_1[1]);
    local_160 = 1;
    local_130 = dVar3;
    local_124 = local_128;
    cVar8 = FUN_1448541f8(&local_148,&local_130,pdVar2 + 0x24,&local_e8);
    pdVar10 = (double *)param_1[1];
    if (cVar8 != '\0') {
      local_108 = *param_3 + local_108;
      fStack_104 = param_3[1] + fStack_104;
      fStack_100 = param_3[2] + fStack_100;
      fStack_fc = param_3[3] + fStack_fc;
      local_188 = (double *)pdVar2[0x18];
      dVar1 = *pdVar10;
      local_180 = &local_130;
      local_178 = &local_148;
      FUN_1408d1e72(SUB84((double)(fStack_110 * *(float *)(pdVar2 + 0x23) +
                                  local_118 * *(float *)(pdVar2 + 0x22) +
                                  fStack_114 * *(float *)((longlong)pdVar2 + 0x114)),0),
                    SUB84(dVar1,0),(double)local_ec,pdVar2[0x17]);
      dVar3 = local_130 * dVar1;
      if (dVar3 < dVar1) {
        *pdVar10 = dVar3;
        auVar5._8_4_ = SUB84((double)fStack_114,0);
        auVar5._0_8_ = (double)local_118;
        auVar5._12_4_ = (int)((ulonglong)(double)fStack_114 >> 0x20);
        *(undefined1 (*) [16])(pdVar2 + 5) = auVar5;
        pdVar2[7] = (double)fStack_110;
        auVar6._8_4_ = SUB84((double)fStack_104,0);
        auVar6._0_8_ = (double)local_108;
        auVar6._12_4_ = (int)((ulonglong)(double)fStack_104 >> 0x20);
        *(undefined1 (*) [16])(pdVar2 + 2) = auVar6;
        pdVar2[4] = (double)fStack_100;
        *pdVar2 = dVar3;
        pdVar2[1] = (double)local_148;
        *(undefined4 *)(pdVar2 + 8) = param_2;
        pdVar10 = (double *)param_1[1];
      }
    }
    bVar7 = 0.0 < *pdVar10;
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d0576 FUN_1408d0576 body=4180 status=ok
// SIG undefined FUN_1408d0576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d0576(longlong param_1,longlong param_2,double *param_3,double *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,double *param_8,
                  double *param_9,undefined8 *param_10,double *param_11,undefined4 *param_12)

{
  byte *pbVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  void *_Dst;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  double *pdVar16;
  ulonglong uVar17;
  int iVar18;
  double *pdVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  size_t _Size;
  longlong lVar31;
  bool bVar32;
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar47;
  double dVar46;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_3b8 [32];
  double *local_398;
  double *local_390;
  uint local_388;
  uint local_384;
  int local_380;
  int local_37c;
  uint local_378;
  uint local_374;
  ulonglong local_370;
  void *local_368;
  longlong local_360;
  uint local_354;
  uint local_350;
  uint local_34c;
  ulonglong local_348;
  ulonglong local_340;
  undefined8 local_338;
  ulonglong local_330;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  uint local_314;
  uint local_310;
  int local_30c;
  ulonglong local_308;
  double *local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  longlong lStack_2a0;
  double local_298 [4];
  double local_278;
  double dStack_270;
  double local_268;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130 [3];
  undefined8 *local_118;
  double local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  uVar48 = (undefined4)param_7;
  uVar49 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar45 = param_6;
  if (DAT_14c75eff8 == '\0') {
    uVar45 = 0;
    uVar48 = 0;
    uVar49 = 0;
  }
  local_188 = *(double *)(param_2 + 0x30);
  local_198 = *(double *)(param_2 + 0x20);
  dStack_190 = *(double *)(param_2 + 0x28);
  local_180 = *(double *)(param_2 + 0x38);
  uStack_178 = *(undefined8 *)(param_2 + 0x40);
  local_170 = *(undefined8 *)(param_2 + 0x48);
  local_2e8 = *param_3;
  dStack_2e0 = param_3[1];
  local_2d8 = param_3[2];
  dStack_2d0 = param_3[3];
  local_2c8 = 0;
  dStack_2c0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2a8 = 0x3ff0000000000000;
  lStack_2a0 = 0x3ff0000000000000;
  local_298[0] = 1.0;
  local_298[1] = 0.0;
  local_300 = param_4;
  FUN_1400c6592(&local_198,&local_160,&local_2e8);
  lStack_2a0 = param_1 + 0x20;
  local_2e8 = 1.79769313486232e+308;
  dStack_2e0 = 1.79769313486232e+308;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0;
  dStack_2c0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2a8 = CONCAT44(local_2a8._4_4_,0xffffffff);
  pdVar16 = param_3;
  pdVar19 = local_298;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar19 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar19 = pdVar19 + 1;
  }
  local_228 = CONCAT44(uVar49,uVar48);
  dVar38 = (local_138 - local_150) * 0.5;
  dVar3 = (local_140 - local_158) * 0.5;
  dVar4 = (local_148 - local_160) * 0.5;
  local_150 = local_150 + dVar38;
  local_158 = local_158 + dVar3;
  local_160 = local_160 + dVar4;
  local_208._0_4_ = (float)local_278;
  local_208._4_4_ = (float)dStack_270;
  local_218._0_4_ = (float)(local_278 + local_160);
  local_218._4_4_ = (float)(dStack_270 + local_158);
  local_218._8_4_ = (float)(local_268 + local_150);
  local_218._12_4_ = 0;
  local_208._8_4_ = (float)local_268;
  local_208._12_4_ = 0;
  dVar46 = local_300[1];
  fVar43 = (float)local_300[2];
  local_1d8._0_4_ = (float)*local_300;
  local_1d8._4_4_ = (float)dVar46;
  local_1d8._8_4_ = fVar43;
  local_1d8._12_4_ = 0;
  local_1f8 = (float)(double)param_5 * local_1d8._0_4_ + local_208._0_4_;
  fStack_1f4 = (float)(double)param_5 * local_1d8._4_4_ + local_208._4_4_;
  fStack_1f0 = (float)(double)param_5 * fVar43 + (float)local_268;
  fStack_1ec = (float)(double)param_5 * 0.0 + 0.0;
  fVar44 = (float)local_298[2];
  fVar47 = (float)local_298[3];
  fVar50 = (float)local_298[0];
  fVar51 = (float)local_298[1];
  auVar52 = divps(_DAT_1499314a0,local_1d8);
  local_1b8 = -(uint)(ABS(local_1d8._0_4_) < 1e-08);
  uStack_1b4 = -(uint)(ABS(local_1d8._4_4_) < 1e-08);
  uStack_1b0 = -(uint)(ABS(fVar43) < 1e-08);
  uStack_1ac = 0xffffffff;
  local_1e8 = ~local_1b8 & auVar52._0_4_;
  uStack_1e4 = ~uStack_1b4 & auVar52._4_4_;
  uStack_1e0 = ~uStack_1b0 & auVar52._8_4_;
  uStack_1dc = 0;
  uStack_1a0 = (ulonglong)(uint)(float)ABS(dVar38);
  local_1a8 = CONCAT44((float)ABS(dVar3),(float)ABS(dVar4));
  auVar40._0_4_ = fVar50 * fVar50 + fVar51 * fVar51;
  auVar39._4_4_ = fVar44 * fVar44 + fVar47 * fVar47;
  auVar39._0_4_ = auVar40._0_4_;
  auVar39._8_4_ = auVar39._4_4_;
  auVar39._12_4_ = auVar39._4_4_;
  auVar40._8_8_ = auVar39._8_8_;
  auVar40._4_4_ = auVar40._0_4_;
  auVar53._0_4_ = auVar39._4_4_ + auVar40._0_4_;
  auVar53._4_4_ = auVar39._4_4_ + auVar40._0_4_;
  auVar53._8_4_ = auVar40._0_4_ + auVar39._4_4_;
  auVar53._12_4_ = auVar40._0_4_ + auVar39._4_4_;
  auVar52._4_4_ = -(uint)(1e-08 <= auVar53._4_4_);
  auVar52._0_4_ = -(uint)(1e-08 <= auVar53._0_4_);
  auVar52._8_4_ = -(uint)(1e-08 <= auVar53._8_4_);
  auVar52._12_4_ = -(uint)(1e-08 <= auVar53._12_4_);
  auVar40 = sqrtps(auVar40,auVar53);
  auVar40 = divps(_DAT_1499314a0,auVar40);
  auVar42._0_4_ = auVar40._0_4_ * fVar50;
  auVar42._4_4_ = auVar40._4_4_ * fVar51;
  auVar42._8_4_ = auVar40._8_4_ * fVar44;
  auVar42._12_4_ = auVar40._12_4_ * fVar47;
  local_1c8 = blendvps(_DAT_149932320,auVar42,auVar52);
  dVar38 = *param_3;
  dVar33 = param_3[1];
  dVar35 = param_3[2];
  dVar41 = local_160 * dVar35 - dVar38 * local_150;
  dVar36 = local_158 * dVar38 - local_160 * dVar33;
  dVar37 = local_150 * dVar33 - local_158 * dVar35;
  dVar37 = dVar37 + dVar37;
  dVar41 = dVar41 + dVar41;
  dVar36 = dVar36 + dVar36;
  dVar33 = (dVar36 * dVar33 - dVar41 * dVar35) + param_3[3] * dVar37 + local_160 + param_3[4];
  dVar35 = (dVar35 * dVar37 - dVar36 * dVar38) + param_3[3] * dVar41 + local_158 + param_3[5];
  local_198 = *(double *)(param_1 + 0x138) - dVar4;
  local_188 = *(double *)(param_1 + 0x150) + dVar4;
  local_180 = *(double *)(param_1 + 0x158) + dVar3;
  dStack_190 = *(double *)(param_1 + 0x140) - dVar3;
  dVar38 = *local_300;
  local_110 = (double)(-(ulonglong)(0.0 < dVar46) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar46) & -(ulonglong)(dVar46 < 0.0) & 0xbff0000000000000)
              * dVar3;
  uStack_100 = dVar35 - local_110;
  local_110 = dVar46 * (double)param_5 + dVar35 + local_110;
  dVar46 = *(double *)(param_1 + 0x50);
  dVar35 = (double)(-(ulonglong)(0.0 < dVar38) & 0x3ff0000000000000 |
                   ~-(ulonglong)(0.0 < dVar38) & -(ulonglong)(dVar38 < 0.0) & 0xbff0000000000000) *
           dVar4;
  local_108 = (undefined8 *)(dVar33 - dVar35);
  local_118 = (undefined8 *)(dVar38 * (double)param_5 + dVar33 + dVar35);
  dVar38 = *(double *)(param_1 + 0x58);
  local_238 = param_2;
  local_230 = uVar45;
  local_130[0] = dVar4;
  local_130[1] = dVar3;
  cVar7 = FUN_1448596be(&local_198);
  puVar6 = local_118;
  if (cVar7 != '\0') {
    dVar33 = *(double *)(param_1 + 0xb0);
    dVar35 = *(double *)(param_1 + 0xb8);
    dVar36 = *(double *)(param_1 + 0xe0);
    dVar37 = *(double *)(param_1 + 0xd8);
    uVar13 = (uint)(((double)local_108 / dVar46 - dVar33) / dVar37);
    uVar22 = (uint)((uStack_100 / dVar38 - dVar35) / dVar36);
    iVar29 = *(int *)(param_1 + 0xd0);
    uVar11 = iVar29 - 1;
    uVar9 = 0;
    if (0 < (int)uVar13) {
      uVar9 = uVar13;
    }
    if (iVar29 <= (int)uVar13) {
      uVar9 = uVar11;
    }
    uVar27 = (ulonglong)uVar9;
    iVar8 = *(int *)(param_1 + 0xd4);
    uVar13 = 0;
    if (0 < (int)uVar22) {
      uVar13 = uVar22;
    }
    uVar21 = iVar8 - 1;
    if (iVar8 <= (int)uVar22) {
      uVar13 = uVar21;
    }
    uVar23 = (uint)(((double)local_118 / dVar46 - dVar33) / dVar37);
    uVar25 = (uint)((local_110 / dVar38 - dVar35) / dVar36);
    uVar22 = 0;
    if (0 < (int)uVar23) {
      uVar22 = uVar23;
    }
    if (iVar29 <= (int)uVar23) {
      uVar22 = uVar11;
    }
    uVar23 = 0;
    if (0 < (int)uVar25) {
      uVar23 = uVar25;
    }
    if (iVar8 <= (int)uVar25) {
      uVar23 = uVar21;
    }
    uVar25 = -(uVar22 - uVar9);
    if ((int)uVar25 < 0) {
      uVar25 = uVar22 - uVar9;
    }
    uVar28 = -(uVar23 - uVar13);
    if ((int)uVar28 < 0) {
      uVar28 = uVar23 - uVar13;
    }
    local_118 = param_5;
    local_360 = param_1;
    if (uVar28 == 0 && uVar25 == 0) {
      puVar5 = local_108;
      if ((double)puVar6 <= (double)local_108) {
        puVar5 = puVar6;
      }
      dVar41 = uStack_100;
      if (local_110 <= uStack_100) {
        dVar41 = local_110;
      }
      uVar13 = (uint)((((double)puVar5 - dVar4) / dVar46 - dVar33) / dVar37);
      uVar22 = (uint)(((dVar41 - dVar3) / dVar38 - dVar35) / dVar36);
      uVar9 = 0;
      if (0 < (int)uVar13) {
        uVar9 = uVar13;
      }
      puVar5 = local_108;
      if ((double)local_108 <= (double)puVar6) {
        puVar5 = puVar6;
      }
      if (iVar29 <= (int)uVar13) {
        uVar9 = uVar11;
      }
      uVar13 = 0;
      if (0 < (int)uVar22) {
        uVar13 = uVar22;
      }
      if (iVar8 <= (int)uVar22) {
        uVar13 = uVar21;
      }
      dVar41 = uStack_100;
      if (uStack_100 <= local_110) {
        dVar41 = local_110;
      }
      uVar23 = (uint)((((double)puVar5 + dVar4) / dVar46 - dVar33) / dVar37);
      uVar25 = (uint)(((dVar41 + dVar3) / dVar38 - dVar35) / dVar36);
      uVar22 = 0;
      if (0 < (int)uVar23) {
        uVar22 = uVar23;
      }
      if (iVar29 <= (int)uVar23) {
        uVar22 = uVar11;
      }
      uVar11 = 0;
      if (0 < (int)uVar25) {
        uVar11 = uVar25;
      }
      if (iVar8 <= (int)uVar25) {
        uVar11 = uVar21;
      }
      if ((int)uVar13 <= (int)uVar11) {
        do {
          uVar21 = uVar9;
          if ((int)uVar9 <= (int)uVar22) {
            do {
              cVar7 = FUN_1408d15cc(&local_2e8,(*(ushort *)(local_360 + 0x92) - 1) * uVar13 + uVar21
                                    ,&local_118);
              if (cVar7 == '\0') goto LAB_1408d1286;
              uVar21 = uVar21 + 1;
            } while (uVar22 + 1 != uVar21);
          }
          bVar32 = uVar13 != uVar11;
          uVar13 = uVar13 + 1;
        } while (bVar32);
      }
    }
    else {
      local_368 = (void *)CONCAT71(local_368._1_7_,(int)uVar9 < (int)uVar22);
      local_370 = CONCAT71(local_370._1_7_,(int)uVar13 < (int)uVar23);
      uVar11 = uVar25 - uVar28;
      local_2f8 = (ulonglong)uVar11;
      local_384 = CONCAT31(local_384._1_3_,uVar25 >= uVar28 && uVar11 != 0);
      local_388 = CONCAT31(local_388._1_3_,uVar25 < uVar28 || uVar11 == 0);
      uVar45 = *(undefined8 *)(param_1 + 0xd0);
      iVar18 = (int)uVar45;
      iVar8 = (int)((ulonglong)uVar45 >> 0x20) * iVar18;
      iVar29 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar29 = iVar8;
      }
      _Size = (size_t)((iVar29 >> 3) + 1);
      local_354 = uVar25;
      local_350 = uVar28;
      local_314 = uVar23;
      local_310 = uVar22;
      _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0));
      memset(_Dst,0,_Size);
      local_108 = (undefined8 *)0x0;
      uStack_100 = 4.94065645841247e-324;
      FUN_1408d18fc(&local_108,0);
      *local_108 = CONCAT44(uVar13,uVar9);
      iVar8 = uVar13 * iVar18 + uVar9;
      iVar29 = uVar13 * iVar18 + uVar9 + 7;
      if (-1 < iVar8) {
        iVar29 = iVar8;
      }
      local_108[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar29 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar8 & 7));
      local_340 = (ulonglong)uVar13;
      local_338 = uVar45;
      local_330 = uVar27;
      if (0 < (int)uStack_100) {
        local_318 = -local_350;
        local_320 = (uint)(byte)local_370 * 2 + -1;
        local_308 = (ulonglong)(byte)local_388;
        uVar11 = -(local_388 & 0xff);
        local_348 = (ulonglong)uVar11;
        local_34c = local_384 & 0xff;
        local_384 = -local_34c;
        local_324 = (uint)(byte)local_368 * 2 + -1;
        local_31c = local_34c * iVar18 + (local_388 & 0xff);
        local_30c = local_384 * iVar18 + uVar11;
        local_2f0 = (ulonglong)((local_384 & 1) << 3);
        lVar31 = 0;
        lVar12 = local_360;
        local_388 = uVar13;
        local_378 = uVar9;
        local_374 = uVar13;
        local_370 = uVar27;
        local_368 = _Dst;
        do {
          dVar46 = (double)local_108[lVar31 * 2 + 1];
          uVar9 = local_388;
          uVar11 = local_378;
          uVar13 = local_374;
          uVar27 = local_370;
          if (dVar46 <= (double)local_118) {
            uVar11 = *(uint *)((longlong)local_108 + lVar31 * 0x10 + 4);
            uVar27 = local_108[lVar31 * 2];
            iVar29 = (int)uVar27;
            uVar17 = uVar27 & 0xffffffff;
            lVar24 = 0;
            piVar14 = &local_37c;
            bVar32 = true;
            do {
              bVar10 = bVar32;
              iVar8 = *(int *)(lVar12 + 0xd0 + lVar24 * 4);
              iVar18 = (int)uVar17;
              if (iVar18 < iVar8) {
                if (iVar18 < 1) {
                  iVar18 = 0;
                }
              }
              else {
                iVar18 = iVar8 + -1;
              }
              *piVar14 = iVar18;
              lVar24 = 1;
              uVar17 = (ulonglong)uVar11;
              piVar14 = &local_380;
              bVar32 = false;
            } while (bVar10);
            iVar8 = (int)(uVar27 >> 0x20);
            if (((local_37c == iVar29) && (local_380 == iVar8)) &&
               (cVar7 = FUN_1408d15cc(&local_2e8,(*(ushort *)(lVar12 + 0x92) - 1) * iVar8 + iVar29,
                                      &local_118), cVar7 == '\0')) break;
            uVar9 = local_388;
            uVar11 = local_378;
            uVar13 = local_374;
            uVar27 = local_370;
            if (dVar46 < 0.0) {
              auVar34._0_8_ =
                   *(double *)((longlong)local_130 + local_2f0) /
                   ABS(*(double *)(lVar12 + 0x50 + local_2f0));
              auVar34._8_8_ = 0;
              if (auVar34._0_8_ < 0.0) {
                auVar52 = roundpd(auVar34,auVar34,1);
                dVar46 = auVar52._0_8_;
              }
              else {
                auVar52 = roundpd(auVar34,auVar34,2);
                dVar46 = auVar52._0_8_;
              }
              iVar18 = (int)dVar46;
              if (0 < iVar18) {
                uVar27 = local_348;
                if (((int)local_348 <= iVar29) && (iVar15 = iVar8 + local_34c, -1 < iVar15)) {
                  iVar30 = (int)local_308 + iVar29;
                  uVar11 = (int)local_338 * iVar15 + iVar30;
                  iVar26 = iVar18;
                  do {
                    dVar46 = uStack_100;
                    if ((*(int *)(local_360 + 0xd0) <= iVar30) ||
                       (*(int *)(local_360 + 0xd4) <= iVar15)) break;
                    uVar9 = uVar11 + 7;
                    if (-1 < (int)uVar11) {
                      uVar9 = uVar11;
                    }
                    bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar9 >> 3));
                    if ((bVar2 >> (uVar11 & 7) & 1) == 0) {
                      *(byte *)((longlong)_Dst + (longlong)((int)uVar9 >> 3)) =
                           (byte)(1 << ((byte)uVar11 & 7)) | bVar2;
                      lVar12 = (longlong)(int)uStack_100;
                      uVar9 = (int)uStack_100 + 1;
                      uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar9);
                      if (uStack_100._4_4_ < uVar9) {
                        local_328 = iVar26;
                        FUN_1408d18fc(&local_108,(ulonglong)dVar46 & 0xffffffff);
                        uVar27 = local_348;
                        iVar26 = local_328;
                      }
                      local_108[lVar12 * 2] = CONCAT44(iVar15,iVar30);
                      local_108[lVar12 * 2 + 1] = 0;
                      _Dst = local_368;
                    }
                    iVar15 = iVar15 + local_34c;
                    uVar11 = uVar11 + local_31c;
                    iVar30 = iVar30 + (int)local_308;
                    iVar26 = iVar26 + -1;
                  } while (iVar26 != 0);
                }
                lVar12 = local_360;
                iVar8 = iVar8 + local_384;
                iVar29 = iVar29 + (int)uVar27;
                uVar11 = (int)local_338 * iVar8 + iVar29;
                do {
                  dVar46 = uStack_100;
                  if ((((iVar29 < 0) || (iVar8 < 0)) || (*(int *)(lVar12 + 0xd0) <= iVar29)) ||
                     (*(int *)(lVar12 + 0xd4) <= iVar8)) break;
                  uVar9 = uVar11 + 7;
                  if (-1 < (int)uVar11) {
                    uVar9 = uVar11;
                  }
                  bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar9 >> 3));
                  if ((bVar2 >> (uVar11 & 7) & 1) == 0) {
                    *(byte *)((longlong)_Dst + (longlong)((int)uVar9 >> 3)) =
                         (byte)(1 << ((byte)uVar11 & 7)) | bVar2;
                    lVar24 = (longlong)(int)uStack_100;
                    uVar9 = (int)uStack_100 + 1;
                    uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar9);
                    if (uStack_100._4_4_ < uVar9) {
                      FUN_1408d18fc(&local_108,(ulonglong)dVar46 & 0xffffffff);
                      uVar27 = local_348;
                    }
                    local_108[lVar24 * 2] = CONCAT44(iVar8,iVar29);
                    local_108[lVar24 * 2 + 1] = 0;
                    _Dst = local_368;
                  }
                  iVar8 = iVar8 + local_384;
                  uVar11 = uVar11 + local_30c;
                  iVar29 = iVar29 + (int)uVar27;
                  iVar18 = iVar18 + -1;
                } while (iVar18 != 0);
              }
              dVar46 = uStack_100;
              uVar11 = local_378;
              if (((uint)local_370 == local_310) && (local_388 == local_314)) {
                local_388 = local_314;
                uVar9 = local_388;
                uVar13 = local_374;
                uVar27 = (ulonglong)local_310;
              }
              else {
                iVar29 = (int)local_2f8 * 2;
                uVar27 = local_370;
                uVar17 = local_330;
                if (local_318 <= iVar29) {
                  local_2f8 = (ulonglong)((int)local_2f8 - local_350);
                  uVar11 = (uint)local_370 + local_324;
                  uVar27 = (ulonglong)uVar11;
                  uVar17 = (ulonglong)uVar11;
                }
                uVar20 = local_340;
                uVar9 = local_374;
                if (iVar29 <= (int)local_354) {
                  local_2f8 = (ulonglong)((int)local_2f8 + local_354);
                  uVar9 = local_388 + local_320;
                  uVar20 = (ulonglong)uVar9;
                  uVar27 = (ulonglong)uVar11;
                }
                uVar21 = uVar9 * (int)local_338 + (int)uVar27;
                uVar22 = uVar9 * (int)local_338 + (int)uVar27 + 7;
                if (-1 < (int)uVar21) {
                  uVar22 = uVar21;
                }
                bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar22 >> 3));
                uVar13 = uVar9;
                local_340 = uVar20;
                local_330 = uVar17;
                if ((bVar2 >> (uVar21 & 7) & 1) == 0) {
                  *(byte *)((longlong)_Dst + (longlong)((int)uVar22 >> 3)) =
                       (byte)(1 << ((byte)uVar21 & 7)) | bVar2;
                  lVar24 = (longlong)(int)uStack_100;
                  uVar11 = (int)uStack_100 + 1;
                  uStack_100 = (double)CONCAT44(uStack_100._4_4_,uVar11);
                  if (uStack_100._4_4_ < uVar11) {
                    FUN_1408d18fc(&local_108,(ulonglong)dVar46 & 0xffffffff);
                  }
                  local_108[lVar24 * 2] = uVar17 & 0xffffffff | uVar20 << 0x20;
                  local_108[lVar24 * 2 + 1] = 0xbff0000000000000;
                  _Dst = local_368;
                  uVar9 = (uint)uVar20;
                  uVar11 = (uint)uVar17;
                  uVar13 = (uint)uVar20;
                  uVar27 = uVar17 & 0xffffffff;
                }
              }
            }
          }
          local_370 = uVar27;
          local_374 = uVar13;
          local_378 = uVar11;
          local_388 = uVar9;
          lVar31 = lVar31 + 1;
        } while (lVar31 < (int)uStack_100);
      }
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8(_Dst);
      }
    }
  }
LAB_1408d1286:
  dVar46 = (double)(-(ulonglong)(0.0 < (double)param_5) & (ulonglong)(local_2e8 / (double)param_5));
  local_130[0] = dStack_2e0;
  local_198 = dVar46;
  if (dVar46 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_390 = local_130;
      local_398 = &local_198;
      FUN_146d4aafb(local_300[2] * dStack_2b0 + *local_300 * dStack_2c0 + local_300[1] * local_2b8,
                    param_5,param_6,param_7);
    }
    *param_8 = local_198;
    *param_9 = local_130[0];
    param_10[2] = local_2c8;
    *param_10 = local_2d8;
    param_10[1] = dStack_2d0;
    param_11[2] = dStack_2b0;
    *param_11 = dStack_2c0;
    param_11[1] = local_2b8;
    *param_12 = (undefined4)local_2a8;
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar46 <= 1.0;
}



// FUNCTION 1408d15cc FUN_1408d15cc body=815 status=ok
// SIG undefined FUN_1408d15cc(void)

undefined8 FUN_1408d15cc(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_1408d1a04(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_1408d1a04(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_1408d184a;
        }
        uVar16 = 0;
        goto LAB_1408d184c;
      }
    }
  }
LAB_1408d184a:
  uVar16 = 1;
LAB_1408d184c:
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d18fc FUN_1408d18fc body=262 status=ok
// SIG undefined FUN_1408d18fc(void)

void FUN_1408d18fc(longlong param_1,int param_2)

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



// FUNCTION 1408d1a04 FUN_1408d1a04 body=1133 status=ok
// SIG undefined FUN_1408d1a04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d1a04(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double dVar1;
  double *pdVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  double *pdVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_188 [32];
  double *local_168;
  undefined1 *local_160;
  undefined8 **local_158;
  float *local_150;
  float *local_148;
  undefined1 local_140;
  undefined *local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 *local_b8;
  double dStack_b0;
  code *local_a8;
  undefined1 local_98 [16];
  code *local_88;
  ulonglong local_80;
  double dVar2;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pdVar3 = (double *)*param_1;
  fVar15 = *param_3;
  fVar16 = param_3[1];
  fVar17 = param_3[2];
  local_c8 = *param_5 - fVar15;
  fStack_c4 = param_5[1] - fVar16;
  fStack_c0 = param_5[2] - fVar17;
  fStack_bc = param_5[3] - param_3[3];
  local_d8 = *param_4 - fVar15;
  fStack_d4 = param_4[1] - fVar16;
  fStack_d0 = param_4[2] - fVar17;
  fStack_cc = param_4[3] - param_3[3];
  local_e8 = 0;
  uStack_e0 = 0;
  fStack_f0 = (float)(pdVar3[0x10] - (double)(float)*(undefined8 *)(param_3 + 2));
  fStack_ec = (float)(pdVar3[0x11] -
                     (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20));
  local_f8 = (float)(pdVar3[0xe] - (double)fVar15);
  fStack_f4 = (float)(pdVar3[0xf] - (double)fVar16);
  fVar21 = fStack_c4 * local_d8 - fStack_d4 * local_c8;
  fVar23 = fStack_c0 * fStack_d4 - fStack_d0 * fStack_c4;
  fVar25 = local_c8 * fStack_d0 - local_d8 * fStack_c0;
  fVar27 = fStack_bc * fStack_cc - fStack_cc * fStack_bc;
  fVar27 = fVar27 * fVar27;
  fVar22 = fVar25 * fVar25 + fVar23 * fVar23;
  fVar24 = fVar23 * fVar23 + fVar25 * fVar25;
  fVar26 = fVar27 + fVar21 * fVar21;
  fVar27 = fVar21 * fVar21 + fVar27;
  auVar18._0_4_ = fVar26 + fVar22;
  auVar18._4_4_ = fVar27 + fVar24;
  auVar18._8_4_ = fVar22 + fVar26;
  auVar18._12_4_ = fVar24 + fVar27;
  auVar18 = sqrtps(auVar18,auVar18);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  fVar28 = *(float *)(pdVar3 + 0x24) * -1.0;
  fVar29 = *(float *)((longlong)pdVar3 + 0x124) * -1.0;
  fVar30 = *(float *)(pdVar3 + 0x25) * -1.0;
  fVar31 = *(float *)((longlong)pdVar3 + 300) * 1.0;
  fVar23 = auVar18._0_4_ * fVar23;
  fVar25 = auVar18._4_4_ * fVar25;
  fVar21 = auVar18._8_4_ * fVar21;
  fVar22 = fVar25 * fVar28 - fVar23 * fVar29;
  fVar24 = fVar21 * fVar29 - fVar25 * fVar30;
  fVar26 = fVar23 * fVar30 - fVar21 * fVar28;
  fVar22 = fVar22 + fVar22;
  fVar24 = fVar24 + fVar24;
  fVar26 = fVar26 + fVar26;
  fVar15 = fVar15 - *(float *)(pdVar3 + 0x1e);
  fVar16 = fVar16 - *(float *)((longlong)pdVar3 + 0xf4);
  fVar17 = fVar17 - *(float *)(pdVar3 + 0x1f);
  fVar27 = fVar16 * fVar28 - fVar29 * fVar15;
  fVar19 = fVar17 * fVar29 - fVar30 * fVar16;
  fVar20 = fVar15 * fVar30 - fVar28 * fVar17;
  fVar27 = fVar27 + fVar27;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  dVar1 = pdVar3[0x17];
  dVar2 = pdVar3[0x17];
  fVar23 = (fVar22 * fVar29 - fVar26 * fVar30) + fVar31 * fVar24 + fVar23;
  fVar25 = (fVar24 * fVar30 - fVar22 * fVar28) + fVar31 * fVar26 + fVar25;
  fVar22 = (fVar26 * fVar28 - fVar24 * fVar29) + fVar31 * fVar22 + fVar21;
  dVar4 = pdVar3[0x16];
  dVar9 = (double)(0.0 - fVar25);
  local_98._8_4_ = SUB84(dVar9,0);
  local_98._0_8_ = (double)(0.0 - fVar23);
  local_98._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_88 = (code *)(double)(0.0 - fVar22);
  lVar12 = 0;
  do {
    if (0.0 < *(double *)(local_98 + lVar12 * 8) || *(double *)(local_98 + lVar12 * 8) == 0.0) {
      puVar8 = *(undefined8 **)((longlong)dVar4 + 0x38 + lVar12 * 8);
    }
    else {
      puVar8 = (undefined8 *)(*(double *)((longlong)dVar4 + 0x20 + lVar12 * 8) + 0.0);
    }
    (&local_b8)[lVar12] = puVar8;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  fVar24 = (float)dVar1 - 0.0;
  fVar26 = (float)dVar2 - 0.0;
  fVar15 = fVar22 * ((fVar17 + fVar31 * fVar27 + (fVar20 * fVar28 - fVar29 * fVar19)) -
                    (float)(double)local_a8) +
           fVar23 * ((fVar15 + fVar31 * fVar19 + (fVar27 * fVar29 - fVar30 * fVar20)) -
                    (float)(double)local_b8) +
           fVar25 * ((fVar16 + fVar31 * fVar20 + (fVar19 * fVar30 - fVar28 * fVar27)) -
                    (float)dStack_b0);
  auVar5._4_4_ = -(uint)(fVar15 < fVar26);
  auVar5._0_4_ = -(uint)(fVar15 < fVar24);
  auVar5._8_4_ = -(uint)(fVar15 < fVar24);
  auVar5._12_4_ = -(uint)(fVar15 < fVar26);
  iVar13 = movmskps(param_2,auVar5);
  bVar11 = true;
  if (iVar13 == 0) {
    local_168 = pdVar3 + 0x22;
    local_98._8_4_ = (float)*(double *)((longlong)dVar4 + 0x10);
    local_98._0_8_ = dVar4;
    local_98._12_4_ = 0;
    local_88 = FUN_144857b9e;
    local_b8 = &local_e8;
    dStack_b0 = 0.0;
    local_a8 = FUN_14014b546;
    local_138 = &DAT_149f52c20;
    local_148 = &local_128;
    local_150 = &local_118;
    local_158 = (undefined8 **)&local_fc;
    local_160 = (undefined1 *)CONCAT44(local_160._4_4_,(float)*(double *)param_1[1]);
    local_140 = 1;
    cVar10 = FUN_1448541f8(&local_b8,local_98,pdVar3 + 0x24,&local_f8);
    pdVar14 = (double *)param_1[1];
    if (cVar10 != '\0') {
      local_118 = *param_3 + local_118;
      fStack_114 = param_3[1] + fStack_114;
      fStack_110 = param_3[2] + fStack_110;
      fStack_10c = param_3[3] + fStack_10c;
      local_168 = (double *)pdVar3[0x18];
      dVar1 = *pdVar14;
      local_160 = local_98;
      local_158 = &local_b8;
      FUN_1408d1e72(SUB84((double)(fStack_120 * *(float *)(pdVar3 + 0x23) +
                                  local_128 * *(float *)(pdVar3 + 0x22) +
                                  fStack_124 * *(float *)((longlong)pdVar3 + 0x114)),0),
                    SUB84(dVar1,0),SUB84((double)local_fc,0),pdVar3[0x17]);
      dVar2 = (double)local_98._0_8_ * dVar1;
      if (dVar2 < dVar1) {
        *pdVar14 = dVar2;
        auVar6._8_4_ = SUB84((double)fStack_124,0);
        auVar6._0_8_ = (double)local_128;
        auVar6._12_4_ = (int)((ulonglong)(double)fStack_124 >> 0x20);
        *(undefined1 (*) [16])(pdVar3 + 5) = auVar6;
        pdVar3[7] = (double)fStack_120;
        auVar7._8_4_ = SUB84((double)fStack_114,0);
        auVar7._0_8_ = (double)local_118;
        auVar7._12_4_ = (int)((ulonglong)(double)fStack_114 >> 0x20);
        *(undefined1 (*) [16])(pdVar3 + 2) = auVar7;
        pdVar3[4] = (double)fStack_110;
        *pdVar3 = dVar2;
        pdVar3[1] = (double)local_b8;
        *(undefined4 *)(pdVar3 + 8) = param_2;
        pdVar14 = (double *)param_1[1];
      }
    }
    bVar11 = 0.0 < *pdVar14;
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d1e72 FUN_1408d1e72 body=383 status=ok
// SIG undefined FUN_1408d1e72(void)

bool FUN_1408d1e72(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double *param_6,ulonglong *param_7)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = -(ulonglong)(param_3 < 0.0);
  dVar2 = (double)(~uVar1 & (ulonglong)(param_3 / param_2));
  if (1.0 < dVar2) {
    param_5 = -param_5;
    dVar3 = 1.79769313486232e+308;
    dVar2 = 1.79769313486232e+308;
  }
  else {
    dVar4 = (double)(uVar1 & (ulonglong)param_3 |
                    ~uVar1 & (ulonglong)(-param_1 * (param_3 - param_2)));
    dVar3 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar4 - param_1 * param_2) |
                    ~-(ulonglong)(0.0 < dVar2) & (ulonglong)dVar4);
    if (dVar2 <= 0.0) {
      dVar4 = dVar4 + param_1 * param_2;
    }
    param_5 = -param_5;
    if (0.0 < dVar4) {
      dVar2 = 1.79769313486232e+308;
    }
    else if (-param_4 < dVar4) {
      dVar2 = 1.0;
    }
    else {
      dVar2 = (param_5 - dVar3) / (dVar4 - dVar3);
      if (1.0 <= dVar2) {
        dVar2 = 1.0;
      }
      if (dVar2 <= 0.0) {
        dVar2 = 0.0;
      }
    }
  }
  *param_6 = dVar2;
  *param_7 = ~-(ulonglong)(dVar2 == 0.0) & (ulonglong)param_5 |
             (ulonglong)dVar3 & -(ulonglong)(dVar2 == 0.0);
  return *param_6 <= 1.0;
}



// FUNCTION 1408d1ff2 FUN_1408d1ff2 body=3749 status=ok
// SIG undefined FUN_1408d1ff2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d1ff2(double param_1,longlong param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,double *param_8,double *param_9,
                  undefined8 *param_10,double *param_11,undefined4 *param_12)

{
  byte *pbVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double *pdVar14;
  size_t _Size;
  uint uVar15;
  double *pdVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar43;
  double dVar42;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_3a8 [32];
  double *local_388;
  double *local_380;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  ulonglong local_360;
  ulonglong local_358;
  ulonglong local_350;
  int local_348;
  int local_344;
  int local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  double *local_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined8 local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined8 local_2e8;
  longlong lStack_2e0;
  double local_2d8 [4];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  longlong local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  uint local_170;
  uint local_16c;
  undefined8 local_168;
  double local_160;
  double *local_158;
  undefined8 **local_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  double local_130;
  double *local_128;
  int local_120;
  uint local_118;
  uint local_114;
  double local_110;
  double local_108 [3];
  ulonglong local_f0;
  
  uVar44 = (undefined4)param_7;
  uVar45 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar41 = param_6;
  if (DAT_14c75eff8 == '\0') {
    uVar41 = 0;
    uVar44 = 0;
    uVar45 = 0;
  }
  local_1d0 = *(double *)(param_2 + 0x10);
  local_1a8 = local_1d0 + *(double *)(param_2 + 0x30);
  local_1b0 = local_1d0 + *(double *)(param_2 + 0x28);
  local_1b8 = local_1d0 + *(double *)(param_2 + 0x20);
  local_1c0 = *(double *)(param_2 + 0x30) - local_1d0;
  local_1c8 = *(double *)(param_2 + 0x28) - local_1d0;
  local_1d0 = *(double *)(param_2 + 0x20) - local_1d0;
  local_328 = *param_3;
  dStack_320 = param_3[1];
  local_318 = param_3[2];
  dStack_310 = param_3[3];
  local_308 = 0;
  dStack_300 = 0.0;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_2e8 = 0x3ff0000000000000;
  lStack_2e0 = 0x3ff0000000000000;
  local_2d8[0] = 1.0;
  local_2d8[1] = 0.0;
  local_330 = param_4;
  FUN_1400c6592(&local_1d0,&local_1a0,&local_328);
  lStack_2e0 = (longlong)param_1 + 0x20;
  local_328 = 1.79769313486232e+308;
  dStack_320 = 1.79769313486232e+308;
  local_318 = 0.0;
  dStack_310 = 0.0;
  local_308 = 0;
  dStack_300 = 0.0;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_2e8 = CONCAT44(local_2e8._4_4_,0xffffffff);
  pdVar14 = param_3;
  pdVar16 = local_2d8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *pdVar16 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar16 = pdVar16 + 1;
  }
  local_268 = CONCAT44(uVar45,uVar44);
  dVar34 = (local_178 - local_190) * 0.5;
  dVar3 = (local_180 - local_198) * 0.5;
  dVar4 = (local_188 - local_1a0) * 0.5;
  local_190 = local_190 + dVar34;
  local_198 = local_198 + dVar3;
  local_1a0 = local_1a0 + dVar4;
  local_248._0_4_ = (float)local_2b8;
  local_248._4_4_ = (float)dStack_2b0;
  local_258._0_4_ = (float)(local_2b8 + local_1a0);
  local_258._4_4_ = (float)(dStack_2b0 + local_198);
  local_258._8_4_ = (float)(local_2a8 + local_190);
  local_258._12_4_ = 0;
  local_248._8_4_ = (float)local_2a8;
  local_248._12_4_ = 0;
  dVar42 = local_330[1];
  fVar39 = (float)local_330[2];
  local_218._0_4_ = (float)*local_330;
  local_218._4_4_ = (float)dVar42;
  local_218._8_4_ = fVar39;
  local_218._12_4_ = 0;
  local_238 = (float)param_5 * local_218._0_4_ + local_248._0_4_;
  fStack_234 = (float)param_5 * local_218._4_4_ + local_248._4_4_;
  fStack_230 = (float)param_5 * fVar39 + (float)local_2a8;
  fStack_22c = (float)param_5 * 0.0 + 0.0;
  fVar40 = (float)local_2d8[2];
  fVar43 = (float)local_2d8[3];
  fVar46 = (float)local_2d8[0];
  fVar47 = (float)local_2d8[1];
  auVar48 = divps(_DAT_1499314a0,local_218);
  local_1f8 = -(uint)(ABS(local_218._0_4_) < 1e-08);
  uStack_1f4 = -(uint)(ABS(local_218._4_4_) < 1e-08);
  uStack_1f0 = -(uint)(ABS(fVar39) < 1e-08);
  uStack_1ec = 0xffffffff;
  local_228 = ~local_1f8 & auVar48._0_4_;
  uStack_224 = ~uStack_1f4 & auVar48._4_4_;
  uStack_220 = ~uStack_1f0 & auVar48._8_4_;
  uStack_21c = 0;
  uStack_1e0 = (ulonglong)(uint)(float)ABS(dVar34);
  local_1e8 = CONCAT44((float)ABS(dVar3),(float)ABS(dVar4));
  auVar36._0_4_ = fVar46 * fVar46 + fVar47 * fVar47;
  auVar35._4_4_ = fVar40 * fVar40 + fVar43 * fVar43;
  auVar35._0_4_ = auVar36._0_4_;
  auVar35._8_4_ = auVar35._4_4_;
  auVar35._12_4_ = auVar35._4_4_;
  auVar36._8_8_ = auVar35._8_8_;
  auVar36._4_4_ = auVar36._0_4_;
  auVar49._0_4_ = auVar35._4_4_ + auVar36._0_4_;
  auVar49._4_4_ = auVar35._4_4_ + auVar36._0_4_;
  auVar49._8_4_ = auVar36._0_4_ + auVar35._4_4_;
  auVar49._12_4_ = auVar36._0_4_ + auVar35._4_4_;
  auVar48._4_4_ = -(uint)(1e-08 <= auVar49._4_4_);
  auVar48._0_4_ = -(uint)(1e-08 <= auVar49._0_4_);
  auVar48._8_4_ = -(uint)(1e-08 <= auVar49._8_4_);
  auVar48._12_4_ = -(uint)(1e-08 <= auVar49._12_4_);
  auVar36 = sqrtps(auVar36,auVar49);
  auVar36 = divps(_DAT_1499314a0,auVar36);
  auVar38._0_4_ = auVar36._0_4_ * fVar46;
  auVar38._4_4_ = auVar36._4_4_ * fVar47;
  auVar38._8_4_ = auVar36._8_4_ * fVar40;
  auVar38._12_4_ = auVar36._12_4_ * fVar43;
  local_208 = blendvps(_DAT_149932320,auVar38,auVar48);
  dVar34 = *param_3;
  dVar29 = param_3[1];
  dVar31 = param_3[2];
  dVar37 = local_1a0 * dVar31 - dVar34 * local_190;
  dVar32 = local_198 * dVar34 - local_1a0 * dVar29;
  dVar33 = local_190 * dVar29 - local_198 * dVar31;
  dVar33 = dVar33 + dVar33;
  dVar37 = dVar37 + dVar37;
  dVar32 = dVar32 + dVar32;
  dVar29 = (dVar32 * dVar29 - dVar37 * dVar31) + param_3[3] * dVar33 + local_1a0 + param_3[4];
  dVar31 = (dVar31 * dVar33 - dVar32 * dVar34) + param_3[3] * dVar37 + local_198 + param_3[5];
  local_1d0 = *(double *)((longlong)param_1 + 0x138) - dVar4;
  local_1c0 = *(double *)((longlong)param_1 + 0x150) + dVar4;
  local_1b8 = *(double *)((longlong)param_1 + 0x158) + dVar3;
  local_1c8 = *(double *)((longlong)param_1 + 0x140) - dVar3;
  dVar34 = *local_330;
  dVar32 = (double)(-(ulonglong)(0.0 < dVar42) & 0x3ff0000000000000 |
                   ~-(ulonglong)(0.0 < dVar42) & -(ulonglong)(dVar42 < 0.0) & 0xbff0000000000000) *
           dVar3;
  local_128 = (double *)(dVar31 - dVar32);
  local_158 = (double *)(dVar42 * param_5 + dVar31 + dVar32);
  dVar42 = *(double *)((longlong)param_1 + 0x50);
  local_160 = (double)(-(ulonglong)(0.0 < dVar34) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar34) & -(ulonglong)(dVar34 < 0.0) & 0xbff0000000000000)
              * dVar4;
  local_130 = dVar29 - local_160;
  local_160 = dVar34 * param_5 + dVar29 + local_160;
  dVar34 = *(double *)((longlong)param_1 + 0x58);
  local_278 = param_2;
  local_270 = uVar41;
  local_108[0] = dVar4;
  local_108[1] = dVar3;
  cVar5 = FUN_1448596be(&local_1d0);
  if (cVar5 != '\0') {
    dVar29 = *(double *)((longlong)param_1 + 0xb0);
    dVar31 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar33 = *(double *)((longlong)param_1 + 0xd8);
    uVar11 = (uint)((local_130 / dVar42 - dVar29) / dVar33);
    uVar20 = (uint)(((double)local_128 / dVar34 - dVar31) / dVar32);
    iVar6 = *(int *)((longlong)param_1 + 0xd0);
    uVar12 = iVar6 - 1;
    uVar18 = 0;
    if (0 < (int)uVar11) {
      uVar18 = uVar11;
    }
    if (iVar6 <= (int)uVar11) {
      uVar18 = uVar12;
    }
    uVar25 = (ulonglong)uVar18;
    iVar8 = *(int *)((longlong)param_1 + 0xd4);
    uVar11 = 0;
    if (0 < (int)uVar20) {
      uVar11 = uVar20;
    }
    uVar13 = iVar8 - 1;
    if (iVar8 <= (int)uVar20) {
      uVar11 = uVar13;
    }
    uVar27 = (ulonglong)uVar11;
    uVar21 = (uint)((local_160 / dVar42 - dVar29) / dVar33);
    uVar23 = (uint)(((double)local_158 / dVar34 - dVar31) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar6 <= (int)uVar21) {
      uVar20 = uVar12;
    }
    uVar21 = 0;
    if (0 < (int)uVar23) {
      uVar21 = uVar23;
    }
    if (iVar8 <= (int)uVar23) {
      uVar21 = uVar13;
    }
    uVar23 = -(uVar20 - uVar18);
    if ((int)uVar23 < 0) {
      uVar23 = uVar20 - uVar18;
    }
    uVar15 = -(uVar21 - uVar11);
    if ((int)uVar15 < 0) {
      uVar15 = uVar21 - uVar11;
    }
    local_110 = param_5;
    if (uVar15 == 0 && uVar23 == 0) {
      dVar37 = local_130;
      if (local_160 <= local_130) {
        dVar37 = local_160;
      }
      pdVar14 = local_128;
      if ((double)local_158 <= (double)local_128) {
        pdVar14 = local_158;
      }
      uVar11 = (uint)(((dVar37 - dVar4) / dVar42 - dVar29) / dVar33);
      uVar20 = (uint)((((double)pdVar14 - dVar3) / dVar34 - dVar31) / dVar32);
      uVar18 = 0;
      if (0 < (int)uVar11) {
        uVar18 = uVar11;
      }
      dVar37 = local_130;
      if (local_130 <= local_160) {
        dVar37 = local_160;
      }
      if (iVar6 <= (int)uVar11) {
        uVar18 = uVar12;
      }
      uVar11 = 0;
      if (0 < (int)uVar20) {
        uVar11 = uVar20;
      }
      if (iVar8 <= (int)uVar20) {
        uVar11 = uVar13;
      }
      pdVar14 = local_128;
      if ((double)local_128 <= (double)local_158) {
        pdVar14 = local_158;
      }
      uVar21 = (uint)(((dVar37 + dVar4) / dVar42 - dVar29) / dVar33);
      uVar23 = (uint)((((double)pdVar14 + dVar3) / dVar34 - dVar31) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar6 <= (int)uVar21) {
        uVar20 = uVar12;
      }
      uVar12 = 0;
      if (0 < (int)uVar23) {
        uVar12 = uVar23;
      }
      if (iVar8 <= (int)uVar23) {
        uVar12 = uVar13;
      }
      if ((int)uVar11 <= (int)uVar12) {
        do {
          uVar13 = uVar18;
          if ((int)uVar18 <= (int)uVar20) {
            do {
              cVar5 = FUN_1408d2f9a(&local_328,
                                    (*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar11 + uVar13,
                                    &local_110);
              if (cVar5 == '\0') goto LAB_1408d27b8;
              uVar13 = uVar13 + 1;
            } while (uVar20 + 1 != uVar13);
          }
          bVar28 = uVar11 != uVar12;
          uVar11 = uVar11 + 1;
        } while (bVar28);
      }
    }
    else {
      local_358 = CONCAT71(local_358._1_7_,(int)uVar18 < (int)uVar20);
      local_360 = CONCAT71(local_360._1_7_,(int)uVar11 < (int)uVar21);
      uVar12 = uVar23 - uVar15;
      local_350 = (ulonglong)uVar12;
      local_364 = (uint)(uVar23 < uVar15 || uVar12 == 0);
      local_370 = (uint)(uVar23 >= uVar15 && uVar12 != 0);
      local_130 = *(double *)((longlong)param_1 + 0xd0);
      iVar8 = (int)((ulonglong)local_130 >> 0x20) * SUB84(local_130,0);
      iVar6 = iVar8 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      local_120 = (iVar6 >> 3) + 1;
      _Size = (size_t)local_120;
      local_33c = uVar23;
      local_118 = local_364;
      local_114 = local_370;
      local_128 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      memset(local_128,0,_Size);
      local_148 = (undefined8 *)0x0;
      uStack_140 = 1;
      local_368 = uVar15;
      FUN_14575443a(&local_148,0);
      *local_148 = CONCAT44(uVar11,uVar18);
      local_148[1] = 0xbff0000000000000;
      iVar8 = local_130._0_4_ * uVar11 + uVar18;
      iVar6 = local_130._0_4_ * uVar11 + uVar18 + 7;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      pbVar1 = (byte *)((longlong)local_128 + (longlong)(iVar6 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar8 & 7));
      uVar7 = uStack_140 & 0xffffffff;
      if (0 < (int)uStack_140) {
        local_340 = -local_368;
        local_344 = (uint)(byte)local_358 * 2 + -1;
        local_348 = (uint)(byte)local_360 * 2 + -1;
        local_364 = -local_364;
        local_370 = -local_370;
        local_358 = (ulonglong)((local_370 & 1) << 3);
        uVar17 = (ulonglong)uVar11;
        lVar9 = 0;
        uVar26 = uVar25;
        local_378 = uVar11;
        local_374 = uVar18;
        local_338 = uVar20;
        local_334 = uVar21;
        do {
          dVar42 = (double)local_148[lVar9 * 2 + 1];
          if (dVar42 <= local_110) {
            local_168 = local_148[lVar9 * 2];
            local_150 = &local_148;
            lVar22 = 0;
            puVar19 = &local_170;
            puVar24 = (uint *)&local_168;
            bVar28 = true;
            do {
              bVar10 = bVar28;
              uVar12 = *puVar24;
              iVar6 = *(int *)((longlong)param_1 + 0xd0 + lVar22 * 4);
              if ((int)uVar12 < iVar6) {
                if ((int)uVar12 < 1) {
                  uVar12 = 0;
                }
              }
              else {
                uVar12 = iVar6 - 1;
              }
              *puVar19 = uVar12;
              lVar22 = 1;
              puVar19 = &local_36c;
              puVar24 = (uint *)((longlong)&local_168 + 4);
              bVar28 = false;
            } while (bVar10);
            local_160 = param_1;
            local_158 = &local_130;
            if (((local_170 == (uint)local_168) &&
                (uVar12 = (uint)((ulonglong)local_168 >> 0x20), local_36c == uVar12)) &&
               (cVar5 = FUN_1408d2f9a(&local_328,
                                      (*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar12 +
                                      (uint)local_168,&local_110), cVar5 == '\0')) break;
            if (dVar42 < 0.0) {
              auVar30._0_8_ =
                   *(double *)((longlong)local_108 + local_358) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + local_358));
              auVar30._8_8_ = 0;
              if (auVar30._0_8_ < 0.0) {
                auVar48 = roundpd(auVar30,auVar30,1);
                dVar42 = auVar48._0_8_;
              }
              else {
                auVar48 = roundpd(auVar30,auVar30,2);
                dVar42 = auVar48._0_8_;
              }
              local_360 = uVar27;
              FUN_1408d2e98(&local_160,&local_168,&local_118,(int)dVar42);
              local_170 = local_364;
              local_16c = local_370;
              FUN_1408d2e98(&local_160,&local_168,&local_170);
              uVar7 = uStack_140;
              uVar27 = local_360;
              if (((uint)uVar26 == local_338) && ((uint)uVar17 == local_334)) {
                uVar17 = (ulonglong)local_334;
                uVar26 = (ulonglong)local_338;
              }
              else {
                iVar6 = (int)local_350 * 2;
                uVar12 = local_374;
                if (local_340 <= iVar6) {
                  local_350 = (ulonglong)((int)local_350 - local_368);
                  uVar12 = (uint)uVar26 + local_344;
                  uVar25 = (ulonglong)uVar12;
                  uVar26 = uVar25;
                }
                uVar18 = local_378;
                if (iVar6 <= (int)local_33c) {
                  local_350 = (ulonglong)((int)local_350 + local_33c);
                  uVar18 = (uint)uVar17 + local_348;
                  uVar26 = (ulonglong)uVar12;
                  uVar27 = (ulonglong)uVar18;
                }
                uVar20 = local_130._0_4_ * uVar18 + (int)uVar26;
                uVar11 = local_130._0_4_ * uVar18 + (int)uVar26 + 7;
                if (-1 < (int)uVar20) {
                  uVar11 = uVar20;
                }
                bVar2 = *(byte *)((longlong)local_128 + (longlong)((int)uVar11 >> 3));
                if ((bVar2 >> (uVar20 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_128 + (longlong)((int)uVar11 >> 3)) =
                       (byte)(1 << ((byte)uVar20 & 7)) | bVar2;
                  lVar22 = (longlong)(int)uStack_140;
                  uVar12 = (int)uStack_140 + 1;
                  uStack_140 = CONCAT44(uStack_140._4_4_,uVar12);
                  if (uStack_140._4_4_ < uVar12) {
                    FUN_14575443a(&local_148,uVar7 & 0xffffffff);
                  }
                  local_148[lVar22 * 2] = uVar25 | uVar27 << 0x20;
                  local_148[lVar22 * 2 + 1] = 0xbff0000000000000;
                  uVar17 = uVar27 & 0xffffffff;
                  uVar26 = uVar25;
                  local_378 = (uint)uVar27;
                  local_374 = (uint)uVar25;
                }
                else {
                  uVar17 = (ulonglong)uVar18;
                  local_378 = uVar18;
                  local_374 = uVar12;
                }
              }
            }
            uVar7 = uStack_140 & 0xffffffff;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uVar7);
      }
      if (local_148 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1408d27b8:
  dVar42 = (double)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_328 / param_5));
  local_108[0] = dStack_320;
  local_1d0 = dVar42;
  if (dVar42 <= 1.0) {
    if (DAT_14c75eff8 == '\0') {
      local_380 = local_108;
      local_388 = &local_1d0;
      FUN_146d4aafb(local_330[2] * dStack_2f0 + *local_330 * dStack_300 + local_330[1] * local_2f8,
                    param_5,param_6,param_7);
    }
    *param_8 = local_1d0;
    *param_9 = local_108[0];
    param_10[2] = local_308;
    *param_10 = local_318;
    param_10[1] = dStack_310;
    param_11[2] = dStack_2f0;
    *param_11 = dStack_300;
    param_11[1] = local_2f8;
    *param_12 = (undefined4)local_2e8;
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar42 <= 1.0;
}



// FUNCTION 1408d2e98 FUN_1408d2e98 body=258 status=ok
// SIG undefined FUN_1408d2e98(void)

void FUN_1408d2e98(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_14575443a(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1408d2f9a FUN_1408d2f9a body=815 status=ok
// SIG undefined FUN_1408d2f9a(void)

undefined8 FUN_1408d2f9a(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_1408d32ca(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_1408d32ca(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_1408d3218;
        }
        uVar16 = 0;
        goto LAB_1408d321a;
      }
    }
  }
LAB_1408d3218:
  uVar16 = 1;
LAB_1408d321a:
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d32ca FUN_1408d32ca body=1072 status=ok
// SIG undefined FUN_1408d32ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408d32ca(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  double *pdVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  double *local_178;
  double *local_170;
  undefined8 **local_168;
  float *local_160;
  float *local_158;
  undefined1 local_150;
  undefined *local_148;
  undefined8 *local_138;
  undefined8 local_130;
  code *local_128;
  double local_120;
  float local_118;
  float local_114;
  undefined1 *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar2 = (double *)*param_1;
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  local_a8 = *param_5 - fVar10;
  fStack_a4 = param_5[1] - fVar11;
  fStack_a0 = param_5[2] - fVar12;
  fStack_9c = param_5[3] - param_3[3];
  local_b8 = *param_4 - fVar10;
  fStack_b4 = param_4[1] - fVar11;
  fStack_b0 = param_4[2] - fVar12;
  fStack_ac = param_4[3] - param_3[3];
  local_c8 = 0;
  uStack_c0 = 0;
  fStack_d0 = (float)(pdVar2[0x10] - (double)(float)*(undefined8 *)(param_3 + 2));
  fStack_cc = (float)(pdVar2[0x11] -
                     (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20));
  local_d8 = (float)(pdVar2[0xe] - (double)fVar10);
  fStack_d4 = (float)(pdVar2[0xf] - (double)fVar11);
  dVar3 = pdVar2[0x16];
  dVar1 = *(double *)((longlong)dVar3 + 0x10);
  fVar13 = (float)pdVar2[0x17] - (float)dVar1;
  fVar14 = (float)pdVar2[0x17] - (float)dVar1;
  fVar18 = fStack_a4 * local_b8 - fStack_b4 * local_a8;
  fVar21 = fStack_a0 * fStack_b4 - fStack_b0 * fStack_a4;
  fVar22 = local_a8 * fStack_b0 - local_b8 * fStack_a0;
  fVar23 = fStack_9c * fStack_ac - fStack_ac * fStack_9c;
  fVar23 = fVar23 * fVar23;
  auVar19._0_4_ = fVar22 * fVar22 + fVar21 * fVar21;
  auVar19._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
  auVar19._8_4_ = fVar23 + fVar18 * fVar18;
  auVar19._12_4_ = fVar18 * fVar18 + fVar23;
  auVar17._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar17._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar17._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar17._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar20 = sqrtps(auVar19,auVar17);
  auVar20 = divps(_DAT_1499314a0,auVar20);
  fVar21 = auVar20._0_4_ * fVar21;
  fVar22 = auVar20._4_4_ * fVar22;
  fVar18 = auVar20._8_4_ * fVar18;
  fVar27 = *(float *)(pdVar2 + 0x24) * -1.0;
  fVar28 = *(float *)((longlong)pdVar2 + 0x124) * -1.0;
  fVar29 = *(float *)(pdVar2 + 0x25) * -1.0;
  fVar30 = *(float *)((longlong)pdVar2 + 300) * 1.0;
  fVar23 = fVar22 * fVar27 - fVar21 * fVar28;
  fVar15 = fVar18 * fVar28 - fVar22 * fVar29;
  fVar16 = fVar21 * fVar29 - fVar18 * fVar27;
  fVar23 = fVar23 + fVar23;
  fVar15 = fVar15 + fVar15;
  fVar16 = fVar16 + fVar16;
  fVar10 = fVar10 - *(float *)(pdVar2 + 0x1e);
  fVar11 = fVar11 - *(float *)((longlong)pdVar2 + 0xf4);
  fVar12 = fVar12 - *(float *)(pdVar2 + 0x1f);
  fVar24 = fVar11 * fVar27 - fVar28 * fVar10;
  fVar25 = fVar12 * fVar28 - fVar29 * fVar11;
  fVar26 = fVar10 * fVar29 - fVar27 * fVar12;
  fVar24 = fVar24 + fVar24;
  fVar25 = fVar25 + fVar25;
  fVar26 = fVar26 + fVar26;
  fVar10 = (((fVar26 * fVar27 - fVar25 * fVar28) + fVar30 * fVar24 + fVar12) -
           (float)*(double *)((longlong)dVar3 + 0x30)) *
           ((fVar16 * fVar27 - fVar15 * fVar28) + fVar30 * fVar23 + fVar18) +
           (((fVar24 * fVar28 - fVar26 * fVar29) + fVar30 * fVar25 + fVar10) -
           (float)*(double *)((longlong)dVar3 + 0x20)) *
           ((fVar23 * fVar28 - fVar16 * fVar29) + fVar30 * fVar15 + fVar21) +
           (((fVar25 * fVar29 - fVar24 * fVar27) + fVar30 * fVar26 + fVar11) -
           (float)*(double *)((longlong)dVar3 + 0x28)) *
           ((fVar15 * fVar29 - fVar23 * fVar27) + fVar30 * fVar16 + fVar22);
  auVar20._4_4_ = -(uint)(fVar10 < fVar14);
  auVar20._0_4_ = -(uint)(fVar10 < fVar13);
  auVar20._8_4_ = -(uint)(fVar10 < fVar13);
  auVar20._12_4_ = -(uint)(fVar10 < fVar14);
  iVar8 = movmskps(param_2,auVar20);
  bVar6 = true;
  if (iVar8 == 0) {
    local_178 = pdVar2 + 0x22;
    local_118 = (float)dVar1;
    local_110 = &LAB_144a386ca;
    local_138 = &local_c8;
    local_130 = 0;
    local_128 = FUN_14014b546;
    local_148 = &DAT_149f52c20;
    local_158 = &local_108;
    local_160 = &local_f8;
    local_168 = (undefined8 **)&local_dc;
    local_170 = (double *)CONCAT44(local_170._4_4_,(float)*(double *)param_1[1]);
    local_150 = 1;
    local_120 = dVar3;
    local_114 = local_118;
    cVar7 = FUN_1448541f8(&local_138,&local_120,pdVar2 + 0x24,&local_d8);
    pdVar9 = (double *)param_1[1];
    if (cVar7 != '\0') {
      local_f8 = *param_3 + local_f8;
      fStack_f4 = param_3[1] + fStack_f4;
      fStack_f0 = param_3[2] + fStack_f0;
      fStack_ec = param_3[3] + fStack_ec;
      local_178 = (double *)pdVar2[0x18];
      dVar1 = *pdVar9;
      local_170 = &local_120;
      local_168 = &local_138;
      FUN_1408d1e72(SUB84((double)(fStack_100 * *(float *)(pdVar2 + 0x23) +
                                  local_108 * *(float *)(pdVar2 + 0x22) +
                                  fStack_104 * *(float *)((longlong)pdVar2 + 0x114)),0),
                    SUB84(dVar1,0),SUB84((double)local_dc,0),SUB84(pdVar2[0x17],0));
      dVar3 = local_120 * dVar1;
      if (dVar3 < dVar1) {
        *pdVar9 = dVar3;
        auVar4._8_4_ = SUB84((double)fStack_104,0);
        auVar4._0_8_ = (double)local_108;
        auVar4._12_4_ = (int)((ulonglong)(double)fStack_104 >> 0x20);
        *(undefined1 (*) [16])(pdVar2 + 5) = auVar4;
        pdVar2[7] = (double)fStack_100;
        auVar5._8_4_ = SUB84((double)fStack_f4,0);
        auVar5._0_8_ = (double)local_f8;
        auVar5._12_4_ = (int)((ulonglong)(double)fStack_f4 >> 0x20);
        *(undefined1 (*) [16])(pdVar2 + 2) = auVar5;
        pdVar2[4] = (double)fStack_f0;
        *pdVar2 = dVar3;
        pdVar2[1] = (double)local_138;
        *(undefined4 *)(pdVar2 + 8) = param_2;
        pdVar9 = (double *)param_1[1];
      }
    }
    bVar6 = 0.0 < *pdVar9;
  }
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d3702 FUN_1408d3702 body=57 status=ok
// SIG undefined FUN_1408d3702(void)

void FUN_1408d3702(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22af0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22af0 = FUN_140002ddd(FUN_14643acfa,uVar1,L"GpsGeneratorSettings_Random");
  }
  return;
}



// FUNCTION 1408d373c FUN_1408d373c body=119 status=ok
// SIG undefined FUN_1408d373c(void)

void FUN_1408d373c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (((param_1[0x86] != 0) && (param_1 != (longlong *)0x0)) &&
     (*(char *)(param_1[0x86] + 0x291) != '\0')) {
    lVar3 = (**(code **)(*param_1 + 0x640))(param_1);
    if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0xa8), plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x538))(plVar1,param_1);
      if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001408d37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[0x86] + 0x6a0))((longlong *)param_1[0x86],plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1408d37bc FUN_1408d37bc body=553 status=ok
// SIG undefined FUN_1408d37bc(void)

undefined4 * FUN_1408d37bc(char *param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  if (*param_1 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (DAT_14c950c29 == 1) {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = *(longlong *)(param_1 + 0x30);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    lStack_50 = lVar5;
    if ((DAT_14c950c29 & 1) != 0) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x28);
      }
    }
  }
  else {
    local_38 = *(ulonglong *)(param_1 + 0x20);
    plVar4 = (longlong *)FUN_14030a1e6(param_1 + 8,param_3 + 0x240);
    lVar2 = local_58;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_14070cc62();
      lVar2 = local_58;
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) && (lVar5 = plVar4[0x10b], lVar5 != 0)) {
        if (*(longlong *)(lVar5 + 0x1518) != 0) {
          FUN_1408d39e6(*(longlong *)(lVar5 + 0x1518),param_2);
          if (((param_1[0x39] == '\x01') && (uVar1 = param_2[2], 0x14 < uVar1)) &&
             ((uVar1 == 0x200 || uVar1 - 0x15 < 10 &&
              (lVar5 = FUN_1408d3ade(*param_2,param_2[1]), lVar5 != 0)))) {
            uVar3 = FUN_14038d05c(lVar5);
            param_2[2] = uVar3;
          }
          goto LAB_1408d386f;
        }
        if (*(char *)(lVar5 + 0x1539) == '\0') {
          local_38 = local_38 & 0xffffffff00000000;
          local_5c = 0;
          (**(code **)(*plVar4 + 0x528))(plVar4,&local_38,&local_5c);
          lVar5 = FUN_1408d3ade((undefined4)local_38,local_5c);
          if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar5);
          }
          local_58 = lVar5;
          uVar6 = FUN_1408d3a8a(param_3);
          FUN_14038cdaa(param_2,uVar6,&local_58);
          *param_2 = (undefined4)local_38;
          param_2[1] = local_5c;
          goto LAB_1408d386f;
        }
      }
    }
  }
  local_58 = lVar2;
  uVar6 = FUN_1408d3a8a(param_3);
  FUN_14038cdaa(param_2,uVar6,&local_58);
LAB_1408d386f:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408d39e6 FUN_1408d39e6 body=164 status=ok
// SIG undefined FUN_1408d39e6(void)

undefined8 * FUN_1408d39e6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = *(undefined8 *)(param_1 + 0x440);
  uVar4 = *(undefined4 *)(param_1 + 0x250);
  uVar2 = *(undefined4 *)(param_1 + 0x5d4);
  uVar3 = *(undefined4 *)(param_1 + 0x5d0);
  uVar5 = *(undefined8 *)(param_1 + 0x480);
  lVar6 = *(longlong *)(param_1 + 0x488);
  if (lVar6 == 0) {
    *(undefined4 *)param_2 = uVar3;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar4;
    param_2[2] = uVar5;
    param_2[3] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
    plVar7 = (longlong *)param_2[3];
    *(undefined4 *)param_2 = uVar3;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar4;
    param_2[2] = uVar5;
    param_2[3] = lVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  return param_2;
}



// FUNCTION 1408d3a8a FUN_1408d3a8a body=84 status=ok
// SIG undefined FUN_1408d3a8a(void)

undefined8 FUN_1408d3a8a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x4c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001408d3ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1408d3ade FUN_1408d3ade body=149 status=ok
// SIG undefined FUN_1408d3ade(void)

longlong FUN_1408d3ade(float param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_14477bcf0();
  if ((longlong)*(int *)(lVar2 + 0x40) == 0) {
    lVar3 = 0;
  }
  else {
    fVar5 = 3.4028235e+38;
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar4);
      if (((lVar1 != 0) &&
          (param_2 < *(float *)(lVar1 + 0x30) || param_2 == *(float *)(lVar1 + 0x30))) &&
         (fVar6 = *(float *)(lVar1 + 0x30 + (ulonglong)*(byte *)(lVar1 + 0x3c) * 4) - param_1,
         0.0 <= fVar6)) {
        if (*(float *)(lVar1 + 0x38) <= param_1 && param_1 != *(float *)(lVar1 + 0x38)) {
          return lVar1;
        }
        if (fVar6 < fVar5) {
          lVar3 = lVar1;
          fVar5 = fVar6;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar4);
  }
  return lVar3;
}



// FUNCTION 1408d3b74 FUN_1408d3b74 body=113 status=ok
// SIG undefined FUN_1408d3b74(void)

void FUN_1408d3b74(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  FUN_1408d3be6(*(undefined8 *)*param_1);
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 1408d3be6 FUN_1408d3be6 body=6772 status=ok
// SIG undefined FUN_1408d3be6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d3be6(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  byte bVar18;
  undefined4 uVar19;
  int iVar20;
  void *pvVar21;
  uint uVar22;
  int iVar23;
  undefined8 unaff_RBP;
  ulonglong uVar24;
  longlong *plVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_1b8 [32];
  uint *local_198;
  undefined1 *local_190;
  uint local_184;
  longlong *local_180;
  longlong *local_178;
  uint local_16c;
  longlong local_168;
  undefined8 *local_160;
  longlong local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  longlong local_140;
  uint local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_109;
  uint local_108;
  undefined1 local_104 [7];
  undefined1 local_fd;
  uint local_fc;
  undefined8 local_f8;
  int local_f0;
  undefined1 local_ec;
  ulonglong local_70;
  
  bVar18 = DAT_14ca84e0d;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_140 = *(longlong *)(param_2 + 0x120);
  uVar5 = *(uint *)(param_2 + 0x128);
  uVar34 = (ulonglong)uVar5;
  uVar24 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),DAT_14ca84e0d);
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  local_148 = param_1;
  local_138 = uVar5;
  if (uVar34 != 0) {
    cVar4 = FUN_1447e0190();
    uVar22 = 0;
    if ((((cVar4 != '\0') && (uVar22 = 0, 1 < (int)uVar5)) && (bVar18 != 0)) &&
       (uVar22 = uVar5 + 4 >> 3, (int)DAT_14c8335d8 < (int)uVar22)) {
      uVar22 = DAT_14c8335d8;
    }
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar22 = (*(undefined **)(lVar28 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar28 + 0x2c8) == 0) +
             uVar22;
    uVar24 = (ulonglong)uVar22;
    if ((int)DAT_14c8c27ac < 1) {
      memset(&local_f8,0,0x82);
      local_118 = 0;
      local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffff00000000);
      local_fc = 0;
      FUN_140e55932(&local_f8,&local_118,&local_120,&local_fc);
      uVar26 = local_fc;
      local_190 = &local_109;
      local_198 = &local_108;
      FUN_1457b80ec((ulonglong)local_120 & 0xffffffff,local_fc,&local_fd,local_104);
      DAT_14c8c27ac = uVar26;
      if ((0 < (int)local_108) && (DAT_14c8c27ac = uVar26, (int)local_108 <= (int)uVar26)) {
        DAT_14c8c27ac = local_108;
      }
    }
    uVar26 = DAT_14c8c27ac;
    if ((int)uVar22 < (int)DAT_14c8c27ac) {
      uVar26 = uVar22;
    }
    uVar33 = 1;
    if (1 < (int)uVar26) {
      iVar23 = uVar26 * 6;
      iVar20 = iVar23 + uVar5 + -1;
      iVar27 = -6;
      uVar24 = uVar34;
      do {
        if (iVar23 <= (int)uVar5) {
          uVar33 = (longlong)iVar20 / (longlong)iVar23 & 0xffffffff;
          iVar32 = (int)((longlong)iVar20 / (longlong)iVar23);
          uVar34 = (longlong)(int)(iVar32 + (uVar5 - 1)) / (longlong)iVar32;
          uVar24 = uVar34 & 0xffffffff;
          if ((int)uVar26 <= (int)uVar34) break;
        }
        iVar32 = (int)uVar33;
        iVar20 = iVar20 - uVar26;
        iVar23 = iVar23 - uVar26;
        iVar27 = iVar27 + 1;
      } while (iVar27 != 0);
      iVar23 = uVar26 - 1;
      lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar19 = 6;
      if ((*(byte *)(lVar28 + 0xc60) & 0x37) != 0) {
        uVar19 = 0;
      }
      local_180 = (longlong *)CONCAT44(local_180._4_4_,uVar19);
      FUN_144a85b52(&local_118,1);
      puVar13 = (undefined8 *)(lVar28 + 0x308);
      puVar11 = (uint *)*puVar13;
      if (puVar11 != (uint *)0x0) goto LAB_1408d3e88;
      do {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_14307ec65);
        }
        lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar28 + 0x310);
        *(undefined8 *)(lVar28 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar13 = puVar6;
        FUN_140217a48(puVar13);
        puVar11 = (uint *)*puVar13;
LAB_1408d3e88:
        uVar34 = *(longlong *)(puVar11 + 0x10) + 0x3f;
        uVar22 = puVar11[0x12];
        while( true ) {
          puVar9 = (undefined8 *)(uVar34 & 0xffffffffffffffc0);
          if (puVar9 + 0x10 <= puVar11 + 0x4000) {
            *(undefined8 **)(puVar11 + 0x10) = puVar9 + 0x10;
            puVar11[0x12] = uVar22 + 1;
            *puVar9 = &PTR_FUN_149e002e8;
            *(undefined4 *)(puVar9 + 1) = 0;
            *puVar9 = &PTR_FUN_14a3099b8;
            puVar9[3] = L"SetupShadowDepthView";
            uVar10 = 0;
            *(undefined4 *)(puVar9 + 4) = 0;
            *(undefined4 *)(puVar9 + 5) = 0;
            *(uint *)((longlong)puVar9 + 0x2c) = uVar5;
            *(int *)(puVar9 + 6) = iVar32;
            *(int *)((longlong)puVar9 + 0x34) = (int)uVar24;
            puVar9[7] = &local_130;
            puVar9[8] = &local_148;
            puVar9[9] = &local_118;
            *(char *)(puVar9 + 10) = (char)local_180;
            puVar9[0xb] = 0;
            puVar9[0xc] = 0;
            *(int *)((longlong)puVar9 + 0x24) = (int)uVar24;
            *(int *)(puVar9 + 0xc) = iVar23;
            if (iVar23 != 0) {
              FUN_14307ff02(puVar9 + 0xb);
              uVar10 = puVar9[0xb];
            }
            FUN_14307fec8(uVar10,iVar23);
            if (puVar9 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
              UNLOCK();
            }
            local_120 = puVar9;
            FUN_14307f830(&local_120);
            local_ec = 0;
            local_f8 = puVar9;
            local_f0 = iVar23;
            cVar4 = FUN_14307f8ae(&local_f8,1);
            if (cVar4 == '\0') {
              (**(code **)(*(longlong *)CONCAT44(uStack_114,local_118) + 0x20))
                        ((longlong *)CONCAT44(uStack_114,local_118),0xffffffff,0);
            }
            FUN_14307fccc(&local_f8);
            FUN_144a75412(&local_118);
            goto LAB_1408d400e;
          }
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar26 = *puVar11;
          *puVar11 = *puVar11 + uVar22 + 1;
          UNLOCK();
          if ((uVar26 ^ uVar22) != 0xffffffff) break;
          puVar11 = (uint *)*puVar13;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar13 = puVar11;
          uVar34 = (longlong)puVar11 + 0x97;
          uVar22 = 0;
        }
      } while( true );
    }
    if (0 < (int)uVar5) {
      puVar11 = (uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
      ;
      uVar33 = 0;
      do {
        puVar13 = local_148;
        uVar5 = *puVar11;
        if (uVar5 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          uVar5 = *puVar11;
        }
        uVar24 = (ulonglong)uVar5;
        if ((uVar5 == 0x60000000) || (uVar5 == 0)) {
          *puVar11 = 0x40000010;
        }
        FUN_1448e6112(*(undefined8 *)(local_140 + uVar33 * 8),puVar13);
        if ((uVar5 == 0x60000000) || (uVar5 == 0)) {
          *puVar11 = uVar5;
        }
        uVar33 = uVar33 + 1;
      } while (uVar34 != uVar33);
    }
  }
LAB_1408d400e:
  plVar12 = (longlong *)(param_2 + 0x168);
  if (*(int *)(param_2 + 0x174) < 0x80) {
    FUN_141782094(plVar12,0x80);
  }
  iVar23 = *(int *)(param_1 + 0xa1);
  if (0 < iVar23) {
    lVar28 = 0x40;
    lVar29 = 0;
    do {
      uVar24 = param_1[0xa0];
      uVar5 = *(uint *)(uVar24 + lVar28);
      if ((longlong)(int)uVar5 != 0) {
        iVar23 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar23 + uVar5;
        if ((uint)(*(int *)(param_2 + 0x174) - iVar23) < uVar5) {
          FUN_1447417ac(plVar12,iVar23);
        }
        memcpy((void *)((longlong)iVar23 * 8 + *plVar12),*(void **)((uVar24 - 8) + lVar28),
               (longlong)(int)uVar5 << 3);
        iVar23 = *(int *)(param_1 + 0xa1);
      }
      lVar29 = lVar29 + 1;
      lVar28 = lVar28 + 0x48;
    } while (lVar29 < iVar23);
  }
  iVar23 = *(int *)(param_1 + 0xa3);
  if (0 < iVar23) {
    lVar28 = 0x40;
    lVar29 = 0;
    do {
      uVar24 = param_1[0xa2];
      uVar5 = *(uint *)(uVar24 + lVar28);
      if ((longlong)(int)uVar5 != 0) {
        iVar23 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar23 + uVar5;
        if ((uint)(*(int *)(param_2 + 0x174) - iVar23) < uVar5) {
          FUN_1447417ac(plVar12,iVar23);
        }
        memcpy((void *)((longlong)iVar23 * 8 + *plVar12),*(void **)((uVar24 - 8) + lVar28),
               (longlong)(int)uVar5 << 3);
        iVar23 = *(int *)(param_1 + 0xa3);
      }
      lVar29 = lVar29 + 1;
      lVar28 = lVar28 + 0x48;
    } while (lVar29 < iVar23);
  }
  uVar5 = *(uint *)(param_1 + 0xac);
  if ((longlong)(int)uVar5 != 0) {
    iVar23 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar23 + uVar5;
    if ((uint)(*(int *)(param_2 + 0x174) - iVar23) < uVar5) {
      FUN_1447417ac(plVar12,iVar23);
    }
    memcpy((void *)((longlong)iVar23 * 8 + *plVar12),(void *)param_1[0xab],(longlong)(int)uVar5 << 3
          );
  }
  iVar23 = *(int *)(param_1 + 0xae);
  if ((longlong)iVar23 != 0) {
    lVar28 = param_1[0xad];
    uVar24 = 0;
    do {
      uVar5 = *(uint *)(lVar28 + 0x40 + uVar24);
      if ((longlong)(int)uVar5 != 0) {
        iVar20 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar20 + uVar5;
        if ((uint)(*(int *)(param_2 + 0x174) - iVar20) < uVar5) {
          FUN_1447417ac(plVar12,iVar20);
        }
        memcpy((void *)((longlong)iVar20 * 8 + *plVar12),*(void **)(lVar28 + 0x38 + uVar24),
               (longlong)(int)uVar5 << 3);
      }
      uVar24 = uVar24 + 0x48;
    } while ((longlong)iVar23 * 0x48 != uVar24);
  }
  cVar4 = FUN_144adbdbb(*(undefined2 *)(param_1 + 0x115));
  if ((cVar4 != '\0') && (iVar23 = *(int *)(param_1 + 0xb0), (longlong)iVar23 != 0)) {
    lVar28 = param_1[0xaf];
    lVar29 = 0;
    do {
      uVar24 = *(ulonglong *)(lVar28 + lVar29);
      if ((*(byte *)(uVar24 + 0x992) & 4) != 0) {
        iVar20 = *(int *)(param_2 + 0x170);
        uVar5 = iVar20 + 1;
        *(uint *)(param_2 + 0x170) = uVar5;
        if (*(uint *)(param_2 + 0x174) < uVar5) {
          FUN_1447417ac(plVar12);
        }
        *(ulonglong *)(*plVar12 + (longlong)iVar20 * 8) = uVar24;
      }
      lVar29 = lVar29 + 8;
    } while ((longlong)iVar23 * 8 != lVar29);
  }
  iVar23 = *(int *)(param_2 + 0x170);
  if (iVar23 != 0) {
    bVar18 = *(byte *)(param_2 + 0x3a);
    *(int *)(param_2 + 400) = iVar23;
    uVar5 = iVar23 + 0x1f;
    if (0x1f < uVar5) {
      uVar22 = uVar5 >> 5;
      if (*(int *)(param_2 + 0x194) + 0x1fU >> 5 < uVar22) {
        uVar26 = uVar22;
        if ((0x9f < uVar5) || (uVar26 = 0, *(longlong *)(param_2 + 0x188) != 0)) {
          FUN_140064110((longlong *)(param_2 + 0x188),0,uVar26,4);
        }
        *(uint *)(param_2 + 0x194) = uVar5 & 0xffffffe0;
      }
      auVar3 = _DAT_149931e80;
      bVar18 = bVar18 ^ 1;
      pvVar21 = *(void **)(param_2 + 0x188);
      if (*(void **)(param_2 + 0x188) == (void *)0x0) {
        pvVar21 = (void *)(param_2 + 0x178);
      }
      if (uVar5 < 0x120) {
        iVar23 = -(uint)bVar18;
        uVar22 = uVar22 + (uVar22 == 0);
        lVar28 = (ulonglong)uVar22 - 1;
        auVar36._8_4_ = (int)lVar28;
        auVar36._0_8_ = lVar28;
        auVar36._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
        auVar37 = pmovsxbq(in_XMM1,0x302);
        auVar38 = pmovsxbq(in_XMM2,0x100);
        uVar24 = 0;
        auVar36 = auVar36 ^ _DAT_149931e80;
        auVar39 = pmovsxbq(in_XMM5,0x404);
        do {
          auVar40 = auVar38 ^ auVar3;
          lVar28 = auVar36._0_8_;
          lVar29 = auVar36._8_8_;
          if ((bool)(~(lVar28 < auVar40._0_8_) & 1)) {
            *(int *)((longlong)pvVar21 + uVar24 * 4) = iVar23;
          }
          if (auVar40._8_8_ <= lVar29) {
            *(int *)((longlong)pvVar21 + uVar24 * 4 + 4) = iVar23;
          }
          auVar40 = auVar37 ^ auVar3;
          if (auVar40._0_8_ <= lVar28) {
            *(int *)((longlong)pvVar21 + uVar24 * 4 + 8) = iVar23;
          }
          if (auVar40._8_8_ <= lVar29) {
            *(int *)((longlong)pvVar21 + uVar24 * 4 + 0xc) = iVar23;
          }
          uVar24 = uVar24 + 4;
          lVar28 = auVar38._8_8_;
          auVar38._0_8_ = auVar38._0_8_ + auVar39._0_8_;
          auVar38._8_8_ = lVar28 + auVar39._8_8_;
          lVar28 = auVar37._8_8_;
          auVar37._0_8_ = auVar37._0_8_ + auVar39._0_8_;
          auVar37._8_8_ = lVar28 + auVar39._8_8_;
        } while ((uVar22 + 3 & 0x1c) != uVar24);
      }
      else {
        memset(pvVar21,(int)CONCAT71((int7)(uVar24 >> 8),-bVar18),(ulonglong)(uVar22 << 2));
      }
      iVar23 = *(int *)(param_2 + 400);
      iVar20 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar20 = iVar23;
      }
      if (iVar23 % 0x20 != 0) {
        pvVar21 = (void *)(param_2 + 0x178);
        if (*(void **)(param_2 + 0x188) != (void *)0x0) {
          pvVar21 = *(void **)(param_2 + 0x188);
        }
        bVar18 = -(char)(iVar23 % 0x20);
        *(uint *)((longlong)pvVar21 + (longlong)(iVar20 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar21 + (longlong)(iVar20 >> 5) * 4) << (bVar18 & 0x1f)) >>
             (bVar18 & 0x1f);
      }
    }
    if ((longlong)*(int *)(param_2 + 0x170) == 0) {
      iVar23 = 0;
    }
    else {
      lVar28 = 0;
      iVar23 = 0;
      do {
        bVar18 = (*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x168) + lVar28) + 0x990) & 0x20)
                 >> 5;
        iVar23 = iVar23 + (uint)bVar18 + (uint)bVar18 * 4 + 1;
        lVar28 = lVar28 + 8;
      } while ((longlong)*(int *)(param_2 + 0x170) * 8 != lVar28);
    }
    bVar18 = *(byte *)(param_2 + 0x3a);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    pauVar7 = TlsGetValue(DAT_14c896140);
    if (pauVar7 == (undefined1 (*) [16])0x0) {
      pauVar7 = (undefined1 (*) [16])FUN_14001cc68(0x18,0x10);
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined4 *)pauVar7[1] = 0;
      TlsSetValue(DAT_14c896140,pauVar7);
    }
    puVar13 = *(undefined8 **)(*pauVar7 + 8);
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)*pauVar7;
      if (puVar13 == (undefined8 *)0x0) {
        uVar5 = (uint)DAT_14c896180;
        puVar13 = DAT_14c896180;
        while (DAT_14c896180 = puVar13, local_f8 = puVar13, ((ulonglong)puVar13 & 0x3ffffff) != 0) {
          local_148 = (undefined8 *)(((ulonglong)puVar13 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_148 >> 0x1a < (ulonglong)puVar13 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar24 = (ulonglong)((uVar5 & 0x3ffffff) >> 0xe);
          uVar34 = (ulonglong)((uint)puVar13 & 0x3fff);
          local_148 = (undefined8 *)
                      ((ulonglong)local_148 & 0xfffffffffc000000 |
                      (ulonglong)
                      *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + 0x10 + uVar34 * 0x18));
          LOCK();
          bVar35 = local_f8 == DAT_14c896180;
          puVar13 = local_148;
          if (!bVar35) {
            puVar13 = DAT_14c896180;
          }
          DAT_14c896180 = puVar13;
          UNLOCK();
          if (bVar35) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + uVar34 * 0x18 + 0x10) = 0;
            puVar13 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + 8 +
                       (ulonglong)(uVar5 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar5 & 0x3ffffff);
            *(undefined8 **)(*pauVar7 + 8) = puVar13;
            if (puVar13 != (undefined8 *)0x0) goto LAB_1408d462e;
            goto LAB_1408d45f3;
          }
          uVar5 = (uint)DAT_14c896180;
          puVar13 = DAT_14c896180;
        }
        *(undefined8 *)(*pauVar7 + 8) = 0;
LAB_1408d45f3:
        puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
        *(undefined8 **)(*pauVar7 + 8) = puVar13;
        iVar20 = 0xff;
        do {
          puVar9 = puVar13 + 0x20;
          *puVar13 = puVar9;
          iVar20 = iVar20 + -1;
          puVar13 = puVar9;
        } while (iVar20 != 0);
        *puVar9 = 0;
        puVar13 = *(undefined8 **)(*pauVar7 + 8);
      }
      else {
        *(undefined8 **)(*pauVar7 + 8) = puVar13;
        *(undefined8 *)*pauVar7 = 0;
      }
LAB_1408d462e:
      *(undefined4 *)pauVar7[1] = 0x100;
      iVar20 = 0x100;
    }
    else {
      iVar20 = *(int *)pauVar7[1];
    }
    *(undefined8 *)(*pauVar7 + 8) = *puVar13;
    *(int *)pauVar7[1] = iVar20 + -1;
    *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
    puVar13[1] = &DAT_100000002;
    puVar13[2] = 0;
    *(undefined4 *)(puVar13 + 3) = 0;
    *(undefined4 *)(puVar13 + 4) = 0xffffffff;
    puVar13[6] = 0;
    puVar13[7] = 0x100000000;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0xe800000000000020;
    puVar13[0x12] = 0;
    puVar13[0x13] = 0x100000000;
    *(undefined2 *)(puVar13 + 0x14) = 0;
    LOCK();
    bVar35 = *(char *)(puVar13 + 8) == '\x01';
    if (bVar35) {
      *(char *)(puVar13 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar35) {
      FUN_14008cdb0(puVar13 + 8);
    }
    *puVar13 = &PTR_FUN_14a309a48;
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    local_184 = bVar18 ^ 1;
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar29 = *(longlong *)(lVar28 + 0x2b8);
    if (lVar29 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar29 + 0x30);
    }
    puVar13[0xf] = uVar8;
    puVar13[0x10] = 0xc00000528c1c1e80;
    *(uint *)((longlong)puVar13 + 0x1c) = local_184;
    puVar13[0x15] = uVar10;
    *(int *)(puVar13 + 0x16) = iVar23;
    *puVar13 = &PTR_FUN_14a309a38;
    FUN_14302e1ba(puVar13,param_2 + 0x198);
    local_178 = (longlong *)(lVar28 + 0x2b8);
    local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,1);
    FUN_1447439e4(puVar13);
    if (*(char *)(param_2 + 0x3a) == '\0') {
      cVar4 = '\0';
    }
    else {
      puVar9 = (undefined8 *)FUN_1448fe162();
      *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
      puVar9[1] = &DAT_100000001;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 0;
      *(undefined4 *)(puVar9 + 4) = 0xffffffff;
      puVar9[6] = 0;
      puVar9[7] = 0x100000000;
      *(undefined1 *)(puVar9 + 8) = 1;
      puVar9[0xe] = LowLevelTasks::
                    TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                    TTaskDelegateDummy::vftable;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0xe800000000000020;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0x100000000;
      *(undefined2 *)(puVar9 + 0x14) = 0;
      LOCK();
      bVar35 = *(char *)(puVar9 + 8) == '\x01';
      if (bVar35) {
        *(char *)(puVar9 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(puVar9 + 8);
      }
      *puVar9 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
      }
      puVar9[0xe] = LowLevelTasks::
                    TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                    TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                    ::vftable;
      puVar9[9] = puVar9;
      puVar9[10] = puVar9;
      if (*local_178 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(*local_178 + 0x30);
      }
      puVar9[0xf] = uVar10;
      puVar9[0x10] = 0xc80000528c1c3700;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = 2;
      uVar5 = 0;
      if ((DAT_14c761945 == '\x01') && ((DAT_14ca84e0d & 1) != 0)) {
        uVar22 = DAT_14c8335d8;
        if ((int)DAT_14c760a40 < (int)DAT_14c8335d8) {
          uVar22 = DAT_14c760a40;
        }
        uVar5 = 0;
        if (0 < (int)uVar22) {
          uVar5 = uVar22;
        }
      }
      local_16c = *(uint *)(param_2 + 0x170);
      if ((int)uVar5 < (int)*(uint *)(param_2 + 0x170)) {
        local_16c = uVar5;
      }
      local_130 = puVar9;
      if (0 < (int)local_16c) {
        local_180 = (longlong *)(param_2 + 0x158);
        puVar9 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xea8);
        local_168 = param_2 + 0x140;
        local_158 = -0x3fffffad73e3b080;
        local_160 = puVar13 + 0x11;
        uVar5 = 0;
        local_150 = puVar13;
        do {
          uVar10 = FUN_14001cc68(0x308,0x10);
          FUN_14009016e(uVar10,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
          FUN_14002049c(uVar10,1);
          iVar23 = *(int *)(param_2 + 0x160);
          *(uint *)(param_2 + 0x160) = iVar23 + 1U;
          if (*(uint *)(param_2 + 0x164) < iVar23 + 1U) {
            FUN_141780272(local_180,iVar23);
          }
          *(undefined8 *)(*local_180 + (longlong)iVar23 * 8) = uVar10;
          puVar11 = (uint *)*puVar9;
          if (puVar11 != (uint *)0x0) goto LAB_1408d4a7d;
          while( true ) {
            FUN_14472e504(puVar9);
            puVar11 = (uint *)*puVar9;
LAB_1408d4a7d:
            puVar30 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar22 = puVar11[0x12];
            if (puVar30 + 0x37 <= puVar11 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
              LOCK();
              uVar26 = *puVar11;
              *puVar11 = *puVar11 + uVar22 + 1;
              UNLOCK();
              if ((uVar26 ^ uVar22) != 0xffffffff) break;
              puVar11 = (uint *)*puVar9;
              *puVar11 = 0xffffffff;
              *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *puVar9 = puVar11;
              puVar30 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
              uVar22 = 0;
              if (puVar30 + 0x37 <= puVar11 + 0x4000) {
                uVar22 = 1;
                goto LAB_1408d4af9;
              }
            }
          }
          uVar22 = uVar22 + 1;
LAB_1408d4af9:
          *(undefined8 **)(puVar11 + 0x10) = puVar30 + 0x38;
          puVar11[0x12] = uVar22;
          *(int *)(puVar30 + -1) = ((int)puVar30 + -8) - (int)puVar11;
          *(undefined4 *)((longlong)puVar30 + -4) = 0x1b8;
          puVar30[1] = 0;
          *puVar30 = &PTR_FUN_14a309908;
          lVar28 = param_1[0x12];
          do {
            puVar30[1] = lVar28;
            LOCK();
            lVar29 = param_1[0x12];
            bVar35 = lVar28 == lVar29;
            if (bVar35) {
              param_1[0x12] = puVar30;
              lVar29 = lVar28;
            }
            UNLOCK();
            lVar28 = lVar29;
          } while (!bVar35);
          puVar31 = puVar30 + 2;
          FUN_14307f414(puVar31);
          iVar23 = *(int *)(param_2 + 0x150);
          uVar22 = iVar23 + 1;
          *(uint *)(param_2 + 0x150) = uVar22;
          if (*(uint *)(param_2 + 0x154) < uVar22) {
            FUN_14731408c(local_168);
          }
          lVar28 = *(longlong *)(param_2 + 0x148);
          if (*(longlong *)(param_2 + 0x148) == 0) {
            lVar28 = local_168;
          }
          *(undefined8 **)(lVar28 + (longlong)iVar23 * 8) = puVar31;
          plVar12 = TlsGetValue(DAT_14c896140);
          if (plVar12 == (longlong *)0x0) {
            plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
            *plVar12 = 0;
            plVar12[1] = 0;
            *(undefined4 *)(plVar12 + 2) = 0;
            TlsSetValue(DAT_14c896140,plVar12);
          }
          plVar25 = (longlong *)plVar12[1];
          if (plVar25 == (longlong *)0x0) {
            plVar25 = (longlong *)*plVar12;
            if (plVar25 == (longlong *)0x0) {
              do {
                local_f8 = DAT_14c896180;
                uVar22 = (uint)DAT_14c896180;
                if (((ulonglong)DAT_14c896180 & 0x3ffffff) == 0) {
                  plVar12[1] = 0;
                  goto LAB_1408d4d28;
                }
                local_148 = (undefined8 *)
                            (((ulonglong)DAT_14c896180 & 0xfffffffffc000000) + 0x4000000);
                if ((ulonglong)local_148 >> 0x1a < (ulonglong)DAT_14c896180 >> 0x1a) {
                  FUN_14000f986(0x3a83126f);
                }
                uVar24 = (ulonglong)((uVar22 & 0x3ffffff) >> 0xe);
                local_148 = (undefined8 *)
                            ((ulonglong)local_148 & 0xfffffffffc000000 |
                            (ulonglong)
                            *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + 0x10 +
                                     (ulonglong)(uVar22 & 0x3fff) * 0x18));
                LOCK();
                bVar35 = local_f8 != DAT_14c896180;
                puVar13 = local_148;
                if (bVar35) {
                  puVar13 = DAT_14c896180;
                }
                DAT_14c896180 = puVar13;
                UNLOCK();
              } while (bVar35);
              *(undefined4 *)
               (*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + (ulonglong)(uVar22 & 0x3fff) * 0x18 +
               0x10) = 0;
              plVar25 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + 8 +
                         (ulonglong)(uVar22 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar22 & 0x3ffffff);
              plVar12[1] = (longlong)plVar25;
              if (plVar25 == (longlong *)0x0) {
LAB_1408d4d28:
                puVar13 = (undefined8 *)FUN_14001cc68(0x10000);
                plVar12[1] = (longlong)puVar13;
                iVar23 = 0xff;
                do {
                  puVar14 = puVar13 + 0x20;
                  *puVar13 = puVar14;
                  iVar23 = iVar23 + -1;
                  puVar13 = puVar14;
                } while (iVar23 != 0);
                *puVar14 = 0;
                plVar25 = (longlong *)plVar12[1];
              }
            }
            else {
              plVar12[1] = (longlong)plVar25;
              *plVar12 = 0;
            }
            *(undefined4 *)(plVar12 + 2) = 0x100;
            iVar23 = 0x100;
          }
          else {
            iVar23 = (int)plVar12[2];
          }
          plVar12[1] = *plVar25;
          *(int *)(plVar12 + 2) = iVar23 + -1;
          *plVar25 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
          plVar25[1] = (longlong)&DAT_100000002;
          plVar25[2] = 0;
          *(undefined4 *)(plVar25 + 3) = 0;
          *(undefined4 *)(plVar25 + 4) = 0xffffffff;
          plVar25[6] = 0;
          plVar25[7] = 0x100000000;
          *(undefined1 *)(plVar25 + 8) = 1;
          plVar25[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          plVar25[0xf] = 0;
          plVar25[0x10] = -0x17ffffffffffffe0;
          plVar25[0x12] = 0;
          plVar25[0x13] = 0x100000000;
          *(undefined2 *)(plVar25 + 0x14) = 0;
          LOCK();
          bVar35 = (char)plVar25[8] == '\x01';
          if (bVar35) {
            *(char *)(plVar25 + 8) = '\0';
          }
          UNLOCK();
          if (!bVar35) {
            FUN_14008cdb0(plVar25 + 8);
          }
          puVar13 = local_150;
          *plVar25 = (longlong)&PTR_FUN_14a309a68;
          if (*(code **)(plVar25[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(plVar25[0xe] + 0x18))(plVar25 + 0xe,plVar25 + 9);
          }
          plVar25[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          plVar25[9] = (longlong)plVar25;
          plVar25[10] = (longlong)plVar25;
          if (*local_178 == 0) {
            lVar28 = 0;
          }
          else {
            lVar28 = *(longlong *)(*local_178 + 0x30);
          }
          plVar25[0xf] = lVar28;
          plVar25[0x10] = local_158;
          *(undefined4 *)((longlong)plVar25 + 0x1c) = 0;
          plVar25[0x15] = (longlong)param_1;
          plVar25[0x16] = param_2;
          plVar25[0x17] = (longlong)puVar31;
          *plVar25 = (longlong)&PTR_FUN_14a309a58;
          LOCK();
          puVar30[0x34] = puVar30[0x34] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar25 + 0xc) = *(int *)((longlong)plVar25 + 0xc) + 1;
          UNLOCK();
          plVar25[2] = (longlong)(puVar30 + 0x33);
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)((longlong)plVar25 + 0xc) = *(int *)((longlong)plVar25 + 0xc) + 1;
            UNLOCK();
            cVar4 = FUN_1456bb142(local_160,plVar25);
            if (cVar4 == '\0') {
              LOCK();
              *(int *)((longlong)plVar25 + 0xc) = *(int *)((longlong)plVar25 + 0xc) + -1;
              UNLOCK();
            }
            else {
              LOCK();
              *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
              UNLOCK();
              FUN_1456bb1d4(plVar25 + 5,puVar13);
            }
          }
          local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,1);
          FUN_1447439e4(plVar25,&local_f8);
          puVar30 = local_130;
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_130 + 0xc) = *(int *)((longlong)local_130 + 0xc) + 1;
            UNLOCK();
            cVar4 = FUN_1456bb142(plVar25 + 0x11,local_130);
            if (cVar4 == '\0') {
              LOCK();
              piVar1 = (int *)((longlong)puVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
            }
            else {
              LOCK();
              *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
              UNLOCK();
              FUN_1456bb1d4(puVar30 + 5,plVar25);
            }
            LOCK();
            plVar12 = plVar25 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*plVar25)(plVar25,1);
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != local_16c);
      }
      FUN_1400daade(&local_130);
      puVar9 = local_130;
      local_130 = (undefined8 *)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar13 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar13)(puVar13,1);
        }
        if (local_130 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_130 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_130)(local_130,1);
          }
        }
      }
      cVar4 = (*(byte *)(param_2 + 0x3a) & 1) * '\x02';
      puVar13 = puVar9;
    }
    pauVar7 = TlsGetValue(DAT_14c896140);
    if (pauVar7 == (undefined1 (*) [16])0x0) {
      pauVar7 = (undefined1 (*) [16])FUN_14001cc68(0x18,0x10);
      *pauVar7 = (undefined1  [16])0x0;
      *(undefined4 *)pauVar7[1] = 0;
      TlsSetValue(DAT_14c896140,pauVar7);
    }
    pauVar16 = *(undefined1 (**) [16])(*pauVar7 + 8);
    if (pauVar16 == (undefined1 (*) [16])0x0) {
      pauVar16 = *(undefined1 (**) [16])*pauVar7;
      if (pauVar16 == (undefined1 (*) [16])0x0) {
        uVar5 = (uint)DAT_14c896180;
        puVar9 = DAT_14c896180;
        while (DAT_14c896180 = puVar9, local_f8 = puVar9, ((ulonglong)puVar9 & 0x3ffffff) != 0) {
          local_148 = (undefined8 *)(((ulonglong)puVar9 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_148 >> 0x1a < (ulonglong)puVar9 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar24 = (ulonglong)((uVar5 & 0x3ffffff) >> 0xe);
          uVar34 = (ulonglong)((uint)puVar9 & 0x3fff);
          local_148 = (undefined8 *)
                      ((ulonglong)local_148 & 0xfffffffffc000000 |
                      (ulonglong)
                      *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + 0x10 + uVar34 * 0x18));
          LOCK();
          bVar35 = local_f8 == DAT_14c896180;
          puVar9 = local_148;
          if (!bVar35) {
            puVar9 = DAT_14c896180;
          }
          DAT_14c896180 = puVar9;
          UNLOCK();
          if (bVar35) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + uVar34 * 0x18 + 0x10) = 0;
            pauVar16 = *(undefined1 (**) [16])
                        (*(longlong *)(&DAT_14c833b00 + uVar24 * 8) + 8 +
                        (ulonglong)(uVar5 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar5 & 0x3ffffff);
            *(undefined1 (**) [16])(*pauVar7 + 8) = pauVar16;
            if (pauVar16 == (undefined1 (*) [16])0x0) goto LAB_1408d551d;
            goto LAB_1408d51c1;
          }
          uVar5 = (uint)DAT_14c896180;
          puVar9 = DAT_14c896180;
        }
        *(undefined8 *)(*pauVar7 + 8) = 0;
LAB_1408d551d:
        pauVar16 = (undefined1 (*) [16])FUN_14001cc68(0x10000,0);
        *(undefined1 (**) [16])(*pauVar7 + 8) = pauVar16;
        iVar23 = 0xff;
        pauVar17 = pauVar16;
        do {
          pauVar15 = pauVar17 + 0x10;
          *(undefined1 (**) [16])*pauVar17 = pauVar15;
          iVar23 = iVar23 + -1;
          pauVar17 = pauVar15;
        } while (iVar23 != 0);
      }
      else {
        *(undefined1 (**) [16])(*pauVar7 + 8) = pauVar16;
        pauVar15 = pauVar7;
      }
      *(undefined8 *)*pauVar15 = 0;
LAB_1408d51c1:
      *(undefined4 *)pauVar7[1] = 0x100;
      iVar23 = 0xff;
    }
    else {
      iVar23 = *(int *)pauVar7[1] + -1;
    }
    *(undefined8 *)(*pauVar7 + 8) = *(undefined8 *)*pauVar16;
    *(int *)pauVar7[1] = iVar23;
    *(undefined ***)*pauVar16 = UE::Tasks::Private::FTaskBase::vftable;
    *(undefined1 **)(*pauVar16 + 8) = &DAT_100000002;
    *(undefined8 *)pauVar16[1] = 0;
    *(undefined4 *)(pauVar16[1] + 8) = 0;
    *(undefined4 *)pauVar16[2] = 0xffffffff;
    *(undefined8 *)pauVar16[3] = 0;
    *(undefined8 *)(pauVar16[3] + 8) = 0x100000000;
    pauVar16[4][0] = 1;
    *(undefined ***)pauVar16[7] =
         LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
         TTaskDelegateDummy::vftable;
    *(undefined8 *)(pauVar16[7] + 8) = 0;
    *(undefined8 *)pauVar16[8] = 0xe800000000000020;
    *(undefined8 *)pauVar16[9] = 0;
    *(undefined8 *)(pauVar16[9] + 8) = 0x100000000;
    *(undefined2 *)pauVar16[10] = 0;
    LOCK();
    bVar35 = pauVar16[4][0] == '\x01';
    if (bVar35) {
      pauVar16[4][0] = 0;
    }
    UNLOCK();
    if (!bVar35) {
      FUN_14008cdb0(pauVar16 + 4);
    }
    *(undefined ***)*pauVar16 = &PTR_FUN_14a309a88;
    pcVar2 = *(code **)(*(longlong *)pauVar16[7] + 0x18);
    if (pcVar2 != FUN_144713626) {
      (*pcVar2)(pauVar16 + 7,pauVar16[4] + 8);
    }
    *(undefined ***)pauVar16[7] =
         LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
         ::vftable;
    *(undefined1 (**) [16])(pauVar16[4] + 8) = pauVar16;
    *(undefined1 (**) [16])pauVar16[5] = pauVar16;
    if (*local_178 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*local_178 + 0x30);
    }
    *(undefined8 *)(pauVar16[7] + 8) = uVar10;
    *(undefined8 *)pauVar16[8] = 0xc00000528c1c6800;
    *(uint *)(pauVar16[1] + 0xc) = local_184;
    *(undefined8 **)(pauVar16[10] + 8) = param_1;
    *(longlong *)pauVar16[0xb] = param_2;
    pauVar16[0xb][8] = cVar4;
    uVar19 = (undefined4)local_f8;
    *(undefined4 *)(pauVar16[0xb] + 9) = uVar19;
    *(undefined4 *)(pauVar16[0xb] + 0xc) = local_f8._3_4_;
    *(undefined ***)*pauVar16 = &PTR_FUN_14a309a78;
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(*pauVar16 + 0xc) = *(int *)(*pauVar16 + 0xc) + 1;
      UNLOCK();
      cVar4 = FUN_1456bb142(puVar13 + 0x11,pauVar16);
      if (cVar4 == '\0') {
        LOCK();
        *(int *)(*pauVar16 + 0xc) = *(int *)(*pauVar16 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
        FUN_1456bb1d4(pauVar16[2] + 8,puVar13);
      }
    }
    local_148 = (undefined8 *)CONCAT71(local_148._1_7_,1);
    FUN_1447439e4(pauVar16);
    if (pauVar16 != (undefined1 (*) [16])0x0) {
      lVar28 = *(longlong *)(param_2 + 0x1a0);
      LOCK();
      *(int *)(lVar28 + 0xc) = *(int *)(lVar28 + 0xc) + 1;
      UNLOCK();
      cVar4 = FUN_1456bb142(pauVar16[8] + 8,lVar28);
      if (cVar4 == '\0') {
        LOCK();
        *(int *)(lVar28 + 0xc) = *(int *)(lVar28 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(*pauVar16 + 8) = *(int *)(*pauVar16 + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(lVar28 + 0x28,pauVar16);
      }
      LOCK();
      piVar1 = (int *)(*pauVar16 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)**(undefined8 **)*pauVar16)(pauVar16,1);
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar13 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
  }
  FUN_1400daade(param_2 + 0x1a0);
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408d565b FUN_1408d565b body=42 status=ok
// SIG undefined FUN_1408d565b(void)

void FUN_1408d565b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408d5686(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b2b2350;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1408d5686 FUN_1408d5686 body=94 status=ok
// SIG undefined FUN_1408d5686(void)

undefined8 * FUN_1408d5686(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a8bdcb0;
  return param_1;
}



// FUNCTION 1408d56f2 FUN_1408d56f2 body=106 status=ok
// SIG undefined FUN_1408d56f2(void)

undefined8 * FUN_1408d56f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b84b7c0;
  FUN_1408d575c(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  FUN_1408d57a6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408d575c FUN_1408d575c body=73 status=ok
// SIG undefined FUN_1408d575c(void)

void FUN_1408d575c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408d57a6 FUN_1408d57a6 body=240 status=ok
// SIG undefined FUN_1408d57a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d57a6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b47ab90;
  FUN_1408d5896(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001408d587e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1408d5896 FUN_1408d5896 body=43 status=ok
// SIG undefined FUN_1408d5896(void)

void FUN_1408d5896(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1408d58d0 FUN_1408d58d0 body=114 status=ok
// SIG undefined FUN_1408d58d0(void)

void FUN_1408d58d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = (int)param_1[0xb];
    if (iVar1 < 1) {
      FUN_1406fa324(param_1 + 10,&DAT_14c9a6308);
      iVar1 = (int)param_1[0xb];
    }
    FUN_1407fecba(param_1 + 0xc,iVar1,1);
    iVar1 = FUN_1448332aa(param_2,&DAT_14b4047d8);
    if (iVar1 < 0) {
      param_1[7] = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001408d5914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1408d5942 FUN_1408d5942 body=257 status=ok
// SIG undefined FUN_1408d5942(void)

void FUN_1408d5942(longlong param_1)

{
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  *(ulonglong *)(param_1 + 0x44) = (ulonglong)*(uint *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    local_238 = local_240;
    FUN_14005eb5c(param_1 + 0x38,&local_240);
    if (local_230 <= local_238 + 1) {
      FUN_140213274(&local_240,1);
    }
    *local_238 = 0x5f;
    local_238 = local_238 + 1;
    FUN_14005eb5c((undefined8 *)(param_1 + 0x44),&local_240);
    *local_238 = 0;
    FUN_1446f470e(&local_248,local_240,1);
    *(undefined8 *)(param_1 + 0x44) = local_248;
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d5a44 FUN_1408d5a44 body=104 status=ok
// SIG undefined FUN_1408d5a44(void)

longlong FUN_1408d5a44(longlong param_1,longlong param_2)

{
  FUN_1408d5aac();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_1408d5b02(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_1408d5aac(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_1408d5b5a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 1408d5aac FUN_1408d5aac body=85 status=ok
// SIG undefined FUN_1408d5aac(void)

undefined8 * FUN_1408d5aac(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14064debc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x58);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408d5b02 FUN_1408d5b02 body=88 status=ok
// SIG undefined FUN_1408d5b02(void)

undefined8 * FUN_1408d5b02(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1408d5bb4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 7);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408d5b5a FUN_1408d5b5a body=89 status=ok
// SIG undefined FUN_1408d5b5a(void)

undefined8 * FUN_1408d5b5a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1408d5c8a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408d5bb4 FUN_1408d5bb4 body=214 status=ok
// SIG undefined FUN_1408d5bb4(void)

void FUN_1408d5bb4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x1ffffffffffffffU) * 8]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    iVar1 = (int)(uVar2 >> 7);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x80,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1408d5c8a FUN_1408d5c8a body=343 status=ok
// SIG undefined FUN_1408d5c8a(void)

void FUN_1408d5c8a(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408d5cfc;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1408d5cfc:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1408d5de1 FUN_1408d5de1 body=138 status=ok
// SIG undefined FUN_1408d5de1(void)

byte FUN_1408d5de1(undefined8 param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = FUN_144a42af8(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2),param_1);
  bVar3 = 0;
  uVar4 = 0;
  do {
    if (((uVar1 >> 8) >> (uVar4 & 0x1f) & 1) != 0) {
      switch(uVar4 & 0xff) {
      case 1:
        bVar2 = (byte)uVar4;
        break;
      case 2:
        bVar2 = (uVar1 >> 0x11 & 1) == 0 | 2;
        break;
      case 3:
      case 5:
        bVar2 = 4;
        break;
      case 4:
        bVar2 = 2;
        break;
      case 6:
        bVar2 = 5;
        break;
      default:
        bVar2 = 0;
      }
      bVar3 = bVar3 | '\x01' << (bVar2 & 0x1f);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 7);
  return bVar3;
}



// FUNCTION 1408d5e6c FUN_1408d5e6c body=672 status=ok
// SIG undefined FUN_1408d5e6c(void)

void FUN_1408d5e6c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
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
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == (longlong *)0x0) goto LAB_1408d5fd0;
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xa8))(param_2);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1408d5fd0;
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    if (DAT_14cad2858 == 0) {
      local_60 = &local_48;
      local_48 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146395584;
      local_68 = &LAB_147a0ba80;
      local_70 = &LAB_14575ccce;
      local_78 = L"Engine";
      local_80 = 0x40000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 == 1) {
            DVar4 = FUN_140ad26c0();
            DVar5 = GetCurrentThreadId();
            if (DVar4 == DVar5) goto LAB_1408d60fa;
          }
          goto LAB_1408d5f1f;
        }
      }
LAB_1408d60fa:
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_1408d5f1f:
  lVar7 = param_1[0x7c];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar7;
  }
  FUN_1408d610e(lVar7,param_2);
  iVar1 = (int)param_1[0x9f];
  *(uint *)(param_1 + 0x9f) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4fc) < iVar1 + 1U) {
    FUN_140c4a4dc(param_1 + 0x9e,iVar1);
  }
  *(longlong **)(param_1[0x9e] + (longlong)iVar1 * 8) = param_2;
  plVar2 = *(longlong **)(lVar7 + 0x170);
  FUN_14023ffbe();
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if (cVar3 != '\0') {
      lVar7 = (**(code **)(*plVar2 + 0xa8))(plVar2);
      if (lVar7 == 0) {
        uVar9 = 0;
      }
      else {
        puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0xa8))(plVar2);
        uVar9 = *puVar8;
      }
      *puVar6 = uVar9;
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0xa8))(plVar2);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = param_2;
      }
      goto LAB_1408d5fd0;
    }
  }
  *puVar6 = *(undefined8 *)(lVar7 + 0x170);
  *(longlong **)(lVar7 + 0x170) = param_2;
LAB_1408d5fd0:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d610e FUN_1408d610e body=602 status=ok
// SIG undefined FUN_1408d610e(void)

void FUN_1408d610e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) goto LAB_1408d61f8;
  cVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  if (cVar3 != '\0') {
    (**(code **)(*param_2 + 0xa0))(param_2,param_1,param_1[0x26]);
  }
  cVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[0xef];
    *(uint *)(param_1 + 0xef) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x77c) < iVar1 + 1U) {
      FUN_140c4a4dc(param_1 + 0xee,iVar1);
    }
    *(longlong **)(param_1[0xee] + (longlong)iVar1 * 8) = param_2;
  }
  cVar3 = (**(code **)(*param_2 + 200))(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[0x110];
    *(uint *)(param_1 + 0x110) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x884) < iVar1 + 1U) {
      FUN_140c4a4dc(param_1 + 0x10f,iVar1);
    }
    *(longlong **)(param_1[0x10f] + (longlong)iVar1 * 8) = param_2;
  }
  cVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[0xf3];
    *(uint *)(param_1 + 0xf3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x79c) < iVar1 + 1U) {
      FUN_140c4a4dc(param_1 + 0xf2,iVar1);
    }
    *(longlong **)(param_1[0xf2] + (longlong)iVar1 * 8) = param_2;
  }
  cVar3 = (**(code **)(*param_2 + 0xe0))(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[0x114];
    *(uint *)(param_1 + 0x114) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x8a4) < iVar1 + 1U) {
      FUN_140c4a4dc(param_1 + 0x113,iVar1);
    }
    *(longlong **)(param_1[0x113] + (longlong)iVar1 * 8) = param_2;
  }
  lVar2 = param_1[0x28];
  local_40 = 0;
  local_38 = 1;
  local_34 = 0xffffffffffffffff;
  local_48 = param_1;
  if (lVar2 == 0) {
    lVar5 = param_1[0x26];
    if (lVar5 == 0) {
LAB_1408d6342:
      lVar5 = 0;
    }
    else {
      lVar4 = FUN_1402e44f4();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1408d6342;
    }
    (**(code **)(*param_1 + 0x80))(param_1,lVar5);
  }
  (**(code **)(*param_2 + 0x10))(param_2,&local_48);
  local_60 = 0;
  local_58 = 1;
  local_54 = 0xffffffffffffffff;
  local_68 = param_1;
  (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
LAB_1408d61f8:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d639c FUN_1408d639c body=537 status=ok
// SIG undefined FUN_1408d639c(void)

void FUN_1408d639c(undefined8 *param_1,undefined8 *param_2,undefined2 *param_3,undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  undefined8 uStack_68;
  undefined2 *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_4;
  if (param_3 != (undefined2 *)0x0) {
    FUN_1400021e4(&local_38,&local_48);
    iVar4 = *(int *)(param_2 + 1);
    lVar5 = (longlong)iVar4;
    local_70 = (undefined2 *)0x0;
    pvVar1 = (void *)*param_2;
    uStack_68 = CONCAT44(uStack_68._4_4_,iVar4);
    FUN_1446dd670(&local_70,(uint)(lVar5 == 0) + iVar4 + 1,0);
    if (lVar5 != 0) {
      memcpy(local_70,pvVar1,lVar5 * 2);
    }
    FUN_1400020e8(&local_70,&DAT_149e01f60,1);
    pvVar1 = local_48;
    local_58 = (int)uStack_68;
    if ((int)uStack_68 < 2) {
      local_60 = (undefined2 *)0x0;
      local_58 = local_40;
      if ((longlong)local_40 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_40,0);
        memcpy(local_60,pvVar1,(longlong)local_40 * 2);
      }
    }
    else {
      iVar4 = local_40 + -1;
      if (local_40 == 0) {
        iVar4 = 0;
      }
      local_60 = local_70;
      local_54 = uStack_68._4_4_;
      local_70 = (undefined2 *)0x0;
      uStack_68 = 0;
      if (iVar4 + local_58 < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar4);
      }
      if (local_54 < iVar4 + local_58) {
        FUN_1446f8c06(&local_60);
      }
      FUN_1400020e8(&local_60,local_48,iVar4);
    }
    puVar3 = local_60;
    if (local_58 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_50,puVar3,1);
    *param_1 = local_50;
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    param_1[3] = param_3;
    local_70 = (undefined2 *)0x0;
    local_60 = param_3;
    cVar2 = FUN_1408d65b6(&local_48,*(undefined8 *)(param_3 + 8));
    if (cVar2 != '\0') {
      param_1[1] = local_70;
      param_1[2] = local_60;
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408d65b6 FUN_1408d65b6 body=522 status=ok
// SIG undefined FUN_1408d65b6(void)

ulonglong FUN_1408d65b6(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140056680(local_78,&DAT_149e0635c);
  local_80 = 0;
  local_88 = 1;
  cVar1 = FUN_1407cdbc6(param_1,local_78,&local_58,&local_68);
  if (local_78[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    puVar5 = local_58;
    if ((int)uStack_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(local_78,puVar5,0);
    lVar4 = FUN_1408d67c1(param_2,local_78[0],3);
    if (lVar4 != 0) {
      *param_4 = *param_4 + (longlong)*(int *)(lVar4 + 0x44);
      uVar2 = FUN_1408d65b6(&local_68,*(undefined8 *)(lVar4 + 0x70),param_3,param_4);
      uVar6 = (ulonglong)uVar2;
      goto LAB_1408d66d1;
    }
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  FUN_1446f470e(local_78,puVar5,0);
  plVar3 = local_78[0];
  if (param_2 != (longlong *)0x0) {
    while (plVar3 != (longlong *)0x0) {
      for (lVar4 = param_2[10]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) goto LAB_1408d669e;
      }
      param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      plVar3 = param_2;
    }
  }
LAB_1408d6797:
  uVar6 = 0;
  goto LAB_1408d66d1;
LAB_1408d669e:
  if (*(longlong **)(lVar4 + 0x20) != local_78[0]) {
    plVar3 = (longlong *)(lVar4 + 0x18);
    do {
      for (lVar4 = *plVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) goto LAB_1408d669e;
      }
      param_2 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      plVar3 = param_2 + 10;
    } while (param_2 != (longlong *)0x0);
    goto LAB_1408d6797;
  }
  *param_3 = lVar4;
  uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
LAB_1408d66d1:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1408d67c1 FUN_1408d67c1 body=307 status=ok
// SIG undefined FUN_1408d67c1(void)

longlong FUN_1408d67c1(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  int local_20;
  char local_1c;
  byte local_1b;
  byte local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1408d68f6(&local_30,param_1);
    plVar2 = local_30;
    lVar3 = local_28;
LAB_1408d67f6:
    local_28 = lVar3;
    local_30 = plVar2;
    if (local_28 != 0) {
      lVar3 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_1408d6895;
      lVar3 = *(longlong *)(local_28 + 0x18);
      plVar2 = local_30;
      local_28 = lVar3;
      if (local_30 != (longlong *)0x0) {
        do {
          lVar4 = (longlong)local_20;
          while( true ) {
            for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
              if (((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x108001) == 0) &&
                 (((local_1b & 1) != 0 || ((*(byte *)(lVar3 + 0x3b) & 0x20) == 0))))
              goto LAB_1408d67f6;
            }
            if ((local_1a & 1) == 0) break;
            lVar4 = lVar4 + 1;
            local_20 = (int)lVar4;
            if ((int)plVar2[0x3c] <= lVar4) break;
            lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
            lVar3 = 0;
            if (lVar1 != 0) {
              lVar3 = *(longlong *)(lVar1 + 0x50);
            }
          }
          if ((local_1c != '\x01') ||
             (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(), plVar2 == (longlong *)0x0))
          goto LAB_1408d6893;
          lVar3 = plVar2[10];
          local_20 = -1;
        } while( true );
      }
      plVar2 = (longlong *)0x0;
      goto LAB_1408d67f6;
    }
  }
LAB_1408d6893:
  lVar3 = 0;
LAB_1408d6895:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1408d68f6 FUN_1408d68f6 body=311 status=ok
// SIG undefined FUN_1408d68f6(void)

longlong * FUN_1408d68f6(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar4;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar4 = FUN_144a797b2();
    if (*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
      goto LAB_1408d6942;
    }
  }
  bVar5 = false;
LAB_1408d6942:
  *(bool *)((longlong)param_1 + 0x16) = bVar5;
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_1408d6951:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x108001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_1408d6973;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_1408d6951;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_1408d6951;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_1408d6973:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return param_1;
}



// FUNCTION 1408d6a2e FUN_1408d6a2e body=53 status=ok
// SIG undefined FUN_1408d6a2e(void)

void FUN_1408d6a2e(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x308))(param_2,param_1);
  (**(code **)(*param_2 + 0x310))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001408d6a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2d8))(param_2);
  return;
}



// FUNCTION 1408d6a64 FUN_1408d6a64 body=365 status=ok
// SIG undefined FUN_1408d6a64(void)

void FUN_1408d6a64(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x48);
  if (lVar5 != 0) {
    lVar5 = lVar5 * 0x28;
    plVar8 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x40) + 8);
    do {
      plVar1 = plVar8 + -1;
      plVar6 = (longlong *)FUN_14479d2ce(plVar1);
      if (plVar6 == (longlong *)0x0) {
        if (*plVar8 != 0) {
          plVar6 = (longlong *)FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,plVar6);
            if (plVar6 == (longlong *)0x0) goto LAB_1408d6ad6;
          }
          else {
            uVar2 = *(uint *)((longlong)plVar6 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,plVar6);
            }
          }
          if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_1408d6ab2;
        }
      }
      else {
LAB_1408d6ab2:
        lVar7 = FUN_144a797b2();
        if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= (int)plVar6[7] &&
            (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
          lVar7 = plVar6[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar7 = plVar6[0x22];
            if (lVar7 == 0) goto LAB_1408d6ad6;
          }
          uVar3 = *(undefined8 *)(lVar7 + 0x28);
          *(longlong *)(lVar7 + 0x28) = param_1;
          FUN_14876f3a8(lVar7,param_1);
          *(undefined8 *)(lVar7 + 0x28) = uVar3;
        }
      }
LAB_1408d6ad6:
      plVar8 = plVar8 + 5;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1408d6bd2 FUN_1408d6bd2 body=1114 status=ok
// SIG undefined FUN_1408d6bd2(void)

void FUN_1408d6bd2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_88 [40];
  uint *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  if (param_2 != 0) {
    if (DAT_14c9abbf8 == param_2) {
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar5 == 0) {
        uVar14 = 1;
        uVar13 = 0;
        iVar9 = 0;
        iVar3 = 0;
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x20);
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar3 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar3 = iVar5 + -1;
          }
          uVar13 = 0;
          uVar14 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar14 = uVar13;
          }
          iVar9 = 0;
          do {
            if (uVar14 == uVar13) goto LAB_1408d6ed2;
            iVar9 = iVar9 + 0x20;
            uVar6 = puVar4[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar13 = 0;
          iVar9 = 0;
        }
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar3) {
          iVar3 = iVar5;
        }
      }
      if (iVar3 != iVar5) {
        uVar6 = 0xffffffff;
        do {
          local_50 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x460);
          (*(code *)*param_3)(param_3[1],&local_50);
          uVar6 = ~(uint)uVar14 & uVar6;
          puVar4 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar4 = (uint *)(param_1 + 0x20);
          }
          iVar2 = *(int *)(param_1 + 0x38);
          iVar3 = (int)uVar13;
          lVar11 = (longlong)iVar3;
          uVar10 = puVar4[lVar11] & uVar6;
          if (uVar10 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar7) {
              lVar12 = 0;
              do {
                uVar10 = puVar4[lVar11 + lVar12 + 1];
                if (uVar10 != 0) {
                  uVar13 = (ulonglong)(iVar3 + (int)lVar12 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_1408d6e7b;
                }
                iVar9 = iVar9 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar8 - lVar11 != lVar12);
              uVar6 = 0xffffffff;
              iVar3 = iVar8;
            }
            uVar13 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar2;
          }
          else {
LAB_1408d6e7b:
            uVar14 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar14 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar3) {
              iVar3 = iVar2;
            }
          }
        } while (iVar3 != iVar5);
      }
    }
    else if ((DAT_14c9abbf0 == param_2) || (DAT_14c9abc00 == param_2)) {
      local_60 = (uint *)(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x38);
      if (iVar5 == 0) {
        uVar13 = 1;
        uVar14 = 0;
        iVar9 = 0;
        iVar3 = 0;
      }
      else {
        puVar4 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar4 = local_60;
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar3 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar3 = iVar5 + -1;
          }
          uVar14 = 0;
          uVar13 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar13 = uVar14;
          }
          iVar9 = 0;
          do {
            if (uVar13 == uVar14) goto LAB_1408d6ed2;
            iVar9 = iVar9 + 0x20;
            uVar6 = puVar4[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar14 = 0;
          iVar9 = 0;
        }
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar3) {
          iVar3 = iVar5;
        }
      }
      if (iVar3 != iVar5) {
        uVar6 = 0xffffffff;
        do {
          plVar15 = (longlong *)((longlong)iVar3 * 0x460 + *(longlong *)(param_1 + 0x10));
          iVar3 = FUN_14474cf0e(plVar15,&local_58);
          if (1 < iVar3) {
            local_50 = *plVar15;
            (*(code *)*param_3)(param_3[1],&local_50,plVar15 + 2);
          }
          uVar6 = uVar6 & ~(uint)uVar13;
          puVar4 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar4 = local_60;
          }
          iVar2 = *(int *)(param_1 + 0x38);
          iVar3 = (int)uVar14;
          lVar11 = (longlong)iVar3;
          uVar10 = puVar4[lVar11] & uVar6;
          if (uVar10 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar7) {
              lVar12 = 0;
              do {
                uVar10 = puVar4[lVar11 + lVar12 + 1];
                if (uVar10 != 0) {
                  uVar14 = (ulonglong)(iVar3 + (int)lVar12 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_1408d6fb2;
                }
                iVar9 = iVar9 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar8 - lVar11 != lVar12);
              uVar6 = 0xffffffff;
              iVar3 = iVar8;
            }
            uVar14 = (ulonglong)(iVar3 + 1);
            iVar3 = iVar2;
          }
          else {
LAB_1408d6fb2:
            uVar13 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar13 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar3 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar3) {
              iVar3 = iVar2;
            }
          }
        } while (iVar3 != iVar5);
      }
    }
    else if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      uVar6 = (uint)((ulonglong)param_2 >> 0x10);
      uVar10 = (uint)param_2 & 0xffff;
      lVar11 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x50);
      }
      iVar5 = *(int *)(lVar11 + (ulonglong)
                                (*(int *)(param_1 + 0x58) - 1U &
                                (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar10)
                                + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          lVar11 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x460;
          if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x460) == param_2) {
            if (lVar11 != -0x10 && lVar11 != 0) {
              local_50 = param_2;
              (*(code *)*param_3)(param_3[1],&local_50);
            }
            break;
          }
          iVar5 = *(int *)(lVar11 + 0x450);
        } while (iVar5 != -1);
      }
    }
  }
LAB_1408d6ed2:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408d702e FUN_1408d702e body=311 status=ok
// SIG undefined FUN_1408d702e(void)

undefined8 FUN_1408d702e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1408d715e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408d715e;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1408d715e:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1408d7107;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1408d7107;
    }
  }
  uVar6 = 0;
LAB_1408d7107:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d7166 FUN_1408d7166 body=126 status=ok
// SIG undefined FUN_1408d7166(void)

void FUN_1408d7166(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_4 == -1) {
    iVar3 = FUN_141302540(param_1);
    if (iVar3 != -1) {
      return;
    }
  }
  plVar2 = (longlong *)FUN_1408d71e4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  FUN_1408d725a(lVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001408d71c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  return;
}



// FUNCTION 1408d71e4 FUN_1408d71e4 body=116 status=ok
// SIG undefined FUN_1408d71e4(void)

longlong FUN_1408d71e4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0xd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d725a FUN_1408d725a body=504 status=ok
// SIG undefined FUN_1408d725a(void)

void FUN_1408d725a(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0 && param_2 != 0) {
    FUN_140ff3baa(param_2,&local_40);
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x108);
      lVar4 = (longlong)*(int *)(param_1 + 0x110) * 0x70;
      do {
        if ((code *)*plVar2 == local_40) {
          if (plVar2 != (longlong *)0x0) {
            FUN_140ff3baa(param_2,&local_40);
            *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
            if ((longlong)*(int *)(param_1 + 0x110) != 0) {
              plVar2 = *(longlong **)(param_1 + 0x108);
              lVar4 = (longlong)*(int *)(param_1 + 0x110) * 0x70;
              goto LAB_1408d730e;
            }
          }
          break;
        }
        plVar2 = plVar2 + 0xe;
        lVar4 = lVar4 + -0x70;
      } while (lVar4 != 0);
    }
  }
  goto LAB_1408d7324;
  while( true ) {
    plVar2 = plVar2 + 0xe;
    lVar4 = lVar4 + -0x70;
    if (lVar4 == 0) break;
LAB_1408d730e:
    if ((code *)*plVar2 == local_40) {
      if (((plVar2 != (longlong *)0x0) && (lVar4 = FUN_1459b3296(param_1), lVar4 != 0)) &&
         (lVar3 = FUN_141427ed0(param_1), lVar3 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_40 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1459f2e4c;
          local_68 = &LAB_148c39de3;
          local_70 = &LAB_1457a9eb2;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x3de0;
          local_60 = &local_40;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
           (iVar1 = FUN_1408966e4(lVar3), iVar1 == param_4)) {
          FUN_144241cf4(plVar2,param_3,lVar4,param_4);
        }
      }
      break;
    }
  }
LAB_1408d7324:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408d7454 FUN_1408d7454 body=40 status=ok
// SIG undefined FUN_1408d7454(void)

undefined8 FUN_1408d7454(undefined8 param_1,int param_2)

{
  FUN_1408d747c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408d747c FUN_1408d747c body=509 status=ok
// SIG undefined FUN_1408d747c(void)

void FUN_1408d747c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f5f10;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x2cd) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2cd) = 0;
  }
  if (*(char *)(param_1 + 0x59) == '\x01') {
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  FUN_1403e0ff1(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x27a) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x27a) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x274) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x274) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x26c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x264) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x47) == '\x01') {
    *(undefined1 *)(param_1 + 0x47) = 0;
  }
  if (*(char *)(param_1 + 0x43) == '\x01') {
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  if (*(char *)(param_1 + 0x3f) == '\x01') {
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1d4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1cc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
  }
  if (*(char *)(param_1 + 0x37) == '\x01') {
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x7c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  }
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1408d767a FUN_1408d767a body=104 status=ok
// SIG undefined FUN_1408d767a(void)

void FUN_1408d767a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1408d76e8();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1408d76c7;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1408d76c7:
  *(longlong **)(param_1 + 0x2218) = plVar4;
  FUN_140655f5e(param_1,param_2);
  return;
}



// FUNCTION 1408d76e8 FUN_1408d76e8 body=57 status=ok
// SIG undefined FUN_1408d76e8(void)

void FUN_1408d76e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4a48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4a48 = FUN_140002ddd(FUN_1465bf873,uVar1,L"InteractiveDoorDef");
  }
  return;
}



// FUNCTION 1408d7722 FUN_1408d7722 body=137 status=ok
// SIG undefined FUN_1408d7722(void)

undefined8 * FUN_1408d7722(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f280) {
    FUN_144b3d300(&DAT_14c83f280);
    if (DAT_14c83f280 == -1) {
      DAT_14c83f200 = 0;
      DAT_14c83f240 = &DAT_14c83f200;
      atexit(FUN_14275e407);
      _Init_thread_footer(&DAT_14c83f280);
    }
  }
  uVar1 = FUN_144a43434(DAT_14c83f240);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 1408d77ac FUN_1408d77ac body=57 status=ok
// SIG undefined FUN_1408d77ac(void)

void FUN_1408d77ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb212d0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb212d0 = FUN_140002ddd(FUN_1464328d0,uVar1,L"GbxBrainAspectSettings_Condition");
  }
  return;
}



// FUNCTION 1408d77e6 FUN_1408d77e6 body=57 status=ok
// SIG undefined FUN_1408d77e6(void)

void FUN_1408d77e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21e58 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21e58 = FUN_140002ddd(FUN_14643640b,uVar1,L"GbxBrainTaskSettings_Sequence");
  }
  return;
}



// FUNCTION 1408d7828 FUN_1408d7828 body=215 status=ok
// SIG undefined FUN_1408d7828(void)

void FUN_1408d7828(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x38);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
    FUN_1408d798c(param_3);
    iVar8 = *(int *)(param_1 + 0x38);
  }
  if (iVar8 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar1 = lVar6 + (longlong)iVar8 * 0x18;
    iVar8 = 0;
    do {
      lVar4 = FUN_1408d7900(lVar6);
      if (lVar4 != 0) {
        if ((longlong)(int)param_2[1] != 0) {
          lVar5 = 0;
          do {
            if (*(int *)(*param_2 + lVar5) == iVar8) {
              uVar7 = 1;
              goto LAB_1408d78a6;
            }
            lVar5 = lVar5 + 4;
          } while ((longlong)(int)param_2[1] * 4 != lVar5);
        }
        uVar7 = 0;
LAB_1408d78a6:
        lVar5 = param_3[1];
        uVar3 = (int)lVar5 + 1;
        *(uint *)(param_3 + 1) = uVar3;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar3) {
          FUN_148efe11c(param_3);
        }
        lVar2 = *param_3;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(longlong *)(lVar2 + lVar5) = lVar4;
        *(undefined1 *)(lVar2 + 8 + lVar5) = uVar7;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar1);
  }
  return;
}



// FUNCTION 1408d7900 FUN_1408d7900 body=138 status=ok
// SIG undefined FUN_1408d7900(void)

longlong FUN_1408d7900(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cbc5818 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cbc5818,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d798c FUN_1408d798c body=212 status=ok
// SIG undefined FUN_1408d798c(void)

void FUN_1408d798c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1408d7a60 FUN_1408d7a60 body=736 status=ok
// SIG undefined FUN_1408d7a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d7a60(longlong param_1,double *param_2,undefined4 *param_3,undefined8 param_4)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 *puVar9;
  double dVar10;
  undefined1 auStack_3f8 [40];
  double local_3d0;
  double local_3c8;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 local_3b8;
  undefined7 uStack_3b7;
  uint local_3b0;
  undefined8 uStack_3ac;
  undefined8 uStack_3a4;
  undefined1 local_398 [704];
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_49;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  local_3c8 = 0.0;
  uStack_3c0 = 0;
  uStack_3bf = 0;
  local_3b8 = 0;
  uStack_3b7 = 0;
  local_3b0 = local_3b0 & 0xffffff00;
  uStack_3ac = 0;
  uStack_3a4 = 0;
  local_cc = 8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_4a = 1;
  local_49 = 0;
  dVar7 = param_2[1];
  if (dVar7 == 0.0) {
    uVar6 = FUN_1407ad36c();
    dVar7 = (double)FUN_14477b664(uVar6);
    param_2[1] = dVar7;
  }
  dVar10 = *param_2;
  dVar8 = param_2[2];
  if (dVar8 == 0.0) {
    if (dVar10 == 0.0) {
      local_3d0 = (double)_DAT_00000038;
      dVar10 = 0.0;
      goto LAB_1408d7b57;
    }
    if (dVar7 == 0.0) {
      local_3d0 = (double)_DAT_00000038;
      dVar7 = 0.0;
      goto LAB_1408d7b57;
    }
    plVar4 = *(longlong **)((longlong)dVar7 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_1408d7d3d:
      dVar8 = 0.0;
    }
    else {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 == '\0') goto LAB_1408d7d3d;
      uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
      dVar8 = (double)FUN_144aff482(uVar6,param_2);
    }
    param_2[2] = dVar8;
    dVar10 = *param_2;
    dVar7 = param_2[1];
  }
  local_3d0 = (double)*(float *)((longlong)dVar8 + 0x38);
LAB_1408d7b57:
  local_3c8 = dVar10;
  uVar6 = FUN_14477b664(dVar7);
  uVar6 = FUN_14477b664(uVar6);
  uStack_3c0 = (undefined1)uVar6;
  uStack_3bf = (undefined7)((ulonglong)uVar6 >> 8);
  local_3b8 = SUB81(param_2[2],0);
  uStack_3b7 = (undefined7)((ulonglong)param_2[2] >> 8);
  local_3b0 = *param_3;
  uStack_3ac = *(undefined8 *)(param_3 + 1);
  uStack_3a4 = *(undefined8 *)(param_3 + 3);
  FUN_1408d7d42(local_398,param_3 + 6);
  FUN_1408d8320((longlong)&local_cc + 4,param_4);
  uStack_8c = CONCAT17(1,(undefined7)uStack_8c);
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_1408d820c((longlong *)(param_1 + 0x18),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  pdVar1 = (double *)(lVar3 + (longlong)iVar2 * 0x390);
  *pdVar1 = local_3d0;
  pdVar1[1] = 0.0;
  pdVar1[2] = 0.0;
  pdVar1[3] = 0.0;
  pdVar1[1] = local_3c8;
  uVar6 = FUN_14477b664(CONCAT71(uStack_3bf,uStack_3c0));
  dVar7 = (double)FUN_14477b664(uVar6);
  pdVar1[2] = dVar7;
  pdVar1[3] = (double)CONCAT71(uStack_3b7,local_3b8);
  *(undefined4 *)(pdVar1 + 6) = uStack_3a4._4_4_;
  *(uint *)(pdVar1 + 4) = local_3b0;
  *(undefined4 *)((longlong)pdVar1 + 0x24) = (undefined4)uStack_3ac;
  *(undefined4 *)(pdVar1 + 5) = uStack_3ac._4_4_;
  *(undefined4 *)((longlong)pdVar1 + 0x2c) = (undefined4)uStack_3a4;
  pdVar1[0x5f] = 0.0;
  puVar9 = local_d8;
  if (local_d8 == (undefined1 *)0x0) {
    puVar9 = local_398;
  }
  FUN_1408d7d9a(pdVar1 + 7,puVar9,local_d0,0);
  FUN_1408d80e8(lVar3 + (longlong)iVar2 * 0x390 + 0x308,(longlong)&local_cc + 4);
  FUN_1407acd04(local_398);
  if ((local_40 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d7d42 FUN_1408d7d42 body=88 status=ok
// SIG undefined FUN_1408d7d42(void)

longlong FUN_1408d7d42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x2c0);
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      lVar1 = param_1;
    }
    FUN_1407acd41(lVar1,*(undefined4 *)(param_1 + 0x2c8));
    lVar1 = *(longlong *)(param_2 + 0x2c0);
    if (*(longlong *)(param_2 + 0x2c0) == 0) {
      lVar1 = param_2;
    }
    FUN_1408d7d9a(param_1,lVar1,*(undefined4 *)(param_2 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc));
  }
  return param_1;
}



// FUNCTION 1408d7d9a FUN_1408d7d9a body=95 status=ok
// SIG undefined FUN_1408d7d9a(void)

void FUN_1408d7d9a(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x2c8) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_1408d7f02(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x2c0);
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      lVar1 = param_1;
    }
    FUN_1408d7df9(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x2cc) = 8;
  return;
}



// FUNCTION 1408d7df9 FUN_1408d7df9 body=159 status=ok
// SIG undefined FUN_1408d7df9(void)

void FUN_1408d7df9(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      lVar2 = param_2 + 0x18 + lVar5;
      *puVar1 = *(undefined8 *)(lVar2 + -0x18);
      uVar4 = FUN_14477b664(*(undefined8 *)(lVar2 + -0x10));
      uVar4 = FUN_14477b664(uVar4);
      puVar1[1] = uVar4;
      puVar1[2] = *(undefined8 *)(lVar2 + -8);
      bVar3 = *(byte *)(lVar2 + 0x38);
      *(byte *)(puVar1 + 10) = bVar3;
      (*(code *)(&PTR_FUN_14b04c4f0)[bVar3])(puVar1 + 3,lVar2);
      lVar5 = lVar5 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408d7ebe FUN_1408d7ebe body=68 status=ok
// SIG undefined FUN_1408d7ebe(void)

void FUN_1408d7ebe(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 1408d7f02 FUN_1408d7f02 body=339 status=ok
// SIG undefined FUN_1408d7f02(void)

void FUN_1408d7f02(longlong param_1,uint param_2,int param_3)

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
    iVar7 = 8;
    if (8 < param_2) {
      uVar4 = (longlong)(int)param_2 * 0x58;
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
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408d7fa3;
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_1408d7fa3:
      iVar5 = (int)(uVar4 / 0x58);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (param_3 < iVar7) {
    FUN_1408d8056(param_1,0,iVar7,0x58);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0x2cc) = param_3;
  return;
}



// FUNCTION 1408d8056 FUN_1408d8056 body=145 status=ok
// SIG undefined FUN_1408d8056(void)

void FUN_1408d8056(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2c0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2c0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x2c0),param_1,(longlong)param_2 * 0x58);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2c0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1408d80e8 FUN_1408d80e8 body=292 status=ok
// SIG undefined FUN_1408d80e8(void)

undefined4 * FUN_1408d80e8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0xc));
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x14));
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_2 + 0x1a));
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0x1a) = uVar6;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x7f) = *(undefined4 *)((longlong)param_2 + 0x7f);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  return param_1;
}



// FUNCTION 1408d820c FUN_1408d820c body=274 status=ok
// SIG undefined FUN_1408d820c(void)

void FUN_1408d820c(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x390)) {
      uVar5 = uVar4 / 0x390 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x390,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1408d8320 FUN_1408d8320 body=367 status=ok
// SIG undefined FUN_1408d8320(void)

undefined4 * FUN_1408d8320(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  lVar6 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *(longlong *)(param_2 + 2);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar6;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  lVar6 = *(longlong *)(param_2 + 8);
  if ((bVar4 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar6;
  lVar6 = *(longlong *)(param_2 + 10);
  if (*(longlong *)(param_1 + 10) != lVar6) {
    *(undefined8 *)(param_1 + 0xe) = 0;
  }
  *(longlong *)(param_1 + 10) = lVar6;
  if (*(longlong *)(param_1 + 0xc) != *(longlong *)(param_2 + 0xc)) {
    *(undefined8 *)(param_1 + 0xe) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  lVar6 = *(longlong *)(param_2 + 0x12);
  if (*(longlong *)(param_1 + 0x12) != lVar6) {
    *(undefined8 *)(param_1 + 0x16) = 0;
  }
  *(longlong *)(param_1 + 0x12) = lVar6;
  if (*(longlong *)(param_1 + 0x14) != *(longlong *)(param_2 + 0x14)) {
    *(undefined8 *)(param_1 + 0x16) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  lVar6 = *(longlong *)(param_2 + 0x18);
  if (*(longlong *)(param_1 + 0x18) != lVar6) {
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  *(longlong *)(param_1 + 0x18) = lVar6;
  if (*(longlong *)(param_1 + 0x1a) != *(longlong *)(param_2 + 0x1a)) {
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0x1a) = uVar5;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x7f) = *(undefined4 *)((longlong)param_2 + 0x7f);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  return param_1;
}



// FUNCTION 1408d849e FUN_1408d849e body=36 status=ok
// SIG undefined FUN_1408d849e(void)

undefined8 FUN_1408d849e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408d84c2 FUN_1408d84c2 body=38 status=ok
// SIG undefined FUN_1408d84c2(void)

void FUN_1408d84c2(longlong param_1,undefined8 param_2)

{
  FUN_1408d84e8();
  FUN_140320438(param_1 + 0x78,param_2);
  return;
}



// FUNCTION 1408d84e8 FUN_1408d84e8 body=107 status=ok
// SIG undefined FUN_1408d84e8(void)

void FUN_1408d84e8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  FUN_14091a31e(param_1,1);
  lVar2 = (**(code **)(*param_1 + 0x198))(param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xd] = lVar2;
  return;
}



// FUNCTION 1408d855a FUN_1408d855a body=57 status=ok
// SIG undefined FUN_1408d855a(void)

void FUN_1408d855a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb217f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb217f0 = FUN_140002ddd(FUN_146434229,uVar1,L"GbxBrainAspect_ReserveLineOfFire");
  }
  return;
}



// FUNCTION 1408d859a FUN_1408d859a body=57 status=ok
// SIG undefined FUN_1408d859a(void)

void FUN_1408d859a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fc40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fc40 = FUN_140002ddd(FUN_1465a6f22,uVar1,L"CarryableObjectDispenserDef");
  }
  return;
}



// FUNCTION 1408d85d4 FUN_1408d85d4 body=1269 status=ok
// SIG undefined FUN_1408d85d4(void)

void FUN_1408d85d4(longlong *param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  byte *pbVar3;
  char *_Str;
  void *_Src;
  undefined8 *puVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = *(uint *)((longlong)param_1 + 0x8c);
  if ((uVar6 & 0x20) != 0) {
    (**(code **)(*param_1 + 0xd8))(param_1);
    uVar6 = *(uint *)((longlong)param_1 + 0x8c);
  }
  if ((uVar6 & 0x40) != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1);
    uVar6 = *(uint *)((longlong)param_1 + 0x8c);
  }
  if ((uVar6 >> 8 & 1) == 0) goto LAB_1408d8620;
  uVar6 = *(uint *)((longlong)param_1 + 0x8c);
  if ((char)uVar6 < '\0' && *(int *)((longlong)param_1 + 0x17c) != 0) goto LAB_1408d866a;
  if ((uVar6 >> 8 & 1) == 0) {
LAB_1408d8620:
    lVar8 = 0x28;
    if (-1 < (char)uVar6) goto LAB_1408d866a;
  }
  else {
    lVar8 = 0x20;
    if (*(int *)((longlong)param_1 + 0x17c) == 0) {
      uVar6 = *(uint *)((longlong)param_1 + 0x8c);
      if ((uVar6 >> 8 & 1) != 0) {
        if (*(int *)((longlong)param_1 + 0x17c) != 0) goto LAB_1408d866a;
        uVar6 = *(uint *)((longlong)param_1 + 0x8c);
      }
      goto LAB_1408d8620;
    }
  }
  (**(code **)(*param_1 + lVar8))(param_1);
LAB_1408d866a:
  puVar2 = (ushort *)param_1[0x2b];
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 & ~(ushort)(1L << (*(byte *)(param_1 + 0x2a) & 0x3f));
  }
  if (((byte *)param_1[0x2c] != (byte *)0x0) && ((*(byte *)param_1[0x2c] & 3) != 0)) {
    plVar1 = param_1 + 0x4a;
    *(undefined4 *)(param_1 + 0x4b) = 0;
    if ((*(int *)((longlong)param_1 + 0x25c) < 0) && (FUN_1402191ca(plVar1), param_1[0x2c] == 0)) {
      puVar4 = &DAT_14c9a1308;
    }
    else {
      puVar4 = (undefined8 *)FUN_1446e60f4();
    }
    pbVar3 = (byte *)*puVar4;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 2)) {
      lVar8 = (longlong)*(int *)(*(undefined8 **)(pbVar3 + 8) + 2);
      if (lVar8 != 0) {
        puVar4 = (undefined8 *)**(undefined8 **)(pbVar3 + 8);
        puVar17 = puVar4 + lVar8 * 2;
        do {
          pbVar3 = (byte *)*puVar4;
          if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 1)) {
            _Str = *(char **)(pbVar3 + 8);
            if (_Str == (char *)0x0) {
LAB_1408d87f9:
              uVar9 = 0;
              uVar15 = 0;
            }
            else {
              sVar5 = strlen(_Str);
              iVar7 = (int)sVar5;
              if (iVar7 == 0) goto LAB_1408d87f9;
              lVar8 = (longlong)iVar7;
              pcVar11 = _Str + lVar8 + -1;
              if (pcVar11 < _Str) {
                lVar10 = 0;
              }
              else {
                uVar6 = 0;
                do {
                  if (9 < (byte)(*pcVar11 - 0x30U)) break;
                  uVar6 = uVar6 + 1;
                  pcVar11 = pcVar11 + -1;
                } while (_Str <= pcVar11);
                if ((((uVar6 == 0) || (iVar7 <= (int)uVar6)) || (10 < uVar6)) ||
                   ((lVar12 = -(ulonglong)uVar6, _Str[lVar12 + lVar8 + -1] != '_' ||
                    ((uVar6 != 1 && (_Str[lVar12 + lVar8] == '0')))))) {
LAB_1408d8779:
                  lVar10 = 0;
                }
                else {
                  lVar16 = 0;
                  do {
                    lVar10 = (longlong)_Str[lVar12 + lVar8] + lVar16 * 10;
                    lVar16 = lVar10 + -0x30;
                    lVar12 = lVar12 + 1;
                  } while (lVar12 != 0);
                  if (0x7ffffffe < lVar16) goto LAB_1408d8779;
                  iVar7 = ~uVar6 + iVar7;
                  lVar10 = lVar10 + -0x2f;
                }
                if (iVar7 == 0) goto LAB_1408d87f9;
              }
              local_4c = local_4c & 0xffffff00;
              local_58 = _Str;
              local_50 = iVar7;
              uVar6 = FUN_14001a6c0(&local_58);
              uVar15 = lVar10 << 0x20;
              uVar9 = (ulonglong)uVar6;
            }
            lVar8 = param_1[0x4b];
            uVar6 = (int)lVar8 + 1;
            *(uint *)(param_1 + 0x4b) = uVar6;
            if (*(uint *)((longlong)param_1 + 0x25c) < uVar6) {
              FUN_1446f84a2(plVar1);
            }
            *(ulonglong *)(*plVar1 + (longlong)(int)lVar8 * 8) = uVar15 | uVar9;
          }
          puVar4 = puVar4 + 2;
        } while (puVar4 != puVar17);
      }
    }
  }
  lVar8 = param_1[0x51];
  if (lVar8 != 0) {
    local_58 = (char *)0x0;
    local_50 = *(int *)(lVar8 + 0x40);
    lVar10 = (longlong)local_50;
    _Src = *(void **)(lVar8 + 0x38);
    if (lVar10 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar10 * 2);
    }
    if (param_1[0x2c] != 0) {
      FUN_1446e60f4();
    }
    FUN_1400b22c2(&local_68);
    if ((longlong *)(lVar8 + 0x38) == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar8 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar8 + 0x38) = local_68;
      local_68 = 0;
      *(undefined4 *)(lVar8 + 0x40) = local_60;
      *(undefined4 *)(lVar8 + 0x44) = local_5c;
    }
    if ((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) {
      if (local_50 == *(int *)(lVar8 + 0x40)) {
        if (1 < local_50) {
          lVar10 = 0;
          while( true ) {
            uVar13 = *(ushort *)(local_58 + lVar10);
            uVar9 = (ulonglong)uVar13;
            uVar14 = *(ushort *)(*(longlong *)(lVar8 + 0x38) + lVar10);
            if (uVar13 != uVar14) break;
            if (uVar13 == 0) goto LAB_1408d88b2;
LAB_1408d8923:
            lVar10 = lVar10 + 2;
          }
          if ((uVar14 | uVar13) < 0x80) {
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar15 = (ulonglong)uVar14;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar15]) goto LAB_1408d8923;
          }
          if (uVar13 != uVar14) goto LAB_1408d8a7d;
        }
      }
      else if (*(int *)(lVar8 + 0x40) + local_50 != 1) {
LAB_1408d8a7d:
        puVar2 = *(ushort **)(lVar8 + 0x80);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar8 + 0x78) & 0x3f));
        }
      }
    }
LAB_1408d88b2:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408d8aca FUN_1408d8aca body=4931 status=ok
// SIG undefined FUN_1408d8aca(void)

void FUN_1408d8aca(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong **pplVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong ***ppplVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  char *_Str;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined1 *puVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  bool bVar33;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  longlong local_1e0;
  uint local_1d4;
  longlong *local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong ***local_1a8;
  longlong *local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong ***local_188;
  longlong *local_180;
  longlong *local_178;
  char local_170;
  longlong **local_168;
  uint local_160;
  uint local_15c;
  undefined1 local_158 [4];
  int iStack_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  longlong local_e8;
  int local_e0;
  int local_dc;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  int local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_198 = 0;
  uStack_190 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x240);
  local_1e0 = param_1;
  if (lVar14 != 0) {
    plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + 0x238);
    plVar2 = plVar20 + lVar14;
    do {
      uVar24 = uStack_190;
      lVar14 = *plVar20;
      lVar6 = (longlong)*(int *)(lVar14 + 0x10);
      if (lVar6 < 1) {
LAB_1408d9603:
        if (*(char *)(lVar14 + 0x69) == '\0') {
          if ((longlong)*(int *)(lVar14 + 0x30) != 0) {
            plVar11 = *(longlong **)(lVar14 + 0x28);
            plVar29 = plVar11 + *(int *)(lVar14 + 0x30);
            do {
              if ((int)param_2[1] != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*param_2 + lVar6) == *plVar11) goto LAB_1408d8bf0;
                  lVar6 = lVar6 + 8;
                } while ((longlong)(int)param_2[1] << 3 != lVar6);
              }
              if ((longlong)(int)param_2[3] != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(param_2[2] + lVar6) == *plVar11) goto LAB_1408d8bf0;
                  lVar6 = lVar6 + 8;
                } while ((longlong)(int)param_2[3] * 8 != lVar6);
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar29);
          }
        }
        else if (*(char *)(lVar14 + 0x69) == '\x01') {
          if ((longlong)*(int *)(lVar14 + 0x30) != 0) {
            plVar11 = *(longlong **)(lVar14 + 0x28);
            plVar29 = plVar11 + *(int *)(lVar14 + 0x30);
            do {
              if ((int)param_2[1] != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*param_2 + lVar6) == *plVar11) goto LAB_1408d9d41;
                  lVar6 = lVar6 + 8;
                } while ((longlong)(int)param_2[1] << 3 != lVar6);
              }
              if ((longlong)(int)param_2[3] == 0) goto LAB_1408d961f;
              lVar6 = 0;
              while (*(longlong *)(param_2[2] + lVar6) != *plVar11) {
                lVar6 = lVar6 + 8;
                if ((longlong)(int)param_2[3] * 8 == lVar6) goto LAB_1408d961f;
              }
LAB_1408d9d41:
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar29);
          }
          goto LAB_1408d8bf0;
        }
LAB_1408d961f:
        lVar6 = (longlong)(int)uStack_190;
        uVar19 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar19);
        if (uStack_190._4_4_ < uVar19) {
          FUN_140f672bc(&local_198,uVar24 & 0xffffffff);
        }
        *(longlong *)(local_198 + lVar6 * 8) = lVar14;
        FUN_144a13f80(&local_98,&local_188,lVar14,0);
      }
      else {
        if (*(char *)(lVar14 + 0x68) == '\x01') {
          plVar11 = *(longlong **)(lVar14 + 8);
          plVar29 = plVar11 + lVar6;
          do {
            if ((int)param_2[1] != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*param_2 + lVar6) == *plVar11) goto LAB_1408d95f6;
                lVar6 = lVar6 + 8;
              } while ((longlong)(int)param_2[1] << 3 != lVar6);
            }
            if ((longlong)(int)param_2[3] == 0) goto LAB_1408d8bf0;
            lVar6 = 0;
            while (*(longlong *)(param_2[2] + lVar6) != *plVar11) {
              lVar6 = lVar6 + 8;
              if ((longlong)(int)param_2[3] * 8 == lVar6) goto LAB_1408d8bf0;
            }
LAB_1408d95f6:
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar29);
          goto LAB_1408d9603;
        }
        if (*(char *)(lVar14 + 0x68) != '\0') goto LAB_1408d9603;
        local_1d0 = *(longlong **)(lVar14 + 8);
        plVar29 = local_1d0;
        do {
          if ((int)param_2[1] != 0) {
            lVar30 = 0;
            do {
              if (*(longlong *)(*param_2 + lVar30) == *plVar29) goto LAB_1408d9603;
              lVar30 = lVar30 + 8;
            } while ((longlong)(int)param_2[1] * 8 != lVar30);
          }
          if ((longlong)(int)param_2[3] != 0) {
            lVar30 = 0;
            do {
              if (*(longlong *)(param_2[2] + lVar30) == *plVar29) goto LAB_1408d9603;
              lVar30 = lVar30 + 8;
            } while ((longlong)(int)param_2[3] * 8 != lVar30);
          }
          plVar29 = plVar29 + 1;
        } while (plVar29 != local_1d0 + lVar6);
      }
LAB_1408d8bf0:
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar2);
  }
  lVar14 = local_1e0 + 0x1b0;
  FUN_1408d9f48(&local_98,&local_e8,lVar14);
  local_1c0 = lVar14;
  FUN_1408d9f48(lVar14,&local_188,&local_98);
  uVar19 = ((int)local_180 - iStack_154) + (local_e0 - local_b8._4_4_);
  if ((uint)(local_e0 - local_b8._4_4_) < uVar19) {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar19);
    }
    FUN_144732142(&local_e8,uVar19);
    if (uVar19 < 4) {
      iVar5 = 1;
    }
    else {
      uVar19 = (uVar19 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar5)) {
      local_a0 = iVar5;
      FUN_144869b4a();
    }
  }
  if (local_160 == 0) {
    uVar24 = 1;
    uVar22 = 0;
    uVar19 = 0;
    iVar5 = 0;
  }
  else {
    pplVar7 = local_168;
    if (local_168 == (longlong **)0x0) {
      pplVar7 = &local_178;
    }
    uVar19 = *(uint *)pplVar7;
    if (uVar19 == 0) {
      iVar5 = local_160 + 0x1e;
      if (-1 < (int)(local_160 - 1)) {
        iVar5 = local_160 - 1;
      }
      uVar22 = 0;
      uVar24 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar24 = uVar22;
      }
      iVar5 = 0;
      do {
        if (uVar24 == uVar22) goto LAB_1408d9173;
        iVar5 = iVar5 + 0x20;
        uVar19 = *(uint *)((longlong)pplVar7 + (uVar22 + 1) * 4);
        uVar22 = uVar22 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar22 = 0;
      iVar5 = 0;
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19);
    uVar15 = uVar24 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)local_160 <= (int)uVar19) {
      uVar19 = local_160;
    }
  }
  if (uVar19 != local_160) {
    uVar28 = 0xffffffff;
    local_1c8 = (ulonglong)local_160;
    do {
      iVar21 = local_e0;
      local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,iVar5);
      ppplVar16 = local_188 + (longlong)(int)uVar19 * 2;
      local_1d4 = uVar28;
      if (local_b8._4_4_ == 0) {
        local_e0 = local_e0 + 1;
        if (local_dc == iVar21) {
          FUN_144869a3c(&local_e8,iVar21);
        }
        iVar5 = local_c0;
        if (local_c0 == 0) {
          iVar26 = -1;
        }
        else {
          iVar26 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar26 = local_c0 + -1;
          }
          iVar26 = iVar26 >> 5;
        }
        iVar13 = local_c0 + 1;
        iVar32 = local_c0 + 0x1f;
        if (-1 < local_c0) {
          iVar32 = local_c0;
        }
        if (iVar32 >> 5 == iVar26) {
          local_c0 = iVar13;
        }
        else {
          if ((int)local_bc <= local_c0) {
            if (local_c0 + 0x20U < 0xa0) {
              local_bc = 0x80;
            }
            else {
              uVar19 = local_c0 + 0x20U >> 5;
              if (local_bc + 0x1f < 0xa0) {
                uVar28 = 4;
                if (4 < uVar19) {
                  uVar28 = uVar19;
                }
              }
              else {
                uVar28 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
              }
              uVar15 = (ulonglong)(uVar28 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar31 = (uint)(uVar15 + 0xf);
                  if (uVar28 < 0x1ffd) {
                    uVar15 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
                  }
                  else {
                    uVar17 = (ulonglong)(uVar31 & 0xfffffff0);
                    if (uVar17 < 0x7ff1) {
                      bVar12 = (&DAT_14c841e00)[uVar31 >> 4];
                      uVar18 = 0x32;
                      if (0x32 < bVar12) {
                        uVar18 = (ulonglong)bVar12;
                      }
                      uVar25 = 0x32 - (ulonglong)bVar12;
                      do {
                        uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_1408d9a1f;
                        lVar14 = uVar18 + 1 + uVar25;
                        uVar25 = uVar25 - 1;
                      } while (lVar14 != 0x33);
                    }
                    uVar15 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar15 = (ulonglong)DAT_14c841df8;
                    }
                    uVar15 = -uVar15 & (uVar17 + uVar15) - 1;
                  }
                }
                else {
                  uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
                }
              }
LAB_1408d9a1f:
              iVar26 = (int)(uVar15 >> 2);
              local_bc = 0xffffffe0;
              if ((int)uVar19 <= iVar26) {
                local_bc = iVar26 << 5;
              }
            }
            FUN_1446efbd8(local_d8,local_c0);
            iVar13 = local_c0 + 1;
          }
          iVar26 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar26 = iVar13;
          }
          local_c0 = iVar13;
          if (iVar13 % 0x20 != 0) {
            puVar8 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar8 = local_d8;
            }
            bVar12 = -(char)(iVar13 % 0x20);
            *(uint *)(puVar8 + (longlong)(iVar26 >> 5) * 4) =
                 (uint)(*(int *)(puVar8 + (longlong)(iVar26 >> 5) * 4) << (bVar12 & 0x1f)) >>
                 (bVar12 & 0x1f);
          }
        }
        lVar14 = (longlong)iVar21;
        puVar8 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar8 = local_d8;
        }
        bVar12 = (byte)iVar5 & 0x1f;
        *(uint *)(puVar8 + (longlong)(iVar32 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar32 >> 5) * 4) &
             (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
      }
      else {
        iVar21 = (int)local_b8;
        lVar14 = (longlong)(int)local_b8;
        iVar5 = *(int *)(local_e8 + 4 + lVar14 * 0x10);
        local_b8._4_4_ = local_b8._4_4_ + -1;
        local_b8 = CONCAT44(local_b8._4_4_,iVar5);
        if (local_b8._4_4_ != 0) {
          *(undefined4 *)(local_e8 + (longlong)iVar5 * 0x10) = 0xffffffff;
        }
      }
      uVar19 = 1 << ((byte)iVar21 & 0x1f);
      puVar8 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar8 = local_d8;
      }
      iVar5 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar5 = iVar21;
      }
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) | uVar19;
      iVar26 = 1;
      lVar14 = lVar14 * 0x10;
      pplVar7 = *ppplVar16;
      *(longlong ***)(local_e8 + lVar14) = pplVar7;
      *(undefined4 *)(local_e8 + 8 + lVar14) = 0xffffffff;
      uVar28 = (uint)((ulonglong)pplVar7 >> 0x10);
      uVar31 = (uint)pplVar7 & 0xffff;
      uVar28 = ((uint)pplVar7 << 0x10 | uVar31) + (int)((ulonglong)pplVar7 >> 0x20) +
               (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar31 >> 4);
      uVar31 = local_e0 - local_b8._4_4_;
      if (uVar31 != 1) {
        if (local_e0 != local_b8._4_4_) {
          puVar8 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar8 = local_b0;
          }
          for (iVar13 = *(int *)(puVar8 + (ulonglong)(local_a0 - 1U & uVar28) * 4); iVar13 != -1;
              iVar13 = *(int *)((longlong)iVar13 * 0x10 + local_e8 + 8)) {
            if (*(longlong ***)(local_e8 + (longlong)iVar13 * 0x10) == pplVar7) {
              if (local_b8._4_4_ != 0) {
                *(int *)(local_e8 + (longlong)(int)local_b8 * 0x10) = iVar21;
              }
              *(undefined4 *)(local_e8 + (longlong)iVar21 * 0x10) = 0xffffffff;
              uVar31 = (uint)local_1c8;
              iVar26 = -1;
              if (0 < local_b8._4_4_) {
                iVar26 = (int)local_b8;
              }
              *(int *)(local_e8 + 4 + (longlong)iVar21 * 0x10) = iVar26;
              local_b8 = CONCAT44(local_b8._4_4_ + 1,iVar21);
              puVar8 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar8 = local_d8;
              }
              *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
                   *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & (uVar19 ^ 0xffffffff);
              goto LAB_1408d8fbf;
            }
          }
        }
        if (3 < uVar31) {
          uVar15 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
          lVar6 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar26 = 1 << ((byte)lVar6 & 0x1f);
        }
      }
      if (((int)uVar31 < 1) || (iVar26 <= local_a0)) {
        uVar28 = local_a0 - 1U & uVar28;
        *(uint *)(local_e8 + lVar14 + 0xc) = uVar28;
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_b0;
        }
        *(undefined4 *)(local_e8 + lVar14 + 8) =
             *(undefined4 *)(puVar8 + ((longlong)local_a0 - 1U & (longlong)(int)uVar28) * 4);
        puVar8 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar8 = local_b0;
        }
        *(int *)(puVar8 + ((longlong)local_a0 - 1U & (longlong)(int)uVar28) * 4) = iVar21;
      }
      else {
        local_a0 = iVar26;
        FUN_144869b4a(&local_e8);
      }
      uVar31 = (uint)local_1c8;
LAB_1408d8fbf:
      uVar28 = local_1d4 & ~(uint)uVar24;
      pplVar7 = local_168;
      if (local_168 == (longlong **)0x0) {
        pplVar7 = &local_178;
      }
      iVar21 = (int)uVar22;
      lVar14 = (longlong)iVar21;
      uVar19 = *(uint *)((longlong)pplVar7 + lVar14 * 4) & uVar28;
      iVar5 = (int)local_1d0;
      if (uVar19 == 0) {
        iVar26 = local_160 + 0x1e;
        if (-1 < (int)(local_160 - 1)) {
          iVar26 = local_160 - 1;
        }
        iVar26 = iVar26 >> 5;
        iVar5 = (int)local_1d0 + 0x20;
        iVar13 = iVar26;
        if (iVar26 < iVar21) {
          iVar13 = iVar21;
        }
        if (iVar21 < iVar26) {
          lVar6 = 0;
          do {
            uVar19 = ((uint *)((longlong)pplVar7 + (lVar14 + 1) * 4))[lVar6];
            if (uVar19 != 0) {
              uVar22 = (ulonglong)(iVar21 + (int)lVar6 + 1);
              uVar28 = 0xffffffff;
              goto LAB_1408d9031;
            }
            iVar5 = iVar5 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar13 - lVar14 != lVar6);
          uVar28 = 0xffffffff;
          iVar21 = iVar13;
        }
        uVar22 = (ulonglong)(iVar21 + 1);
        uVar31 = (uint)local_1c8;
        uVar19 = local_160;
      }
      else {
LAB_1408d9031:
        uVar24 = (ulonglong)(-uVar19 & uVar19);
        uVar15 = uVar24 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar19 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)local_160 <= (int)uVar19) {
          uVar19 = local_160;
        }
      }
    } while (uVar19 != uVar31);
  }
LAB_1408d9173:
  if ((int)local_180 != iStack_154) {
    puVar8 = local_148;
    if (local_148 == (undefined1 *)0x0) {
      puVar8 = local_150;
    }
    iVar5 = local_140 + 3;
    if (-1 < local_140) {
      iVar5 = local_140;
    }
    if ((int)local_180 - iStack_154 < iVar5 >> 2) {
      if (local_160 == 0) {
        uVar24 = 0;
        puVar27 = &DAT_00000001;
        uVar19 = 0;
        iVar5 = 0;
      }
      else {
        pplVar7 = local_168;
        if (local_168 == (longlong **)0x0) {
          pplVar7 = &local_178;
        }
        uVar19 = *(uint *)pplVar7;
        if (uVar19 == 0) {
          iVar5 = local_160 + 0x1e;
          if (-1 < (int)(local_160 - 1)) {
            iVar5 = local_160 - 1;
          }
          uVar24 = 0;
          uVar22 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar22 = uVar24;
          }
          iVar5 = 0;
          do {
            if (uVar22 == uVar24) goto LAB_1408d91d0;
            iVar5 = iVar5 + 0x20;
            uVar19 = *(uint *)((longlong)pplVar7 + (uVar24 + 1) * 4);
            uVar24 = uVar24 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar24 = 0;
          iVar5 = 0;
        }
        puVar27 = (undefined1 *)(ulonglong)(-uVar19 & uVar19);
        uVar22 = (longlong)puVar27 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar19 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)local_160 <= (int)uVar19) {
          uVar19 = local_160;
        }
      }
      if (uVar19 != local_160) {
        uVar28 = 0xffffffff;
        do {
          *(undefined4 *)
           (puVar8 + (longlong)*(int *)((longlong)local_188 + (longlong)(int)uVar19 * 0x10 + 0xc) *
                     4) = 0xffffffff;
          uVar28 = ~(uint)puVar27 & uVar28;
          pplVar7 = local_168;
          if (local_168 == (longlong **)0x0) {
            pplVar7 = &local_178;
          }
          iVar21 = (int)uVar24;
          lVar14 = (longlong)iVar21;
          uVar19 = *(uint *)((longlong)pplVar7 + lVar14 * 4) & uVar28;
          if (uVar19 == 0) {
            iVar26 = local_160 + 0x1e;
            if (-1 < (int)(local_160 - 1)) {
              iVar26 = local_160 - 1;
            }
            iVar26 = iVar26 >> 5;
            iVar5 = iVar5 + 0x20;
            iVar13 = iVar26;
            if (iVar26 < iVar21) {
              iVar13 = iVar21;
            }
            if (iVar21 < iVar26) {
              lVar6 = 0;
              do {
                uVar19 = *(uint *)((longlong)pplVar7 + (lVar14 + lVar6 + 1) * 4);
                if (uVar19 != 0) {
                  uVar24 = (ulonglong)(iVar21 + (int)lVar6 + 1);
                  uVar28 = 0xffffffff;
                  goto LAB_1408d9959;
                }
                iVar5 = iVar5 + 0x20;
                lVar6 = lVar6 + 1;
              } while (iVar13 - lVar14 != lVar6);
              uVar28 = 0xffffffff;
              iVar21 = iVar13;
            }
            uVar24 = (ulonglong)(iVar21 + 1);
            uVar19 = local_160;
          }
          else {
LAB_1408d9959:
            puVar27 = (undefined1 *)(ulonglong)(-uVar19 & uVar19);
            uVar22 = (longlong)puVar27 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar19 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)local_160 <= (int)uVar19) {
              uVar19 = local_160;
            }
          }
        } while (uVar19 != local_160);
      }
    }
    else if (0 < local_140) {
      lVar14 = 0;
      do {
        *(undefined4 *)(puVar8 + lVar14 * 4) = 0xffffffff;
        lVar14 = lVar14 + 1;
      } while (lVar14 < local_140);
    }
LAB_1408d91d0:
    bVar33 = (longlong)local_180 < 0;
    local_180 = (longlong *)((ulonglong)local_180 & 0xffffffff00000000);
    if (bVar33) {
      FUN_14472eb64(&local_188,0);
    }
    _local_158 = 0xffffffff;
    local_160 = 0;
  }
  local_140 = 0;
  if (local_148 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar24 = (ulonglong)local_180 >> 0x20;
  local_180 = (longlong *)((ulonglong)local_180 & 0xffffffff00000000);
  if ((int)uVar24 != 0) {
    FUN_14472eb64(&local_188,0);
  }
  _local_158 = 0xffffffff;
  local_160 = 0;
  if (0x80 < local_15c) {
    local_15c = 0x80;
    FUN_1446efbd8(&local_178,0);
  }
  if (local_168 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (longlong ***)0x0) {
    FUN_1400020a8();
  }
  if (local_b8._4_4_ < local_e0) {
    FUN_1408d9e0e(&local_e8,0);
    FUN_144881636(local_1c0,&local_98);
    *(byte *)(local_1e0 + 0x8c) = *(byte *)(local_1e0 + 0x8c) | 0x40;
    puVar3 = *(ushort **)(local_1e0 + 0x158);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(local_1e0 + 0x150) & 0x3f));
    }
  }
  FUN_1408d9e0e(&local_98,0);
  lVar14 = local_198;
  local_1a8 = *(longlong ****)(*(longlong *)(local_1e0 + 0x1a8) + 0x228);
  local_1a0 = *(longlong **)(*(longlong *)(local_1e0 + 0x1a8) + 0x230);
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
    UNLOCK();
  }
  lVar6 = (longlong)(int)uStack_190;
  if (lVar6 != 0) {
    lVar30 = 0;
    do {
      local_1e8 = 0;
      FUN_140008518(&local_188,*(longlong *)(lVar14 + lVar30) + 0x70,&local_1a8,0);
      plVar2 = local_1a0;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_180 + 1) = (int)local_180[1] + 1;
        UNLOCK();
      }
      local_1a8 = local_188;
      local_1a0 = local_180;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar2 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_180 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      lVar30 = lVar30 + 8;
    } while (lVar6 * 8 != lVar30);
  }
  plVar2 = (longlong *)(local_1e0 + 0x160);
  puVar23 = &DAT_14c9a1308;
  if (plVar2 != &DAT_14c9a1308) {
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
      UNLOCK();
    }
    plVar20 = *(longlong **)(local_1e0 + 0x168);
    *(longlong ****)(local_1e0 + 0x160) = local_1a8;
    *(longlong **)(local_1e0 + 0x168) = local_1a0;
    ppplVar16 = local_1a8;
    if (plVar20 == (longlong *)0x0) goto LAB_1408d933c;
    LOCK();
    plVar29 = plVar20 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  ppplVar16 = (longlong ***)*plVar2;
LAB_1408d933c:
  if ((ppplVar16 != (longlong ***)0x0) && (((ulonglong)*ppplVar16 & 3) != 0)) {
    puVar9 = (undefined8 *)FUN_1446e60f4(ppplVar16,&DAT_14cb92910);
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) != 0)) {
      local_188 = &local_168;
      local_170 = '\0';
      local_178 = &local_e8;
      lVar14 = 0;
      do {
        *(short *)((longlong)&local_168 + lVar14 * 2) = (short)"UI.State."[lVar14];
        lVar14 = lVar14 + 1;
      } while (lVar14 != 9);
      local_180 = (longlong *)(local_158 + 2);
      if (*plVar2 != 0) {
        puVar23 = (undefined8 *)FUN_1446e60f4(*plVar2,&DAT_14cb92910);
      }
      pbVar4 = (byte *)*puVar23;
      if (((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) ||
         (_Str = *(char **)(pbVar4 + 8), _Str == (char *)0x0)) {
        _Str = (char *)0x0;
        iVar5 = 0;
      }
      else {
        sVar10 = strlen(_Str);
        iVar5 = (int)sVar10;
      }
      lVar14 = (longlong)iVar5;
      if (local_178 <= (longlong *)((longlong)local_180 + lVar14 * 2)) {
        FUN_140213274(&local_188,lVar14);
      }
      if (iVar5 != 0) {
        if (0 < iVar5) {
          lVar6 = 0;
          do {
            *(short *)((longlong)local_180 + lVar6 * 2) = (short)_Str[lVar6];
            lVar6 = lVar6 + 1;
          } while (lVar14 != lVar6);
        }
        local_180 = (longlong *)((longlong)local_180 + lVar14 * 2);
      }
      *(undefined2 *)local_180 = 0;
      FUN_1446f470e(&local_1b8,local_188,1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_1b0,local_1b8,1);
      *(undefined8 *)(local_1e0 + 0x170) = local_1b0;
      if (local_170 == '\x01') {
        FUN_1400020a8(local_188);
      }
    }
  }
  plVar2 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_1a0 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_e0 = 0;
  if (local_dc != 0) {
    FUN_14472eb64(&local_e8,0);
  }
  local_b8 = 0xffffffff;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    FUN_1446efbd8(local_d8,0);
  }
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar24 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar24 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408d9e0e FUN_1408d9e0e body=312 status=ok
// SIG undefined FUN_1408d9e0e(void)

void FUN_1408d9e0e(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)param_2) && (*(int *)(param_1 + 0x48) < iVar4)) {
LAB_1408d9eb4:
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(uint *)(param_1 + 0xc) != param_2) {
      FUN_14472eb64(param_1,param_2);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    uVar5 = param_2 + 0x1f & 0xffffffe0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(int *)(param_1 + 0x2c) < (int)uVar5) || (0x80 < *(int *)(param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar2 = uVar5;
      }
      *(uint *)(param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(param_1 + 0x10,0);
    }
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_144869b4a(param_1);
    return;
  }
  if (iVar4 < *(int *)(param_1 + 0x48)) {
    if (-1 < (int)param_2) goto LAB_1408d9eb4;
  }
  else {
    FUN_144a43776(param_1);
    if (-1 < (int)param_2) {
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(uint *)(param_1 + 0xc) != param_2) {
        FUN_14472eb64(param_1,param_2);
      }
      *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
      uVar5 = param_2 + 0x1f & 0xffffffe0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (((int)uVar5 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
        return;
      }
      uVar2 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar2 = uVar5;
      }
      *(uint *)(param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(param_1 + 0x10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1408d9f48 FUN_1408d9f48 body=778 status=ok
// SIG undefined FUN_1408d9f48(void)

undefined8 * FUN_1408d9f48(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar14 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_144732142(param_2,uVar9);
    iVar2 = 1;
    if (3 < uVar9) {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_144869b4a(param_2);
    }
  }
  iVar2 = (int)param_1[5];
  uVar13 = 1;
  iVar10 = 0;
  iVar6 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar7;
    if (uVar9 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar14;
      }
      do {
        if (uVar13 == uVar14) goto LAB_1408d9fca;
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar14 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar9 = 0xffffffff;
    do {
      lVar12 = *param_1;
      local_5c = uVar9;
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        lVar8 = *(longlong *)(lVar12 + (longlong)iVar6 * 0x10);
        uVar9 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar3 = (uint)lVar8 & 0xffff;
        plVar11 = param_3 + 7;
        if ((longlong *)param_3[8] != (longlong *)0x0) {
          plVar11 = (longlong *)param_3[8];
        }
        iVar4 = *(int *)((longlong)plVar11 +
                        (ulonglong)
                        ((int)param_3[9] - 1U &
                        (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar3) +
                        (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar3 >> 4)) * 4);
        local_58 = lVar12;
        if (iVar4 != -1) {
          do {
            if (*(longlong *)(*param_3 + (longlong)iVar4 * 0x10) == lVar8) goto LAB_1408da0ac;
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + *param_3 + 8);
          } while (iVar4 != -1);
        }
      }
      FUN_144a13f80(param_2,local_4c,lVar12 + (longlong)iVar6 * 0x10,0);
      iVar2 = (int)param_1[5];
LAB_1408da0ac:
      uVar9 = local_5c & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar9;
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
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar12 == lVar8) goto LAB_1408d9fca;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar8 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1408d9fca:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408da254 FUN_1408da254 body=241 status=ok
// SIG undefined FUN_1408da254(void)

undefined8 FUN_1408da254(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1406c9c22(param_1 + -0x400);
  uVar3 = 1;
  if (cVar2 != '\0') {
    FUN_1406c9d00(param_1 + 0x588,&local_38);
    if (local_30 == 0) {
      uVar3 = FUN_140927942();
      local_30 = FUN_14477b664(uVar3);
    }
    if (((local_28 == 0) && (local_30 != 0)) && (local_38 != 0)) {
      plVar1 = *(longlong **)(local_30 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        local_28 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_28 = FUN_144aff482(uVar3,&local_38);
      }
    }
    uVar3 = FUN_1408da346(param_1 + 0x1520,param_1 + -0x400);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1408da346 FUN_1408da346 body=106 status=ok
// SIG undefined FUN_1408da346(void)

ulonglong FUN_1408da346(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_3 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_3 + 0x128))(param_3);
    if (lVar2 != 0) {
      cVar1 = FUN_1402611f4(lVar2);
      if ((((param_2 != 0) && (cVar1 != '\0')) && (*(char *)(param_2 + 0x178) != '\x03')) &&
         ((*(int *)(lVar2 + 0x18) != 0 || (*(int *)(param_1 + 200) != 0)))) {
        uVar3 = CONCAT71(uVar4,0 < *(int *)(param_1 + 0xa8));
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1408da3b0 FUN_1408da3b0 body=94 status=ok
// SIG undefined FUN_1408da3b0(void)

void FUN_1408da3b0(longlong *param_1,undefined8 *param_2)

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
    FUN_1408da40e(param_1,iVar2);
  }
  FUN_1403e103e((longlong)iVar2 * 0x20 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1408da40e FUN_1408da40e body=255 status=ok
// SIG undefined FUN_1408da40e(void)

void FUN_1408da40e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1408da50e FUN_1408da50e body=1022 status=ok
// SIG undefined FUN_1408da50e(void)

void FUN_1408da50e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  uint local_50;
  undefined4 uStack_4c;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_1408daa5c();
  if ((DAT_14cbc1f04 == DAT_14c948034) && (DAT_14cbc1f00 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f00,DAT_14cbc1f04 >> 0x20);
    DAT_14cbc1f04 = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da9c0(param_2,&DAT_14cbc1f04,uVar4);
  *(undefined2 *)(param_1 + 0xcfa) = uVar3;
  if ((DAT_14cbc1f1c == DAT_14c948034) && (DAT_14cbc1f18 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f18,DAT_14cbc1f1c >> 0x20);
    DAT_14cbc1f1c = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1f1c);
  *(undefined2 *)(param_1 + 0x722) = uVar3;
  if ((DAT_14cbc1f34 == DAT_14c948034) && (DAT_14cbc1f30 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f30,DAT_14cbc1f34 >> 0x20);
    DAT_14cbc1f34 = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1f34);
  *(undefined2 *)(param_1 + 0x75c) = uVar3;
  if ((DAT_14cbc1f4c == DAT_14c948034) && (DAT_14cbc1f48 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f48,DAT_14cbc1f4c >> 0x20);
    DAT_14cbc1f4c = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1f4c);
  *(undefined2 *)(param_1 + 0x75e) = uVar3;
  if ((DAT_14cbc1f64 == DAT_14c948034) && (DAT_14cbc1f60 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f60,DAT_14cbc1f64 >> 0x20);
    DAT_14cbc1f64 = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1f64);
  *(undefined2 *)(param_1 + 0x760) = uVar3;
  if ((DAT_14cbc1f7c == DAT_14c948034) && (DAT_14cbc1f78 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f78,DAT_14cbc1f7c >> 0x20);
    DAT_14cbc1f7c = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1f7c);
  *(undefined2 *)(param_1 + 0x762) = uVar3;
  if ((DAT_14cbc1f94 == DAT_14c948034) && (DAT_14cbc1f90 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1f90,DAT_14cbc1f94 >> 0x20);
    DAT_14cbc1f94 = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1f94);
  *(undefined2 *)(param_1 + 0x1084) = uVar3;
  if ((DAT_14cbc1fac == DAT_14c948034) && (DAT_14cbc1fa8 != DAT_14c948030)) {
    FUN_14011791e(&local_50,DAT_14cbc1fa8,DAT_14cbc1fac >> 0x20);
    DAT_14cbc1fac = CONCAT44(uStack_4c,local_50);
  }
  uVar3 = FUN_1408da90e(param_2,&DAT_14cbc1fac);
  *(undefined2 *)(param_1 + 0xe2c) = uVar3;
  local_58 = DAT_14cbc1fc8;
  local_60 = DAT_14cbc1fc0;
  FUN_1448075d0(&local_50);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar7 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar5[9];
      }
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar5[10] - 1U & local_50) * 4);
      if (iVar8 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar8 * 0x40) == local_50) {
            if ((((lVar1 != 0) &&
                 (puVar6 = (undefined8 *)(lVar1 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                ((byte *)*puVar6 != (byte *)0x0)) && ((*(byte *)*puVar6 & 0x40) == 0))
            goto LAB_1408da719;
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
LAB_1408da719:
  uVar3 = FUN_140653402(puVar6);
  *(undefined2 *)(param_1 + 0x764) = uVar3;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408da90e FUN_1408da90e body=177 status=ok
// SIG undefined FUN_1408da90e(void)

undefined8 FUN_1408da90e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    puVar1 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_1446e60f4();
  }
  if (((byte *)*puVar1 == (byte *)0x0) || ((*(byte *)*puVar1 & 3) == 0)) {
    uVar2 = 0;
  }
  else {
    local_68[0] = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0xf00000d0;
    local_28 = 0;
    local_20 = 0x3f800000;
    uVar2 = FUN_14026198c();
    FUN_1446e7478(puVar1,local_68,uVar2,0);
    uVar2 = FUN_1449148e0(local_68);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408da9c0 FUN_1408da9c0 body=155 status=ok
// SIG undefined FUN_1408da9c0(void)

undefined8 FUN_1408da9c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_508 [40];
  undefined1 local_4e0 [1216];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if (*param_1 == 0) {
    puVar1 = &DAT_14c9a1308;
  }
  else {
    puVar1 = (undefined8 *)FUN_1446e60f4();
  }
  if (((byte *)*puVar1 == (byte *)0x0) || ((*(byte *)*puVar1 & 3) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_140bbae66(local_4e0);
    uVar2 = FUN_1408dae10();
    FUN_1446e7478(puVar1,local_4e0,uVar2,1);
    uVar2 = FUN_1408dae4a(param_3,local_4e0);
  }
  if ((local_20 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408daa5c FUN_1408daa5c body=946 status=ok
// SIG undefined FUN_1408daa5c(void)

undefined8 * FUN_1408daa5c(void)

{
  undefined1 auStack_4f8 [32];
  undefined4 *local_4d8;
  ulonglong *local_4d0;
  undefined4 local_4c8 [2];
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined1 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined1 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined1 local_320;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined1 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined1 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb94698) {
    FUN_144b3d300();
    if (DAT_14cb94698 == -1) {
      local_4d8 = local_4c8;
      local_4a0 = 0;
      uStack_498 = 0;
      local_4b0 = 0;
      uStack_4a8 = 0;
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_490 = 0xf00000d0;
      local_488 = 0;
      local_480 = 0x3f800000;
      local_470 = 0;
      uStack_468 = 0;
      local_460 = 0;
      uStack_458 = 0;
      local_450 = 0;
      uStack_448 = 0;
      local_440 = 0xf00000d0;
      local_438 = 0;
      local_430 = 0x3f800000;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      uStack_400 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0xf00000d0;
      local_3e0 = 0;
      local_3d8 = 0x3f800000;
      local_3c8 = 0;
      local_3a0 = 0;
      uStack_398 = 0;
      local_3b0 = 0;
      uStack_3a8 = 0;
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_390 = 0xf00000d0;
      local_388 = 0;
      local_380 = 0x3f800000;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0xf00000d0;
      local_330 = 0;
      local_328 = 0x3f800000;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_2e0 = 0xf00000d0;
      local_2d8 = 0;
      local_2d0 = 0x3f800000;
      local_298 = 0;
      uStack_290 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_288 = 0xf00000d0;
      local_280 = 0;
      local_278 = 0x3f800000;
      local_240 = 0;
      uStack_238 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_230 = 0xf00000d0;
      local_228 = 0;
      local_220 = 0x3f800000;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1d8 = 0xf00000d0;
      local_1d0 = 0;
      local_1c8 = 0x3f800000;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_180 = 0xf00000d0;
      local_178 = 0;
      local_170 = 0x3f800000;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_128 = 0xf00000d0;
      local_120 = 0;
      local_118 = 0x3f800000;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_d8 = 0xf00000d0;
      local_d0 = 0;
      local_c8 = 0x3f800000;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_80 = 0xf00000d0;
      local_78 = 0;
      local_70 = 0x3f800000;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_28 = 0xf00000d0;
      local_20 = 0;
      local_18 = 0x3f800000;
      local_370 = 0x40a00000;
      local_318 = 0x3f800000;
      local_2c0 = 0x40a00000;
      local_268 = 0x3e4ccccd;
      local_210 = 0x40000000;
      local_1b8 = 0x3e800000;
      local_110 = 0x3f000000;
      local_160 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_60 = 0x40400000;
      local_4c8[0] = 0x459c4000;
      local_478 = 0x447a0000;
      local_420 = 0x44fa0000;
      local_31f = 0;
      local_320 = 0;
      local_31e = 0;
      local_2c8 = 0;
      local_270 = 0;
      local_218 = 0;
      local_1c0 = 0;
      local_168 = 0;
      local_c0 = 0;
      local_68 = 0;
      local_10 = 0;
      local_428 = 0;
      local_3d0 = 0;
      local_378 = 0;
      local_4d0 = &local_8;
      FUN_14575566e();
      atexit((_func_5014 *)&LAB_143ec335b);
      _Init_thread_footer(&DAT_14cb94698);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return &DAT_14cb94688;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408dae10 FUN_1408dae10 body=57 status=ok
// SIG undefined FUN_1408dae10(void)

void FUN_1408dae10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb931e8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb931e8 = FUN_140002ddd(FUN_1465705cc,uVar1,L"AIWeaponUseSettings");
  }
  return;
}



// FUNCTION 1408dae4a FUN_1408dae4a body=145 status=ok
// SIG undefined FUN_1408dae4a(void)

int FUN_1408dae4a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_1408daedc(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 6) * 0x286bca1b;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x4c0;
    } while ((longlong)(int)lVar2 * 0x4c0 - uVar5 != 0);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_145755d2e(param_1,iVar4);
  }
  FUN_14575576c((longlong)iVar4 * 0x4c0 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 1408daedc FUN_1408daedc body=581 status=ok
// SIG undefined FUN_1408daedc(void)

bool FUN_1408daedc(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1401b48d6();
  if (((((((cVar1 != '\0') && (cVar1 = FUN_1401b48d6(param_1 + 0x50,param_2 + 0x50), cVar1 != '\0'))
         && (*(char *)(param_1 + 0xa0) == *(char *)(param_2 + 0xa0))) &&
        ((cVar1 = FUN_1401b48d6(param_1 + 0xa8,param_2 + 0xa8), cVar1 != '\0' &&
         (*(char *)(param_1 + 0xf8) == *(char *)(param_2 + 0xf8))))) &&
       (cVar1 = FUN_1401b48d6(param_1 + 0x100,param_2 + 0x100), cVar1 != '\0')) &&
      (((((*(char *)(param_1 + 0x150) == *(char *)(param_2 + 0x150) &&
          (cVar1 = FUN_1401b48d6(param_1 + 0x158,param_2 + 0x158), cVar1 != '\0')) &&
         ((*(char *)(param_1 + 0x1a8) == *(char *)(param_2 + 0x1a8) &&
          (((*(char *)(param_1 + 0x1a9) == *(char *)(param_2 + 0x1a9) &&
            (*(char *)(param_1 + 0x1aa) == *(char *)(param_2 + 0x1aa))) &&
           (cVar1 = FUN_1401b48d6(param_1 + 0x1b0,param_2 + 0x1b0), cVar1 != '\0')))))) &&
        (((*(char *)(param_1 + 0x200) == *(char *)(param_2 + 0x200) &&
          (cVar1 = FUN_1401b48d6(param_1 + 0x208,param_2 + 0x208), cVar1 != '\0')) &&
         ((*(char *)(param_1 + 600) == *(char *)(param_2 + 600) &&
          ((((cVar1 = FUN_1401b48d6(param_1 + 0x260,param_2 + 0x260), cVar1 != '\0' &&
             (*(char *)(param_1 + 0x2b0) == *(char *)(param_2 + 0x2b0))) &&
            ((cVar1 = FUN_1401b48d6(param_1 + 0x2b8,param_2 + 0x2b8), cVar1 != '\0' &&
             (((*(char *)(param_1 + 0x308) == *(char *)(param_2 + 0x308) &&
               (cVar1 = FUN_1401b48d6(param_1 + 0x310,param_2 + 0x310), cVar1 != '\0')) &&
              (*(char *)(param_1 + 0x360) == *(char *)(param_2 + 0x360))))))) &&
           ((cVar1 = FUN_1401b48d6(param_1 + 0x368,param_2 + 0x368), cVar1 != '\0' &&
            (cVar1 = FUN_1401b48d6(param_1 + 0x3b8,param_2 + 0x3b8), cVar1 != '\0')))))))))) &&
       (*(char *)(param_1 + 0x408) == *(char *)(param_2 + 0x408))))) &&
     (((cVar1 = FUN_1401b48d6(param_1 + 0x410,param_2 + 0x410), cVar1 != '\0' &&
       (*(char *)(param_1 + 0x460) == *(char *)(param_2 + 0x460))) &&
      (cVar1 = FUN_1401b48d6(param_1 + 0x468,param_2 + 0x468), cVar1 != '\0')))) {
    return *(char *)(param_1 + 0x4b8) == *(char *)(param_2 + 0x4b8);
  }
  return false;
}



// FUNCTION 1408db122 FUN_1408db122 body=71 status=ok
// SIG undefined FUN_1408db122(void)

undefined8 * FUN_1408db122(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1408db16a FUN_1408db16a body=560 status=ok
// SIG undefined FUN_1408db16a(void)

void FUN_1408db16a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Src;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140850e3c();
  bVar7 = *(byte *)(param_2 + 0x10);
  if ((bVar7 == 0) && (*(int *)(param_1 + 200) == 0)) {
    puVar9 = (undefined8 *)FUN_1408db39c(param_3,"spawnineffect");
    local_78 = *puVar9;
    local_70 = (longlong *)puVar9[1];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    FUN_145755dd6(&local_78,&local_68);
    if (uStack_60 != 0) {
      iVar4 = *(int *)(param_1 + 200);
      lVar12 = (longlong)iVar4;
      *(uint *)(param_1 + 200) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar4 + 1U) {
        FUN_1488b5d1e((longlong *)(param_1 + 0xc0),iVar4);
      }
      _Src = pvStack_50;
      lVar5 = *(longlong *)(param_1 + 0xc0);
      *(undefined8 *)(lVar5 + lVar12 * 0x28) = local_68;
      puVar3 = (undefined4 *)(lVar5 + 8 + lVar12 * 0x28);
      *puVar3 = (undefined4)uStack_60;
      puVar3[1] = uStack_60._4_4_;
      puVar3[2] = (undefined4)local_58;
      puVar3[3] = local_58._4_4_;
      *(undefined8 *)(lVar5 + 0x18 + lVar12 * 0x28) = 0;
      lVar11 = (longlong)(int)uStack_48;
      *(int *)(lVar5 + 0x20 + lVar12 * 0x28) = (int)uStack_48;
      if (lVar11 == 0) {
        *(undefined4 *)(lVar5 + lVar12 * 0x28 + 0x24) = 0;
      }
      else {
        puVar9 = (undefined8 *)(lVar5 + lVar12 * 0x28 + 0x18);
        FUN_1446dd670(puVar9,uStack_48 & 0xffffffff,0);
        memcpy((void *)*puVar9,_Src,lVar11 * 2);
      }
    }
    if (pvStack_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    bVar7 = *(byte *)(param_2 + 0x10);
  }
  if ((bVar7 & 1) != 0) {
    cVar8 = FUN_144a7c06e(param_3);
    if (cVar8 != '\0') {
      uVar10 = FUN_140dddafc(param_3);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = local_58 & 0xffffffff00000000;
      pvStack_50 = (void *)0x0;
      uStack_48 = 0;
      FUN_1446ddda2(&local_68,"spawnineffect",0);
      FUN_14045886c(uVar10,&local_68);
      if (pvStack_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408db39c FUN_1408db39c body=20 status=ok
// SIG undefined FUN_1408db39c(void)

undefined8 * FUN_1408db39c(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    return &DAT_14c9a1308;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*pbVar1 & 2) == 0) {
    if (DAT_14c9a1298 <= DAT_14c9a12c4) goto LAB_1408db44a;
    plVar6 = &DAT_14c9a1288;
  }
  else {
    lVar2 = *(longlong *)(pbVar1 + 8);
    if (*(int *)(lVar2 + 0x28) <= *(int *)(lVar2 + 0x54)) goto LAB_1408db44a;
    plVar6 = (longlong *)(lVar2 + 0x18);
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_20 = 0;
  uStack_18 = 0;
  FUN_1446ddda2(&uStack_38,param_2,0);
  if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
    plVar4 = plVar6 + 8;
    if ((longlong *)plVar6[9] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar6[9];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar6[10] - 1U & (uint)uStack_38) * 4);
    if (iVar5 != -1) {
      do {
        lVar2 = *plVar6 + (longlong)iVar5 * 0x40;
        if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == (uint)uStack_38) {
          if (lStack_20 != 0) {
            FUN_1400020a8();
          }
          puVar3 = &DAT_14c9a1308;
          if (((lVar2 != 0) && (*(byte **)(lVar2 + 0x28) != (byte *)0x0)) &&
             ((**(byte **)(lVar2 + 0x28) & 0x40) == 0)) {
            puVar3 = (undefined8 *)(lVar2 + 0x28);
          }
          goto LAB_1408db47e;
        }
        iVar5 = *(int *)(lVar2 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if (lStack_20 != 0) {
    FUN_1400020a8();
  }
LAB_1408db44a:
  puVar3 = &DAT_14c9a1308;
LAB_1408db47e:
  if ((uStack_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408db3b0 FUN_1408db3b0 body=274 status=ok
// SIG undefined FUN_1408db3b0(void)

undefined8 * FUN_1408db3b0(byte *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 & 2) == 0) {
    if (DAT_14c9a1298 <= DAT_14c9a12c4) goto LAB_1408db44a;
    plVar5 = &DAT_14c9a1288;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar1 + 0x28) <= *(int *)(lVar1 + 0x54)) goto LAB_1408db44a;
    plVar5 = (longlong *)(lVar1 + 0x18);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  FUN_1446ddda2(&local_38,param_2,0);
  if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
    plVar3 = plVar5 + 8;
    if ((longlong *)plVar5[9] != (longlong *)0x0) {
      plVar3 = (longlong *)plVar5[9];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar5[10] - 1U & (uint)local_38) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *plVar5 + (longlong)iVar4 * 0x40;
        if (*(uint *)(*plVar5 + (longlong)iVar4 * 0x40) == (uint)local_38) {
          if (local_20 != 0) {
            FUN_1400020a8();
          }
          puVar2 = &DAT_14c9a1308;
          if (((lVar1 != 0) && (*(byte **)(lVar1 + 0x28) != (byte *)0x0)) &&
             ((**(byte **)(lVar1 + 0x28) & 0x40) == 0)) {
            puVar2 = (undefined8 *)(lVar1 + 0x28);
          }
          goto LAB_1408db47e;
        }
        iVar4 = *(int *)(lVar1 + 0x38);
      } while (iVar4 != -1);
    }
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
LAB_1408db44a:
  puVar2 = &DAT_14c9a1308;
LAB_1408db47e:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408db4c4 FUN_1408db4c4 body=25 status=ok
// SIG undefined FUN_1408db4c4(void)

undefined8 FUN_1408db4c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_14006788a(param_1,*param_2);
  return param_1;
}



// FUNCTION 1408db4de thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408db4e4 FUN_1408db4e4 body=82 status=ok
// SIG undefined FUN_1408db4e4(void)

void FUN_1408db4e4(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      FUN_1408db536(uVar2,*(undefined4 *)(lVar3 + lVar4),param_2);
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 != lVar4);
  }
  return;
}



// FUNCTION 1408db536 FUN_1408db536 body=4082 status=ok
// SIG undefined FUN_1408db536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408db536(longlong param_1,int param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong lVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  char *pcVar19;
  longlong lVar20;
  bool bVar21;
  uint uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
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
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStack_198 [32];
  double local_178;
  undefined8 local_170;
  double local_168;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  double local_148;
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
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar14 = (longlong)param_2;
  if ((((DAT_14c75f2c0 == '\x01') &&
       (*(char *)(*(longlong *)(param_1 + 0x48) + lVar14 * 0x88) == '\x01')) &&
      (lVar15 = lVar14 * 0x60 + *(longlong *)(param_1 + 0xa0), lVar15 != 0)) &&
     (0 < *(int *)(lVar15 + 0x58))) {
    fVar23 = DAT_14c75f2c8;
    if ((double)_DAT_14c75f2c4 * param_3 <= (double)DAT_14c75f2c8) {
      fVar23 = (float)((double)_DAT_14c75f2c4 * param_3);
    }
    lVar16 = 0x18;
    lVar18 = 0;
    do {
      lVar20 = *(longlong *)(lVar15 + 0x50);
      if (*(float *)(lVar15 + 0x48) <= 1.1754944e-38) {
        fVar39 = 0.0;
        if (1.1754944e-38 < *(float *)(lVar15 + 0x4c)) {
          pfVar6 = *(float **)(lVar15 + 0x30);
          fVar39 = 0.0 - (pfVar6[6] * *(float *)(lVar20 + 0x48 + lVar16) +
                         pfVar6[4] * *(float *)(lVar20 + 0x40 + lVar16) +
                         pfVar6[5] * *(float *)(lVar20 + 0x44 + lVar16));
          fVar40 = *pfVar6 * *(float *)(lVar20 + lVar16) +
                   pfVar6[1] * *(float *)(lVar20 + 4 + lVar16);
          fVar47 = pfVar6[2] * *(float *)(lVar20 + 8 + lVar16);
          goto LAB_1408dc51a;
        }
      }
      else {
        pfVar6 = *(float **)(lVar15 + 0x18);
        if (1.1754944e-38 < *(float *)(lVar15 + 0x4c)) {
          pfVar9 = *(float **)(lVar15 + 0x30);
          fVar39 = pfVar6[6] * *(float *)(lVar20 + 0x3c + lVar16) +
                   pfVar6[4] * *(float *)(lVar20 + 0x34 + lVar16) +
                   pfVar6[5] * *(float *)(lVar20 + 0x38 + lVar16) +
                   (pfVar6[2] - pfVar9[2]) * *(float *)(lVar20 + 8 + lVar16) +
                   (*pfVar6 - *pfVar9) * *(float *)(lVar20 + lVar16) +
                   (pfVar6[1] - pfVar9[1]) * *(float *)(lVar20 + 4 + lVar16) + 0.0;
          fVar40 = pfVar9[4] * *(float *)(lVar20 + 0x40 + lVar16) +
                   pfVar9[5] * *(float *)(lVar20 + 0x44 + lVar16);
          fVar47 = pfVar9[6] * *(float *)(lVar20 + 0x48 + lVar16);
LAB_1408dc51a:
          fVar39 = fVar39 - (fVar47 + fVar40);
        }
        else {
          fVar39 = pfVar6[2] * *(float *)(lVar20 + 8 + lVar16) +
                   *pfVar6 * *(float *)(lVar20 + lVar16) +
                   pfVar6[1] * *(float *)(lVar20 + 4 + lVar16) +
                   pfVar6[6] * *(float *)(lVar20 + 0x3c + lVar16) +
                   pfVar6[4] * *(float *)(lVar20 + 0x34 + lVar16) +
                   pfVar6[5] * *(float *)(lVar20 + 0x38 + lVar16) + 0.0;
        }
      }
      if ((0.0 < fVar23) && (fVar39 < -fVar23)) {
        fVar39 = -fVar23;
      }
      fVar40 = (fVar39 + *(float *)(lVar20 + 0x24 + lVar16)) - *(float *)(lVar15 + 0x14);
      fVar39 = *(float *)(lVar20 + 0xd0 + lVar16);
      if ((fVar40 < 0.0) || (1e-08 < fVar39)) {
        fVar40 = fVar40 * -*(float *)(lVar15 + 0x10) * *(float *)(lVar20 + 0xc4 + lVar16);
        uVar22 = -(uint)(0.0 < fVar39 + fVar40);
        fVar40 = (float)(~uVar22 & (uint)-fVar39 | (uint)fVar40 & uVar22);
        *(float *)(lVar20 + 0xd0 + lVar16) = fVar40 + fVar39;
        if (1.1754944e-38 < *(float *)(lVar15 + 0x48)) {
          fVar42 = *(float *)(lVar15 + 0x48) * fVar40;
          fVar39 = *(float *)(lVar20 + 4 + lVar16);
          fVar47 = *(float *)(lVar20 + 8 + lVar16);
          fVar1 = *(float *)(lVar20 + 0x84 + lVar16);
          fVar2 = *(float *)(lVar20 + 0x80 + lVar16);
          pfVar6 = *(float **)(lVar15 + 0x18);
          fVar3 = *(float *)(lVar20 + 0x7c + lVar16);
          *pfVar6 = *(float *)(lVar20 + lVar16) * fVar42 + *pfVar6;
          pfVar6[1] = fVar39 * fVar42 + pfVar6[1];
          pfVar6[2] = fVar42 * fVar47 + pfVar6[2];
          lVar8 = *(longlong *)(lVar15 + 0x18);
          *(float *)(lVar8 + 0x10) = fVar3 * fVar40 + *(float *)(lVar8 + 0x10);
          *(float *)(lVar8 + 0x14) = fVar2 * fVar40 + *(float *)(lVar8 + 0x14);
          *(float *)(lVar8 + 0x18) = fVar1 * fVar40 + *(float *)(lVar8 + 0x18);
        }
        if (1.1754944e-38 < *(float *)(lVar15 + 0x4c)) {
          fVar42 = *(float *)(lVar15 + 0x4c) * -fVar40;
          fVar39 = *(float *)(lVar20 + 4 + lVar16);
          fVar47 = *(float *)(lVar20 + 8 + lVar16);
          pfVar6 = *(float **)(lVar15 + 0x30);
          fVar1 = *(float *)(lVar20 + 0xa0 + lVar16);
          fVar2 = *(float *)(lVar20 + 0xa4 + lVar16);
          fVar3 = *(float *)(lVar20 + 0xa8 + lVar16);
          *pfVar6 = *(float *)(lVar20 + lVar16) * fVar42 + *pfVar6;
          pfVar6[1] = fVar39 * fVar42 + pfVar6[1];
          pfVar6[2] = fVar42 * fVar47 + pfVar6[2];
          lVar20 = *(longlong *)(lVar15 + 0x30);
          *(float *)(lVar20 + 0x10) = *(float *)(lVar20 + 0x10) - fVar1 * fVar40;
          *(float *)(lVar20 + 0x14) = *(float *)(lVar20 + 0x14) - fVar2 * fVar40;
          *(float *)(lVar20 + 0x18) = *(float *)(lVar20 + 0x18) - fVar3 * fVar40;
        }
      }
      lVar18 = lVar18 + 1;
      lVar16 = lVar16 + 0x10c;
    } while (lVar18 < *(int *)(lVar15 + 0x58));
  }
  if (DAT_14c75f2bf != '\x01') goto LAB_1408dc12f;
  pfVar6 = *(float **)(*(longlong *)(param_1 + 0x78) + lVar14 * 8);
  fVar23 = pfVar6[0x4d];
  if ((fVar23 <= 1.1754944e-38) ||
     (pcVar19 = (char *)(lVar14 * 0x88 + *(longlong *)(param_1 + 0x48)), *pcVar19 != '\x01'))
  goto LAB_1408dc12f;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar14 * 8);
  uVar24 = 0;
  uVar25 = 0x3ff00000;
  uVar48 = 0;
  uVar49 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar52 = 0;
  uVar53 = 0;
  dVar30 = 0.0;
  dVar44 = 0.0;
  dVar38 = 0.0;
  uVar41 = 0;
  uVar43 = 0;
  pdVar17 = (double *)(lVar14 * 0x18 + *(longlong *)(param_1 + 0x38));
  bVar21 = *(byte *)((longlong)plVar7 + 0xc) < 2;
  uVar50 = uVar24;
  uVar51 = uVar25;
  if (!bVar21 && plVar7 != (longlong *)0x0) {
    lVar15 = *plVar7;
    lVar16 = (longlong)(int)plVar7[1];
    cVar5 = *(char *)(*(longlong *)(lVar15 + 0x2c0) + 0xb + lVar16 * 0x10);
    if ((cVar5 == '\x04') || (cVar5 == '\x01')) {
      lVar18 = *(longlong *)(lVar15 + 0x3f8);
      lVar20 = lVar16 * 0x20;
      uVar26 = (undefined4)*(undefined8 *)(lVar18 + lVar20);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + lVar20) >> 0x20);
      uVar4 = *(undefined8 *)(lVar18 + 8 + lVar20);
      uVar52 = (undefined4)uVar4;
      uVar53 = (undefined4)((ulonglong)uVar4 >> 0x20);
      dVar30 = *(double *)(lVar18 + 0x10 + lVar20);
      uVar4 = *(undefined8 *)(lVar18 + 0x18 + lVar20);
      uVar50 = (undefined4)uVar4;
      uVar51 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      uVar50 = 0;
      uVar51 = 0x3ff00000;
    }
    if ((cVar5 == '\x04') || (cVar5 == '\x01')) {
      lVar15 = *(longlong *)(lVar15 + 0x3e0);
      dVar44 = *(double *)(lVar15 + lVar16 * 0x18);
      dVar38 = *(double *)(lVar15 + 8 + lVar16 * 0x18);
      uVar4 = *(undefined8 *)(lVar15 + 0x10 + lVar16 * 0x18);
      uVar41 = (undefined4)uVar4;
      uVar43 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
  }
  dVar10 = pdVar17[2] - (double)CONCAT44(uVar43,uVar41);
  dVar44 = *pdVar17 - dVar44;
  dVar38 = pdVar17[1] - dVar38;
  dVar46 = (double)CONCAT44(uVar53,uVar52) * dVar44 - (double)CONCAT44(uVar27,uVar26) * dVar38;
  dVar34 = (double)CONCAT44(uVar27,uVar26) * dVar10 - dVar30 * dVar44;
  dVar11 = dVar30 * dVar38 - (double)CONCAT44(uVar53,uVar52) * dVar10;
  dVar46 = dVar46 + dVar46;
  dVar34 = dVar34 + dVar34;
  dVar11 = dVar11 + dVar11;
  if (bVar21 || plVar7 == (longlong *)0x0) {
    uVar41 = 0;
    uVar43 = 0;
    dVar31 = 0.0;
  }
  else {
    cVar5 = *(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10);
    if (cVar5 != '\x04') {
      uVar41 = 0;
      uVar43 = 0;
      dVar31 = 0.0;
      if (cVar5 != '\x01') goto LAB_1408db964;
    }
    lVar15 = *(longlong *)(*plVar7 + 0x3f8);
    lVar16 = (longlong)(int)plVar7[1] * 0x20;
    uVar48 = (undefined4)*(undefined8 *)(lVar15 + lVar16);
    uVar49 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + lVar16) >> 0x20);
    uVar4 = *(undefined8 *)(lVar15 + 8 + lVar16);
    uVar41 = (undefined4)uVar4;
    uVar43 = (undefined4)((ulonglong)uVar4 >> 0x20);
    dVar31 = *(double *)(lVar15 + 0x10 + lVar16);
    uVar4 = *(undefined8 *)(lVar15 + 0x18 + lVar16);
    uVar24 = (undefined4)uVar4;
    uVar25 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
LAB_1408db964:
  dVar45 = ((double)CONCAT44(uVar53,uVar52) * dVar11 - (double)CONCAT44(uVar27,uVar26) * dVar34) +
           (double)CONCAT44(uVar51,uVar50) * dVar46 + dVar10;
  local_168 = (double)CONCAT44(uVar51,uVar50) * dVar34 + dVar38 +
              ((double)CONCAT44(uVar27,uVar26) * dVar46 - dVar11 * dVar30);
  dVar11 = (double)CONCAT44(uVar51,uVar50) * dVar11 + dVar44 +
           (dVar34 * dVar30 - dVar46 * (double)CONCAT44(uVar53,uVar52));
  dVar30 = *(double *)(pcVar19 + 0x40);
  dVar44 = *(double *)(pcVar19 + 0x48);
  dVar38 = *(double *)(pcVar19 + 0x50);
  dVar46 = (double)CONCAT44(uVar43,uVar41) * dVar30 - (double)CONCAT44(uVar49,uVar48) * dVar44;
  dVar10 = (double)CONCAT44(uVar49,uVar48) * dVar38 - dVar31 * dVar30;
  dVar34 = dVar31 * dVar44 - (double)CONCAT44(uVar43,uVar41) * dVar38;
  dVar46 = dVar46 + dVar46;
  dVar10 = dVar10 + dVar10;
  dVar34 = dVar34 + dVar34;
  dVar38 = ((double)CONCAT44(uVar43,uVar41) * dVar34 - (double)CONCAT44(uVar49,uVar48) * dVar10) +
           (double)CONCAT44(uVar25,uVar24) * dVar46 + dVar38;
  local_178 = ((double)CONCAT44(uVar49,uVar48) * dVar46 - dVar34 * dVar31) +
              (double)CONCAT44(uVar25,uVar24) * dVar10 + dVar44;
  dVar30 = (dVar10 * dVar31 - dVar46 * (double)CONCAT44(uVar43,uVar41)) +
           (double)CONCAT44(uVar25,uVar24) * dVar34 + dVar30;
  local_158 = pfVar6[4];
  local_150 = pfVar6[5];
  local_154 = pfVar6[6];
  pdVar17 = (double *)(lVar14 * 0x50 + *(longlong *)(param_1 + 0x58));
  local_14c = fVar23;
  local_110 = param_3;
  if (((((local_158 != 0.0) || (NAN(local_158))) || (local_150 != 0.0)) ||
      ((NAN(local_150) || (local_154 != 0.0)))) || (NAN(local_154))) {
    local_d8 = (double)local_154;
    local_e0 = (double)local_150;
    local_e8 = (double)local_158;
    FUN_14013720c(&local_108,pfVar6 + 0x30,&local_e8,0x3ff0000000000000);
  }
  else {
    local_108 = *(double *)(pfVar6 + 0x30);
    dStack_100 = *(double *)(pfVar6 + 0x32);
    local_f8 = *(double *)(pfVar6 + 0x34);
    dStack_f0 = *(double *)(pfVar6 + 0x36);
  }
  dVar13 = local_110;
  dVar28 = local_108 * local_168 - dVar11 * dStack_100;
  dVar32 = local_f8 * dVar11 - dVar45 * local_108;
  dVar35 = dStack_100 * dVar45 - local_168 * local_f8;
  dVar28 = dVar28 + dVar28;
  dVar32 = dVar32 + dVar32;
  dVar35 = dVar35 + dVar35;
  dVar44 = dStack_f0 * dVar32 + local_168;
  dVar33 = local_108 * local_178 - dVar30 * dStack_100;
  dVar29 = local_f8 * dVar30 - dVar38 * local_108;
  dVar36 = dStack_100 * dVar38 - local_178 * local_f8;
  dVar33 = dVar33 + dVar33;
  dVar29 = dVar29 + dVar29;
  dVar36 = dVar36 + dVar36;
  local_168 = (double)CONCAT44(local_168._4_4_,pfVar6[2]);
  dVar31 = (local_108 * dVar29 - dVar36 * dStack_100) + dStack_f0 * dVar33 + dVar38;
  local_170 = (double)pfVar6[2] + *(double *)(pfVar6 + 0x48);
  dVar34 = (double)pfVar6[1] + *(double *)(pfVar6 + 0x46);
  dVar46 = (local_f8 * dVar36 - dVar33 * local_108) + dStack_f0 * dVar29 + local_178;
  dVar10 = (double)*pfVar6 + *(double *)(pfVar6 + 0x44);
  dVar37 = (local_108 * dVar32 - dVar35 * dStack_100) + dStack_f0 * dVar28 + dVar45 + local_170;
  dVar45 = (local_f8 * dVar35 - dVar28 * local_108) + dVar44 + dVar34;
  dVar38 = (dStack_100 * dVar28 - dVar32 * local_f8) + dVar35 * dStack_f0 + dVar11 + dVar10;
  dVar11 = (dStack_100 * dVar33 - dVar29 * local_f8) + dVar36 * dStack_f0 + dVar30;
  local_178 = *(double *)(pcVar19 + 0x70);
  dVar30 = *(double *)(pcVar19 + 0x80);
  dVar44 = *(double *)(pcVar19 + 0x78);
  if ((double)_DAT_14c75f2cc < dVar30) {
    fVar23 = pfVar6[10] * pfVar6[10] + pfVar6[8] * pfVar6[8] + pfVar6[9] * pfVar6[9];
    if (fVar23 < DAT_14c75f2d0 * 44.703888 * DAT_14c75f2d0 * 44.703888) {
      dVar30 = 1.0;
      local_178 = 0.0;
      dVar44 = 0.0;
    }
    else {
      fVar23 = ABS(SQRT(fVar23));
      if (fVar23 < DAT_14c75f2d4 * 44.703888) {
        dVar28 = (double)fVar23 / (double)(DAT_14c75f2d4 * 44.703888);
        dVar30 = (dVar30 + -1.0) * dVar28 + 1.0;
        dVar44 = dVar44 * dVar28 + 0.0;
        local_178 = local_178 * dVar28 + 0.0;
      }
    }
  }
  dVar32 = (dVar37 - *(double *)(pcVar19 + 0x68)) * dVar31 +
           (dVar38 - *(double *)(pcVar19 + 0x58)) * dVar11 +
           (dVar45 - *(double *)(pcVar19 + 0x60)) * dVar46;
  dVar28 = *(double *)(pcVar19 + 0x38);
  dVar29 = dVar28;
  if (dVar32 < dVar28) {
    local_128 = DAT_14c8464e0;
    local_120 = DAT_14c8464e8;
    local_118 = DAT_14c8464f0;
    dVar37 = dVar37 - local_170;
    local_148 = dVar45 - dVar34;
    dVar38 = dVar38 - dVar10;
    dVar45 = local_170 - *(double *)(pfVar6 + 0x42);
    uVar12 = (ulonglong)local_170 >> 0x20;
    local_170 = (double)CONCAT44((int)uVar12,pfVar6[1]);
    dVar45 = dVar45 / local_110;
    dVar34 = (dVar34 - *(double *)(pfVar6 + 0x40)) / local_110;
    dVar10 = (dVar10 - *(double *)(pfVar6 + 0x3e)) / local_110;
    local_15c = *pfVar6;
    local_140 = dVar44;
    local_138 = dVar46;
    local_130 = dVar30;
    FUN_140185264(&local_e8,pfVar6 + 0x28,&local_108,local_110);
    dVar29 = *(double *)(pcVar19 + 0x30);
    if (*(double *)(pcVar19 + 0x30) <= dVar32) {
      dVar29 = dVar32;
    }
    dVar30 = *(double *)(pcVar19 + 0x20) * dVar13 * dVar13 *
             (dVar28 - dVar29) * (dVar31 * local_130 + dVar11 * local_178 + local_138 * local_140) -
             dVar13 * *(double *)(pcVar19 + 0x28) *
             ((dVar45 - (dVar38 * local_e0 - local_e8 * local_148)) * local_130 +
             (dVar10 - (local_d8 * local_148 - local_e0 * dVar37)) * local_178 +
             (dVar34 - (dVar37 * local_e8 - local_d8 * dVar38)) * local_140);
    dVar44 = 0.0;
    if (0.0 <= dVar30) {
      dVar44 = dVar30;
    }
    dVar46 = local_178 * dVar44 + local_128;
    dVar30 = local_140 * dVar44 + local_120;
    dVar44 = dVar44 * local_130 + local_118;
    fVar23 = (float)(dVar38 * dVar30 - dVar46 * local_148);
    fVar40 = (float)(dVar37 * dVar46 - dVar44 * dVar38);
    fVar39 = (float)(local_148 * dVar44 - dVar30 * dVar37);
    dVar38 = (double)local_14c;
    *pfVar6 = local_15c + (float)(dVar38 * dVar46);
    pfVar6[1] = (float)local_170 + (float)(dVar30 * dVar38);
    pfVar6[2] = local_168._0_4_ + (float)(dVar44 * dVar38);
    pfVar6[4] = local_158 + fVar23 * pfVar6[0x12] + fVar39 * pfVar6[0x10] + fVar40 * pfVar6[0x11];
    pfVar6[5] = local_150 + pfVar6[0x16] * fVar23 + pfVar6[0x14] * fVar39 + pfVar6[0x15] * fVar40;
    pfVar6[6] = local_154 + pfVar6[0x1a] * fVar23 + pfVar6[0x18] * fVar39 + pfVar6[0x19] * fVar40;
    FUN_14029fe06(pfVar6);
    *pdVar17 = dVar46 + *pdVar17;
    pdVar17[1] = dVar30 + pdVar17[1];
    pdVar17[2] = dVar44 + pdVar17[2];
  }
  pdVar17[9] = dVar29;
LAB_1408dc12f:
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408dc532 FUN_1408dc532 body=135 status=ok
// SIG undefined FUN_1408dc532(void)

void FUN_1408dc532(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  float local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
    local_60 = (float)*(int *)(param_1 + 8);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0xf00000d0;
    local_20 = 0;
    local_18 = 0x3f800000;
    FUN_140f85fd4(param_1 + 0x10);
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408dc5c8 FUN_1408dc5c8 body=73 status=ok
// SIG undefined FUN_1408dc5c8(void)

undefined8 * FUN_1408dc5c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3a4880;
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408dc612 FUN_1408dc612 body=165 status=ok
// SIG undefined FUN_1408dc612(void)

void FUN_1408dc612(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x198)) {
    lVar1 = 0;
    do {
      FUN_1408dc6b8(*(undefined8 *)(*(longlong *)(param_1 + 400) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x198));
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x48) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x288) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
    return;
  }
  return;
}



// FUNCTION 1408dc6b8 FUN_1408dc6b8 body=177 status=ok
// SIG undefined FUN_1408dc6b8(void)

void FUN_1408dc6b8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xfd;
  iVar3 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x9c) & 1) != 0)) {
        FUN_1401bf202();
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar3 * 8 != lVar5);
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4c0))(plVar1,0);
        iVar3 = *(int *)(param_1 + 0xa8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(byte *)(param_1 + 0x242) = *(byte *)(param_1 + 0x242) & 0xef;
  FUN_1408dc76a(&DAT_14cb107c0,*(undefined8 *)(param_1 + 0xc0),param_1);
  return;
}



// FUNCTION 1408dc76a FUN_1408dc76a body=173 status=ok
// SIG undefined FUN_1408dc76a(void)

void FUN_1408dc76a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1408dc801;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1408dc801:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1408dc818 FUN_1408dc818 body=226 status=ok
// SIG undefined FUN_1408dc818(void)

void FUN_1408dc818(longlong param_1,ulonglong *param_2)

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
  FUN_1408dc8fa(param_1,param_2);
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



// FUNCTION 1408dc8fa FUN_1408dc8fa body=1324 status=ok
// SIG undefined FUN_1408dc8fa(void)

void FUN_1408dc8fa(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1408dce28 FUN_1408dce28 body=226 status=ok
// SIG undefined FUN_1408dce28(void)

void FUN_1408dce28(longlong param_1,ulonglong *param_2)

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
  FUN_1408dcf0a(param_1,param_2);
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



// FUNCTION 1408dcf0a FUN_1408dcf0a body=1324 status=ok
// SIG undefined FUN_1408dcf0a(void)

void FUN_1408dcf0a(longlong param_1,ulonglong *param_2)

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



// FUNCTION 1408dd438 FUN_1408dd438 body=290 status=ok
// SIG undefined FUN_1408dd438(void)

undefined8 FUN_1408dd438(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1408dd554;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408dd554;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1408dd554:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1408dd501;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 8));
      uVar6 = 1;
      goto LAB_1408dd501;
    }
  }
  uVar6 = 0;
LAB_1408dd501:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408dd55c FUN_1408dd55c body=243 status=ok
// SIG undefined FUN_1408dd55c(void)

void FUN_1408dd55c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_20 = param_3;
  lVar3 = FUN_1408dd650(param_1 + 0x118,uVar5 >> 0x10 ^ uVar5,&local_20);
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
    fVar6 = 0.0;
    if (lVar4 == 0) goto LAB_1408dd5d2;
  }
  fVar6 = (float)*(double *)(lVar4 + 0x6e8);
LAB_1408dd5d2:
  uVar2 = local_20;
  *(float *)(lVar3 + 4) = fVar6;
  uVar5 = rand();
  fVar6 = *(float *)(uVar2 + 0x24);
  fVar1 = *(float *)(uVar2 + 0x28);
  *(uint *)(lVar3 + 8) =
       -(uint)(fVar6 <= fVar1) &
       (uint)((fVar1 - fVar6) * ((float)(uVar5 & 0x7fff) / 32767.0) + fVar6);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408dd650 FUN_1408dd650 body=182 status=ok
// SIG undefined FUN_1408dd650(void)

longlong FUN_1408dd650(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar3 != 0) goto LAB_1408dd6bb;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1487dffc6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x38 + *param_1;
LAB_1408dd6bb:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1408dd708 FUN_1408dd708 body=163 status=ok
// SIG undefined FUN_1408dd708(void)

int FUN_1408dd708(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  iVar3 = FUN_1408dd7ac(param_1,0);
  lVar2 = DAT_14cae41b8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar1 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  if (iVar3 == 0) {
    iVar3 = 0x10;
  }
  else {
    iVar3 = *(int *)(lVar2 + uVar6 * 4) / iVar3;
    if (0x3ff < iVar3) {
      iVar3 = 0x400;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
  }
  return iVar3;
}



// FUNCTION 1408dd7ac FUN_1408dd7ac body=193 status=ok
// SIG undefined FUN_1408dd7ac(void)

undefined4 FUN_1408dd7ac(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x660);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    lVar4 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar4 == 0) {
    return 0;
  }
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  cVar2 = FUN_140081ab2(lVar4,1,param_2);
  uVar3 = 0;
  if (cVar2 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    if (((-1 < (int)param_2) && (plVar1 = *(longlong **)(lVar4 + 0xe0), plVar1 != (longlong *)0x0))
       && (uVar3 = 0, (int)param_2 < (int)plVar1[1])) {
      uVar3 = *(undefined4 *)(*(longlong *)(*plVar1 + (ulonglong)param_2 * 8) + 0x10c);
    }
  }
  return uVar3;
}



// FUNCTION 1408dd86e FUN_1408dd86e body=127 status=ok
// SIG undefined FUN_1408dd86e(void)

undefined8 * FUN_1408dd86e(undefined8 *param_1,longlong param_2)

{
  param_1[0x13] = 0;
  FUN_1407134c4();
  *param_1 = &PTR_FUN_149e36b00;
  param_1[0x12] = param_2;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 **)(param_2 + 0x88) = param_1;
  *param_1 = &PTR_FUN_14a9d9e70;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0xffffffffffffffff;
  FUN_1408dd8ee(param_1);
  return param_1;
}



// FUNCTION 1408dd8ee FUN_1408dd8ee body=1103 status=ok
// SIG undefined FUN_1408dd8ee(void)

void FUN_1408dd8ee(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  wchar_t *_Str;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  size_t sVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined1 auStack_898 [43];
  char local_86d;
  int local_86c;
  wchar_t *local_868;
  undefined4 local_860;
  undefined1 local_85c;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined4 local_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_898;
  plVar4 = *(longlong **)(param_1 + 0x90);
  puVar5 = (ulonglong *)plVar4[1];
  piVar1 = (int *)*puVar5 + 1;
  if ((int *)puVar5[1] < piVar1) {
    if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar4 + 0x170))(plVar4,&local_86c,4);
    }
    else {
      FUN_14572512c(plVar4,&local_86c);
    }
  }
  else {
    local_86c = *(int *)*puVar5;
    *puVar5 = (ulonglong)piVar1;
  }
  if (local_86c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_86c);
  }
  plVar4 = (longlong *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  local_86d = param_4;
  if (*(int *)(param_1 + 0xac) != local_86c) {
    FUN_1402191ca(plVar4);
  }
  if (0 < local_86c) {
    iVar13 = 0;
    _Str = (wchar_t *)((longlong)&local_858 + 2);
    do {
      local_858 = local_858 & 0xffffffffffffff00;
      local_56 = 0;
      FUN_14279233f(*(undefined8 *)(param_1 + 0x90),&local_858);
      bVar18 = (char)local_858 == '\x01';
      if (bVar18) {
        sVar11 = wcslen(_Str);
        local_860 = (int)sVar11;
      }
      else {
        sVar11 = strlen((char *)_Str);
        local_860 = (undefined4)sVar11;
      }
      local_868 = _Str;
      local_85c = bVar18;
      uVar12 = FUN_14001a6c0(&local_868,1);
      iVar3 = *(int *)(param_1 + 0xa8);
      *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
        FUN_1446f84a2(plVar4,iVar3);
      }
      *(ulonglong *)(*plVar4 + (longlong)iVar3 * 8) = uVar12 & 0xffffffff;
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_86c);
  }
  local_858 = 0;
  uStack_850 = 0;
  plVar4 = *(longlong **)(param_1 + 0x90);
  (**(code **)(*plVar4 + 0x10))(plVar4,0,0);
  uVar14 = 0;
  if ((*(byte *)(plVar4 + 5) & 1) == 0) {
    uVar14 = (int)uStack_850;
  }
  local_868 = (wchar_t *)CONCAT44(local_868._4_4_,uVar14);
  puVar5 = (ulonglong *)plVar4[1];
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar4 + 0x170))(plVar4,&local_868,4);
    }
    else {
      FUN_14572512c(plVar4,&local_868);
    }
    uVar10 = (uint)local_868;
  }
  else {
    uVar10 = *(uint *)*puVar5;
    local_868 = (wchar_t *)CONCAT44(local_868._4_4_,uVar10);
    *puVar5 = (ulonglong)puVar2;
  }
  uVar9 = uStack_850._4_4_;
  if (uVar10 == 0) {
    if (((*(byte *)(plVar4 + 5) & 1) != 0) &&
       (uStack_850 = (ulonglong)uStack_850._4_4_ << 0x20, uVar9 != 0)) {
      FUN_1417e208e(&local_858,0);
    }
  }
  else if ((((int)uVar10 < 0) || ((*(byte *)((longlong)plVar4 + 0x29) & 2) != 0)) ||
          ((0x200000 < uVar10 && (*(char *)((longlong)plVar4 + 0x2b) < '\0')))) {
    FUN_14572541c(plVar4);
  }
  else if ((*(byte *)(plVar4 + 5) & 1) == 0) {
    uStack_850 = CONCAT44(uStack_850._4_4_,uVar10);
    lVar16 = 0;
    lVar15 = 0;
    do {
      FUN_147bc7ac5(plVar4,local_858 + lVar16);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 8;
    } while (lVar15 < (int)uStack_850);
  }
  else {
    uStack_850 = uStack_850 & 0xffffffff00000000;
    if (uVar9 != uVar10) {
      FUN_1417e208e(&local_858);
      if ((int)(uint)local_868 < 1) goto LAB_1408ddc72;
    }
    iVar13 = 0;
    do {
      uVar12 = uStack_850;
      lVar16 = (longlong)(int)uStack_850;
      uVar10 = (int)uStack_850 + 1;
      uStack_850 = CONCAT44(uStack_850._4_4_,uVar10);
      if (uStack_850._4_4_ < uVar10) {
        FUN_147bc7b90(&local_858,uVar12 & 0xffffffff);
      }
      puVar17 = (undefined4 *)(lVar16 * 8 + local_858);
      puVar6 = *(undefined4 **)plVar4[1];
      if ((undefined4 *)((undefined8 *)plVar4[1])[1] < puVar6 + 1) {
        if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar4 + 0x170))(plVar4,puVar17,4);
        }
        else {
          FUN_14572512c(plVar4,puVar17);
        }
      }
      else {
        *puVar17 = *puVar6;
        *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 4;
      }
      puVar7 = *(undefined1 **)plVar4[1];
      if ((undefined1 *)((undefined8 *)plVar4[1])[1] < puVar7 + 1) {
        (**(code **)(*plVar4 + 0x170))(plVar4,puVar17 + 1,1);
      }
      else {
        *(undefined1 *)(puVar17 + 1) = *puVar7;
        *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
      }
      puVar7 = *(undefined1 **)plVar4[1];
      if ((undefined1 *)((undefined8 *)plVar4[1])[1] < puVar7 + 1) {
        (**(code **)(*plVar4 + 0x170))(plVar4,(undefined1 *)((longlong)puVar17 + 5),1);
      }
      else {
        *(undefined1 *)((longlong)puVar17 + 5) = *puVar7;
        *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)(uint)local_868);
  }
LAB_1408ddc72:
  cVar8 = local_86d;
  plVar4 = *(longlong **)(param_1 + 0x90);
  puVar5 = (ulonglong *)plVar4[1];
  puVar6 = (undefined4 *)*puVar5 + 1;
  if ((undefined4 *)puVar5[1] < puVar6) {
    if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar4 + 0x170))(plVar4,&local_868,4);
    }
    else {
      FUN_14572512c(plVar4,&local_868);
    }
  }
  else {
    local_868 = (wchar_t *)CONCAT44(local_868._4_4_,*(undefined4 *)*puVar5);
    *puVar5 = (ulonglong)puVar6;
  }
  lVar16 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  *(longlong *)(param_1 + 0xb0) = lVar16;
  if (cVar8 != '\0') {
    *(longlong *)(param_1 + 0xb8) = lVar16 + (int)(uint)local_868;
  }
  if (local_858 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ddd3e FUN_1408ddd3e body=1413 status=ok
// SIG undefined FUN_1408ddd3e(void)

wint_t * FUN_1408ddd3e(longlong *param_1,short *param_2,ulonglong *param_3,int param_4,
                      undefined8 param_5,uint param_6,undefined8 param_7)

{
  wint_t wVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  wint_t *pwVar8;
  undefined8 uVar9;
  ulonglong *_Src;
  ulonglong uVar10;
  ulonglong *_Dst_00;
  wint_t *pwVar11;
  wint_t *pwVar12;
  void *pvVar13;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  wint_t *local_b0;
  uint local_a4;
  ulonglong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong *local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  byte local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = param_3;
  if (param_4 == 1) {
    local_78 = (ulonglong *)((longlong)*(int *)((longlong)param_1 + 0x44) + (longlong)param_3);
  }
  local_58 = *(byte *)(param_1 + 0x13);
  local_88 = param_1[0xe];
  lStack_80 = param_1[0xf];
  local_70 = param_1[0x10];
  lStack_68 = param_1[0x11];
  local_60 = param_1[0x12];
  local_98 = param_1 + 0x10;
  local_a0 = param_3;
  if ((param_4 == 1) && (cVar5 = (**(code **)(*param_1 + 0x80))(param_1), cVar5 != '\0')) {
    _Src = (ulonglong *)FUN_1468c8356(param_1);
    local_58 = *(byte *)(param_1 + 0x13);
    local_88 = param_1[0xe];
    lStack_80 = param_1[0xf];
    local_60 = local_98[2];
    local_70 = *local_98;
    lStack_68 = local_98[1];
    local_78 = _Src;
  }
  else {
    _Src = (ulonglong *)0x0;
  }
  FUN_140458a4e(&local_88);
  pwVar8 = (wint_t *)0x0;
  if (*param_2 == 0x28) {
    pwVar8 = (wint_t *)(param_2 + 1);
    do {
      pwVar12 = pwVar8;
      iVar6 = iswspace(*pwVar12);
      pwVar8 = pwVar12 + 1;
    } while (iVar6 != 0);
    if (*pwVar12 != 0x29) {
      local_90 = _Src;
      _Dst = (void *)FUN_14001cc68((longlong)*(int *)(param_1[0xf] + 0x34) +
                                   (longlong)(int)param_1[0x10]);
      local_a4 = 0;
      do {
        plVar2 = (longlong *)param_1[0xe];
        if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
          (**(code **)(*plVar2 + 0x160))(plVar2,_Dst);
        }
        else {
          memset(_Dst,0,(longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
        }
        plVar2 = (longlong *)param_1[0xf];
        if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
          (**(code **)(*plVar2 + 0x160))();
        }
        else {
          memset((void *)((longlong)(int)param_1[0x10] + (longlong)_Dst),0,
                 (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
        }
        if (*pwVar12 == 0x28) {
          do {
            pwVar8 = pwVar12 + 1;
            pwVar12 = pwVar12 + 1;
            iVar6 = iswspace(*pwVar8);
          } while (iVar6 != 0);
          local_b8 = param_7;
          local_c8 = param_5;
          local_c0 = param_6 | 1;
          pwVar8 = (wint_t *)
                   (**(code **)(*(longlong *)param_1[0xe] + 0xf8))
                             ((longlong *)param_1[0xe],pwVar12,_Dst,0);
          if (pwVar8 == (wint_t *)0x0) {
            pwVar12 = (wint_t *)0x0;
            goto LAB_1408de19b;
          }
          iVar6 = FUN_1446e733e(&local_88,_Dst,0);
          do {
            pwVar11 = pwVar8;
            iVar7 = iswspace(*pwVar11);
            pwVar8 = pwVar11 + 1;
          } while (iVar7 != 0);
          pwVar12 = pwVar11 + 1;
          if (*pwVar11 != 0x2c) goto LAB_1408de19b;
          do {
            pwVar8 = pwVar11 + 1;
            pwVar11 = pwVar11 + 1;
            iVar7 = iswspace(*pwVar8);
          } while (iVar7 != 0);
          local_b8 = param_7;
          local_c8 = param_5;
          local_c0 = param_6 | 1;
          pwVar8 = (wint_t *)
                   (**(code **)(*(longlong *)param_1[0xf] + 0xf8))
                             ((longlong *)param_1[0xf],pwVar11,
                              (longlong)(int)param_1[0x10] + (longlong)_Dst);
          pwVar12 = (wint_t *)0x0;
          if (pwVar8 == (wint_t *)0x0) goto LAB_1408de19b;
          do {
            pwVar11 = pwVar8;
            iVar7 = iswspace(*pwVar11);
            pwVar8 = pwVar11 + 1;
          } while (iVar7 != 0);
          pwVar12 = pwVar8;
          if (*pwVar11 != 0x29) goto LAB_1408de19b;
          if (iVar6 == -1) {
            local_50 = &local_88;
            iVar6 = FUN_140007ec8(local_50,&local_50);
            if ((local_58 & 1) == 0) {
              uVar10 = *local_78;
            }
            else {
              uVar3 = *local_78;
              uVar10 = ((longlong)uVar3 >> 0x18) + (longlong)local_78;
              if ((uVar3 & 1) == 0) {
                uVar10 = uVar3;
              }
            }
            pvVar13 = (void *)((longlong)iVar6 * (longlong)local_60._4_4_ + uVar10);
            if (pvVar13 != _Dst) {
              plVar2 = (longlong *)param_1[0xe];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))();
              }
              else {
                memcpy((void *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)pvVar13),
                       (void *)((longlong)_Dst + (longlong)*(int *)((longlong)plVar2 + 0x44)),
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
              plVar2 = (longlong *)param_1[0xf];
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))();
              }
              else {
                memcpy((void *)((longlong)pvVar13 + (longlong)*(int *)((longlong)plVar2 + 0x44)),
                       (void *)((longlong)_Dst + (longlong)*(int *)((longlong)plVar2 + 0x44)),
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
          }
          do {
            pwVar12 = pwVar8;
            iVar6 = iswspace(*pwVar12);
            pwVar8 = pwVar12 + 1;
          } while (iVar6 != 0);
          wVar1 = *pwVar12;
          if (wVar1 == 0x2c) {
            do {
              pwVar8 = pwVar12 + 1;
              pwVar12 = pwVar12 + 1;
              iVar6 = iswspace(*pwVar8);
              bVar4 = true;
            } while (iVar6 != 0);
          }
          else {
            pwVar12 = pwVar8;
            if (wVar1 != 0x29) goto LAB_1408de19b;
            uVar9 = FUN_140458c30(&local_88);
            local_a4 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            bVar4 = false;
            local_b0 = pwVar8;
          }
        }
        else {
          pwVar12 = pwVar12 + 1;
LAB_1408de19b:
          bVar4 = false;
          local_b0 = (wint_t *)0x0;
        }
        if ((((longlong *)param_1[0xf])[7] & 0x1000000000U) == 0) {
          (**(code **)(*(longlong *)param_1[0xf] + 0x148))();
        }
        if ((((longlong *)param_1[0xe])[7] & 0x1000000000U) == 0) {
          (**(code **)(*(longlong *)param_1[0xe] + 0x148))();
        }
      } while (bVar4);
      FUN_1400020a8(_Dst);
      _Src = local_90;
      pwVar8 = local_b0;
      if ((local_a4 & 1) == 0) {
        FUN_140458a4e(&local_88,0);
        pwVar8 = local_b0;
      }
    }
  }
  if (_Src != (ulonglong *)0x0) {
    cVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar5 == '\0') {
      _Dst_00 = (ulonglong *)((longlong)local_a0 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (_Dst_00 != _Src) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst_00,_Src,(int)param_1[6]);
        }
        else {
          memcpy(_Dst_00,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x98))(param_1,local_a0,_Src);
    }
    if ((*(byte *)((longlong)param_1 + 0x3c) & 0x10) == 0) {
      (**(code **)(*param_1 + 0x148))(param_1,_Src);
    }
    FUN_1400020a8(_Src);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pwVar8;
}



// FUNCTION 1408de2c4 FUN_1408de2c4 body=1047 status=ok
// SIG undefined FUN_1408de2c4(void)

undefined8
FUN_1408de2c4(code *param_1,undefined8 param_2,void *param_3,int param_4,undefined8 param_5,
             undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  DWORD DVar2;
  char cVar3;
  int iVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  LPVOID lpTlsValue;
  void *_Dst;
  void *pvVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  code **local_98;
  undefined1 local_90;
  uint local_84;
  void *local_80;
  longlong local_78;
  code *local_70;
  code *local_68;
  code **local_60;
  byte local_58 [8];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58[0] = DAT_14c872ba8 ^ 1;
  local_50 = 0;
  local_80 = param_3;
  if (DAT_14c872ba8 == 0) {
    local_68 = param_1;
    FUN_140458ae6(local_58);
  }
  lVar6 = FUN_1403a6ca6(param_1);
  uVar9 = 0;
  if (lVar6 != 0) {
    uVar9 = *(uint *)(lVar6 + 0x2d0) & 0x100000;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar4 = iVar1 + 0xffff;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 >> 0x10 < DAT_14c964390) &&
     (lVar6 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar6 != 0)) {
    lVar6 = *(longlong *)(lVar6 + (longlong)(iVar1 % 0x10000) * 0x10);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    if (lVar6 != 0) {
      local_84 = *(uint *)(lVar6 + 0x2d0);
      *(uint *)(lVar6 + 0x2d0) = uVar9 | local_84;
      bVar10 = false;
      local_78 = lVar6;
      goto LAB_1408de38d;
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  }
  local_78 = 0;
  bVar10 = true;
  local_84 = 0;
LAB_1408de38d:
  _Dst = local_80;
  if (param_4 == 1) {
    cVar3 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1);
    if (cVar3 == '\0') {
      _Dst = (void *)((longlong)*(int *)(param_1 + 0x44) + (longlong)local_80);
    }
    else {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x5c);
      _Dst = (void *)FUN_14001cc68((longlong)
                                   (int)(-iVar1 & (*(int *)(*(longlong *)(param_1 + 0x70) + 0x58) +
                                                  iVar1) - 1U),0);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2e8))(*(longlong **)(param_1 + 0x70),_Dst,1);
      cVar3 = (**(code **)(*(longlong *)param_1 + 0x88))(param_1);
      if (cVar3 == '\0') {
        pvVar8 = (void *)((longlong)*(int *)(param_1 + 0x44) + (longlong)local_80);
        if (pvVar8 != _Dst) {
          if (((byte)param_1[0x3b] & 0x40) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x100))
                      (param_1,_Dst,pvVar8,*(undefined4 *)(param_1 + 0x30));
          }
          else {
            memcpy(_Dst,pvVar8,
                   (longlong)*(int *)(param_1 + 0x30) * (longlong)*(int *)(param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0xa0))(param_1,local_80,_Dst);
      }
    }
  }
  local_60 = &local_70;
  local_98 = &local_68;
  local_68 = FUN_14281ac46;
  local_a0 = param_7;
  local_a8 = param_6;
  local_90 = 1;
  local_70 = param_1;
  uVar7 = FUN_1408de6dc(*(longlong *)(param_1 + 0x70),param_2,_Dst,param_5);
  if ((param_4 == 1) && (cVar3 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1), cVar3 != '\0')
     ) {
    cVar3 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1);
    if (cVar3 == '\0') {
      pvVar8 = (void *)((longlong)local_80 + (longlong)*(int *)(param_1 + 0x44));
      if (pvVar8 != _Dst) {
        if (((byte)param_1[0x3b] & 0x40) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x100))
                    (param_1,pvVar8,_Dst,*(undefined4 *)(param_1 + 0x30));
        }
        else {
          memcpy(pvVar8,_Dst,(longlong)*(int *)(param_1 + 0x30) * (longlong)*(int *)(param_1 + 0x34)
                );
        }
      }
    }
    else {
      (**(code **)(*(longlong *)param_1 + 0x98))(param_1,local_80,_Dst);
    }
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2f0))(*(longlong **)(param_1 + 0x70),_Dst,1);
    FUN_1400020a8(_Dst);
  }
  if (!bVar10) {
    *(uint *)(local_78 + 0x2d0) = local_84;
  }
  if (local_58[0] == 1) {
    dwTlsIndex = DAT_14c75eca8;
    if (DAT_14c75eca8 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c75eca8 != 0xffffffff;
      DVar2 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c75eca8;
        DVar2 = DAT_14c75eca8;
      }
      DAT_14c75eca8 = DVar2;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_1456d0794(&local_68);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    if (1 < local_50) {
      FUN_1401333da((longlong)lpTlsValue + 0x30,&local_68,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1408de6dc FUN_1408de6dc body=886 status=ok
// SIG undefined FUN_1408de6dc(void)

ushort * FUN_1408de6dc(longlong param_1,ushort *param_2,undefined8 param_3,ushort *param_4,
                      undefined4 param_5,undefined ***param_6,undefined8 *param_7,char param_8)

{
  ushort uVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined ***local_a0;
  longlong *local_98;
  undefined2 *local_90;
  int local_88;
  ushort *local_80;
  longlong local_78 [3];
  undefined **local_60;
  undefined2 local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0x100;
  local_60 = &PTR_FUN_149e5e550;
  if (param_6 == (undefined ***)0x0) {
    param_6 = &local_60;
  }
  local_50 = param_2;
  if (((param_8 == '\0') || ((*(byte *)(param_1 + 0xb2) & 2) == 0)) ||
     (local_a8 = param_4, local_a0 = param_6,
     cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x78))
                       (*(longlong **)(param_1 + 0xb8),&local_50,param_3,param_5), puVar7 = local_50
     , cVar2 == '\0')) {
    puVar7 = local_50;
    local_78[0] = 0;
    local_78[1] = 0;
    local_80 = local_50 + 1;
    if (*local_50 == 0x28) {
      if (*local_80 != 0x29) {
        do {
          local_98 = local_78;
          local_a8 = (ushort *)(CONCAT44(local_a8._4_4_,param_5) | 1);
          local_a0 = param_6;
          local_80 = (ushort *)FUN_1408dea90(local_80,param_3,param_1,param_4);
          FUN_1408dea53(&local_80);
          iVar5 = 0;
          while( true ) {
            puVar7 = local_50;
            uVar1 = *local_80;
            if ((uVar1 < 0xe) && ((0x2401U >> (uVar1 & 0x1f) & 1) != 0)) {
              if (iVar5 < 1) {
                (*(code *)*param_7)(&local_90,param_7[1]);
                puVar4 = &DAT_149dfb77a;
                if (local_88 != 0) {
                  puVar4 = local_90;
                }
                local_a8 = puVar7;
                pwVar3 = L"%sImportText (%s): Missing closing parenthesis: %s";
              }
              else {
                (*(code *)*param_7)(&local_90,param_7[1]);
                puVar4 = &DAT_149dfb77a;
                if (local_88 != 0) {
                  puVar4 = local_90;
                }
                local_a8 = puVar7;
                pwVar3 = L"%sImportText(%s): Not enough closing parenthesis in: %s";
              }
              goto LAB_1408de9cf;
            }
            if ((iVar5 < 1) && (uVar1 == 0x29)) goto LAB_1408de801;
            if ((iVar5 < 1) && (uVar1 == 0x2c)) break;
            FUN_1408dea53(&local_80);
            puVar7 = local_50;
            uVar1 = *local_80;
            puVar6 = local_80;
            if (uVar1 == 0x22) {
              do {
                while( true ) {
                  uVar1 = puVar6[1];
                  puVar6 = puVar6 + 1;
                  if (0x21 < uVar1) break;
                  if (((uVar1 == 0) || (uVar1 == 10)) || (uVar1 == 0xd)) {
                    local_80 = puVar6;
                    (*(code *)*param_7)(&local_90,param_7[1]);
                    puVar4 = &DAT_149dfb77a;
                    if (local_88 != 0) {
                      puVar4 = local_90;
                    }
                    pwVar3 = L"%sImportText (%s): Bad quoted string at: %s";
                    local_a8 = puVar6;
                    goto LAB_1408de9cf;
                  }
                }
              } while (uVar1 != 0x22);
            }
            else if (uVar1 == 0x28) {
              iVar5 = iVar5 + 1;
            }
            else if (uVar1 == 0x29) {
              if (iVar5 < 1) {
                (*(code *)*param_7)(&local_90,param_7[1]);
                puVar4 = &DAT_149dfb77a;
                if (local_88 != 0) {
                  puVar4 = local_90;
                }
                local_a8 = puVar7;
                pwVar3 = L"%sImportText (%s): Too many closing parenthesis in: %s";
                goto LAB_1408de9cf;
              }
              iVar5 = iVar5 + -1;
            }
            local_80 = puVar6 + 1;
          }
          local_80 = local_80 + 1;
LAB_1408de801:
          FUN_1408dea53(&local_80);
        } while (*local_80 != 0x29);
      }
      puVar7 = local_80 + 1;
    }
    else {
      (*(code *)*param_7)(&local_90,param_7[1]);
      puVar4 = &DAT_149dfb77a;
      if (local_88 != 0) {
        puVar4 = local_90;
      }
      pwVar3 = L"%sImportText (%s): Missing opening parenthesis: %s";
      local_a8 = puVar7;
LAB_1408de9cf:
      FUN_140047918(param_6,pwVar3,&DAT_149dfb77a,puVar4);
      if (local_90 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar7 = (ushort *)0x0;
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 1408dea53 FUN_1408dea53 body=61 status=ok
// SIG undefined FUN_1408dea53(void)

void FUN_1408dea53(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = iswspace(*(wint_t *)*param_1);
  while (iVar2 != 0) {
    lVar1 = *param_1;
    *param_1 = lVar1 + 2;
    iVar2 = iswspace(*(wint_t *)(lVar1 + 2));
  }
  return;
}



// FUNCTION 1408dea90 FUN_1408dea90 body=6919 status=ok
// SIG undefined FUN_1408dea90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined *******
FUN_1408dea90(undefined ******param_1,longlong param_2,undefined *******param_3,
             undefined *******param_4,uint param_5,undefined *******param_6,longlong *param_7)

{
  undefined1 uVar1;
  wchar_t wVar2;
  undefined ***pppuVar3;
  undefined ****ppppuVar4;
  undefined ******ppppppuVar5;
  char cVar6;
  byte bVar7;
  undefined *******pppppppuVar8;
  undefined ******ppppppuVar9;
  undefined8 uVar10;
  undefined *******pppppppuVar11;
  uint uVar12;
  void *_Dst;
  ulonglong uVar13;
  undefined ******ppppppuVar14;
  undefined1 *puVar15;
  undefined *******pppppppuVar16;
  undefined1 *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined *****pppppuVar20;
  byte bVar21;
  int iVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  undefined2 *puVar25;
  ulonglong *puVar26;
  uint uVar27;
  undefined *******pppppppuVar28;
  byte bVar29;
  longlong lVar30;
  undefined *****pppppuVar31;
  undefined ******ppppppuVar32;
  longlong lVar33;
  undefined1 *_Dst_00;
  bool bVar34;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar35;
  undefined ******local_108;
  undefined8 local_100;
  undefined ******local_f8;
  undefined ******local_f0;
  undefined1 auStack_e8 [8];
  undefined ******local_e0;
  undefined ****local_d8;
  undefined ******local_d0;
  undefined ******local_c8;
  undefined4 local_bc;
  undefined *****local_b8;
  int local_b0;
  undefined ******local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  undefined ******local_88;
  ulonglong uStack_80;
  undefined ******local_78;
  ulonglong *puStack_70;
  int local_68;
  undefined4 uStack_64;
  uint local_60;
  undefined ******local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_68;
  pppppppuVar8 = (undefined *******)((longlong)param_1 + -4);
  do {
    local_d0 = (undefined ******)pppppppuVar8;
    wVar2 = *(wchar_t *)((longlong)local_d0 + 4);
    pppppppuVar8 = (undefined *******)((longlong)local_d0 + 2);
    if (0x3f < (ushort)wVar2) break;
  } while ((1L << ((byte)wVar2 & 0x3f) & 0x100000200U) != 0);
  local_d0 = (undefined ******)((longlong)local_d0 + 4);
  local_e0 = (undefined ******)param_3;
  local_c8 = (undefined ******)param_4;
  if (wVar2 == L'\"') {
    local_78 = (undefined ******)0x0;
    puStack_70 = (ulonglong *)0x0;
    local_50 = param_1;
    FUN_140c9761d(local_d0,&local_78,&local_88);
    uVar13 = 0;
    uVar19 = (ulonglong)((int)puStack_70 - 1);
    if ((int)puStack_70 == 0) {
      uVar19 = uVar13;
    }
    FUN_1446f82e2(&local_a8,uVar19,local_78,1);
    pppppppuVar28 = (undefined *******)local_a8;
    do {
      wVar2 = *(wchar_t *)((longlong)pppppppuVar8 + ((longlong)(int)local_88 + 1) * 2);
      uVar23 = 1L << ((byte)wVar2 & 0x3f);
      uVar19 = uVar23 & 0x2000410000000001;
      if (0x3f < (ushort)wVar2) {
        uVar19 = uVar13;
      }
      uVar23 = (ulonglong)((uint)uVar23 & 0x8000000);
      if ((wVar2 & 0xffc0U) != 0x40) {
        uVar23 = uVar13;
      }
      pppppppuVar8 = (undefined *******)((longlong)pppppppuVar8 + 2);
    } while (uVar23 == 0 && uVar19 == 0);
    pppppppuVar11 = (undefined *******)((longlong)pppppppuVar8 + (longlong)(int)local_88 * 2);
    local_50 = (undefined ******)pppppppuVar11;
    if ((undefined *******)local_78 != (undefined *******)0x0) {
      FUN_1400020a8();
    }
    uVar19 = (ulonglong)pppppppuVar28 & 0xffffffff00000000;
  }
  else {
    uVar19 = 0xffffffff;
    pppppppuVar11 = pppppppuVar8;
    do {
      wVar2 = *(wchar_t *)((longlong)pppppppuVar11 + 2);
      pppppppuVar11 = (undefined *******)((longlong)pppppppuVar11 + 2);
      uVar23 = 1L << ((byte)wVar2 & 0x3f);
      uVar13 = uVar23 & 0x2000410000000001;
      if (0x3f < (ushort)wVar2) {
        uVar13 = 0;
      }
      uVar23 = (ulonglong)((uint)uVar23 & 0x8000000);
      if ((wVar2 & 0xffc0U) != 0x40) {
        uVar23 = 0;
      }
      uVar27 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar27;
    } while (uVar23 == 0 && uVar13 == 0);
    local_50 = (undefined ******)pppppppuVar11;
    if (wVar2 == L'\0') {
      pppppppuVar28 = (undefined *******)0x0;
      uVar19 = 0;
    }
    else {
      if (0 < (int)uVar27) {
        pwVar24 = (wchar_t *)((longlong)pppppppuVar8 + uVar19 * 2);
        do {
          if ((0x3f < (ushort)*pwVar24) || ((1L << ((byte)*pwVar24 & 0x3f) & 0x100000200U) == 0))
          goto LAB_1408dec5a;
          iVar18 = (int)uVar19;
          pwVar24 = pwVar24 + -1;
          uVar19 = (ulonglong)(iVar18 - 1);
        } while (1 < iVar18);
        uVar19 = 0;
      }
LAB_1408dec5a:
      FUN_1446f82e2(&local_78,uVar19,local_d0,1);
      uVar19 = (ulonglong)local_78 & 0xffffffff00000000;
      pppppppuVar28 = (undefined *******)local_78;
    }
  }
  ppppppuVar14 = local_e0;
  puVar17 = auStack_e8;
  pppppppuVar8 = (undefined *******)local_50;
  if ((*(wchar_t *)pppppppuVar11 == L'\0') ||
     (pppppuVar20 = (undefined *****)(uVar19 | (ulonglong)pppppppuVar28 & 0xffffffff),
     puVar17 = auStack_e8, pppppuVar20 == (undefined *****)0x0)) goto LAB_1408e00a4;
  pppppppuVar8 = (undefined *******)local_e0;
  if ((undefined *******)local_e0 == (undefined *******)0x0) {
    FUN_14280ca20(&local_78,0,pppppuVar20);
  }
  else {
    do {
      for (ppppppuVar9 = pppppppuVar8[10]; ppppppuVar9 != (undefined ******)0x0;
          ppppppuVar9 = (undefined ******)ppppppuVar9[3]) {
        if ((~*(uint *)(ppppppuVar9[1] + 3) & 0x8001) == 0) goto LAB_1408decef;
      }
      pppppppuVar8 = (undefined *******)(*(code *)(*pppppppuVar8)[0x56])(pppppppuVar8);
    } while (pppppppuVar8 != (undefined *******)0x0);
LAB_1408ded3a:
    FUN_14280ca20(&local_78,ppppppuVar14,pppppuVar20);
    ppppppuVar14 = local_78;
    pppppppuVar8 = (undefined *******)local_e0;
    pppppppuVar11 = (undefined *******)local_78;
    while (pppppppuVar11 != (undefined *******)0x0) {
      for (ppppppuVar9 = pppppppuVar8[10]; ppppppuVar9 != (undefined ******)0x0;
          ppppppuVar9 = (undefined ******)ppppppuVar9[3]) {
        if ((~*(uint *)(ppppppuVar9[1] + 3) & 0x8001) == 0) goto LAB_1408e02a4;
      }
      pppppppuVar8 = (undefined *******)(*(code *)(*pppppppuVar8)[0x56])(pppppppuVar8);
      pppppppuVar11 = pppppppuVar8;
    }
  }
  goto LAB_1408dedc1;
LAB_1408decef:
  if (ppppppuVar9[4] != pppppuVar20) {
    pppppppuVar11 = (undefined *******)(ppppppuVar9 + 3);
    do {
      for (ppppppuVar9 = *pppppppuVar11; ppppppuVar9 != (undefined ******)0x0;
          ppppppuVar9 = (undefined ******)ppppppuVar9[3]) {
        if ((~*(uint *)(ppppppuVar9[1] + 3) & 0x8001) == 0) goto LAB_1408decef;
      }
      pppppppuVar8 = (undefined *******)(*(code *)(*pppppppuVar8)[0x56])(pppppppuVar8);
      pppppppuVar11 = pppppppuVar8 + 10;
    } while (pppppppuVar8 != (undefined *******)0x0);
    goto LAB_1408ded3a;
  }
  goto LAB_1408dede5;
LAB_1408df0af:
  local_50 = (undefined ******)((longlong)pppppppuVar8 + 4);
  pppppppuVar11 = (undefined *******)local_50;
  if (wVar2 == L'\0') {
LAB_1408df380:
    local_50 = (undefined ******)pppppppuVar11;
    pwVar24 = L"Missing \')\' in default properties subscript: %s";
LAB_1408df38b:
    FUN_146816218(param_6,3,pwVar24,ppppppuVar5);
    uVar27 = 0;
  }
  else {
    if (0x7ffffffe < (int)puStack_70 - 2U) {
LAB_1408df13a:
      pwVar24 = L"Invalid subscript in default properties: %s";
      goto LAB_1408df38b;
    }
    iVar18 = iswalpha(*(wchar_t *)local_78);
    if (iVar18 == 0) {
      iVar18 = iswdigit(*(wchar_t *)local_78);
      if (iVar18 == 0) {
        FUN_146816218(param_6,3,L"Invalid subscript in default properties: %s",ppppppuVar5);
        uVar27 = 0xffffffff;
      }
      else {
        pppppppuVar8 = (undefined *******)local_78;
        if ((int)puStack_70 == 0) {
          pppppppuVar8 = (undefined *******)&DAT_149dfb77a;
        }
        uVar27 = _wtoi((wchar_t *)pppppppuVar8);
      }
    }
    else {
      pppppppuVar8 = (undefined *******)&DAT_149dfb77a;
      if ((int)puStack_70 != 0) {
        pppppppuVar8 = (undefined *******)local_78;
      }
      FUN_1446f470e(&local_a8,pppppppuVar8,0);
      if (((undefined *******)local_a8 == (undefined *******)0x0) ||
         (uVar27 = FUN_1409678c4(0,local_a8,4,0), uVar27 == 0xffffffff)) goto LAB_1408df13a;
    }
  }
  if ((undefined *******)local_78 != (undefined *******)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1408df3b8;
  while( true ) {
    ppppppuVar9 = (undefined ******)ppppppuVar9[3];
    if (pppppppuVar8 == (undefined *******)0x0) {
      pppppppuVar8 = (undefined *******)0x0;
    }
    else {
      while( true ) {
        while (ppppppuVar9 == (undefined ******)0x0) {
          pppppppuVar8 = (undefined *******)(*(code *)(*pppppppuVar8)[0x56])(pppppppuVar8);
          if (pppppppuVar8 == (undefined *******)0x0) goto LAB_1408dedc1;
          ppppppuVar9 = pppppppuVar8[10];
        }
        if ((~*(uint *)(ppppppuVar9[1] + 3) & 0x8001) == 0) break;
        ppppppuVar9 = (undefined ******)ppppppuVar9[3];
      }
    }
    if (ppppppuVar9 == (undefined ******)0x0) break;
LAB_1408e02a4:
    if ((undefined ******)ppppppuVar9[4] == ppppppuVar14) goto LAB_1408dede5;
  }
LAB_1408dedc1:
  ppppppuVar9 = (undefined ******)(*(code *)(*local_e0)[0x5f])(local_e0,pppppuVar20);
  puVar17 = auStack_e8;
  pppppppuVar8 = (undefined *******)local_50;
  if (ppppppuVar9 == (undefined ******)0x0) goto LAB_1408e00a4;
LAB_1408dede5:
  puVar15 = auStack_e8;
  cVar6 = FUN_14280c97a(ppppppuVar9,param_5);
  puVar17 = auStack_e8;
  pppppppuVar8 = (undefined *******)local_50;
  if (cVar6 == '\0') goto LAB_1408e00a4;
  if (*(wchar_t *)local_50 == L'.') {
    local_50 = (undefined ******)((longlong)local_50 + 2);
    bVar7 = 1;
    cVar6 = FUN_140988638(&local_50,L"Empty",1);
    if (cVar6 != '\0') {
      local_bc = 0;
      bVar29 = 1;
      goto LAB_1408dee4f;
    }
    bVar7 = 1;
    uVar10 = FUN_140988638(&local_50,&DAT_149e97e80,1);
    if ((char)uVar10 != '\0') {
      bVar29 = 0;
      local_bc = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      goto LAB_1408dee4f;
    }
    bVar7 = 1;
    cVar6 = FUN_140988638(&local_50,L"Remove",1);
    if (cVar6 == '\0') {
      bVar7 = FUN_140988638(&local_50,L"RemoveIndex",1);
      goto LAB_1408dee45;
    }
    bVar29 = 0;
    local_bc = 0;
    bVar21 = 1;
  }
  else {
    bVar7 = 0;
LAB_1408dee45:
    bVar29 = 0;
    local_bc = 0;
LAB_1408dee4f:
    bVar21 = 0;
  }
  pppppuVar20 = ppppppuVar9[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_f8 = (undefined ******)FUN_140342cba();
      local_f0 = (undefined ******)FUN_1468c7f1e;
      local_100 = (undefined *******)0x0;
      local_108 = (undefined ******)0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_f0 = (undefined ******)FUN_140b31576;
    local_f8 = (undefined ******)&DAT_14c951a38;
    local_100 = (undefined *******)0x0;
    local_108 = (undefined ******)0x208001;
    in_stack_fffffffffffffed0 = 0x1408e03ab;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  ppppppuVar14 = (undefined ******)0x0;
  if (pppppuVar20 == (undefined *****)&DAT_14c951a90) {
    ppppppuVar14 = ppppppuVar9;
  }
  pppppuVar31 = ppppppuVar9[1];
  local_d8 = (undefined ****)pppppuVar20;
  pppppuVar20 = (undefined *****)FUN_140019da0();
  ppppppuVar5 = local_50;
  if (pppppuVar20[1] == (undefined ****)0x0) {
    bVar34 = pppppuVar31 != (undefined *****)0x0;
    if (pppppuVar31 != pppppuVar20 && bVar34) {
      do {
        pppppuVar31 = (undefined *****)pppppuVar31[6];
        bVar34 = pppppuVar31 != (undefined *****)0x0;
        if (pppppuVar31 == pppppuVar20) break;
      } while (pppppuVar31 != (undefined *****)0x0);
    }
  }
  else {
    bVar34 = ((ulonglong)pppppuVar31[3] & (ulonglong)pppppuVar20[1]) != 0;
  }
  ppppppuVar32 = (undefined ******)0x0;
  if (bVar34 != false) {
    ppppppuVar32 = ppppppuVar9;
  }
  pppppppuVar8 = (undefined *******)local_50;
  if ((bVar34 & bVar7) == 1) {
    puVar17 = auStack_e8;
    if ((byte)((byte)local_bc | bVar21 | bVar29) != 1) goto LAB_1408e00a4;
    FUN_1408dea53(&local_50);
    pppppppuVar8 = (undefined *******)((longlong)local_50 + 2);
    wVar2 = *(wchar_t *)local_50;
    puVar17 = auStack_e8;
    local_50 = (undefined ******)pppppppuVar8;
    if (wVar2 != L'(') goto LAB_1408e00a4;
    FUN_1408dea53(&local_50);
    if (bVar29 == 0) {
      FUN_140056680(&local_68,&DAT_149dfb77a);
      puStack_70 = (ulonglong *)((ulonglong)puStack_70 & 0xffffffffffff0000);
      local_78 = (undefined ******)&PTR_FUN_149e98010;
      if ((byte)local_bc == '\0') {
        if (bVar21 == 0) {
          pppppppuVar8 = (undefined *******)0x0;
        }
        else {
          local_f0 = (undefined ******)&local_78;
          local_f8 = local_c8;
          pppppppuVar8 = (undefined *******)
                         FUN_1468e06ca(ppppppuVar32,local_50,
                                       param_2 + *(int *)((longlong)ppppppuVar9 + 0x44),param_5);
        }
      }
      else {
        local_f0 = (undefined ******)&local_78;
        local_f8 = local_c8;
        pppppppuVar8 = (undefined *******)
                       FUN_1468e05fc(ppppppuVar32,local_50,
                                     param_2 + *(int *)((longlong)ppppppuVar9 + 0x44),param_5);
      }
      if (local_60 - 2 < 0x7fffffff) {
        local_a8 = (undefined ******)0x0;
        uStack_a0 = 0;
        FUN_1403de9f2(&local_68,&local_a8,&DAT_149e02010,1);
        uVar19 = uStack_a0 & 0xffffffff;
        if (0 < (int)uStack_a0) {
          lVar30 = 8;
          lVar33 = 0;
          do {
            puVar25 = &DAT_149dfb77a;
            if (*(int *)((longlong)local_a8 + lVar30) != 0) {
              puVar25 = *(undefined2 **)((longlong)local_a8 + lVar30 + -8);
            }
            FUN_146816218(param_6,CONCAT71((int7)(uVar19 >> 8),3),&DAT_149e0625e,puVar25);
            lVar33 = lVar33 + 1;
            uVar19 = (ulonglong)(int)uStack_a0;
            lVar30 = lVar30 + 0x10;
          } while (lVar33 < (longlong)uVar19);
        }
        FUN_1447a1747(local_a8);
        if ((undefined *******)local_a8 != (undefined *******)0x0) {
          FUN_1400020a8();
        }
LAB_1408df776:
        if (pppppppuVar8 != (undefined *******)0x0) goto LAB_1408df77b;
      }
      else {
        if (pppppppuVar8 == (undefined *******)local_50 || pppppppuVar8 == (undefined *******)0x0) {
          local_f8 = local_d0;
          FUN_146816218(param_6,3,
                        L"Unable to parse parameter value \'%s\' in defaultproperties multi-cast delegate operation: %s"
                       );
          goto LAB_1408df776;
        }
LAB_1408df77b:
        local_50 = (undefined ******)pppppppuVar8;
      }
      puVar15 = auStack_e8;
      pppppppuVar11 = (undefined *******)local_50;
      if (CONCAT44(uStack_64,local_68) == 0) goto LAB_1408df795;
      FUN_1400020a8();
    }
    else {
      (*(code *)(*ppppppuVar32)[0x40])
                (ppppppuVar32,local_c8,param_2 + *(int *)((longlong)ppppppuVar9 + 0x44));
    }
    puVar15 = auStack_e8;
    pppppppuVar11 = (undefined *******)local_50;
  }
  else {
    if (bVar7 == 0) {
      FUN_1408dea53();
      pppppppuVar8 = (undefined *******)local_50;
      uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
      if ((*(wchar_t *)local_50 == L'[') || (uVar27 = 0xffffffff, *(wchar_t *)local_50 == L'(')) {
        FUN_140056680(&local_78,&DAT_149dfb77a);
        do {
          uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
          pppppppuVar11 = (undefined *******)((longlong)pppppppuVar8 + 2);
          wVar2 = *(wchar_t *)pppppppuVar11;
          if ((ushort)wVar2 < 0x3d) {
            if ((wVar2 == L'\0') || (wVar2 == L')')) goto LAB_1408df0af;
          }
          else {
            if (wVar2 == L']') goto LAB_1408df0af;
            if (wVar2 == L'=') goto LAB_1408df380;
          }
          FUN_140002184(&local_78);
          pppppppuVar8 = pppppppuVar11;
        } while( true );
      }
LAB_1408df3b8:
      if ((local_d8 != (undefined ****)&DAT_14c951a90) && (*(int *)(ppppppuVar9 + 6) <= (int)uVar27)
         ) {
        local_f0 = local_d0;
        local_f8 = (undefined ******)CONCAT44(local_f8._4_4_,*(int *)(ppppppuVar9 + 6));
        FUN_146816218(param_6,3,L"Out of bound array default property (%i/%i): %s",uVar27);
        puVar17 = auStack_e8;
        pppppppuVar8 = (undefined *******)local_50;
        goto LAB_1408e00a4;
      }
      lVar30 = *param_7;
      lVar33 = (longlong)(int)param_7[1];
      if (lVar33 != 0) {
        uVar19 = 0;
        do {
          if ((*(undefined *******)(lVar30 + uVar19) == ppppppuVar9) &&
             (*(uint *)(lVar30 + 8 + uVar19) == uVar27)) {
            if ((~uVar19 & 0xffffffff0) != 0) {
              pppppppuVar16 = &local_108;
              FUN_146816218(param_6,0xfffffff03,L"redundant data: %s",local_d0);
              goto LAB_1408e009c;
            }
            break;
          }
          uVar19 = uVar19 + 0x10;
        } while (lVar33 << 4 != uVar19);
      }
      uVar12 = (int)param_7[1] + 1;
      *(uint *)(param_7 + 1) = uVar12;
      if (*(uint *)((longlong)param_7 + 0xc) < uVar12) {
        FUN_141718164(param_7);
        lVar30 = *param_7;
      }
      *(undefined *******)(lVar30 + lVar33 * 0x10) = ppppppuVar9;
      *(uint *)(lVar30 + 8 + lVar33 * 0x10) = uVar27;
      FUN_1408dea53(&local_50);
      pppppppuVar8 = (undefined *******)((longlong)local_50 + 2);
      if (*(wchar_t *)local_50 != L'=') {
        local_50 = (undefined ******)pppppppuVar8;
        FUN_146816218(param_6,3,L"Missing \'=\' in default properties assignment: %s",local_d0);
        puVar17 = auStack_e8;
        goto LAB_1408e00a4;
      }
      local_50 = (undefined ******)pppppppuVar8;
      FUN_1408dea53(&local_50);
      ppppppuVar14 = local_50;
      if ((((undefined *******)local_50 == (undefined *******)0x0) ||
          (((ulonglong)(ushort)*(wchar_t *)local_50 < 0x2d &&
           ((0x120000000001U >> ((ulonglong)(ushort)*(wchar_t *)local_50 & 0x3f) & 1) != 0)))) &&
         (puVar17 = auStack_e8, pppppppuVar8 = (undefined *******)local_50,
         local_d8 != (undefined ****)&DAT_14c951a90)) goto LAB_1408e00a4;
      pppppuVar20 = ppppppuVar9[4];
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if ((pppppuVar20 == (undefined *****)(ulonglong)DAT_14c892c28) &&
         (((ulonglong)ppppppuVar9[2] & 1) != 0)) {
        if ((((ulonglong)ppppppuVar9[2] & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
          FUN_1456cec3c();
        }
        if (DAT_14c927740 == 0) {
          local_100 = &local_78;
          local_78 = (undefined ******)FUN_1449e2820;
          local_f0 = (undefined ******)FUN_14081d0ea;
          local_f8 = (undefined ******)FUN_14081d0ea;
          local_108 = (undefined ******)&LAB_146856450;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456,0x28,
                        CONCAT44(uVar35,8),0x10000021,0,L"Engine",FUN_1427b121c);
        }
        if ((((ulonglong)ppppppuVar9[2] & 1) == 0) ||
           (uVar19 = (ulonglong)ppppppuVar9[2] & 0xfffffffffffffffe, uVar19 == 0)) {
LAB_1408e020f:
          uVar13 = 0;
        }
        else {
          if (*(int *)(*(longlong *)(uVar19 + 0x10) + 0x38) < *(int *)(DAT_14c927740 + 0x38))
          goto LAB_1408e020f;
          uVar13 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) == DAT_14c927740 + 0x30) {
            uVar13 = uVar19;
          }
        }
        uVar19 = *(ulonglong *)(uVar13 + 0x18);
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        puVar17 = auStack_e8;
        pppppppuVar8 = (undefined *******)local_50;
        if (uVar19 == DAT_14c892cd0) goto LAB_1408e00a4;
      }
      if ((local_d8 == (undefined ****)&DAT_14c951a90) && (-1 < (int)uVar27)) {
        iVar18 = *(int *)((longlong)ppppppuVar9 + 0x44);
        uVar1 = *(undefined1 *)(ppppppuVar9 + 0xe);
        uStack_64 = (*(code *)(*ppppppuVar9[0xf])[0x2f])();
        local_78 = (undefined ******)ppppppuVar9[0xf];
        local_68 = *(int *)((longlong)local_78 + 0x34);
        local_60 = CONCAT31(local_60._1_3_,uVar1);
        puStack_70 = (ulonglong *)(param_2 + iVar18);
        FUN_140d50566(&local_78,uVar27);
        FUN_140056680(&local_98,&DAT_149dfb77a);
        uStack_a0 = uStack_a0 & 0xffffffffffff0000;
        local_a8 = (undefined ******)&PTR_FUN_149e98010;
        pppppuVar20 = ppppppuVar9[0xf];
        if ((int)puStack_70[1] == 0) {
          lVar30 = 0;
        }
        else {
          if ((local_60 & 1) == 0) {
            uVar19 = *puStack_70;
          }
          else {
            uVar19 = *puStack_70;
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puStack_70 + ((longlong)uVar19 >> 0x18);
            }
          }
          lVar30 = (longlong)local_68 * (ulonglong)uVar27 + uVar19;
        }
        cVar6 = FUN_140d50488(pppppuVar20,param_5,&local_a8);
        pppppppuVar8 = (undefined *******)0x0;
        if (((undefined *******)ppppppuVar14 != (undefined *******)0x0) && (cVar6 != '\0')) {
          local_100 = (undefined *******)(CONCAT44(local_100._4_4_,param_5) | 0x8000000);
          local_108 = local_c8;
          local_f8 = (undefined ******)&local_a8;
          pppppppuVar8 = (undefined *******)
                         (*(code *)(*pppppuVar20)[0x1f])(pppppuVar20,ppppppuVar14,lVar30,0);
        }
        if (local_90 - 2U < 0x7fffffff) {
          local_88 = (undefined ******)0x0;
          uStack_80 = 0;
          FUN_1403de9f2(&local_98,&local_88,&DAT_149e02010,1);
          uVar19 = uStack_80 & 0xffffffff;
          if (0 < (int)uStack_80) {
            lVar33 = 8;
            lVar30 = 0;
            do {
              puVar25 = &DAT_149dfb77a;
              if (*(int *)((longlong)local_88 + lVar33) != 0) {
                puVar25 = *(undefined2 **)((longlong)local_88 + lVar33 + -8);
              }
              FUN_146816218(param_6,CONCAT71((int7)(uVar19 >> 8),3),&DAT_149e0625e,puVar25);
              lVar30 = lVar30 + 1;
              uVar19 = (ulonglong)(int)uStack_80;
              lVar33 = lVar33 + 0x10;
            } while (lVar30 < (longlong)uVar19);
          }
          FUN_1447a1747(local_88);
          if ((undefined *******)local_88 != (undefined *******)0x0) {
            FUN_1400020a8();
          }
        }
        else if (pppppppuVar8 == (undefined *******)local_50) {
          FUN_146816218(param_6,3,L"Invalid property value in defaults: %s",local_d0);
        }
        if (pppppppuVar8 != (undefined *******)0x0) {
          local_50 = (undefined ******)pppppppuVar8;
        }
      }
      else {
        FUN_140056680(&local_68,&DAT_149dfb77a);
        puStack_70 = (ulonglong *)((ulonglong)puStack_70 & 0xffffffffffff0000);
        local_78 = (undefined ******)&PTR_FUN_149e98010;
        iVar18 = *(int *)((longlong)ppppppuVar9 + 0x44);
        iVar22 = *(int *)((longlong)ppppppuVar9 + 0x34);
        cVar6 = FUN_140d50488(ppppppuVar9,param_5,&local_78);
        pppppppuVar8 = (undefined *******)0x0;
        if (((undefined *******)ppppppuVar14 != (undefined *******)0x0) && (cVar6 != '\0')) {
          if (uVar27 == 0xffffffff) {
            uVar27 = 0;
          }
          local_f8 = (undefined ******)&local_78;
          local_100 = (undefined *******)(CONCAT44(local_100._4_4_,param_5) | 0x8000000);
          local_108 = local_c8;
          pppppppuVar8 = (undefined *******)
                         (*(code *)(*ppppppuVar9)[0x1f])
                                   (ppppppuVar9,ppppppuVar14,
                                    (longlong)iVar22 * (longlong)(int)uVar27 + param_2 + iVar18,0);
        }
        if (local_60 - 2 < 0x7fffffff) {
          local_a8 = (undefined ******)0x0;
          uStack_a0 = 0;
          FUN_1403de9f2(&local_68,&local_a8,&DAT_149e02010,1);
          local_b8 = local_e0[3];
          FUN_1400021e4(&local_b8,&local_88);
          pppppppuVar11 = (undefined *******)&DAT_149dfb77a;
          if ((int)uStack_80 != 0) {
            pppppppuVar11 = (undefined *******)local_88;
          }
          FUN_1400021e4(ppppppuVar9 + 4,&local_b8);
          ppppppuVar14 = (undefined ******)&DAT_149dfb77a;
          if (local_b0 != 0) {
            ppppppuVar14 = (undefined ******)local_b8;
          }
          local_f8 = (undefined ******)pppppppuVar11;
          FUN_146816218(param_6,3,L"While importing text for property \'%s\' in \'%s\':",
                        ppppppuVar14);
          if ((undefined ******)local_b8 != (undefined ******)0x0) {
            FUN_1400020a8();
          }
          if ((undefined *******)local_88 != (undefined *******)0x0) {
            FUN_1400020a8();
          }
          uVar19 = uStack_a0 & 0xffffffff;
          if (0 < (int)uStack_a0) {
            lVar33 = 8;
            lVar30 = 0;
            do {
              puVar25 = &DAT_149dfb77a;
              if (*(int *)((longlong)local_a8 + lVar33) != 0) {
                puVar25 = *(undefined2 **)((longlong)local_a8 + lVar33 + -8);
              }
              FUN_146816218(param_6,CONCAT71((int7)(uVar19 >> 8),3),&DAT_149e0625e,puVar25);
              lVar30 = lVar30 + 1;
              uVar19 = (ulonglong)(int)uStack_a0;
              lVar33 = lVar33 + 0x10;
            } while (lVar30 < (longlong)uVar19);
          }
          FUN_1447a1747(local_a8);
          if ((undefined *******)local_a8 != (undefined *******)0x0) {
            FUN_1400020a8();
          }
        }
        if (pppppppuVar8 != (undefined *******)0x0) {
          local_50 = (undefined ******)pppppppuVar8;
        }
        local_98 = CONCAT44(uStack_64,local_68);
      }
      puVar17 = auStack_e8;
      pppppppuVar8 = (undefined *******)local_50;
      if (local_98 == 0) goto LAB_1408e00a4;
      pppppppuVar16 = &local_108;
      FUN_1400020a8();
LAB_1408e009c:
      puVar17 = (undefined1 *)((longlong)pppppppuVar16 + 0x20);
      pppppppuVar8 = (undefined *******)local_50;
      goto LAB_1408e00a4;
    }
    puVar17 = auStack_e8;
    if (ppppppuVar14 == (undefined ******)0x0) goto LAB_1408e00a4;
    puVar26 = (ulonglong *)(param_2 + *(int *)((longlong)ppppppuVar14 + 0x44));
    bVar7 = *(byte *)(ppppppuVar14 + 0xe);
    uStack_64 = (*(code *)(*ppppppuVar14[0xf])[0x2f])();
    local_78 = (undefined ******)ppppppuVar14[0xf];
    local_68 = *(int *)((longlong)local_78 + 0x34);
    local_60 = CONCAT31(local_60._1_3_,bVar7);
    puStack_70 = puVar26;
    if (bVar29 == 0) {
      bVar21 = bVar21 | (byte)local_bc;
      FUN_1408dea53(&local_50);
      pppppppuVar8 = (undefined *******)((longlong)local_50 + 2);
      wVar2 = *(wchar_t *)local_50;
      local_50 = (undefined ******)pppppppuVar8;
      if (bVar21 == 1) {
        puVar17 = auStack_e8;
        if (wVar2 != L'(') goto LAB_1408e00a4;
        FUN_1408dea53(&local_50);
        ppppppuVar9 = local_d0;
        if ((byte)local_bc != '\0') {
          iVar18 = (int)puStack_70[1];
          *(int *)(puStack_70 + 1) = iVar18 + 1;
          if ((local_60 & 1) == 0) {
            if (*(int *)((longlong)puStack_70 + 0xc) <= iVar18) {
              FUN_14097bbd2();
            }
          }
          else if (*(int *)((longlong)puStack_70 + 0xc) <= iVar18) {
            FUN_1468c03c2(puStack_70,iVar18,local_68,uStack_64);
          }
          if ((int)puStack_70[1] == 0) {
            _Dst = (void *)0x0;
          }
          else {
            if ((local_60 & 1) == 0) {
              uVar19 = *puStack_70;
            }
            else {
              uVar19 = *puStack_70;
              if ((uVar19 & 1) != 0) {
                uVar19 = (longlong)puStack_70 + ((longlong)uVar19 >> 0x18);
              }
            }
            _Dst = (void *)((longlong)local_68 * (longlong)iVar18 + uVar19);
          }
          if ((*(byte *)((longlong)local_78 + 0x39) & 2) == 0) {
            (*(code *)(*local_78)[0x2c])();
          }
          else {
            memset(_Dst,0,(longlong)local_68);
          }
          pppppppuVar8 = (undefined *******)local_50;
          pppppuVar20 = ppppppuVar14[0xf];
          if ((int)puStack_70[1] == 0) {
            lVar30 = 0;
          }
          else {
            if ((local_60 & 1) == 0) {
              uVar19 = *puStack_70;
            }
            else {
              uVar19 = *puStack_70;
              if ((uVar19 & 1) != 0) {
                uVar19 = (longlong)puStack_70 + ((longlong)uVar19 >> 0x18);
              }
            }
            lVar30 = (longlong)local_68 * (longlong)iVar18 + uVar19;
          }
          cVar6 = FUN_140d50488(pppppuVar20,param_5,param_6);
          if ((pppppppuVar8 != (undefined *******)0x0) && (cVar6 != '\0')) {
            local_f8 = (undefined ******)param_6;
            local_100 = (undefined *******)(CONCAT44(local_100._4_4_,param_5) | 0x8000000);
            local_108 = local_c8;
            pppppppuVar11 =
                 (undefined *******)
                 (*(code *)(*pppppuVar20)[0x1f])(pppppuVar20,pppppppuVar8,lVar30,0);
            pppppppuVar8 = (undefined *******)local_50;
            if (pppppppuVar11 != (undefined *******)local_50 &&
                pppppppuVar11 != (undefined *******)0x0) goto LAB_1408df795;
          }
          local_f8 = ppppppuVar9;
          FUN_146816218(param_6,3,
                        L"Unable to parse parameter value \'%s\' in defaultproperties array operation: %s"
                        ,pppppppuVar8);
          puVar17 = auStack_e8;
          goto LAB_1408e00a4;
        }
        pppppuVar20 = ppppppuVar14[0xf];
        lVar30 = (longlong)*(int *)((longlong)pppppuVar20 + 0x34);
        if (lVar30 == 0) {
          _Dst_00 = (undefined1 *)0x0;
          puVar15 = auStack_e8;
        }
        else {
          local_f0 = (undefined ******)0x1408dface;
          lVar33 = -(lVar30 + 0x1eU & 0xfffffffffffffff0);
          _Dst_00 = auStack_e8 + lVar33;
          puVar15 = auStack_e8 + lVar33;
        }
        if ((*(byte *)((longlong)pppppuVar20 + 0x39) & 2) == 0) {
          pppuVar3 = (*pppppuVar20)[0x2c];
          *(undefined8 *)(puVar15 + -0x28) = 0x1408dfc02;
          (*(code *)pppuVar3)(pppppuVar20,_Dst_00);
        }
        else {
          iVar18 = *(int *)(pppppuVar20 + 6);
          *(undefined8 *)(puVar15 + -0x28) = 0x1408dfc1a;
          memset(_Dst_00,0,iVar18 * lVar30);
        }
        pppppppuVar8 = (undefined *******)local_50;
        pppppuVar20 = ppppppuVar14[0xf];
        *(undefined8 *)(puVar15 + -0x28) = 0x1408dfc3b;
        cVar6 = FUN_140d50488(pppppuVar20,param_5,param_6);
        if ((pppppppuVar8 != (undefined *******)0x0) && (cVar6 != '\0')) {
          ppppuVar4 = *pppppuVar20;
          *(undefined ********)(puVar15 + -0x10) = param_6;
          *(uint *)(puVar15 + -0x18) = param_5 | 0x8000000;
          *(undefined *******)(puVar15 + -0x20) = local_c8;
          pppuVar3 = ppppuVar4[0x1f];
          *(undefined8 *)(puVar15 + -0x48) = 0x1408dfc88;
          pppppppuVar11 = (undefined *******)(*(code *)pppuVar3)(pppppuVar20,pppppppuVar8,_Dst_00,0)
          ;
          pppppppuVar8 = (undefined *******)local_50;
          if (pppppppuVar11 != (undefined *******)local_50 &&
              pppppppuVar11 != (undefined *******)0x0) {
            local_e0 = (undefined ******)pppppppuVar11;
            if ((int)puStack_70[1] == 0) {
LAB_1408dfdcc:
              *(undefined8 *)(puVar15 + -0x28) = 0x1408dfde0;
              FUN_1400021e4(ppppppuVar14 + 4,&local_a8);
              pppppppuVar8 = (undefined *******)local_a8;
              if ((int)uStack_a0 == 0) {
                pppppppuVar8 = (undefined *******)&DAT_149dfb77a;
              }
              *(undefined8 *)(puVar15 + -0x28) = 0x1408e01aa;
              FUN_146816218(param_6,3,L"%s.Remove(): Value not found in array",pppppppuVar8);
              if ((undefined *******)local_a8 != (undefined *******)0x0) {
                *(undefined8 *)(puVar15 + -0x28) = 0x1408e01c0;
                FUN_1400020a8();
              }
            }
            else {
              uVar27 = 0;
              bVar34 = false;
              do {
                while( true ) {
                  if ((local_60 & 1) == 0) {
                    uVar19 = *puStack_70;
                  }
                  else {
                    uVar19 = *puStack_70;
                    if ((uVar19 & 1) != 0) {
                      uVar19 = (longlong)puStack_70 + ((longlong)uVar19 >> 0x18);
                    }
                  }
                  lVar30 = (longlong)local_68;
                  pppppuVar20 = ppppppuVar14[0xf];
                  pppuVar3 = (*pppppuVar20)[0x19];
                  *(undefined8 *)(puVar15 + -0x28) = 0x1408dfd17;
                  cVar6 = (*(code *)pppuVar3)(pppppuVar20,_Dst_00,lVar30 * (int)uVar27 + uVar19,0);
                  ppppppuVar9 = local_78;
                  if (cVar6 == '\0') break;
                  if (((ulonglong)local_78[7] & 0x1040000000) == 0) {
                    if ((int)puStack_70[1] == 0) {
                      lVar30 = 0;
                    }
                    else {
                      if ((local_60 & 1) == 0) {
                        uVar19 = *puStack_70;
                      }
                      else {
                        uVar19 = *puStack_70;
                        if ((uVar19 & 1) != 0) {
                          uVar19 = (longlong)puStack_70 + ((longlong)uVar19 >> 0x18);
                        }
                      }
                      lVar30 = (longlong)local_68 * (longlong)(int)uVar27 + uVar19;
                    }
                    pppppuVar20 = (undefined *****)(*local_78)[0x29];
                    *(undefined8 *)(puVar15 + -0x28) = 0x1408dfd91;
                    (*(code *)pppppuVar20)(ppppppuVar9,lVar30);
                  }
                  uStack_a0 = CONCAT44(1,uVar27);
                  local_a8 = (undefined ******)&local_78;
                  *(undefined8 *)(puVar15 + -0x28) = 0x1408dfd4c;
                  FUN_140eff44e(&local_78,&local_a8);
                  bVar34 = true;
                  if ((uint)puStack_70[1] <= uVar27) goto LAB_1408e01c4;
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < (uint)puStack_70[1]);
              if (!bVar34) goto LAB_1408dfdcc;
            }
LAB_1408e01c4:
            pppppuVar20 = ppppppuVar14[0xf];
            pppppppuVar11 = (undefined *******)local_e0;
            if (((ulonglong)pppppuVar20[7] & 0x1000000000) == 0) {
              pppuVar3 = (*pppppuVar20)[0x29];
              *(undefined8 *)(puVar15 + -0x28) = 0x1408e01e8;
              (*(code *)pppuVar3)(pppppuVar20,_Dst_00);
              pppppppuVar11 = (undefined *******)local_e0;
            }
            goto LAB_1408df795;
          }
        }
        *(undefined *******)(puVar15 + -0x10) = ppppppuVar9;
        *(undefined8 *)(puVar15 + -0x38) = 0x1408dfe14;
        FUN_146816218(param_6,2,
                      L"Unable to parse parameter value \'%s\' in defaultproperties array operation: %s"
                      ,pppppppuVar8);
        pppppuVar20 = ppppppuVar14[0xf];
        puVar17 = puVar15;
        if ((*(byte *)((longlong)pppppuVar20 + 0x3c) & 0x10) != 0) goto LAB_1408e00a4;
        pppppppuVar16 = (undefined *******)(puVar15 + -0x20);
        pppuVar3 = (*pppppuVar20)[0x29];
        *(undefined8 *)(puVar15 + -0x28) = 0x1408dfe36;
        (*(code *)pppuVar3)(pppppuVar20,_Dst_00);
        goto LAB_1408e009c;
      }
      puVar17 = auStack_e8;
      if (wVar2 != L'(') goto LAB_1408e00a4;
      FUN_1408dea53(&local_50);
      local_88 = (undefined ******)0x0;
      uStack_80 = 0;
      pppppppuVar8 = (undefined *******)local_50;
      if (*(wchar_t *)local_50 == L'\0') {
LAB_1408dfb44:
        bVar34 = false;
        local_50 = (undefined ******)pppppppuVar8;
      }
      else {
        if (*(wchar_t *)local_50 == L')') {
LAB_1408df6cf:
          pppppppuVar11 = (undefined *******)&DAT_149dfb77a;
        }
        else {
          do {
            FUN_140002184(&local_88);
            pwVar24 = (wchar_t *)((longlong)pppppppuVar8 + 2);
            pppppppuVar8 = (undefined *******)((longlong)pppppppuVar8 + 2);
            if (*pwVar24 == L'\0') goto LAB_1408dfb44;
          } while (*pwVar24 != L')');
          pppppppuVar11 = (undefined *******)local_88;
          local_50 = (undefined ******)pppppppuVar8;
          if ((int)uStack_80 == 0) goto LAB_1408df6cf;
        }
        pppppppuVar8 = (undefined *******)local_50;
        uVar27 = _wtoi((wchar_t *)pppppppuVar11);
        if (((int)uVar27 < 0) || ((int)puStack_70[1] <= (int)uVar27)) {
          FUN_1400021e4(ppppppuVar14 + 4,&local_a8);
          pppppppuVar11 = (undefined *******)local_a8;
          if ((int)uStack_a0 == 0) {
            pppppppuVar11 = (undefined *******)&DAT_149dfb77a;
          }
          local_f8 = (undefined ******)CONCAT44(local_f8._4_4_,uVar27);
          FUN_146816218(param_6,3,L"%s.RemoveIndex(%d): Index not found in array",pppppppuVar11);
          if ((undefined *******)local_a8 != (undefined *******)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (((ulonglong)local_78[7] & 0x1040000000) == 0) {
            if ((local_60 & 1) == 0) {
              uVar19 = *puStack_70;
            }
            else {
              uVar19 = *puStack_70;
              if ((uVar19 & 1) != 0) {
                uVar19 = (longlong)puStack_70 + ((longlong)uVar19 >> 0x18);
              }
            }
            (*(code *)(*local_78)[0x29])(local_78,(ulonglong)uVar27 * (longlong)local_68 + uVar19);
          }
          local_a8 = (undefined ******)&local_78;
          uStack_a0 = CONCAT44(1,uVar27);
          FUN_140eff44e();
        }
        bVar34 = true;
      }
      if ((undefined *******)local_88 != (undefined *******)0x0) {
        FUN_1400020a8();
      }
      puVar17 = auStack_e8;
      puVar15 = auStack_e8;
      pppppppuVar11 = (undefined *******)local_50;
      if (!bVar34) goto LAB_1408e00a4;
    }
    else {
      iVar18 = (int)puVar26[1];
      if (iVar18 != 0) {
        iVar22 = local_68;
        if ((0 < iVar18) && (((ulonglong)local_78[7] & 0x1040000000) == 0)) {
          if ((bVar7 & 1) == 0) {
            uVar19 = *puVar26;
          }
          else {
            uVar19 = *puVar26;
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar26 + ((longlong)uVar19 >> 0x18);
            }
          }
          do {
            if (((ulonglong)local_78[7] & 0x1000000000) == 0) {
              (*(code *)(*local_78)[0x29])(local_78,uVar19);
              iVar22 = local_68;
            }
            uVar19 = uVar19 + (longlong)iVar22;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          bVar7 = (byte)local_60;
        }
        *(undefined4 *)(puStack_70 + 1) = 0;
        if ((bVar7 & 1) == 0) {
          if (*(int *)((longlong)puStack_70 + 0xc) != 0) {
            FUN_14474d398(puStack_70,0,iVar22,uStack_64);
          }
        }
        else if (*(int *)((longlong)puStack_70 + 0xc) != 0) {
          FUN_1468c0360(puStack_70,0,iVar22,uStack_64);
        }
      }
      FUN_1408dea53(&local_50);
      pppppppuVar8 = (undefined *******)((longlong)local_50 + 2);
      wVar2 = *(wchar_t *)local_50;
      puVar17 = auStack_e8;
      puVar15 = auStack_e8;
      local_50 = (undefined ******)pppppppuVar8;
      pppppppuVar11 = pppppppuVar8;
      if (wVar2 != L'(') goto LAB_1408e00a4;
    }
  }
LAB_1408df795:
  local_50 = (undefined ******)pppppppuVar11;
  *(undefined8 *)(puVar15 + -0x28) = 0x1408df7a5;
  FUN_1408dea53(&local_50);
  puVar17 = puVar15;
  pppppppuVar8 = (undefined *******)local_50;
  if (*(wchar_t *)local_50 == L')') {
    local_50 = (undefined ******)((longlong)local_50 + 2);
    pppppppuVar8 = (undefined *******)local_50;
  }
LAB_1408e00a4:
  if ((local_48 ^ (ulonglong)&local_68) == DAT_14c707940) {
    return pppppppuVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -0x28) = &UNK_1408e00d1;
  FUN_144d8e3a0();
}



// FUNCTION 1408e05aa FUN_1408e05aa body=40 status=ok
// SIG undefined FUN_1408e05aa(void)

undefined8 FUN_1408e05aa(undefined8 param_1,int param_2)

{
  FUN_140595c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408e05d2 FUN_1408e05d2 body=291 status=ok
// SIG undefined FUN_1408e05d2(void)

undefined4 *
FUN_1408e05d2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_1408e0b4e(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0xffffffffbf800000;
  local_68 = param_5;
  cVar1 = FUN_1408e06f6(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
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
      FUN_1408e0d2a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e06f6 FUN_1408e06f6 body=159 status=ok
// SIG undefined FUN_1408e06f6(void)

void FUN_1408e06f6(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14794cb78(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_1408e071a;
    }
  }
  uVar2 = 0;
LAB_1408e071a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1408e0795 FUN_1408e0795 body=952 status=ok
// SIG undefined FUN_1408e0795(void)

undefined8 FUN_1408e0795(longlong param_1,longlong *param_2,ulonglong param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  longlong local_d0 [2];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 == 0) {
    uVar27 = 0xbf800000;
    uVar29 = 0;
    goto LAB_1408e0a4f;
  }
  lVar23 = *param_2;
  if (lVar23 == 0) {
LAB_1408e0805:
    plVar20 = (longlong *)(param_1 + 0x80);
  }
  else {
    if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
      uVar21 = (uint)((ulonglong)lVar23 >> 0x10);
      uVar19 = (uint)lVar23 & 0xffff;
      uVar21 = uVar21 << 0x13 | uVar21 & 0xffff;
      param_3 = (ulonglong)uVar21;
      lVar25 = param_1 + 0x1f0;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        lVar25 = *(longlong *)(param_1 + 0x1f8);
      }
      param_2 = (longlong *)
                (ulonglong)
                (*(int *)(param_1 + 0x200) - 1U &
                (int)((ulonglong)lVar23 >> 0x20) + ((uint)lVar23 << 0x10 | uVar19) + uVar21 +
                (uVar19 >> 4));
      iVar16 = *(int *)(lVar25 + (longlong)param_2 * 4);
      if (iVar16 != -1) {
        param_2 = *(longlong **)(param_1 + 0x1b8);
        do {
          plVar17 = param_2 + (longlong)iVar16 * 5;
          if (*plVar17 == lVar23) goto LAB_1408e0b31;
          iVar16 = (int)plVar17[4];
        } while (iVar16 != -1);
      }
    }
    plVar17 = (longlong *)0x0;
LAB_1408e0b31:
    plVar20 = plVar17 + 1;
    if (plVar17 == (longlong *)0x0) {
      plVar20 = (longlong *)0x0;
    }
    if (plVar20 == (longlong *)0x0) goto LAB_1408e0805;
    plVar20 = plVar20 + 1;
  }
  iVar16 = *(int *)(param_1 + 0x78);
  uVar26 = 0;
  uVar28 = 0;
  uVar27 = uVar26;
  uVar29 = uVar28;
  if (0 < iVar16) {
    lVar23 = 0;
    uVar22 = 0;
    do {
      uVar27 = uVar26;
      uVar29 = uVar28;
      if (((longlong)*(int *)(param_1 + 0x88) <= (longlong)uVar22) ||
         ((longlong)(int)plVar20[1] <= (longlong)uVar22)) break;
      lVar25 = *plVar20;
      pdVar1 = (double *)(lVar25 + 0x20 + lVar23 * 8);
      pdVar2 = (double *)(lVar25 + 0x30 + lVar23 * 8);
      auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - DAT_14c8464a8));
      auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - DAT_14c8464a0));
      iVar18 = movmskpd((int)param_2,auVar5);
      lVar24 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar2[1] - DAT_14c8464b8));
      auVar3._8_4_ = (int)lVar24;
      auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar2 - DAT_14c8464b0));
      auVar3._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar21 = movmskpd((int)param_3,auVar3);
      if ((uVar21 & 0x3fffffff) == 0 && iVar18 == 0) {
        pdVar1 = (double *)(lVar25 + lVar23 * 8);
        dVar11 = *pdVar1;
        dVar12 = pdVar1[1];
        pdVar1 = (double *)(lVar25 + 0x10 + lVar23 * 8);
        dVar13 = *pdVar1;
        dVar14 = pdVar1[1];
        pdVar1 = (double *)(lVar25 + 0x40 + lVar23 * 8);
        pdVar2 = (double *)(lVar25 + 0x50 + lVar23 * 8);
        lVar24 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar12 - DAT_14c846488));
        auVar10._8_4_ = (int)lVar24;
        auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 - DAT_14c846480));
        auVar10._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
        uVar21 = movmskpd((int)lVar25,auVar10);
        lVar25 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar14 - DAT_14c846498));
        auVar9._8_4_ = (int)lVar25;
        auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 - DAT_14c846490));
        auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        iVar18 = movmskpd(iVar18,auVar9);
        uVar19 = iVar18 << 2 | uVar21;
        if (uVar19 != 0) {
          auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar12 + DAT_14c846488));
          auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 + DAT_14c846480));
          uVar21 = movmskpd(uVar21,auVar8);
          auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar14 + DAT_14c846498));
          auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 + DAT_14c846490));
          uVar19 = movmskpd(uVar19,auVar7);
          if ((uVar19 & 0x3fffffff) != 0 || uVar21 != 0) goto LAB_1408e08af;
        }
        auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - DAT_14c8464c8));
        auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - DAT_14c8464c0));
        iVar18 = movmskpd(uVar21,auVar6);
        auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar2[1] - dRam000000014c8464d8));
        auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar2 - DAT_14c8464d0));
        uVar21 = movmskpd(0,auVar4);
        if ((uVar21 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_1408e08af;
        param_3 = 0;
        param_2 = (longlong *)0x0;
      }
      else {
LAB_1408e08af:
        local_d8 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + lVar23);
        FUN_1400021e4(&local_d8,local_d0);
        uVar21 = DAT_14caddd78 - 1;
        if (DAT_14caddd78 == 0) {
          uVar21 = 0;
        }
        param_3 = (ulonglong)uVar21;
        param_2 = (longlong *)&DAT_149dfb77a;
        if (DAT_14caddd78 != 0) {
          param_2 = DAT_14caddd70;
        }
        cVar15 = FUN_144a38768(local_d0,param_2,param_3,1);
        if (cVar15 != '\0') {
          local_d8 = local_d8 & 0xffffffff00000000;
          param_3 = uVar22 & 0xffffffff;
          param_2 = plVar20;
          FUN_140d50689(param_1 + 0x50,plVar20,param_3,&local_d8);
          unaff_XMM9_Db = 0;
          unaff_XMM9_Da = (undefined4)local_d8;
        }
        if (local_d0[0] != 0) {
          FUN_1400020a8();
        }
        uVar27 = unaff_XMM9_Da;
        uVar29 = unaff_XMM9_Db;
        if (cVar15 != '\0') break;
        iVar16 = *(int *)(param_1 + 0x78);
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 0xc;
      uVar27 = uVar26;
      uVar29 = uVar28;
    } while ((longlong)uVar22 < (longlong)iVar16);
  }
LAB_1408e0a4f:
  if ((local_c0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar29,uVar27);
}



// FUNCTION 1408e0b4e FUN_1408e0b4e body=476 status=ok
// SIG undefined FUN_1408e0b4e(void)

int * FUN_1408e0b4e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140171ad2(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1408e0d2a FUN_1408e0d2a body=691 status=ok
// SIG undefined FUN_1408e0d2a(void)

void FUN_1408e0d2a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1408e0d90;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1408e0d90:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x14);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x10 + lVar15 * 0x14) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc + lVar15 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1408e0fde FUN_1408e0fde body=148 status=ok
// SIG undefined FUN_1408e0fde(void)

undefined8 FUN_1408e0fde(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  plVar3 = (longlong *)param_3[1];
  local_20 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1408e1074(param_1,param_2,&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1408e1074(param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e1074 FUN_1408e1074 body=126 status=ok
// SIG undefined FUN_1408e1074(void)

ushort * FUN_1408e1074(ushort *param_1,ushort param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  longlong *plVar6;
  
  *param_1 = param_2;
  plVar6 = (longlong *)*param_3;
  *(longlong **)(param_1 + 4) = plVar6;
  lVar4 = param_3[1];
  *(longlong *)(param_1 + 8) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar6 = *(longlong **)(param_1 + 4);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar5 = *param_1 >> 8;
    if (((*param_1 & 1) != 0) || ((uVar5 & 1) != 0)) {
      LOCK();
      plVar1 = plVar6 + 8;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
      if ((int)lVar4 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    if ((uVar5 & 1) != 0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0x44);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (iVar3 == 0) {
        FUN_1480d1abc(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408e10f2 FUN_1408e10f2 body=100 status=ok
// SIG undefined FUN_1408e10f2(void)

void FUN_1408e10f2(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((((param_3 & 6) != 0) && (param_2 != 0)) &&
     (SUB41((param_3 & 4) >> 2,0) == (*(char *)(param_1 + 0x9c) == '\x01'))) {
    uVar1 = FUN_1408e1156();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408e1153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x30,*(code **)(*plVar2 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 1408e1156 FUN_1408e1156 body=228 status=ok
// SIG undefined FUN_1408e1156(void)

longlong FUN_1408e1156(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb69df0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148759eff;
    local_40 = FUN_146523eb5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryBodyOwner",&DAT_14cb69df0,FUN_146523e8e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69df0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e1242 FUN_1408e1242 body=415 status=ok
// SIG undefined FUN_1408e1242(void)

void FUN_1408e1242(char param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
    FUN_14738ac8a(param_2,iVar5);
  }
  *(undefined8 *)(param_2 + (longlong)iVar5 * 8) = 0xc00030000;
  if (param_1 == '\x02') {
    iVar5 = *(int *)(param_2 + 0x88);
    *(uint *)(param_2 + 0x88) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x8c) < iVar5 + 1U) {
      FUN_14738ac8a(param_2,iVar5);
    }
    *(undefined8 *)(param_2 + (longlong)iVar5 * 8) = 0x802050401;
  }
  uVar2 = (ulonglong)DAT_14ca85550;
  if (DAT_14c760db4 == 1) {
    if (DAT_14ca96500 != '\x01') {
      return;
    }
  }
  else {
    if (DAT_14c760db4 < 3) {
      return;
    }
    lVar3 = uVar2 * 0x3c;
    if (*(longlong *)(&DAT_14ca814b0 + lVar3) == DAT_14ca81490) {
      return;
    }
    if (DAT_14ca85550 == 0xc) {
      return;
    }
    if (((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) != 0) &&
       ((*(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 3) & 0x20) == 0)) {
      return;
    }
  }
  if (((&DAT_14ca814b8)[uVar2 * 0xf] != 1) ||
     ((*(byte *)((longlong)&DAT_14ca814d8 + uVar2 * 0x3c + 1) & 0x10) == 0)) {
    if (param_1 == '\0') {
      iVar5 = *(int *)(param_2 + 0x88);
      uVar1 = iVar5 + 1;
      *(uint *)(param_2 + 0x88) = uVar1;
      uVar4 = 0x100040d140001;
    }
    else if (param_1 == '\x01') {
      uVar4 = 0x1000401140001;
      iVar5 = *(int *)(param_2 + 0x88);
      uVar1 = iVar5 + 1;
      *(uint *)(param_2 + 0x88) = uVar1;
    }
    else {
      if (param_1 != '\x02') {
        return;
      }
      iVar5 = *(int *)(param_2 + 0x88);
      uVar1 = iVar5 + 1;
      *(uint *)(param_2 + 0x88) = uVar1;
      uVar4 = 0x1000401140002;
    }
    if (*(uint *)(param_2 + 0x8c) < uVar1) {
      FUN_14738ac8a(param_2,iVar5);
    }
    *(undefined8 *)(param_2 + (longlong)iVar5 * 8) = uVar4;
  }
  return;
}



// FUNCTION 1408e13f0 FUN_1408e13f0 body=409 status=ok
// SIG undefined FUN_1408e13f0(void)

ulonglong FUN_1408e13f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  ulonglong uVar8;
  longlong *plVar9;
  
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x30) = 1;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if ((plVar7 != (longlong *)0x0) && ((char)plVar7[3] == '\x01')) {
    unaff_RDI = *(longlong **)(param_1 + 0x18);
    if (unaff_RDI == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      lVar6 = *plVar7;
LAB_1408e1492:
      (**(code **)(lVar6 + 0x10))(plVar7);
    }
    else {
      LOCK();
      *(int *)(unaff_RDI + 1) = (int)unaff_RDI[1] + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      LOCK();
      plVar7 = unaff_RDI + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*unaff_RDI)(unaff_RDI);
        LOCK();
        piVar1 = (int *)((longlong)unaff_RDI + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar6 = *unaff_RDI;
          plVar7 = unaff_RDI;
          goto LAB_1408e1492;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_1408e14a9;
    if (0 < *(int *)(param_1 + 0x28)) {
      plVar7 = (longlong *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)*plVar7;
      plVar4 = (longlong *)((undefined8 *)*plVar7)[1];
      if (plVar4 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        plVar9 = *(longlong **)(param_1 + 0x18);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
LAB_1408e1540:
          LOCK();
          plVar4 = plVar9 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001408e1533:
            if (iVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x10) = uVar5;
        plVar9 = *(longlong **)(param_1 + 0x18);
        if (plVar4 == plVar9) {
          LOCK();
          plVar9 = plVar4 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar9 = plVar4;
            goto joined_r0x0001408e1533;
          }
        }
        else {
          *(longlong **)(param_1 + 0x18) = plVar4;
          if (plVar9 != (longlong *)0x0) goto LAB_1408e1540;
        }
      }
      FUN_148a9c0b2(plVar7);
      FUN_145975b16(plVar7);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
      if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_1408e14a9;
    }
    plVar7 = *(longlong **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  uVar8 = 0;
LAB_1408e14a9:
  *(undefined1 *)(param_1 + 0x30) = uVar3;
  return uVar8 & 0xffffffff;
}



// FUNCTION 1408e158a FUN_1408e158a body=336 status=ok
// SIG undefined FUN_1408e158a(void)

void FUN_1408e158a(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1408e16b1;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if ((bVar1 == 0) && ((*(uint *)(param_1 + 1) & 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
LAB_1408e16b1:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e16e8 FUN_1408e16e8 body=146 status=ok
// SIG undefined FUN_1408e16e8(void)

void FUN_1408e16e8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1408e177a(param_1 + 0x208,0);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_140678110();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      return;
    }
  }
  FUN_1408e2bb4(param_1 + 0xf0,param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14573310c(param_1 + 0xe0,0);
  }
  FUN_1400fb146(param_1 + 0x208,0);
  return;
}



// FUNCTION 1408e177a FUN_1408e177a body=5064 status=ok
// SIG undefined FUN_1408e177a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001408e2280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408e177a(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  void *_Src;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  byte bVar5;
  double dVar6;
  longlong *plVar7;
  LARGE_INTEGER LVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *lpTlsValue;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  LARGE_INTEGER LVar24;
  LARGE_INTEGER LVar25;
  undefined2 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong *plVar29;
  bool bVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_1508 [32];
  undefined1 *local_14e8;
  LARGE_INTEGER local_14e0;
  undefined1 *local_14d8;
  longlong *local_14c8;
  undefined2 *local_14c0;
  uint local_14b8;
  undefined4 local_14b4;
  longlong *local_14b0;
  ulonglong local_14a8;
  ulonglong local_14a0;
  ulonglong local_1498;
  longlong local_1490;
  longlong *local_1488;
  longlong *local_1480;
  undefined1 local_1478 [4];
  undefined1 local_1474 [4];
  longlong *local_1470 [2];
  undefined1 local_1460 [4];
  undefined1 local_145c [4];
  longlong *local_1458 [2];
  undefined2 *local_1448;
  int local_1440;
  longlong local_1438;
  undefined8 uStack_1430;
  LARGE_INTEGER local_1428;
  ulonglong uStack_1420;
  LARGE_INTEGER local_1418;
  undefined8 uStack_1410;
  undefined8 local_1018 [100];
  LARGE_INTEGER local_cf8;
  undefined8 uStack_cf0;
  ulonglong local_e0;
  undefined8 uStack_48;
  
  uStack_48 = 0x1408e1790;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1508;
  local_14b4 = param_2;
  if (DAT_14ca9a438 != '\x01') goto LAB_1408e2981;
  if ((DAT_14c760e1c & 1) == 0) {
    _DAT_14c86aa70 = 0;
    DAT_14c868880 = '\0';
    puVar26 = DAT_14ca96538;
    if (DAT_14ca96540 == 0) {
      puVar26 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderingThread.cpp",0x35f,
                  L"Rendering thread exception:\r\n%s",puVar26);
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    if (iVar11 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      if (DVar13 == DVar14) goto LAB_1408e2ad3;
    }
  }
  else {
LAB_1408e2ad3:
    if (DAT_14c868880 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_1400e4168(&DAT_14c872ee0,1);
    }
    FUN_1400e427a(0);
  }
  if (*param_1 != 0) {
    if ((*(byte *)(*param_1 + 0xa0) & 1) == 0) {
      FUN_143221e80();
      if (*param_1 != 0) {
        if ((*(byte *)(*param_1 + 0xa0) & 1) == 0) {
          iVar11 = DAT_14ca98aa4 + 1;
          bVar30 = 0 < DAT_14ca98aa4;
          DAT_14ca98aa4 = iVar11;
          if ((bVar30) ||
             (cVar9 = (**(code **)(*DAT_14c82b500 + 0x38))(DAT_14c82b500,1), cVar9 != '\0')) {
            local_14b4 = 0;
          }
          uVar12 = 0x21;
          if (DAT_14c760e24 < 0x21) {
            uVar12 = DAT_14c760e24;
          }
          dVar31 = ((double)(int)(uVar12 * 4) / 1000.0) / DAT_14c83f418;
          uVar15 = (ulonglong)dVar31;
          uVar15 = (longlong)(dVar31 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f | uVar15;
          local_14c8 = param_1;
          QueryPerformanceCounter(&local_cf8);
          LVar24 = local_cf8;
          QueryPerformanceCounter(&local_cf8);
          dVar31 = DAT_14c83f418;
          uVar18 = local_cf8.QuadPart - (longlong)LVar24;
          if (uVar15 <= (ulonglong)(local_cf8.QuadPart - (longlong)LVar24)) {
            uVar18 = uVar15;
          }
          uVar21 = (ulonglong)(1.0 / DAT_14c83f418);
          uVar21 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) &
                   (longlong)uVar21 >> 0x3f | uVar21;
          uVar16 = (uVar18 + LVar24.QuadPart) / uVar21;
          uVar21 = (uVar18 + LVar24.QuadPart) % uVar21;
          dVar4 = (double)_DAT_14c760e28;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca98aac) && (FUN_144b3d300(&DAT_14ca98aac), DAT_14ca98aac == -1)) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            DAT_14ca98aa8 = FUN_14054d46e(&DAT_14c846b20,L"nothreadtimeout");
            _Init_thread_footer(&DAT_14ca98aac);
          }
          FUN_14470f0c8(&local_1488,0);
          plVar7 = local_1480;
          plVar20 = local_1488;
          if (local_1480 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1480 + 1) = (int)local_1480[1] + 1;
            UNLOCK();
          }
          lpTlsValue = TlsGetValue(DAT_14c896140);
          if (lpTlsValue == (longlong *)0x0) {
            lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
            *lpTlsValue = 0;
            lpTlsValue[1] = 0;
            *(undefined4 *)(lpTlsValue + 2) = 0;
            TlsSetValue(DAT_14c896140,lpTlsValue);
          }
          plVar29 = (longlong *)lpTlsValue[1];
          if (plVar29 == (longlong *)0x0) {
            plVar29 = (longlong *)*lpTlsValue;
            local_14b0 = plVar20;
            if (plVar29 == (longlong *)0x0) {
              uVar23 = DAT_14c896180.s.LowPart;
              LVar25 = DAT_14c896180;
              while (DAT_14c896180 = LVar25, local_cf8 = LVar25, (LVar25.QuadPart & 0x3ffffffU) != 0
                    ) {
                local_1418.QuadPart = (LVar25.QuadPart & 0xfffffffffc000000U) + 0x4000000;
                if ((ulonglong)local_1418.QuadPart >> 0x1a < (ulonglong)LVar25.QuadPart >> 0x1a) {
                  FUN_14000f986(0x3a83126f);
                }
                uVar18 = (ulonglong)((uVar23 & 0x3ffffff) >> 0xe);
                uVar28 = (ulonglong)(LVar25.s.LowPart & 0x3fff);
                local_1418.QuadPart =
                     local_1418.QuadPart & 0xfffffffffc000000U |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + 0x10 + uVar28 * 0x18);
                LOCK();
                bVar30 = local_cf8.QuadPart == DAT_14c896180.QuadPart;
                LVar25.QuadPart = local_1418.QuadPart;
                if (!bVar30) {
                  LVar25 = DAT_14c896180;
                }
                DAT_14c896180 = LVar25;
                UNLOCK();
                if (bVar30) {
                  *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + uVar28 * 0x18 + 0x10)
                       = 0;
                  plVar29 = *(longlong **)
                             (*(longlong *)(&DAT_14c833b00 + uVar18 * 8) + 8 +
                             (ulonglong)(uVar23 & 0x3fff) * 0x18);
                  FUN_1447d080c(uVar23 & 0x3ffffff);
                  lpTlsValue[1] = (longlong)plVar29;
                  if (plVar29 == (longlong *)0x0) goto LAB_1408e1c51;
                  goto LAB_1408e1c8c;
                }
                uVar23 = DAT_14c896180.s.LowPart;
                LVar25 = DAT_14c896180;
              }
              lpTlsValue[1] = 0;
LAB_1408e1c51:
              puVar19 = (undefined8 *)FUN_14001cc68(0x10000,0);
              lpTlsValue[1] = (longlong)puVar19;
              iVar11 = 0xff;
              do {
                puVar17 = puVar19 + 0x20;
                *puVar19 = puVar17;
                iVar11 = iVar11 + -1;
                puVar19 = puVar17;
              } while (iVar11 != 0);
              *puVar17 = 0;
              plVar29 = (longlong *)lpTlsValue[1];
            }
            else {
              lpTlsValue[1] = (longlong)plVar29;
              *lpTlsValue = 0;
            }
LAB_1408e1c8c:
            *(undefined4 *)(lpTlsValue + 2) = 0x100;
            iVar11 = 0xff;
            plVar20 = local_14b0;
          }
          else {
            iVar11 = (int)lpTlsValue[2] + -1;
          }
          auVar33._8_4_ = (int)(uVar21 >> 0x20);
          auVar33._0_8_ = uVar21;
          auVar33._12_4_ = 0x45300000;
          lpTlsValue[1] = *plVar29;
          *(int *)(lpTlsValue + 2) = iVar11;
          *plVar29 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
          plVar29[1] = (longlong)&DAT_100000002;
          plVar29[2] = 0;
          *(undefined4 *)(plVar29 + 3) = 0;
          *(undefined4 *)(plVar29 + 4) = 0xffffffff;
          plVar29[6] = 0;
          plVar29[7] = 0x100000000;
          *(undefined1 *)(plVar29 + 8) = 1;
          plVar29[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          plVar29[0xf] = 0;
          plVar29[0x10] = -0x17ffffffffffffe0;
          plVar29[0x12] = 0;
          plVar29[0x13] = 0x100000000;
          *(undefined2 *)(plVar29 + 0x14) = 0;
          LOCK();
          bVar30 = (char)plVar29[8] == '\x01';
          if (bVar30) {
            *(char *)(plVar29 + 8) = '\0';
          }
          UNLOCK();
          if (!bVar30) {
            FUN_14008cdb0(plVar29 + 8);
          }
          param_1 = local_14c8;
          auVar38._8_4_ = (int)(uVar16 >> 0x20);
          auVar38._0_8_ = uVar16;
          auVar38._12_4_ = 0x45300000;
          *plVar29 = (longlong)&PTR_FUN_14a391be0;
          if (*(code **)(plVar29[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(plVar29[0xe] + 0x18))(plVar29 + 0xe,plVar29 + 9);
          }
          plVar29[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          plVar29[9] = (longlong)plVar29;
          plVar29[10] = (longlong)plVar29;
          lVar22 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar22 == 0) {
            lVar22 = 0;
          }
          else {
            lVar22 = *(longlong *)(lVar22 + 0x30);
          }
          plVar29[0xf] = lVar22;
          plVar29[0x10] = -0x37ffffad71b91a00;
          *(undefined4 *)((longlong)plVar29 + 0x1c) = 1;
          plVar29[0x15] = (longlong)plVar20;
          plVar29[0x16] = (longlong)plVar7;
          *plVar29 = (longlong)&PTR_FUN_14a391bd0;
          FUN_1400e88c2(plVar29,param_1);
          dVar31 = (((double)CONCAT44(0x43300000,(int)uVar21) - 4503599627370496.0) +
                   (auVar33._8_8_ - 1.9342813113834067e+25)) * dVar31 +
                   ((double)CONCAT44(0x43300000,(int)uVar16) - 4503599627370496.0) +
                   (auVar38._8_8_ - 1.9342813113834067e+25);
          local_cf8.s.LowPart._0_1_ = 1;
          FUN_1447439e4(plVar29);
          if (plVar29 != (longlong *)0x0) {
            LOCK();
            plVar20 = plVar29 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar29)(plVar29,1);
            }
          }
          auVar32._0_8_ = (double)(int)uVar12 * 10000.0 + 0.5;
          auVar32._8_8_ = 0;
          local_14b0 = (longlong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
          auVar33 = roundpd(auVar32,auVar32,1);
          local_1490 = (longlong)auVar33._0_8_;
          LVar25 = LVar24;
          do {
            if ((DAT_14c760e1c & 1) == 0) {
              _DAT_14c86aa70 = 0;
              DAT_14c868880 = '\0';
              puVar26 = &DAT_149dfb77a;
              if (DAT_14ca96540 != 0) {
                puVar26 = DAT_14ca96538;
              }
              FUN_140033559(".\\Runtime/RenderCore/Private/RenderingThread.cpp",0x35f,
                            L"Rendering thread exception:\r\n%s",puVar26);
              param_1 = local_14c8;
            }
            if ((DAT_14c86a9f8 == '\x01') && ((int)*local_14b0 != 2)) {
              if ((int)*local_14b0 == 1) {
                DVar13 = FUN_140ad26c0();
                DVar14 = GetCurrentThreadId();
                if (DVar13 == DVar14) goto LAB_1408e2829;
              }
            }
            else {
LAB_1408e2829:
              if (DAT_14c868880 == '\0') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c872ef8) &&
                   (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                  FUN_1459825b0(&DAT_14c872ee0);
                  atexit(FUN_1427868a5);
                  _Init_thread_footer(&DAT_14c872ef8);
                }
                FUN_1400e4168(&DAT_14c872ee0,1);
              }
              FUN_1400e427a(0);
            }
            if ((char)local_14b4 != '\0') {
              (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
            }
            lVar22 = local_1490 / 10000;
            if (0xfffffffe < lVar22) {
              lVar22 = 0xffffffff;
            }
            if (lVar22 < 1) {
              lVar22 = 0;
            }
            cVar9 = (**(code **)(*local_1488 + 0x20))(local_1488,lVar22,0);
            QueryPerformanceCounter(&local_cf8);
            LVar8 = local_cf8;
            uVar18 = local_cf8.QuadPart - (longlong)LVar25;
            if (uVar15 <= (ulonglong)(local_cf8.QuadPart - (longlong)LVar25)) {
              uVar18 = uVar15;
            }
            LVar24.QuadPart = LVar24.QuadPart + uVar18;
            QueryPerformanceCounter(&local_cf8);
            uVar18 = local_cf8.QuadPart - (longlong)LVar8;
            if (uVar15 <= (ulonglong)(local_cf8.QuadPart - (longlong)LVar8)) {
              uVar18 = uVar15;
            }
            uVar21 = (ulonglong)(1.0 / DAT_14c83f418);
            uVar21 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) &
                     (longlong)uVar21 >> 0x3f | uVar21;
            uVar16 = (uVar18 + LVar24.QuadPart) / uVar21;
            uVar21 = (uVar18 + LVar24.QuadPart) % uVar21;
            auVar35._8_4_ = (int)(uVar16 >> 0x20);
            auVar35._0_8_ = uVar16;
            auVar35._12_4_ = 0x45300000;
            auVar36._8_4_ = (int)(uVar21 >> 0x20);
            auVar36._0_8_ = uVar21;
            auVar36._12_4_ = 0x45300000;
            if (dVar4 / 1000.0 + dVar31 <=
                (((double)CONCAT44(0x43300000,(int)uVar21) - 4503599627370496.0) +
                (auVar36._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 +
                ((double)CONCAT44(0x43300000,(int)uVar16) - 4503599627370496.0) +
                (auVar35._8_8_ - 1.9342813113834067e+25)) {
              FUN_141552594();
              cVar10 = FUN_1467c2862();
              if (((cVar10 == '\x01' && cVar9 == '\0') && (DAT_14ca98aa8 == '\0')) &&
                 (DAT_14ca96610 < 1)) {
                QueryPerformanceCounter(&local_cf8);
                uVar12 = DAT_14c86a9fc;
                dVar6 = DAT_14c83f418;
                uVar18 = local_cf8.QuadPart - (longlong)LVar8;
                if (uVar15 <= (ulonglong)(local_cf8.QuadPart - (longlong)LVar8)) {
                  uVar18 = uVar15;
                }
                local_1498 = (ulonglong)(1.0 / DAT_14c83f418);
                local_1498 = (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) &
                             (longlong)local_1498 >> 0x3f | local_1498;
                local_14a0 = (uVar18 + LVar24.QuadPart) / local_1498;
                local_1498 = (uVar18 + LVar24.QuadPart) % local_1498;
                uVar18 = (ulonglong)DAT_14c86a9fc;
                puVar19 = (undefined8 *)FUN_140270d20(uVar18);
                local_1428.QuadPart = 0;
                uVar23 = *(uint *)(puVar19 + 1);
                _Src = (void *)*puVar19;
                uStack_1420 = CONCAT44(uStack_1420._4_4_,uVar23);
                if ((longlong)(int)uVar23 == 0) {
                  uStack_1420 = (ulonglong)uVar23;
LAB_1408e2133:
                  FUN_140002266(&local_cf8,L"unknown thread (%u)",uVar12);
                  if ((wchar_t *)local_1428.QuadPart != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  local_1428.s = local_cf8.s;
                  uStack_1420 = uStack_cf0;
                }
                else {
                  FUN_1446dd670(&local_1428,uVar23,0);
                  memcpy((void *)local_1428,_Src,(longlong)(int)uVar23 * 2);
                  if ((int)uStack_1420 < 2) goto LAB_1408e2133;
                }
                uVar12 = FUN_146830cd4(uVar18,local_1018,100,0);
                local_1438 = 0;
                uStack_1430 = 0;
                if ((int)uVar12 < 1) {
                  local_1418.QuadPart = 0;
                  uStack_1410 = 0;
LAB_1408e237f:
                  local_14e0.QuadPart = (LONGLONG)&DAT_149dfb77a;
                }
                else {
                  local_14c0 = (undefined2 *)(ulonglong)uVar12;
                  puVar26 = (undefined2 *)0x0;
                  local_14b8 = uVar12;
                  local_14a8 = uVar18;
                  LVar25 = local_cf8;
                  uVar18 = uStack_cf0;
                  do {
                    uStack_cf0 = uVar18;
                    local_cf8 = LVar25;
                    local_1418.QuadPart = local_1418.QuadPart & 0xffffffffffffff00;
                    uVar2 = local_1018[(longlong)puVar26];
                    memset(&local_cf8,0,0xc18);
                    FUN_146830fc4(uVar2,&local_cf8);
                    FUN_1467b7f14(&local_cf8,&local_1418,0x400);
                    FUN_1400b22c2(&local_cf8);
                    lVar22 = (longlong)(int)uStack_1430;
                    uVar12 = (int)uStack_1430 + 1;
                    uStack_1430 = CONCAT44(uStack_1430._4_4_,uVar12);
                    if (uStack_1430._4_4_ < uVar12) {
                      FUN_1447a1bd6(&local_1438);
                    }
                    lVar22 = lVar22 * 0x10;
                    *(undefined8 *)(local_1438 + lVar22) = 0;
                    *(LARGE_INTEGER *)(local_1438 + lVar22) = local_cf8;
                    local_cf8.QuadPart = 0;
                    LVar25.QuadPart = local_cf8.QuadPart;
                    *(undefined4 *)(local_1438 + 8 + lVar22) = (undefined4)uStack_cf0;
                    *(undefined4 *)(local_1438 + 0xc + lVar22) = uStack_cf0._4_4_;
                    uStack_cf0 = 0;
                    uVar18 = uStack_cf0;
                    uStack_cf0 = 0;
                    local_cf8.QuadPart = 0;
                    puVar26 = (undefined2 *)((longlong)puVar26 + 1);
                  } while (local_14c0 != puVar26);
                  local_1418.QuadPart = 0;
                  uStack_1410 = 0;
                  param_1 = local_14c8;
                  if ((int)uStack_1430 < 1) goto LAB_1408e237f;
                  lVar27 = 8;
                  lVar22 = 0;
                  iVar11 = (int)uStack_1430;
                  do {
                    if ((int)uStack_1410 + 0x7fffffffU < 0x80000200) {
                      FUN_1400020e8(&local_1418,&DAT_149e16f6c,2);
                      iVar11 = *(int *)(local_1438 + lVar27) + -1;
                      if (*(int *)(local_1438 + lVar27) == 0) {
                        iVar11 = 0;
                      }
                      FUN_1400020e8(&local_1418,*(undefined8 *)(local_1438 + -8 + lVar27),iVar11);
                      FUN_1400020e8(&local_1418,&DAT_149e02010,2);
                      iVar11 = (int)uStack_1430;
                    }
                    lVar22 = lVar22 + 1;
                    lVar27 = lVar27 + 0x10;
                  } while (lVar22 < iVar11);
                  local_14e0 = local_1418;
                  param_1 = local_14c8;
                  if ((int)uStack_1410 == 0) goto LAB_1408e237f;
                }
                LVar25.QuadPart = (LONGLONG)&DAT_149dfb77a;
                if ((int)uStack_1420 != 0) {
                  LVar25 = local_1428;
                }
                auVar34._8_4_ = (int)(local_14a0 >> 0x20);
                auVar34._0_8_ = local_14a0;
                auVar34._12_4_ = 0x45300000;
                auVar37._8_4_ = (int)(local_1498 >> 0x20);
                auVar37._0_8_ = local_1498;
                auVar37._12_4_ = 0x45300000;
                local_14d8 = &DAT_149e02010;
                local_14e8 = &DAT_149e02010;
                FUN_140002266(&local_1448,
                              L"GameThread timed out waiting for %s after %.02f seconds:%s%s%sCheck log for full callstack."
                              ,LVar25.QuadPart,
                              ((((double)CONCAT44(0x43300000,(int)local_1498) - 4503599627370496.0)
                               + (auVar37._8_8_ - 1.9342813113834067e+25)) * dVar6 +
                              ((double)CONCAT44(0x43300000,(int)local_14a0) - 4503599627370496.0) +
                              (auVar34._8_8_ - 1.9342813113834067e+25)) - dVar31);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c872ef8) &&
                   (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                  FUN_1459825b0(&DAT_14c872ee0);
                  atexit(FUN_1427868a5);
                  _Init_thread_footer(&DAT_14c872ef8);
                }
                FUN_146816410(&DAT_14c872ee0);
                puVar26 = &DAT_149dfb77a;
                if (local_1440 != 0) {
                  puVar26 = local_1448;
                }
                FUN_14682eb49(puVar26,local_1018);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c8442bc) &&
                   (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
                  if (DAT_14c846b14 == '\0') {
                    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
                  }
                  DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
                  _Init_thread_footer(&DAT_14c8442bc);
                  param_1 = local_14c8;
                }
                bVar5 = DAT_14c8442b8;
                if (DAT_14c872bf0 == '\x01') {
                  if (DAT_14c872bf1 == '\x01') {
                    bVar5 = DAT_14c8442b8 & 1;
                    goto joined_r0x0001408e249f;
                  }
                }
                else {
joined_r0x0001408e249f:
                  if (bVar5 == 0) {
                    local_cf8.QuadPart = 0x149e1595e;
                    uStack_cf0._0_4_ = 0x15;
                    FUN_1446e940c(local_145c,&local_cf8);
                    local_cf8.QuadPart = 0x149e16ffc;
                    uStack_cf0._0_4_ = 0xd;
                    FUN_1446e940c(local_1460,&local_cf8);
                    local_cf8.QuadPart = 0x149e1592a;
                    uStack_cf0 = CONCAT44(uStack_cf0._4_4_,0x19);
                    FUN_140208c1e(local_1458,local_1460,local_145c,&local_cf8);
                    plVar20 = local_1458[0];
                    if (*(code **)(*local_1458[0] + 0x50) != FUN_144828418) {
                      plVar20 = (longlong *)(**(code **)(*local_1458[0] + 0x50))();
                    }
                    FUN_1447a1fc0(plVar20);
                    pcVar3 = *(code **)(*local_1458[0] + 0x28);
                    if (pcVar3 == FUN_14482841c) {
                      plVar20 = local_1458[0] + 3;
                      if (local_1458[0][5] != 0) {
                        plVar20 = (longlong *)(local_1458[0][5] + 8);
                      }
                    }
                    else if (pcVar3 == (code *)&LAB_14010c34c) {
                      plVar20 = local_1458[0] + 2;
                    }
                    else {
                      plVar20 = (longlong *)(*pcVar3)(local_1458[0]);
                    }
                    local_14c0 = &DAT_149dfb77a;
                    if ((int)plVar20[1] != 0) {
                      local_14c0 = (undefined2 *)*plVar20;
                    }
                    local_cf8.QuadPart = 0x149e15a2c;
                    uStack_cf0._0_4_ = 0x14;
                    FUN_1446e940c(local_1474,&local_cf8);
                    local_cf8.QuadPart = 0x149e16ffc;
                    uStack_cf0._0_4_ = 0xd;
                    FUN_1446e940c(local_1478,&local_cf8);
                    local_cf8.QuadPart = 0x149e1598a;
                    uStack_cf0 = CONCAT44(uStack_cf0._4_4_,0x50);
                    FUN_140208c1e(local_1470,local_1478,local_1474);
                    plVar20 = local_1470[0];
                    if (*(code **)(*local_1470[0] + 0x50) != FUN_144828418) {
                      plVar20 = (longlong *)(**(code **)(*local_1470[0] + 0x50))();
                    }
                    FUN_1447a1fc0(plVar20);
                    pcVar3 = *(code **)(*local_1470[0] + 0x28);
                    if (pcVar3 == FUN_14482841c) {
                      plVar20 = local_1470[0] + 3;
                      if (local_1470[0][5] != 0) {
                        plVar20 = (longlong *)(local_1470[0][5] + 8);
                      }
                    }
                    else if (pcVar3 == (code *)&LAB_14010c34c) {
                      plVar20 = local_1470[0] + 2;
                    }
                    else {
                      plVar20 = (longlong *)(*pcVar3)(local_1470[0]);
                    }
                    param_1 = local_14c8;
                    puVar26 = &DAT_149dfb77a;
                    if ((int)plVar20[1] != 0) {
                      puVar26 = (undefined2 *)*plVar20;
                    }
                    FUN_14682f732(0,puVar26);
                    if (local_1470[0] != (longlong *)0x0) {
                      (**(code **)(*local_1470[0] + 0x10))();
                    }
                    if (local_1458[0] != (longlong *)0x0) {
                      (**(code **)(*local_1458[0] + 0x10))();
                    }
                  }
                }
                FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
                if (local_1448 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if ((wchar_t *)local_1418.QuadPart != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                FUN_1447a1747(local_1438,uStack_1430 & 0xffffffff);
                if (local_1438 != 0) {
                  FUN_1400020a8();
                }
                if ((wchar_t *)local_1428.QuadPart != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            LVar25 = LVar8;
          } while (cVar9 == '\0');
          DAT_14ca98aa4 = DAT_14ca98aa4 + -1;
          if (local_1480 != (longlong *)0x0) {
            LOCK();
            plVar20 = local_1480 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*local_1480)(local_1480);
              LOCK();
              piVar1 = (int *)((longlong)local_1480 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_1480 + 0x10))(local_1480);
              }
            }
          }
        }
        puVar19 = (undefined8 *)*param_1;
        *param_1 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
    }
    else {
      lVar22 = *param_1;
      *param_1 = 0;
      if (lVar22 != 0) {
        LOCK();
        piVar1 = (int *)(lVar22 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_1508);
        }
      }
    }
  }
LAB_1408e2981:
  if ((local_e0 ^ (ulonglong)auStack_1508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e2bb4 FUN_1408e2bb4 body=2686 status=ok
// SIG undefined FUN_1408e2bb4(void)

/* WARNING: Removing unreachable block (ram,0x0001408e316e) */
/* WARNING: Removing unreachable block (ram,0x0001408e2cbf) */
/* WARNING: Removing unreachable block (ram,0x0001408e3174) */
/* WARNING: Removing unreachable block (ram,0x0001408e2cca) */
/* WARNING: Removing unreachable block (ram,0x0001408e317e) */

void FUN_1408e2bb4(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  int iVar13;
  undefined2 uVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  longlong lVar18;
  float fVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  double local_178;
  double local_170;
  double dStack_168;
  undefined8 local_160;
  double dStack_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((int)param_2[1] == 0) {
    FUN_1408e3634(param_1 + 0x88,1,1);
    FUN_1408e36f6(param_1,1,2,1);
    puVar5 = *(undefined8 **)(param_1 + 0xb0);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    puVar6 = *(undefined2 **)(param_1 + 0x60);
    if (*(char *)(param_1 + 0x81) == '\x01') {
      *puVar6 = 0x7fff;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0x7fff;
      local_178 = 1.0;
      local_170 = 0.0;
      dStack_168 = 0.0;
      local_160 = 0;
      dStack_158 = 0.0;
      local_150 = 1.0;
      local_148 = 0.0;
      uStack_140 = 0;
      local_138 = 0.0;
      dStack_130 = 0.0;
      local_128 = 1.0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0x3ff0000000000000;
      dVar23 = (double)FUN_144a91046();
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0x7fff;
      iVar13 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar23 < 0.0) * 4)) >> 1;
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      uVar12 = (undefined2)iVar13;
      if (iVar13 < -0x7fff) {
        uVar12 = 0x8000;
      }
      puVar6[7] = uVar12;
    }
    else {
      *(undefined1 *)puVar6 = 0x7f;
      *(undefined1 *)((longlong)puVar6 + 1) = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined1 *)((longlong)puVar6 + 3) = 0x7f;
      *(undefined1 *)(puVar6 + 2) = 0;
      *(undefined1 *)((longlong)puVar6 + 5) = 0;
      *(undefined1 *)(puVar6 + 3) = 0x7f;
      *(undefined1 *)((longlong)puVar6 + 7) = 0x7f;
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      **(undefined8 **)(param_1 + 0x68) = 0;
    }
    else {
      *(undefined4 *)*(undefined8 **)(param_1 + 0x68) = 0;
    }
    if (*(char *)(param_1 + 0x80) == '\x01') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 4) = 0;
    }
  }
  else {
    FUN_1408e3634(param_1 + 0x88,(int)param_2[1],1);
    *(undefined1 *)(param_1 + 0x80) = 1;
    FUN_1408e36f6(param_1,(int)param_2[1],2,1);
    if (0 < (int)param_2[1]) {
      lVar18 = 0;
      do {
        lVar20 = *param_2;
        lVar21 = lVar18 * 0x40;
        lVar7 = *(longlong *)(param_1 + 0xb0);
        uVar15 = (ulonglong)(uint)(*(int *)(param_1 + 0xb8) * (int)lVar18);
        *(undefined4 *)(lVar7 + 8 + uVar15) = *(undefined4 *)(lVar20 + 8 + lVar21);
        *(undefined8 *)(lVar7 + uVar15) = *(undefined8 *)(lVar20 + lVar21);
        fVar19 = *(float *)(lVar20 + 0x20 + lVar21);
        fVar17 = *(float *)(lVar20 + 0x24 + lVar21);
        fVar1 = *(float *)(lVar20 + 0x28 + lVar21);
        fVar2 = *(float *)(lVar20 + 0xc + lVar21);
        fVar3 = *(float *)(lVar20 + 0x10 + lVar21);
        fVar4 = *(float *)(lVar20 + 0x14 + lVar21);
        fVar22 = *(float *)(lVar20 + 0x2c + lVar21);
        fVar24 = (fVar19 * fVar3 - fVar2 * fVar17) * fVar22;
        fVar25 = (fVar1 * fVar2 - fVar4 * fVar19) * fVar22;
        fVar22 = (fVar17 * fVar4 - fVar3 * fVar1) * fVar22;
        lVar7 = *(longlong *)(param_1 + 0x60);
        if (*(char *)(param_1 + 0x81) == '\x01') {
          local_180 = lVar18 * 0x10;
          iVar13 = (int)ROUND(fVar2 * 32767.0 + fVar2 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar12 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar12 = 0x8000;
          }
          iVar13 = (int)ROUND(fVar3 * 32767.0 + fVar3 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar14 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar14 = 0x8000;
          }
          *(undefined2 *)(lVar7 + local_180) = uVar12;
          *(undefined2 *)(lVar7 + 2 + local_180) = uVar14;
          iVar13 = (int)ROUND(fVar4 * 32767.0 + fVar4 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          if (iVar13 < -0x7fff) {
            iVar13 = -0x8000;
          }
          *(short *)(lVar7 + 4 + local_180) = (short)iVar13;
          *(undefined2 *)(lVar7 + 6 + local_180) = 0x7fff;
          local_128 = (double)fVar1;
          dStack_130 = (double)fVar17;
          local_138 = (double)fVar19;
          local_148 = (double)fVar24;
          local_150 = (double)fVar25;
          dStack_158 = (double)fVar22;
          dStack_168 = (double)fVar4;
          local_170 = (double)fVar3;
          local_178 = (double)fVar2;
          local_160 = 0;
          uStack_140 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0x3ff0000000000000;
          dVar23 = (double)FUN_144a91046();
          iVar13 = (int)ROUND(fVar19 * 32767.0 + fVar19 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar12 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar12 = 0x8000;
          }
          *(undefined2 *)(lVar7 + 8 + local_180) = uVar12;
          iVar13 = (int)ROUND(fVar17 * 32767.0 + fVar17 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar12 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar12 = 0x8000;
          }
          *(undefined2 *)(lVar7 + 10 + local_180) = uVar12;
          iVar13 = (int)ROUND(fVar1 * 32767.0 + fVar1 * 32767.0 + 0.5) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar12 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar12 = 0x8000;
          }
          *(undefined2 *)(lVar7 + 0xc + local_180) = uVar12;
          iVar13 = (int)ROUND(*(float *)(&DAT_14a329b58 + (ulonglong)(dVar23 < 0.0) * 4)) >> 1;
          if (0x7ffe < iVar13) {
            iVar13 = 0x7fff;
          }
          uVar12 = (undefined2)iVar13;
          if (iVar13 < -0x7fff) {
            uVar12 = 0x8000;
          }
          *(undefined2 *)(lVar7 + 0xe + local_180) = uVar12;
        }
        else {
          fVar10 = fVar24 * 0.0 + fVar1 * -0.0;
          fVar9 = fVar1 * -0.0 + fVar4 * 0.0;
          fVar8 = fVar24 * -0.0 + fVar4 * 0.0;
          iVar13 = (int)ROUND(fVar2 * 127.0 + fVar2 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar13) {
            iVar13 = 0x7f;
          }
          uVar11 = (undefined1)iVar13;
          if (iVar13 < -0x7f) {
            uVar11 = 0x80;
          }
          iVar13 = (int)ROUND(fVar3 * 127.0 + fVar3 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar13) {
            iVar13 = 0x7f;
          }
          if (iVar13 < -0x7f) {
            iVar13 = -0x80;
          }
          iVar16 = (int)ROUND(fVar4 * 127.0 + fVar4 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar16) {
            iVar16 = 0x7f;
          }
          if (iVar16 < -0x7f) {
            iVar16 = -0x80;
          }
          *(undefined1 *)(lVar7 + lVar18 * 8) = uVar11;
          *(char *)(lVar7 + 1 + lVar18 * 8) = (char)iVar13;
          *(char *)(lVar7 + 2 + lVar18 * 8) = (char)iVar16;
          iVar13 = (int)ROUND(fVar19 * 127.0 + fVar19 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar13) {
            iVar13 = 0x7f;
          }
          *(undefined1 *)(lVar7 + 3 + lVar18 * 8) = 0x7f;
          if (iVar13 < -0x7f) {
            iVar13 = -0x80;
          }
          iVar16 = (int)ROUND(fVar17 * 127.0 + fVar17 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar16) {
            iVar16 = 0x7f;
          }
          *(char *)(lVar7 + 4 + lVar18 * 8) = (char)iVar13;
          if (iVar16 < -0x7f) {
            iVar16 = -0x80;
          }
          iVar13 = (int)ROUND(fVar1 * 127.0 + fVar1 * 127.0 + 0.5) >> 1;
          if (0x7e < iVar13) {
            iVar13 = 0x7f;
          }
          *(char *)(lVar7 + 5 + lVar18 * 8) = (char)iVar16;
          uVar11 = (undefined1)iVar13;
          if (iVar13 < -0x7f) {
            uVar11 = 0x80;
          }
          *(undefined1 *)(lVar7 + 6 + lVar18 * 8) = uVar11;
          iVar13 = (int)ROUND(*(float *)(&DAT_14a329b50 +
                                        (ulonglong)
                                        (((fVar10 * fVar3 - fVar9 * fVar25) + fVar17 * fVar8) * -0.0
                                         + (fVar8 * 0.0 + (fVar3 * fVar24 - fVar4 * fVar25)) *
                                           fVar19 + ((fVar10 * 0.0 +
                                                     (fVar25 * fVar1 - fVar17 * fVar24)) * fVar2 -
                                                    (fVar9 * 0.0 + (fVar3 * fVar1 - fVar17 * fVar4))
                                                    * fVar22) < 0.0) * 4)) >> 1;
          if (0x7e < iVar13) {
            iVar13 = 0x7f;
          }
          uVar11 = (undefined1)iVar13;
          if (iVar13 < -0x7f) {
            uVar11 = 0x80;
          }
          *(undefined1 *)(lVar7 + 7 + lVar18 * 8) = uVar11;
        }
        lVar20 = lVar20 + lVar21;
        lVar7 = *(longlong *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x80) == '\x01') {
          *(undefined8 *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x78) * lVar18 * 8) =
               *(undefined8 *)(lVar20 + 0x30);
        }
        else {
          fVar19 = ABS(*(float *)(lVar20 + 0x30));
          if ((uint)fVar19 < 0x47800000) {
            if ((uint)fVar19 < 0x38800000) {
              fVar17 = fVar19 + 0.5;
            }
            else {
              fVar19 = (float)((int)fVar19 + 0x8000fff + (uint)(((uint)fVar19 >> 0xd & 1) != 0) >>
                              0xd);
              fVar17 = fVar19;
            }
          }
          else {
            fVar17 = (float)((0x7f800000 < (uint)fVar19 | 0x3e) << 9);
          }
          lVar21 = (ulonglong)*(uint *)(param_1 + 0x78) * lVar18 * 4;
          iVar13 = movmskps(fVar19,ZEXT416((uint)*(float *)(lVar20 + 0x30)));
          *(ushort *)(lVar7 + lVar21) = (ushort)(iVar13 << 0xf) | SUB42(fVar17,0);
          fVar19 = ABS(*(float *)(lVar20 + 0x34));
          if ((uint)fVar19 < 0x47800000) {
            if ((uint)fVar19 < 0x38800000) {
              fVar17 = fVar19 + 0.5;
            }
            else {
              fVar19 = (float)((int)fVar19 + 0x8000fff + (uint)(((uint)fVar19 >> 0xd & 1) != 0) >>
                              0xd);
              fVar17 = fVar19;
            }
          }
          else {
            fVar17 = (float)((0x7f800000 < (uint)fVar19 | 0x3e) << 9);
          }
          iVar13 = movmskps(fVar19,ZEXT416((uint)*(float *)(lVar20 + 0x34)));
          *(ushort *)(lVar7 + 2 + lVar21) = (ushort)(iVar13 << 0xf) | SUB42(fVar17,0);
        }
        lVar7 = *(longlong *)(param_1 + 0x68);
        if (*(char *)(param_1 + 0x80) == '\x01') {
          *(undefined8 *)(lVar7 + 8 + (ulonglong)*(uint *)(param_1 + 0x78) * lVar18 * 8) =
               *(undefined8 *)(lVar20 + 0x38);
        }
        else {
          fVar19 = ABS(*(float *)(lVar20 + 0x38));
          if ((uint)fVar19 < 0x47800000) {
            if ((uint)fVar19 < 0x38800000) {
              fVar17 = fVar19 + 0.5;
            }
            else {
              fVar19 = (float)((int)fVar19 + 0x8000fff + (uint)(((uint)fVar19 >> 0xd & 1) != 0) >>
                              0xd);
              fVar17 = fVar19;
            }
          }
          else {
            fVar17 = (float)((0x7f800000 < (uint)fVar19 | 0x3e) << 9);
          }
          lVar21 = (ulonglong)*(uint *)(param_1 + 0x78) * lVar18 * 4;
          iVar13 = movmskps(fVar19,ZEXT416((uint)*(float *)(lVar20 + 0x38)));
          *(ushort *)(lVar7 + 4 + lVar21) = (ushort)(iVar13 << 0xf) | SUB42(fVar17,0);
          fVar19 = ABS(*(float *)(lVar20 + 0x3c));
          if ((uint)fVar19 < 0x47800000) {
            if ((uint)fVar19 < 0x38800000) {
              fVar17 = fVar19 + 0.5;
            }
            else {
              fVar19 = (float)((int)fVar19 + 0x8000fff + (uint)(((uint)fVar19 >> 0xd & 1) != 0) >>
                              0xd);
              fVar17 = fVar19;
            }
          }
          else {
            fVar17 = (float)((0x7f800000 < (uint)fVar19 | 0x3e) << 9);
          }
          iVar13 = movmskps(fVar19,ZEXT416((uint)*(float *)(lVar20 + 0x3c)));
          *(ushort *)(lVar7 + 6 + lVar21) = (ushort)(iVar13 << 0xf) | SUB42(fVar17,0);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < (int)param_2[1]);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408e3634 FUN_1408e3634 body=72 status=ok
// SIG undefined FUN_1408e3634(void)

void FUN_1408e3634(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(char *)(param_1 + 0x38) = (char)param_3;
  FUN_140563108(param_1,param_3);
  uVar1 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
            (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34),0);
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 1408e367c FUN_1408e367c body=121 status=ok
// SIG undefined FUN_1408e367c(void)

void FUN_1408e367c(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_14056391a(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147cbea80(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147cbeb14(lVar1);
    return;
  }
  return;
}



// FUNCTION 1408e36f6 FUN_1408e36f6 body=129 status=ok
// SIG undefined FUN_1408e36f6(void)

void FUN_1408e36f6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *(char *)(param_1 + 0x82) = (char)param_4;
  FUN_1408e3898(param_1,param_4);
  iVar2 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x7c),0);
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))
            (*(longlong **)(param_1 + 0x50),iVar2 * *(int *)(param_1 + 0x78),0);
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
  }
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 1408e37a4 FUN_1408e37a4 body=121 status=ok
// SIG undefined FUN_1408e37a4(void)

void FUN_1408e37a4(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_140540510(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147ce7098(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147ce711e(lVar1);
    return;
  }
  return;
}



// FUNCTION 1408e381e FUN_1408e381e body=121 status=ok
// SIG undefined FUN_1408e381e(void)

void FUN_1408e381e(longlong param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    if ((param_3 & 1) == 0) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_2);
      }
      if (*(int *)(param_1 + 0x1c) < (int)param_2) {
        FUN_140458716(lVar1,param_2);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
    }
    *(uint *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x1c) - uVar2 < param_2 - uVar2) {
      FUN_147ce67be(lVar1);
      return;
    }
  }
  else if ((param_2 < uVar2) && (*(uint *)(param_1 + 0x18) = param_2, (param_3 & 2) == 0)) {
    FUN_147ce6844(lVar1);
    return;
  }
  return;
}



// FUNCTION 1408e3898 FUN_1408e3898 body=287 status=ok
// SIG undefined FUN_1408e3898(void)

void FUN_1408e3898(longlong param_1,undefined1 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x81);
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  ppuVar3 = &PTR_FUN_14aa6e4e0;
  if (bVar1 != 0) {
    ppuVar3 = &PTR_FUN_14aa6e440;
  }
  ppuVar4 = &PTR_FUN_14aa6e540;
  if (bVar1 != 0) {
    ppuVar4 = &PTR_FUN_14aa6e4a0;
  }
  *puVar2 = ppuVar3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[1] = ppuVar4;
  *(undefined1 *)(puVar2 + 4) = param_2;
  *(uint *)(param_1 + 0x70) = (uint)bVar1 * 8 + 8;
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  bVar1 = *(byte *)(param_1 + 0x80);
  ppuVar3 = &PTR_FUN_14aa6e580;
  if (bVar1 != 0) {
    ppuVar3 = &PTR_FUN_14aa6e3a0;
  }
  ppuVar4 = &PTR_FUN_14aa6e5e0;
  if (bVar1 != 0) {
    ppuVar4 = &PTR_FUN_14aa6e400;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = ppuVar3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[1] = ppuVar4;
  *(undefined1 *)(puVar2 + 4) = param_2;
  *(uint *)(param_1 + 0x74) = (uint)bVar1 * 4 + 4;
  *(undefined8 **)(param_1 + 0x50) = puVar2;
  return;
}



// FUNCTION 1408e39ce FUN_1408e39ce body=4826 status=ok
// SIG undefined FUN_1408e39ce(void)

void FUN_1408e39ce(LARGE_INTEGER param_1,LARGE_INTEGER param_2,undefined8 *param_3)

{
  LARGE_INTEGER *pLVar1;
  byte *pbVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined1 **ppuVar19;
  ulonglong uVar20;
  double *pdVar21;
  int iVar22;
  longlong lVar23;
  LARGE_INTEGER *pLVar24;
  int *piVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  undefined1 uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  LARGE_INTEGER LVar33;
  uint uVar34;
  longlong lVar35;
  LARGE_INTEGER LVar36;
  uint uVar37;
  longlong lVar38;
  uint uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_228 [32];
  longlong local_208;
  LARGE_INTEGER local_200;
  uint local_1f4;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  wchar_t *local_1e0;
  wchar_t *local_1d8;
  LARGE_INTEGER local_1d0;
  LARGE_INTEGER *local_1c8;
  double *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  LARGE_INTEGER *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  undefined1 local_172;
  undefined1 local_171;
  double local_170;
  double local_168;
  longlong local_160;
  LARGE_INTEGER local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER LStack_130;
  double local_128;
  double local_120;
  double *local_118;
  LARGE_INTEGER local_110;
  LARGE_INTEGER *local_108;
  undefined1 local_f9;
  undefined1 *local_f8;
  undefined1 *local_f0;
  LARGE_INTEGER local_e8;
  undefined8 ***local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  LARGE_INTEGER ***local_c8;
  longlong *plStack_c0;
  int local_b8;
  LARGE_INTEGER local_a8;
  undefined8 ***local_a0;
  LARGE_INTEGER **local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1e8 = param_3;
  if (*(int *)(param_3 + 1) == 0) {
    FUN_1429ca9f6(param_1.QuadPart);
  }
  if (-1 < DAT_14c75f29c) {
    iVar28 = (uint)(DAT_14c75f29c == 2) * 2;
    if (DAT_14c75f29c == 1) {
      iVar28 = 1;
    }
    if (iVar28 != *(int *)(param_1.QuadPart + 0xd10)) {
      FUN_146db08be((wchar_t *)(param_1.QuadPart + 0x250),(wchar_t *)(param_1.QuadPart + 0xc48));
      *(int *)(param_1.QuadPart + 0xd10) = iVar28;
      FUN_140f6162e((wchar_t *)(param_1.QuadPart + 0x250),(wchar_t *)(param_1.QuadPart + 0xc48),
                    DAT_14c994610);
    }
  }
  pcVar6 = *(code **)(param_1.QuadPart + 0xf10);
  if (pcVar6 != (code *)0x0) {
    pwVar15 = (wchar_t *)(param_1.QuadPart + 0xf30);
    if (*(wchar_t **)(param_1.QuadPart + 0xf20) != (wchar_t *)0x0) {
      pwVar15 = *(wchar_t **)(param_1.QuadPart + 0xf20);
    }
    local_1d0 = param_2;
    uVar10 = (**(code **)(*(longlong *)pwVar15 + 8))();
    (*pcVar6)(uVar10,&local_1d0);
  }
  lVar14 = *(longlong *)(param_1.QuadPart + 0x2c8);
  local_138.QuadPart = 0x149f5cd78;
  local_110 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  LStack_130.QuadPart = (LONGLONG)&DAT_14c872ee0;
  local_128 = 0.0;
  QueryPerformanceCounter(&local_1d0);
  local_120 = (double)local_1d0.QuadPart * DAT_14c83f420 + 16777216.0;
  local_118 = &local_128;
  QueryPerformanceCounter(&local_1d0);
  local_120 = (double)local_1d0.QuadPart * DAT_14c83f420 + 16777216.0;
  local_140 = *(longlong *)(param_1.QuadPart + 0xd58);
  local_180 = &local_140;
  local_148 = *(longlong *)(param_1.QuadPart + 0xd60);
  local_198 = &local_148;
  local_150 = *(longlong *)(param_1.QuadPart + 0xd68);
  local_188 = &local_150;
  local_158 = *(LARGE_INTEGER *)(param_1.QuadPart + 0xd70);
  pLVar24 = &local_158;
  local_160 = *(longlong *)(param_1.QuadPart + 0xd78);
  local_190 = &local_160;
  local_168 = (double)(DAT_14c75f28c * DAT_14c75f28c);
  local_1c0 = &local_168;
  local_170 = (double)(DAT_14c75f290 * DAT_14c75f290);
  local_1b8 = &local_170;
  local_1a8 = &local_171;
  local_171 = DAT_14c75f3b1;
  local_1b0 = &local_172;
  local_172 = DAT_14c9974ec;
  local_1c8 = &local_110;
  local_98 = &local_108;
  iVar28 = *(int *)(lVar14 + 0x618);
  local_200 = param_1;
  local_1d0 = param_1;
  local_1a0 = pLVar24;
  local_108 = &local_1d0;
  if (0 < iVar28) {
    lVar35 = 0;
    lVar23 = 0;
    iVar22 = 0;
    do {
      lVar38 = *(longlong *)(lVar14 + 0x610);
      plVar13 = *(longlong **)(lVar38 + 8 + lVar35);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)(lVar38 + lVar35);
        iVar31 = *(int *)(*plVar13 + 0x18);
        if (iVar31 != 0) {
          local_e0 = &local_c8;
          local_e8.QuadPart = (LONGLONG)FUN_1429dcf3e;
          local_f8 = &LAB_1429dcf3a;
          ppuVar19 = &local_f8;
          pLVar24 = &local_e8;
          local_f0 = &local_f9;
          plStack_c0 = plVar13;
          goto LAB_1408e3d52;
        }
      }
      else {
        iVar31 = (int)plVar13[1];
        if (iVar31 != 0) {
          local_a0 = &local_c8;
          local_a8.QuadPart = (LONGLONG)FUN_1429dc20a;
          local_d8 = &LAB_1429dcf3a;
          ppuVar19 = &local_d8;
          pLVar24 = &local_a8;
          local_d0 = &local_f9;
          plStack_c0 = plVar13;
LAB_1408e3d52:
          local_c8 = &local_98;
          local_b8 = iVar22;
          FUN_1402643e4(iVar31,ppuVar19,pLVar24,0);
          iVar22 = iVar22 + iVar31;
          iVar28 = *(int *)(lVar14 + 0x618);
        }
      }
      lVar23 = lVar23 + 1;
      lVar35 = lVar35 + 0x10;
    } while (lVar23 < iVar28);
  }
  FUN_14488ddfe(&local_1d0,(longlong *)(lVar14 + 0x610));
  LVar33 = local_200;
  if (local_1c0 != (double *)0x0) {
    local_1d8 = (wchar_t *)(local_200.QuadPart + 0x360);
    local_1e0 = (wchar_t *)(local_200.QuadPart + 0x380);
    do {
      pLVar24 = (LARGE_INTEGER *)
                CONCAT71((int7)((ulonglong)pLVar24 >> 8),&stack0x00000000 != &DAT_000001c0);
      lVar14 = (longlong)(int)local_1b8;
      if ((&stack0x00000000 != &DAT_000001c0 && 1 < local_1b8._4_1_) &&
         (pLVar24 = (LARGE_INTEGER *)(lVar14 * 0x10),
         *(char *)((longlong)local_1c0[0x58] + 0xd + (longlong)pLVar24) == '\x01')) {
        if ((2 < local_1b8._4_1_) &&
           ((plVar13 = *(longlong **)((longlong)local_1c0[0xb5] + (longlong)pLVar24),
            plVar13 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar13 + 0xc))))) {
          pLVar24 = (LARGE_INTEGER *)*plVar13;
          if (((*(byte *)(pLVar24[0xd0].QuadPart + (longlong)(int)plVar13[1]) & 1) != 0) &&
             (pLVar1 = pLVar24 + 0x19, pLVar24 = (LARGE_INTEGER *)local_1c0[0x19],
             *(longlong *)(pLVar1->QuadPart + (longlong)(int)plVar13[1] * 8) ==
             pLVar24[lVar14].QuadPart)) goto LAB_1408e3e47;
        }
      }
      else {
LAB_1408e3e47:
        if ((*(char *)((longlong)local_1c0[0x1c] + lVar14) != '\0') || (DAT_14c9978a0 != 0)) {
          local_1ec = *(undefined4 *)((longlong)local_1c0[0x10] + lVar14 * 4);
          puVar11 = (undefined8 *)
                    FUN_1447eab44(local_1d8,local_1ec,CONCAT71((int7)((ulonglong)pLVar24 >> 8),1));
          *(undefined1 *)(puVar11 + 8) = 2;
          lVar35 = (longlong)(int)local_1b8;
          lVar14 = (longlong)local_1c0[0x1f] + lVar35 * 0x18;
          lVar23 = *(longlong *)(lVar14 + 8);
          if (*(longlong *)(lVar14 + 8) == 0) {
            lVar23 = lVar14;
          }
          if ((longlong)*(int *)(lVar14 + 0x10) == 0) {
            uVar30 = 0;
            uVar27 = 0;
            local_1f4 = 0;
            local_1f0 = 0;
            uVar37 = 0;
            uVar39 = 0;
            uVar32 = 0;
            uVar34 = 0;
          }
          else {
            lVar14 = (longlong)*(int *)(lVar14 + 0x10) * 8;
            lVar38 = 0;
            local_1f0 = 0;
            local_1f4 = 0;
            uVar27 = 0;
            uVar30 = 0;
            do {
              lVar7 = *(longlong *)(lVar23 + lVar38);
              if ((lVar7 != 0) &&
                 ((*(byte *)(lVar7 + 0x71 + (ulonglong)((*(uint *)(lVar7 + 8) & 3) == 0) * 8) & 2)
                  != 0)) {
                uVar16 = (ulonglong)((*(uint *)(lVar7 + 8) & 3) == 0);
                uVar30 = uVar30 | *(uint *)(lVar7 + 0x48 + uVar16 * 8);
                uVar27 = uVar27 | *(uint *)(lVar7 + 0x4c + uVar16 * 8);
                local_1f4 = local_1f4 | *(uint *)(lVar7 + 0x50 + uVar16 * 8);
                local_1f0 = local_1f0 | *(uint *)(lVar7 + 0x54 + uVar16 * 8);
              }
              lVar38 = lVar38 + 8;
            } while (lVar14 != lVar38);
            lVar38 = 0;
            uVar37 = 0;
            uVar39 = 0;
            uVar32 = 0;
            uVar34 = 0;
            do {
              lVar7 = *(longlong *)(lVar23 + lVar38);
              if ((lVar7 != 0) &&
                 ((*(byte *)(lVar7 + 0x71 + (ulonglong)((*(uint *)(lVar7 + 8) & 3) == 0) * 8) & 5)
                  != 0)) {
                uVar16 = (ulonglong)((*(uint *)(lVar7 + 8) & 3) == 0);
                uVar39 = uVar39 | *(uint *)(lVar7 + 0x58 + uVar16 * 8);
                uVar37 = uVar37 | *(uint *)(lVar7 + 0x5c + uVar16 * 8);
                uVar32 = uVar32 | *(uint *)(lVar7 + 0x60 + uVar16 * 8);
                uVar34 = uVar34 | *(uint *)(lVar7 + 100 + uVar16 * 8);
              }
              lVar38 = lVar38 + 8;
            } while (lVar14 != lVar38);
          }
          uVar10 = *(undefined8 *)((longlong)local_1c0[0x13] + lVar35 * 8);
          uVar5 = *(undefined4 *)((longlong)local_1c0[0x10] + lVar35 * 4);
          *puVar11 = *(undefined8 *)((longlong)local_1c0[0x16] + lVar35 * 8);
          puVar11[1] = uVar10;
          *(undefined4 *)(puVar11 + 2) = uVar5;
          *(uint *)((longlong)puVar11 + 0x14) = uVar30;
          *(uint *)(puVar11 + 3) = uVar27;
          *(uint *)((longlong)puVar11 + 0x1c) = local_1f4;
          *(uint *)(puVar11 + 4) = local_1f0;
          *(uint *)((longlong)puVar11 + 0x24) = uVar39;
          *(uint *)(puVar11 + 5) = uVar37;
          *(uint *)((longlong)puVar11 + 0x2c) = uVar32;
          *(uint *)(puVar11 + 6) = uVar34;
          *(undefined1 *)((longlong)puVar11 + 0x34) = 1;
          *(undefined2 *)(puVar11 + 7) = *(undefined2 *)((longlong)local_1c0[0x2e] + lVar35 * 2);
          pLVar24 = (LARGE_INTEGER *)CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
          puVar12 = (undefined8 *)FUN_1447eab44(local_1e0,local_1ec,pLVar24);
          for (lVar14 = 9; LVar33 = local_200, lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
        }
      }
      FUN_144b02030(&local_1d0);
    } while (local_1c0 != (double *)0x0);
  }
  QueryPerformanceCounter(&local_1d0);
  *local_118 = (((double)local_1d0.QuadPart * DAT_14c83f420 + 16777216.0) - local_120) + *local_118;
  FUN_1429d57c4(LVar33.QuadPart,param_2.QuadPart,*local_1e8);
  pcVar6 = *(code **)(LVar33.QuadPart + 0xf50);
  if (pcVar6 != (code *)0x0) {
    pwVar15 = (wchar_t *)(LVar33.QuadPart + 0xf70);
    if (*(wchar_t **)(LVar33.QuadPart + 0xf60) != (wchar_t *)0x0) {
      pwVar15 = *(wchar_t **)(LVar33.QuadPart + 0xf60);
    }
    local_1d0 = param_2;
    uVar10 = (**(code **)(*(longlong *)pwVar15 + 8))();
    (*pcVar6)(uVar10,&local_1d0);
  }
  iVar28 = *(int *)(LVar33.QuadPart + 0xf8);
  if ((longlong)iVar28 != 0) {
    lVar14 = *(longlong *)(LVar33.QuadPart + 0xf0);
    lVar23 = 0;
    do {
      plVar13 = *(longlong **)(lVar14 + lVar23);
      (**(code **)(*plVar13 + 0x18))(plVar13,param_2.QuadPart);
      lVar23 = lVar23 + 8;
    } while ((longlong)iVar28 * 8 != lVar23);
  }
  FUN_140f624bc(LVar33.QuadPart,0);
  if (DAT_14c9947d8 == '\x01') {
    lVar14 = *(longlong *)(LVar33.QuadPart + 0x2c8);
    FUN_146e10d5b(lVar14);
    FUN_146e118fc(lVar14);
  }
  *(longlong *)(*(longlong *)(LVar33.QuadPart + 0xf00) + 8) = *(longlong *)(LVar33.QuadPart + 0x2d8)
  ;
  if (*(char *)(*(longlong *)(LVar33.QuadPart + 0xef8) + 0xc0) == '\x01') {
    lVar14 = *(longlong *)(LVar33.QuadPart + 0x1090);
    FUN_144aa588c(*(longlong *)(LVar33.QuadPart + 0xef8) + 0x28);
    local_208 = lVar14;
    FUN_1429d98b0(*(longlong *)(LVar33.QuadPart + 0xf00),param_2.QuadPart,
                  *(longlong *)(LVar33.QuadPart + 0xef8) + 0x28,
                  *(longlong *)(LVar33.QuadPart + 0xef8) + 0x110);
  }
  plVar13 = *(longlong **)(LVar33.QuadPart + 0x1098);
  if (plVar13 != (longlong *)0x0) {
    local_1d0.QuadPart = LVar33.QuadPart + 0xc70;
    lVar14 = plVar13[1];
    if ((longlong)(int)lVar14 != 0) {
      lVar23 = *plVar13;
      lVar35 = 0;
      do {
        (**(code **)(**(longlong **)(lVar23 + lVar35) + 0x80))
                  (*(longlong **)(lVar23 + lVar35),&local_1d0);
        lVar35 = lVar35 + 8;
      } while ((longlong)(int)lVar14 * 8 != lVar35);
    }
  }
  FUN_14489f9ca((wchar_t *)(LVar33.QuadPart + 0xef0),param_2.QuadPart,
                *(longlong *)(LVar33.QuadPart + 0x1090));
  pcVar6 = *(code **)(LVar33.QuadPart + 0xf90);
  if (pcVar6 != (code *)0x0) {
    pwVar15 = (wchar_t *)(LVar33.QuadPart + 0xfb0);
    if (*(wchar_t **)(LVar33.QuadPart + 4000) != (wchar_t *)0x0) {
      pwVar15 = *(wchar_t **)(LVar33.QuadPart + 4000);
    }
    local_1d0 = param_2;
    uVar10 = (**(code **)(*(longlong *)pwVar15 + 8))();
    (*pcVar6)(uVar10,&local_1d0);
  }
  plVar13 = *(longlong **)(LVar33.QuadPart + 0x10a0);
  if ((plVar13 != (longlong *)0x0) &&
     (lVar14 = plVar13[1], local_1d0 = param_2, (longlong)(int)lVar14 != 0)) {
    lVar23 = *plVar13;
    lVar35 = 0;
    do {
      (**(code **)(**(longlong **)(lVar23 + lVar35) + 0x88))
                (*(longlong **)(lVar23 + lVar35),&local_1d0);
      lVar35 = lVar35 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar35);
  }
  if ((*(longlong *)(LVar33.QuadPart + 0x10a8) != 0) && (DAT_14c994720 == '\x01')) {
    FUN_140392fa2((wchar_t *)(LVar33.QuadPart + 0xc48),*(longlong *)(LVar33.QuadPart + 0x10a8),
                  param_2.QuadPart);
  }
  uVar9 = DAT_14c994708;
  uVar8 = DAT_14c75f2b8;
  uVar5 = DAT_14c75f2b4;
  FUN_14488ddfe(&local_1d0,*(longlong *)(LVar33.QuadPart + 0x2c8) + 0x5e0);
  if (local_1c0 != (double *)0x0) {
    pdVar21 = local_1c0;
    iVar28 = (int)local_1b8;
    do {
      dVar40 = pdVar21[0x58];
      lVar14 = (longlong)iVar28;
      lVar23 = lVar14 * 0x10;
      if ((*(byte *)((longlong)dVar40 + 10 + lVar23) & 1) != 0) {
        cVar4 = *(char *)((longlong)dVar40 + 0xb + lVar23);
        if ((((cVar4 == '\x04') || (cVar4 == '\x01')) &&
            ((*(byte *)((longlong)dVar40 + 8 + lVar23) & 0x10) != 0)) && (DAT_14c75f2b1 == '\x01'))
        {
          local_208 = CONCAT44(local_208._4_4_,uVar9);
          FUN_140bb9a93(&local_138,*(undefined8 *)((longlong)pdVar21[0x13] + lVar14 * 8),uVar5,uVar8
                       );
          dVar40 = local_1c0[0x73];
          *(undefined4 *)((longlong)dVar40 + 8 + (longlong)(int)local_1b8 * 0xc) = LStack_130._0_4_;
          *(LARGE_INTEGER *)((longlong)dVar40 + (longlong)(int)local_1b8 * 0xc) = local_138;
        }
        else {
          dVar40 = pdVar21[0x73];
          *(undefined1 **)((longlong)dVar40 + lVar14 * 0xc) = &DAT_3f8000003f800000;
          *(undefined4 *)((longlong)dVar40 + 8 + lVar14 * 0xc) = 0x3f800000;
        }
        pbVar2 = (byte *)((longlong)local_1c0[0x58] + 10 + (longlong)(int)local_1b8 * 0x10);
        *pbVar2 = *pbVar2 & 0xfe;
        pdVar21 = local_1c0;
        iVar28 = (int)local_1b8;
      }
      uVar16 = (ulonglong)local_1b0 & 0xffffffff;
      pLVar24 = local_1c8;
      iVar31 = (int)local_1a8;
      iVar22 = local_1b0._4_4_;
      do {
        if (pLVar24 == (LARGE_INTEGER *)0x0) {
          iVar28 = iVar28 + 1;
          local_1b8 = (double *)CONCAT44(local_1b8._4_4_,iVar28);
          if (iVar22 <= iVar28) {
            uVar27 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar27;
            local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,uVar27);
            if ((int)uVar27 < *(int *)(local_1d0.QuadPart + 8)) {
              uVar20 = (longlong)(int)uVar27 << 4 | 8;
              uVar16 = (longlong)(int)uVar27;
              do {
                lVar14 = *(longlong *)(*(longlong *)local_1d0 + uVar20);
                if (lVar14 == 0) {
                  piVar25 = (int *)(*(longlong *)(*(longlong *)local_1d0 + -8 + uVar20) + 0x18);
                }
                else {
                  piVar25 = (int *)(lVar14 + 8);
                }
                if (*piVar25 != 0) goto LAB_1408e43f7;
                uVar26 = uVar16 + 1;
                local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,(int)uVar16 + 1);
                uVar20 = uVar20 + 0x10;
                uVar16 = uVar26;
              } while ((longlong)uVar26 < (longlong)*(int *)(local_1d0.QuadPart + 8));
              goto LAB_1408e43f4;
            }
            goto LAB_1408e43f7;
          }
          pLVar24 = (LARGE_INTEGER *)0x0;
        }
        else {
          iVar31 = iVar31 + 1;
          local_1a8 = (undefined1 *)CONCAT44(local_1a8._4_4_,iVar31);
          if (iVar31 < (int)pLVar24[1].s.LowPart) {
            plVar13 = *(longlong **)(pLVar24->QuadPart + (longlong)iVar31 * 8);
            pdVar21 = (double *)*plVar13;
            if (pdVar21 == (double *)0x0) {
              uVar29 = 0;
            }
            else {
              uVar29 = *(undefined1 *)(pdVar21 + 0xe);
            }
            iVar28 = (int)plVar13[1];
            local_1b8._0_5_ = CONCAT14(uVar29,iVar28);
            local_1c0 = pdVar21;
          }
          else {
            uVar27 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar27;
            local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,uVar27);
            if ((int)uVar27 < *(int *)(local_1d0.QuadPart + 8)) {
              uVar20 = (longlong)(int)uVar27 << 4 | 8;
              uVar16 = (longlong)(int)uVar27;
              do {
                lVar14 = *(longlong *)(*(longlong *)local_1d0 + uVar20);
                if (lVar14 == 0) {
                  piVar25 = (int *)(*(longlong *)(*(longlong *)local_1d0 + -8 + uVar20) + 0x18);
                }
                else {
                  piVar25 = (int *)(lVar14 + 8);
                }
                if (*piVar25 != 0) goto LAB_1408e43f7;
                uVar26 = uVar16 + 1;
                local_1b0 = (undefined1 *)CONCAT44(local_1b0._4_4_,(int)uVar16 + 1);
                uVar20 = uVar20 + 0x10;
                uVar16 = uVar26;
              } while ((longlong)uVar26 < (longlong)*(int *)(local_1d0.QuadPart + 8));
LAB_1408e43f4:
              uVar16 = uVar26 & 0xffffffff;
            }
LAB_1408e43f7:
            local_1a8 = (undefined1 *)((ulonglong)local_1a8 & 0xffffffff00000000);
            if (*(int *)(local_1d0.QuadPart + 8) <= (int)uVar16) goto LAB_1408e453d;
            lVar14 = (longlong)(int)uVar16 * 0x10;
            pLVar24 = *(LARGE_INTEGER **)(*(longlong *)local_1d0 + 8 + lVar14);
            if (pLVar24 == (LARGE_INTEGER *)0x0) {
              pdVar21 = *(double **)(*(longlong *)local_1d0 + lVar14);
              iVar28 = 0;
            }
            else {
              iVar28 = (int)(*(longlong **)*(_struct_19 *)pLVar24)[1];
              pdVar21 = (double *)**(longlong **)*(_struct_19 *)pLVar24;
            }
            if (pdVar21 == (double *)0x0) {
              uVar29 = 0;
              pdVar21 = (double *)0x0;
            }
            else {
              uVar29 = *(undefined1 *)(pdVar21 + 0xe);
            }
            local_1b8._0_5_ = CONCAT14(uVar29,iVar28);
            iVar22 = *(int *)(pdVar21 + 3);
            local_1b0 = (undefined1 *)CONCAT44(iVar22,(undefined4)local_1b0);
            iVar31 = 0;
            local_1c8 = pLVar24;
            local_1c0 = pdVar21;
          }
        }
      } while ((pdVar21 != (double *)0x0) &&
              (*(char *)((longlong)pdVar21[0x46] + (longlong)iVar28) != '\0'));
    } while (pdVar21 != (double *)0x0);
  }
LAB_1408e453d:
  pwVar15 = (wchar_t *)(LVar33.QuadPart + 0xc48);
  FUN_140a83f12((wchar_t *)(LVar33.QuadPart + 0x10b0),param_2.QuadPart,
                (wchar_t *)(LVar33.QuadPart + 0xc70),
                *(undefined4 *)(*(longlong *)(LVar33.QuadPart + 0x2c8) + 0x620));
  if ((*(longlong *)(LVar33.QuadPart + 0x10a8) != 0) && (DAT_14c994720 == '\0')) {
    FUN_140392fa2(pwVar15,*(longlong *)(LVar33.QuadPart + 0x10a8),param_2.QuadPart);
  }
  pwVar18 = (wchar_t *)(LVar33.QuadPart + 0x100);
  FUN_1429b2e18(pwVar18);
  iVar28 = *(int *)(LVar33.QuadPart + 0xf8);
  if ((longlong)iVar28 != 0) {
    lVar14 = *(longlong *)(local_200.QuadPart + 0xf0);
    lVar23 = 0;
    do {
      plVar13 = *(longlong **)(lVar14 + lVar23);
      (**(code **)(*plVar13 + 0x58))(plVar13,pwVar18);
      lVar23 = lVar23 + 8;
    } while ((longlong)iVar28 * 8 != lVar23);
  }
  FUN_14016022c(pwVar18);
  FUN_14491a2c4((wchar_t *)(LVar33.QuadPart + 0xc70));
  LVar36 = local_200;
  pcVar6 = *(code **)(local_200.QuadPart + 0xfd0);
  if (pcVar6 != (code *)0x0) {
    pwVar17 = (wchar_t *)(local_200.QuadPart + 0xff0);
    if (*(wchar_t **)(local_200.QuadPart + 0xfe0) != (wchar_t *)0x0) {
      pwVar17 = *(wchar_t **)(local_200.QuadPart + 0xfe0);
    }
    local_1d0 = param_2;
    uVar10 = (**(code **)(*(longlong *)pwVar17 + 8))();
    (*pcVar6)(uVar10,&local_1d0);
  }
  *(longlong *)(LVar36.QuadPart + 0xd18) = *(longlong *)(LVar36.QuadPart + 0xb88);
  *(longlong *)(LVar36.QuadPart + 0xd20) = *(longlong *)(LVar36.QuadPart + 0xb90);
  *(longlong *)(LVar36.QuadPart + 0xd28) = *(longlong *)(LVar36.QuadPart + 0xb98);
  dVar40 = *(double *)(LVar36.QuadPart + 0xd18);
  dVar3 = *(double *)(LVar36.QuadPart + 0xd20);
  dVar41 = *(double *)(LVar36.QuadPart + 0xd28);
  dVar42 = dVar41 * dVar41 + dVar40 * dVar40 + dVar3 * dVar3;
  if (9.999999747378752e-05 <= dVar42) {
    dVar42 = SQRT(dVar42);
    dVar41 = dVar41 / dVar42;
    dVar3 = dVar3 / dVar42;
    dVar40 = dVar40 / dVar42;
  }
  else {
    dVar3 = 0.0;
    dVar40 = 1.0;
    dVar41 = 0.0;
    dVar42 = 0.0;
  }
  *(double *)(LVar36.QuadPart + 0xd18) = dVar40;
  *(double *)(LVar36.QuadPart + 0xd20) = dVar3;
  *(double *)(LVar36.QuadPart + 0xd28) = dVar41;
  *(double *)(LVar36.QuadPart + 0xd30) = dVar42;
  dVar40 = *(double *)(LVar36.QuadPart + 0x1090);
  if ((dVar40 != 0.0) && (*(char *)((longlong)dVar40 + 8) == '\x01')) {
    local_138.s = LVar36.s;
    LStack_130.s = LVar36.s;
    local_128 = dVar40;
    FUN_14488ddfe(&local_1d0,*(longlong *)(LVar36.QuadPart + 0x2c8) + 0x688);
    if (local_1c0 != (double *)0x0) {
      do {
        FUN_1429d55ce(&local_138,&local_1c0);
        FUN_144b02030(&local_1d0);
      } while (local_1c0 != (double *)0x0);
    }
    FUN_146d980ac(&local_1d0,*(longlong *)(local_200.QuadPart + 0x2c8) + 0x658);
    if (local_1c0 != (double *)0x0) {
      do {
        FUN_1429d55ce(&local_138,&local_1c0);
        FUN_146d8d3b0(&local_1d0);
      } while (local_1c0 != (double *)0x0);
    }
    FUN_14488ddfe(&local_1d0,*(longlong *)(local_200.QuadPart + 0x2c8) + 0x670);
    if (local_1c0 != (double *)0x0) {
      do {
        FUN_1429d55ce(&local_138,&local_1c0);
        FUN_144b02030(&local_1d0);
      } while (local_1c0 != (double *)0x0);
    }
    FUN_14488ddfe(&local_1d0,*(longlong *)(local_200.QuadPart + 0x2c8) + 0x610);
    LVar36 = local_200;
    if (local_1c0 != (double *)0x0) {
      do {
        FUN_1429d55ce(&local_138,&local_1c0);
        FUN_144b02030(&local_1d0);
        LVar36 = local_200;
      } while (local_1c0 != (double *)0x0);
    }
  }
  pwVar17 = (wchar_t *)(LVar36.QuadPart + 0x250);
  FUN_144a27006(pwVar17);
  local_138.QuadPart = 0;
  LStack_130 = (LARGE_INTEGER)0x0;
  uVar27 = *(uint *)(LVar36.QuadPart + 0x1b8);
  uVar16 = (ulonglong)uVar27;
  if ((int)uVar27 < 1) {
    if ((int)uVar27 < 0) {
LAB_1408e4ca1:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar16);
    }
    local_c8 = (LARGE_INTEGER ***)0x0;
    plStack_c0 = (longlong *)0x0;
  }
  else {
    LStack_130.s.HighPart = 0;
    LStack_130.QuadPart._0_4_ = uVar27;
    FUN_1401c3474(&local_138);
    LVar36 = local_200;
    memset((void *)local_138,0,uVar16);
    uVar27 = *(uint *)(LVar36.QuadPart + 0x1b8);
    uVar16 = (ulonglong)uVar27;
    local_c8 = (LARGE_INTEGER ***)0x0;
    plStack_c0 = (longlong *)0x0;
    if ((int)uVar27 < 1) {
      if ((int)uVar27 < 0) goto LAB_1408e4ca1;
    }
    else {
      plStack_c0 = (longlong *)(ulonglong)uVar27;
      FUN_14172b098(&local_c8);
      LVar36 = local_200;
      memset(local_c8,0,uVar16 << 4);
    }
  }
  if (9.99999993922529e-09 < (double)param_2) {
    FUN_1429b2b2e(pwVar17,param_2.QuadPart);
    FUN_140c27d6c((wchar_t *)(LVar33.QuadPart + 0x10b0),param_2.QuadPart);
  }
  pcVar6 = *(code **)(LVar36.QuadPart + 0x1010);
  if (pcVar6 != (code *)0x0) {
    pwVar17 = (wchar_t *)(LVar36.QuadPart + 0x1030);
    if (*(wchar_t **)(LVar36.QuadPart + 0x1020) != (wchar_t *)0x0) {
      pwVar17 = *(wchar_t **)(LVar36.QuadPart + 0x1020);
    }
    local_1d0 = param_2;
    uVar10 = (**(code **)(*(longlong *)pwVar17 + 8))();
    (*pcVar6)(uVar10,&local_1d0);
  }
  lVar14 = *(longlong *)(LVar36.QuadPart + 0x1090);
  if (lVar14 != 0) {
    FUN_146d980ac(&local_1d0,*(longlong *)(LVar36.QuadPart + 0x2c8) + 0x658);
    if (local_1c0 != (double *)0x0) {
      do {
        if ((&stack0x00000000 != &DAT_000001c0) && (1 < local_1b8._4_1_)) {
          FUN_146e1195e(lVar14,*(undefined8 *)
                                ((longlong)local_1c0[0x13] + (longlong)(int)local_1b8 * 8));
        }
        FUN_146d8d3b0(&local_1d0);
      } while (local_1c0 != (double *)0x0);
    }
    FUN_14488ddfe(&local_1d0,*(longlong *)(LVar36.QuadPart + 0x2c8) + 0x5e0);
    if (local_1c0 != (double *)0x0) {
      do {
        FUN_146e1195e(lVar14,*(undefined8 *)
                              ((longlong)local_1c0[0x13] + (longlong)(int)local_1b8 * 8));
        FUN_144b02030(&local_1d0);
      } while (local_1c0 != (double *)0x0);
    }
  }
  FUN_140184d92(pwVar18,(float)(double)param_2);
  local_1c8 = &local_a8;
  local_1d0.QuadPart = (LONGLONG)&LAB_1429dc1fe;
  local_a8 = LVar36;
  FUN_14021c872(pwVar18);
  FUN_1429c4a88((wchar_t *)(LVar36.QuadPart + 0x448),param_2.QuadPart,pwVar15);
  pcVar6 = *(code **)(LVar36.QuadPart + 0xb0);
  if (pcVar6 != (code *)0x0) {
    lVar14 = *(longlong *)(LVar36.QuadPart + 0x2c8);
    pwVar18 = (wchar_t *)(LVar36.QuadPart + 0xd0);
    if (*(wchar_t **)(LVar36.QuadPart + 0xc0) != (wchar_t *)0x0) {
      pwVar18 = *(wchar_t **)(LVar36.QuadPart + 0xc0);
    }
    uVar10 = (**(code **)(*(longlong *)pwVar18 + 8))();
    (*pcVar6)(uVar10,lVar14 + 0x628);
  }
  lVar14 = *(longlong *)(LVar36.QuadPart + 0x2c8);
  pcVar6 = *(code **)(LVar36.QuadPart + 0x30);
  pwVar18 = (wchar_t *)(LVar36.QuadPart + 0x50);
  if (*(wchar_t **)(LVar36.QuadPart + 0x40) != (wchar_t *)0x0) {
    pwVar18 = *(wchar_t **)(LVar36.QuadPart + 0x40);
  }
  local_1d0 = param_2;
  uVar10 = (**(code **)(*(longlong *)pwVar18 + 8))(pwVar18);
  (*pcVar6)(uVar10,lVar14 + 0x628,&local_1d0);
  if (DAT_14c75f2b0 == '\x01') {
    FUN_1429ba4a6(pwVar15,param_2.QuadPart);
  }
  FUN_14172b06a(local_c8,(ulonglong)plStack_c0 & 0xffffffff);
  if (local_c8 != (LARGE_INTEGER ***)0x0) {
    FUN_1400020a8();
  }
  if ((void *)local_138.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408e4caa FUN_1408e4caa body=109 status=ok
// SIG undefined FUN_1408e4caa(void)

undefined8 FUN_1408e4caa(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1408e4d18(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e4d18 FUN_1408e4d18 body=119 status=ok
// SIG undefined FUN_1408e4d18(void)

undefined8 * FUN_1408e4d18(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x18)] == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (lVar4 == 0) {
      *param_2 = uVar3;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_2[1];
      *param_2 = uVar3;
      param_2[1] = lVar4;
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
  }
  return param_2;
}



// FUNCTION 1408e4d90 FUN_1408e4d90 body=12 status=ok
// SIG undefined FUN_1408e4d90(void)

void FUN_1408e4d90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001408e4d99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1408e4d9c FUN_1408e4d9c body=31 status=ok
// SIG undefined FUN_1408e4d9c(void)

undefined8 FUN_1408e4d9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408e4dbc FUN_1408e4dbc body=297 status=ok
// SIG undefined FUN_1408e4dbc(void)

undefined8 FUN_1408e4dbc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1408e4ede;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408e4ede;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1408e4ede:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1408e4e89;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1408e4e89;
    }
  }
  uVar6 = 0;
LAB_1408e4e89:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e4ee6 FUN_1408e4ee6 body=6847 status=ok
// SIG undefined FUN_1408e4ee6(void)

/* WARNING: Removing unreachable block (ram,0x0001408e61b9) */

void FUN_1408e4ee6(double param_1,longlong param_2)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  size_t sVar18;
  code *pcVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte bVar23;
  code *pcVar24;
  wchar_t *pwVar25;
  longlong lVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1c8 [32];
  code **local_1a8;
  undefined8 *local_1a0;
  undefined2 **local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int *local_148;
  undefined8 local_140;
  int *local_138;
  int local_12c;
  code *local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  code *local_100;
  double dStack_f8;
  longlong local_f0;
  int local_e4;
  code *local_e0;
  undefined8 *local_d8;
  int local_cc;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined3 uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x2e8) == 0)) goto LAB_1408e5036;
  lVar22 = *(longlong *)((longlong)param_1 + 0x20);
  if (lVar22 == 0) {
LAB_1408e682d:
    lVar22 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_170 = &local_128;
      local_128 = FUN_140754f84;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_147da9a76;
      local_180 = FUN_1409f3105;
      local_188 = L"Engine";
      local_190 = 0;
      local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
      local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
      local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World");
    }
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_1408e682d;
  }
  bVar23 = *(byte *)(lVar22 + 0x152);
  if (((bVar23 != 1) && ((6 < bVar23 || ((0x68U >> (bVar23 & 0x1f) & 1) == 0)))) ||
     ((-1 < (int)DAT_14c761f20 && (*(int *)((longlong)param_1 + 0x50) <= (int)DAT_14c761f20))))
  goto LAB_1408e5036;
  if ((*(longlong *)((longlong)param_1 + 0x20) != 0) && (DAT_14cb10130 == 0)) {
    local_170 = &local_128;
    local_128 = FUN_140754f84;
    local_160 = FUN_14081d0ea;
    local_168 = FUN_14081d0ea;
    local_178 = &LAB_147da9a76;
    local_180 = FUN_1409f3105;
    local_188 = L"Engine";
    local_190 = 0;
    local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
    local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
    local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
    FUN_14081cfa3(L"/Script/Engine",L"World");
  }
  if (*(longlong *)(*(longlong *)(param_2 + 0x2e8) + 0x4c0) == 0) goto LAB_1408e5036;
  lVar15 = FUN_1447210f0();
  lVar22 = *(longlong *)((longlong)param_1 + 0x20);
  if (lVar22 == 0) {
LAB_1408e68cb:
    lVar22 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_170 = &local_128;
      local_128 = FUN_140754f84;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_147da9a76;
      local_180 = FUN_1409f3105;
      local_188 = L"Engine";
      local_190 = 0;
      local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
      local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
      local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World");
    }
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_1408e68cb;
  }
  if (lVar15 != lVar22) goto LAB_1408e5036;
  if ((int)DAT_14c761f20 < 0) {
    iVar13 = *(int *)((longlong)param_1 + 0x50);
    local_e4 = iVar13;
    if (iVar13 == 1) goto LAB_1408e50be;
    lVar22 = 0;
  }
  else {
    local_e4 = 1;
LAB_1408e50be:
    uVar21 = 0;
    if (0 < (int)DAT_14c761f20) {
      uVar21 = (ulonglong)DAT_14c761f20;
    }
    lVar22 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x48) + uVar21 * 8);
    iVar13 = 1;
    if ((DAT_14c950c29 == '\x01') && (lVar22 != 0)) {
      FUN_1456cec3c(lVar22);
    }
  }
  uVar34 = DAT_14c8463f8._4_4_;
  uVar28 = (undefined4)DAT_14c8463f8;
  uVar31 = DAT_14c8463f0._4_4_;
  uVar29 = (undefined4)DAT_14c8463f0;
  local_100 = (code *)0x4024000000000000;
  dStack_f8 = 10.0;
  iVar12 = 0;
  local_f0 = lVar22;
  if (DAT_14cb121f0 != 0) {
    dVar5 = (double)*(float *)(param_2 + 0x34) * 0.75 + -10.0 + -10.0;
    dVar7 = (double)*(float *)(param_2 + 0x30) * 0.75 + -10.0 + -10.0;
    if (dVar5 <= 100.0) {
      dVar5 = 100.0;
    }
    if (dVar7 <= 100.0) {
      dVar7 = 100.0;
    }
    FUN_147dd221c((longlong *)((longlong)param_1 + 0x230),*(undefined4 *)((longlong)param_1 + 0x50))
    ;
    lVar22 = *(longlong *)((longlong)param_1 + 0x230);
    lVar15 = (longlong)*(int *)((longlong)param_1 + 0x238);
    if (lVar15 == 0) {
LAB_1408e53bc:
      dVar6 = (double)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
      dVar2 = (double)CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
      iVar12 = *(int *)((longlong)param_1 + 0x178);
      if ((longlong)iVar12 != 0) {
        lVar26 = 0;
        do {
          dVar6 = dVar6 + *(double *)(*(longlong *)((longlong)param_1 + 0x170) + 8 + lVar26);
          dVar2 = dVar2 + *(double *)(*(longlong *)((longlong)param_1 + 0x170) + 0x10 + lVar26);
          lVar26 = lVar26 + 0x160;
        } while ((longlong)iVar12 * 0x160 - lVar26 != 0);
      }
      dVar6 = dVar6 * (1.0 / (double)iVar12);
      dVar2 = (1.0 / (double)iVar12) * dVar2;
      dVar9 = dVar2 + 25600.0;
      dVar8 = dVar6 + 25600.0;
      dVar2 = dVar2 + -25600.0;
      dVar6 = dVar6 + -25600.0;
      bVar27 = true;
    }
    else {
      lVar26 = 0;
      bVar27 = false;
      uVar32 = uVar29;
      uVar33 = uVar31;
      uVar35 = uVar28;
      uVar36 = uVar34;
      do {
        if (*(char *)(lVar22 + 0xa0 + lVar26) == '\x01') {
          dVar2 = *(double *)(lVar22 + 0x80 + lVar26);
          uVar30 = (undefined4)((ulonglong)dVar2 >> 0x20);
          if (bVar27) {
            if (dVar2 <= (double)CONCAT44(uVar31,uVar29)) {
              uVar29 = SUB84(dVar2,0);
              uVar31 = uVar30;
            }
            dVar2 = *(double *)(lVar22 + 0x88 + lVar26);
            if (dVar2 <= (double)CONCAT44(uVar36,uVar35)) {
              uVar35 = SUB84(dVar2,0);
              uVar36 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = *(double *)(lVar22 + 0x90 + lVar26);
            if ((double)CONCAT44(uVar33,uVar32) <= dVar2) {
              uVar32 = SUB84(dVar2,0);
              uVar33 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            dVar2 = *(double *)(lVar22 + 0x98 + lVar26);
            if ((double)CONCAT44(uVar34,uVar28) <= dVar2) {
              uVar28 = SUB84(dVar2,0);
              uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
          }
          else {
            uVar4 = *(undefined8 *)(lVar22 + 0x88 + lVar26);
            uVar35 = (undefined4)uVar4;
            uVar36 = (undefined4)((ulonglong)uVar4 >> 0x20);
            uVar4 = *(undefined8 *)(lVar22 + 0x90 + lVar26);
            uVar32 = (undefined4)uVar4;
            uVar33 = (undefined4)((ulonglong)uVar4 >> 0x20);
            uVar4 = *(undefined8 *)(lVar22 + 0x98 + lVar26);
            uVar28 = (undefined4)uVar4;
            uVar34 = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_b4 = (undefined3)((uint)*(undefined4 *)(lVar22 + 0xa4 + lVar26) >> 8);
            local_b8 = *(float *)(lVar22 + 0xa1 + lVar26);
            bVar27 = true;
            uVar29 = SUB84(dVar2,0);
            uVar31 = uVar30;
          }
        }
        dVar6 = (double)CONCAT44(uVar31,uVar29);
        dVar2 = (double)CONCAT44(uVar36,uVar35);
        dVar8 = (double)CONCAT44(uVar33,uVar32);
        dVar9 = (double)CONCAT44(uVar34,uVar28);
        lVar26 = lVar26 + 0xd8;
      } while (lVar15 * 0xd8 - lVar26 != 0);
      if (!bVar27) goto LAB_1408e53bc;
    }
    dStack_110 = dVar5 + 10.0;
    local_118 = dVar7 + 10.0;
    local_128 = local_100;
    dStack_120 = dStack_f8;
    local_108 = 1;
    if (*(int *)((longlong)param_1 + 0x238) != 0) {
      lVar15 = lVar15 * 0xd8;
      lVar22 = lVar22 + 0xa8;
      do {
        *(ulonglong *)(lVar22 + -0x80) = CONCAT71(uStack_107,local_108);
        *(double *)(lVar22 + -0x90) = local_118;
        *(double *)(lVar22 + -0x88) = dStack_110;
        *(code **)(lVar22 + -0xa0) = local_128;
        *(double *)(lVar22 + -0x98) = dStack_120;
        *(double *)(lVar22 + -0x78) = dVar6;
        *(double *)(lVar22 + -0x70) = dVar2;
        *(double *)(lVar22 + -0x68) = dVar8;
        *(double *)(lVar22 + -0x60) = dVar9;
        *(bool *)(lVar22 + -0x58) = bVar27;
        *(float *)(lVar22 + -0x57) = local_b8;
        *(uint *)(lVar22 + -0x54) = CONCAT31(uStack_b4,local_b8._3_1_);
        *(undefined2 *)(lVar22 + -0xa8) = 0;
        *(undefined1 *)(lVar22 + -0xa6) = 0;
        uVar4 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        *(ulonglong *)(lVar22 + -0x50) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        *(undefined8 *)(lVar22 + -0x48) = uVar4;
        uVar4 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        *(ulonglong *)(lVar22 + -0x40) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        *(undefined8 *)(lVar22 + -0x38) = uVar4;
        *(undefined1 *)(lVar22 + -0x30) = 0;
        uVar4 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
        *(ulonglong *)(lVar22 + -0x28) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
        *(undefined8 *)(lVar22 + -0x20) = uVar4;
        uVar28 = DAT_14c8463f8._4_4_;
        uVar31 = (undefined4)DAT_14c8463f8;
        uVar29 = DAT_14c8463f0._4_4_;
        *(undefined4 *)(lVar22 + -0x18) = (undefined4)DAT_14c8463f0;
        *(undefined4 *)(lVar22 + -0x14) = uVar29;
        *(undefined4 *)(lVar22 + -0x10) = uVar31;
        *(undefined4 *)(lVar22 + -0xc) = uVar28;
        *(undefined1 *)(lVar22 + -8) = 0;
        FUN_147dd96d2(lVar22);
        lVar22 = lVar22 + 0xd8;
        lVar15 = lVar15 + -0xd8;
        iVar13 = local_e4;
      } while (lVar15 != 0);
    }
    local_140 = &local_cc;
    local_cc = 0;
    local_138 = &local_12c;
    local_12c = 0;
    local_158 = (code *)&local_f0;
    local_d8 = &local_158;
    local_148 = &local_e4;
    local_198 = &local_c8;
    local_c8 = (undefined2 *)0x0;
    uStack_c0 = (ulonglong)uStack_c0._4_4_ << 0x20;
    local_e0 = FUN_1437c263a;
    local_1a0 = (undefined8 *)((ulonglong)local_1a0 & 0xffffffff00000000);
    uStack_150 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",iVar13,1);
    if (1 < local_e4) {
      local_c8 = (undefined2 *)0x0;
      uStack_c0 = 0;
      FUN_140002266(&local_158,L"Showing %d world partitions");
      uVar21 = uStack_c0;
      lVar22 = (longlong)(int)uStack_c0;
      uVar14 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar14);
      if (uStack_c0._4_4_ < uVar14) {
        FUN_147dc898c(&local_c8,uVar21 & 0xffffffff);
      }
      *(undefined8 *)(local_c8 + lVar22 * 0x10) = 0;
      *(code **)(local_c8 + lVar22 * 0x10) = local_158;
      *(int *)(local_c8 + lVar22 * 0x10 + 4) = (int)uStack_150;
      *(undefined4 *)(local_c8 + lVar22 * 0x10 + 6) = uStack_150._4_4_;
      puVar1 = (undefined4 *)(local_c8 + lVar22 * 0x10 + 8);
      *puVar1 = 0x3f800000;
      puVar1[1] = 0x3f800000;
      puVar1[2] = 0x3f800000;
      puVar1[3] = 0x3f800000;
      uStack_150 = 0.0;
      local_158 = (code *)0x0;
      FUN_147dc0586(&local_158,&local_128,&local_c8);
      lVar22 = *(longlong *)((longlong)param_1 + 0x230) + (longlong)local_e4 * 0xd8;
      iVar13 = *(int *)(lVar22 + -8);
      *(uint *)(lVar22 + -8) = iVar13 + 1U;
      if (*(uint *)(lVar22 + -4) < iVar13 + 1U) {
        FUN_147dc256a((longlong *)(lVar22 + -0x10),iVar13);
      }
      lVar22 = *(longlong *)(lVar22 + -0x10);
      lVar15 = (longlong)iVar13 * 0x20;
      puVar1 = (undefined4 *)(lVar22 + lVar15);
      *puVar1 = (undefined4)local_158;
      puVar1[1] = local_158._4_4_;
      puVar1[2] = (int)uStack_150;
      puVar1[3] = uStack_150._4_4_;
      *(undefined8 *)(lVar22 + 0x10 + lVar15) = 0;
      *(int **)(lVar22 + 0x10 + lVar15) = local_148;
      local_148 = (int *)0x0;
      *(undefined4 *)(lVar22 + 0x18 + lVar15) = (undefined4)local_140;
      *(undefined4 *)(lVar22 + 0x1c + lVar15) = local_140._4_4_;
      local_140 = (int *)0x0;
      FUN_147dc8960(0,0);
      if (local_148 != (int *)0x0) {
        FUN_1400020a8();
      }
      FUN_147dc8960(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar10 = local_cc;
    iVar13 = local_12c;
    iVar12 = DAT_14cb121f0;
    if (local_12c + local_cc != 0 && SCARRY4(local_12c,local_cc) == local_12c + local_cc < 0) {
      FUN_147dc145e(&local_158,param_2);
      FUN_147dc1544(&local_158,iVar10,iVar13);
      uVar29 = (undefined4)DAT_14c8463f8;
      uVar31 = DAT_14c8463f8._4_4_;
      if ((longlong)*(int *)((longlong)param_1 + 0x238) == 0) {
        bVar27 = false;
      }
      else {
        lVar15 = (longlong)*(int *)((longlong)param_1 + 0x238) * 0xd8;
        lVar22 = *(longlong *)((longlong)param_1 + 0x230) + 0xa8;
        bVar27 = false;
        do {
          FUN_1437a9888(&local_158,lVar22);
          if (*(char *)(lVar22 + -0x30) == '\x01') {
            dVar5 = *(double *)(lVar22 + -0x38);
            uVar28 = (undefined4)((ulonglong)dVar5 >> 0x20);
            if (bVar27) {
              if ((double)CONCAT44(uVar31,uVar29) <= dVar5) {
                uVar29 = SUB84(dVar5,0);
                uVar31 = uVar28;
              }
            }
            else {
              bVar27 = true;
              uVar29 = SUB84(dVar5,0);
              uVar31 = uVar28;
            }
          }
          lVar22 = lVar22 + 0xd8;
          lVar15 = lVar15 + -0xd8;
        } while (lVar15 != 0);
      }
      dVar5 = (double)CONCAT44(uVar31,uVar29);
      local_100 = (code *)0x4024000000000000;
      if (!bVar27) {
        dVar5 = dStack_110 - dStack_120;
      }
      dStack_f8 = dVar5 + dStack_f8;
      iVar12 = DAT_14cb121f0;
    }
  }
  if (iVar12 == 0 && DAT_14cb121f4 == 0) {
    bVar27 = false;
  }
  else {
    local_128 = (code *)0x0;
    dStack_120 = 0.0;
    if (((DAT_14c949801 & 1) != 0) || ((DAT_14c950c00 & 1) != 0)) {
      FUN_1400020e8(&local_128,L"(Purging) ",10);
    }
    if ((DAT_14c950214 < DAT_14c949828) || ((DAT_14c949e10 & 1) != 0)) {
      FUN_1400020e8(&local_128,L"(Unhashing) ",0xc);
    }
    cVar11 = (*(code *)PTR_FUN_14c75b118)();
    if (cVar11 != '\0') {
      FUN_1400020e8(&local_128,L"(AsyncLoading) ",0xf);
    }
    if (dStack_120._0_4_ < 2) {
      FUN_14020fad6(&local_128,L"(Idle) ");
    }
    lVar22 = *(longlong *)((longlong)param_1 + 0x20);
    if (lVar22 == 0) {
LAB_1408e6977:
      lVar22 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        local_170 = (code **)&local_158;
        local_158 = FUN_140754f84;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_147da9a76;
        local_180 = FUN_1409f3105;
        local_188 = L"Engine";
        local_190 = 0;
        local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
          (*(longlong *)(lVar22 + 0x30) != 0)) &&
         ((lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x30) + 0x2b0), lVar22 != 0 &&
          ((*(byte *)(lVar22 + 0x39e) & 0x60) != 0)))) {
        FUN_1400020e8(&local_128,L"(HighPriorityLoading) ",0x16);
      }
      lVar22 = *(longlong *)((longlong)param_1 + 0x20);
      if (lVar22 == 0) goto LAB_1408e6977;
      if (DAT_14cb10130 == 0) {
        local_170 = &local_e0;
        local_e0 = FUN_140754f84;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_147da9a76;
        local_180 = FUN_1409f3105;
        local_188 = L"Engine";
        local_190 = 0;
        local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_1408e6977;
    }
    FUN_147d7d028(&local_c8,lVar22);
    puVar20 = local_c8;
    if ((int)uStack_c0 == 0) {
      puVar20 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_158,L"(%s)",puVar20);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_f0 != 0) &&
       (((lVar22 = *(longlong *)(local_f0 + 0x40), lVar22 != 0 ||
         (lVar22 = FUN_14475ec7e(local_f0), lVar22 != 0)) &&
        (iVar13 = FUN_14490d72a(lVar22), iVar13 - 1U < 2)))) {
      cVar11 = FUN_1400900b4(local_f0);
      pwVar25 = L"Disabled";
      if (cVar11 != '\0') {
        pwVar25 = L"Enabled";
      }
      FUN_140002266(&local_c8,L" (Server Streaming %s)",pwVar25);
      iVar13 = (int)uStack_c0 + -1;
      if ((int)uStack_c0 == 0) {
        iVar13 = 0;
      }
      FUN_1400020e8(&local_158,local_c8,iVar13);
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    pcVar19 = (code *)&DAT_149dfb77a;
    if (dStack_120._0_4_ != 0) {
      pcVar19 = local_128;
    }
    pcVar24 = (code *)&DAT_149dfb77a;
    if ((int)uStack_150 != 0) {
      pcVar24 = local_158;
    }
    FUN_140002266(&local_c8,L"Streaming Status for %s: %s",pcVar24,pcVar19);
    local_1a0 = (undefined8 *)0x0;
    local_1a8 = &local_100;
    FUN_147dc1086(param_2,&local_c8);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_128 = (code *)0x0;
    dStack_120 = 0.0;
    if (local_f0 == 0) {
      if ((longlong)*(int *)((longlong)param_1 + 0x50) != 0) {
        lVar22 = 0;
        pwVar25 = L"Critical";
        uVar14 = 0;
        do {
          uVar3 = *(uint *)(*(longlong *)
                             (*(longlong *)(*(longlong *)((longlong)param_1 + 0x48) + lVar22) + 0xe0
                             ) + 0x130);
          bVar23 = (byte)uVar14;
          uVar14 = uVar14 & 0xff;
          if (bVar23 < (byte)uVar3) {
            uVar14 = uVar3;
          }
          bVar23 = (byte)uVar14;
          if (bVar23 == 2) goto LAB_1408e5f1c;
          lVar22 = lVar22 + 8;
        } while ((longlong)*(int *)((longlong)param_1 + 0x50) * 8 != lVar22);
        goto LAB_1408e5efe;
      }
      pwVar25 = L"Good";
    }
    else {
      bVar23 = *(byte *)(*(longlong *)(local_f0 + 0xe0) + 0x130);
LAB_1408e5efe:
      if (bVar23 < 3) {
        pwVar25 = (wchar_t *)(&PTR_u_Good_14ab2e020)[bVar23];
      }
      else {
        pwVar25 = L"Unknown";
      }
    }
LAB_1408e5f1c:
    FUN_14020fad6(&local_128,pwVar25);
    pwVar25 = L"Enabled";
    if (DAT_14c761efc == 0) {
      pwVar25 = L"Disabled";
    }
    pcVar19 = local_128;
    if (dStack_120._0_4_ == 0) {
      pcVar19 = (code *)&DAT_149dfb77a;
    }
    FUN_140002266(&local_158,L"Streaming Performance: %s (Blocking %s)",pcVar19,pwVar25);
    local_1a0 = (undefined8 *)0x0;
    local_1a8 = &local_100;
    FUN_147dc1086(param_2,&local_158,*(undefined8 *)(DAT_14cb0d2b0 + 0x58),&DAT_149e1e2cc);
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != (code *)0x0) {
      FUN_1400020a8();
    }
    bVar27 = DAT_14cb121f0 != 0;
  }
  if ((DAT_14cb121f8 != 0) || (bVar27)) {
    if (local_f0 == 0) {
      plVar17 = (longlong *)((longlong)param_1 + 0x170);
    }
    else {
      plVar17 = (longlong *)FUN_147dc04d2();
    }
    if (0 < (int)plVar17[1]) {
      FUN_140056680(&local_128,L"Streaming Sources");
      local_1a8 = &local_100;
      local_1a0 = (undefined8 *)0x0;
      FUN_147dc1086(param_2,&local_128,*(undefined8 *)(DAT_14cb0d2b0 + 0x58),&DAT_149e1e2d4);
      local_158 = local_100;
      uStack_150 = dStack_f8;
      local_b8 = 0.0;
      lVar22 = *plVar17;
      if ((longlong)(int)plVar17[1] == 0) {
        iVar13 = 0;
        dVar5 = 10.0;
      }
      else {
        lVar15 = (longlong)(int)plVar17[1] * 0x160 + lVar22;
        do {
          FUN_1400021e4(lVar22,&local_c8);
          if (*(char *)(lVar22 + 0x118) == '\x01') {
            FUN_1400020e8(&local_c8,L" (Replay)",9);
          }
          FUN_147dc1cd8(lVar22,&local_e0);
          local_1a0 = (undefined8 *)&local_b8;
          local_1a8 = (code **)&local_158;
          FUN_147dc1086(param_2,&local_c8,*(undefined8 *)(DAT_14cb0d2b0 + 0x58),&local_e0);
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + 0x160;
        } while (lVar22 != lVar15);
        dVar5 = (double)(local_b8 + 10.0);
        lVar22 = *plVar17;
        iVar13 = (int)plVar17[1];
      }
      uStack_150 = dStack_f8 + 0.0;
      local_158 = (code *)(dVar5 + (double)local_100);
      if (iVar13 != 0) {
        lVar15 = (longlong)iVar13 * 0x160;
        do {
          uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
          FUN_147dd0c90(lVar22,&local_e0);
          pcVar19 = (code *)&DAT_149dfb77a;
          if ((int)local_d8 != 0) {
            pcVar19 = local_e0;
          }
          FUN_140056680(&local_c8,pcVar19);
          local_1a0 = (undefined8 *)0x0;
          local_1a8 = (code **)&local_158;
          FUN_147dc1086(param_2,&local_c8,uVar4,&DAT_149e1e2cc);
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_e0 != (code *)0x0) {
            FUN_1400020a8();
          }
          lVar22 = lVar22 + 0x160;
          lVar15 = lVar15 + -0x160;
        } while (lVar15 != 0);
      }
      dStack_f8 = uStack_150;
      if (local_128 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  lVar22 = local_f0;
  if (DAT_14cb121f0 != 0 || DAT_14cb121fc != 0) {
    local_128 = (code *)0x0;
    dStack_120 = 4.44659081257122e-323;
    lVar15 = 0;
    FUN_1446f48e2(&local_128,0);
    *(longlong *)(local_128 + 0x10) = 0;
    *(longlong *)(local_128 + 0x18) = 0;
    *(longlong *)local_128 = 0;
    *(longlong *)(local_128 + 8) = 0;
    *(undefined4 *)(local_128 + 0x20) = 0;
    if (lVar22 != 0) {
      if (DAT_14cb10130 == 0) {
        local_170 = (code **)&local_158;
        local_158 = FUN_140754f84;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_147da9a76;
        local_180 = FUN_1409f3105;
        local_188 = L"Engine";
        local_190 = 0;
        local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      lVar26 = DAT_14cb10130;
      if (DAT_14c951858 == 0) {
        local_170 = (code **)&local_158;
        local_158 = FUN_1449e2820;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_1468c5283;
        local_180 = FUN_142809da0;
        local_188 = L"Engine";
        local_190 = 0x400000000;
        local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar22 = *(longlong *)(lVar22 + 0x20);
      if (lVar22 == 0) {
        lVar15 = 0;
      }
      else {
        iVar13 = *(int *)(lVar26 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < iVar13) ||
             (lVar15 = lVar22,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
             lVar26 + 0x30)) {
            lVar15 = 0;
          }
        } while ((lVar15 == 0) && (lVar22 = *(longlong *)(lVar22 + 0x20), lVar22 != 0));
      }
    }
    lVar22 = *(longlong *)((longlong)param_1 + 0x20);
    if (lVar22 == 0) {
LAB_1408e6986:
      lVar22 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        local_170 = (code **)&local_158;
        local_158 = FUN_140754f84;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_147da9a76;
        local_180 = FUN_1409f3105;
        local_188 = L"Engine";
        local_190 = 0;
        local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_1408e6986;
    }
    iVar13 = *(int *)(lVar22 + 0x90);
    if ((longlong)iVar13 != 0) {
      lVar22 = *(longlong *)(lVar22 + 0x88);
      lVar26 = 0;
      do {
        plVar17 = *(longlong **)(lVar22 + lVar26);
        if ((((lVar15 == 0) || (lVar16 = (**(code **)(*plVar17 + 0x2f8))(plVar17), lVar15 == lVar16)
             ) && (plVar17 = (longlong *)(**(code **)(*plVar17 + 0x2a0))(plVar17),
                  plVar17 != (longlong *)0x0)) &&
           (plVar17 = (longlong *)(**(code **)(*plVar17 + 8))(plVar17), plVar17 != (longlong *)0x0))
        {
          lVar16 = FUN_14019a59a();
          if ((*(int *)(lVar16 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
              lVar16 + 0x30)) {
            iVar12 = (**(code **)(*plVar17 + 0x2f8))(plVar17);
            *(int *)(local_128 + (longlong)iVar12 * 4) =
                 *(int *)(local_128 + (longlong)iVar12 * 4) + 1;
          }
        }
        lVar26 = lVar26 + 8;
      } while ((longlong)iVar13 * 8 != lVar26);
    }
    *(int *)(local_128 + 4) = DAT_14cae9144 + DAT_14cae90e8;
    local_158 = local_100;
    uStack_150 = dStack_f8;
    local_b8 = 0.0;
    uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    FUN_140056680(&local_c8,L"Streaming Status Legend");
    local_1a8 = (code **)&local_158;
    local_1a0 = (undefined8 *)&local_b8;
    FUN_147dc1086(param_2,&local_c8,uVar4,&DAT_149e1e2d4);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar21 = 0;
    do {
      switch(uVar21 & 0xffffffff) {
      case 0:
        local_cc = -0x10000;
        pwVar25 = L"Unloaded";
        break;
      case 1:
        local_cc = -0x56f81c;
        pwVar25 = L"Unloaded Still Around";
        break;
      case 2:
        local_cc = -0x100;
        pwVar25 = L"Loading";
        break;
      case 3:
        local_cc = -0xff0001;
        pwVar25 = L"Loaded Not Visible";
        break;
      case 4:
        local_cc = -0xffff01;
        pwVar25 = L"Making Visible";
        break;
      case 5:
        local_cc = -0xff0100;
        pwVar25 = L"Loaded Visible";
        break;
      case 6:
        local_cc = -0xff01;
        pwVar25 = L"Preloading";
        break;
      case 7:
        local_cc = -0x71dc95;
        pwVar25 = L"Failed to Load";
        break;
      case 8:
        local_cc = -0x8100;
        pwVar25 = L"Making Invisible";
        break;
      default:
        local_cc = -1;
        pwVar25 = L"Unknown";
      }
      FUN_140002266(&local_e0,L"%d) %s",uVar21 & 0xffffffff,pwVar25);
      pcVar19 = (code *)&DAT_149dfb77a;
      if ((int)local_d8 != 0) {
        pcVar19 = local_e0;
      }
      FUN_140056680(&local_c8,pcVar19);
      if (local_e0 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (uVar21 != 0) {
        FUN_140002266(&local_e0,L" (%d)",*(undefined4 *)(local_128 + uVar21 * 4));
        pcVar19 = (code *)&DAT_149dfb77a;
        if ((int)local_d8 != 0) {
          pcVar19 = local_e0;
        }
        sVar18 = wcslen((wchar_t *)pcVar19);
        FUN_1400020e8(&local_c8,pcVar19,sVar18 & 0xffffffff);
        if (local_e0 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
      puVar20 = &DAT_149dfb77a;
      if ((int)uStack_c0 != 0) {
        puVar20 = local_c8;
      }
      FUN_140056680(&local_e0,puVar20);
      local_198 = (undefined2 **)&local_b8;
      local_1a0 = &local_158;
      local_1a8 = (code **)&DAT_149e1e2cc;
      FUN_147dc11d0(param_2,&local_e0,uVar4,&local_cc);
      if (local_e0 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != 9);
    local_100 = (code *)((double)(local_b8 + 10.0) + (double)local_100);
    if (local_128 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_f0 == 0) goto LAB_1408e5036;
  if ((((DAT_14cb12200 != 0) || (DAT_14cb122e4 != 0)) || (DAT_14cb121f0 != 0)) &&
     (*(longlong *)(local_f0 + 0xd0) != 0)) {
    FUN_1437985e8(*(longlong *)(local_f0 + 0xd0),param_2,&local_100);
  }
  lVar22 = *(longlong *)((longlong)param_1 + 0x20);
  if (lVar22 == 0) {
LAB_1408e68d3:
    lVar22 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_170 = &local_128;
      local_128 = FUN_140754f84;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_147da9a76;
      local_180 = FUN_1409f3105;
      local_188 = L"Engine";
      local_190 = 0;
      local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
      local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
      local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_1408e68d3;
  }
  lVar22 = *(longlong *)(lVar22 + 0x750);
  if (((lVar22 != 0) && (DAT_14c761ed8 == '\x01')) && (DAT_14cb121f0 != 0)) {
    lVar15 = *(longlong *)((longlong)param_1 + 0x20);
    if (lVar15 == 0) {
LAB_1408e6970:
      lVar15 = 0;
    }
    else {
      if (DAT_14cb10130 == 0) {
        local_170 = &local_128;
        local_128 = FUN_140754f84;
        local_160 = FUN_14081d0ea;
        local_168 = FUN_14081d0ea;
        local_178 = &LAB_147da9a76;
        local_180 = FUN_1409f3105;
        local_188 = L"Engine";
        local_190 = 0;
        local_198 = (undefined2 **)CONCAT44(local_198._4_4_,0x10000000);
        local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,8);
        local_1a8 = (code **)CONCAT44(local_1a8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30))
      goto LAB_1408e6970;
    }
    FUN_147db3ba0(lVar22,lVar15,param_2,&local_100);
  }
  if (DAT_14cb12204 != 0) {
    (**(code **)(**(longlong **)(local_f0 + 0xe0) + 0x2c8))
              (*(longlong **)(local_f0 + 0xe0),param_2,&local_100);
  }
LAB_1408e5036:
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e69a6 FUN_1408e69a6 body=87 status=ok
// SIG undefined FUN_1408e69a6(void)

void FUN_1408e69a6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1408e69fe(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408e6a36(param_1);
  return;
}



// FUNCTION 1408e69fe FUN_1408e69fe body=55 status=ok
// SIG undefined FUN_1408e69fe(void)

void FUN_1408e69fe(longlong *param_1)

{
  FUN_1408e6aea(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408e6a36 FUN_1408e6a36 body=55 status=ok
// SIG undefined FUN_1408e6a36(void)

void FUN_1408e6a36(longlong *param_1)

{
  FUN_1408e6a6e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408e6a6e FUN_1408e6a6e body=123 status=ok
// SIG undefined FUN_1408e6a6e(void)

void FUN_1408e6a6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
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



// FUNCTION 1408e6aea FUN_1408e6aea body=533 status=ok
// SIG undefined FUN_1408e6aea(void)

void FUN_1408e6aea(longlong *param_1,int param_2)

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
        if (uVar8 == uVar13) goto LAB_1408e6b1d;
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
      if (*(longlong *)(*param_1 + 0x38 + (longlong)iVar6 * 0x60) != 0) {
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
          if (iVar5 - lVar12 == lVar9) goto LAB_1408e6b1d;
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
LAB_1408e6b1d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
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



// FUNCTION 1408e6d00 FUN_1408e6d00 body=758 status=ok
// SIG undefined FUN_1408e6d00(void)

undefined8 * FUN_1408e6d00(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x5f8,0x10);
  FUN_1408e73e2(puVar3);
  FUN_140c50e9c(local_60,param_2,1);
  FUN_1446f470e(&local_50);
  *puVar3 = local_50;
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  puVar9 = puVar3 + 1;
  if (puVar9 != param_2) {
    iVar6 = *(int *)(param_2 + 1);
    pvVar1 = (void *)*param_2;
    *(int *)(puVar3 + 2) = iVar6;
    if (iVar6 == 0 && *(int *)((longlong)puVar3 + 0x14) == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar9);
      if (iVar6 != 0) {
        memcpy((void *)*puVar9,pvVar1,(longlong)iVar6 * 2);
      }
    }
  }
  plVar5 = (longlong *)(param_1 + 0x3bc8);
  iVar6 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
  }
  iVar6 = FUN_1407db052(plVar5);
  if ((iVar6 == -1) || (((longlong)iVar6 * 0x20 + *plVar5 + 0x10U & 0xffffffffffffffef) == 0)) {
    iVar6 = *(int *)(param_1 + 0x3c20);
    uVar2 = iVar6 + 1;
    *(uint *)(param_1 + 0x3c20) = uVar2;
    if (*(uint *)(param_1 + 0x3c24) < uVar2) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x3c18));
    }
    lVar10 = *(longlong *)(param_1 + 0x3c18);
    lVar12 = (longlong)iVar6 * 0x10;
    puVar9 = (undefined8 *)(lVar10 + lVar12);
    *(undefined8 *)(lVar10 + lVar12) = 0;
    iVar6 = *(int *)(param_2 + 1);
    pvVar1 = (void *)*param_2;
    *(int *)(lVar10 + 8 + lVar12) = iVar6;
    if ((longlong)iVar6 == 0) {
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar9,iVar6,0);
      memcpy((void *)*puVar9,pvVar1,(longlong)iVar6 * 2);
    }
  }
  iVar6 = *(int *)(param_2 + 1);
  uVar8 = 0;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    if (iVar6 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar2 = ((uint)(0x19 < (ushort)puVar4[lVar10] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar10]) -
              0x20;
      uVar11 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar2) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
      lVar10 = lVar10 + 1;
    } while (iVar7 != (int)lVar10);
  }
  plVar5 = (longlong *)FUN_1408e6ff8(plVar5,uVar8,param_2);
  lVar10 = *plVar5;
  if (lVar10 != 0) {
    FUN_140925f20(lVar10);
    FUN_1400020a8(lVar10);
  }
  *plVar5 = (longlong)puVar3;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e6ff8 FUN_1408e6ff8 body=396 status=ok
// SIG undefined FUN_1408e6ff8(void)

longlong FUN_1408e6ff8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  void *_Src;
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_1407db052();
  if (iVar2 != -1) {
    if (*param_1 + (longlong)iVar2 * 0x20 != 0) {
      lVar4 = (longlong)iVar2 * 0x20 + *param_1;
      goto LAB_1408e7120;
    }
  }
  FUN_1408e71f8(param_1,local_48);
  *local_40 = 0;
  iVar2 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_40 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar2,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar2 * 2);
  }
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1408e7186(param_1,param_2,local_40);
  if (cVar1 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar2 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1408e78c4(param_1);
    }
  }
  lVar4 = *param_1 + (longlong)local_48[0] * 0x20;
LAB_1408e7120:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e7186 FUN_1408e7186 body=114 status=ok
// SIG undefined FUN_1408e7186(void)

undefined8 FUN_1408e7186(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1407db052(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14570a04a(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1408e71f8 FUN_1408e71f8 body=489 status=ok
// SIG undefined FUN_1408e71f8(void)

int * FUN_1408e71f8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1408e73e2 FUN_1408e73e2 body=760 status=ok
// SIG undefined FUN_1408e73e2(void)

undefined8 * FUN_1408e73e2(undefined8 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 2;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x1d843;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = &PTR_FUN_149e2b5a8;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c1) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_1408e76da(param_1 + 0x3b);
  FUN_1408e76da(param_1 + 0x56);
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined2 *)((longlong)param_1 + 0x439) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  FUN_1408e76da(param_1 + 0x8a);
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5d9) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  if (DAT_14c759088 == -1) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_141369f9a(&DAT_14c846b20,L"ConfigReplayMethod=",&DAT_14c759088);
    if (cVar2 == '\0') {
      DAT_14c759088 = 1;
      uVar1 = 1;
      goto LAB_1408e761d;
    }
  }
  uVar1 = 2;
  if (DAT_14c759088 != 0) {
    uVar1 = DAT_14c759088 == 1;
  }
LAB_1408e761d:
  *(undefined1 *)((longlong)param_1 + 0x42) = uVar1;
  param_1[0x36] = param_1;
  param_1[0x4a] = param_1;
  param_1[0x65] = param_1;
  param_1[0x85] = param_1;
  param_1[0x99] = param_1;
  if (DAT_14c866d18 != 0) {
    param_1[0xa4] = param_1 + 0x22;
  }
  param_1[0xbe] = 0xbff0000000000000;
  return param_1;
}



// FUNCTION 1408e76da FUN_1408e76da body=149 status=ok
// SIG undefined FUN_1408e76da(void)

undefined8 * FUN_1408e76da(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xe0 | 0x10;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  uVar1 = FUN_1408e7770();
  FUN_1408e7806(uVar1,param_1);
  return param_1;
}



// FUNCTION 1408e7770 FUN_1408e7770 body=149 status=ok
// SIG undefined FUN_1408e7770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1408e7770(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8677e0) {
    FUN_144b3d300(&DAT_14c8677e0);
    if (DAT_14c8677e0 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c8677a0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c8677a0,4000);
      DAT_14c8677c8 = 0;
      _DAT_14c8677d0 = 0;
      _DAT_14c8677d8 = 2;
      atexit(FUN_14277fa73);
      _Init_thread_footer(&DAT_14c8677e0);
    }
  }
  return &DAT_14c8677a0;
}



// FUNCTION 1408e7806 FUN_1408e7806 body=189 status=ok
// SIG undefined FUN_1408e7806(void)

void FUN_1408e7806(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while (((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
              (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
              plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1408e78b4;
          goto LAB_1408e7832;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1408e78b4:
    FUN_14109be94(param_1,0);
  }
LAB_1408e7832:
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408e7845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1408e78c4 FUN_1408e78c4 body=718 status=ok
// SIG undefined FUN_1408e78c4(void)

void FUN_1408e78c4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x20);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x20);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x1c) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 3) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_1408e7b6b;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_1408e7b6b:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e7b94 FUN_1408e7b94 body=617 status=ok
// SIG undefined FUN_1408e7b94(void)

longlong FUN_1408e7b94(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  uVar5 = *param_2;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar4 = DAT_14caf2228;
  if (uVar5 == DAT_14c892cd8) {
    iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
      uVar5 = 0;
    }
    else if (iVar9 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar5 = 1;
    }
    if ((*(int *)(lVar4 + uVar5 * 4) != 0) && (uVar1 = *(uint *)(param_1 + 0x4e), 0 < (int)uVar1)) {
      do {
        lVar4 = *(longlong *)(param_1[0x4d] + -8 + (ulonglong)uVar1 * 8);
        if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
          FUN_1456cec3c(lVar4);
          uVar1 = *(uint *)(param_1 + 0x4e);
        }
        *(uint *)(param_1 + 0x4e) = uVar1 - 1;
        FUN_1408e7dfe(param_1 + 0x4d);
        if (lVar4 == 0) {
LAB_1408e7df5:
          lVar4 = 0;
        }
        else {
          if ((int)param_1[0x44] == *(int *)((longlong)param_1 + 0x24c)) {
LAB_1408e7d5b:
            lVar7 = 0;
          }
          else {
            uVar5 = *param_2;
            uVar1 = (uint)(uVar5 >> 0x10);
            uVar8 = (uint)uVar5 & 0xffff;
            plVar6 = (longlong *)param_1[0x4b];
            if ((longlong *)param_1[0x4b] == (longlong *)0x0) {
              plVar6 = param_1 + 0x4a;
            }
            iVar9 = *(int *)((longlong)plVar6 +
                            (ulonglong)
                            ((int)param_1[0x4c] - 1U &
                            (int)(uVar5 >> 0x20) + ((uint)uVar5 << 0x10 | uVar8) +
                            (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
            if (iVar9 == -1) goto LAB_1408e7d5b;
            do {
              lVar7 = param_1[0x43] + (longlong)iVar9 * 0x80;
              if (*(ulonglong *)(param_1[0x43] + (longlong)iVar9 * 0x80) == uVar5) break;
              iVar9 = *(int *)(lVar7 + 0x78);
              lVar7 = 0;
            } while (iVar9 != -1);
          }
          if (*(longlong *)(lVar7 + 0x18) != *(longlong *)(lVar4 + 0x10)) {
            FUN_144757f48(lVar4,0x40000000);
            uVar1 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            do {
              uVar1 = *(uint *)(lVar7 + 8);
              if ((uVar1 >> 0x15 & 1) != 0) goto LAB_1408e7df5;
              LOCK();
              bVar10 = uVar1 == *(uint *)(lVar7 + 8);
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar1 | 0x200000;
              }
              UNLOCK();
              lVar4 = 0;
            } while (!bVar10);
          }
        }
        uVar1 = *(uint *)(param_1 + 0x4e);
      } while (lVar4 == 0 && 0 < (int)uVar1);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x31) = *(byte *)(lVar4 + 0x31) & 0xf7;
        return lVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001408e7d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (**(code **)(*param_1 + 0x480))(param_1,param_2);
  return lVar4;
}



// FUNCTION 1408e7dfe FUN_1408e7dfe body=64 status=ok
// SIG undefined FUN_1408e7dfe(void)

void FUN_1408e7dfe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1408e7e3e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1408e7e3e FUN_1408e7e3e body=87 status=ok
// SIG undefined FUN_1408e7e3e(void)

ulonglong FUN_1408e7e3e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1408e7e96 FUN_1408e7e96 body=314 status=ok
// SIG undefined FUN_1408e7e96(void)

undefined8 FUN_1408e7e96(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
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
  if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x24c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x250;
    if (*(longlong *)(param_1 + 600) != 0) {
      lVar5 = *(longlong *)(param_1 + 600);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x260) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x218) + (longlong)iVar4 * 0x80;
        if (*(longlong *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar4 * 0x80) == lVar1)
        goto LAB_1408e7f3c;
        iVar4 = *(int *)(lVar5 + 0x78);
      } while (iVar4 != -1);
    }
  }
  lVar5 = 0;
LAB_1408e7f3c:
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = uVar3;
  local_b0 = param_1;
  uVar3 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar6 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar6 = local_58;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e7fd2 FUN_1408e7fd2 body=323 status=ok
// SIG undefined FUN_1408e7fd2(void)

void FUN_1408e7fd2(longlong param_1,char param_2)

{
  longlong lVar1;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1408e812e();
  if ((param_2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x2688), lVar1 != 0)) {
    if (DAT_14cb63950 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464ec72a;
      local_48 = &LAB_1486f5f75;
      local_50 = &LAB_140945686;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
      lVar1 = *(longlong *)(param_1 + 0x2688);
      if (lVar1 == 0) goto LAB_1408e7ff9;
    }
    if ((((DAT_14cb63950 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
        DAT_14cb63950 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_1408e7ff9:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408e812e FUN_1408e812e body=119 status=ok
// SIG undefined FUN_1408e812e(void)

void FUN_1408e812e(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140696702();
  plVar1 = *(longlong **)(param_1 + 0xd00);
  if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x60] != param_2)) {
    *(char *)(plVar1 + 0x60) = param_2;
    local_20 = &local_30;
    local_28 = FUN_143d49e3a;
    local_30 = plVar1;
    (**(code **)(*plVar1 + 0x40))();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e81a6 FUN_1408e81a6 body=2269 status=ok
// SIG undefined FUN_1408e81a6(void)

void FUN_1408e81a6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined2 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined2 *local_a8;
  longlong local_a0;
  longlong local_98;
  uint *local_90;
  uint local_88;
  int iStack_84;
  undefined2 *local_80;
  int local_78;
  uint *local_70;
  uint local_68;
  uint *local_60;
  uint local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar4 = FUN_1401144ce(param_2);
  if ((param_3 == 0) || (cVar4 == '\0')) goto LAB_1408e8913;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
    local_58 = DAT_14c948620;
    local_60 = DAT_14c948618;
LAB_1408e8807:
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    lVar16 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar16 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar16 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 3)) {
      local_58 = DAT_14c948620;
      local_60 = DAT_14c948618;
    }
    else {
      local_58 = *(uint *)(lVar16 + 0x20);
      local_60 = *(uint **)(lVar16 + 0x18);
    }
    lVar16 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar16 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar16 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 4)) goto LAB_1408e8807;
    local_68 = *(uint *)(lVar16 + 0x2c);
    local_70 = *(uint **)(lVar16 + 0x24);
  }
  uVar6 = (uint)local_60;
  if (local_58 != 0) {
    uVar6 = local_58 >> 0xd ^ (uint)local_60 - local_58;
    uVar12 = uVar6 << 8 ^ (-0x61c88647 - local_58) - uVar6;
    uVar15 = uVar12 >> 0xd ^ (local_58 - uVar6) - uVar12;
    uVar8 = uVar15 >> 0xc ^ (uVar6 - uVar12) - uVar15;
    uVar6 = uVar8 << 0x10 ^ (uVar12 - uVar15) - uVar8;
    uVar12 = uVar6 >> 5 ^ (uVar15 - uVar8) - uVar6;
    uVar8 = uVar12 >> 3 ^ (uVar8 - uVar6) - uVar12;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar12) - uVar8;
    uVar6 = uVar6 >> 0xf ^ uVar12 - (uVar8 + uVar6);
  }
  iVar5 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar6,&local_60);
  if (iVar5 == -1) goto LAB_1408e8913;
  lVar16 = *(longlong *)(param_1 + 0x78);
  if ((lVar16 + (longlong)iVar5 * 0x70 == 0) ||
     (plVar23 = (longlong *)(lVar16 + (longlong)iVar5 * 0x70 + 0x10), plVar23 == (longlong *)0x0))
  goto LAB_1408e8913;
  uVar13 = (ulonglong)local_70 & 0xffffffff;
  if (local_68 != 0) {
    uVar6 = FUN_144a78877(uVar13,local_68);
    uVar13 = (ulonglong)uVar6;
  }
  iVar5 = FUN_144a24328(plVar23,uVar13,&local_70);
  if (iVar5 == -1) goto LAB_1408e8913;
  if ((*plVar23 + (longlong)iVar5 * 0x68 == 0) ||
     (plVar23 = (longlong *)(*plVar23 + (longlong)iVar5 * 0x68 + 0x10), plVar23 == (longlong *)0x0))
  goto LAB_1408e8913;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
LAB_1408e881d:
    local_88 = DAT_14c948620;
    puVar7 = DAT_14c948618;
  }
  else {
    lVar16 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar16 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar16 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 5)) goto LAB_1408e881d;
    local_88 = *(uint *)(lVar16 + 0x38);
    puVar7 = *(uint **)(lVar16 + 0x30);
  }
  local_90._0_4_ = (uint)puVar7;
  if (local_88 != 0) {
    uVar6 = local_88 >> 0xd ^ (uint)local_90 - local_88;
    uVar12 = uVar6 << 8 ^ (-0x61c88647 - local_88) - uVar6;
    uVar15 = uVar12 >> 0xd ^ (local_88 - uVar6) - uVar12;
    uVar8 = uVar15 >> 0xc ^ (uVar6 - uVar12) - uVar15;
    uVar6 = uVar8 << 0x10 ^ (uVar12 - uVar15) - uVar8;
    uVar12 = uVar6 >> 5 ^ (uVar15 - uVar8) - uVar6;
    uVar8 = uVar12 >> 3 ^ (uVar8 - uVar6) - uVar12;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar12) - uVar8;
    local_90._0_4_ = uVar6 >> 0xf ^ uVar12 - (uVar8 + uVar6);
  }
  uVar6 = (uint)local_90;
  local_90 = puVar7;
  iVar5 = FUN_140727b76(plVar23,uVar6,&local_90);
  if (iVar5 != -1) {
    lVar16 = *plVar23 + (longlong)iVar5 * 0xa8;
    if ((lVar16 != 0) && ((longlong)iVar5 * 0xa8 + *plVar23 != -0x10)) {
      local_4c = 0;
      local_50 = *(uint *)(param_3 + 0xc);
      if ((int)local_50 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((local_50 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      iVar5 = *(int *)(lVar21 + 0x10);
      local_a0 = lVar16;
      if (*(int *)(lVar21 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar5 = *(int *)(lVar21 + 0x10);
        bVar24 = iVar5 == 0;
        if (bVar24) {
          *(int *)(lVar21 + 0x10) = iVar20;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar24) {
          iVar5 = iVar20;
        }
      }
      local_90 = &local_50;
      local_4c = iVar5;
      FUN_1408e8afe(lVar16 + 0x20);
      FUN_1400bbfc4(&local_90,param_3);
      if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
        uVar6 = (uint)((ulonglong)CONCAT44(iStack_84,local_88) >> 0x10);
        uVar8 = (uint)((ulonglong)local_90 >> 0x10);
        uVar12 = (uint)local_90 & 0xffff;
        uVar12 = ((uint)local_90 << 0x10 | uVar12) + (int)((ulonglong)local_90 >> 0x20) +
                 (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4);
        uVar12 = (uVar12 >> 2) + 0x9e3779b9 +
                 (local_88 << 0x10 | local_88 & 0xffff) + iStack_84 +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + ((local_88 & 0xffff) >> 4) + uVar12 * 0x40 ^
                 uVar12;
        uVar8 = uVar12 >> 0xd ^ -uVar12;
        uVar6 = uVar8 << 8 ^ (-0x61c88647 - uVar12) - uVar8;
        uVar12 = uVar6 >> 0xd ^ (uVar12 - uVar8) - uVar6;
        uVar15 = uVar12 >> 0xc ^ (uVar8 - uVar6) - uVar12;
        uVar6 = uVar15 << 0x10 ^ (uVar6 - uVar12) - uVar15;
        uVar8 = uVar6 >> 5 ^ (uVar12 - uVar15) - uVar6;
        uVar18 = uVar8 >> 3 ^ (uVar15 - uVar6) - uVar8;
        uVar12 = uVar18 << 10 ^ (uVar6 - uVar8) - uVar18;
        uVar15 = 0;
        uVar6 = local_78 - 1;
        if (local_78 == 0) {
          uVar6 = uVar15;
        }
        if (0 < (int)uVar6) {
          puVar19 = local_80;
          if (local_78 == 0) {
            puVar19 = &DAT_149dfb77a;
          }
          lVar16 = 0;
          uVar15 = 0;
          do {
            uVar9 = ((uint)(ushort)puVar19[lVar16] +
                    (uint)(0x19 < (ushort)puVar19[lVar16] - 0x61) * 0x20) - 0x20;
            uVar15 = uVar15 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar9) & 0xff) * 4);
            uVar15 = uVar15 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
            lVar16 = lVar16 + 1;
          } while (uVar6 != (uint)lVar16);
        }
        uVar6 = uVar15 >> 0xd ^ (uVar12 >> 0xf ^ uVar8 - (uVar18 + uVar12)) - uVar15;
        uVar12 = uVar6 << 8 ^ (-0x61c88647 - uVar15) - uVar6;
        uVar8 = uVar12 >> 0xd ^ (uVar15 - uVar6) - uVar12;
        uVar15 = uVar8 >> 0xc ^ (uVar6 - uVar12) - uVar8;
        uVar6 = uVar15 << 0x10 ^ (uVar12 - uVar8) - uVar15;
        uVar12 = uVar6 >> 5 ^ (uVar8 - uVar15) - uVar6;
        uVar8 = uVar12 >> 3 ^ (uVar15 - uVar6) - uVar12;
        uVar6 = uVar8 << 10 ^ (uVar6 - uVar12) - uVar8;
        lVar16 = param_1 + 0x100;
        if (*(longlong *)(param_1 + 0x108) != 0) {
          lVar16 = *(longlong *)(param_1 + 0x108);
        }
        iVar5 = *(int *)(lVar16 + ((longlong)(int)(uVar6 >> 0xf ^ uVar12 - (uVar8 + uVar6)) &
                                  (longlong)*(int *)(param_1 + 0x110) - 1U) * 4);
        local_98 = param_1;
        if (iVar5 != -1) {
          plVar23 = (longlong *)(param_1 + 200);
          lVar21 = *plVar23;
LAB_1408e8730:
          lVar17 = (longlong)iVar5 * 0x50;
          lVar1 = lVar21 + lVar17;
          if ((*(uint **)(lVar21 + lVar17) == local_90) &&
             (*(longlong *)(lVar1 + 8) == CONCAT44(iStack_84,local_88))) {
            if (*(int *)(lVar1 + 0x18) == local_78) {
              if (1 < local_78) {
                local_a8 = local_80;
                local_b0 = *(longlong *)(lVar1 + 0x10);
                lVar22 = 0;
                do {
                  uVar2 = *(ushort *)(local_b0 + lVar22);
                  uVar3 = *(ushort *)((longlong)local_80 + lVar22);
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) {
                      iVar20 = (uint)uVar2 - (uint)uVar3;
                      goto LAB_1408e87c8;
                    }
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                    goto code_r0x0001408e87c5;
                  }
                  lVar22 = lVar22 + 2;
                } while( true );
              }
            }
            else if (*(int *)(lVar1 + 0x18) + local_78 != 1) goto LAB_1408e8745;
            goto LAB_1408e886a;
          }
          goto LAB_1408e8745;
        }
      }
      goto LAB_1408e88a0;
    }
  }
  goto LAB_1408e88be;
code_r0x0001408e87c5:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1408e87c8:
  if (iVar20 != 0) {
LAB_1408e8745:
    iVar5 = *(int *)(lVar1 + 0x48);
    if (iVar5 == -1) goto LAB_1408e88a0;
    goto LAB_1408e8730;
  }
LAB_1408e886a:
  iVar20 = *(int *)(lVar16 + (longlong)*(int *)(lVar1 + 0x4c) * 4);
  if (iVar20 == iVar5) {
    piVar10 = (int *)(lVar16 + (longlong)*(int *)(lVar1 + 0x4c) * 4);
  }
  else {
    do {
      piVar10 = (int *)(lVar21 + (longlong)iVar20 * 0x50 + 0x48);
      iVar20 = *piVar10;
    } while (iVar20 != iVar5);
  }
  *piVar10 = *(int *)(lVar1 + 0x48);
  if (*(longlong *)(*plVar23 + 0x10 + lVar17) != 0) {
    FUN_1400020a8();
  }
  FUN_1408e8a84(plVar23,iVar5);
LAB_1408e88a0:
  if (0 < *(int *)(local_a0 + 0x78)) {
    iVar5 = *(int *)(param_1 + 0x1a8);
    *(uint *)(param_1 + 0x1a8) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1ac) < iVar5 + 1U) {
      FUN_1408e8c18((longlong *)(param_1 + 0x1a0),iVar5);
    }
    FUN_140ac173c((longlong)iVar5 * 0x24 + *(longlong *)(param_1 + 0x1a0),param_2);
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1408e88be:
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6)) &&
      ((int)uVar6 < DAT_14c9647dc)) &&
     (((puVar14 = (undefined8 *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       puVar14 != (undefined8 *)0x0 && (*(int *)(puVar14 + 2) == *(int *)(param_1 + 0xc))) &&
      ((*(uint *)(puVar14 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar14 + 1) & 0x10200000) == 0) {
      uVar11 = *puVar14;
    }
    else {
      uVar11 = 0;
    }
    FUN_1405f658a(uVar11);
  }
LAB_1408e8913:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408e8a84 FUN_1408e8a84 body=122 status=ok
// SIG undefined FUN_1408e8a84(void)

void FUN_1408e8a84(longlong *param_1,int param_2)

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



// FUNCTION 1408e8afe FUN_1408e8afe body=281 status=ok
// SIG undefined FUN_1408e8afe(void)

void FUN_1408e8afe(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar8 = param_1;
    }
    bVar4 = FUN_1401246e4(lVar8,*param_2);
    iVar6 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar1) {
        iVar2 = iVar1;
      }
      lVar7 = lVar8 + 8 + lVar9 * 8;
      lVar10 = lVar9;
      iVar12 = iVar11;
      do {
        lVar10 = lVar10 + 1;
        iVar3 = iVar2;
        if (lVar13 <= lVar10) break;
        bVar5 = FUN_1401246e4(lVar7,*param_2);
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar6 != iVar11) {
          memmove((void *)(lVar8 + (longlong)iVar6 * 8),(void *)(lVar8 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar6 = iVar6 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 0x18) = iVar6;
  }
  return;
}



// FUNCTION 1408e8c18 FUN_1408e8c18 body=373 status=ok
// SIG undefined FUN_1408e8c18(void)

void FUN_1408e8c18(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x24;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408e8ca1;
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
LAB_1408e8ca1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x24)) {
    uVar7 = uVar5 / 0x24 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x24,4);
  return;
}



// FUNCTION 1408e8d8e FUN_1408e8d8e body=862 status=ok
// SIG undefined FUN_1408e8d8e(void)

undefined8 *
FUN_1408e8d8e(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,float *param_10,float *param_11,float *param_12,undefined8 param_13,
             undefined1 param_14,char param_15,float param_16)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_149f5f4a8;
  if (param_15 == '\0') {
    param_1[1] = 0;
    param_1[1] = *param_5;
    *param_5 = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_5 + 1);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_5 + 0xc);
    param_5[1] = 0;
  }
  else {
    FUN_1408e91f8(param_1 + 1,param_5,param_2);
  }
  FUN_1408e9172(param_1 + 3,param_1 + 1);
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  local_98 = param_1[3];
  local_90 = *(undefined4 *)(param_1 + 4);
  local_88 = DAT_14c84635c;
  local_a0 = 0;
  local_a8 = 0x10;
  local_b0._0_4_ = param_4;
  local_b8._0_4_ = param_3;
  FUN_140a9b934(param_1 + 6,&local_88,param_6);
  param_1[6] = &PTR_FUN_149f57478;
  param_1[0xd] = 0x40dd0c55447a0000;
  param_1[0xe] = 0;
  fVar3 = param_10[1];
  if (param_16 <= param_10[1]) {
    fVar3 = param_16;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = *param_10;
  if (param_16 <= *param_10) {
    fVar4 = param_16;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  bVar2 = 1;
  bVar1 = 1;
  if ((*(float *)(param_1 + 0xb) == fVar4) && (!NAN(*(float *)(param_1 + 0xb)) && !NAN(fVar4))) {
    bVar1 = -(*(float *)((longlong)param_1 + 0x5c) != fVar3) & 1;
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | bVar1;
  *(float *)(param_1 + 0xb) = fVar4;
  *(float *)((longlong)param_1 + 0x5c) = fVar3;
  local_b8._0_4_ = *(undefined4 *)(param_1 + 5);
  local_b0._0_4_ = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_98 = param_1[3];
  local_90 = *(undefined4 *)(param_1 + 4);
  fVar3 = *param_11;
  fVar4 = param_11[1];
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  local_88 = CONCAT44(fVar4,fVar3);
  local_a0 = 0;
  local_a8 = 0x10;
  FUN_140a9b934(param_1 + 0xf,&local_88,param_7,&local_98);
  local_98 = param_1[3];
  local_90 = *(undefined4 *)(param_1 + 4);
  local_88 = DAT_14c84635c;
  local_a0 = 0;
  local_a8 = 0x10;
  local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)((longlong)param_1 + 0x2c));
  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 5));
  FUN_140a9b934(param_1 + 0x16,&local_88,param_8,&local_98);
  param_1[0x16] = &PTR_FUN_149f57478;
  param_1[0x1d] = 0x40dd0c55447a0000;
  param_1[0x1e] = 0;
  fVar3 = param_12[1];
  if (param_16 <= param_12[1]) {
    fVar3 = param_16;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = *param_12;
  if (param_16 <= *param_12) {
    fVar4 = param_16;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if ((*(float *)(param_1 + 0x1b) == fVar4) && (!NAN(*(float *)(param_1 + 0x1b)) && !NAN(fVar4))) {
    bVar2 = -(*(float *)((longlong)param_1 + 0xdc) != fVar3) & 1;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | bVar2;
  *(float *)(param_1 + 0x1b) = fVar4;
  *(float *)((longlong)param_1 + 0xdc) = fVar3;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)param_1[0x12];
  local_a8 = CONCAT31(local_a8._1_3_,param_14);
  local_b0 = param_13;
  local_b8 = param_9;
  FUN_1408e90ee(param_1,param_2,*(undefined4 *)(param_1 + 5),
                *(undefined4 *)((longlong)param_1 + 0x2c));
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e90ee FUN_1408e90ee body=131 status=ok
// SIG undefined FUN_1408e90ee(void)

void FUN_1408e90ee(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == '\x01') {
    FUN_1408e93e8(param_2,param_3,param_4,param_5,param_6,param_1 + 8,param_1 + 0xf8);
  }
  else {
    if (param_7 != '\x02') {
      FUN_146dda91c(param_2);
      return;
    }
    FUN_146dda9fd(param_3,param_4,param_5,param_6,param_1 + 8,param_1 + 0xf8);
  }
  return;
}



// FUNCTION 1408e9172 FUN_1408e9172 body=132 status=ok
// SIG undefined FUN_1408e9172(void)

longlong * FUN_1408e9172(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_1401adc10(param_1);
      lVar3 = param_2[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar2 = *param_2;
        lVar4 = 0;
        do {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_1402e69d2(param_1,iVar1);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4);
          lVar4 = lVar4 + 0x10;
        } while ((longlong)(int)lVar3 * 0x10 != lVar4);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1408e91f8 FUN_1408e91f8 body=268 status=ok
// SIG undefined FUN_1408e91f8(void)

longlong * FUN_1408e91f8(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = (int)param_2[1];
  if (-1 < iVar4) {
    if (iVar4 != 0) {
      FUN_1408e9306(param_1);
      lVar10 = param_2[1];
      if ((longlong)(int)lVar10 != 0) {
        lVar5 = *param_2;
        lVar11 = 0;
        do {
          lVar6 = *(longlong *)(param_3 + 0x90);
          fVar3 = *(float *)(lVar6 + (longlong)*(int *)(lVar5 + lVar11) * 4);
          if (((((fVar3 != 0.0) || (NAN(fVar3))) ||
               (fVar3 = *(float *)(lVar6 + (longlong)*(int *)(lVar5 + 4 + lVar11) * 4), fVar3 != 0.0
               )) || ((NAN(fVar3) ||
                      (fVar3 = *(float *)(lVar6 + (longlong)*(int *)(lVar5 + 8 + lVar11) * 4),
                      fVar3 != 0.0)))) ||
             ((NAN(fVar3) ||
              ((fVar3 = *(float *)(lVar6 + (longlong)*(int *)(lVar5 + 0xc + lVar11) * 4),
               fVar3 != 0.0 || (NAN(fVar3))))))) {
            iVar4 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
              FUN_1403412ae(param_1,iVar4);
            }
            puVar1 = (undefined4 *)(lVar5 + lVar11);
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)(*param_1 + (longlong)iVar4 * 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar10 * 0x10 != lVar11);
      }
    }
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1408e9306(param_1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1408e9306 FUN_1408e9306 body=226 status=ok
// SIG undefined FUN_1408e9306(void)

void FUN_1408e9306(longlong param_1,int param_2)

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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1408e93e8 FUN_1408e93e8 body=539 status=ok
// SIG undefined FUN_1408e93e8(void)

void FUN_1408e93e8(longlong param_1,int param_2,int param_3,longlong *param_4,float *param_5,
                  undefined8 *param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  if ((int)param_4[1] != param_3) {
    if ((*param_5 == 1.0) && (!NAN(*param_5))) {
      FUN_144aa29e6(param_7,*(undefined4 *)(param_6 + 1),1);
      return;
    }
  }
  FUN_14005ea14(param_7);
  if ((longlong)*(int *)(param_6 + 1) != 0) {
    piVar3 = (int *)*param_6;
    piVar4 = piVar3 + (longlong)*(int *)(param_6 + 1) * 4;
    do {
      fVar5 = *param_5;
      if ((int)param_4[1] == param_3) {
        fVar5 = fVar5 + (*(float *)(*param_4 + ((longlong)*piVar3 - (longlong)param_2) * 4) +
                        *(float *)(*param_4 + ((longlong)piVar3[1] - (longlong)param_2) * 4)) *
                        (param_5[1] - fVar5) * 0.5;
      }
      lVar2 = *(longlong *)(param_1 + 0x28);
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar6 = (float)FUN_1408e9604(lVar2 + (longlong)*piVar3 * 0xc,lVar2 + (longlong)piVar3[1] * 0xc
                                   ,lVar2 + (longlong)piVar3[2] * 0xc,
                                   lVar2 + (longlong)piVar3[3] * 0xc);
      fVar6 = fVar6 * (1.0 - fVar5);
      if (3.1415927 <= fVar6) {
        fVar6 = 3.1415927;
      }
      if (fVar6 <= -3.1415927) {
        fVar6 = -3.1415927;
      }
      iVar1 = (int)param_7[1];
      *(uint *)(param_7 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_7 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_7,iVar1);
      }
      *(float *)(*param_7 + (longlong)iVar1 * 4) = fVar6;
      piVar3 = piVar3 + 4;
    } while (piVar3 != piVar4);
  }
  return;
}



// FUNCTION 1408e9604 FUN_1408e9604 body=1275 status=ok
// SIG undefined FUN_1408e9604(void)

undefined8 FUN_1408e9604(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar7 = param_2[2];
  fVar13 = fVar7 - param_3[2];
  fVar3 = *param_2;
  fVar8 = param_2[1];
  fVar15 = fVar8 - param_3[1];
  fVar16 = fVar3 - *param_3;
  fVar14 = param_1[2];
  fVar18 = fVar14 - param_3[2];
  fVar10 = *param_1;
  fVar6 = param_1[1];
  fVar9 = fVar6 - param_3[1];
  fVar11 = fVar10 - *param_3;
  fVar12 = fVar11 * fVar15 - fVar16 * fVar9;
  fVar11 = fVar18 * fVar16 - fVar13 * fVar11;
  fVar13 = fVar9 * fVar13 - fVar18 * fVar15;
  fVar9 = fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11;
  if (((fVar9 != 1.0) || (fVar15 = fVar12, fVar16 = fVar13, fVar18 = fVar11, NAN(fVar9))) &&
     (fVar15 = DAT_14c846338, fVar16 = (float)DAT_14c846330, fVar18 = DAT_14c846330._4_4_,
     1e-08 <= fVar9)) {
    fVar9 = 1.0 / SQRT(fVar9);
    fVar15 = fVar12 * fVar9;
    fVar16 = fVar13 * fVar9;
    fVar18 = fVar11 * fVar9;
  }
  fVar17 = fVar14 - param_4[2];
  fVar19 = fVar6 - param_4[1];
  fVar20 = fVar10 - *param_4;
  fVar9 = fVar7 - param_4[2];
  fVar11 = fVar8 - param_4[1];
  fVar13 = fVar3 - *param_4;
  fVar12 = fVar13 * fVar19 - fVar20 * fVar11;
  fVar13 = fVar9 * fVar20 - fVar17 * fVar13;
  fVar9 = fVar11 * fVar17 - fVar9 * fVar19;
  fVar11 = fVar12 * fVar12 + fVar9 * fVar9 + fVar13 * fVar13;
  if (((fVar11 != 1.0) || (fVar17 = fVar9, fVar19 = fVar12, fVar20 = fVar13, NAN(fVar11))) &&
     (fVar17 = (float)DAT_14c846330, fVar19 = DAT_14c846338, fVar20 = DAT_14c846330._4_4_,
     1e-08 <= fVar11)) {
    fVar11 = 1.0 / SQRT(fVar11);
    fVar17 = fVar9 * fVar11;
    fVar19 = fVar12 * fVar11;
    fVar20 = fVar13 * fVar11;
  }
  fVar7 = fVar7 - fVar14;
  fVar8 = fVar8 - fVar6;
  fVar3 = fVar3 - fVar10;
  fVar14 = fVar7 * fVar7 + fVar3 * fVar3 + fVar8 * fVar8;
  if (((fVar14 != 1.0) || (fVar10 = fVar3, fVar6 = fVar7, fVar9 = fVar8, NAN(fVar14))) &&
     (fVar10 = (float)DAT_14c846330, fVar6 = DAT_14c846338, fVar9 = DAT_14c846330._4_4_,
     1e-08 <= fVar14)) {
    fVar14 = 1.0 / SQRT(fVar14);
    fVar10 = fVar3 * fVar14;
    fVar6 = fVar7 * fVar14;
    fVar9 = fVar8 * fVar14;
  }
  fVar3 = fVar15 * fVar19 + fVar16 * fVar17 + fVar18 * fVar20;
  fVar7 = fVar3;
  if (1.0 <= fVar3) {
    fVar7 = 1.0;
  }
  fVar14 = (fVar20 * fVar15 - fVar18 * fVar19) * fVar10 +
           (fVar19 * fVar16 - fVar15 * fVar17) * fVar9 + (fVar17 * fVar18 - fVar16 * fVar20) * fVar6
  ;
  fVar8 = fVar14;
  if (1.0 <= fVar14) {
    fVar8 = 1.0;
  }
  uVar1 = -(uint)(-1.0 < fVar7);
  fVar3 = (float)(~-(uint)(fVar3 < 1.0) & 0x3f800000 |
                 (~uVar1 & 0x3f800000 | (uint)ABS(fVar3) & uVar1) & -(uint)(fVar3 < 1.0));
  uVar2 = -(uint)(-1.0 < fVar8);
  fVar14 = (float)(~-(uint)(fVar14 < 1.0) & 0x3f800000 |
                  (~uVar2 & 0x3f800000 | (uint)ABS(fVar14) & uVar2) & -(uint)(fVar14 < 1.0));
  fVar10 = fVar14;
  if (fVar14 <= fVar3) {
    fVar10 = fVar3;
  }
  uVar4 = 0;
  uVar5 = 0;
  if ((fVar10 != 0.0) || (NAN(fVar10))) {
    fVar6 = fVar3;
    if (fVar14 <= fVar3) {
      fVar6 = fVar14;
    }
    fVar6 = fVar6 / fVar10;
    fVar10 = fVar6 * fVar6;
    fVar6 = ((((((fVar10 * 0.007212885 + -0.03505968) * fVar10 + 0.08167588) * fVar10 + -0.13374658)
               * fVar10 + 0.19856563) * fVar10 + -0.33325) * fVar10 + 1.0) * fVar6;
    fVar3 = (float)(-(uint)(fVar3 < fVar14) & (uint)(1.5707964 - fVar6) |
                   ~-(uint)(fVar3 < fVar14) & (uint)fVar6);
    fVar14 = 3.1415927 - fVar3;
    uVar1 = ~-(uint)(0.0 <= fVar7) & (uint)fVar14 |
            (~uVar1 & (uint)fVar14 | uVar1 & (uint)fVar3) & -(uint)(0.0 <= fVar7);
    uVar4 = uVar1 ^ 0x80000000;
    uVar5 = 0x80000000;
    uVar4 = ~-(uint)(0.0 <= fVar8) & uVar4 |
            (~uVar2 & uVar4 | uVar2 & uVar1) & -(uint)(0.0 <= fVar8);
  }
  return CONCAT44(uVar5,uVar4);
}



// FUNCTION 1408e9b00 FUN_1408e9b00 body=302 status=ok
// SIG undefined FUN_1408e9b00(void)

undefined4 FUN_1408e9b00(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
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
  uVar2 = FUN_1408e9c30();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1447f69b6(lVar1 + 0x5900);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408e9c30 FUN_1408e9c30 body=85 status=ok
// SIG undefined FUN_1408e9c30(void)

undefined8 FUN_1408e9c30(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) | 1;
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (0.0 < *(float *)(lVar1 + 0xac)) {
    fVar2 = (float)FUN_140284a0c(param_1);
    lVar1 = *(longlong *)(param_1 + 0x178);
    if (fVar2 < *(float *)(lVar1 + 0xac)) {
      return 0;
    }
  }
  *(short *)(param_1 + 0x328) = *(short *)(param_1 + 0x328) + 1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1408e9c86 FUN_1408e9c86 body=226 status=ok
// SIG undefined FUN_1408e9c86(void)

void FUN_1408e9c86(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408e9d68(param_1,param_2);
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



// FUNCTION 1408e9d68 FUN_1408e9d68 body=1365 status=ok
// SIG undefined FUN_1408e9d68(void)

void FUN_1408e9d68(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415771ec();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f0808);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408ea2be FUN_1408ea2be body=226 status=ok
// SIG undefined FUN_1408ea2be(void)

void FUN_1408ea2be(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408ea3a0(param_1,param_2);
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



// FUNCTION 1408ea3a0 FUN_1408ea3a0 body=1365 status=ok
// SIG undefined FUN_1408ea3a0(void)

void FUN_1408ea3a0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14157f55c();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05df0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408ea8f6 FUN_1408ea8f6 body=226 status=ok
// SIG undefined FUN_1408ea8f6(void)

void FUN_1408ea8f6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408ea9d8(param_1,param_2);
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



// FUNCTION 1408ea9d8 FUN_1408ea9d8 body=1365 status=ok
// SIG undefined FUN_1408ea9d8(void)

void FUN_1408ea9d8(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141577412();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f6040);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408eaf2e FUN_1408eaf2e body=226 status=ok
// SIG undefined FUN_1408eaf2e(void)

void FUN_1408eaf2e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408eb010(param_1,param_2);
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



// FUNCTION 1408eb010 FUN_1408eb010 body=1365 status=ok
// SIG undefined FUN_1408eb010(void)

void FUN_1408eb010(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14157b36c();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f61d8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408eb566 FUN_1408eb566 body=226 status=ok
// SIG undefined FUN_1408eb566(void)

void FUN_1408eb566(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408eb648(param_1,param_2);
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



// FUNCTION 1408eb648 FUN_1408eb648 body=1365 status=ok
// SIG undefined FUN_1408eb648(void)

void FUN_1408eb648(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141595c2a();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f62e8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408ebb9e FUN_1408ebb9e body=226 status=ok
// SIG undefined FUN_1408ebb9e(void)

void FUN_1408ebb9e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408ebc80(param_1,param_2);
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



// FUNCTION 1408ebc80 FUN_1408ebc80 body=1365 status=ok
// SIG undefined FUN_1408ebc80(void)

void FUN_1408ebc80(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415805c8();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f6370);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408ec1d6 FUN_1408ec1d6 body=226 status=ok
// SIG undefined FUN_1408ec1d6(void)

void FUN_1408ec1d6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1408ec2b8(param_1,param_2);
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



// FUNCTION 1408ec2b8 FUN_1408ec2b8 body=1365 status=ok
// SIG undefined FUN_1408ec2b8(void)

void FUN_1408ec2b8(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
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
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141572276();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9f63f8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
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



// FUNCTION 1408ec82e FUN_1408ec82e body=121 status=ok
// SIG undefined FUN_1408ec82e(void)

void FUN_1408ec82e(undefined8 *param_1,undefined8 param_2)

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
  FUN_1408ec8a8(*param_1,&local_2c,param_1 + 3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14006fee2(*param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1408ec8a8 FUN_1408ec8a8 body=488 status=ok
// SIG undefined FUN_1408ec8a8(void)

void FUN_1408ec8a8(longlong param_1,uint *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  FUN_1447a4a8e(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x160);
  uVar4 = *param_2;
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar12 = param_2[2];
  }
  else {
    uVar12 = param_2[2];
    iVar8 = (uVar4 << 0x10 | uVar4 & 0xffff) + ((uVar4 & 0xffff) >> 4) +
            ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + uVar12;
    uVar9 = ~(iVar8 * 0x8000) + iVar8;
    uVar9 = ((int)uVar9 >> 10 ^ uVar9) * 9;
    uVar9 = (int)uVar9 >> 6 ^ uVar9;
    uVar9 = ~(uVar9 << 0xb) + uVar9;
    uVar11 = (ulonglong)
             *(ushort *)
              (*(longlong *)(param_1 + 0x170) +
              (longlong)(int)(*(int *)(param_1 + 0x178) - 1U & ((int)uVar9 >> 0x10 ^ uVar9)) * 2);
    if (uVar11 != 0) {
      uVar11 = uVar11 + 0xffffffff;
      lVar10 = *plVar1;
      do {
        uVar11 = uVar11 & 0xffffffff;
        if ((((*(uint *)(lVar10 + uVar11 * 0x18) == uVar4) &&
             (*(uint *)(lVar10 + 8 + uVar11 * 0x18) == uVar12)) &&
            (lVar2 = lVar10 + uVar11 * 0x18, param_2[3] == (int)*(short *)(lVar2 + 0xc))) &&
           (*(ushort *)(lVar2 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          *(undefined8 *)(lVar10 + 0x10 + uVar11 * 0x18) = *param_3;
          return;
        }
        uVar3 = *(ushort *)(lVar10 + 0xe + uVar11 * 0x18);
        uVar11 = (ulonglong)uVar3 & 0x3fff;
      } while ((uVar3 & 0x3fff) != 0);
    }
  }
  uVar9 = param_2[1];
  uVar7 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = *param_3;
  iVar8 = *(int *)(param_1 + 0x168);
  lVar10 = (longlong)iVar8;
  *(uint *)(param_1 + 0x168) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar8 + 1U) {
    FUN_1417dfeee(plVar1,iVar8);
  }
  lVar2 = *(longlong *)(param_1 + 0x160);
  *(uint *)(lVar2 + lVar10 * 0x18) = uVar4;
  *(uint *)(lVar2 + 4 + lVar10 * 0x18) = uVar9;
  *(uint *)(lVar2 + 8 + lVar10 * 0x18) = uVar12;
  *(short *)(lVar2 + 0xc + lVar10 * 0x18) = (short)uVar7;
  *(short *)(lVar2 + 0xe + lVar10 * 0x18) = (short)(uVar5 << 0xe);
  *(undefined8 *)(lVar2 + 0x10 + lVar10 * 0x18) = uVar6;
  uVar4 = *(uint *)(param_1 + 0x168);
  iVar8 = 1;
  if (3 < uVar4) {
    uVar11 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (iVar8 != *(int *)(param_1 + 0x178)) {
    FUN_14008ee6c(plVar1,iVar8);
    return;
  }
  FUN_14008f016(plVar1,uVar4 - 1);
  return;
}



// FUNCTION 1408eca96 FUN_1408eca96 body=57 status=ok
// SIG undefined FUN_1408eca96(void)

void FUN_1408eca96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfe50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfe50 = FUN_140002ddd(FUN_146615118,uVar1,L"ResurrectTravelStationObjectDef");
  }
  return;
}



// FUNCTION 1408ecad0 FUN_1408ecad0 body=1015 status=ok
// SIG undefined FUN_1408ecad0(void)

void FUN_1408ecad0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined **local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 local_138 [48];
  undefined1 local_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_144842962();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar3 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar3,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1408ecd56;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (((bVar1 == 0) &&
      (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
       (cVar2 = FUN_1406917e6(), cVar2 != '\0')))) &&
     ((DAT_14c76194c != 0 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)))) {
    local_158 = 0x9e00;
    FUN_1448ac24a(param_1);
    if (*(longlong *)(param_1 + 0xf30) != 0) {
      FUN_1400337aa();
      local_150 = &local_140;
      local_140 = &DAT_14cae9e78;
      local_148 = 1;
      FUN_1408ecec8(*(undefined8 *)(param_1 + 0xf30),local_48,&local_150,&local_158);
      puVar4 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        puVar4 = local_48;
      }
      FUN_144717c65(puVar4,local_20);
      if (local_28 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0xf58) != 0) {
      FUN_1400337aa();
      local_150 = &local_140;
      local_140 = &DAT_14cae9e78;
      local_148 = 1;
      FUN_1408ecec8(*(undefined8 *)(param_1 + 0xf58),local_78,&local_150,&local_158);
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_78;
      }
      FUN_144717c65(puVar4,local_50);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0xf68) != 0) {
      FUN_1400337aa();
      local_150 = &local_140;
      local_140 = &DAT_14cae9e78;
      local_148 = 1;
      FUN_1408ecec8(*(undefined8 *)(param_1 + 0xf68),local_a8,&local_150,&local_158);
      puVar4 = local_88;
      if (local_88 == (undefined1 *)0x0) {
        puVar4 = local_a8;
      }
      FUN_144717c65(puVar4,local_80);
      if (local_88 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0xf38) != 0) {
      FUN_1400337aa();
      local_150 = &local_140;
      local_140 = &DAT_14cae9e78;
      local_148 = 1;
      FUN_1408ecec8(*(undefined8 *)(param_1 + 0xf38),local_d8,&local_150,&local_158);
      puVar4 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar4 = local_d8;
      }
      FUN_144717c65(puVar4,local_b0);
      if (local_b8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0xf50) != 0) {
      FUN_1400337aa();
      local_150 = &local_140;
      local_140 = &DAT_14cae9e78;
      local_148 = 1;
      FUN_1408ecec8(*(undefined8 *)(param_1 + 0xf50),local_108,&local_150,&local_158);
      puVar4 = local_e8;
      if (local_e8 == (undefined1 *)0x0) {
        puVar4 = local_108;
      }
      FUN_144717c65(puVar4,local_e0);
      if (local_e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(longlong *)(param_1 + 0xf60) != 0) {
      FUN_1400337aa();
      local_150 = &local_140;
      local_140 = &DAT_14cae9e78;
      local_148 = 1;
      FUN_1408ecec8(*(undefined8 *)(param_1 + 0xf60),local_138,&local_150,&local_158);
      FUN_14588b8d6(local_138);
    }
  }
LAB_1408ecd56:
  if ((local_18 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ecec8 FUN_1408ecec8 body=97 status=ok
// SIG undefined FUN_1408ecec8(void)

undefined8 FUN_1408ecec8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong *local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = local_28;
  local_28[0] = 0;
  local_28[1] = 0;
  local_38 = 0;
  FUN_1408ecf2a();
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ecf2a FUN_1408ecf2a body=241 status=ok
// SIG undefined FUN_1408ecf2a(void)

undefined8
FUN_1408ecf2a(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x200000000;
  FUN_1408ed01c(local_70,(int)param_3[1],1);
  if (0 < (int)param_3[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      puVar3 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar3 = local_70;
      }
      *(undefined8 *)(puVar3 + lVar1) = *(undefined8 *)(*param_3 + lVar2 * 8);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < (int)param_3[1]);
  }
  local_80 = param_6;
  local_88 = param_5;
  (**(code **)(*param_1 + 0x368))(param_1,param_2,local_70,param_4);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ed01c FUN_1408ed01c body=147 status=ok
// SIG undefined FUN_1408ed01c(void)

void FUN_1408ed01c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < uVar3) {
      FUN_140df0cf8(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    if (uVar3 != 0) {
      memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(ulonglong)uVar3 << 4);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 0x28) = param_2, param_3 == '\x01')) {
    FUN_1479f5d22(param_1);
    return;
  }
  return;
}



// FUNCTION 1408ed0b0 FUN_1408ed0b0 body=176 status=ok
// SIG undefined FUN_1408ed0b0(void)

longlong * FUN_1408ed0b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *_Dst;
  
  _Dst = DAT_14cadbb28;
  if (DAT_14cadbb28 == (longlong *)0x0) {
    _Dst = (longlong *)FUN_14001cc68(0xe0);
    memset(_Dst,0,0xe0);
    FUN_1409e1656(_Dst);
    *_Dst = (longlong)&PTR_FUN_14a90a2d0;
    _Dst[1] = 0;
    FUN_145755f16(_Dst + 2);
    *(undefined1 *)(_Dst + 0x16) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb4) = 0x7f7fffff7fffffff;
    *(undefined1 *)(_Dst + 0x1b) = 0;
    plVar2 = DAT_14cadbb28;
    if (DAT_14cadbb28 != (longlong *)0x0) {
      lVar1 = *DAT_14cadbb28;
      DAT_14cadbb28 = _Dst;
      (**(code **)(lVar1 + 0x30))(plVar2,1);
      _Dst = DAT_14cadbb28;
    }
  }
  DAT_14cadbb28 = _Dst;
  return DAT_14cadbb28;
}



// FUNCTION 1408ed160 FUN_1408ed160 body=18 status=ok
// SIG undefined FUN_1408ed160(void)

undefined8 * FUN_1408ed160(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xff;
  return param_1;
}



// FUNCTION 1408ed180 FUN_1408ed180 body=40 status=ok
// SIG undefined FUN_1408ed180(void)

undefined8 FUN_1408ed180(undefined8 param_1,int param_2)

{
  FUN_1408ed1a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408ed1a8 FUN_1408ed1a8 body=233 status=ok
// SIG undefined FUN_1408ed1a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ed1a8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b1fc9f0;
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  plVar3 = (longlong *)param_1[6];
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
  FUN_140679ffe(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0001408ed283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1408ed29c FUN_1408ed29c body=1227 status=ok
// SIG undefined FUN_1408ed29c(void)

void FUN_1408ed29c(longlong param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  PSRWLOCK SRWLock;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 *local_70;
  uint local_68;
  undefined4 local_64;
  undefined4 *local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50 [8];
  char *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1408ed768(local_50);
  if (*param_2 == 1) {
    iVar15 = *(int *)(param_2 + 0x30);
    uVar14 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8);
    iVar15 = *(int *)(param_2 + 0x44) * uVar14;
    bVar10 = 1;
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    uVar14 = (uint)(uVar6 >> 0xf);
    lVar9 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar11 = (ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70);
    }
    else {
      iVar15 = **(int **)(lVar9 + 0x20);
      lVar11 = 0;
      if (iVar15 <= (int)uVar19) {
        do {
          uVar19 = uVar19 - iVar15;
          iVar15 = (*(int **)(lVar9 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar15 <= (int)uVar19);
      }
      lVar11 = (longlong)(int)uVar19 + *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar11 * 8);
    }
    iVar15 = *(int *)(lVar9 + 0x4c) * uVar14;
    bVar10 = *param_2;
  }
  if ((bVar10 & 1) == 0) {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    if (uVar19 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x80);
      local_78 = 1;
      local_80 = (undefined4 *)
                 ((ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  else {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_78 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_80 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_68 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_70 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    if (uVar19 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x80);
      local_68 = 1;
      local_70 = (undefined4 *)
                 ((ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_58 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_60 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar19 = uVar6 & 0x7fff;
    if (uVar19 == 0x7fff) {
      local_60 = &local_54;
      local_58 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x80);
      local_58 = 1;
      local_60 = (undefined4 *)
                 ((ulonglong)(uVar19 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (local_48 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_48 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_48 == '\x01') {
      plVar18 = (longlong *)(local_48 + 0x10);
      goto LAB_1408ed49a;
    }
  }
  plVar18 = (longlong *)(lVar9 + 0x50);
LAB_1408ed49a:
  if ((int)plVar18[1] < 1) {
    pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != 0) {
      pbVar12 = param_2 + 0x3c;
    }
    if (0 < *(int *)pbVar12) {
      iVar15 = 0;
      do {
        puVar1 = local_80 + (int)local_78;
        *local_80 = (undefined4)DAT_14c846330;
        puVar2 = local_70 + (int)local_68;
        *local_70 = DAT_14c846330._4_4_;
        puVar3 = local_60 + (int)local_58;
        *local_60 = DAT_14c846338;
        iVar15 = iVar15 + 1;
        pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != 0) {
          pbVar12 = param_2 + 0x3c;
        }
        local_80 = puVar1;
        local_70 = puVar2;
        local_60 = puVar3;
      } while (iVar15 < *(int *)pbVar12);
    }
  }
  else {
    pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != 0) {
      pbVar12 = param_2 + 0x3c;
    }
    if (0 < *(int *)pbVar12) {
      puVar13 = (uint *)(lVar11 + (longlong)iVar15 * 4);
      uVar19 = (int)plVar18[1] - 1;
      iVar15 = 0;
      do {
        uVar16 = *puVar13;
        if ((int)uVar19 <= (int)*puVar13) {
          uVar16 = uVar19;
        }
        if ((int)uVar16 < 1) {
          uVar16 = 0;
        }
        uVar17 = (ulonglong)uVar16;
        lVar11 = *plVar18;
        uVar4 = *(undefined4 *)(lVar11 + 4 + uVar17 * 0xc);
        uVar5 = *(undefined4 *)(lVar11 + 8 + uVar17 * 0xc);
        puVar1 = local_80 + (int)local_78;
        *local_80 = *(undefined4 *)(lVar11 + uVar17 * 0xc);
        puVar2 = local_70 + (int)local_68;
        *local_70 = uVar4;
        puVar3 = local_60 + (int)local_58;
        *local_60 = uVar5;
        iVar15 = iVar15 + 1;
        pbVar12 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != 0) {
          pbVar12 = param_2 + 0x3c;
        }
        puVar13 = (uint *)((longlong)puVar13 + (ulonglong)(uVar14 << 2));
        local_80 = puVar1;
        local_70 = puVar2;
        local_60 = puVar3;
      } while (iVar15 < *(int *)pbVar12);
    }
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ed768 FUN_1408ed768 body=148 status=ok
// SIG undefined FUN_1408ed768(void)

void FUN_1408ed768(int *param_1,char *param_2)

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



// FUNCTION 1408ed7fc FUN_1408ed7fc body=49 status=ok
// SIG undefined FUN_1408ed7fc(void)

longlong FUN_1408ed7fc(void)

{
  if (DAT_14cc00008 == 0) {
    FUN_140f50038(&DAT_14cc00008,&PTR_s__Script_RigVM_14bac4770);
  }
  return DAT_14cc00008;
}



// FUNCTION 1408ed82e FUN_1408ed82e body=666 status=ok
// SIG undefined FUN_1408ed82e(void)

void FUN_1408ed82e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x410;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x410) == param_2) {
          if (lVar5 == 0) {
            return;
          }
          if (lVar5 + 0x10 == 0) {
            return;
          }
          FUN_1408edac8(lVar5 + 0xc0,param_3,0);
          FUN_1408edb98(lVar5 + 0x10,param_3,0);
          FUN_1408edac8(lVar5 + 400,param_5,0,0);
          FUN_1408edb98(lVar5 + 0xe0,param_5,1);
          FUN_1408edb98(lVar5 + 0x1b0,param_6,0);
          if (param_7 - 4 < 2) {
            FUN_1408edac8(lVar5 + 0x260,param_6,1,0);
            FUN_1408edac8(lVar5 + 0x278,param_6,2,0);
            *(undefined4 *)(lVar5 + 0x290) = 2;
            return;
          }
          if (param_7 != 3) {
            if (param_7 != 2) {
              FUN_1408edcfc(lVar5 + 0x1b0);
              lVar3 = *(longlong *)(lVar5 + 0x260);
              if (lVar3 != 0) {
                *(undefined8 *)(lVar5 + 0x260) = 0;
                LOCK();
                puVar1 = (uint *)(lVar3 + 8);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar2 & 0x3fffffff) == 1) {
                  FUN_144a54812();
                }
              }
              *(undefined8 *)(lVar5 + 0x268) = 0;
              *(undefined8 *)(lVar5 + 0x270) = 0;
              lVar3 = *(longlong *)(lVar5 + 0x278);
              if (lVar3 != 0) {
                *(undefined8 *)(lVar5 + 0x278) = 0;
                LOCK();
                puVar1 = (uint *)(lVar3 + 8);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar2 & 0x3fffffff) == 1) {
                  FUN_144a54812();
                }
              }
              *(undefined8 *)(lVar5 + 0x280) = 0;
              *(undefined8 *)(lVar5 + 0x288) = 0;
              *(undefined4 *)(lVar5 + 0x290) = 0;
              return;
            }
            FUN_1408edac8(lVar5 + 0x260,param_6,0,0);
            FUN_1408edac8(lVar5 + 0x278,param_6,1,0);
            *(undefined4 *)(lVar5 + 0x290) = 3;
            return;
          }
          FUN_1408edac8(lVar5 + 0x260,param_6,0,0);
          FUN_1408edac8(lVar5 + 0x278,param_6,1,0);
          *(undefined4 *)(lVar5 + 0x290) = 1;
          return;
        }
        iVar4 = *(int *)(lVar5 + 0x400);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1408edac8 FUN_1408edac8 body=207 status=ok
// SIG undefined FUN_1408edac8(void)

void FUN_1408edac8(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    plVar4 = (longlong *)FUN_1437806de(param_2);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,param_3,param_4);
      if (lVar5 != 0) {
        lVar3 = *param_1;
        if (lVar3 != lVar5) {
          *param_1 = lVar5;
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
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
        }
                    /* WARNING: Could not recover jumptable at 0x0001408edb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x40))(plVar4,param_1 + 1,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1408edb98 FUN_1408edb98 body=355 status=ok
// SIG undefined FUN_1408edb98(void)

void FUN_1408edb98(longlong *param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408edcfc();
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    plVar4 = (longlong *)FUN_1437806de(param_2);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0);
      lVar3 = *param_1;
      if (lVar3 != lVar5) {
        *param_1 = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
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
        lVar5 = *param_1;
      }
      if (lVar5 != 0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 1);
        FUN_1437806fe(param_2,&local_48,0);
        *(undefined4 *)(param_1 + 8) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x44) = uStack_34;
        *(undefined4 *)(param_1 + 9) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_2c;
        *(undefined4 *)(param_1 + 6) = local_48;
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_44;
        *(undefined4 *)(param_1 + 7) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
        FUN_1437806fe(param_2,&local_48,1);
        *(undefined4 *)(param_1 + 0xc) = local_38;
        *(undefined4 *)((longlong)param_1 + 100) = uStack_34;
        *(undefined4 *)(param_1 + 0xd) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_2c;
        *(undefined4 *)(param_1 + 10) = local_48;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack_44;
        *(undefined4 *)(param_1 + 0xb) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_3c;
        FUN_1437806fe(param_2,&local_48,2);
        *(undefined4 *)(param_1 + 0x10) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x84) = uStack_34;
        *(undefined4 *)(param_1 + 0x11) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_2c;
        *(undefined4 *)(param_1 + 0xe) = local_48;
        *(undefined4 *)((longlong)param_1 + 0x74) = uStack_44;
        *(undefined4 *)(param_1 + 0xf) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_3c;
        if (param_3 != '\0') {
          FUN_1437806fe(param_2,&local_48,3);
          param_1[0x14] = CONCAT44(uStack_34,local_38);
          param_1[0x15] = CONCAT44(uStack_2c,uStack_30);
          *(undefined4 *)(param_1 + 0x12) = local_48;
          *(undefined4 *)((longlong)param_1 + 0x94) = uStack_44;
          *(undefined4 *)(param_1 + 0x13) = uStack_40;
          *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_3c;
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



// FUNCTION 1408edcfc FUN_1408edcfc body=108 status=ok
// SIG undefined FUN_1408edcfc(void)

void FUN_1408edcfc(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 1408edd78 FUN_1408edd78 body=44 status=ok
// SIG undefined FUN_1408edd78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408edd78(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7042c = _DAT_14cb7042c + -1;
  *param_1 = DAT_14cb70420;
  DAT_14cb70420 = param_1;
  return;
}



// FUNCTION 1408edda4 FUN_1408edda4 body=26 status=ok
// SIG undefined FUN_1408edda4(void)

void FUN_1408edda4(undefined8 param_1)

{
  FUN_1408eddbe();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1408eddbe FUN_1408eddbe body=892 status=ok
// SIG undefined FUN_1408eddbe(void)

void FUN_1408eddbe(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949618);
  if (DAT_14c949628 != DAT_14c949654) {
    lVar3 = *(longlong *)(param_1 + 0x54);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar7 = DAT_14c949660;
    if (DAT_14c949660 == (undefined *)0x0) {
      puVar7 = &DAT_14c949658;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c949668 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar6 != -1) {
      lVar1 = DAT_14c949620 + (longlong)iVar6 * 0x60;
      if (*(longlong *)(DAT_14c949620 + (longlong)iVar6 * 0x60) == lVar3) {
        plVar9 = (longlong *)(lVar1 + 8);
        if (plVar9 != (longlong *)0x0 && lVar1 != 0) {
          if ((longlong)*(int *)(param_1 + 0x48) == 0) goto LAB_1408ee00b;
          plVar12 = *(longlong **)(param_1 + 0x40);
          plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x48) * 2;
          goto LAB_1408edebb;
        }
        break;
      }
      iVar6 = *(int *)(lVar1 + 0x58);
    }
  }
  goto LAB_1408ede82;
code_r0x0001408edfbf:
  iVar6 = (int)plVar2[2];
  if (iVar6 == -1) goto LAB_1408edffe;
  goto LAB_1408edfaf;
LAB_1408edebb:
  do {
    if (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c)) {
      lVar3 = *plVar12;
      uVar5 = (uint)lVar3;
      uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
      iVar6 = (int)((ulonglong)lVar3 >> 0x20);
      lVar8 = *(longlong *)(lVar1 + 0x48);
      if (*(longlong *)(lVar1 + 0x48) == 0) {
        lVar8 = lVar1 + 0x40;
      }
      iVar11 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(lVar1 + 0x50) - 1U &
                                (uVar4 << 0x13 | uVar4 & 0xffff) +
                                (uVar5 << 0x10 | uVar5 & 0xffff) + iVar6 + ((uVar5 & 0xffff) >> 4))
                                * 4);
      if (iVar11 == -1) {
        if (param_1 == 0) goto LAB_1408edf65;
      }
      else {
        do {
          plVar2 = (longlong *)(*plVar9 + (longlong)iVar11 * 0x18);
          if (*plVar2 == lVar3) {
            if (plVar2 != (longlong *)0x0) {
              lVar8 = plVar2[1];
              goto LAB_1408edf53;
            }
            break;
          }
          iVar11 = (int)plVar2[2];
        } while (iVar11 != -1);
        lVar8 = 0;
LAB_1408edf53:
        if ((lVar8 == param_1) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 0x3c))) {
LAB_1408edf65:
          lVar8 = *(longlong *)(lVar1 + 0x48);
          if (*(longlong *)(lVar1 + 0x48) == 0) {
            lVar8 = lVar1 + 0x40;
          }
          iVar6 = *(int *)(lVar8 + ((longlong)
                                    (int)((uVar5 << 0x10 | uVar5 & 0xffff) + iVar6 +
                                          (uVar4 << 0x13 | uVar4 & 0xffff) + ((uVar5 & 0xffff) >> 4)
                                         ) & (longlong)*(int *)(lVar1 + 0x50) - 1U) * 4);
          if (iVar6 != -1) {
LAB_1408edfaf:
            plVar2 = (longlong *)(*plVar9 + (longlong)iVar6 * 0x18);
            if (*plVar2 != lVar3) goto code_r0x0001408edfbf;
            iVar11 = *(int *)(lVar8 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
            if (iVar11 == iVar6) {
              piVar10 = (int *)(lVar8 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
            }
            else {
              do {
                piVar10 = (int *)(*plVar9 + (longlong)iVar11 * 0x18 + 0x10);
                iVar11 = *piVar10;
              } while (iVar11 != iVar6);
            }
            *piVar10 = (int)plVar2[2];
            FUN_1408ee13a(plVar9);
          }
        }
      }
    }
LAB_1408edffe:
    plVar12 = plVar12 + 2;
  } while (plVar12 != plVar13);
LAB_1408ee00b:
  if ((*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) && (DAT_14c949628 != DAT_14c949654)) {
    lVar3 = *(longlong *)(param_1 + 0x54);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c949658;
    if (DAT_14c949660 != (undefined *)0x0) {
      puVar7 = DAT_14c949660;
    }
    iVar6 = *(int *)(puVar7 + ((longlong)
                               (int)(((uint)lVar3 << 0x10 | uVar5) + (int)((ulonglong)lVar3 >> 0x20)
                                     + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) &
                              (longlong)DAT_14c949668 - 1U) * 4);
    while (iVar6 != -1) {
      lVar8 = (longlong)iVar6 * 0x60;
      lVar1 = DAT_14c949620 + lVar8;
      if (*(longlong *)(DAT_14c949620 + lVar8) == lVar3) {
        iVar11 = *(int *)(puVar7 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
        if (iVar11 == iVar6) {
          piVar10 = (int *)(puVar7 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
        }
        else {
          do {
            piVar10 = (int *)(DAT_14c949620 + (longlong)iVar11 * 0x60 + 0x58);
            iVar11 = *piVar10;
          } while (iVar11 != iVar6);
        }
        *piVar10 = *(int *)(lVar1 + 0x58);
        lVar1 = DAT_14c949620;
        lVar3 = DAT_14c949620 + lVar8;
        *(undefined4 *)(DAT_14c949620 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar1 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_1410402b6(lVar3 + 8);
        FUN_1408ee1ac(&DAT_14c949620,iVar6);
        break;
      }
      iVar6 = *(int *)(lVar1 + 0x58);
    }
  }
LAB_1408ede82:
                    /* WARNING: Could not recover jumptable at 0x0001408ede98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c949618);
  return;
}



// FUNCTION 1408ee13a FUN_1408ee13a body=114 status=ok
// SIG undefined FUN_1408ee13a(void)

void FUN_1408ee13a(longlong *param_1,int param_2)

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



// FUNCTION 1408ee1ac FUN_1408ee1ac body=122 status=ok
// SIG undefined FUN_1408ee1ac(void)

void FUN_1408ee1ac(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1408ee226 FUN_1408ee226 body=274 status=ok
// SIG undefined FUN_1408ee226(void)

undefined8 * FUN_1408ee226(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2ba5b0;
  param_1[6] = &PTR_LAB_14b2ba8a0;
  plVar1 = param_1 + 0x35;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x39) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x38)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408ee338 FUN_1408ee338 body=58 status=ok
// SIG undefined FUN_1408ee338(void)

void FUN_1408ee338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2b5560;
  param_1[6] = &PTR_LAB_14b2b5850;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1408ee372 FUN_1408ee372 body=235 status=ok
// SIG undefined FUN_1408ee372(void)

byte FUN_1408ee372(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 1;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1408ee45e(param_2,param_1 + 0x18);
  FUN_1408ee4f6(param_1 + 0x30,param_2);
  FUN_1408ee83e(param_1 + 0x90,param_2,param_3,&local_29);
  bVar2 = FUN_1408ee61b(param_2,param_3,param_1 + 0x1a0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *(int *)(param_1 + 0x10) == 0 | bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ee45e FUN_1408ee45e body=151 status=ok
// SIG undefined FUN_1408ee45e(void)

longlong * FUN_1408ee45e(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_28 = *param_2;
    (**(code **)(*param_1 + 0x160))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1,&local_28);
    if (*param_2 != local_28) {
      param_2[2] = 0;
    }
    *param_2 = local_28;
  }
  FUN_14041e882(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ee4f6 FUN_1408ee4f6 body=292 status=ok
// SIG undefined FUN_1408ee4f6(void)

undefined8 FUN_1408ee4f6(byte *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_4 = 1;
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_34 = (uint)*param_1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    if (1 < local_34) {
      FUN_14572541c(param_2);
    }
    *param_1 = local_34 != 0;
  }
  else {
    *param_1 = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  cVar2 = FUN_1401b2392(param_1 + 8,param_2);
  uVar3 = *param_4;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  *param_4 = uVar3;
  cVar2 = FUN_1406076b2(param_1 + 0x20,param_2);
  uVar3 = *param_4;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  *param_4 = uVar3;
  (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x38);
  (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x40);
  (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x50);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ee61b FUN_1408ee61b body=546 status=ok
// SIG undefined FUN_1408ee61b(void)

undefined4 FUN_1408ee61b(longlong param_1,longlong *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) goto LAB_1408ee6a9;
  if (param_3[1] != 0) {
    uVar3 = *param_3;
    local_38 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1408ee6a9;
    plVar4 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((*(uint *)(plVar4 + 2) == param_3[1] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      local_38 = *plVar4;
      goto LAB_1408ee6a9;
    }
  }
  local_38 = 0;
LAB_1408ee6a9:
  if (DAT_14cac9ca8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1478c0a72;
    local_60 = &LAB_1417b2375;
    local_68 = L"Engine";
    local_70 = 0x1000000000;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = CONCAT44(local_88._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  local_88 = 0;
  uVar2 = (**(code **)(*param_2 + 0x2a8))(param_2,param_1,DAT_14cac9ca8,&local_38);
  if ((local_38 != 0 & *(byte *)(param_1 + 0x28)) == 1) {
    uVar3 = *(uint *)(local_38 + 0xc);
    *param_3 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
    param_3[1] = uVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1408ee83e FUN_1408ee83e body=2127 status=ok
// SIG undefined FUN_1408ee83e(void)

undefined8 FUN_1408ee83e(longlong *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  ushort *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_78 [32];
  longlong *local_58;
  uint local_50;
  byte local_4b;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4a = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    if ((((((double)param_1[0x1a] != 0.0) || (NAN((double)param_1[0x1a]))) ||
         ((double)param_1[0x1b] != 0.0)) ||
        ((NAN((double)param_1[0x1b]) || ((double)param_1[0x1c] != 0.0)))) ||
       (NAN((double)param_1[0x1c]))) {
      bVar11 = 0;
    }
    else {
      bVar11 = 8;
    }
    if (((9.999999747378752e-05 < ABS((double)param_1[0x1d] - DAT_14c846510)) ||
        (9.999999747378752e-05 < ABS((double)param_1[0x1e] - DAT_14c846518))) ||
       (9.999999747378752e-05 < ABS((double)param_1[0x1f] - DAT_14c846520))) {
      bVar12 = 0;
    }
    else {
      bVar12 = 0x10;
    }
    local_4a = CONCAT11((int)param_1[3] != 0 | (ABS(*(float *)(param_1 + 0x21)) <= 1e-08) * '\x02',
                        (ABS(*(float *)((longlong)param_1 + 0x104) + -1.0) <= 1e-08) << 7 |
                        (ABS(*(float *)(param_1 + 0x20)) <= 1e-08) << 6 |
                        ((int)param_1[7] != 0) << 2 |
                        ((int)param_1[5] != 0) * '\x02' | (int)param_1[1] != 0 | bVar11 | bVar12);
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (ushort *)*puVar3 + 1;
  if ((ushort *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4a,2);
    }
    else {
      thunk_FUN_1457251a8(param_2,&local_4a);
    }
  }
  else {
    local_4a = *(ushort *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 8,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1457d8ef0(param_1,0);
    }
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      *(undefined4 *)(param_1 + 5) = 0;
      FUN_148838d7a(param_1 + 4);
    }
    else {
      *(undefined4 *)(param_1 + 5) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x3c) < 0) {
      *(undefined4 *)(param_1 + 7) = 0;
      FUN_148838daa(param_1 + 6);
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0;
    }
    param_1[0x1c] = DAT_14c8464f0;
    lVar13 = DAT_14c8464e8;
    param_1[0x1a] = DAT_14c8464e0;
    param_1[0x1b] = lVar13;
    uVar8 = DAT_14c846518._4_4_;
    uVar7 = DAT_14c846518._0_4_;
    uVar6 = DAT_14c846510._4_4_;
    *(undefined4 *)(param_1 + 0x1d) = DAT_14c846510._0_4_;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar6;
    *(undefined4 *)(param_1 + 0x1e) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar8;
    param_1[0x1f] = (longlong)DAT_14c846520;
    param_1[0x20] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      FUN_1457d8ef0(param_1 + 2,0);
    }
    else {
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  *param_4 = 1;
  local_4b = 1;
  if ((local_4a & 1) != 0) {
    local_50 = 0xff;
    if ((int)*(uint *)(param_1 + 1) < 0xff) {
      local_50 = *(uint *)(param_1 + 1);
    }
    (**(code **)(*param_2 + 0x178))(param_2,&local_50,8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      lVar13 = (longlong)(int)local_50;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + local_50;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < local_50) {
        FUN_1405bc420(param_1);
      }
      memset((void *)((longlong)iVar2 * 0x58 + *param_1),0,lVar13 * 0x58);
    }
    if (0 < (int)local_50) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        FUN_1408ef08e(*param_1 + lVar13,param_2,param_3,&local_4b);
        *param_4 = *param_4 & local_4b;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x58;
      } while (lVar14 < (int)local_50);
    }
  }
  bVar11 = (byte)local_4a;
  if (((byte)local_4a & 2) != 0) {
    local_50 = 0xff;
    if ((int)*(uint *)(param_1 + 5) < 0xff) {
      local_50 = *(uint *)(param_1 + 5);
    }
    plVar10 = param_1 + 4;
    (**(code **)(*param_2 + 0x178))(param_2,&local_50,8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      lVar13 = (longlong)(int)local_50;
      iVar2 = (int)param_1[5];
      *(uint *)(param_1 + 5) = iVar2 + local_50;
      if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar2) < local_50) {
        FUN_1407f7a52(plVar10);
      }
      memset((void *)((longlong)iVar2 * 0x18 + *plVar10),0,lVar13 * 0x18);
    }
    if (0 < (int)local_50) {
      lVar14 = 0;
      lVar13 = 0;
      do {
        lVar5 = *plVar10 + lVar14;
        if (*(longlong *)(*plVar10 + 8 + lVar14) == 0) {
          uVar9 = FUN_1405b1a32();
          uVar9 = FUN_14477b664(uVar9);
          *(undefined8 *)(lVar5 + 8) = uVar9;
        }
        FUN_14017647a(lVar5,param_2);
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0x18;
      } while (lVar13 < (int)local_50);
    }
    bVar11 = (byte)local_4a;
  }
  if ((bVar11 & 4) != 0) {
    local_50 = 0xff;
    if ((int)*(uint *)(param_1 + 7) < 0xff) {
      local_50 = *(uint *)(param_1 + 7);
    }
    local_58 = param_1 + 6;
    (**(code **)(*param_2 + 0x178))(param_2,&local_50,8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      lVar13 = (longlong)(int)local_50;
      iVar2 = (int)param_1[7];
      *(uint *)(param_1 + 7) = local_50 + iVar2;
      if ((uint)(*(int *)((longlong)param_1 + 0x3c) - iVar2) < local_50) {
        FUN_1407f7952(local_58);
      }
      memset((void *)((longlong)iVar2 * 0x20 + *local_58),0,lVar13 << 5);
    }
    if (0 < (int)local_50) {
      lVar13 = 0x18;
      lVar14 = 0;
      do {
        lVar5 = *local_58;
        if (*(longlong *)(lVar5 + -0x10 + lVar13) == 0) {
          uVar9 = FUN_1407f787c();
          uVar9 = FUN_14477b664(uVar9);
          *(undefined8 *)(lVar13 + lVar5 + -0x10) = uVar9;
        }
        plVar10 = (longlong *)FUN_14017647a(lVar13 + lVar5 + -0x18,param_2);
        puVar4 = *(undefined4 **)plVar10[1];
        if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar10 + 0x170))(plVar10,(undefined4 *)(*local_58 + lVar13),4);
          }
          else {
            FUN_14572512c(plVar10);
          }
        }
        else {
          *(undefined4 *)(*local_58 + lVar13) = *puVar4;
          *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
        }
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x20;
      } while (lVar14 < (int)local_50);
    }
    bVar11 = (byte)local_4a;
  }
  if ((bVar11 & 8) == 0) {
    local_4b = FUN_1406076b2(param_1 + 0x1a,param_2);
    *param_4 = *param_4 & local_4b;
    bVar11 = (byte)local_4a;
  }
  if ((bVar11 & 0x10) == 0) {
    local_4b = FUN_1401fdd6d(param_1 + 0x1d,param_2);
    *param_4 = *param_4 & local_4b;
    bVar11 = (byte)local_4a;
  }
  if ((bVar11 & 0x40) == 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x20,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    bVar11 = (byte)local_4a;
  }
  if (-1 < (char)bVar11) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x104),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x104) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_4a & 0x200) == 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x21,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x21) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_4a & 0x100) != 0) {
    local_50 = 0xff;
    if ((int)*(uint *)(param_1 + 3) < 0xff) {
      local_50 = *(uint *)(param_1 + 3);
    }
    plVar10 = param_1 + 2;
    (**(code **)(*param_2 + 0x178))(param_2,&local_50,8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      lVar13 = (longlong)(int)local_50;
      iVar2 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar2 + local_50;
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar2) < local_50) {
        FUN_1405bc420(plVar10);
      }
      memset((void *)((longlong)iVar2 * 0x58 + *plVar10),0,lVar13 * 0x58);
    }
    if (0 < (int)local_50) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        FUN_1408ef08e(*plVar10 + lVar13,param_2,param_3,&local_4b);
        *param_4 = *param_4 & local_4b;
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x58;
      } while (lVar14 < (int)local_50);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1408ef08e FUN_1408ef08e body=840 status=ok
// SIG undefined FUN_1408ef08e(void)

undefined8 FUN_1408ef08e(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int *piVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 auStack_68 [43];
  byte local_3d;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  bVar2 = *(byte *)(param_1 + 8);
  local_3d = bVar2;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x48);
    if (lVar9 == 0) {
      uVar8 = FUN_14016979c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x48) = lVar9;
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((*(longlong *)(param_1 + 0x40) != 0) && (lVar9 != 0)) {
        plVar4 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x40));
          *(longlong *)(param_1 + 0x50) = lVar9;
          if (lVar9 != 0) goto LAB_1408ef360;
        }
      }
    }
    else {
LAB_1408ef360:
      local_3d = bVar2 | 0x80;
    }
  }
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_3d,1);
  }
  else {
    local_3d = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x48);
    if (lVar9 == 0) {
      uVar8 = FUN_14016979c();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x48) = lVar9;
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((*(longlong *)(param_1 + 0x40) != 0) && (lVar9 != 0)) {
        plVar4 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x40));
          *(longlong *)(param_1 + 0x50) = lVar9;
          if (lVar9 != 0) {
            lVar9 = *(longlong *)(param_1 + 0x48);
            goto joined_r0x0001408ef304;
          }
        }
      }
    }
    else {
joined_r0x0001408ef304:
      if (lVar9 == 0) {
        uVar8 = FUN_14016979c();
        uVar8 = FUN_14477b664(uVar8);
        *(undefined8 *)(param_1 + 0x48) = uVar8;
      }
      FUN_14017647a(param_1 + 0x40,param_2);
    }
  }
  else {
    *(byte *)(param_1 + 8) = local_3d & 0x7f;
    if ((char)local_3d < '\0') {
      lVar9 = *(longlong *)(param_1 + 0x48);
      goto joined_r0x0001408ef304;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x03') {
    FUN_1408ef3d7(param_2,param_1 + 0x30);
    goto switchD_1408ef248_caseD_3;
  }
  switch(*(char *)(param_1 + 8)) {
  case '\0':
    puVar10 = (undefined4 *)(param_1 + 0xc);
    break;
  case '\x01':
    puVar10 = (undefined4 *)(param_1 + 0x10);
    break;
  case '\x02':
    FUN_14480c34d(param_2,param_1 + 0x18);
  default:
    goto switchD_1408ef248_caseD_3;
  case '\x04':
    piVar6 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
      local_3c = (uint)*(byte *)(param_1 + 9);
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
      if (1 < local_3c) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 9) = local_3c != 0;
      goto switchD_1408ef248_caseD_3;
    }
    *(bool *)(param_1 + 9) = *piVar6 != 0;
    goto LAB_1408ef386;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar10,4);
    }
    else {
      FUN_14572512c(param_2,puVar10);
    }
  }
  else {
    *puVar10 = *puVar5;
LAB_1408ef386:
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
switchD_1408ef248_caseD_3:
  *param_4 = 1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ef3d7 FUN_1408ef3d7 body=330 status=ok
// SIG undefined FUN_1408ef3d7(void)

longlong * FUN_1408ef3d7(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1408ef522 FUN_1408ef522 body=244 status=ok
// SIG undefined FUN_1408ef522(void)

undefined8 FUN_1408ef522(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar3 = 0;
    puVar2 = *(undefined4 **)(param_3 + 8);
    if ((DAT_14c9a1ab0 != 0) && (puVar2 != (undefined4 *)0x0)) {
      uVar1 = *(ushort *)(puVar2 + 10);
      if (((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8);
      }
    }
    puVar5 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = puVar2;
    }
    if (DAT_14c947fe0 == 0) {
      lVar4 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar4);
      DAT_14c947fe0 = lVar4;
    }
    FUN_140045924(DAT_14c947fe0,&local_40,puVar5,1);
    uVar3 = FUN_1408ef618(param_1,param_2,local_40,uVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ef618 FUN_1408ef618 body=844 status=ok
// SIG undefined FUN_1408ef618(void)

undefined8 FUN_1408ef618(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar4 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar4 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar4 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar5;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar4 = uVar5;
      }
    }
    local_50 = CONCAT44(uVar4,uVar3);
    iVar1 = FUN_14069bbac((longlong *)(param_1 + 0x588),uVar3 ^ uVar4);
    if (iVar1 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x588);
      if ((lVar7 + (longlong)iVar1 * 0x70 != 0) &&
         (lVar7 = lVar7 + (longlong)iVar1 * 0x70 + 8, lVar7 != 0)) {
        local_50 = *(undefined8 *)(*(longlong *)(param_4 + 0x10) + 0x18);
        local_40 = 0;
        uVar3 = (uint)((ulonglong)param_3 >> 0x10);
        uVar5 = (uint)param_3 & 0xffff;
        uVar4 = (uint)((ulonglong)param_3 >> 0x20);
        uVar3 = uVar4 >> 0xd ^
                (((uint)param_3 << 0x10 | uVar5) - uVar4) +
                (uVar5 >> 4) + (uVar3 << 0x13 | uVar3 & 0xffff);
        uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - uVar4;
        uVar4 = uVar6 >> 0xd ^ (uVar4 - uVar3) - uVar6;
        uVar5 = uVar4 >> 0xc ^ (uVar3 - uVar6) - uVar4;
        uVar3 = uVar5 << 0x10 ^ (uVar6 - uVar4) - uVar5;
        uVar6 = uVar3 >> 5 ^ (uVar4 - uVar5) - uVar3;
        uVar4 = uVar6 >> 3 ^ (uVar5 - uVar3) - uVar6;
        uVar3 = uVar4 << 10 ^ (uVar3 - uVar6) - uVar4;
        uVar5 = uVar3 >> 0xf ^ uVar6 - (uVar4 + uVar3);
        uVar3 = (uint)((ulonglong)local_50 >> 0x10);
        uVar4 = (uint)local_50 & 0xffff;
        uVar3 = uVar5 >> 0xd ^
                (uVar3 << 0x13 | uVar3 & 0xffff) + uVar4 + (uVar4 >> 4) +
                ((uint)local_50 * 0x10000 - uVar5);
        uVar4 = uVar3 << 8 ^ (-0x61c88647 - uVar5) - uVar3;
        uVar5 = uVar4 >> 0xd ^ (uVar5 - uVar3) - uVar4;
        uVar3 = uVar5 >> 0xc ^ (uVar3 - uVar4) - uVar5;
        uVar6 = uVar3 << 0x10 ^ (uVar4 - uVar5) - uVar3;
        uVar4 = uVar6 >> 5 ^ (uVar5 - uVar3) - uVar6;
        uVar5 = uVar4 >> 3 ^ (uVar3 - uVar6) - uVar4;
        uVar3 = uVar5 << 10 ^ (uVar6 - uVar4) - uVar5;
        uVar3 = (uVar3 >> 0xf ^ uVar4 - (uVar5 + uVar3)) + 0x42b62ef3 ^ 0x5ea4e;
        uVar4 = uVar3 << 8 ^ 0xe0eda8ac - uVar3;
        uVar5 = uVar4 >> 0xd ^ (-0x42b62ef3 - uVar3) - uVar4;
        uVar6 = uVar5 >> 0xc ^ (uVar3 - uVar4) - uVar5;
        uVar3 = uVar6 << 0x10 ^ (uVar4 - uVar5) - uVar6;
        uVar5 = uVar3 >> 5 ^ (uVar5 - uVar6) - uVar3;
        uVar4 = uVar5 >> 3 ^ (uVar6 - uVar3) - uVar5;
        uVar3 = uVar4 << 10 ^ (uVar3 - uVar5) - uVar4;
        local_48 = param_3;
        iVar1 = FUN_14069bb2e(lVar7,uVar3 >> 0xf ^ uVar5 - (uVar4 + uVar3));
        uVar2 = 1;
        if (iVar1 != -1) goto LAB_1408ef8f1;
      }
    }
    uVar2 = 0;
  }
LAB_1408ef8f1:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1408ef966 FUN_1408ef966 body=151 status=ok
// SIG undefined FUN_1408ef966(void)

undefined8 FUN_1408ef966(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[1] != 0) {
    local_38 = 0;
    FUN_1405593a8(param_1[1],&local_38,param_2);
    cVar1 = (**(code **)(*param_1 + 8))(param_1,&local_38);
    if (cVar1 != '\0') {
      local_30 = &DAT_14a174cc8;
      local_38 = param_2;
      FUN_144a405ac(param_1 + 4,local_24,&local_38,0);
      uVar2 = 1;
      goto LAB_1408ef9b4;
    }
  }
  uVar2 = 0;
LAB_1408ef9b4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ef9fe FUN_1408ef9fe body=144 status=ok
// SIG undefined FUN_1408ef9fe(void)

undefined4 FUN_1408ef9fe(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140559328();
  if ((char)uVar1 != '\0') {
    if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = *(undefined8 *)*param_2;
    }
    local_38 = &local_40;
    local_30 = &DAT_14a174cc8;
    FUN_1408cb452(param_1 + 0x20,local_24,&local_38,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408efa90 FUN_1408efa90 body=1123 status=ok
// SIG undefined FUN_1408efa90(void)

void FUN_1408efa90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int *piVar4;
  PSRWLOCK pRVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1408efef4(param_1,0);
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 != 0) {
    if ((*(char *)(lVar7 + 0x1a3) == '\x01') && (*(int *)(param_1 + 0x208) != 0)) {
      FUN_1448d5e3c(&local_78,param_1 + 0x208);
      lVar8 = *(longlong *)(local_78 + 0x400);
      AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x58));
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar4 = (int *)((longlong)plVar3 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (*(int *)(param_1 + 0x2e0) != *(int *)(lVar8 + 0x50)) {
        *(int *)(param_1 + 0x2e0) = *(int *)(lVar8 + 0x50);
        FUN_144a5dc74(local_b8);
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1446ddda2(&local_78,"PartyLevelText",0);
        FUN_140ac6c96(&local_78,local_b8);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        local_e8 = 0;
        plStack_e0 = (longlong *)0x0;
        FUN_1413a454c(local_d8,*(undefined4 *)(lVar8 + 0x44),0);
        FUN_14023409e(&local_f8,local_b8,1);
        local_78 = CONCAT44(local_78._4_4_,4);
        FUN_14023423e(&local_68,local_d8);
        local_90 = &uStack_58;
        local_98 = &local_78;
        FUN_14010d304(&local_88);
        local_a8 = local_f8;
        local_a0 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_a8,&local_88);
        FUN_14007f2db(local_88,local_80);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
        }
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_f0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar4 = (int *)((longlong)local_f0 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*local_f0 + 0x10))(local_f0);
            }
          }
        }
        if (local_d8[0] != (longlong *)0x0) {
          (**(code **)(*local_d8[0] + 0x10))();
        }
        FUN_140008f88(lVar7 + 0x1b0,local_c8);
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        plVar3 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_e0)(plStack_e0);
            LOCK();
            piVar4 = (int *)((longlong)plVar3 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        puVar9 = *(ushort **)(lVar7 + 0x80);
        if (puVar9 != (ushort *)0x0) {
          *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
        }
        if (local_b8[0] != (longlong *)0x0) {
          (**(code **)(*local_b8[0] + 0x10))();
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 0x58));
      if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_1408efc3f;
    }
    if (*(int *)(param_1 + 0x208) != 0) {
      piVar4 = (int *)(param_1 + 0x208);
      FUN_1448d5e3c(&local_78,piVar4);
      lVar7 = *(longlong *)(local_78 + 0x480);
      pRVar5 = (PSRWLOCK)(lVar7 + 0xc0);
      AcquireSRWLockShared(pRVar5);
      iVar6 = *(int *)(lVar7 + 0xb8);
      if (*(int *)(param_1 + 0x2e8) != iVar6) {
        *(int *)(param_1 + 0x2e8) = iVar6;
      }
      ReleaseSRWLockShared(pRVar5);
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x288);
      if ((lVar7 != 0) && (*piVar4 != 0)) {
        FUN_1448d5e3c(&local_78,piVar4);
        lVar8 = *(longlong *)(local_78 + 0x640);
        pRVar5 = (PSRWLOCK)(lVar8 + 0x28);
        AcquireSRWLockShared(pRVar5);
        iVar6 = *(int *)(lVar8 + 0x20);
        if (*(int *)(param_1 + 0x2e4) != iVar6) {
          *(int *)(param_1 + 0x2e4) = iVar6;
          FUN_140714c1e(lVar7 + 0x540,*(undefined4 *)(param_1 + 0x208));
          puVar9 = *(ushort **)(lVar7 + 0x80);
          if (puVar9 != (ushort *)0x0) {
            *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
          }
        }
        ReleaseSRWLockShared(pRVar5);
        plVar3 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar4 = (int *)((longlong)plVar3 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
    }
  }
LAB_1408efc3f:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408efef4 FUN_1408efef4 body=4372 status=ok
// SIG undefined FUN_1408efef4(void)

void FUN_1408efef4(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  code *pcVar7;
  ushort *puVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong **pplVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  longlong lVar18;
  PSRWLOCK SRWLock;
  longlong lVar19;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  PSRWLOCK local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_180 [2];
  longlong *local_170;
  undefined4 local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong *local_148 [2];
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong **local_f8;
  undefined8 *puStack_f0;
  undefined2 *local_e0;
  int local_d8;
  int local_d0 [6];
  longlong local_b8;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined8 auStack_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((((lVar5 == 0) || (*(int *)(param_1 + 0x208) == 0)) || (*(int *)(param_1 + 0x34) == 0)) ||
     (((uVar3 = *(uint *)(param_1 + 0x30), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)) ||
      ((lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 == 0 ||
       ((*(int *)(lVar13 + 0x10) != *(int *)(param_1 + 0x34) ||
        ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))))))) goto LAB_1408f001f;
  FUN_1448d5e3c(&local_a8,param_1 + 0x208);
  plVar11 = (longlong *)local_a8[0x78];
  SRWLock = (PSRWLOCK)(plVar11 + 0xd);
  AcquireSRWLockShared(SRWLock);
  plVar2 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar16 = uStack_a0 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((*(int *)(lVar5 + 0xac) == (int)plVar11[0xc] & (param_2 ^ 1)) == 0) {
    *(int *)(lVar5 + 0xac) = (int)plVar11[0xc];
    lVar13 = *(longlong *)(param_1 + 0x2b0);
    if (lVar13 != 0) {
      local_208 = (longlong *)(lVar13 + 0x10);
      FUN_14071621b(*(undefined8 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x18));
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (*(int *)(lVar13 + 0x1c) != 0) {
        FUN_14574681c(local_208,0);
      }
      local_200 = plVar11;
      local_1f0 = SRWLock;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
        plVar11 = local_200;
      }
      local_118 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_110 = 0;
      local_98 = 0;
      local_a8 = (longlong *)0x0;
      uStack_a0 = (longlong *)0x0;
      local_90 = 0;
      auStack_88[0] = 0;
      FUN_1446ddda2(&local_a8,"CharInfoText",0);
      FUN_140ac6c96(&local_a8,&local_118);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
        plVar11 = local_200;
      }
      local_128 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_120 = 0;
      local_98 = 0;
      local_a8 = (longlong *)0x0;
      uStack_a0 = (longlong *)0x0;
      local_90 = 0;
      auStack_88[0] = 0;
      FUN_1446ddda2(&local_a8,"DataCorruptedText",0);
      FUN_140ac6c96(&local_a8,&local_128);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
        plVar11 = local_200;
      }
      local_138 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_130 = 0;
      local_98 = 0;
      local_a8 = (longlong *)0x0;
      uStack_a0 = (longlong *)0x0;
      local_90 = 0;
      auStack_88[0] = 0;
      FUN_1446ddda2(&local_a8,"PartyLevelText",0);
      FUN_140ac6c96(&local_a8,&local_138);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      FUN_148e1a990(local_148);
      *(undefined8 *)(lVar5 + 0x1a8) = 0xffffffffffffffff;
      if (*(int *)(lVar5 + 0x5ac) != *(int *)((longlong)plVar11 + 0x5c)) {
        *(char *)(lVar5 + 0x5a8) = (char)plVar11[0xb];
        *(undefined4 *)(lVar5 + 0x5ac) = *(undefined4 *)((longlong)plVar11 + 0x5c);
      }
      if ((longlong)(int)plVar11[1] != 0) {
        lVar18 = *plVar11;
        local_1e0 = (longlong)(int)plVar11[1] * 0x308 + lVar18;
        local_1e8 = lVar5 + 0x1d0;
        local_1f8 = lVar13;
        do {
          FUN_1447a97f4(local_d0,lVar18);
          local_150 = *(undefined8 *)(lVar18 + 0x44);
          FUN_140b6da64(&local_a8,&local_150);
          FUN_140233b1a(&local_160,&local_a8);
          if (local_a8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_198 = (longlong *)0x0;
          plStack_190 = (longlong *)0x0;
          FUN_1413a454c(local_180,*(undefined4 *)(lVar18 + 0x80),0,&local_198);
          FUN_14023409e(&local_1a8,&local_138,1);
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,4);
          FUN_14023423e(&local_98,local_180);
          local_f8 = &local_a8;
          puStack_f0 = auStack_88;
          FUN_14010d304(&local_e0,&local_f8);
          local_108 = local_1a8;
          local_100 = local_1a0;
          if (local_1a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_170,&local_108,&local_e0);
          FUN_14007f2db(local_e0);
          if (local_e0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if ((longlong *)CONCAT44(uStack_94,local_98) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_94,local_98) + 0x10))();
          }
          plVar11 = local_1a0;
          if (local_1a0 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_1a0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_1a0)(local_1a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          if (local_180[0] != (longlong *)0x0) {
            (**(code **)(*local_180[0] + 0x10))();
          }
          plVar11 = plStack_190;
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_190 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_190)(plStack_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          iVar12 = *(int *)(lVar13 + 0x18);
          *(uint *)(lVar13 + 0x18) = iVar12 + 1U;
          if (*(uint *)(lVar13 + 0x1c) < iVar12 + 1U) {
            FUN_1407cce00(local_208);
          }
          plVar11 = local_208;
          lVar19 = (longlong)iVar12 * 0xb0;
          memset((void *)(*local_208 + lVar19),0,0xb0);
          *(int *)(*plVar11 + 0xc + lVar19) = iVar12;
          if (DAT_14c947fe0 == 0) {
            lVar13 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar13);
            DAT_14c947fe0 = lVar13;
          }
          FUN_140045924(DAT_14c947fe0,&local_a8,local_d0,1);
          *(longlong **)(*plVar11 + lVar19) = local_a8;
          lVar13 = *plVar11 + lVar19;
          puVar14 = (undefined8 *)(lVar13 + 0x40);
          if (puVar14 != (undefined8 *)(lVar18 + 0x50)) {
            iVar4 = *(int *)(lVar18 + 0x58);
            pvVar6 = *(void **)(lVar18 + 0x50);
            *(int *)(lVar13 + 0x48) = iVar4;
            if (iVar4 == 0 && *(int *)(lVar13 + 0x4c) == 0) {
              *(undefined4 *)(lVar13 + 0x4c) = 0;
            }
            else {
              FUN_1446dd670(puVar14,iVar4);
              if (iVar4 != 0) {
                memcpy((void *)*puVar14,pvVar6,(longlong)iVar4 * 2);
              }
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          plVar16 = local_208;
          plVar2 = DAT_14c844840;
          lVar13 = *local_208;
          puVar14 = (undefined8 *)(lVar13 + lVar19 + 0x20);
          plVar11 = (longlong *)*puVar14;
          if (plVar11 != DAT_14c844840) {
            *puVar14 = DAT_14c844840;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 8))();
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          *(undefined4 *)(lVar13 + lVar19 + 0x28) = DAT_14c844848;
          plVar11 = local_160;
          if (*(code **)(*local_160 + 0x50) != FUN_144828418) {
            plVar11 = (longlong *)(**(code **)(*local_160 + 0x50))();
          }
          FUN_1447a1fc0(plVar11);
          pcVar7 = *(code **)(*local_160 + 0x28);
          if (pcVar7 == FUN_14482841c) {
            plVar11 = local_160 + 3;
            if (local_160[5] != 0) {
              plVar11 = (longlong *)(local_160[5] + 8);
            }
          }
          else if (pcVar7 == (code *)&LAB_14010c34c) {
            plVar11 = local_160 + 2;
          }
          else {
            plVar11 = (longlong *)(*pcVar7)(local_160);
          }
          if ((int)plVar11[1] < 2) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1] = 0;
              *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
              DAT_14c844840[2] = -1;
              DAT_14c844840[3] = 0;
              DAT_14c844840[4] = 0;
              DAT_14c844840[5] = 0;
              if (DAT_14c844840 != (longlong *)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
              plVar16 = local_208;
            }
            plVar2 = DAT_14c844840;
            lVar13 = *plVar16;
            puVar14 = (undefined8 *)(lVar13 + lVar19 + 0x30);
            plVar11 = (longlong *)*puVar14;
            if (plVar11 != DAT_14c844840) {
              *puVar14 = DAT_14c844840;
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
              }
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            *(undefined4 *)(lVar13 + lVar19 + 0x38) = DAT_14c844848;
          }
          else {
            local_1b8 = local_160;
            if (local_160 != (longlong *)0x0) {
              (**(code **)(*local_160 + 8))();
            }
            local_1b0 = local_158;
            local_1c8 = local_170;
            if (local_170 != (longlong *)0x0) {
              (**(code **)(*local_170 + 8))();
            }
            local_1c0 = local_168;
            FUN_14023409e(&local_1d8,local_148,1);
            local_a8 = (longlong *)CONCAT44(local_a8._4_4_,4);
            FUN_14023423e(&local_98,&local_1c8);
            auStack_88[0] = CONCAT44(auStack_88[0]._4_4_,4);
            FUN_14023423e(local_78,&local_1b8);
            local_f8 = &local_a8;
            puStack_f0 = &local_68;
            FUN_14010d304(&local_e0,&local_f8);
            local_108 = local_1d8;
            local_100 = local_1d0;
            if (local_1d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_198,&local_108,&local_e0);
            FUN_14007f2db(local_e0,local_d8);
            if (local_e0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar13 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_a8 + lVar13) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_a8 + lVar13) + 0x10))();
                *(undefined8 *)((longlong)&local_a8 + lVar13) = 0;
                *(undefined4 *)((longlong)&uStack_a0 + lVar13) = 0;
              }
              plVar11 = local_1d0;
              lVar13 = lVar13 + -0x20;
            } while (lVar13 != -0x10);
            if (local_1d0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1d0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_1d0)(local_1d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            if (local_1c8 != (longlong *)0x0) {
              (**(code **)(*local_1c8 + 0x10))();
            }
            if (local_1b8 != (longlong *)0x0) {
              (**(code **)(*local_1b8 + 0x10))();
            }
            FUN_140008f88(*plVar16 + lVar19 + 0x30,&local_198);
            if (local_198 != (longlong *)0x0) {
              (**(code **)(*local_198 + 0x10))();
            }
          }
          if (*(char *)(lVar18 + 0x120) == '\x01') {
            lVar13 = *plVar16;
            puVar14 = (undefined8 *)(lVar13 + lVar19 + 0x10);
            plVar11 = (longlong *)*puVar14;
            if (plVar11 != local_128) {
              *puVar14 = local_128;
              if (local_128 != (longlong *)0x0) {
                (**(code **)(*local_128 + 8))();
              }
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            *(undefined4 *)(lVar13 + lVar19 + 0x18) = local_120;
          }
          else {
            FUN_140009b9a(&local_a8,lVar18 + 0x68);
            FUN_140008f88(*plVar16 + lVar19 + 0x10,&local_a8);
            if (local_a8 != (longlong *)0x0) {
              (**(code **)(*local_a8 + 0x10))();
            }
            if (*(char *)(lVar5 + 0x5a8) == '\x01') {
              uVar3 = *(uint *)(lVar18 + 0x2f8);
              if ((int)uVar3 < 2) {
                FUN_14020fad6(*plVar16 + lVar19 + 0x50,&DAT_149dfb77a);
              }
              else {
                lVar13 = *plVar16 + lVar19;
                puVar14 = (undefined8 *)(lVar13 + 0x50);
                if (puVar14 != (undefined8 *)(lVar18 + 0x2f0)) {
                  pvVar6 = *(void **)(lVar18 + 0x2f0);
                  *(uint *)(lVar13 + 0x58) = uVar3;
                  FUN_1446dd670(puVar14,(ulonglong)uVar3,*(undefined4 *)(lVar13 + 0x5c));
                  plVar16 = local_208;
                  memcpy((void *)*puVar14,pvVar6,(ulonglong)uVar3 * 2);
                }
              }
            }
          }
          puVar14 = (undefined8 *)FUN_140ea5e38(*plVar16 + lVar19 + 0x88);
          *puVar14 = DAT_14cbdef48;
          FUN_1400021e4(&local_150,&local_e0);
          puVar17 = &DAT_149dfb77a;
          if (local_d8 != 0) {
            puVar17 = local_e0;
          }
          local_f8 = (longlong **)0x0;
          puStack_f0 = (undefined8 *)0x0;
          FUN_1400b2348(local_d0,&local_f8,1);
          pplVar15 = (longlong **)&DAT_149dfb77a;
          if ((int)puStack_f0 != 0) {
            pplVar15 = local_f8;
          }
          FUN_140002266(&local_a8,L"%s:%s",pplVar15,puVar17);
          lVar13 = local_1f8;
          if ((longlong **)(puVar14 + 1) == &local_a8) {
            if (local_a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (puVar14[1] != 0) {
              FUN_1400020a8();
            }
            puVar14[1] = local_a8;
            local_a8 = (longlong *)0x0;
            *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)puVar14 + 0x14) = uStack_a0._4_4_;
            uStack_a0 = (longlong *)0x0;
          }
          if (local_f8 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          if (local_e0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (*(int *)(lVar18 + 0x228) == 0) {
LAB_1408f0b10:
            cVar10 = '\0';
          }
          else {
            cVar10 = '\0';
            if ((*(int *)(lVar18 + 0x22c) != 0) &&
               (cVar10 = '\0', *(int *)(lVar18 + 0x228) != DAT_14c948000)) {
              if (*(char *)(lVar18 + 0x288) != '\0') goto LAB_1408f0b10;
              cVar10 = *(char *)(lVar18 + 0x298);
            }
          }
          if ((*(char *)(lVar5 + 0x1a0) == '\0') && (cVar10 == '\0')) {
            puVar14 = (undefined8 *)FUN_140ea5e38(*local_208 + lVar19 + 0x88);
            *puVar14 = DAT_14cbdef58;
          }
          plVar11 = local_200;
          if ((local_d0[0] == (int)local_200[3]) && (*(char *)(lVar5 + 0x1a3) == '\0')) {
            *(int *)(lVar5 + 0x1a8) = iVar12;
            *(int *)(param_1 + 0x2ec) = iVar12;
          }
          if ((*(char *)(lVar18 + 0x138) == '\x01') && (*(char *)(lVar5 + 0x1a3) == '\0')) {
            *(int *)(lVar5 + 0x1ac) = iVar12;
            *(int *)(param_1 + 0x2f0) = iVar12;
          }
          iVar12 = *(int *)(lVar5 + 0x428);
          if ((((iVar12 != 0) && (*(int *)(lVar5 + 0x42c) != 0)) && (iVar12 != DAT_14c948000)) &&
             (*(int *)(lVar18 + 600) == iVar12)) {
            FUN_1415c1204(local_1e8,lVar18);
            FUN_1442e69dc(param_1,lVar5);
          }
          if (local_170 != (longlong *)0x0) {
            (**(code **)(*local_170 + 0x10))();
          }
          if (local_160 != (longlong *)0x0) {
            (**(code **)(*local_160 + 0x10))();
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          lVar18 = lVar18 + 0x308;
        } while (lVar18 != local_1e0);
      }
      if ((*(int *)(param_1 + 0x308) == 0) || (*(int *)(param_1 + 0x308) != (int)plVar11[2])) {
        *(int *)(param_1 + 0x308) = (int)plVar11[2];
        FUN_145844d2a(param_1 + 0x2f8,plVar11);
      }
      SRWLock = local_1f0;
      bVar9 = *(int *)(param_1 + 0x300) < 1;
      if ((bool)*(char *)(lVar5 + 0x2e0) == bVar9) {
        if (*(int *)(lVar5 + 0x2e4) == 0) {
          iVar12 = 1;
          goto LAB_1408f0da4;
        }
      }
      else {
        iVar12 = *(int *)(lVar5 + 0x2e4) + 1;
LAB_1408f0da4:
        *(bool *)(lVar5 + 0x2e0) = bVar9;
        *(int *)(lVar5 + 0x2e4) = iVar12;
      }
      puVar8 = *(ushort **)(lVar5 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
      FUN_140715f5a(param_1);
      if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 0x10))();
      }
      if (local_138 != (longlong *)0x0) {
        (**(code **)(*local_138 + 0x10))();
      }
      if (local_128 != (longlong *)0x0) {
        (**(code **)(*local_128 + 0x10))();
      }
      if (local_118 != (longlong *)0x0) {
        (**(code **)(*local_118 + 0x10))();
      }
    }
  }
  ReleaseSRWLockShared(SRWLock);
LAB_1408f001f:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408f100a FUN_1408f100a body=43 status=ok
// SIG undefined FUN_1408f100a(void)

void FUN_1408f100a(undefined8 param_1,longlong *param_2)

{
  FUN_1408f1035(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408f1035 FUN_1408f1035 body=75 status=ok
// SIG undefined FUN_1408f1035(void)

void FUN_1408f1035(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408f1080 FUN_1408f1080 body=69 status=ok
// SIG undefined FUN_1408f1080(void)

undefined8 FUN_1408f1080(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((((*(int *)(param_1 + 0x38) == -1) ||
       (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) != '\0')) && (param_3 != 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x1000) != 0)) {
    *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) | 0x10;
  }
  FUN_1408f10c6(param_1,param_2);
  return param_2;
}



// FUNCTION 1408f10c6 FUN_1408f10c6 body=2938 status=ok
// SIG undefined FUN_1408f10c6(void)

longlong * FUN_1408f10c6(longlong *param_1,longlong *param_2,undefined8 *param_3,byte param_4)

{
  int *piVar1;
  code *pcVar2;
  void *_Src;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 unaff_RBP;
  longlong *plVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  longlong lVar24;
  wchar_t **ppwVar25;
  int iVar26;
  longlong *plVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  wchar_t **local_d0;
  longlong *local_c8;
  longlong *local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a0;
  longlong local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong *local_80 [2];
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)((longlong)param_1 + 0x34) != -1) {
    lVar24 = param_1[5];
    if (((param_3 == (undefined8 *)0x0) || ((*(uint *)(lVar24 + 0xa4) & 0x10) != 0)) ||
       (param_3[0x14] + 7 >> 3 <= (longlong)DAT_14c761488)) {
      bVar3 = *(byte *)((longlong)param_3 + 0xf4);
      if ((bVar3 & 4) == 0) {
        bVar29 = false;
      }
      else {
        bVar29 = *(char *)((longlong)param_3 + 0xf6) == '\x01';
      }
      uVar19 = *(uint *)(param_1 + 6);
      if ((uVar19 >> 0xc & 1) != 0) {
        if (((int)param_1[7] == -1) || (*(char *)(lVar24 + 0x16c0) != '\0' && !bVar29)) {
          if (*(char *)(lVar24 + 0x16c0) == '\x02') {
            *(uint *)(param_1 + 6) = uVar19 | 0x2000;
            if ((uVar19 >> 0xd & 1) != 0) goto LAB_1408f11b8;
            bVar3 = *(byte *)((longlong)param_3 + 0xf4);
          }
          *(byte *)((longlong)param_3 + 0xf4) = bVar3 | 2;
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffef | (uint)(~bVar3 & 0x10);
          lVar24 = param_1[5];
        }
      }
LAB_1408f11b8:
      iVar26 = *(int *)(lVar24 + 0xa0) * 8 - *(int *)(lVar24 + 0x130);
      iVar7 = iVar26 + -0x235;
      iVar26 = iVar26 + -0x22e;
      if (-1 < iVar7) {
        iVar26 = iVar7;
      }
      ppwVar25 = (wchar_t **)(lVar24 + 0x1a00);
      *(undefined4 *)(lVar24 + 0x1a08) = 0;
      local_d8 = lVar24;
      if (*(int *)(lVar24 + 0x1a0c) < 0) {
        FUN_1401b0cea(ppwVar25,0);
      }
      lVar24 = param_1[5];
      local_d0 = ppwVar25;
      if ((*(byte *)(lVar24 + 0xa4) & 2) == 0) {
        (**(code **)(*param_1 + 0x2f8))(param_1,&local_b8,param_3,0);
        ppwVar25 = local_d0;
        if (local_d0 == &local_b8) {
          if (local_b8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*local_d0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          *(wchar_t **)(local_d8 + 0x1a00) = local_b8;
          local_b8 = (wchar_t *)0x0;
          *(undefined4 *)(local_d8 + 0x1a08) = local_b0;
          *(undefined4 *)(local_d8 + 0x1a0c) = local_ac;
        }
        lVar24 = param_1[5];
      }
      param_4 = *(int *)(local_d8 + 0x1a08) == 0 & param_4;
      uVar19 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_4);
      cVar4 = (**(code **)(**(longlong **)(lVar24 + 0x58) + 0x3c0))();
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x300))(param_1,param_3);
        uVar19 = (uint)param_4;
        if ((*(byte *)((longlong)param_3 + 0xf5) & 2) != 0) {
          uVar19 = 0;
        }
      }
      local_c8 = param_2;
      if ((((char)uVar19 == '\0') ||
          (lVar24 = param_1[5], *(int *)(lVar24 + 0x360) != *(int *)(param_3 + 0x1c))) ||
         ((((*(byte *)((longlong)param_3 + 0xf4) ^ *(byte *)(lVar24 + 0x374)) & 0x10) != 0 ||
          ((((*(char *)(lVar24 + 0x270) != '\x01' || (*(longlong *)(lVar24 + 0x268) == 0)) ||
            (*(longlong *)(lVar24 + 0x268) != *(longlong *)(lVar24 + 0x6c0))) ||
           ((longlong)iVar7 < *(longlong *)(lVar24 + 800) + param_3[0x14])))))) {
        local_e0 = 0;
      }
      else {
        FUN_1401177fa(lVar24 + 0x280,param_3[0x12]);
        *(byte *)(param_1[5] + 0x374) =
             *(byte *)(param_1[5] + 0x374) | *(byte *)((longlong)param_3 + 0xf4) & 2;
        *(byte *)(param_1[5] + 0x374) =
             *(byte *)(param_1[5] + 0x374) | *(byte *)((longlong)param_3 + 0xf4) & 4;
        lVar24 = param_1[5];
        local_e0 = *(longlong *)(lVar24 + 0x278);
        param_3 = (undefined8 *)(lVar24 + 0x280);
        *(int *)(lVar24 + 0x124) =
             *(int *)(lVar24 + 0x124) + (*(int *)(lVar24 + 600) - *(int *)(lVar24 + 0x6c0));
        FUN_14278fe74(lVar24 + 0x250,lVar24 + 0x620);
        piVar1 = (int *)(*(longlong *)(param_1[5] + 0x58) + 0x358);
        *piVar1 = *piVar1 + -1;
      }
      param_2 = local_c8;
      lVar24 = local_d8;
      plVar13 = (longlong *)param_3[0x14];
      if ((longlong)iVar7 < (longlong)plVar13) {
        if ((longlong)plVar13 < 1) {
          uVar19 = 0;
        }
        else {
          local_c0 = (longlong *)((longlong)(iVar26 >> 3) << 3);
          lVar24 = param_3[0x12];
          do {
            puVar9 = (undefined8 *)FUN_14001cc68(0x138,0x10);
            lVar16 = param_1[5];
            FUN_144a679e2(puVar9,*(undefined8 *)(lVar16 + 0x68),
                          (longlong)
                          ((*(int *)(lVar16 + 0xa0) * 8 - *(int *)(lVar16 + 0x130)) + -0x235));
            *puVar9 = &PTR_FUN_14a8a3730;
            puVar9[0x19] = 0;
            puVar9[0x1a] = param_1;
            puVar9[0x1b] = 0;
            *(undefined4 *)(puVar9 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x34);
            *(longlong *)((longlong)puVar9 + 0xe4) = param_1[8];
            *(undefined1 *)((longlong)puVar9 + 0xf4) = 0;
            *(undefined8 *)((longlong)puVar9 + 0xec) = 0;
            *(byte *)((longlong)puVar9 + 0xf5) = *(byte *)((longlong)puVar9 + 0xf5) & 0xf8;
            *(undefined1 *)((longlong)puVar9 + 0xf6) = 0;
            puVar9[0x25] = 0;
            puVar9[0x26] = 0x400000000;
            puVar9[0x21] = 0;
            puVar9[0x22] = 0;
            puVar9[0x1f] = 0;
            puVar9[0x20] = 0;
            *(byte *)((longlong)puVar9 + 0x2a) =
                 *(byte *)((longlong)puVar9 + 0x2a) & 0xfd | *(char *)(param_1[5] + 0x158) * '\x02';
            ppuVar10 = &PTR_FUN_14a8a3730;
            if (0x1fe < *(int *)((longlong)param_1 + 0x4c)) {
              *(byte *)((longlong)puVar9 + 0x29) = *(byte *)((longlong)puVar9 + 0x29) | 2;
              lVar16 = puVar9[0x11];
              ppuVar10 = &PTR_FUN_14a8a3730;
              if (lVar16 != 0) {
                do {
                  *(byte *)(lVar16 + 0x29) = *(byte *)(lVar16 + 0x29) | 2;
                  lVar16 = *(longlong *)(lVar16 + 0x88);
                } while (lVar16 != 0);
                ppuVar10 = (undefined **)*puVar9;
              }
            }
            plVar20 = local_c0;
            if ((longlong)plVar13 < (longlong)local_c0) {
              plVar20 = plVar13;
            }
            (*(code *)ppuVar10[0x2f])(puVar9,lVar24,plVar20);
            iVar7 = *(int *)(local_d8 + 0x1a08);
            *(uint *)(local_d8 + 0x1a08) = iVar7 + 1U;
            if (*(uint *)(local_d8 + 0x1a0c) < iVar7 + 1U) {
              FUN_1401b0d4a(local_d0,iVar7);
            }
            *(undefined8 **)(*local_d0 + (longlong)iVar7 * 4) = puVar9;
            lVar24 = lVar24 + ((longlong)plVar20 >> 3);
            plVar27 = (longlong *)((longlong)plVar13 - (longlong)plVar20);
            bVar29 = (longlong)plVar20 <= (longlong)plVar13;
            plVar13 = plVar27;
          } while (plVar27 != (longlong *)0x0 && bVar29);
          uVar19 = 0;
          lVar24 = local_d8;
          ppwVar25 = local_d0;
          param_2 = local_c8;
        }
      }
      else {
        iVar7 = *(int *)(local_d8 + 0x1a08);
        *(uint *)(local_d8 + 0x1a08) = iVar7 + 1U;
        if (*(uint *)(local_d8 + 0x1a0c) < iVar7 + 1U) {
          FUN_1401b0d4a(ppwVar25,iVar7);
        }
        *(undefined8 **)(*ppwVar25 + (longlong)iVar7 * 4) = param_3;
      }
      *param_2 = -1;
      iVar7 = *(int *)((longlong)param_1 + 0x4c) + *(int *)(lVar24 + 0x1a08);
      uVar8 = *(uint *)((longlong)param_3 + 0xf4);
      uVar18 = uVar8 >> 2 & 1 | 0x200;
      if (((0 < DAT_14c761480) && (DAT_14c761480 <= *(int *)(lVar24 + 0x1a08))) &&
         (((*(byte *)(param_1[5] + 0xa4) & 2) == 0 && (iVar7 < (int)uVar18)))) {
        *(byte *)((longlong)param_3 + 0xf4) = (byte)uVar8 | 0x10;
        *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 2;
        uVar8 = (uint)*(byte *)((longlong)param_3 + 0xf4);
      }
      if (((uVar8 & 0x10) == 0) || (iVar7 < (int)uVar18)) {
        uVar11 = (ulonglong)*(uint *)(lVar24 + 0x1a08);
        if (0 < (int)*(uint *)(lVar24 + 0x1a08)) {
          local_c0 = param_1 + 0xb;
          uVar28 = 0;
          do {
            lVar12 = local_e0;
            lVar16 = *(longlong *)(*ppwVar25 + uVar28 * 4);
            bVar14 = *(byte *)((longlong)param_3 + 0xf4) & 0x10;
            bVar3 = *(byte *)(lVar16 + 0xf4);
            *(byte *)(lVar16 + 0xf4) = bVar3 & 0xef | bVar14;
            bVar15 = *(byte *)((longlong)param_3 + 0xf4) & 2;
            *(byte *)(lVar16 + 0xf4) = bVar3 & 0xed | bVar14 | bVar15;
            bVar21 = *(byte *)((longlong)param_3 + 0xf4) & 4;
            *(byte *)(lVar16 + 0xf4) = bVar3 & 0xe9 | bVar14 | bVar15 | bVar21;
            *(undefined1 *)(lVar16 + 0xf6) = *(undefined1 *)((longlong)param_3 + 0xf6);
            bVar22 = *(byte *)((longlong)param_3 + 0xf4) & 8;
            bVar5 = bVar3 & 0xe1 | bVar14 | bVar15 | bVar21 | bVar22;
            *(byte *)(lVar16 + 0xf4) = bVar5;
            *(undefined4 *)(lVar16 + 0xe0) = *(undefined4 *)(param_3 + 0x1c);
            *(undefined8 *)(lVar16 + 0xe4) = *(undefined8 *)((longlong)param_3 + 0xe4);
            if ((*(byte *)(lVar16 + 0xf5) & 5) == 0) {
              *(byte *)(lVar16 + 0xf5) =
                   *(byte *)((longlong)param_3 + 0xf5) & 2 | *(byte *)(lVar16 + 0xf5) & 0xfa;
            }
            if (1 < *(int *)(lVar24 + 0x1a08)) {
              bVar6 = bVar3 & 0x81 | bVar14 | bVar15;
              bVar5 = 0;
              if (uVar28 != 0) {
                bVar15 = 0;
              }
              bVar23 = (uVar28 == 0) << 6;
              *(byte *)(lVar16 + 0xf4) = bVar23 | bVar6 | bVar21 | bVar22 | 0x20;
              bVar6 = (uVar28 == *(int *)(lVar24 + 0x1a08) - 1) << 7;
              *(byte *)(lVar16 + 0xf4) =
                   bVar15 | bVar23 | bVar3 & 1 | bVar14 | bVar21 | bVar22 | 0x20 | bVar6;
              if ((*(byte *)((longlong)param_3 + 0xf4) & 4) != 0) {
                bVar5 = (uVar28 == *(int *)(lVar24 + 0x1a08) - 1) << 2;
              }
              bVar5 = bVar15 | bVar23 | bVar3 & 1 | bVar14 | bVar22 | 0x20 | bVar6 | bVar5;
              *(byte *)(lVar16 + 0xf4) = bVar5;
            }
            lVar17 = param_1[5];
            if (*(char *)(lVar17 + 0x16c0) == '\0') {
              if ((bVar5 & 0x10) == 0) {
                lVar12 = 0;
              }
              else {
                if (local_e0 == 0) {
                  *(undefined8 *)(lVar16 + 200) = 0;
                  iVar7 = *(int *)(*(longlong *)(param_1[5] + 0x1400) +
                                  (longlong)*(int *)((longlong)param_1 + 0x34) * 4) + 1;
                  *(int *)(*(longlong *)(param_1[5] + 0x1400) +
                          (longlong)*(int *)((longlong)param_1 + 0x34) * 4) = iVar7;
                  *(int *)(lVar16 + 0xec) = iVar7;
                  iVar7 = *(int *)((longlong)param_1 + 0x4c) + 1;
                  *(int *)((longlong)param_1 + 0x4c) = iVar7;
                  lVar12 = *(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0x288);
                  if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) {
                    FUN_1456cec3c(lVar12);
                    iVar7 = *(int *)((longlong)param_1 + 0x4c);
                  }
                  FUN_1435a834a(lVar12,DAT_14caf3210,(longlong)iVar7);
                  lVar12 = FUN_14001cc68(0x138,0x10);
                  FUN_14072f9e6(lVar12,lVar16);
                  plVar13 = local_c0;
                  do {
                    plVar20 = plVar13;
                    lVar16 = *plVar20;
                    plVar13 = (longlong *)(lVar16 + 200);
                  } while (lVar16 != 0);
                  *plVar20 = lVar12;
                  lVar16 = lVar12;
                }
                else {
                  *(undefined8 *)(lVar16 + 200) = *(undefined8 *)(local_e0 + 200);
                  FUN_1400e90aa(local_e0,lVar16);
                  lVar16 = lVar12;
                }
                lVar17 = param_1[5];
                lVar12 = lVar16;
              }
              *(longlong *)(lVar17 + 0x278) = lVar12;
              bVar5 = *(byte *)(lVar16 + 0xf4);
            }
            *(byte *)(lVar16 + 0xf4) = bVar5 & 0xfe;
            uVar8 = FUN_14358c6a4(param_1[5],lVar16,uVar19,0);
            if (((int)param_1[7] == -1) && ((*(byte *)((longlong)param_1 + 0x31) & 0x10) != 0)) {
              param_1[7] = (ulonglong)uVar8 * 0x100000001;
            }
            if ((*(byte *)(lVar16 + 0xf4) & 4) != 0) {
              (**(code **)(*param_1 + 0x2b0))(param_1);
            }
            if (uVar28 == 0) {
              *param_2 = (ulonglong)uVar8 * 0x100000001;
            }
            else {
              *(uint *)((longlong)param_2 + 4) = uVar8;
            }
            FUN_1400e90aa(param_1[5] + 0x280,lVar16);
            lVar16 = param_1[5];
            *(byte *)(lVar16 + 0x260) = *(byte *)(lVar16 + 0x649) >> 1 & 1;
            *(undefined8 *)(lVar16 + 0x268) = *(undefined8 *)(lVar16 + 0x6c0);
            uVar28 = uVar28 + 1;
            uVar11 = (ulonglong)*(int *)(lVar24 + 0x1a08);
            ppwVar25 = local_d0;
          } while ((longlong)uVar28 < (longlong)uVar11);
          uVar8 = (uint)*(byte *)((longlong)param_3 + 0xf4);
        }
        if (((uVar8 & 2) != 0) && (*(char *)(param_1[5] + 0x16c0) == '\0')) {
          param_1[7] = *param_2;
          uVar11 = (ulonglong)*(uint *)(lVar24 + 0x1a08);
        }
        if (0 < (int)uVar11) {
          lVar24 = 0;
          do {
            puVar9 = *(undefined8 **)(*ppwVar25 + lVar24 * 4);
            if (puVar9 != (undefined8 *)0x0 && puVar9 != param_3) {
              (**(code **)*puVar9)(puVar9,1);
              uVar11 = (ulonglong)*(uint *)(local_d8 + 0x1a08);
            }
            lVar24 = lVar24 + 1;
          } while ((int)lVar24 < (int)uVar11);
        }
      }
      else {
        local_b8 = L"ClientReliableBufferOverflow";
        local_b0 = 0x1c;
        FUN_1446e940c(local_84,&local_b8);
        local_b8 = L"NetworkErrors";
        local_b0 = 0xd;
        FUN_1446e940c(local_88,&local_b8);
        local_b8 = L"Outgoing reliable buffer overflow";
        local_b0 = 0x21;
        FUN_140208c1e(local_80,local_88,local_84,&local_b8);
        plVar13 = local_80[0];
        if (*(code **)(*local_80[0] + 0x50) != FUN_144828418) {
          plVar13 = (longlong *)(**(code **)(*local_80[0] + 0x50))();
        }
        FUN_1447a1fc0(plVar13);
        pcVar2 = *(code **)(*local_80[0] + 0x28);
        if (pcVar2 == FUN_14482841c) {
          plVar13 = local_80[0] + 3;
          if (local_80[0][5] != 0) {
            plVar13 = (longlong *)(local_80[0][5] + 8);
          }
        }
        else if (pcVar2 == (code *)&LAB_14010c34c) {
          plVar13 = local_80[0] + 2;
        }
        else {
          plVar13 = (longlong *)(*pcVar2)(local_80[0]);
        }
        local_70 = (void *)0x0;
        local_68 = (int)plVar13[1];
        lVar24 = (longlong)local_68;
        _Src = (void *)*plVar13;
        if (lVar24 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,_Src,lVar24 * 2);
        }
        if (local_80[0] != (longlong *)0x0) {
          (**(code **)(*local_80[0] + 0x10))();
        }
        lVar24 = param_1[5];
        FUN_1459b235e(&local_b8,0x40);
        FUN_143587eda(lVar24,&local_b8);
        if (local_90 != 0) {
          (**(code **)(local_90 + -0x10))(local_90 + -0x10);
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_147a4786e(param_1[5],&local_70);
        (**(code **)(*(longlong *)param_1[5] + 0x2f8))((longlong *)param_1[5],1);
        lVar24 = param_1[5];
        FUN_1459b235e(&local_b8,0x40);
        FUN_143587ad8(lVar24,&local_b8);
        if (local_90 != 0) {
          (**(code **)(local_90 + -0x10))(local_90 + -0x10);
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1408f1a33;
    }
    FUN_14572541c(param_3);
  }
  *param_2 = -1;
LAB_1408f1a33:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408f1c4a FUN_1408f1c4a body=345 status=ok
// SIG undefined FUN_1408f1c4a(void)

undefined8 FUN_1408f1c4a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408f1da4();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((lVar3 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    iVar4 = FUN_1448332aa(param_2,&DAT_14b404640);
    if (iVar4 < 1) {
      FUN_1401252ea(&local_40);
      plVar1 = (longlong *)(lVar3 + 0x100);
      if (plVar1 == &local_40) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar3 + 0x100) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar3 + 0x100) = local_40;
        local_40 = 0;
        *(undefined4 *)(lVar3 + 0x108) = local_38;
        *(undefined4 *)(lVar3 + 0x10c) = local_34;
      }
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x58))(param_2);
      if ((longlong)(int)plVar5[1] != 0) {
        puVar6 = (undefined4 *)*plVar5;
        puVar2 = puVar6 + (longlong)(int)plVar5[1] * 10;
        do {
          FUN_14278ffaa(puVar6,&local_48);
          local_58 = *puVar6;
          uStack_54 = puVar6[1];
          uStack_50 = puVar6[2];
          uStack_4c = puVar6[3];
          FUN_1459476e6(plVar1,&local_58,puVar6[4],local_48);
          puVar6 = puVar6 + 10;
        } while (puVar6 != puVar2);
      }
      local_68 = 0x18be4cea;
      uStack_64 = 0x6cd643d5;
      uStack_60 = 0x9717bcb0;
      uStack_5c = 0xb4d336a8;
      FUN_1459476e6(plVar1,&local_68,0,DAT_14c9a7794);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f1da4 FUN_1408f1da4 body=948 status=ok
// SIG undefined FUN_1408f1da4(void)

void FUN_1408f1da4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  code *local_80;
  undefined1 *local_78;
  undefined2 **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    local_58 = 0;
    uStack_50 = 0;
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if (lVar2 != 0) {
      lVar8 = FUN_1446f4bba();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        FUN_14010318a(lVar2,&local_68,0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_58 = CONCAT44(uStack_64,local_68);
        uStack_50 = CONCAT44(uStack_5c,uStack_60);
        FUN_14021219d(param_2);
LAB_1408f1f0c:
        FUN_14047320e(lVar2,param_2,*(undefined8 *)(param_1 + 0x10),0);
        goto LAB_1408f1f1e;
      }
    }
    FUN_14021219d(param_2,&local_58);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_14021219d(param_2,&local_58);
    lVar2 = local_58;
    if ((int)uStack_50 < 2) goto LAB_1408f1f1e;
    if (DAT_14c948fa0 == 0) {
      local_48 = &DAT_1427db2a2;
      lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar8;
      FUN_1446f470e(&local_68,L"ScriptStruct",1);
      local_78 = &LAB_1468915ce;
      local_80 = FUN_1427dc742;
      local_90 = L"Engine";
      local_88 = 199;
      local_98 = 0x10;
      local_a0 = 0x10000020;
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,8);
      local_70 = &local_48;
      FUN_14574b4b2(lVar8);
      DAT_14c948fa0 = lVar8;
      uVar3 = FUN_1446f8646();
      lVar8 = DAT_14c948fa0;
      uVar4 = FUN_1449e2fb2();
      local_a8 = L"ScriptStruct";
      FUN_14574b446(uVar4,lVar8,uVar3,L"/Script/CoreUObject");
    }
    lVar2 = FUN_140277b32(DAT_14c948fa0,0,lVar2,0);
    if (lVar2 != 0) {
      if (DAT_14cacff78 == 0) {
        uVar3 = FUN_140002dac();
        DAT_14cacff78 = FUN_140002ddd(FUN_1463b3fe3,uVar3,L"ActorComponentInstanceData");
        if (DAT_14cacff78 == 0) goto LAB_1408f20eb;
      }
      if ((*(int *)(DAT_14cacff78 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cacff78 + 0x38) * 8)
          == DAT_14cacff78 + 0x30)) {
        uVar5 = *(uint *)(lVar2 + 0xc);
        *(uint *)(param_1 + 8) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar1 = *(int *)(lVar8 + 0x10);
        if (iVar1 == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar1 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar1 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar1 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar1 = iVar7;
          }
          *(int *)(param_1 + 0xc) = iVar1;
          if (iVar1 == 0) goto LAB_1408f1f0c;
        }
        else {
          *(int *)(param_1 + 0xc) = iVar1;
        }
        uVar5 = *(uint *)(param_1 + 8);
        if ((((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
            (plVar6 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0)) &&
           ((((int)plVar6[2] == iVar1 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
            (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
          uVar5 = -*(int *)((longlong)plVar6 + 0x5c) &
                  ((int)plVar6[0xb] + *(int *)((longlong)plVar6 + 0x5c)) - 1U;
          uVar3 = FUN_14001cc68((longlong)(int)(uVar5 + (uVar5 == 0)));
          *(undefined8 *)(param_1 + 0x10) = uVar3;
          (**(code **)(*plVar6 + 0x2e8))(plVar6,uVar3,1);
          *(undefined1 *)(param_1 + 0x20) = 1;
        }
        goto LAB_1408f1f0c;
      }
    }
LAB_1408f20eb:
    FUN_14572541c(param_2);
  }
LAB_1408f1f1e:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408f215a FUN_1408f215a body=61 status=ok
// SIG undefined FUN_1408f215a(void)

ulonglong FUN_1408f215a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(param_1[-0x35b] + 0x660))(param_1 + -0x35b);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 1408f2198 FUN_1408f2198 body=509 status=ok
// SIG undefined FUN_1408f2198(void)

undefined8 FUN_1408f2198(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_a8 [32];
  char local_88 [16];
  longlong *local_78;
  undefined4 local_60 [2];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x2670);
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  else {
    local_88[0] = '\0';
    local_60[0] = 0;
    FUN_1456bb102(local_88,param_1);
    FUN_1448729ea(lVar2 + 0x458,local_58,local_88);
    uVar5 = FUN_140168b7a(local_58,1);
    uVar6 = (ulonglong)uVar5;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar7 = local_58;
      if (0x18 < local_40) {
        ppppuVar7 = (undefined8 ****)local_58[0];
      }
      (*pcVar3)(ppppuVar7);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_1448173f8(local_60);
    if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  local_88[0] = '\0';
  local_60[0] = 0;
  FUN_1456bb102(local_88,param_1);
  FUN_1448729ea(param_1 + 0x2620,local_58,local_88);
  bVar4 = FUN_140168b7a(local_58,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar7 = local_58;
    if (0x18 < local_40) {
      ppppuVar7 = (undefined8 ****)local_58[0];
    }
    (*pcVar3)(ppppuVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_1448173f8(local_60);
  if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 & bVar4 & *(byte *)(param_1 + 0x1d3b));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f23a4 FUN_1408f23a4 body=115 status=ok
// SIG undefined FUN_1408f23a4(void)

undefined8 FUN_1408f23a4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
    (**(code **)(*param_1 + 0x60))();
    if ((char)param_1[8] == '\x01') {
      bifrost::telemetry::rowBuilder::vEndObject(*(rowBuilder **)param_1[7]);
      bifrost::telemetry::rowBuilder::vBeginObject(*(rowBuilder **)param_1[7]);
    }
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4110);
    bifrost::telemetry::rowBuilder::vDouble(*(rowBuilder **)param_1[7],*(double *)(param_3 + 0x18));
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1408f2418 FUN_1408f2418 body=212 status=ok
// SIG undefined FUN_1408f2418(void)

undefined8 FUN_1408f2418(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4130);
    bifrost::telemetry::rowBuilder::vDouble
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),*param_3);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      bifrost::telemetry::rowBuilder::vEndObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
      bifrost::telemetry::rowBuilder::vBeginObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
    }
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4138);
    bifrost::telemetry::rowBuilder::vDouble
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3[1]);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      bifrost::telemetry::rowBuilder::vEndObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
      bifrost::telemetry::rowBuilder::vBeginObject((rowBuilder *)**(undefined8 **)(param_1 + 0x38));
    }
    FUN_1401e7ce8(param_1,param_2,&DAT_14c9a4140);
    bifrost::telemetry::rowBuilder::vDouble
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3[2]);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1408f24ec FUN_1408f24ec body=53 status=ok
// SIG undefined FUN_1408f24ec(void)

void FUN_1408f24ec(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1408f2522();
  }
  return;
}



// FUNCTION 1408f2522 FUN_1408f2522 body=3858 status=ok
// SIG undefined FUN_1408f2522(void)

void FUN_1408f2522(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  char param_5,longlong param_6,int param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 uVar29;
  byte bVar30;
  byte bVar31;
  uint uVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  longlong *plVar36;
  uint uVar37;
  uint uVar38;
  undefined4 *puVar39;
  byte bVar40;
  bool bVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_178 [32];
  longlong local_158;
  byte local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong local_128;
  uint local_11c;
  undefined8 *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = param_4;
  local_130 = param_3;
  plVar26 = param_2;
  iVar24 = DAT_14c763918;
  while (DAT_14c763918 = iVar24, plVar26 != (longlong *)0x0) {
    if ((char)plVar26[0x3f] == '\x01') {
      if (*(char *)((longlong)plVar26 + 0x1f9) != '\0') {
        bVar42 = false;
        goto LAB_1408f2912;
      }
      break;
    }
    plVar26 = (longlong *)FUN_1401f6e4a(plVar26 + 3);
    iVar24 = DAT_14c763918;
  }
  bVar42 = false;
  if ((-1 < iVar24) && (bVar42 = false, DAT_14c763914 == 1)) {
    FUN_14188029e();
    uVar20 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
             -0x7a143595;
    uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
    uVar20 = uVar20 >> 0x10 ^ uVar20;
    uVar32 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
    uVar32 = uVar20 >> 0xd ^ (uVar32 >> 0x10 ^ uVar32) - uVar20;
    uVar37 = uVar32 << 8 ^ (-0x61c88647 - uVar20) - uVar32;
    uVar38 = uVar37 >> 0xd ^ (uVar20 - uVar32) - uVar37;
    uVar20 = uVar38 >> 0xc ^ (uVar32 - uVar37) - uVar38;
    uVar32 = uVar20 << 0x10 ^ (uVar37 - uVar38) - uVar20;
    uVar37 = uVar32 >> 5 ^ (uVar38 - uVar20) - uVar32;
    uVar38 = uVar37 >> 3 ^ (uVar20 - uVar32) - uVar37;
    uVar20 = uVar38 << 10 ^ (uVar32 - uVar37) - uVar38;
    uVar20 = uVar20 >> 0xf ^ uVar37 - (uVar38 + uVar20);
    local_100 = param_3;
    uStack_f8 = param_2;
    iVar21 = FUN_143d206b2(uVar20);
    iVar22 = DAT_14cb7a570;
    iVar23 = DAT_14cb7a548;
    if (iVar21 == -1) {
LAB_1408f270c:
      local_128 = param_1;
      if (DAT_14cb7a574 == 0) {
        iVar22 = DAT_14cb7a548 + 1;
        bVar42 = DAT_14cb7a54c == DAT_14cb7a548;
        DAT_14cb7a548 = iVar22;
        if (bVar42) {
          FUN_148834b1a(iVar23);
        }
        uVar32 = DAT_14cb7a568;
        if (DAT_14cb7a568 == 0) {
          iVar22 = -1;
        }
        else {
          iVar22 = DAT_14cb7a568 + 0x1e;
          if (-1 < (int)(DAT_14cb7a568 - 1)) {
            iVar22 = DAT_14cb7a568 - 1;
          }
          iVar22 = iVar22 >> 5;
        }
        uVar37 = DAT_14cb7a568 + 0x1f;
        if (-1 < (int)DAT_14cb7a568) {
          uVar37 = DAT_14cb7a568;
        }
        uVar38 = DAT_14cb7a568 + 1;
        if ((int)uVar37 >> 5 != iVar22) {
          FUN_1403a3a36(&DAT_14cb7a550);
          uVar38 = DAT_14cb7a568 + 1;
          uVar25 = DAT_14cb7a568 + 0x20;
          if (-1 < (int)uVar38) {
            uVar25 = uVar38;
          }
          iVar22 = uVar38 - (uVar25 & 0xffffffe0);
          if (iVar22 != 0) {
            puVar33 = &DAT_14cb7a550;
            if (DAT_14cb7a560 != (undefined *)0x0) {
              puVar33 = DAT_14cb7a560;
            }
            bVar40 = -(char)iVar22;
            DAT_14cb7a568 = uVar38;
            *(uint *)(puVar33 + (longlong)((int)uVar25 >> 5) * 4) =
                 (uint)(*(int *)(puVar33 + (longlong)((int)uVar25 >> 5) * 4) << (bVar40 & 0x1f)) >>
                 (bVar40 & 0x1f);
            uVar38 = DAT_14cb7a568;
          }
        }
        DAT_14cb7a568 = uVar38;
        lVar27 = (longlong)iVar23;
        puVar33 = &DAT_14cb7a550;
        if (DAT_14cb7a560 != (undefined *)0x0) {
          puVar33 = DAT_14cb7a560;
        }
        bVar40 = (byte)uVar32 & 0x1f;
        *(uint *)(puVar33 + (longlong)((int)uVar37 >> 5) * 4) =
             *(uint *)(puVar33 + (longlong)((int)uVar37 >> 5) * 4) &
             (-2 << bVar40 | 0xfffffffeU >> 0x20 - bVar40);
        iVar22 = iVar23;
      }
      else {
        puVar33 = &DAT_14cb79540;
        if (DAT_14cb7a540 != (undefined *)0x0) {
          puVar33 = DAT_14cb7a540;
        }
        lVar27 = (longlong)DAT_14cb7a570;
        DAT_14cb7a570 = *(int *)(puVar33 + lVar27 * 0x20 + 4);
        DAT_14cb7a574 = DAT_14cb7a574 + -1;
        if (DAT_14cb7a574 != 0) {
          *(undefined4 *)(puVar33 + (longlong)DAT_14cb7a570 * 0x20) = 0xffffffff;
        }
      }
      puVar33 = &DAT_14cb7a550;
      if (DAT_14cb7a560 != (undefined *)0x0) {
        puVar33 = DAT_14cb7a560;
      }
      iVar23 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar23 = iVar22;
      }
      *(uint *)(puVar33 + (longlong)(iVar23 >> 5) * 4) =
           *(uint *)(puVar33 + (longlong)(iVar23 >> 5) * 4) | 1 << ((byte)iVar22 & 0x1f);
      puVar33 = DAT_14cb7a540;
      if (DAT_14cb7a540 == (undefined *)0x0) {
        puVar33 = &DAT_14cb79540;
      }
      lVar27 = lVar27 * 0x20;
      puVar39 = (undefined4 *)(puVar33 + lVar27);
      puVar2 = (undefined4 *)(puVar33 + lVar27);
      *puVar2 = (undefined4)local_100;
      puVar2[1] = local_100._4_4_;
      puVar2[2] = (undefined4)uStack_f8;
      puVar2[3] = uStack_f8._4_4_;
      *(undefined4 *)(puVar33 + lVar27 + 0x10) = 0;
      *(undefined4 *)(puVar33 + lVar27 + 0x18) = 0xffffffff;
      uVar32 = DAT_14cb7a548 - DAT_14cb7a574;
      if ((uVar32 == 1) || (iVar23 = FUN_143d206b2(uVar20), iVar23 == -1)) {
        uVar3 = (ulonglong)(((uVar32 >> 1) - 1) + (uint)(uVar32 >> 1 == 0)) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar23 = 1 << ((byte)lVar27 & 0x1f);
        if ((uint)lVar27 < 6) {
          iVar23 = 0x40;
        }
        if (uVar32 < 4) {
          iVar23 = 0x40;
        }
        if (((int)uVar32 < 1) || (iVar23 <= DAT_14cb7a680)) {
          uVar20 = DAT_14cb7a680 - 1U & uVar20;
          puVar39[7] = uVar20;
          puVar33 = DAT_14cb7a678;
          if (DAT_14cb7a678 == (undefined *)0x0) {
            puVar33 = &DAT_14cb7a578;
          }
          puVar39[6] = *(undefined4 *)
                        (puVar33 + ((longlong)DAT_14cb7a680 - 1U & (longlong)(int)uVar20) * 4);
          puVar33 = DAT_14cb7a678;
          if (DAT_14cb7a678 == (undefined *)0x0) {
            puVar33 = &DAT_14cb7a578;
          }
          *(int *)(puVar33 + ((longlong)DAT_14cb7a680 - 1U & (longlong)(int)uVar20) * 4) = iVar22;
        }
        else {
          DAT_14cb7a680 = iVar23;
          FUN_1418814fa(&DAT_14cb79540);
        }
      }
      else {
        puVar33 = DAT_14cb7a540;
        if (DAT_14cb7a540 == (undefined *)0x0) {
          puVar33 = &DAT_14cb79540;
        }
        uVar11 = *puVar39;
        uVar12 = puVar39[1];
        uVar13 = puVar39[2];
        uVar14 = puVar39[3];
        *(undefined8 *)(puVar33 + (longlong)iVar23 * 0x20 + 0x10) = *(undefined8 *)(puVar39 + 4);
        puVar39 = (undefined4 *)(puVar33 + (longlong)iVar23 * 0x20);
        *puVar39 = uVar11;
        puVar39[1] = uVar12;
        puVar39[2] = uVar13;
        puVar39[3] = uVar14;
        FUN_148834b98(iVar22);
      }
      puVar33 = &DAT_14cb79540;
      if (DAT_14cb7a540 != (undefined *)0x0) {
        puVar33 = DAT_14cb7a540;
      }
      puVar33 = puVar33 + (longlong)iVar22 * 0x20;
      param_1 = local_128;
      param_4 = local_138;
      param_3 = local_130;
    }
    else {
      puVar33 = &DAT_14cb79540;
      if (DAT_14cb7a540 != (undefined *)0x0) {
        puVar33 = DAT_14cb7a540;
      }
      if (puVar33 + (longlong)iVar21 * 0x20 == (undefined *)0x0) goto LAB_1408f270c;
      puVar33 = puVar33 + (longlong)iVar21 * 0x20;
    }
    iVar23 = *(int *)(puVar33 + 0x10);
    if (iVar23 <= iVar24) {
      iVar23 = iVar23 + 1;
      *(int *)(puVar33 + 0x10) = iVar23;
    }
    bVar42 = iVar24 < iVar23;
  }
LAB_1408f2912:
  if ((param_2 != (longlong *)0x0) && (plVar26 = param_2, !bVar42)) {
    do {
      fVar44 = DAT_14c763904;
      if ((char)plVar26[0x3e] == '\x01') {
        plVar36 = param_2;
        if (*(char *)((longlong)plVar26 + 0x1f1) != '\0') goto LAB_1408f2966;
        break;
      }
      plVar26 = (longlong *)FUN_1401f6e4a(plVar26 + 3);
    } while (plVar26 != (longlong *)0x0);
  }
  goto LAB_1408f2ba9;
  while (plVar36 = (longlong *)FUN_1401f6e4a(plVar36 + 3), plVar36 != (longlong *)0x0) {
LAB_1408f2966:
    if ((char)plVar36[0x3e] == '\x01') {
      if (*(char *)((longlong)plVar36 + 0x1f2) == '\x01') {
        fVar44 = *(float *)((longlong)plVar36 + 500);
      }
      break;
    }
  }
  if (DAT_14c7638f8 == 1) {
    fVar43 = 0.0;
    fVar44 = (float)(~-(uint)(0.0 < fVar44) & (uint)DAT_14c763904 |
                    (uint)fVar44 & -(uint)(0.0 < fVar44));
    dVar4 = *(double *)(param_4 + 0x28);
    dVar5 = *(double *)(param_4 + 0x30);
    dVar6 = *(double *)(param_4 + 0x38);
    FUN_14188029e();
    puVar34 = DAT_14cb7ba88;
    if (DAT_14cb7ba88 == (undefined8 *)0x0) {
      puVar34 = &DAT_14cb7a688;
    }
    if ((longlong)(int)DAT_14cb7ba90 != 0) {
      local_11c = DAT_14c76390c;
      lVar27 = 0;
      do {
        dVar9 = *(double *)((longlong)puVar34 + lVar27 + 0x10) - dVar6;
        dVar46 = *(double *)((longlong)puVar34 + lVar27 + 8) - dVar5;
        dVar8 = *(double *)((longlong)puVar34 + lVar27) - dVar4;
        dVar7 = *(double *)((longlong)puVar34 + lVar27 + 0x18);
        dVar47 = dVar7 + (double)fVar44 + 9.999999747378752e-05;
        dVar10 = 0.0;
        if (0.0 <= dVar47) {
          dVar10 = dVar47;
        }
        fVar45 = 0.0;
        if ((dVar9 * dVar9 + dVar8 * dVar8 + dVar46 * dVar46 <= dVar10 * dVar10) &&
           ((DAT_14c763908 <= fVar44 || (fVar45 = DAT_14c763910, dVar7 < (double)DAT_14c763908)))) {
          uVar20 = 0x3f800000;
          if (dVar7 < (double)DAT_14c763908) {
            uVar20 = DAT_14c76390c;
          }
          fVar45 = (float)(-(uint)(fVar44 < DAT_14c763908) & 0x3f800000 |
                          ~-(uint)(fVar44 < DAT_14c763908) & uVar20);
        }
        fVar43 = fVar43 + fVar45;
        if (DAT_14c763900 < fVar43) {
          bVar42 = true;
          goto LAB_1408f2ba9;
        }
        lVar27 = lVar27 + 0x28;
      } while ((longlong)(int)DAT_14cb7ba90 * 0x28 != lVar27);
    }
    FUN_14188029e();
    uVar20 = DAT_14cb7ba90;
    lVar27 = (longlong)(int)DAT_14cb7ba90;
    DAT_14cb7ba90 = DAT_14cb7ba90 + 1;
    if (DAT_14cb7ba94 < DAT_14cb7ba90) {
      FUN_148834c26(uVar20);
    }
    puVar34 = &DAT_14cb7a688;
    if (DAT_14cb7ba88 != (undefined8 *)0x0) {
      puVar34 = DAT_14cb7ba88;
    }
    puVar34[lVar27 * 5] = dVar4;
    puVar34[lVar27 * 5 + 1] = dVar5;
    puVar34[lVar27 * 5 + 2] = dVar6;
    puVar34[lVar27 * 5 + 3] = (double)fVar44;
    *(undefined4 *)(puVar34 + lVar27 * 5 + 4) = 0;
    param_3 = local_130;
  }
LAB_1408f2ba9:
  if (param_5 == '\0') {
    bVar41 = false;
    bVar40 = 0;
  }
  else {
    lVar27 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
    if (lVar27 == 0) {
      bVar41 = false;
    }
    else {
      iVar24 = FUN_14490d72a(lVar27);
      bVar41 = iVar24 - 1U < 2;
    }
    bVar40 = bVar41 ^ 1;
  }
  if (!bVar42) {
    cVar19 = FUN_1405bb4f2(param_3);
    if ((((*(byte *)(param_6 + 0x40) & 0x10) == 0) &&
        (lVar27 = FUN_1401f6d90(param_2,0), lVar27 != 0)) &&
       ((cVar19 == '\0' ||
        ((*(char *)(lVar27 + 8) != '\x01' || (lVar27 = FUN_1401f6d90(param_2,1), lVar27 != 0)))))) {
      local_140 = param_6;
      local_148 = 0;
      local_158 = param_4;
      local_150 = bVar40;
      FUN_140845a64(param_1,param_2,lVar27,param_3);
    }
    if ((*(byte *)(param_6 + 0x40) & 0x20) == 0) {
      if (*(int *)(param_4 + 0xb4) == 0) {
LAB_1408f31ac:
        uVar29 = 0;
      }
      else {
        uVar20 = *(uint *)(param_4 + 0xb0);
        uVar29 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar34 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar34 == (undefined8 *)0x0) ||
             ((*(int *)(puVar34 + 2) != *(int *)(param_4 + 0xb4) ||
              ((*(uint *)(puVar34 + 1) & 0x10200000) != 0)))) goto LAB_1408f31ac;
          uVar29 = *puVar34;
        }
      }
      lVar28 = FUN_1401f29e8(param_2,uVar29,0,&local_100);
      lVar27 = lVar28;
      if (((lVar28 != 0) || (lVar27 = FUN_1418801d2(param_2,0), lVar27 != 0)) &&
         (((cVar19 == '\0' || (*(char *)(lVar27 + 8) != '\x01')) ||
          (((lVar28 != 0 && (lVar27 = FUN_1401f29e8(param_2,uVar29,1,&local_100), lVar27 != 0)) ||
           (lVar27 = FUN_1418801d2(param_2,1), lVar27 != 0)))))) {
        local_140 = param_6;
        local_158 = local_138;
        local_150 = bVar40;
        local_148 = uVar29;
        FUN_140845a64(param_1,param_2,lVar27,local_130);
      }
    }
  }
  if (bVar41 == false) goto LAB_1408f3100;
  FUN_140b4b994(&local_100,3);
  plVar26 = uStack_f8;
  puVar34 = local_100;
  if (uStack_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_f8 + 1) = (int)uStack_f8[1] + 1;
    UNLOCK();
    if (uStack_f8 != (longlong *)0x0) {
      LOCK();
      plVar36 = uStack_f8 + 1;
      *(int *)plVar36 = (int)*plVar36 + -1;
      UNLOCK();
      if ((int)*plVar36 == 0) {
        (**(code **)*uStack_f8)(uStack_f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar26 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
  }
  if (puVar34 != (undefined8 *)0x0) {
    if (param_7 != 0) {
      *(int *)(puVar34 + 2) = -param_7;
      *(undefined1 *)((longlong)puVar34 + 9) = 1;
    }
    puVar39 = &DAT_14c9485f0;
    if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
      puVar39 = (undefined4 *)param_2[1];
    }
    if (DAT_14c947fe0 == 0) {
      lVar27 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar27);
      DAT_14c947fe0 = lVar27;
    }
    FUN_140045924(DAT_14c947fe0,&local_108,puVar39,1);
    lVar27 = local_138;
    if (puVar34[3] != local_108) {
      puVar34[5] = 0;
    }
    puVar34[3] = local_108;
    *(undefined1 *)(puVar34 + 6) = 0;
    puVar34[9] = *(undefined8 *)(local_138 + 0x38);
    uVar29 = *(undefined8 *)(local_138 + 0x30);
    puVar34[7] = *(undefined8 *)(local_138 + 0x28);
    puVar34[8] = uVar29;
    uVar11 = *(undefined4 *)(local_138 + 0x44);
    uVar12 = *(undefined4 *)(local_138 + 0x48);
    uVar13 = *(undefined4 *)(local_138 + 0x4c);
    *(undefined4 *)(puVar34 + 10) = *(undefined4 *)(local_138 + 0x40);
    *(undefined4 *)((longlong)puVar34 + 0x54) = uVar11;
    *(undefined4 *)(puVar34 + 0xb) = uVar12;
    *(undefined4 *)((longlong)puVar34 + 0x5c) = uVar13;
    puVar34[0xc] = *(undefined8 *)(local_138 + 0x50);
    puVar34[0xd] = *(undefined8 *)(local_138 + 0xb0);
    lVar28 = FUN_14485cccc(local_138 + 0xb8);
    if (lVar28 == 0) {
      *(undefined4 *)(puVar34 + 0xe) = 0;
      iVar24 = 0;
    }
    else {
      uVar20 = *(uint *)(lVar28 + 0xc);
      *(uint *)(puVar34 + 0xe) = uVar20;
      if ((int)uVar20 < DAT_14c9647dc) {
        lVar28 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
      }
      else {
        lVar28 = 0;
      }
      iVar24 = *(int *)(lVar28 + 0x10);
      if (*(int *)(lVar28 + 0x10) == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar42 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        if (bVar42) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar24 = *(int *)(lVar28 + 0x10);
        bVar42 = iVar24 == 0;
        if (bVar42) {
          *(int *)(lVar28 + 0x10) = iVar23;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar42) {
          iVar24 = iVar23;
        }
      }
    }
    *(int *)((longlong)puVar34 + 0x74) = iVar24;
    puVar34[0xf] = *(undefined8 *)(lVar27 + 0xd8);
    puVar34[0x10] = *(undefined8 *)(lVar27 + 0xf0);
    FUN_14065c7a4(puVar34 + 0x12,param_6);
    FUN_14065c7a4(puVar34 + 0x14,param_6 + 0x10);
    FUN_14065c7f4(puVar34 + 0x16,param_6 + 0x20);
    FUN_14065c844(puVar34 + 0x18,param_6 + 0x30);
    *(undefined4 *)(puVar34 + 0x1a) = *(undefined4 *)(param_6 + 0x40);
    FUN_14065c894(puVar34 + 0x1c,param_6 + 0x50);
    FUN_14065c9c2(puVar34 + 0x24,param_6 + 0x90);
    lVar27 = local_138;
    uVar29 = *(undefined8 *)(param_6 + 0xd8);
    uVar11 = *(undefined4 *)(param_6 + 0xe0);
    uVar12 = *(undefined4 *)(param_6 + 0xe4);
    uVar13 = *(undefined4 *)(param_6 + 0xe8);
    uVar14 = *(undefined4 *)(param_6 + 0xec);
    uVar15 = *(undefined4 *)(param_6 + 0xf0);
    uVar16 = *(undefined4 *)(param_6 + 0xf4);
    uVar17 = *(undefined4 *)(param_6 + 0xf8);
    uVar18 = *(undefined4 *)(param_6 + 0xfc);
    puVar34[0x2c] = *(undefined8 *)(param_6 + 0xd0);
    puVar34[0x2d] = uVar29;
    *(undefined4 *)(puVar34 + 0x2e) = uVar11;
    *(undefined4 *)((longlong)puVar34 + 0x174) = uVar12;
    *(undefined4 *)(puVar34 + 0x2f) = uVar13;
    *(undefined4 *)((longlong)puVar34 + 0x17c) = uVar14;
    *(undefined4 *)(puVar34 + 0x30) = uVar15;
    *(undefined4 *)((longlong)puVar34 + 0x184) = uVar16;
    *(undefined4 *)(puVar34 + 0x31) = uVar17;
    *(undefined4 *)((longlong)puVar34 + 0x18c) = uVar18;
    uVar11 = *(undefined4 *)(param_6 + 0x100);
    uVar12 = *(undefined4 *)(param_6 + 0x104);
    uVar13 = *(undefined4 *)(param_6 + 0x108);
    *(undefined4 *)((longlong)puVar34 + 0x18c) = *(undefined4 *)(param_6 + 0xfc);
    *(undefined4 *)(puVar34 + 0x32) = uVar11;
    *(undefined4 *)((longlong)puVar34 + 0x194) = uVar12;
    *(undefined4 *)(puVar34 + 0x33) = uVar13;
    if (local_130 == (undefined8 *)0x0) {
      *(undefined4 *)(puVar34 + 0x34) = 0;
      iVar24 = 0;
    }
    else {
      uVar20 = *(uint *)((longlong)local_130 + 0xc);
      *(uint *)(puVar34 + 0x34) = uVar20;
      if ((int)uVar20 < DAT_14c9647dc) {
        lVar28 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8);
      }
      else {
        lVar28 = 0;
      }
      iVar24 = *(int *)(lVar28 + 0x10);
      if (*(int *)(lVar28 + 0x10) == 0) {
        LOCK();
        iVar24 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar42 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar24;
        if (bVar42) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar24 = *(int *)(lVar28 + 0x10);
        bVar42 = iVar24 == 0;
        if (bVar42) {
          *(int *)(lVar28 + 0x10) = iVar23;
          iVar24 = 0;
        }
        UNLOCK();
        if (bVar42) {
          iVar24 = iVar23;
        }
      }
    }
    *(int *)((longlong)puVar34 + 0x1a4) = iVar24;
    bVar31 = 0;
    bVar40 = 0;
    if ((*(byte *)(param_6 + 0x40) & 0x10) == 0) {
      bVar31 = 0;
      lVar28 = FUN_1401f6d90(param_2,0);
      if (lVar28 == 0) {
        bVar40 = 0;
      }
      else {
        bVar30 = *(byte *)(lVar28 + 0xbc) & 2;
        bVar31 = bVar30 >> 1;
        bVar40 = 0;
        if (bVar30 != 0) {
          bVar40 = *(byte *)(lVar28 + 0xbc) >> 2;
        }
      }
    }
    if ((*(byte *)(param_6 + 0x40) & 0x20) == 0) {
      iVar24 = *(int *)(lVar27 + 0xb4);
      if (iVar24 == 0) {
LAB_1408f322a:
        uVar29 = 0;
      }
      else {
        uVar20 = *(uint *)(lVar27 + 0xb0);
        uVar29 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar35 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar35 == (undefined8 *)0x0) ||
             ((*(int *)(puVar35 + 2) != iVar24 || ((*(uint *)(puVar35 + 1) & 0x10200000) != 0))))
          goto LAB_1408f322a;
          uVar29 = *puVar35;
        }
      }
      lVar27 = FUN_1401f29e8(param_2,uVar29,0,&local_100);
      if (((lVar27 != 0) || (lVar27 = FUN_1418801d2(param_2,0), lVar27 != 0)) &&
         ((*(byte *)(lVar27 + 0xbc) & 2) != 0)) {
        bVar40 = *(byte *)(lVar27 + 0xbc) >> 2 | bVar40;
        bVar31 = 1;
      }
    }
    if ((bVar40 & 1) == 0) {
      puVar34[0x10] = 0;
    }
    if (((((bVar31 != 0) && (*(int *)((longlong)puVar34 + 0x74) != 0)) &&
         ((uVar20 = *(uint *)(puVar34 + 0xe), -1 < (int)uVar20 &&
          (((int)uVar20 < DAT_14c9647dc &&
           (plVar36 = (longlong *)
                      ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
           plVar36 != (longlong *)0x0)))))) &&
        ((int)plVar36[2] == *(int *)((longlong)puVar34 + 0x74))) &&
       (((*(uint *)(plVar36 + 1) & 0x10200000) == 0 && (*plVar36 != 0)))) {
      FUN_148831cce(puVar34 + 6);
    }
    local_118 = puVar34;
    local_110 = plVar26;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
    }
    uVar29 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
    FUN_140586e9a(uVar29,&local_118);
  }
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar36 = plVar26 + 1;
    *(int *)plVar36 = (int)*plVar36 + -1;
    UNLOCK();
    if ((int)*plVar36 == 0) {
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
LAB_1408f3100:
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408f3492 FUN_1408f3492 body=493 status=ok
// SIG undefined FUN_1408f3492(void)

void FUN_1408f3492(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  
  cVar4 = FUN_144904448((longlong *)(param_1 + 0xef8));
  if (cVar4 == '\0') {
    return;
  }
  if (*(float *)(param_1 + 0xee4) <= 0.0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0xef8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xf00) != -1) {
    if (*plVar2 != *(longlong *)(param_1 + 0xf00)) {
      return;
    }
    *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
    lVar5 = FUN_1447210f0(param_1);
    fVar9 = 1.0 - (float)(*(double *)(lVar5 + 0x6d0) - (double)*(float *)(param_1 + 0xee8)) /
                  *(float *)(param_1 + 0xee4);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0xeec);
    lVar5 = *(longlong *)(param_1 + 0xe10);
    lVar6 = *(longlong *)(lVar5 + 0x578);
    if (lVar6 == 0) {
      uVar7 = FUN_1407f787c();
      lVar6 = FUN_14477b664(uVar7);
      *(longlong *)(lVar5 + 0x578) = lVar6;
    }
    lVar8 = *(longlong *)(lVar5 + 0x580);
    if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*(longlong *)(lVar5 + 0x570) != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar5 + 0x570));
      }
      *(longlong *)(lVar5 + 0x580) = lVar8;
    }
    FUN_1447997cc(plVar2,lVar8,fVar9 * fVar1,0,0);
    *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
    if (((int)plVar2[0x26] < 1) && (FUN_1400847bc(plVar2 + 0x17,0), (int)plVar2[0x21] == 0)) {
      FUN_140087e46(plVar2);
      if (*plVar2 != -1) {
        if (DAT_14cb259f8 == 0) {
          return;
        }
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
        return;
      }
    }
    return;
  }
  return;
}



// FUNCTION 1408f368a FUN_1408f368a body=273 status=ok
// SIG undefined FUN_1408f368a(void)

undefined8 * FUN_1408f368a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1408f379c();
  *param_1 = &PTR_FUN_14ab90d10;
  param_1[5] = &PTR_FUN_14ab91710;
  param_1[6] = &PTR_LAB_14ab91750;
  param_1[0x55] = &PTR_FUN_14ab917a0;
  param_1[0x56] = &PTR_FUN_14ab91820;
  param_1[0x57] = &PTR_FUN_14ab91830;
  *(undefined2 *)(param_1 + 0xd0) = 0x101;
  param_1[0xd1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x682) = 0;
  *(undefined1 *)((longlong)param_1 + 0x686) = 0;
  param_1[0xd2] = 0x3e80000041c80000;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xde] = DAT_14c8464e0;
  param_1[0xdf] = uVar1;
  param_1[0xe0] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xe1] = DAT_14c8464e0;
  param_1[0xe2] = uVar1;
  param_1[0xe3] = DAT_14c8464f0;
  param_1[0xe4] = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) & 0xfd;
  return param_1;
}



// FUNCTION 1408f379c FUN_1408f379c body=331 status=ok
// SIG undefined FUN_1408f379c(void)

longlong * FUN_1408f379c(longlong *param_1)

{
  longlong *plVar1;
  undefined **ppuVar2;
  longlong *plVar3;
  
  FUN_14076ac9c();
  param_1[200] = 0x4040000000000000;
  param_1[0xc9] = 0x4040000000000000;
  param_1[0xca] = 0x4040000000000000;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  ppuVar2 = &PTR_FUN_14ab7dce0;
  *param_1 = (longlong)&PTR_FUN_14ab7dce0;
  param_1[5] = (longlong)&PTR_LAB_14ab7e6e0;
  param_1[6] = (longlong)&PTR_LAB_14ab7e720;
  param_1[0x55] = (longlong)&PTR_LAB_14ab7e770;
  param_1[0x56] = (longlong)&PTR_LAB_14ab7e7f0;
  param_1[0x57] = (longlong)&PTR_LAB_14ab7e800;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 199) = 0x41200000;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  if (((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) &&
     (*(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7,
     plVar3 = param_1, DAT_14c76142c == 1)) {
    do {
      if ((*(byte *)(plVar3 + 0x3f) & 2) == 0) break;
      *(byte *)(plVar3 + 0x3f) = *(byte *)(plVar3 + 0x3f) & 0xfd;
      plVar1 = plVar3 + 0x24;
      plVar3 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    ppuVar2 = (undefined **)*param_1;
  }
  (*(code *)ppuVar2[0xe4])(param_1,1);
  (**(code **)(*param_1 + 0x940))(param_1,0);
  (**(code **)(*param_1 + 0x938))(param_1,2,1);
  *(undefined1 *)((longlong)param_1 + 0x4f5) = 1;
  *(uint *)(param_1 + 0xb2) = *(uint *)(param_1 + 0xb2) & 0xffffe0ff | 0x200;
  return param_1;
}



// FUNCTION 1408f38e8 FUN_1408f38e8 body=455 status=ok
// SIG undefined FUN_1408f38e8(void)

undefined8 * FUN_1408f38e8(undefined8 *param_1)

{
  FUN_1408f3ab0();
  *param_1 = &PTR_FUN_14a84cec0;
  param_1[5] = &PTR_LAB_14a84d520;
  param_1[6] = &PTR_LAB_14a84d560;
  *(byte *)((longlong)param_1 + 0x339) = (*(byte *)((longlong)param_1 + 0x339) & 0xf8) + 1;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3ac) = 5;
  *(undefined1 *)((longlong)param_1 + 0x3ad) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3ae) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0xc7efffffe0000000;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3df) = 0;
  param_1[0x74] = &PTR_FUN_14a860490;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x45cb2000;
  *(byte *)((longlong)param_1 + 0x2fc) = *(byte *)((longlong)param_1 + 0x2fc) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x3f0000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x3f800000;
  param_1[0x6c] = 0;
  *(uint *)((longlong)param_1 + 0x2d4) = *(uint *)((longlong)param_1 + 0x2d4) & 0xffffffcf | 0x10;
  param_1[0x69] = 0x4090000000000000;
  param_1[0x6a] = 0x4090000000000000;
  param_1[0x6b] = 0x4090000000000000;
  param_1[0x6e] = 0x3f00000047c35000;
  *(undefined1 **)((longlong)param_1 + 0x30c) = &DAT_3f8000003f800000;
  *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff42c80000;
  *(undefined4 *)(param_1 + 0x72) = 0x3b449ba6;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) & 0xfe;
  *(uint *)((longlong)param_1 + 0x334) = *(uint *)((longlong)param_1 + 0x334) & 0xffffffe7 | 0x10;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 1;
  return param_1;
}


