// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c5cfc0 FUN_144c5cfc0 body=608 status=ok
// SIG undefined FUN_144c5cfc0(void)

void FUN_144c5cfc0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  uint uVar7;
  undefined8 in_RAX;
  int iVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  fVar16 = param_1[1];
  fVar17 = param_1[2];
  fVar13 = param_1[3];
  pfVar1 = param_4 + 0xc;
  pfVar2 = param_4 + 0x10;
  if (!NAN(fVar13) && fVar13 == 0.0) {
    param_4[8] = *param_1;
    param_4[9] = fVar16;
    param_4[10] = fVar17;
    param_4[0xb] = fVar13;
    fVar16 = *param_1;
    fVar17 = param_1[1];
    fVar13 = param_1[2];
    fVar10 = param_1[3];
    param_5[8] = fVar16;
    param_5[9] = fVar17;
    param_5[10] = fVar13;
    param_5[0xb] = fVar10;
    pfVar3 = param_5 + 0xc;
    uVar6 = FUN_144c38fa0(fVar16,param_1,param_4,param_5,param_2,pfVar1,pfVar3,pfVar2,param_5 + 0x10
                         );
    auVar4._4_4_ = -(uint)(ABS(param_4[0xd]) <= param_3[1]);
    auVar4._0_4_ = -(uint)(ABS(*pfVar1) <= *param_3);
    auVar4._8_4_ = -(uint)(ABS(param_4[0xe]) <= param_3[2]);
    auVar4._12_4_ = -(uint)(ABS(param_4[0xf]) <= param_3[3]);
    uVar7 = movmskps(uVar6,auVar4);
    if ((char)(uVar7 & 7) == '\a') {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      param_4[0xe] = 0.0;
      param_4[0xf] = 0.0;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      param_4[0x12] = 0.0;
      param_4[0x13] = 0.0;
      param_4[4] = -NAN;
    }
    auVar9._4_4_ = -(uint)(ABS(param_5[0xd]) <= param_3[1]);
    auVar9._0_4_ = -(uint)(ABS(*pfVar3) <= *param_3);
    auVar9._8_4_ = -(uint)(ABS(param_5[0xe]) <= param_3[2]);
    auVar9._12_4_ = -(uint)(ABS(param_5[0xf]) <= param_3[3]);
    uVar6 = movmskps(uVar7 & 7,auVar9);
    if (((byte)uVar6 & 7) == 7) {
      pfVar3[0] = 0.0;
      pfVar3[1] = 0.0;
      param_5[0xe] = 0.0;
      param_5[0xf] = 0.0;
      param_5[0x10] = 0.0;
      param_5[0x11] = 0.0;
      param_5[0x12] = 0.0;
      param_5[0x13] = 0.0;
      param_5[4] = -NAN;
    }
  }
  else {
    fVar15 = *param_1 - *param_4;
    fVar16 = fVar16 - param_4[1];
    fVar17 = fVar17 - param_4[2];
    fVar10 = fVar15 * *param_2;
    fVar11 = fVar16 * param_2[1];
    fVar12 = fVar17 * param_2[2];
    iVar8 = -(uint)(ABS(fVar15 - (fVar11 + fVar10 + fVar12) * *param_2) <= *param_3);
    auVar5._4_4_ = -(uint)(ABS(fVar16 - (fVar11 + fVar10 + fVar12) * param_2[1]) <= param_3[1]);
    auVar5._0_4_ = iVar8;
    auVar5._8_4_ = -(uint)(ABS(fVar17 - (fVar11 + fVar10 + fVar12) * param_2[2]) <= param_3[2]);
    auVar5._12_4_ =
         -(uint)(ABS((fVar13 - param_4[3]) - (fVar11 + fVar10 + fVar12) * param_2[3]) <= param_3[3])
    ;
    uVar7 = movmskps((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),!NAN(fVar13)),auVar5);
    uVar7 = uVar7 & 7;
    if ((char)uVar7 == '\a') {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      param_4[0xe] = 0.0;
      param_4[0xf] = 0.0;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      param_4[0x12] = 0.0;
      param_4[0x13] = 0.0;
      param_4[4] = -NAN;
    }
    else {
      uVar7 = FUN_144c39240(iVar8,param_4,param_2,param_4 + 8,&local_58);
      fVar11 = local_58 - param_4[8];
      fVar12 = fStack_54 - param_4[9];
      fVar15 = fStack_50 - param_4[10];
      fVar14 = fStack_4c - param_4[0xb];
      *pfVar1 = fVar11;
      param_4[0xd] = fVar12;
      param_4[0xe] = fVar15;
      param_4[0xf] = fVar14;
      fVar16 = *param_2;
      fVar17 = param_2[1];
      fVar13 = param_2[2];
      fVar10 = param_2[3];
      *pfVar2 = fVar15 * fVar17 - fVar13 * fVar12;
      param_4[0x11] = fVar11 * fVar13 - fVar16 * fVar15;
      param_4[0x12] = fVar12 * fVar16 - fVar17 * fVar11;
      param_4[0x13] = fVar14 * fVar10 - fVar10 * fVar14;
    }
    fVar16 = (*param_1 - *param_5) * *param_2;
    fVar17 = (param_1[1] - param_5[1]) * param_2[1];
    fVar13 = (param_1[2] - param_5[2]) * param_2[2];
    auVar18._4_4_ =
         -(uint)(ABS((param_1[1] - param_5[1]) - (fVar17 + fVar16 + fVar13) * param_2[1]) <=
                param_3[1]);
    auVar18._0_4_ =
         -(uint)(ABS((*param_1 - *param_5) - (fVar17 + fVar16 + fVar13) * *param_2) <= *param_3);
    auVar18._8_4_ =
         -(uint)(ABS((param_1[2] - param_5[2]) - (fVar17 + fVar16 + fVar13) * param_2[2]) <=
                param_3[2]);
    auVar18._12_4_ =
         -(uint)(ABS((param_1[3] - param_5[3]) - (fVar17 + fVar16 + fVar13) * param_2[3]) <=
                param_3[3]);
    uVar6 = movmskps(uVar7,auVar18);
    if (((byte)uVar6 & 7) == 7) {
      param_5[0xc] = 0.0;
      param_5[0xd] = 0.0;
      param_5[0xe] = 0.0;
      param_5[0xf] = 0.0;
      param_5[0x10] = 0.0;
      param_5[0x11] = 0.0;
      param_5[0x12] = 0.0;
      param_5[0x13] = 0.0;
      param_5[4] = -NAN;
    }
    else {
      FUN_144c39240(param_1,param_5,param_2,param_5 + 8,&local_58);
      local_58 = local_58 - param_5[8];
      fStack_54 = fStack_54 - param_5[9];
      fStack_50 = fStack_50 - param_5[10];
      fStack_4c = fStack_4c - param_5[0xb];
      param_5[0xc] = local_58;
      param_5[0xd] = fStack_54;
      param_5[0xe] = fStack_50;
      param_5[0xf] = fStack_4c;
      fVar16 = *param_2;
      fVar17 = param_2[1];
      fVar13 = param_2[2];
      fVar10 = param_2[3];
      param_5[0x10] = fStack_50 * fVar17 - fVar13 * fStack_54;
      param_5[0x11] = local_58 * fVar13 - fVar16 * fStack_50;
      param_5[0x12] = fStack_54 * fVar16 - fVar17 * local_58;
      param_5[0x13] = fStack_4c * fVar10 - fVar10 * fStack_4c;
    }
  }
  return;
}



// FUNCTION 144c5d220 FUN_144c5d220 body=1532 status=ok
// SIG undefined FUN_144c5d220(void)

/* WARNING: Removing unreachable block (ram,0x000144c5d7c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144c5d220(undefined8 param_1,int param_2,float *param_3,float *param_4,float *param_5,
             undefined1 (*param_6) [16],undefined1 (*param_7) [16])

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 local_res10 [8];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8 [4];
  ulonglong local_d8;
  longlong lStack_d0;
  
  param_2 = param_2 + 1;
  fVar37 = *param_5;
  fVar38 = param_5[1];
  fVar39 = param_5[2];
  fVar34 = param_5[4];
  fVar35 = param_5[5];
  fVar36 = param_5[6];
  fVar43 = param_5[8];
  fVar44 = param_5[9];
  fVar45 = param_5[10];
  fVar40 = param_5[0xc];
  fVar41 = param_5[0xd];
  fVar42 = param_5[0xe];
  lVar6 = FUN_144b3f860();
  bVar1 = *(byte *)(lVar6 + 0x80);
  iVar5 = FUN_144b3fa10(param_1);
  if (param_2 < iVar5) {
    do {
      pfVar7 = (float *)FUN_144b3f860(param_1,param_2);
      fVar2 = *param_4;
      fVar3 = param_4[1];
      fVar4 = param_4[2];
      fVar11 = *pfVar7;
      fVar14 = pfVar7[1];
      fVar17 = pfVar7[2];
      fVar27 = fVar11 * fVar37 + fVar40 + fVar14 * fVar34 + fVar17 * fVar43;
      fVar28 = fVar11 * fVar38 + fVar41 + fVar14 * fVar35 + fVar17 * fVar44;
      fVar29 = fVar11 * fVar39 + fVar42 + fVar14 * fVar36 + fVar17 * fVar45;
      fVar10 = fVar27 * fVar2;
      fVar13 = fVar28 * fVar3;
      fVar16 = fVar29 * fVar4;
      fVar11 = pfVar7[4];
      fVar14 = pfVar7[5];
      fVar17 = pfVar7[6];
      fVar27 = fVar27 - (fVar13 + fVar10 + fVar16) * fVar2;
      fVar28 = fVar28 - (fVar13 + fVar10 + fVar16) * fVar3;
      fVar29 = fVar29 - (fVar13 + fVar10 + fVar16) * fVar4;
      fVar10 = fVar11 * fVar37 + fVar40 + fVar14 * fVar34 + fVar17 * fVar43;
      fVar13 = fVar11 * fVar38 + fVar41 + fVar14 * fVar35 + fVar17 * fVar44;
      fVar16 = fVar11 * fVar39 + fVar42 + fVar14 * fVar36 + fVar17 * fVar45;
      fVar11 = fVar27 * fVar2;
      fVar14 = fVar28 * fVar3;
      fVar17 = fVar29 * fVar4;
      fVar27 = fVar27 - (fVar14 + fVar11 + fVar17) * fVar2;
      fVar28 = fVar28 - (fVar14 + fVar11 + fVar17) * fVar3;
      fVar29 = fVar29 - (fVar14 + fVar11 + fVar17) * fVar4;
      if ((bVar1 & 0x10) != 0) {
        if (((uint)pfVar7[0x20] & 0x10) == 0) {
          return 0;
        }
LAB_144c5d6b2:
        fVar10 = fVar27 - fVar10;
        fVar13 = fVar28 - fVar13;
        fVar16 = fVar29 - fVar16;
        fStack_100 = fVar3 * fVar10 - fVar13 * fVar2;
        local_108 = fVar4 * fVar13 - fVar16 * fVar3;
        fStack_104 = fVar2 * fVar16 - fVar10 * fVar4;
        fStack_fc = 0.0 - (fStack_104 * fVar28 + local_108 * fVar27 + fStack_100 * fVar29);
        local_f8._4_4_ = *(float *)(*param_7 + 4) - *(float *)(*param_6 + 4);
        local_f8._0_4_ = *(float *)*param_7 - *(float *)*param_6;
        fStack_f0 = *(float *)(*param_7 + 8) - *(float *)(*param_6 + 8);
        fStack_ec = *(float *)(*param_7 + 0xc) - *(float *)(*param_6 + 0xc);
        piVar8 = (int *)FUN_144ff6eb0(local_res10,param_6,local_f8,&local_108,local_e8);
        if (*piVar8 < 0) {
          return 0;
        }
        if (local_e8[0] <= 0.0) {
          return 0;
        }
        if (1.0 <= local_e8[0]) {
          return 0;
        }
        auVar9._0_8_ = local_d8 << 0x20;
        auVar9._8_8_ = lStack_d0 << 0x20 | local_d8 >> 0x20;
        if ((fStack_fc + fStack_100 * *(float *)(*param_6 + 8) +
            fStack_104 * *(float *)(*param_6 + 4) + local_108 * *(float *)*param_6) *
            (fStack_fc + fStack_100 * param_3[2] + fStack_104 * param_3[1] + local_108 * *param_3)
            <= 0.0) {
          *param_6 = auVar9 >> 0x20;
          *(float *)(param_6[1] + 4) =
               ((*(float *)(param_7[1] + 4) - *(float *)(param_6[1] + 4)) * (local_e8[0] - 0.0)) /
               1.0 + *(float *)(param_6[1] + 4);
          return 1;
        }
        fVar37 = *(float *)(param_7[1] + 4);
        *param_7 = auVar9 >> 0x20;
        *(float *)(param_7[1] + 4) =
             ((fVar37 - *(float *)(param_6[1] + 4)) * (local_e8[0] - 0.0)) / 1.0 +
             *(float *)(param_6[1] + 4);
        return 1;
      }
      fVar11 = *(float *)*param_6;
      fVar14 = *(float *)(*param_6 + 4);
      fVar17 = *(float *)(*param_6 + 8);
      fVar23 = *(float *)(*param_6 + 0xc);
      fVar30 = *(float *)*param_7 - fVar11;
      fVar31 = *(float *)(*param_7 + 4) - fVar14;
      fVar32 = *(float *)(*param_7 + 8) - fVar17;
      fVar12 = fVar30 * fVar2;
      fVar15 = fVar31 * fVar3;
      fVar18 = fVar32 * fVar4;
      fVar30 = fVar30 - (fVar15 + fVar12 + fVar18) * fVar2;
      fVar31 = fVar31 - (fVar15 + fVar12 + fVar18) * fVar3;
      fVar32 = fVar32 - (fVar15 + fVar12 + fVar18) * fVar4;
      fVar12 = fVar30 * fVar30;
      fVar15 = fVar31 * fVar31;
      fVar18 = fVar32 * fVar32;
      auVar20._0_4_ = fVar15 + fVar12 + fVar18;
      auVar20._4_4_ = fVar15 + fVar12 + fVar18;
      auVar20._8_4_ = fVar15 + fVar12 + fVar18;
      auVar20._12_4_ = fVar15 + fVar12 + fVar18;
      fVar12 = fVar2 * (fVar27 - fVar11);
      fVar15 = fVar3 * (fVar28 - fVar14);
      fVar18 = fVar4 * (fVar29 - fVar17);
      _local_f8 = divps(_DAT_14c6daca0,auVar20);
      fVar24 = (fVar27 - fVar11) - (fVar15 + fVar12 + fVar18) * fVar2;
      fVar25 = (fVar28 - fVar14) - (fVar15 + fVar12 + fVar18) * fVar3;
      fVar26 = (fVar29 - fVar17) - (fVar15 + fVar12 + fVar18) * fVar4;
      fVar12 = fVar24 * fVar30;
      fVar15 = fVar25 * fVar31;
      fVar18 = fVar26 * fVar32;
      auVar19._0_4_ = (fVar15 + fVar12 + fVar18) * local_f8._0_4_;
      auVar19._4_4_ = (fVar15 + fVar12 + fVar18) * local_f8._4_4_;
      auVar19._8_4_ = (fVar15 + fVar12 + fVar18) * local_f8._8_4_;
      auVar19._12_4_ = (fVar15 + fVar12 + fVar18) * local_f8._12_4_;
      auVar20 = minps(auVar19,_DAT_1499314a0);
      fVar33 = (0.0 - *(float *)(*param_7 + 0xc)) - fVar23;
      auVar20 = maxps(auVar20,ZEXT816(0));
      fVar22 = fVar33 * auVar20._0_4_ + fVar23;
      fVar24 = fVar24 - auVar20._0_4_ * fVar30;
      fVar25 = fVar25 - auVar20._4_4_ * fVar31;
      fVar26 = fVar26 - auVar20._8_4_ * fVar32;
      fVar12 = fVar2 * fVar24;
      fVar15 = fVar3 * fVar25;
      fVar18 = fVar4 * fVar26;
      fVar24 = fVar24 - (fVar15 + fVar12 + fVar18) * fVar2;
      fVar25 = fVar25 - (fVar15 + fVar12 + fVar18) * fVar3;
      fVar26 = fVar26 - (fVar15 + fVar12 + fVar18) * fVar4;
      if (fVar22 * fVar22 <= fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26) {
        fVar11 = fVar10 - fVar11;
        fVar14 = fVar13 - fVar14;
        fVar17 = fVar16 - fVar17;
        fVar12 = fVar2 * fVar11;
        fVar15 = fVar3 * fVar14;
        fVar18 = fVar4 * fVar17;
        fVar11 = fVar11 - (fVar15 + fVar12 + fVar18) * fVar2;
        fVar14 = fVar14 - (fVar15 + fVar12 + fVar18) * fVar3;
        fVar17 = fVar17 - (fVar15 + fVar12 + fVar18) * fVar4;
        fVar12 = fVar30 * fVar11;
        fVar15 = fVar31 * fVar14;
        fVar18 = fVar32 * fVar17;
        auVar21._0_4_ = (fVar15 + fVar12 + fVar18) * local_f8._0_4_;
        auVar21._4_4_ = (fVar15 + fVar12 + fVar18) * local_f8._4_4_;
        auVar21._8_4_ = (fVar15 + fVar12 + fVar18) * local_f8._8_4_;
        auVar21._12_4_ = (fVar15 + fVar12 + fVar18) * local_f8._12_4_;
        auVar20 = minps(auVar21,_DAT_1499314a0);
        auVar20 = maxps(auVar20,ZEXT816(0));
        fVar11 = fVar11 - fVar30 * auVar20._0_4_;
        fVar14 = fVar14 - fVar31 * auVar20._4_4_;
        fVar17 = fVar17 - fVar32 * auVar20._8_4_;
        fVar23 = auVar20._0_4_ * fVar33 + fVar23;
        fVar12 = fVar2 * fVar11;
        fVar15 = fVar3 * fVar14;
        fVar18 = fVar4 * fVar17;
        fVar11 = fVar11 - (fVar15 + fVar12 + fVar18) * fVar2;
        fVar14 = fVar14 - (fVar15 + fVar12 + fVar18) * fVar3;
        fVar17 = fVar17 - (fVar15 + fVar12 + fVar18) * fVar4;
        if (fVar23 * fVar23 <= fVar14 * fVar14 + fVar11 * fVar11 + fVar17 * fVar17) {
          return 0;
        }
      }
      if (((uint)pfVar7[0x20] & 0x10) != 0) goto LAB_144c5d6b2;
      fVar2 = pfVar7[0x10];
      fVar3 = pfVar7[0x11];
      fVar4 = pfVar7[0x12];
      param_2 = param_2 + 1;
      fVar11 = pfVar7[0x14];
      fVar14 = pfVar7[0x15];
      fVar17 = pfVar7[0x16];
      fVar10 = pfVar7[0x18];
      fVar13 = pfVar7[0x19];
      fVar16 = pfVar7[0x1a];
      fVar27 = pfVar7[0xc];
      fVar28 = pfVar7[0xd];
      fVar29 = pfVar7[0xe];
      fVar25 = fVar14 * fVar34;
      fVar26 = fVar14 * fVar35;
      fVar14 = fVar14 * fVar36;
      fVar15 = fVar28 * fVar34;
      fVar18 = fVar28 * fVar35;
      fVar28 = fVar28 * fVar36;
      fVar22 = fVar13 * fVar34;
      fVar24 = fVar13 * fVar35;
      fVar13 = fVar13 * fVar36;
      fVar23 = fVar11 * fVar37;
      fVar12 = fVar11 * fVar38;
      fVar11 = fVar11 * fVar39;
      fVar34 = fVar4 * fVar43 + fVar3 * fVar34 + fVar2 * fVar37;
      fVar35 = fVar4 * fVar44 + fVar3 * fVar35 + fVar2 * fVar38;
      fVar36 = fVar4 * fVar45 + fVar3 * fVar36 + fVar2 * fVar39;
      fVar40 = fVar40 + fVar10 * fVar37 + fVar22 + fVar16 * fVar43;
      fVar41 = fVar41 + fVar10 * fVar38 + fVar24 + fVar16 * fVar44;
      fVar42 = fVar42 + fVar10 * fVar39 + fVar13 + fVar16 * fVar45;
      fVar37 = fVar15 + fVar27 * fVar37 + fVar29 * fVar43;
      fVar38 = fVar18 + fVar27 * fVar38 + fVar29 * fVar44;
      fVar39 = fVar28 + fVar27 * fVar39 + fVar29 * fVar45;
      fVar43 = fVar43 * fVar17 + fVar25 + fVar23;
      fVar44 = fVar44 * fVar17 + fVar26 + fVar12;
      fVar45 = fVar45 * fVar17 + fVar14 + fVar11;
    } while (param_2 < iVar5);
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return 0;
}



// FUNCTION 144c5d820 FUN_144c5d820 body=5488 status=ok
// SIG undefined FUN_144c5d820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144c5d820(float *param_1,float *param_2,float param_3,float *param_4,float *param_5,
             float *param_6,float *param_7,char param_8,float *param_9,undefined8 *param_10)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  float *pfVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  bool bVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 uVar32;
  float *pfVar33;
  float *pfVar34;
  undefined8 uVar35;
  float *pfVar36;
  undefined4 uVar37;
  uint uVar38;
  uint uVar39;
  float *pfVar40;
  bool bVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar54;
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float local_428;
  float local_418;
  float local_408;
  float local_3f8;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float local_3d4;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float local_384;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  uint local_348;
  uint local_344;
  undefined8 local_338;
  undefined8 uStack_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float local_314;
  undefined8 local_308;
  undefined8 uStack_300;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float local_2c4;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  fVar65 = 0.001;
  local_428 = param_5[4];
  local_168 = -0.001;
  uStack_164 = 0xba83126f;
  uStack_160 = 0xba83126f;
  uStack_15c = 0xba83126f;
  fVar46 = param_5[0xc];
  fVar49 = param_5[0xd];
  fVar51 = param_5[0xe];
  fVar45 = param_5[0xf];
  fVar48 = *param_5;
  fVar50 = param_5[1];
  fVar62 = param_5[2];
  fVar63 = param_5[3];
  local_228 = 0.001;
  fStack_224 = 0.001;
  fStack_220 = 0.001;
  fStack_21c = 0.001;
  local_418 = param_5[5];
  local_308 = *(undefined8 *)(param_5 + 8);
  uStack_300 = *(undefined8 *)(param_5 + 10);
  local_2e8 = *(undefined8 *)(param_5 + 0x10);
  uStack_2e0 = *(undefined8 *)(param_5 + 0x12);
  local_3f8 = param_6[5];
  local_408 = param_6[4];
  local_2b8 = *(undefined8 *)(param_6 + 8);
  local_288 = *(undefined8 *)(param_6 + 8);
  uStack_2b0 = *(undefined8 *)(param_6 + 10);
  uStack_280 = *(undefined8 *)(param_6 + 10);
  fVar47 = param_6[0xc];
  fVar66 = param_6[0xd];
  fVar67 = param_6[0xe];
  fVar52 = param_6[0xf];
  fVar64 = *param_6;
  fVar54 = param_6[1];
  fVar86 = param_6[2];
  fVar87 = param_6[3];
  local_298 = *(undefined8 *)(param_6 + 0x10);
  uStack_290 = *(undefined8 *)(param_6 + 0x12);
  fVar89 = *param_7;
  fVar90 = param_7[1];
  fVar91 = param_7[2];
  fVar70 = param_7[3];
  fVar71 = param_7[4];
  fVar73 = param_7[5];
  fVar75 = param_7[6];
  fVar77 = param_7[7];
  fVar84 = param_7[8];
  fVar79 = param_7[9];
  fVar80 = param_7[10];
  fVar81 = param_7[0xb];
  fVar72 = param_7[0xc];
  fVar74 = param_7[0xd];
  fVar76 = param_7[0xe];
  fVar78 = param_7[0xf];
  auVar60._4_4_ = -(uint)(fVar49 == 0.0);
  auVar60._0_4_ = -(uint)(fVar46 == 0.0);
  auVar60._8_4_ = -(uint)(fVar51 == 0.0);
  auVar60._12_4_ = -(uint)(fVar45 == 0.0);
  local_348 = movmskps(param_7._0_4_,auVar60);
  local_348 = local_348 & 7;
  bVar41 = local_348 == 7;
  auVar3._4_4_ = -(uint)(fVar66 == 0.0);
  auVar3._0_4_ = -(uint)(fVar47 == 0.0);
  auVar3._8_4_ = -(uint)(fVar67 == 0.0);
  auVar3._12_4_ = -(uint)(fVar52 == 0.0);
  uVar30 = movmskps(local_348,auVar3);
  local_328 = fVar48;
  fStack_324 = fVar50;
  fStack_320 = fVar62;
  fStack_31c = fVar63;
  local_318 = local_428;
  local_314 = local_418;
  local_2f8 = fVar46;
  fStack_2f4 = fVar49;
  fStack_2f0 = fVar51;
  fStack_2ec = fVar45;
  local_2d8 = fVar64;
  fStack_2d4 = fVar54;
  fStack_2d0 = fVar86;
  fStack_2cc = fVar87;
  local_2c8 = local_408;
  local_2c4 = local_3f8;
  local_2a8 = fVar47;
  fStack_2a4 = fVar66;
  fStack_2a0 = fVar67;
  fStack_29c = fVar52;
  local_278 = local_308;
  uStack_270 = uStack_300;
  uVar31 = FUN_144b3fa10(param_1);
  fVar88 = fVar65;
  fVar82 = fVar65;
  fVar83 = fVar65;
  local_344 = uVar31;
  bVar24 = false;
  bVar29 = false;
  if ((int)param_3 < (int)uVar31) {
    do {
      pfVar33 = (float *)FUN_144b3f860(param_1,param_3);
      uVar21 = uStack_370;
      uVar35 = local_378;
      fVar46 = pfVar33[0xc];
      fVar49 = pfVar33[0xd];
      fVar51 = pfVar33[0xe];
      fVar45 = pfVar33[0x10];
      fVar48 = pfVar33[0x11];
      fVar50 = pfVar33[0x12];
      fVar62 = pfVar33[0x14];
      fVar63 = pfVar33[0x15];
      fVar64 = pfVar33[0x16];
      fVar54 = pfVar33[0x18];
      fVar86 = pfVar33[0x19];
      fVar87 = pfVar33[0x1a];
      local_384 = 0.0;
      local_3d4 = 1.0;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_158 = fVar49 * fVar71 + fVar46 * fVar89 + fVar51 * fVar84;
      fStack_154 = fVar49 * fVar73 + fVar46 * fVar90 + fVar51 * fVar79;
      fStack_150 = fVar49 * fVar75 + fVar46 * fVar91 + fVar51 * fVar80;
      fStack_14c = fVar49 * fVar77 + fVar46 * fVar70 + fVar51 * fVar81;
      local_148 = fVar48 * fVar71 + fVar45 * fVar89 + fVar50 * fVar84;
      fStack_144 = fVar48 * fVar73 + fVar45 * fVar90 + fVar50 * fVar79;
      fStack_140 = fVar48 * fVar75 + fVar45 * fVar91 + fVar50 * fVar80;
      fStack_13c = fVar48 * fVar77 + fVar45 * fVar70 + fVar50 * fVar81;
      local_138 = fVar63 * fVar71 + fVar62 * fVar89 + fVar64 * fVar84;
      fStack_134 = fVar63 * fVar73 + fVar62 * fVar90 + fVar64 * fVar79;
      fStack_130 = fVar63 * fVar75 + fVar62 * fVar91 + fVar64 * fVar80;
      fStack_12c = fVar63 * fVar77 + fVar62 * fVar70 + fVar64 * fVar81;
      fVar46 = *param_2;
      fVar49 = param_2[1];
      fVar51 = param_2[2];
      local_128 = fVar54 * fVar89 + fVar72 + fVar86 * fVar71 + fVar87 * fVar84;
      fStack_124 = fVar54 * fVar90 + fVar74 + fVar86 * fVar73 + fVar87 * fVar79;
      fStack_120 = fVar54 * fVar91 + fVar76 + fVar86 * fVar75 + fVar87 * fVar80;
      fStack_11c = fVar54 * fVar70 + fVar78 + fVar86 * fVar77 + fVar87 * fVar81;
      fVar45 = *pfVar33;
      fVar48 = pfVar33[1];
      fVar50 = pfVar33[2];
      local_398 = fVar45 * fVar89 + fVar72 + fVar48 * fVar71 + fVar50 * fVar84;
      fStack_394 = fVar45 * fVar90 + fVar74 + fVar48 * fVar73 + fVar50 * fVar79;
      fStack_390 = fVar45 * fVar91 + fVar76 + fVar48 * fVar75 + fVar50 * fVar80;
      fVar45 = local_398 * fVar46;
      fVar48 = fStack_394 * fVar49;
      fVar50 = fStack_390 * fVar51;
      local_398 = local_398 - (fVar48 + fVar45 + fVar50) * fVar46;
      fStack_394 = fStack_394 - (fVar48 + fVar45 + fVar50) * fVar49;
      fStack_390 = fStack_390 - (fVar48 + fVar45 + fVar50) * fVar51;
      fVar45 = pfVar33[4];
      fVar48 = pfVar33[5];
      fVar50 = pfVar33[6];
      fVar62 = fVar45 * fVar89 + fVar72 + fVar48 * fVar71 + fVar50 * fVar84;
      fVar63 = fVar45 * fVar90 + fVar74 + fVar48 * fVar73 + fVar50 * fVar79;
      fVar64 = fVar45 * fVar91 + fVar76 + fVar48 * fVar75 + fVar50 * fVar80;
      fVar45 = fVar46 * fVar62;
      fVar48 = fVar49 * fVar63;
      fVar50 = fVar51 * fVar64;
      fStack_38c = pfVar33[3];
      fVar62 = fVar62 - (fVar48 + fVar45 + fVar50) * fVar46;
      fVar63 = fVar63 - (fVar48 + fVar45 + fVar50) * fVar49;
      fVar64 = fVar64 - (fVar48 + fVar45 + fVar50) * fVar51;
      if (param_8 == '\0') {
        fVar46 = pfVar33[7];
        local_3e8 = fVar62;
        fStack_3e4 = fVar63;
        fStack_3e0 = fVar64;
        fStack_3dc = fVar46;
      }
      else {
        fStack_3dc = 0.0 - fStack_38c;
        local_3d4 = 0.0;
        fStack_38c = 0.0 - pfVar33[7];
        local_384 = 1.0;
        local_378 = local_3c8;
        uStack_370 = uStack_3c0;
        local_3c8 = uVar35;
        uStack_3c0 = uVar21;
        fVar46 = fStack_390;
        local_3e8 = local_398;
        fStack_3e4 = fStack_394;
        fStack_3e0 = fStack_390;
        local_398 = fVar62;
        fStack_394 = fVar63;
        fStack_390 = fVar64;
      }
      uStack_3a0 = 0;
      local_3a8 = 0;
      uStack_3b0 = 0;
      local_3b8 = 0;
      pfVar36 = param_1;
      pfVar40 = param_4;
      local_3d8 = param_3;
      local_388 = param_3;
      local_118 = local_158;
      fStack_114 = fStack_154;
      fStack_110 = fStack_150;
      fStack_10c = fStack_14c;
      local_108 = local_148;
      fStack_104 = fStack_144;
      fStack_100 = fStack_140;
      fStack_fc = fStack_13c;
      local_f8 = local_138;
      fStack_f4 = fStack_134;
      fStack_f0 = fStack_130;
      fStack_ec = fStack_12c;
      local_e8 = local_128;
      fStack_e4 = fStack_124;
      fStack_e0 = fStack_120;
      fStack_dc = fStack_11c;
      FUN_144c5d220(param_1,fVar46,param_4,param_2,&local_118,&local_398,&local_3e8);
      pfVar34 = (float *)0x0;
      if (bVar41 != (((byte)uVar30 & 7) == 7)) {
        pfVar36 = &local_398;
        pfVar34 = &local_3e8;
        if (local_348 != 7) {
          pfVar34 = pfVar36;
        }
        fVar46 = *param_2 * (*pfVar34 - *param_4);
        fVar49 = param_2[1] * (pfVar34[1] - param_4[1]);
        fVar51 = param_2[2] * (pfVar34[2] - param_4[2]);
        fVar45 = (*pfVar34 - *param_4) - (fVar49 + fVar46 + fVar51) * *param_2;
        fVar48 = (pfVar34[1] - param_4[1]) - (fVar49 + fVar46 + fVar51) * param_2[1];
        fVar46 = (pfVar34[2] - param_4[2]) - (fVar49 + fVar46 + fVar51) * param_2[2];
        if (fVar48 * fVar48 + fVar45 * fVar45 + fVar46 * fVar46 <
            (param_4[3] + pfVar34[3]) * (param_4[3] + pfVar34[3])) {
          return 5;
        }
      }
      fVar46 = *param_4;
      fVar49 = param_4[1];
      pfVar20 = param_4 + 2;
      fVar51 = *pfVar20;
      fVar45 = param_4[3];
      uVar37 = (undefined4)CONCAT71((int7)((ulonglong)pfVar36 >> 8),fVar45 == 0.0);
      if (!NAN(fVar45) && fVar45 == 0.0) {
        pfVar40 = &local_398;
        pfVar36 = param_4;
        local_3c8 = *(undefined8 *)param_4;
        uStack_3c0 = *(undefined8 *)pfVar20;
        local_378 = *(undefined8 *)param_4;
        uStack_370 = *(undefined8 *)pfVar20;
        uVar32 = FUN_144c38fa0(param_4,param_4,pfVar40,&local_3e8,param_2,&local_368,&local_3b8,
                               &local_358,&local_3a8);
        uVar37 = SUB84(pfVar36,0);
        auVar4._4_4_ = -(uint)(ABS(local_368._4_4_) <= fVar88);
        auVar4._0_4_ = -(uint)(ABS((float)local_368) <= fVar65);
        auVar4._8_4_ = -(uint)(ABS((float)uStack_360) <= fVar82);
        auVar4._12_4_ = -(uint)(ABS(uStack_360._4_4_) <= fVar83);
        uVar31 = movmskps(uVar32,auVar4);
        if ((char)(uVar31 & 7) == '\a') {
          local_368 = 0;
          uStack_360 = 0;
          local_388 = -NAN;
          local_358 = 0;
          uStack_350 = 0;
          fVar65 = 0.0;
          fVar64 = 0.0;
          fVar54 = 0.0;
          fVar86 = 0.0;
          fVar87 = 0.0;
          fVar89 = 0.0;
          fVar90 = 0.0;
          fVar91 = 0.0;
        }
        else {
          fVar65 = (float)local_368;
          fVar64 = local_368._4_4_;
          fVar54 = (float)uStack_360;
          fVar86 = uStack_360._4_4_;
          fVar87 = (float)local_358;
          fVar89 = local_358._4_4_;
          fVar90 = (float)uStack_350;
          fVar91 = uStack_350._4_4_;
        }
        auVar68._4_4_ = -(uint)(ABS(local_3b8._4_4_) <= fStack_224);
        auVar68._0_4_ = -(uint)(ABS((float)local_3b8) <= local_228);
        auVar68._8_4_ = -(uint)(ABS((float)uStack_3b0) <= fStack_220);
        auVar68._12_4_ = -(uint)(ABS(uStack_3b0._4_4_) <= fStack_21c);
        uVar31 = movmskps(uVar31 & 7,auVar68);
        uVar31 = uVar31 & 7;
        fVar70 = local_398;
        fVar71 = fStack_394;
        fVar73 = fStack_390;
        fVar75 = fStack_38c;
        fVar77 = local_388;
        if ((char)uVar31 == '\a') {
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3d8 = -NAN;
          fVar46 = 0.0;
          fVar49 = 0.0;
          fVar51 = 0.0;
          fVar45 = 0.0;
          fVar50 = 0.0;
          fVar48 = 0.0;
          fVar84 = 0.0;
          fVar62 = 0.0;
          local_338 = 0;
          uStack_330 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          fVar63 = (float)local_3c8;
          fVar79 = local_3c8._4_4_;
          fVar80 = (float)uStack_3c0;
          fVar81 = uStack_3c0._4_4_;
        }
        else {
          fVar46 = (float)local_3b8;
          fVar49 = local_3b8._4_4_;
          fVar51 = (float)uStack_3b0;
          fVar45 = uStack_3b0._4_4_;
          fVar50 = (float)local_3a8;
          fVar48 = local_3a8._4_4_;
          fVar84 = (float)uStack_3a0;
          fVar62 = uStack_3a0._4_4_;
LAB_144c5dfc9:
          local_338 = CONCAT44(fVar48,fVar50);
          uStack_330 = CONCAT44(fVar62,fVar84);
          fVar63 = (float)local_3c8;
          fVar79 = local_3c8._4_4_;
          fVar80 = (float)uStack_3c0;
          fVar81 = uStack_3c0._4_4_;
        }
      }
      else {
        fVar48 = *param_2;
        fVar50 = param_2[1];
        fVar62 = param_2[2];
        fVar63 = param_2[3];
        fVar52 = fVar46 - local_398;
        fVar64 = fVar49 - fStack_394;
        fVar54 = fVar51 - fStack_390;
        fVar47 = fVar48 * fVar52;
        fVar66 = fVar50 * fVar64;
        fVar67 = fVar62 * fVar54;
        auVar10._4_4_ = -(uint)(ABS(fVar64 - (fVar66 + fVar47 + fVar67) * fVar50) <= fVar88);
        auVar10._0_4_ = -(uint)(ABS(fVar52 - (fVar66 + fVar47 + fVar67) * fVar48) <= fVar65);
        auVar10._8_4_ = -(uint)(ABS(fVar54 - (fVar66 + fVar47 + fVar67) * fVar62) <= fVar82);
        auVar10._12_4_ =
             -(uint)(ABS((fVar45 - fStack_38c) - (fVar66 + fVar47 + fVar67) * fVar63) <= fVar83);
        uVar31 = movmskps((int)CONCAT71((int7)((ulonglong)pfVar34 >> 8),!NAN(fVar45)),auVar10);
        uVar31 = uVar31 & 7;
        if ((char)uVar31 == '\a') {
          local_368 = 0;
          uStack_360 = 0;
          local_388 = -NAN;
          fVar65 = 0.0;
          fVar64 = 0.0;
          fVar54 = 0.0;
          fVar86 = 0.0;
          fVar87 = 0.0;
          fVar89 = 0.0;
          fVar90 = 0.0;
          fVar91 = 0.0;
          local_358 = 0;
          uStack_350 = 0;
        }
        else {
          pfVar36 = param_4;
          pfVar40 = param_2;
          uVar31 = FUN_144c39240(param_4,&local_398,param_2,&local_378,&local_188);
          uVar37 = SUB84(pfVar36,0);
          fVar65 = local_188 - (float)local_378;
          fVar64 = fStack_184 - local_378._4_4_;
          fVar54 = fStack_180 - (float)uStack_370;
          fVar86 = fStack_17c - uStack_370._4_4_;
          local_368 = CONCAT44(fVar64,fVar65);
          uStack_360 = CONCAT44(fVar86,fVar54);
          fVar90 = fVar64 * fVar48 - fVar50 * fVar65;
          fVar87 = fVar54 * fVar50 - fVar62 * fVar64;
          fVar89 = fVar65 * fVar62 - fVar48 * fVar54;
          fVar91 = fVar86 * fVar63 - fVar63 * fVar86;
          local_358 = CONCAT44(fVar89,fVar87);
          uStack_350 = CONCAT44(fVar91,fVar90);
        }
        fVar77 = local_388;
        fVar75 = fStack_38c;
        fVar73 = fStack_390;
        fVar71 = fStack_394;
        fVar70 = local_398;
        fVar46 = fVar46 - local_3e8;
        fVar49 = fVar49 - fStack_3e4;
        fVar51 = fVar51 - fStack_3e0;
        fVar47 = fVar48 * fVar46;
        fVar66 = fVar50 * fVar49;
        fVar67 = fVar62 * fVar51;
        auVar69._4_4_ = -(uint)(ABS(fVar49 - (fVar66 + fVar47 + fVar67) * fVar50) <= fStack_224);
        auVar69._0_4_ = -(uint)(ABS(fVar46 - (fVar66 + fVar47 + fVar67) * fVar48) <= local_228);
        auVar69._8_4_ = -(uint)(ABS(fVar51 - (fVar66 + fVar47 + fVar67) * fVar62) <= fStack_220);
        auVar69._12_4_ =
             -(uint)(ABS((fVar45 - fStack_3dc) - (fVar66 + fVar47 + fVar67) * fVar63) <= fStack_21c)
        ;
        uVar31 = movmskps(uVar31,auVar69);
        uVar31 = uVar31 & 7;
        if ((char)uVar31 != '\a') {
          pfVar36 = param_4;
          pfVar40 = param_2;
          uVar31 = FUN_144c39240(param_4,&local_3e8,param_2,&local_3c8,&local_178);
          uVar37 = SUB84(pfVar36,0);
          fVar46 = local_178 - (float)local_3c8;
          fVar49 = fStack_174 - local_3c8._4_4_;
          fVar51 = fStack_170 - (float)uStack_3c0;
          fVar45 = fStack_16c - uStack_3c0._4_4_;
          local_3b8 = CONCAT44(fVar49,fVar46);
          uStack_3b0 = CONCAT44(fVar45,fVar51);
          fVar84 = fVar49 * fVar48 - fVar50 * fVar46;
          fVar50 = fVar51 * fVar50 - fVar62 * fVar49;
          fVar48 = fVar46 * fVar62 - fVar48 * fVar51;
          fVar62 = fVar45 * fVar63 - fVar63 * fVar45;
          local_3a8 = CONCAT44(fVar48,fVar50);
          uStack_3a0 = CONCAT44(fVar62,fVar84);
          fVar47 = local_2a8;
          fVar66 = fStack_2a4;
          fVar67 = fStack_2a0;
          fVar52 = fStack_29c;
          goto LAB_144c5dfc9;
        }
        fVar46 = 0.0;
        fVar49 = 0.0;
        fVar51 = 0.0;
        fVar45 = 0.0;
        local_3d8 = -NAN;
        fVar50 = 0.0;
        fVar48 = 0.0;
        fVar84 = 0.0;
        fVar62 = 0.0;
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_338 = 0;
        uStack_330 = 0;
        local_3a8 = 0;
        uStack_3a0 = 0;
        fVar47 = local_2a8;
        fVar66 = fStack_2a4;
        fVar67 = fStack_2a0;
        fVar52 = fStack_29c;
        fVar63 = (float)local_3c8;
        fVar79 = local_3c8._4_4_;
        fVar80 = (float)uStack_3c0;
        fVar81 = uStack_3c0._4_4_;
      }
      uVar21 = uStack_370;
      uVar35 = local_378;
      fVar82 = local_384;
      fVar88 = local_3d8;
      fVar78 = fStack_3dc;
      fVar76 = fStack_3e0;
      fVar74 = fStack_3e4;
      fVar72 = local_3e8;
      if (((uint)pfVar33[0x20] & 0x10) == 0) {
LAB_144c5e191:
        local_208._4_4_ = fVar75;
        local_208._0_4_ = fVar75;
        fStack_200 = fVar75;
        fStack_1fc = fVar75;
        local_1f8._4_4_ = fVar73;
        local_1f8._0_4_ = fVar73;
        fStack_1f0 = fVar73;
        fStack_1ec = fVar73;
        local_248._4_4_ = fVar71;
        local_248._0_4_ = fVar71;
        fStack_240 = fVar71;
        fStack_23c = fVar71;
        local_258._4_4_ = fVar71;
        local_258._0_4_ = fVar70;
        fStack_250 = fVar73;
        fStack_24c = fVar75;
        fVar72 = fVar70;
        fVar74 = fVar71;
        fVar76 = fVar73;
        fVar78 = fVar75;
        fVar63 = fVar46;
        fVar79 = fVar49;
        fVar80 = fVar51;
        fVar81 = fVar45;
        fVar82 = fVar50;
        fVar83 = fVar48;
        fVar85 = fVar84;
      }
      else {
        auVar5._4_4_ = -(uint)(fVar64 == 0.0);
        auVar5._0_4_ = -(uint)(fVar65 == 0.0);
        auVar5._8_4_ = -(uint)(fVar54 == 0.0);
        auVar5._12_4_ = -(uint)(fVar86 == 0.0);
        uVar31 = movmskps(uVar31,auVar5);
        if ((((char)(uVar31 & 7) == '\a') ||
            (auVar6._4_4_ = -(uint)(fVar49 == 0.0), auVar6._0_4_ = -(uint)(fVar46 == 0.0),
            auVar6._8_4_ = -(uint)(fVar51 == 0.0), auVar6._12_4_ = -(uint)(fVar45 == 0.0),
            uVar32 = movmskps(uVar31 & 7,auVar6), ((byte)uVar32 & 7) == 7)) ||
           (fVar89 * fVar49 + fVar87 * fVar46 + fVar90 * fVar51 <= 0.0)) goto LAB_144c5e191;
        _local_258 = ZEXT416((uint)local_3e8);
        _local_248 = ZEXT416((uint)fStack_3e4);
        _local_1f8 = ZEXT416((uint)fStack_3e0);
        local_368 = CONCAT44(fVar49,fVar46);
        uStack_360 = CONCAT44(fVar45,fVar51);
        _local_208 = ZEXT416((uint)fStack_3dc);
        local_384 = local_3d4;
        local_378 = CONCAT44(fVar79,fVar63);
        uStack_370 = CONCAT44(fVar81,fVar80);
        local_3d4 = fVar82;
        local_388 = local_3d8;
        local_358 = CONCAT44(fVar48,fVar50);
        uStack_350 = CONCAT44(fVar62,fVar84);
        local_3e8 = fVar70;
        fStack_3e4 = fVar71;
        fStack_3e0 = fVar73;
        fStack_3dc = fVar75;
        local_3d8 = fVar77;
        local_3c8 = uVar35;
        uStack_3c0 = uVar21;
        local_3b8 = CONCAT44(fVar64,fVar65);
        uStack_3b0 = CONCAT44(fVar86,fVar54);
        local_338 = CONCAT44(fVar89,fVar87);
        uStack_330 = CONCAT44(fVar91,fVar90);
        local_3a8 = CONCAT44(fVar89,fVar87);
        uStack_3a0 = CONCAT44(fVar91,fVar90);
        local_398 = fVar72;
        fStack_394 = fVar74;
        fStack_390 = fVar76;
        fStack_38c = fVar78;
        fVar47 = local_2a8;
        fVar66 = fStack_2a4;
        fVar67 = fStack_2a0;
        fVar52 = fStack_29c;
        fVar63 = fVar65;
        fVar79 = fVar64;
        fVar80 = fVar54;
        fVar81 = fVar86;
        fVar82 = fVar87;
        fVar83 = fVar89;
        fVar85 = fVar90;
        fVar65 = fVar46;
        fVar64 = fVar49;
        fVar54 = fVar51;
        fVar86 = fVar45;
        fVar87 = fVar50;
        fVar89 = fVar48;
        fVar90 = fVar84;
        fVar91 = fVar62;
        fVar77 = fVar88;
        fStack_234 = fVar75;
        fStack_230 = fVar75;
        fStack_22c = fVar75;
        fStack_214 = fVar71;
        fStack_210 = fVar71;
        fStack_20c = fVar71;
        fStack_1e4 = fVar73;
        fStack_1e0 = fVar73;
        fStack_1dc = fVar73;
        local_198 = fVar70;
        fStack_194 = fVar71;
        fStack_190 = fVar73;
        fStack_18c = fVar75;
      }
      uVar35 = 0x8000;
      iVar42 = -(uint)(0.0 <= -fVar85 * fStack_2f0 + -fVar83 * fStack_2f4 + -fVar82 * local_2f8);
      iVar43 = -(uint)(0.0 <= fVar67 * fVar90 + fVar66 * fVar89 + fVar47 * fVar87);
      iVar44 = -(uint)(0.0 <= -fVar85 * fVar67 + -fVar83 * fVar66 + -fVar82 * fVar47);
      auVar55._4_4_ = iVar42;
      auVar55._0_4_ = -(uint)(0.0 <= fStack_2f0 * fVar90 + fStack_2f4 * fVar89 + local_2f8 * fVar87)
      ;
      auVar55._8_4_ = iVar43;
      auVar55._12_4_ = iVar44;
      bVar1 = param_9[5] * fVar64 + param_9[4] * fVar65 + param_9[6] * fVar54 <= 0.0;
      bVar2 = param_9[5] * fVar79 + param_9[4] * fVar63 + param_9[6] * fVar80 <= 0.0;
      if (bVar1) {
        bVar19 = 0.0 < (fVar74 - param_9[1]) * param_9[9] + (fVar72 - *param_9) * param_9[8] +
                       (fVar76 - param_9[2]) * param_9[10];
        uVar35 = CONCAT71(0x80,bVar19);
        if ((!bVar29) &&
           (auVar27._4_4_ = iVar43, auVar27._0_4_ = iVar42, auVar27._8_4_ = iVar44,
           auVar27._12_4_ = 0, auVar55 = auVar27 << 0x20, bVar19)) {
          auVar55 = auVar55 | _DAT_14998f660;
        }
        if ((!bVar24) && (uVar25 = auVar55._0_8_, auVar55._8_4_ = 0, auVar55._0_8_ = uVar25, bVar19)
           ) {
          auVar55 = auVar55 | _DAT_14998f690;
        }
      }
      uVar32 = (undefined4)uVar35;
      if (bVar2) {
        bVar19 = 0.0 < (fStack_3e4 - param_9[1]) * param_9[9] + (local_3e8 - *param_9) * param_9[8]
                       + (fStack_3e0 - param_9[2]) * param_9[10];
        uVar32 = (undefined4)CONCAT71((int7)((ulonglong)uVar35 >> 8),bVar19);
        if ((!bVar29) &&
           (auVar56._0_4_ = auVar55._0_4_, auVar56._4_4_ = 0, auVar56._8_4_ = auVar55._8_4_,
           auVar56._12_4_ = auVar55._12_4_, auVar55 = auVar56, !bVar19)) {
          auVar55 = auVar56 | _DAT_14998f670;
        }
        if ((!bVar24) && (auVar55._12_4_ = 0, !bVar19)) {
          auVar55 = auVar55 | _DAT_14998f6d0;
        }
      }
      auVar17._4_4_ = -(uint)(fStack_2f4 == 0.0);
      auVar17._0_4_ = -(uint)(local_2f8 == 0.0);
      auVar17._8_4_ = -(uint)(fStack_2f0 == 0.0);
      auVar17._12_4_ = -(uint)(fStack_2ec == 0.0);
      uVar31 = movmskps(uVar32,auVar17);
      if ((char)(uVar31 & 7) == '\a') {
        auVar28._8_8_ = 0;
        auVar28._0_8_ = auVar55._8_8_;
        auVar55 = auVar28 << 0x40 | _DAT_14998f660;
      }
      auVar11._4_4_ = -(uint)(fVar66 == 0.0);
      auVar11._0_4_ = -(uint)(fVar47 == 0.0);
      auVar11._8_4_ = -(uint)(fVar67 == 0.0);
      auVar11._12_4_ = -(uint)(fVar52 == 0.0);
      uVar31 = movmskps(uVar31 & 7,auVar11);
      if ((char)(uVar31 & 7) == '\a') {
        auVar57._8_8_ = 0;
        auVar57._0_8_ = auVar55._0_8_;
        auVar55 = auVar57 | _DAT_14998f6d0;
      }
      auVar7._4_4_ = -(uint)(fVar64 == 0.0);
      auVar7._0_4_ = -(uint)(fVar65 == 0.0);
      auVar7._8_4_ = -(uint)(fVar54 == 0.0);
      auVar7._12_4_ = -(uint)(fVar86 == 0.0);
      uVar39 = movmskps((int)CONCAT71((int7)((ulonglong)pfVar40 >> 8),bVar2),auVar7);
      if ((uVar39 & 7) == 7) {
        auVar58._12_4_ = auVar55._12_4_;
        auVar26._4_8_ = 0;
        auVar26._0_4_ = auVar55._4_4_;
        auVar58._0_12_ = auVar26 << 0x20;
        auVar55 = auVar58 | _DAT_14998f660;
      }
      auVar8._4_4_ = -(uint)(fVar79 == 0.0);
      auVar8._0_4_ = -(uint)(fVar63 == 0.0);
      auVar8._8_4_ = -(uint)(fVar80 == 0.0);
      auVar8._12_4_ = -(uint)(fVar81 == 0.0);
      uVar38 = movmskps(uVar37,auVar8);
      if ((uVar38 & 7) == 7) {
        auVar59._0_4_ = auVar55._0_4_;
        auVar59._4_4_ = 0;
        auVar59._8_4_ = auVar55._8_4_;
        auVar59._12_4_ = 0;
        auVar55 = auVar59 | _DAT_14998f6d0;
      }
      auVar18._4_4_ = -(uint)(fStack_2f4 == 0.0);
      auVar18._0_4_ = -(uint)(local_2f8 == 0.0);
      auVar18._8_4_ = -(uint)(fStack_2f0 == 0.0);
      auVar18._12_4_ = -(uint)(fStack_2ec == 0.0);
      uVar31 = movmskps(uVar31 & 7,auVar18);
      uVar31 = uVar31 & 7;
      if ((char)uVar31 == '\a') {
LAB_144c5e473:
        uVar39 = 0;
      }
      else {
        auVar12._4_4_ = -(uint)(fVar66 == 0.0);
        auVar12._0_4_ = -(uint)(fVar47 == 0.0);
        auVar12._8_4_ = -(uint)(fVar67 == 0.0);
        auVar12._12_4_ = -(uint)(fVar52 == 0.0);
        uVar31 = movmskps(uVar31,auVar12);
        uVar31 = uVar31 & 7;
        if (((((char)uVar31 == '\a') || ((uVar39 & 7) == 7)) || ((uVar38 & 7) == 7)) ||
           (fVar89 * fVar79 + fVar87 * fVar63 + fVar90 * fVar80 <= local_168)) goto LAB_144c5e473;
        uVar39 = 0x10;
      }
      uVar31 = movmskps(uVar31,auVar55);
      uVar39 = (uVar31 | uVar39) - 1;
      uVar31 = uVar39;
      if (0x1e < uVar39) goto LAB_144c5e694;
      uVar31 = (uint)(&switchD_144c5e4aa::switchdataD_144c5edcc)[(int)uVar39];
      switch(uVar39) {
      case 0:
      case 2:
        break;
      default:
        goto switchD_144c5e4aa_caseD_1;
      case 3:
      case 6:
      case 0xc:
      case 0x10:
      case 0x13:
      case 0x16:
      case 0x1b:
        goto switchD_144c5e4aa_caseD_3;
      case 4:
      case 0x14:
        if (fVar64 * fVar64 + fVar65 * fVar65 + fVar54 * fVar54 <
            fVar66 * fVar66 + fVar47 * fVar47 + fVar67 * fVar67) {
          fVar46 = *param_2;
          fVar49 = param_2[1];
          fVar51 = param_2[2];
          fVar45 = fVar46 * (local_2d8 - local_328);
          fVar50 = fVar49 * (fStack_2d4 - fStack_324);
          fVar63 = fVar51 * (fStack_2d0 - fStack_320);
          fVar48 = fVar46 * (fVar72 - local_328);
          fVar62 = fVar49 * (fVar74 - fStack_324);
          fVar47 = fVar51 * (fVar76 - fStack_320);
          fVar66 = (local_2d8 - local_328) - (fVar50 + fVar45 + fVar63) * fVar46;
          fVar67 = (fStack_2d4 - fStack_324) - (fVar50 + fVar45 + fVar63) * fVar49;
          fVar52 = (fStack_2d0 - fStack_320) - (fVar50 + fVar45 + fVar63) * fVar51;
          fVar45 = fVar66 * fVar66;
          fVar50 = fVar67 * fVar67;
          fVar63 = fVar52 * fVar52;
          fVar87 = (fVar72 - local_328) - (fVar48 + fVar62 + fVar47) * fVar46;
          fVar89 = (fVar74 - fStack_324) - (fVar48 + fVar62 + fVar47) * fVar49;
          fVar62 = (fVar76 - fStack_320) - (fVar48 + fVar62 + fVar47) * fVar51;
          auVar16._4_4_ = fVar50 + fVar45 + fVar63;
          auVar16._0_4_ = fVar50 + fVar45 + fVar63;
          auVar16._8_4_ = fVar50 + fVar45 + fVar63;
          auVar16._12_4_ = fVar50 + fVar45 + fVar63;
          auVar60 = divps(_DAT_14c6daca0,auVar16);
          fVar45 = fVar87 * fVar66;
          fVar48 = fVar89 * fVar67;
          fVar50 = fVar62 * fVar52;
          auVar53._0_4_ = auVar60._0_4_ * (fVar48 + fVar45 + fVar50);
          auVar53._4_4_ = auVar60._4_4_ * (fVar48 + fVar45 + fVar50);
          auVar53._8_4_ = auVar60._8_4_ * (fVar48 + fVar45 + fVar50);
          auVar53._12_4_ = auVar60._12_4_ * (fVar48 + fVar45 + fVar50);
          auVar60 = minps(auVar53,_DAT_1499314a0);
          auVar60 = maxps(auVar60,ZEXT816(0));
          fStack_31c = ((0.0 - fStack_2cc) - fStack_31c) * auVar60._0_4_ + fStack_31c;
          fVar87 = fVar87 - auVar60._0_4_ * fVar66;
          fVar89 = fVar89 - auVar60._4_4_ * fVar67;
          fVar62 = fVar62 - auVar60._8_4_ * fVar52;
          fVar45 = fVar46 * fVar87;
          fVar48 = fVar49 * fVar89;
          fVar50 = fVar51 * fVar62;
          fVar87 = fVar87 - (fVar48 + fVar45 + fVar50) * fVar46;
          fVar89 = fVar89 - (fVar48 + fVar45 + fVar50) * fVar49;
          fVar62 = fVar62 - (fVar48 + fVar45 + fVar50) * fVar51;
          fVar47 = local_2a8;
          fVar66 = fStack_2a4;
          fVar67 = fStack_2a0;
          fVar52 = fStack_29c;
          if (fVar89 * fVar89 + fVar87 * fVar87 + fVar62 * fVar62 < fStack_31c * fStack_31c)
          goto switchD_144c5e4aa_caseD_1a;
        }
        goto switchD_144c5e4aa_caseD_3;
      case 5:
      case 0x15:
      case 0x18:
        pfVar33 = &local_398;
        pfVar36 = &local_3e8;
        fVar46 = fVar64 * fVar64 + fVar65 * fVar65 + fVar54 * fVar54;
        fVar65 = fVar79 * fVar79 + fVar63 * fVar63 + fVar80 * fVar80;
        goto LAB_144c5eb8b;
      case 7:
      case 0xb:
        local_288 = local_3c8;
        uStack_280 = uStack_3c0;
        local_2b8 = local_3c8;
        uStack_2b0 = uStack_3c0;
        local_298 = local_338;
        uStack_290 = uStack_330;
        local_3f8 = local_3d4;
        local_2c4 = local_3d4;
        fVar47 = fVar63;
        fVar66 = fVar79;
        fVar67 = fVar80;
        fVar52 = fVar81;
        local_408 = local_3d8;
        local_2d8 = local_3e8;
        fStack_2d4 = fStack_3e4;
        fStack_2d0 = fStack_3e0;
        fStack_2cc = fStack_3dc;
        local_2c8 = local_3d8;
        local_2a8 = fVar63;
        fStack_2a4 = fVar79;
        fStack_2a0 = fVar80;
        fStack_29c = fVar81;
        goto LAB_144c5e694;
      case 8:
        local_3f8 = local_3d4;
        local_2c4 = local_3d4;
        local_288 = local_3c8;
        uStack_280 = uStack_3c0;
        local_2b8 = local_3c8;
        uStack_2b0 = uStack_3c0;
        local_298 = local_338;
        uStack_290 = uStack_330;
        fVar47 = fVar63;
        fVar66 = fVar79;
        fVar67 = fVar80;
        fVar52 = fVar81;
        local_408 = local_3d8;
        local_2d8 = local_3e8;
        fStack_2d4 = fStack_3e4;
        fStack_2d0 = fStack_3e0;
        fStack_2cc = fStack_3dc;
        local_2c8 = local_3d8;
        local_2a8 = fVar63;
        fStack_2a4 = fVar79;
        fStack_2a0 = fVar80;
        fStack_29c = fVar81;
        break;
      case 9:
      case 0x19:
        if (fStack_2f4 * fStack_2f4 + local_2f8 * local_2f8 + fStack_2f0 * fStack_2f0 <=
            fVar79 * fVar79 + fVar63 * fVar63 + fVar80 * fVar80) {
switchD_144c5e4aa_caseD_1:
        }
        else {
          fVar65 = *param_2;
          fVar46 = param_2[1];
          fVar49 = param_2[2];
          fVar51 = fVar65 * (local_2d8 - local_328);
          fVar48 = fVar46 * (fStack_2d4 - fStack_324);
          fVar62 = fVar49 * (fStack_2d0 - fStack_320);
          fVar45 = fVar65 * (local_3e8 - local_328);
          fVar50 = fVar46 * (fStack_3e4 - fStack_324);
          fVar47 = fVar49 * (fStack_3e0 - fStack_320);
          fVar66 = (local_2d8 - local_328) - (fVar48 + fVar51 + fVar62) * fVar65;
          fVar67 = (fStack_2d4 - fStack_324) - (fVar48 + fVar51 + fVar62) * fVar46;
          fVar52 = (fStack_2d0 - fStack_320) - (fVar48 + fVar51 + fVar62) * fVar49;
          fVar51 = fVar66 * fVar66;
          fVar48 = fVar67 * fVar67;
          fVar62 = fVar52 * fVar52;
          fVar64 = (local_3e8 - local_328) - (fVar50 + fVar45 + fVar47) * fVar65;
          fVar54 = (fStack_3e4 - fStack_324) - (fVar50 + fVar45 + fVar47) * fVar46;
          fVar47 = (fStack_3e0 - fStack_320) - (fVar50 + fVar45 + fVar47) * fVar49;
          auVar15._4_4_ = fVar48 + fVar51 + fVar62;
          auVar15._0_4_ = fVar48 + fVar51 + fVar62;
          auVar15._8_4_ = fVar48 + fVar51 + fVar62;
          auVar15._12_4_ = fVar48 + fVar51 + fVar62;
          auVar60 = divps(_DAT_14c6daca0,auVar15);
          fVar51 = fVar64 * fVar66;
          fVar45 = fVar54 * fVar67;
          fVar48 = fVar47 * fVar52;
          auVar61._0_4_ = auVar60._0_4_ * (fVar45 + fVar51 + fVar48);
          auVar61._4_4_ = auVar60._4_4_ * (fVar45 + fVar51 + fVar48);
          auVar61._8_4_ = auVar60._8_4_ * (fVar45 + fVar51 + fVar48);
          auVar61._12_4_ = auVar60._12_4_ * (fVar45 + fVar51 + fVar48);
          auVar60 = minps(auVar61,_DAT_1499314a0);
          auVar60 = maxps(auVar60,ZEXT816(0));
          fVar50 = ((0.0 - fStack_2cc) - fStack_31c) * auVar60._0_4_ + fStack_31c;
          fVar64 = fVar64 - auVar60._0_4_ * fVar66;
          fVar54 = fVar54 - auVar60._4_4_ * fVar67;
          fVar47 = fVar47 - auVar60._8_4_ * fVar52;
          fVar51 = fVar65 * fVar64;
          fVar45 = fVar46 * fVar54;
          fVar48 = fVar49 * fVar47;
          fVar64 = fVar64 - (fVar45 + fVar51 + fVar48) * fVar65;
          fVar54 = fVar54 - (fVar45 + fVar51 + fVar48) * fVar46;
          fVar47 = fVar47 - (fVar45 + fVar51 + fVar48) * fVar49;
          if (fVar54 * fVar54 + fVar64 * fVar64 + fVar47 * fVar47 < fVar50 * fVar50)
          goto switchD_144c5e4aa_caseD_1c;
        }
        goto LAB_144c5ecb7;
      case 0xe:
      case 0xf:
        if (0.0 < fVar66 * fVar64 + fVar47 * fVar65 + fVar67 * fVar54) {
          *(float *)((longlong)param_10 + 0x34) = local_3f8;
          *param_10 = local_288;
          param_10[1] = uStack_280;
          *(float *)(param_10 + 2) = fVar47;
          *(float *)((longlong)param_10 + 0x14) = fVar66;
          *(float *)(param_10 + 3) = fVar67;
          *(float *)((longlong)param_10 + 0x1c) = fVar52;
          *(float *)(param_10 + 4) = local_2d8;
          *(float *)((longlong)param_10 + 0x24) = fStack_2d4;
          *(float *)(param_10 + 5) = fStack_2d0;
          *(float *)((longlong)param_10 + 0x2c) = fStack_2cc;
          *(float *)(param_10 + 6) = local_408;
          return 0;
        }
        *param_10 = local_278;
        param_10[1] = uStack_270;
        *(float *)(param_10 + 6) = local_428;
        param_10[4] = CONCAT44(fStack_324,local_328);
        param_10[5] = CONCAT44(fStack_31c,fStack_320);
        *(float *)((longlong)param_10 + 0x34) = local_418;
        *(float *)(param_10 + 2) = local_2f8;
        *(float *)((longlong)param_10 + 0x14) = fStack_2f4;
        *(float *)(param_10 + 3) = fStack_2f0;
        *(float *)((longlong)param_10 + 0x1c) = fStack_2ec;
        return 0;
      case 0x1a:
switchD_144c5e4aa_caseD_1a:
        *param_10 = local_378;
        param_10[1] = uStack_370;
        *(float *)((longlong)param_10 + 0x34) = local_384;
        *(float *)(param_10 + 2) = fVar65;
        *(float *)((longlong)param_10 + 0x14) = fVar64;
        *(float *)(param_10 + 3) = fVar54;
        *(float *)((longlong)param_10 + 0x1c) = fVar86;
        *(float *)(param_10 + 4) = fVar72;
        *(float *)((longlong)param_10 + 0x24) = fVar74;
        *(float *)(param_10 + 5) = fVar76;
        *(float *)((longlong)param_10 + 0x2c) = fVar78;
        *(float *)(param_10 + 6) = fVar77;
        return 0;
      case 0x1c:
switchD_144c5e4aa_caseD_1c:
        *param_10 = local_3c8;
        param_10[1] = uStack_3c0;
        *(float *)((longlong)param_10 + 0x34) = local_3d4;
        *(float *)(param_10 + 2) = fVar63;
        *(float *)((longlong)param_10 + 0x14) = fVar79;
        *(float *)(param_10 + 3) = fVar80;
        *(float *)((longlong)param_10 + 0x1c) = fVar81;
        *(float *)(param_10 + 4) = local_3e8;
        *(float *)((longlong)param_10 + 0x24) = fStack_3e4;
        *(float *)(param_10 + 5) = fStack_3e0;
        *(float *)((longlong)param_10 + 0x2c) = fStack_3dc;
        *(float *)(param_10 + 6) = local_3d8;
        return 0;
      case 0x1e:
        pfVar33 = &local_328;
        pfVar36 = &local_2d8;
        fVar46 = fStack_2f4 * fStack_2f4 + local_2f8 * local_2f8 + fStack_2f0 * fStack_2f0;
        fVar65 = fVar66 * fVar66 + fVar47 * fVar47 + fVar67 * fVar67;
LAB_144c5eb8b:
        if (fVar65 <= fVar46) {
          pfVar33 = pfVar36;
        }
        uVar35 = *(undefined8 *)(pfVar33 + 8);
        uVar21 = *(undefined8 *)(pfVar33 + 10);
        uVar22 = *(undefined8 *)pfVar33;
        uVar23 = *(undefined8 *)(pfVar33 + 2);
        *(float *)(param_10 + 6) = pfVar33[4];
        fVar65 = pfVar33[5];
        *param_10 = uVar35;
        param_10[1] = uVar21;
        uVar35 = *(undefined8 *)(pfVar33 + 0xc);
        uVar21 = *(undefined8 *)(pfVar33 + 0xe);
        *(float *)((longlong)param_10 + 0x34) = fVar65;
        param_10[2] = uVar35;
        param_10[3] = uVar21;
        param_10[4] = uVar22;
        param_10[5] = uVar23;
        return 0;
      }
      uStack_300 = uStack_370;
      local_308 = local_378;
      fStack_31c = (float)local_208._0_4_;
      fStack_320 = (float)local_1f8._0_4_;
      fStack_324 = (float)local_248._0_4_;
      local_328 = (float)local_258._0_4_;
      local_418 = local_384;
      local_2e8 = CONCAT44(fVar89,fVar87);
      uStack_2e0 = CONCAT44(fVar91,fVar90);
      local_428 = fVar77;
      local_318 = fVar77;
      local_314 = local_418;
      local_2f8 = fVar65;
      fStack_2f4 = fVar64;
      fStack_2f0 = fVar54;
      fStack_2ec = fVar86;
      local_278 = local_308;
      uStack_270 = uStack_300;
LAB_144c5e694:
      fVar87 = fStack_2cc;
      fVar86 = fStack_2d0;
      fVar54 = fStack_2d4;
      fVar64 = local_2d8;
      fVar45 = fStack_2ec;
      fVar51 = fStack_2f0;
      fVar49 = fStack_2f4;
      fVar46 = local_2f8;
      local_1d8 = local_158;
      fStack_1d4 = fStack_154;
      fStack_1d0 = fStack_150;
      fStack_1cc = fStack_14c;
      local_1c8 = local_148;
      fStack_1c4 = fStack_144;
      fStack_1c0 = fStack_140;
      fStack_1bc = fStack_13c;
      local_1b8 = local_138;
      fStack_1b4 = fStack_134;
      fStack_1b0 = fStack_130;
      fStack_1ac = fStack_12c;
      local_1a8 = local_128;
      fStack_1a4 = fStack_124;
      fStack_1a0 = fStack_120;
      fStack_19c = fStack_11c;
      local_238 = fStack_3dc;
      local_218 = fStack_3e4;
      local_1e8 = fStack_3e0;
      if (((uint)pfVar33[0x20] & 0x10) != 0) {
        FUN_144c59120(param_1,(int)param_3 + 1,&local_260,&local_268);
        uVar31 = FUN_144c5cb60(&local_3e8,&local_398,param_2,local_260,local_268,&local_1d8,
                               &local_1d8);
        if ((char)uVar31 != '\0') {
          param_8 = param_8 == '\0';
        }
      }
      param_3 = (float)((int)param_3 + 1);
      fVar89 = local_1d8;
      fVar90 = fStack_1d4;
      fVar91 = fStack_1d0;
      fVar70 = fStack_1cc;
      fVar71 = local_1c8;
      fVar73 = fStack_1c4;
      fVar75 = fStack_1c0;
      fVar77 = fStack_1bc;
      fVar84 = local_1b8;
      fVar79 = fStack_1b4;
      fVar80 = fStack_1b0;
      fVar81 = fStack_1ac;
      fVar72 = local_1a8;
      fVar74 = fStack_1a4;
      fVar76 = fStack_1a0;
      fVar78 = fStack_19c;
      fVar48 = local_328;
      fVar50 = fStack_324;
      fVar62 = fStack_320;
      fVar63 = fStack_31c;
      fVar65 = local_228;
      fVar88 = fStack_224;
      fVar82 = fStack_220;
      fVar83 = fStack_21c;
      bVar24 = bVar2;
      bVar29 = bVar1;
    } while ((int)param_3 < (int)local_344);
  }
  auVar13._4_4_ = -(uint)(fVar49 == 0.0);
  auVar13._0_4_ = -(uint)(fVar46 == 0.0);
  auVar13._8_4_ = -(uint)(fVar51 == 0.0);
  auVar13._12_4_ = -(uint)(fVar45 == 0.0);
  uVar30 = movmskps(uVar31,auVar13);
  if (((byte)uVar30 & 7) != 7) {
    pfVar33 = (float *)FUN_144b3f860(param_1,local_428);
    auVar9._4_4_ = -(uint)(pfVar33[5] == pfVar33[1]);
    auVar9._0_4_ = -(uint)(pfVar33[4] == *pfVar33);
    auVar9._8_4_ = -(uint)(pfVar33[6] == pfVar33[2]);
    auVar9._12_4_ = -(uint)(pfVar33[7] == pfVar33[3]);
    iVar42 = movmskps((int)pfVar33,auVar9);
    local_328 = fVar48;
    fStack_324 = fVar50;
    fStack_320 = fVar62;
    fStack_31c = fVar63;
    local_2f8 = fVar46;
    fStack_2f4 = fVar49;
    fStack_2f0 = fVar51;
    fStack_2ec = fVar45;
    if (iVar42 == 0xf) {
LAB_144c5ecb7:
      *(float *)((longlong)param_10 + 0x34) = local_418;
      *param_10 = local_278;
      param_10[1] = uStack_270;
      *(float *)(param_10 + 2) = local_2f8;
      *(float *)((longlong)param_10 + 0x14) = fStack_2f4;
      *(float *)(param_10 + 3) = fStack_2f0;
      *(float *)((longlong)param_10 + 0x1c) = fStack_2ec;
      *(float *)(param_10 + 4) = local_328;
      *(float *)((longlong)param_10 + 0x24) = fStack_324;
      *(float *)(param_10 + 5) = fStack_320;
      *(float *)((longlong)param_10 + 0x2c) = fStack_31c;
      *(float *)(param_10 + 6) = local_428;
      return 0;
    }
    auVar14._4_4_ = -(uint)(fVar66 == 0.0);
    auVar14._0_4_ = -(uint)(fVar47 == 0.0);
    auVar14._8_4_ = -(uint)(fVar67 == 0.0);
    auVar14._12_4_ = -(uint)(fVar52 == 0.0);
    uVar30 = movmskps(iVar42,auVar14);
    if (((byte)uVar30 & 7) != 7) {
      uVar35 = *(undefined8 *)(param_4 + 2);
      *param_10 = *(undefined8 *)param_4;
      param_10[1] = uVar35;
      fVar65 = (fVar66 - fVar49) * fRam000000014c6dad94;
      fVar66 = (fVar67 - fVar51) * fRam000000014c6dad98;
      fVar67 = (fVar52 - fVar45) * fRam000000014c6dad9c;
      *(float *)(param_10 + 2) = (fVar47 - fVar46) * _DAT_14c6dad90 + fVar46;
      *(float *)((longlong)param_10 + 0x14) = fVar65 + fVar49;
      *(float *)(param_10 + 3) = fVar66 + fVar51;
      *(float *)((longlong)param_10 + 0x1c) = fVar67 + fVar45;
      fVar65 = (fVar64 - fVar48) * _DAT_14c6dad90;
      fVar46 = (fVar54 - fVar50) * fRam000000014c6dad94;
      fVar49 = (fVar86 - fVar62) * fRam000000014c6dad98;
      fVar51 = (fVar87 - fVar63) * fRam000000014c6dad9c;
      *(float *)(param_10 + 6) = local_428;
      *(float *)((longlong)param_10 + 0x34) = local_418;
      *(float *)(param_10 + 4) = fVar65 + fVar48;
      *(float *)((longlong)param_10 + 0x24) = fVar46 + fVar50;
      *(float *)(param_10 + 5) = fVar49 + fVar62;
      *(float *)((longlong)param_10 + 0x2c) = fVar51 + fVar63;
      return 1;
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
                    /* WARNING: Read-only address (ram,0x00014998f660) is written */
                    /* WARNING: Read-only address (ram,0x00014998f670) is written */
                    /* WARNING: Read-only address (ram,0x00014998f690) is written */
                    /* WARNING: Read-only address (ram,0x00014998f6d0) is written */
  return 4;
switchD_144c5e4aa_caseD_3:
  *(float *)((longlong)param_10 + 0x34) = local_3f8;
  *param_10 = local_288;
  param_10[1] = uStack_280;
  *(float *)(param_10 + 2) = fVar47;
  *(float *)((longlong)param_10 + 0x14) = fVar66;
  *(float *)(param_10 + 3) = fVar67;
  *(float *)((longlong)param_10 + 0x1c) = fVar52;
  *(float *)(param_10 + 4) = local_2d8;
  *(float *)((longlong)param_10 + 0x24) = fStack_2d4;
  *(float *)(param_10 + 5) = fStack_2d0;
  *(float *)((longlong)param_10 + 0x2c) = fStack_2cc;
  *(float *)(param_10 + 6) = local_408;
  return 0;
}



// FUNCTION 144c5edf0 FUN_144c5edf0 body=96 status=ok
// SIG undefined FUN_144c5edf0(void)

void FUN_144c5edf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,code *param_5
                  )

{
  if (param_4 != 0) {
    param_1 = param_1 - param_2;
    do {
      (*param_5)(param_1 + param_2,param_2);
      param_2 = param_2 + param_3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 144c5ee50 FUN_144c5ee50 body=123 status=ok
// SIG undefined FUN_144c5ee50(void)

uint * FUN_144c5ee50(longlong param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *param_3;
  lVar5 = (longlong)iVar4;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (iVar4 < *(int *)(lVar3 + 0x30)) {
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar4 = *(int *)(*(longlong *)(lVar3 + 0x70) + lVar5 * 4);
    }
    if (iVar4 == -1) {
      lVar6 = *(longlong *)(lVar3 + 0x28);
      lVar5 = lVar5 * 5;
    }
    else {
      lVar5 = (longlong)iVar4 * 5;
      lVar6 = *(longlong *)(lVar3 + 0xc0);
    }
  }
  else {
    lVar5 = (longlong)(iVar4 - *(int *)(lVar3 + 0x30)) * 5;
    lVar6 = *(longlong *)(lVar3 + 0xe0);
  }
  bVar1 = *(byte *)(lVar6 + 0x10 + lVar5 * 4);
  uVar2 = *(uint *)(lVar6 + 0xc + lVar5 * 4);
  iVar4 = *(int *)(lVar3 + 0x17c);
  *param_2 = uVar2;
  if (((bVar1 & 0x40) == 0) && (uVar2 != 0xffffffff)) {
    *param_2 = uVar2 & 0x3fffff | iVar4 << 0x16;
  }
  return param_2;
}



// FUNCTION 144c5eed0 FUN_144c5eed0 body=24 status=ok
// SIG undefined FUN_144c5eed0(void)

undefined8 FUN_144c5eed0(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= *(int *)(param_1 + 0x18)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144c5eef0 FUN_144c5eef0 body=24 status=ok
// SIG undefined FUN_144c5eef0(void)

undefined8 FUN_144c5eef0(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= *(int *)(param_1 + 0x28)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144c5ef10 FUN_144c5ef10 body=349 status=ok
// SIG undefined FUN_144c5ef10(void)

bool FUN_144c5ef10(undefined8 param_1,float *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 local_28 [16];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_28._8_8_ = "";
    local_28._0_8_ = "TtlineOfSight";
    FUN_144b3f370(lVar1,local_28);
  }
  if ((param_2[4] == -NAN) || (param_2[0x1c] == -NAN)) {
    bVar4 = false;
  }
  else {
    auVar9._0_4_ = param_2[0x18] - *param_2;
    auVar9._4_4_ = param_2[0x19] - param_2[1];
    auVar9._8_4_ = param_2[0x1a] - param_2[2];
    auVar9._12_4_ = param_2[0x1b] - param_2[3];
    fVar6 = auVar9._0_4_ * auVar9._0_4_;
    fVar7 = auVar9._4_4_ * auVar9._4_4_;
    fVar8 = auVar9._8_4_ * auVar9._8_4_;
    local_28 = ZEXT816(0);
    fVar10 = fVar7 + fVar6 + fVar8;
    if (fVar10 != 0.0) {
      auVar5._4_4_ = fVar7 + fVar6 + fVar8;
      auVar5._0_4_ = fVar10;
      auVar5._8_4_ = fVar7 + fVar6 + fVar8;
      auVar5._12_4_ = fVar7 + fVar6 + fVar8;
      auVar5 = sqrtps(local_28,auVar5);
      local_28 = divps(auVar9,auVar5);
    }
    iVar2 = FUN_144c5f1f0(local_28,param_2 + 0x18,param_2[0x1c],param_1,param_2,param_3);
    bVar4 = iVar2 == 9;
  }
  if (lVar1 != 0) {
    local_28._8_8_ = &DAT_149981766;
    local_28._0_8_ = &DAT_149981764;
    FUN_144b3f260(lVar1,local_28);
  }
  return bVar4;
}



// FUNCTION 144c5f070 FUN_144c5f070 body=382 status=ok
// SIG undefined FUN_144c5f070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_144c5f070(undefined8 param_1,float *param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar1 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar6;
  }
  lVar1 = *(longlong *)(lVar6 + 0x3e0);
  if (lVar1 != 0) {
    local_28 = "TtfindDirectPath";
    uStack_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  auVar7._0_4_ = -(uint)(((uint)param_2[0x18] & 0x7f800000) == 0x7f800000);
  auVar7._4_4_ = -(uint)(((uint)param_2[0x19] & 0x7f800000) == 0x7f800000);
  auVar7._8_4_ = -(uint)(((uint)param_2[0x1a] & 0x7f800000) == 0x7f800000);
  auVar7._12_4_ = -(uint)(((uint)param_2[0x1b] & 0x7f800000) == 0x7f800000);
  if (((SUB161(auVar7 >> 7,0) & 1) == 0 && (SUB161(auVar7 >> 0x27,0) & 1) == 0) &&
      (SUB161(auVar7 >> 0x47,0) & 1) == 0) {
    fVar2 = param_2[0x18];
    fVar3 = param_2[0x19];
    fVar4 = param_2[0x1a];
    if (ABS((fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) - _DAT_14c6daca0) < 0.0001) {
      local_28 = (char *)CONCAT44(fVar3 + param_2[1],fVar2 + *param_2);
      uStack_20 = (char *)CONCAT44(param_2[0x1b] + param_2[3],fVar4 + param_2[2]);
      uVar5 = FUN_144c5f1f0(param_2 + 0x18,&local_28,0xffffffff,param_1,param_2,param_3);
      goto LAB_144c5f1a9;
    }
  }
  uVar5 = 0;
LAB_144c5f1a9:
  if (lVar1 != 0) {
    local_28 = &DAT_149981764;
    uStack_20 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_28);
  }
  return uVar5;
}



// FUNCTION 144c5f1f0 FUN_144c5f1f0 body=7937 status=ok
// SIG undefined FUN_144c5f1f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144c5f1f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,
                 longlong param_4,undefined1 (*param_5) [16],longlong *param_6)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined4 uVar11;
  char cVar12;
  byte bVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  byte bVar20;
  short sVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  float *pfVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  uint uVar35;
  bool bVar36;
  float fVar37;
  undefined1 auVar38 [8];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  float fVar66;
  float fVar79;
  float fVar80;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [12];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [12];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  undefined1 auVar97 [12];
  undefined1 auVar98 [12];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [12];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar112;
  float fVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  float fVar117;
  float fVar119;
  float fVar120;
  undefined1 auVar118 [16];
  float fVar121;
  float fVar123;
  float fVar124;
  undefined1 auVar122 [16];
  int local_134c;
  int local_1348;
  int local_1344;
  undefined8 local_1340;
  undefined4 local_1338;
  uint local_1330;
  undefined1 local_1328 [8];
  float fStack_1320;
  float fStack_131c;
  uint local_1318;
  int local_1314;
  int local_1310;
  undefined1 local_1308 [8];
  undefined8 uStack_1300;
  undefined1 local_12f8 [8];
  float fStack_12f0;
  int local_12e8;
  int local_12e4;
  undefined1 local_12d8 [8];
  undefined8 uStack_12d0;
  int local_12c8;
  int local_12c0;
  int local_12bc;
  undefined8 local_12b8;
  uint local_12b0;
  byte *local_12a8;
  longlong local_12a0;
  longlong local_1298;
  undefined1 local_1288 [16];
  undefined1 local_1278 [8];
  undefined8 uStack_1270;
  undefined4 local_1268;
  uint local_1260;
  uint local_125c;
  uint local_1258;
  float local_1254;
  uint local_1250;
  uint local_124c;
  uint local_1248;
  uint local_1244 [3];
  undefined1 local_1238 [8];
  float fStack_1230;
  float fStack_122c;
  undefined8 local_1228;
  undefined8 uStack_1220;
  uint local_1218 [4];
  undefined1 local_1208 [8];
  undefined8 uStack_1200;
  float *local_11f8;
  undefined1 local_11e8 [16];
  undefined1 local_11d8 [16];
  undefined4 local_11c8;
  undefined4 local_11c4;
  undefined4 local_11c0;
  undefined1 local_11b8 [16];
  undefined8 local_11a8;
  undefined8 local_11a0;
  longlong local_1198;
  undefined4 local_1190;
  float local_1188;
  float local_1180;
  float local_117c;
  undefined1 local_1158 [16];
  undefined1 local_1148 [16];
  undefined1 local_1138 [16];
  undefined1 local_1128 [2] [16];
  uint local_1108 [2];
  int *local_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  uint local_10d8;
  int *local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined1 local_10b8 [16];
  uint local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  longlong local_1088;
  undefined4 local_1080;
  float local_107c;
  undefined8 local_1078;
  undefined4 local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined4 local_1050;
  float local_1048;
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined1 local_1028 [16];
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined1 local_1008 [8];
  float fStack_1000;
  float fStack_ffc;
  undefined1 local_ff8 [16];
  undefined1 local_fe8 [16];
  undefined1 local_fd8 [8];
  float fStack_fd0;
  float local_fc8;
  float fStack_fc4;
  float fStack_fc0;
  float fStack_fbc;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  longlong local_f98;
  float *local_f90;
  uint *local_f88;
  undefined1 local_f80;
  longlong local_f78;
  undefined1 *local_f70;
  uint *local_f68;
  byte local_f60;
  float local_f58;
  float fStack_f54;
  float fStack_f50;
  float fStack_f4c;
  float local_f48;
  float fStack_f44;
  float fStack_f40;
  float fStack_f3c;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  float local_f18;
  float fStack_f14;
  float fStack_f10;
  float fStack_f0c;
  undefined8 local_f08;
  undefined8 uStack_f00;
  float local_ef8 [5];
  float fStack_ee4;
  float fStack_ee0;
  float fStack_edc;
  undefined1 local_ed8 [16];
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  float local_eb8;
  float fStack_eb4;
  float fStack_eb0;
  float fStack_eac;
  longlong local_ea8;
  undefined1 *local_ea0;
  uint *local_e98;
  byte local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined1 local_e78 [16];
  float local_e68;
  float fStack_e64;
  float fStack_e60;
  float fStack_e5c;
  undefined1 local_e58 [16];
  uint local_e48;
  uint uStack_e44;
  uint uStack_e40;
  uint uStack_e3c;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined1 local_e08 [16];
  undefined1 local_df8 [16];
  undefined1 local_de8 [3504];
  float fVar102;
  
  uVar26 = *(uint *)param_5[1];
  uVar29 = (ulonglong)uVar26;
  if (uVar26 != 0xffffffff) {
    pfVar25 = (float *)(param_5[1] + 8);
    auVar52._0_12_ = ZEXT812(0x3f000000);
    auVar52._12_4_ = 0.0;
    local_1268 = 0;
    fVar37 = *pfVar25;
    lVar24 = (ulonglong)(uVar26 >> 0x16) * 0x120;
    lVar3 = *(longlong *)(lVar24 + *(longlong *)(param_4 + 0x38));
    local_1188 = fVar37 * 0.5 - *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x68) + 0xb0)
    ;
    local_1180 = local_1188;
    if (local_1188 <= 0.0) {
      local_1180 = 0.0;
    }
    local_11d8._4_4_ = local_1180;
    local_11d8._0_4_ = local_1180;
    local_11d8._8_4_ = local_1180;
    local_11d8._12_4_ = local_1180;
    fVar1 = *(float *)(param_5[2] + 8);
    if ((fVar1 <= 0.0) || (fVar37 * 0.5 <= fVar1)) {
      uVar35 = 0xffffffff;
      _local_1328 = *(undefined1 (*) [16])(lVar3 + 0xc0);
      auVar48 = *param_1;
      auVar122 = auVar48;
      local_11f8 = pfVar25;
      if (param_5[5][0xb] != '\0') {
        local_1260 = uVar26 & 0x3fffff;
        FUN_144c52b10(local_df8,*(undefined8 *)(lVar24 + *(longlong *)(param_4 + 0x38)),&local_1260,
                      local_1328);
        fVar1 = *(float *)(param_5[2] + 8);
        fVar37 = *pfVar25;
        auVar122 = *param_1;
      }
      fVar121 = local_1328._0_4_;
      fVar123 = local_1328._4_4_;
      fVar124 = local_1328._8_4_;
      fVar66 = local_1328._12_4_;
      fVar107 = fVar121 * auVar48._4_4_ - fVar123 * auVar48._0_4_;
      fVar112 = fVar123 * auVar48._8_4_ - fVar124 * auVar48._4_4_;
      fVar113 = fVar124 * auVar48._0_4_ - fVar121 * auVar48._8_4_;
      auVar108._12_4_ = fVar66 * auVar48._12_4_ - fVar66 * auVar48._12_4_;
      auVar108._4_4_ = fVar113;
      auVar108._0_4_ = fVar112;
      auVar108._8_4_ = fVar107;
      fVar112 = fVar112 * fVar112;
      fVar113 = fVar113 * fVar113;
      fVar107 = fVar107 * fVar107;
      auVar55._4_4_ = fVar112;
      auVar55._0_4_ = fVar112;
      auVar55._8_4_ = fVar112;
      auVar55._12_4_ = fVar112;
      auVar86._0_4_ = fVar107 + fVar113 + fVar112;
      auVar86._4_4_ = fVar107 + fVar113 + fVar112;
      auVar86._8_4_ = fVar107 + fVar113 + fVar112;
      auVar86._12_4_ = fVar107 + fVar113 + fVar112;
      if (auVar86._0_4_ == 0.0) {
        auVar81 = SUB1612(ZEXT816(0),0);
      }
      else {
        auVar55 = sqrtps(auVar55,auVar86);
        auVar55 = divps(auVar108,auVar55);
        auVar81 = auVar55._0_12_;
      }
      auVar114 = *param_5;
      local_117c = fVar1 - fVar37 * 0.5;
      auVar109._12_4_ =
           0.0 - (auVar114._8_4_ * auVar81._8_4_ +
                 auVar114._4_4_ * auVar81._4_4_ + auVar114._0_4_ * auVar81._0_4_);
      auVar109._0_12_ = auVar81;
      local_f18 = *(float *)(param_5[2] + 0xc);
      local_f58 = local_117c * local_117c;
      fStack_f54 = local_117c * local_117c;
      fStack_f50 = local_117c * local_117c;
      fStack_f4c = local_117c * local_117c;
      local_12b0 = 4;
      local_12b8 = 0xffffffffffffffff;
      if (param_5[5][10] == '\0') {
        local_ed8 = local_11d8;
        fVar37 = 0.0 - local_11d8._0_4_;
        fVar112 = 0.0 - local_11d8._4_4_;
        fVar113 = 0.0 - local_11d8._8_4_;
        fVar107 = 0.0 - local_11d8._12_4_;
        local_ef8[4] = fVar37;
        fStack_ee4 = fVar112;
        fStack_ee0 = fVar113;
        fStack_edc = fVar107;
        pfVar25 = (float *)local_ed8;
      }
      else {
        local_f08 = 0;
        uStack_f00 = 0;
        local_f08._0_4_ = 0.0;
        local_f08._4_4_ = 0.0;
        uStack_f00._0_4_ = 0.0;
        uStack_f00._4_4_ = 0.0;
        pfVar25 = local_ef8;
        local_ef8[0] = 0.0;
        local_ef8[1] = 0.0;
        local_ef8[2] = 0.0;
        local_ef8[3] = 0.0;
        fVar37 = (float)local_f08;
        fVar112 = local_f08._4_4_;
        fVar113 = (float)uStack_f00;
        fVar107 = uStack_f00._4_4_;
      }
      fVar4 = *pfVar25;
      fVar5 = pfVar25[1];
      fVar6 = pfVar25[2];
      fVar7 = pfVar25[3];
      local_1228 = 0;
      uStack_1220 = 0;
      fVar65 = fVar121 * auVar122._0_4_;
      fVar79 = fVar123 * auVar122._4_4_;
      fVar80 = fVar124 * auVar122._8_4_;
      local_1314 = 0;
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      fVar121 = auVar122._0_4_ - (fVar80 + fVar79 + fVar65) * fVar121;
      fVar123 = auVar122._4_4_ - (fVar80 + fVar79 + fVar65) * fVar123;
      fVar124 = auVar122._8_4_ - (fVar80 + fVar79 + fVar65) * fVar124;
      fStack_eac = auVar122._12_4_ - (fVar80 + fVar79 + fVar65) * fVar66;
      _local_12f8 = auVar114;
      local_f48 = local_117c;
      fStack_f44 = local_117c;
      fStack_f40 = local_117c;
      fStack_f3c = local_117c;
      fStack_f14 = local_f18;
      fStack_f10 = local_f18;
      fStack_f0c = local_f18;
      local_eb8 = fVar121;
      fStack_eb4 = fVar123;
      fStack_eb0 = fVar124;
      if (*(char *)(lVar24 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      uVar18 = 0x114;
      lVar14 = *(longlong *)(lVar24 + 0xf0);
      if (lVar14 == 0) {
        if (*(char *)(lVar24 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar14 = FUN_144b3f4a0();
        uVar18 = 0;
        *(longlong *)(lVar24 + 0xf0) = lVar14;
      }
      local_1198 = *(longlong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
      local_11a0 = 0x20;
      if (*(longlong *)(local_1198 + 8) != 0) {
        local_1198 = 0;
      }
      if (local_1198 == 0) {
        local_12a0 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)uVar18 >> 8),1),&local_11a0,0x40);
      }
      else {
        local_11a8 = 0x40;
        if (0x3f < *(ulonglong *)(local_1198 + 0x28)) {
          local_12a0 = *(longlong *)(local_1198 + 0x38);
          if (local_12a0 + 0x40U <= *(ulonglong *)(local_1198 + 0x40)) {
            *(ulonglong *)(local_1198 + 0x38) = local_12a0 + 0x40U;
            auVar114 = _local_12f8;
            goto LAB_144c5f5e7;
          }
        }
        local_12a0 = FUN_144b454a0(local_1198,&local_11a8);
        auVar114 = _local_12f8;
      }
LAB_144c5f5e7:
      fVar121 = fVar121 * *(float *)*param_5;
      fVar123 = fVar123 * *(float *)(*param_5 + 4);
      fVar124 = fVar124 * *(float *)(*param_5 + 8);
      cVar2 = param_5[5][0xc];
      auVar122._0_4_ = fVar124 + fVar123 + fVar121;
      auVar122._4_4_ = fVar124 + fVar123 + fVar121;
      auVar122._8_4_ = fVar124 + fVar123 + fVar121;
      auVar122._12_4_ = fVar124 + fVar123 + fVar121;
      local_1298 = local_12a0;
      if (((char)param_6[6] == '\0') ||
         ((int)param_6[5] < (int)(*(uint *)((longlong)param_6 + 0x2c) & 0x7fffffff))) {
        iVar30 = (int)param_6[5] + 1;
        if ((int)(*(uint *)((longlong)param_6 + 0x2c) & 0x7fffffff) < iVar30) {
          FUN_144bdedb0(param_6 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar30);
        }
        puVar15 = (undefined8 *)((longlong)(int)param_6[5] * 0x10 + param_6[4]);
        if (puVar15 != (undefined8 *)0x0) {
          uVar18 = *(undefined8 *)(*param_5 + 8);
          *puVar15 = *(undefined8 *)*param_5;
          puVar15[1] = uVar18;
        }
        *(int *)(param_6 + 5) = iVar30;
        auVar114 = _local_12f8;
      }
      local_1050 = 0x3a83126f;
      local_1080 = *(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x180);
      local_107c = *local_11f8 * 0.5;
      local_1078 = *(undefined8 *)param_5[4];
      local_1070 = *(undefined4 *)(param_5[4] + 8);
      local_1068 = *(undefined8 *)param_5[5];
      local_1060 = *(undefined8 *)(param_5[3] + 8);
      local_1058 = *(undefined8 *)param_5[2];
      local_1088 = param_4;
      FUN_144b3fb20(local_de8);
      local_1310 = 0;
      iVar30 = 0;
      do {
        FUN_144be90e0(0x7fc8bdeb);
        local_10d8 = 0xffffffff;
        local_10c8 = 0;
        uStack_10c0 = 0;
        local_10f8 = 0;
        uStack_10f0 = 0;
        local_10d0 = (int *)0x0;
        local_1098 = 0;
        uStack_1090 = 0;
        uVar32 = 0xffffffff;
        local_e38 = 0;
        uStack_e30 = 0;
        local_1100 = (int *)0x0;
        local_1108[0] = 0xffffffff;
        local_10e8 = *(undefined8 *)*param_5;
        uStack_10e0 = *(undefined8 *)(*param_5 + 8);
        local_1028 = ZEXT816(0);
        uVar28 = (uint)uVar29;
        uStack_12d0 = uRam000000014c6daca8;
        local_12d8 = (undefined1  [8])_DAT_14c6daca0;
        _local_1308 = ZEXT816(0);
        local_134c = 3;
        uVar26 = 0xffffffff;
        lVar3 = *(longlong *)((uVar29 >> 0x16) * 0x120 + *(longlong *)(param_4 + 0x38));
        local_1340 = 0xffffffffffffffff;
        local_1338 = 4;
        _local_1278 = *param_2;
        local_1288 = *param_2;
        local_1218[0] = uVar28 & 0x3fffff;
        local_fb8 = 0;
        uStack_fb0 = 0;
        _local_1238 = auVar114;
        local_10a0 = FUN_144c44fc0(*(undefined8 *)(lVar3 + 0x20),local_1218,&local_fb8);
        local_1098 = local_fb8;
        uStack_1090 = uStack_fb0;
        local_ec8 = local_fb8;
        uStack_ec0 = uStack_fb0;
        local_11b8._0_8_ = local_10a0;
        local_10a8 = uVar28;
        cVar12 = FUN_144c49180(local_de8);
        fVar121 = auVar109._12_4_;
        if (cVar12 == '\0') {
LAB_144c5f85e:
          iVar30 = 5;
          auVar114 = _local_12f8;
LAB_144c5f869:
          auVar71._0_12_ = ZEXT812(0);
          auVar71._12_4_ = 0;
          _local_12d8 = ZEXT816(0);
          auVar55 = _local_1308;
        }
        else {
          if (*(longlong **)(param_5[3] + 8) != (longlong *)0x0) {
            local_f90 = local_11f8;
            local_f88 = local_1108;
            local_f80 = 2;
            local_f98 = param_4;
            cVar12 = (**(code **)(**(longlong **)(param_5[3] + 8) + 0x28))();
            if (cVar12 == '\0') goto LAB_144c5f85e;
          }
          if (uVar28 == param_3) {
            local_134c = 9;
            auVar114 = *param_2;
            _local_12f8 = auVar114;
            local_1288 = auVar114;
            _local_1278 = auVar114;
            _local_1208 = auVar114;
            local_11e8 = auVar114;
          }
          else {
            bVar20 = param_5[5][0xd];
            bVar36 = false;
            bVar10 = false;
            if (((bVar20 & 8) == 0) && ((bVar20 & 4) != 0)) {
              local_1318 = 2;
              local_12e8 = 1;
              local_12c8 = -1;
            }
            else {
              local_12c8 = 1;
              local_12e8 = 0;
              local_1318 = ((bVar20 & 4) != 0) + 1;
            }
            local_12a8 = param_5[5] + 0xd;
            local_12e4 = 0;
            uVar34 = (ulonglong)local_1318;
            local_11e8 = local_1288;
            _local_1208 = _local_1278;
            auVar114 = _local_12f8;
            do {
              if ((uVar26 != 0xffffffff) && (bVar36)) goto LAB_144c5fe35;
              if (local_12e8 == 1) {
                sVar21 = *(short *)(local_11b8._0_8_ + 10);
                puVar16 = (uint *)(local_11b8._0_8_ + 4);
              }
              else {
                sVar21 = (short)*(uint *)(local_11b8._0_8_ + 8);
                puVar16 = (uint *)local_11b8._0_8_;
              }
              uVar32 = *puVar16;
              if (0 < sVar21) {
                uVar22 = uVar28 & 0xffc00000;
                uVar31 = uVar32;
                local_1330 = uVar22;
                do {
                  if ((uVar31 | uVar22) != uVar35) {
                    local_fa8 = 0;
                    uStack_fa0 = 0;
                    local_1244[0] = uVar31;
                    piVar17 = (int *)FUN_144c450c0(*(undefined8 *)(lVar3 + 0x20),local_1244,
                                                   &local_fa8);
                    lVar24 = *(longlong *)(lVar3 + 0x20);
                    iVar33 = *piVar17;
                    iVar27 = *(int *)(lVar24 + 0x40);
                    if (iVar33 < iVar27) {
                      pfVar25 = (float *)((longlong)iVar33 * 0x10 + *(longlong *)(lVar24 + 0x38));
                    }
                    else {
                      pfVar25 = (float *)((longlong)(iVar33 - iVar27) * 0x10 +
                                         *(longlong *)(lVar24 + 0xf0));
                    }
                    iVar33 = piVar17[1];
                    fVar123 = *pfVar25;
                    fVar124 = pfVar25[1];
                    fVar66 = pfVar25[2];
                    if (iVar33 < iVar27) {
                      pfVar25 = (float *)((longlong)iVar33 * 0x10 + *(longlong *)(lVar24 + 0x38));
                    }
                    else {
                      pfVar25 = (float *)((longlong)(iVar33 - iVar27) * 0x10 +
                                         *(longlong *)(lVar24 + 0xf0));
                    }
                    fVar65 = *pfVar25;
                    fVar79 = pfVar25[1];
                    fVar80 = pfVar25[2];
                    auVar55 = *(undefined1 (*) [16])(lVar3 + 0x80);
                    auVar86 = *(undefined1 (*) [16])(lVar3 + 0x90);
                    auVar52._0_4_ =
                         fVar124 * *(float *)(lVar3 + 0x70) + fVar123 * *(float *)(lVar3 + 0x60) +
                         fVar66 * auVar55._0_4_ + auVar86._0_4_;
                    auVar52._4_4_ =
                         fVar124 * *(float *)(lVar3 + 0x74) + fVar123 * *(float *)(lVar3 + 100) +
                         fVar66 * auVar55._4_4_ + auVar86._4_4_;
                    auVar52._8_4_ =
                         fVar124 * *(float *)(lVar3 + 0x78) + fVar123 * *(float *)(lVar3 + 0x68) +
                         fVar66 * auVar55._8_4_ + auVar86._8_4_;
                    auVar52._12_4_ =
                         fVar124 * *(float *)(lVar3 + 0x7c) + fVar123 * *(float *)(lVar3 + 0x6c) +
                         fVar66 * auVar55._12_4_ + auVar86._12_4_;
                    fVar123 = fVar79 * *(float *)(lVar3 + 0x70) + fVar65 * *(float *)(lVar3 + 0x60)
                              + fVar80 * auVar55._0_4_ + auVar86._0_4_;
                    fVar124 = fVar79 * *(float *)(lVar3 + 0x74) + fVar65 * *(float *)(lVar3 + 100) +
                              fVar80 * auVar55._4_4_ + auVar86._4_4_;
                    auVar41._4_4_ = fVar124;
                    auVar41._0_4_ = fVar123;
                    fVar66 = fVar79 * *(float *)(lVar3 + 0x78) + fVar65 * *(float *)(lVar3 + 0x68) +
                             fVar80 * auVar55._8_4_ + auVar86._8_4_;
                    fVar65 = fVar79 * *(float *)(lVar3 + 0x7c) + fVar65 * *(float *)(lVar3 + 0x6c) +
                             fVar80 * auVar55._12_4_ + auVar86._12_4_;
                    bVar20 = *(byte *)(piVar17 + 4) & 0x10;
                    uVar22 = local_1330;
                    if ((bVar20 == 0) ||
                       (((piVar17[2] != -1 && ((*(byte *)(piVar17 + 4) & 0x20) == 0)) ||
                        ((*local_12a8 & 3) != 0)))) {
                      fVar80 = auVar52._0_4_ * auVar109._0_4_;
                      fVar64 = auVar52._4_4_ * auVar109._4_4_;
                      fVar96 = auVar52._8_4_ * auVar109._8_4_;
                      fVar79 = fVar64 + fVar80;
                      fVar80 = fVar80 + fVar64;
                      fVar117 = fVar121 + fVar96;
                      fVar96 = fVar96 + fVar121;
                      fVar64 = fVar123 * auVar109._0_4_;
                      fVar116 = fVar124 * auVar109._4_4_;
                      fVar120 = fVar66 * auVar109._8_4_;
                      fVar119 = fVar117 + fVar79;
                      fVar102 = fVar96 + fVar80;
                      auVar99._0_8_ = CONCAT44(fVar102,fVar119);
                      auVar99._8_4_ = fVar79 + fVar117;
                      auVar99._12_4_ = fVar80 + fVar96;
                      fVar79 = fVar116 + fVar64;
                      fVar64 = fVar64 + fVar116;
                      fVar80 = fVar121 + fVar120;
                      fVar120 = fVar120 + fVar121;
                      fVar117 = fVar80 + fVar79;
                      fVar96 = fVar120 + fVar64;
                      fVar79 = fVar79 + fVar80;
                      fVar64 = fVar64 + fVar120;
                      if (bVar20 == 0) {
                        auVar56._0_4_ = -(uint)(fVar119 <= fVar37 && fVar4 <= fVar117);
                        auVar56._4_4_ = -(uint)(fVar102 <= fVar112 && fVar5 <= fVar96);
                        auVar56._8_4_ = -(uint)(auVar99._8_4_ <= fVar113 && fVar6 <= fVar79);
                        auVar56._12_4_ = -(uint)(auVar99._12_4_ <= fVar107 && fVar7 <= fVar64);
                        iVar33 = movmskps((int)local_12a8,auVar56);
                        bVar36 = iVar33 != 0;
                      }
                      else {
                        auVar67._0_4_ = -(uint)(fVar119 <= fVar37 && fVar4 <= fVar117);
                        auVar67._4_4_ = -(uint)(fVar102 <= fVar112 && fVar5 <= fVar96);
                        auVar67._8_4_ = -(uint)(auVar99._8_4_ <= fVar113 && fVar6 <= fVar79);
                        auVar67._12_4_ = -(uint)(auVar99._12_4_ <= fVar107 && fVar7 <= fVar64);
                        if ((*local_12a8 & 0x10) != 0) {
                          auVar57._0_4_ = -(uint)(fVar4 <= fVar119 && fVar117 <= fVar37);
                          auVar57._4_4_ = -(uint)(fVar5 <= fVar102 && fVar96 <= fVar112);
                          auVar57._8_4_ = -(uint)(fVar6 <= auVar99._8_4_ && fVar79 <= fVar113);
                          auVar57._12_4_ = -(uint)(fVar7 <= auVar99._12_4_ && fVar64 <= fVar107);
                          auVar67 = auVar67 | auVar57;
                        }
                        iVar33 = movmskps((int)local_12a8,auVar67);
                        if (iVar33 == 0) goto LAB_144c5fcd8;
                        auVar39._0_4_ = fVar119 - fVar117;
                        auVar39._4_4_ = fVar102 - fVar96;
                        auVar39._8_4_ = auVar99._8_4_ - fVar79;
                        auVar39._12_4_ = auVar99._12_4_ - fVar64;
                        auVar58._8_4_ = auVar99._8_4_;
                        auVar58._0_8_ = auVar99._0_8_;
                        auVar58._12_4_ = auVar99._12_4_;
                        auVar55 = divps(auVar58,auVar39);
                        auVar55 = minps(auVar55,_DAT_1499314a0);
                        auVar55 = maxps(auVar55,ZEXT816(0));
                        bVar36 = fStack_1230 * auVar48._8_4_ +
                                 (float)local_1238._4_4_ * auVar48._4_4_ +
                                 (float)local_1238._0_4_ * auVar48._0_4_ <
                                 (auVar52._8_4_ + auVar55._8_4_ * (fVar66 - auVar52._8_4_)) *
                                 auVar48._8_4_ +
                                 (auVar52._4_4_ + auVar55._4_4_ * (fVar124 - auVar52._4_4_)) *
                                 auVar48._4_4_ +
                                 (auVar52._0_4_ + auVar55._0_4_ * (fVar123 - auVar52._0_4_)) *
                                 auVar48._0_4_;
                      }
                      if (bVar36) {
                        auVar40._0_4_ = fVar119 - fVar117;
                        auVar40._4_4_ = fVar102 - fVar96;
                        auVar40._8_4_ = auVar99._8_4_ - fVar79;
                        auVar40._12_4_ = auVar99._12_4_ - fVar64;
                        auVar55 = divps(auVar99,auVar40);
                        auVar55 = minps(auVar55,_DAT_1499314a0);
                        auVar55 = maxps(auVar55,ZEXT816(0));
                        fVar123 = auVar52._0_4_ + auVar55._0_4_ * (fVar123 - auVar52._0_4_);
                        fVar124 = auVar52._4_4_ + auVar55._4_4_ * (fVar124 - auVar52._4_4_);
                        auVar82._0_8_ = CONCAT44(fVar124,fVar123);
                        auVar82._8_4_ = auVar52._8_4_ + auVar55._8_4_ * (fVar66 - auVar52._8_4_);
                        auVar82._12_4_ = auVar52._12_4_ + auVar55._12_4_ * (fVar65 - auVar52._12_4_)
                        ;
                        fVar123 = fVar123 * local_eb8;
                        fVar124 = fVar124 * fStack_eb4;
                        fVar79 = auVar82._8_4_ * fStack_eb0;
                        auVar68._0_4_ = fVar79 + fVar124 + fVar123;
                        auVar68._4_4_ = fVar79 + fVar124 + fVar123;
                        auVar68._8_4_ = fVar79 + fVar124 + fVar123;
                        auVar68._12_4_ = fVar79 + fVar124 + fVar123;
                        if (param_5[5][0xb] == '\0') {
                          if (auVar122._0_4_ < auVar68._0_4_) {
                            iVar30 = 0;
                            local_1314 = 0;
                          }
                          else {
                            iVar33 = 0;
                            lVar24 = 0;
                            if (0 < iVar30) {
                              do {
                                if (*(uint *)(local_12a0 + lVar24 * 4) == uVar28) {
                                  if (iVar33 != -1) goto LAB_144c5fcd8;
                                  break;
                                }
                                iVar33 = iVar33 + 1;
                                lVar24 = lVar24 + 1;
                              } while (lVar24 < iVar30);
                            }
                            if (iVar30 == 8) goto LAB_144c5fcd8;
                            lVar24 = (longlong)iVar30;
                            iVar30 = iVar30 + 1;
                            puVar16 = (uint *)(local_12a0 + lVar24 * 4);
                            local_1314 = iVar30;
                            if (puVar16 != (uint *)0x0) {
                              *puVar16 = uVar28;
                            }
                          }
                        }
                        auVar114._8_4_ = auVar82._8_4_;
                        auVar114._0_8_ = auVar82._0_8_;
                        auVar114._12_4_ = auVar82._12_4_;
                        auVar122 = maxps(auVar122,auVar68);
                        if ((piVar17[2] == -1) || ((*(byte *)(piVar17 + 4) & 0x20) != 0)) {
                          bVar36 = false;
                        }
                        else {
                          bVar36 = true;
                        }
                        local_1348 = *piVar17;
                        auVar41._8_4_ = fVar66;
                        auVar41._12_4_ = fVar65;
                        local_1028._8_8_ = uStack_fa0;
                        local_1028._0_8_ = local_fa8;
                        local_1344 = piVar17[1];
                        local_1338 = piVar17[4];
                        uVar26 = piVar17[2];
                        if (((*(byte *)(piVar17 + 4) & 0x40) == 0) && (uVar26 != 0xffffffff)) {
                          uVar26 = uVar26 & 0x3fffff |
                                   *(int *)(*(longlong *)(lVar3 + 0x20) + 0x17c) << 0x16;
                        }
                        uVar32 = piVar17[3];
                        if (((*(byte *)(piVar17 + 4) & 0x40) == 0) && (uVar32 != 0xffffffff)) {
                          uVar32 = uVar32 & 0x3fffff |
                                   *(int *)(*(longlong *)(lVar3 + 0x20) + 0x17c) << 0x16;
                        }
                        local_1340 = CONCAT44(uVar32,uVar26);
                        uVar26 = uVar31;
                        _local_12f8 = auVar82;
                        local_1288 = auVar52;
                        _local_1278 = auVar41;
                        _local_1208 = auVar41;
                        local_11e8 = auVar52;
                        break;
                      }
                    }
                  }
LAB_144c5fcd8:
                  uVar31 = uVar31 + 1;
                  bVar36 = bVar10;
                } while ((int)(uVar31 - uVar32) < (int)sVar21);
                uVar34 = (ulonglong)local_1318;
                bVar10 = bVar36;
              }
              local_12e8 = local_12e8 + local_12c8;
              local_12e4 = local_12e4 + 1;
            } while (local_12e4 < (int)uVar34);
            local_11b8 = auVar122;
            if (uVar26 == 0xffffffff) {
              iVar30 = 1;
              goto LAB_144c5f869;
            }
LAB_144c5fe35:
            uVar32 = uVar28 & 0xffc00000 | uVar26;
            if (!bVar36) {
              uVar11 = local_12d8._0_4_;
              local_1048 = (float)local_12d8._0_4_;
              uStack_1044 = local_12d8._4_4_;
              uStack_1040 = (float)uStack_12d0;
              uStack_103c = uStack_12d0._4_4_;
              iVar30 = 4;
              local_134c = 4;
              FUN_144c623f0(local_1238,local_12f8,local_11d8,
                            CONCAT71((int7)(uVar34 >> 8),param_5[5][9] != '\0'),local_1328,
                            local_1288,local_1278,&local_1048);
              auVar9._4_4_ = uStack_1044;
              auVar9._0_4_ = local_1048;
              auVar9._8_4_ = uStack_1040;
              auVar9._12_4_ = uStack_103c;
              if (local_1048 < (float)uVar11) {
                _local_12d8 = auVar9;
              }
              auVar55 = _local_1308;
              auVar71 = _local_12d8;
              if (cVar2 == '\0') goto LAB_144c60608;
            }
          }
          auVar81 = auVar114._0_12_;
          fVar121 = local_1328._4_4_;
          fVar65 = auVar114._0_4_;
          fVar79 = auVar114._4_4_;
          fVar80 = auVar114._8_4_;
          fVar123 = ((float)local_1238._0_4_ - fVar65) * ((float)local_1238._0_4_ - fVar65);
          fVar124 = ((float)local_1238._4_4_ - fVar79) * ((float)local_1238._4_4_ - fVar79);
          fVar66 = (fStack_1230 - fVar80) * (fStack_1230 - fVar80);
          auVar69._0_4_ = fVar66 + fVar124 + fVar123;
          auVar69._4_4_ = fVar66 + fVar124 + fVar123;
          auVar69._8_4_ = fVar66 + fVar124 + fVar123;
          auVar69._12_4_ = fVar66 + fVar124 + fVar123;
          auVar55 = sqrtps(auVar52,auVar69);
          if (fVar1 <= 0.0) {
LAB_144c60049:
            if (local_134c != 9) goto LAB_144c60054;
LAB_144c6006b:
            auVar71 = _local_12d8;
            cVar12 = '\x01';
            if (((uint)local_1340 == -1) ||
               (((local_1338 & 0x20) != 0 || ((local_1338 & 0x10) != 0)))) {
LAB_144c60159:
              plVar23 = *(longlong **)(param_5[3] + 8);
              if ((plVar23 != (longlong *)0x0) ||
                 (_local_1308 = auVar55, *(longlong *)param_5[3] != 0)) {
                if (local_134c == 9) {
                  local_10d8 = 0xffffffff;
                  local_10c8 = 0;
                  uStack_10c0 = 0;
                  local_e28 = 0;
                  uStack_e20 = 0;
                  local_10d0 = (int *)0x0;
                  local_e18 = 0;
                  uStack_e10 = 0;
                  plVar23 = *(longlong **)(param_5[3] + 8);
                }
                else {
                  local_10d0 = &local_1348;
                  local_10c8 = local_1028._0_8_;
                  uStack_10c0 = local_1028._8_8_;
                  local_10d8 = uVar32;
                }
                bVar13 = 0;
                bVar20 = bVar13;
                if (local_134c == 9) {
                  bVar20 = 0x40;
                }
                if (local_1310 == 0) {
                  bVar13 = 0x10;
                }
                bVar20 = bVar20 | bVar13;
                if (bVar20 == 0) {
                  bVar20 = 0x20;
                }
                local_10b8 = auVar114;
                if (plVar23 != (longlong *)0x0) {
                  local_f70 = param_5[1] + 8;
                  local_f68 = local_1108;
                  local_f60 = bVar20 | 2;
                  local_f78 = param_4;
                  cVar12 = (**(code **)(*plVar23 + 0x28))();
                }
                plVar23 = *(longlong **)param_5[3];
                _local_1308 = auVar55;
                if (plVar23 != (longlong *)0x0) {
                  local_e90 = bVar20 | 2;
                  local_ea0 = param_5[1] + 8;
                  local_e98 = local_1108;
                  local_e88 = local_1228;
                  uStack_e80 = uStack_1220;
                  local_ea8 = param_4;
                  local_e78 = auVar55;
                  (**(code **)(*plVar23 + 0x28))(plVar23,&local_f28,&local_ea8);
                  uStack_1300 = uStack_f20;
                  local_1308 = (undefined1  [8])local_f28;
                }
              }
              auVar55 = _local_1308;
              if (cVar12 != '\0') goto LAB_144c604c5;
              auVar52 = local_11e8;
              auVar38 = local_1208;
              uVar18 = uStack_1200;
            }
            else {
              local_1248 = uVar32 & 0x3fffff;
              FUN_144c5ee50(*(undefined8 *)
                             ((ulonglong)(uVar32 >> 0x16) * 0x120 + *(longlong *)(param_4 + 0x38)),
                            &local_124c,&local_1248);
              uVar26 = local_124c;
              local_1038 = 0;
              uStack_1030 = 0;
              local_1250 = local_124c & 0x3fffff;
              uVar18 = FUN_144c44fc0(*(undefined8 *)
                                      (*(longlong *)
                                        ((ulonglong)(local_124c >> 0x16) * 0x120 +
                                        *(longlong *)(param_4 + 0x38)) + 0x20),&local_1250,
                                     &local_1038);
              local_f38 = local_1038;
              uStack_f30 = uStack_1030;
              cVar12 = FUN_144c49180(local_de8,uVar26,uVar18,&local_f38);
              auVar114 = _local_12f8;
              if (cVar12 != '\0') {
                local_11e8 = local_1288;
                _local_1208 = _local_1278;
                _local_1308 = auVar55;
                goto LAB_144c60159;
              }
              _local_1208 = _local_1278;
              auVar52 = local_1288;
              auVar38 = local_1278;
              uVar18 = uStack_1270;
              _local_1308 = auVar55;
            }
            auVar86 = _local_12d8;
            auVar98 = auVar114._0_12_;
            if (local_134c == 3) {
              local_134c = 5;
            }
            if (cVar2 == '\0') {
              iVar30 = 5;
              auVar55 = _local_1308;
              goto LAB_144c60608;
            }
            fVar121 = local_1328._12_4_;
            local_e68 = (float)local_1238._0_4_;
            fStack_e64 = (float)local_1238._4_4_;
            fStack_e60 = fStack_1230;
            fStack_e5c = fStack_122c;
            local_1018 = auVar38;
            uStack_1010 = uVar18;
            _local_1008 = auVar52;
            if (param_5[5][9] != '\0') {
              fVar65 = local_1328._0_4_;
              fVar123 = (float)local_1238._0_4_ * fVar65;
              fVar79 = local_1328._4_4_;
              fVar124 = (float)local_1238._4_4_ * fVar79;
              fVar80 = local_1328._8_4_;
              fVar66 = fStack_1230 * fVar80;
              local_e68 = (float)local_1238._0_4_ - (fVar66 + fVar124 + fVar123) * fVar65;
              fStack_e64 = (float)local_1238._4_4_ - (fVar66 + fVar124 + fVar123) * fVar79;
              fStack_e60 = fStack_1230 - (fVar66 + fVar124 + fVar123) * fVar80;
              fStack_e5c = fStack_122c - (fVar66 + fVar124 + fVar123) * fVar121;
              fVar123 = fVar65 * auVar114._0_4_;
              fVar124 = fVar79 * auVar114._4_4_;
              fVar66 = fVar80 * auVar114._8_4_;
              auVar98._0_4_ = auVar114._0_4_ - (fVar66 + fVar124 + fVar123) * fVar65;
              auVar98._4_4_ = auVar114._4_4_ - (fVar66 + fVar124 + fVar123) * fVar79;
              auVar98._8_4_ = auVar114._8_4_ - (fVar66 + fVar124 + fVar123) * fVar80;
              fVar123 = fVar65 * auVar52._0_4_;
              fVar124 = fVar79 * auVar52._4_4_;
              fVar66 = fVar80 * auVar52._8_4_;
              local_1008._4_4_ = auVar52._4_4_ - (fVar66 + fVar124 + fVar123) * fVar79;
              local_1008._0_4_ = auVar52._0_4_ - (fVar66 + fVar124 + fVar123) * fVar65;
              fStack_1000 = auVar52._8_4_ - (fVar66 + fVar124 + fVar123) * fVar80;
              fStack_ffc = auVar52._12_4_ - (fVar66 + fVar124 + fVar123) * fVar121;
              fVar123 = fVar65 * (float)local_1208._0_4_;
              fVar124 = fVar79 * (float)local_1208._4_4_;
              fVar66 = fVar80 * (float)uStack_1200;
              local_1018 = CONCAT44((float)local_1208._4_4_ - (fVar66 + fVar124 + fVar123) * fVar79,
                                    (float)local_1208._0_4_ - (fVar66 + fVar124 + fVar123) * fVar65)
              ;
              uStack_1010 = CONCAT44(uStack_1200._4_4_ - (fVar66 + fVar124 + fVar123) * fVar121,
                                     (float)uStack_1200 - (fVar66 + fVar124 + fVar123) * fVar80);
            }
            fVar121 = auVar98._0_4_ - local_e68;
            fVar123 = auVar98._4_4_ - fStack_e64;
            fVar124 = auVar98._8_4_ - fStack_e60;
            local_e58._0_4_ = (float)(~-(uint)(fVar121 == 0.0) & (uint)fVar121);
            local_e58._4_4_ = (float)(~-(uint)(fVar123 == 0.0) & (uint)fVar123);
            local_e58._8_4_ = (float)(~-(uint)(fVar124 == 0.0) & (uint)fVar124);
            local_e58._12_4_ = (float)(~-(uint)(local_12d8._12_4_ == 0.0) & (uint)local_12d8._12_4_)
            ;
            auVar100._8_8_ = uRam000000014c6daca8;
            auVar100._0_8_ = _DAT_14c6daca0;
            auVar52 = divps(auVar100,local_e58);
            local_e48 = -(uint)(local_e58._0_4_ == 0.0) & 0x7f7fffee |
                        ~-(uint)(local_e58._0_4_ == 0.0) & auVar52._0_4_;
            uStack_e44 = -(uint)(local_e58._4_4_ == 0.0) & 0x7f7fffee |
                         ~-(uint)(local_e58._4_4_ == 0.0) & auVar52._4_4_;
            uStack_e40 = -(uint)(local_e58._8_4_ == 0.0) & 0x7f7fffee |
                         ~-(uint)(local_e58._8_4_ == 0.0) & auVar52._8_4_;
            uStack_e3c = -(uint)(local_e58._12_4_ == 0.0) & 0x7f7fffee |
                         ~-(uint)(local_e58._12_4_ == 0.0) & auVar52._12_4_;
            local_ff8 = auVar71;
            if (0.0 < local_e58._8_4_ * local_e58._8_4_ +
                      local_e58._4_4_ * local_e58._4_4_ + local_e58._0_4_ * local_e58._0_4_) {
              FUN_144c62590(&local_e68,local_1008,&local_1018,local_11d8,local_ff8);
              auVar100._8_8_ = uRam000000014c6daca8;
              auVar100._0_8_ = _DAT_14c6daca0;
            }
            if (local_ff8._0_4_ < auVar86._0_4_) {
              local_134c = 5;
              auVar86 = local_ff8;
              _local_12d8 = local_ff8;
            }
          }
          else {
            auVar52 = *param_5;
            auVar97 = auVar52._0_12_;
            fVar123 = (float)local_1238._0_4_;
            fVar124 = (float)local_1238._4_4_;
            fVar66 = fStack_1230;
            if (param_5[5][9] != '\0') {
              fVar64 = local_1328._0_4_;
              fVar117 = local_1328._8_4_;
              fVar123 = fVar64 * auVar52._0_4_;
              fVar124 = fVar121 * auVar52._4_4_;
              fVar66 = fVar117 * auVar52._8_4_;
              auVar97._0_4_ = auVar52._0_4_ - (fVar66 + fVar124 + fVar123) * fVar64;
              auVar97._4_4_ = auVar52._4_4_ - (fVar66 + fVar124 + fVar123) * fVar121;
              auVar97._8_4_ = auVar52._8_4_ - (fVar66 + fVar124 + fVar123) * fVar117;
              fVar123 = fVar64 * fVar65;
              fVar124 = fVar121 * fVar79;
              fVar66 = fVar117 * fVar80;
              auVar81._0_4_ = fVar65 - (fVar66 + fVar124 + fVar123) * fVar64;
              auVar81._4_4_ = fVar79 - (fVar66 + fVar124 + fVar123) * fVar121;
              auVar81._8_4_ = fVar80 - (fVar66 + fVar124 + fVar123) * fVar117;
              fVar66 = (float)local_1238._0_4_ * fVar64;
              fVar65 = (float)local_1238._4_4_ * fVar121;
              fVar79 = fStack_1230 * fVar117;
              fVar123 = (float)local_1238._0_4_ - (fVar79 + fVar65 + fVar66) * fVar64;
              fVar124 = (float)local_1238._4_4_ - (fVar79 + fVar65 + fVar66) * fVar121;
              fVar66 = fStack_1230 - (fVar79 + fVar65 + fVar66) * fVar117;
            }
            fVar123 = fVar123 - auVar97._0_4_;
            fVar124 = fVar124 - auVar97._4_4_;
            fVar66 = fVar66 - auVar97._8_4_;
            fVar121 = auVar81._0_4_ - auVar97._0_4_;
            fVar65 = auVar81._4_4_ - auVar97._4_4_;
            fVar79 = auVar81._8_4_ - auVar97._8_4_;
            fVar123 = fVar123 * fVar123;
            fVar124 = fVar124 * fVar124;
            fVar66 = fVar66 * fVar66;
            fVar121 = fVar121 * fVar121;
            fVar65 = fVar65 * fVar65;
            fVar79 = fVar79 * fVar79;
            auVar42._4_4_ = fVar121;
            auVar42._0_4_ = fVar121;
            auVar42._8_4_ = fVar121;
            auVar42._12_4_ = fVar121;
            auVar91._0_4_ = fVar66 + fVar124 + fVar123;
            auVar91._4_4_ = fVar66 + fVar124 + fVar123;
            auVar91._8_4_ = fVar66 + fVar124 + fVar123;
            auVar91._12_4_ = fVar66 + fVar124 + fVar123;
            auVar59._0_4_ = fVar65 + fVar121;
            auVar59._4_4_ = fVar65 + fVar121;
            auVar59._8_4_ = fVar65 + fVar121;
            auVar59._12_4_ = fVar65 + fVar121;
            auVar83._0_4_ = fVar79 + auVar59._0_4_;
            auVar83._4_4_ = fVar79 + auVar59._4_4_;
            auVar83._8_4_ = fVar79 + auVar59._8_4_;
            auVar83._12_4_ = fVar79 + auVar59._12_4_;
            if (auVar83._0_4_ <= local_f58) goto LAB_144c60049;
            auVar52 = sqrtps(auVar42,auVar91);
            auVar86 = sqrtps(auVar59,auVar83);
            auVar70._0_4_ = local_f48 - auVar52._0_4_;
            auVar70._4_4_ = fStack_f44 - auVar52._4_4_;
            auVar70._8_4_ = fStack_f40 - auVar52._8_4_;
            auVar70._12_4_ = fStack_f3c - auVar52._12_4_;
            auVar60._0_4_ = auVar86._0_4_ - auVar52._0_4_;
            auVar60._4_4_ = auVar86._4_4_ - auVar52._4_4_;
            auVar60._8_4_ = auVar86._8_4_ - auVar52._8_4_;
            auVar60._12_4_ = auVar86._12_4_ - auVar52._12_4_;
            auVar52 = divps(auVar70,auVar60);
            auVar52 = minps(auVar52,_DAT_14c6dae80);
            auVar71 = maxps(auVar52,ZEXT816(0));
            if (local_12d8._0_4_ <= auVar71._0_4_) goto LAB_144c60049;
            iVar30 = 6;
            local_134c = 6;
            _local_12d8 = auVar71;
            if (cVar2 == '\0') goto LAB_144c60608;
LAB_144c60054:
            auVar71 = _local_12d8;
            if (((uint)local_1340 != -1) && ((local_1338 & 0x20) == 0)) goto LAB_144c6006b;
LAB_144c604c5:
            _local_1308 = auVar55;
            auVar100._8_8_ = uRam000000014c6daca8;
            auVar100._0_8_ = _DAT_14c6daca0;
            auVar86 = auVar71;
          }
          if ((((((local_1338 & 0x10) != 0) && ((param_5[5][0xd] & 0x20) != 0)) ||
               (param_5[5][10] == '\0')) ||
              ((local_fe8 = auVar100,
               iVar30 = FUN_144c61100(local_1238,local_12f8,local_1328,local_11d8,param_4,param_5,
                                      uVar29,local_de8,local_fe8), iVar30 == 3 ||
               (auVar86._0_4_ <= local_fe8._0_4_)))) ||
             (_local_12d8 = local_fe8, auVar55 = _local_1308, auVar86 = local_fe8,
             auVar71 = local_fe8, local_134c = iVar30, cVar2 != '\0')) {
            iVar30 = local_134c;
            auVar71 = auVar86;
            auVar55 = _local_1308;
            if ((float)local_1308._0_4_ * auVar86._0_4_ + (float)local_1228 <= local_f18) {
              iVar33 = local_1310 + 1;
              if (local_1310 < *(int *)(param_5[1] + 4)) {
                if ((((char)param_6[6] == '\0') ||
                    (local_1310 = iVar33,
                    (int)param_6[1] < (int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff))) &&
                   (local_1310 = iVar33, uVar32 != 0xffffffff)) {
                  iVar27 = (int)param_6[1] + 1;
                  if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar27) {
                    FUN_144c30c90(param_6,&PTR_vftable_14c6e47a0,(longlong)iVar27);
                  }
                  puVar16 = (uint *)(*param_6 + (longlong)(int)param_6[1] * 4);
                  if (puVar16 != (uint *)0x0) {
                    *puVar16 = uVar32;
                  }
                  *(int *)(param_6 + 1) = iVar27;
                  auVar55 = _local_1308;
                  auVar114 = _local_12f8;
                }
              }
              else {
                iVar30 = 8;
                local_1310 = iVar33;
              }
            }
            else {
              iVar30 = 7;
            }
          }
        }
LAB_144c60608:
        auVar86 = _local_1328;
        local_1308._0_4_ = auVar55._0_4_ * auVar71._0_4_;
        local_1308._4_4_ = auVar55._4_4_ * auVar71._4_4_;
        uStack_1300._0_4_ = auVar55._8_4_ * auVar71._8_4_;
        uStack_1300._4_4_ = auVar55._12_4_ * auVar71._12_4_;
        fVar121 = (float)local_1308._0_4_ + (float)local_1228;
        local_1228 = CONCAT44((float)local_1308._4_4_ + local_1228._4_4_,fVar121);
        uStack_1220 = CONCAT44(uStack_1300._4_4_ + uStack_1220._4_4_,
                               (float)uStack_1300 + (float)uStack_1220);
        cVar12 = FUN_144c5eed0(param_6);
        if (cVar12 != '\0') {
          iVar33 = (int)param_6[3] + 1;
          if ((int)(*(uint *)((longlong)param_6 + 0x1c) & 0x7fffffff) < iVar33) {
            FUN_144c62aa0(param_6 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar33);
          }
          pfVar25 = (float *)(param_6[2] + (longlong)(int)param_6[3] * 4);
          if (pfVar25 != (float *)0x0) {
            *pfVar25 = fVar121;
          }
          *(int *)(param_6 + 3) = iVar33;
          auVar86 = _local_1328;
          auVar114 = _local_12f8;
        }
        auVar55 = _local_1238;
        auVar52._0_4_ =
             local_1238._0_4_ + (auVar114._0_4_ - local_1238._0_4_) * (float)local_12d8._0_4_;
        auVar52._4_4_ =
             local_1238._4_4_ + (auVar114._4_4_ - local_1238._4_4_) * (float)local_12d8._4_4_;
        auVar52._8_4_ = local_1238._8_4_ + (auVar114._8_4_ - local_1238._8_4_) * (float)uStack_12d0;
        auVar52._12_4_ =
             local_1238._12_4_ + (auVar114._12_4_ - local_1238._12_4_) * uStack_12d0._4_4_;
        cVar12 = FUN_144c5eef0(param_6);
        if (cVar12 != '\0') {
          iVar33 = (int)param_6[5] + 1;
          if ((int)(*(uint *)((longlong)param_6 + 0x2c) & 0x7fffffff) < iVar33) {
            FUN_144bdedb0(param_6 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar33);
          }
          pauVar19 = (undefined1 (*) [16])((longlong)(int)param_6[5] * 0x10 + param_6[4]);
          if (pauVar19 != (undefined1 (*) [16])0x0) {
            *pauVar19 = auVar52;
          }
          *(int *)(param_6 + 5) = iVar33;
          auVar86 = _local_1328;
          auVar55 = _local_1238;
          auVar114 = _local_12f8;
        }
        if (iVar30 != 3) {
          if (((cVar2 == '\0') && (iVar30 != 9)) && (param_5[5][8] == '\0')) {
            *(undefined4 *)(param_6 + 1) = 0;
          }
          *(int *)((longlong)param_6 + 0x34) = local_1310;
          *(uint *)(param_6 + 7) = uVar28;
          *(undefined1 (*) [16])(param_6 + 8) = auVar52;
          *(float *)((longlong)param_6 + 0x3c) = (float)local_1228;
          FUN_144be90e0(0x460a6961);
          FUN_144b3fa90(local_de8);
          if (local_1198 != 0) {
            if ((0x3f < *(ulonglong *)(local_1198 + 0x28)) &&
               (local_1298 + 0x40 == *(longlong *)(local_1198 + 0x38))) {
              *(longlong *)(local_1198 + 0x38) = local_1298;
              if (*(longlong *)(local_1198 + 0x48) != local_1298) {
                return iVar30;
              }
              FUN_144be8430();
              return iVar30;
            }
            FUN_144be8550(local_1198,local_1298,0x40);
            return iVar30;
          }
          (*DAT_14c787678)(1,local_1298,0x20);
          return iVar30;
        }
        uVar26 = local_1340._4_4_;
        uVar29 = (ulonglong)local_1340._4_4_;
        uVar35 = (uint)local_1340;
        if ((*(longlong *)param_5[3] != 0) || (*(longlong *)(param_5[3] + 8) != 0)) {
          local_12c0 = local_1348;
          local_12bc = local_1344;
          local_12b8 = local_1340;
          local_12b0 = local_1338;
          local_1108[0] = local_10d8;
          local_1100 = &local_12c0;
          local_10f8 = local_10c8;
          uStack_10f0 = uStack_10c0;
          local_10e8 = local_10b8._0_8_;
          uStack_10e0 = local_10b8._8_8_;
        }
        if (param_5[5][0xb] != '\0') {
          auVar115._0_4_ = auVar114._0_4_ - auVar55._0_4_;
          auVar115._4_4_ = auVar114._4_4_ - auVar55._4_4_;
          auVar115._8_4_ = auVar114._8_4_ - auVar55._8_4_;
          auVar115._12_4_ = auVar114._12_4_ - auVar55._12_4_;
          fVar121 = auVar115._0_4_ * auVar115._0_4_;
          fVar123 = auVar115._4_4_ * auVar115._4_4_;
          fVar124 = auVar115._8_4_ * auVar115._8_4_;
          auVar43._4_4_ = fVar121;
          auVar43._0_4_ = fVar121;
          auVar43._8_4_ = fVar121;
          auVar43._12_4_ = fVar121;
          auVar72._0_4_ = fVar123 + fVar121 + fVar124;
          auVar72._4_4_ = fVar123 + fVar121 + fVar124;
          auVar72._8_4_ = fVar123 + fVar121 + fVar124;
          auVar72._12_4_ = fVar123 + fVar121 + fVar124;
          if (auVar72._0_4_ == 0.0) {
            auVar48 = ZEXT816(0);
          }
          else {
            auVar48 = sqrtps(auVar43,auVar72);
            auVar48 = divps(auVar115,auVar48);
          }
          local_125c = local_1340._4_4_ & 0x3fffff;
          _local_fd8 = auVar86;
          FUN_144c52b10(local_e08,
                        *(undefined8 *)
                         ((ulonglong)(local_1340._4_4_ >> 0x16) * 0x120 +
                         *(longlong *)(param_4 + 0x38)),&local_125c,local_1328);
          fVar80 = local_1328._0_4_;
          fVar64 = local_1328._4_4_;
          fVar117 = local_1328._8_4_;
          fVar121 = fVar80 * (float)local_fd8._0_4_;
          fVar123 = fVar64 * (float)local_fd8._4_4_;
          fVar124 = fVar117 * fStack_fd0;
          fVar66 = fVar123 + fVar121 + fVar124;
          fVar65 = fVar123 + fVar121 + fVar124;
          fVar79 = fVar123 + fVar121 + fVar124;
          fVar124 = fVar123 + fVar121 + fVar124;
          local_11c8 = 0x3f7fff58;
          auVar93 = _DAT_14c6dae70;
          if (fVar66 <= 0.99999) {
            auVar44._8_4_ = 0xbf7fff58;
            auVar44._0_8_ = 0xbf7fff58bf7fff58;
            auVar44._12_4_ = 0xbf7fff58;
            if (-0.99999 <= fVar66) {
              fVar121 = (float)DAT_14c6dad90;
              fVar123 = DAT_14c6dad90._4_4_;
              fVar96 = DAT_14c6dad90._8_4_;
              auVar84._0_4_ = fVar66 * fVar121 + fVar121;
              auVar84._4_4_ = fVar65 * fVar123 + fVar123;
              auVar84._8_4_ = fVar79 * fVar96 + fVar96;
              auVar84._12_4_ = fVar124 * DAT_14c6dad90._12_4_ + DAT_14c6dad90._12_4_;
              if (auVar84._0_4_ == 0.0) {
                auVar52 = ZEXT816(0);
              }
              else {
                auVar8._8_8_ = uRam000000014c6daca8;
                auVar8._0_8_ = _DAT_14c6daca0;
                auVar52 = sqrtps(auVar44,auVar84);
                auVar52 = divps(auVar8,auVar52);
              }
              auVar90._0_4_ = fVar121 * auVar52._0_4_;
              auVar90._4_4_ = fVar123 * auVar52._4_4_;
              auVar90._8_4_ = fVar96 * auVar52._8_4_;
              fVar121 = fVar64 * (float)local_fd8._0_4_ - (float)local_fd8._4_4_ * fVar80;
              fVar123 = fVar117 * (float)local_fd8._4_4_ - fStack_fd0 * fVar64;
              fVar80 = fVar80 * fStack_fd0 - (float)local_fd8._0_4_ * fVar117;
              local_11c4 = 0xbf7fbe77;
              if (fVar66 < -0.999) {
                auVar92._0_4_ = auVar84._0_4_ - fVar66;
                auVar92._4_4_ = auVar84._4_4_ - fVar65;
                auVar92._8_4_ = auVar84._8_4_ - fVar79;
                auVar92._12_4_ = auVar84._12_4_ - fVar124;
                fVar124 = fVar123 * fVar123;
                fVar66 = fVar80 * fVar80;
                auVar73._8_4_ = fVar121 * fVar121;
                auVar45._4_4_ = fVar124;
                auVar45._0_4_ = fVar124;
                auVar45._8_4_ = fVar124;
                auVar45._12_4_ = fVar124;
                auVar73._4_4_ = auVar73._8_4_;
                auVar73._0_4_ = auVar73._8_4_;
                auVar73._12_4_ = auVar73._8_4_;
                auVar55 = sqrtps(auVar45,auVar92);
                auVar61._0_4_ = fVar66 + fVar124 + auVar73._8_4_;
                auVar61._4_4_ = fVar66 + fVar124 + auVar73._8_4_;
                auVar61._8_4_ = fVar66 + fVar124 + auVar73._8_4_;
                auVar61._12_4_ = fVar66 + fVar124 + auVar73._8_4_;
                auVar86 = sqrtps(auVar73,auVar61);
                auVar74._0_4_ = auVar86._0_4_ * auVar55._0_4_;
                auVar74._4_4_ = auVar86._4_4_ * auVar55._4_4_;
                auVar74._8_4_ = auVar86._8_4_ * auVar55._8_4_;
                auVar74._12_4_ = auVar86._12_4_ * auVar55._12_4_;
                if (auVar74._0_4_ == 0.0) {
                  auVar90 = SUB1612(ZEXT816(0),0);
                }
                else {
                  auVar55 = divps(auVar92,auVar74);
                  auVar90 = auVar55._0_12_;
                }
              }
              auVar93._0_4_ = auVar90._0_4_ * fVar123;
              auVar93._4_4_ = auVar90._4_4_ * fVar80;
              auVar93._8_4_ = auVar90._8_4_ * fVar121;
              auVar93._12_4_ = auVar84._12_4_ * auVar52._12_4_;
            }
            else {
              FUN_144bfc970(local_1158);
              auVar93 = local_1158;
            }
          }
          local_1158 = auVar93;
          fVar66 = local_1158._0_4_;
          fVar65 = local_1158._4_4_;
          fVar79 = local_1158._8_4_;
          fVar80 = local_1158._12_4_;
          fVar64 = auVar48._0_4_;
          fVar117 = auVar48._4_4_;
          fVar96 = auVar48._8_4_;
          fVar120 = auVar48._12_4_;
          fVar121 = fVar64 * fVar66;
          fVar123 = fVar117 * fVar65;
          fVar124 = fVar96 * fVar79;
          fVar116 = (fVar123 + fVar121 + fVar124) * fVar66 +
                    (fVar80 * fVar80 - (float)DAT_14c6dad90) * fVar64 +
                    (fVar96 * fVar65 - fVar79 * fVar117) * fVar80;
          fVar119 = (fVar123 + fVar121 + fVar124) * fVar65 +
                    (fVar80 * fVar80 - DAT_14c6dad90._4_4_) * fVar117 +
                    (fVar64 * fVar79 - fVar66 * fVar96) * fVar80;
          fVar66 = (fVar123 + fVar121 + fVar124) * fVar79 +
                   (fVar80 * fVar80 - DAT_14c6dad90._8_4_) * fVar96 +
                   (fVar117 * fVar66 - fVar65 * fVar64) * fVar80;
          fVar121 = (fVar123 + fVar121 + fVar124) * fVar80 +
                    (fVar80 * fVar80 - DAT_14c6dad90._12_4_) * fVar120 +
                    (fVar120 * fVar80 - fVar80 * fVar120) * fVar80;
          auVar48._0_4_ = fVar116 + fVar116;
          auVar48._4_4_ = fVar119 + fVar119;
          auVar48._8_4_ = fVar66 + fVar66;
          auVar48._12_4_ = fVar121 + fVar121;
          fVar124 = auVar48._4_4_ * local_1328._0_4_ - local_1328._4_4_ * auVar48._0_4_;
          fVar121 = auVar48._8_4_ * local_1328._4_4_ - local_1328._8_4_ * auVar48._4_4_;
          fVar123 = auVar48._0_4_ * local_1328._8_4_ - local_1328._0_4_ * auVar48._8_4_;
          auVar110._12_4_ = auVar48._12_4_ * local_1328._12_4_ - local_1328._12_4_ * auVar48._12_4_;
          auVar110._4_4_ = fVar123;
          auVar110._0_4_ = fVar121;
          auVar110._8_4_ = fVar124;
          fVar121 = fVar121 * fVar121;
          fVar123 = fVar123 * fVar123;
          fVar124 = fVar124 * fVar124;
          auVar46._4_4_ = fVar121;
          auVar46._0_4_ = fVar121;
          auVar46._8_4_ = fVar121;
          auVar46._12_4_ = fVar121;
          auVar75._0_4_ = fVar123 + fVar121 + fVar124;
          auVar75._4_4_ = fVar123 + fVar121 + fVar124;
          auVar75._8_4_ = fVar123 + fVar121 + fVar124;
          auVar75._12_4_ = fVar123 + fVar121 + fVar124;
          if (auVar75._0_4_ == 0.0) {
            auVar81 = SUB1612(ZEXT816(0),0);
          }
          else {
            auVar55 = sqrtps(auVar46,auVar75);
            auVar55 = divps(auVar110,auVar55);
            auVar81 = auVar55._0_12_;
          }
          auVar109._12_4_ =
               0.0 - (local_12f8._4_4_ * auVar81._4_4_ + local_12f8._0_4_ * auVar81._0_4_ +
                     local_12f8._8_4_ * auVar81._8_4_);
          auVar109._0_12_ = auVar81;
          auVar114 = _local_12f8;
        }
        iVar30 = local_1314;
        if ((local_1338 & 0x10) != 0) {
          local_1258 = (uint)local_1340 & 0x3fffff;
          FUN_144c2ead0(*(undefined8 *)
                         ((ulonglong)(uVar26 >> 0x16) * 0x120 + *(longlong *)(param_4 + 0x38)),
                        &local_1258,local_1148,&local_fc8);
          auVar55 = local_1148;
          auVar52 = local_1288;
          auVar106._8_8_ = uRam000000014c6daca8;
          auVar106._0_8_ = _DAT_14c6daca0;
          fVar121 = local_1288._0_4_ - (float)local_1278._0_4_;
          fVar123 = local_1288._4_4_ - (float)local_1278._4_4_;
          fVar124 = local_1288._8_4_ - (float)uStack_1270;
          fVar66 = fVar121 * fVar121;
          fVar65 = fVar123 * fVar123;
          fVar79 = fVar124 * fVar124;
          fVar121 = fVar121 * (local_1288._0_4_ - (float)local_12f8._0_4_);
          fVar123 = fVar123 * (local_1288._4_4_ - (float)local_12f8._4_4_);
          fVar124 = fVar124 * (local_1288._8_4_ - fStack_12f0);
          auVar85._0_4_ = fVar123 + fVar121 + fVar124;
          auVar85._4_4_ = fVar123 + fVar121 + fVar124;
          auVar85._8_4_ = fVar123 + fVar121 + fVar124;
          auVar85._12_4_ = fVar123 + fVar121 + fVar124;
          auVar62._0_4_ = fVar65 + fVar66 + fVar79;
          auVar62._4_4_ = fVar65 + fVar66 + fVar79;
          auVar62._8_4_ = fVar65 + fVar66 + fVar79;
          auVar62._12_4_ = fVar65 + fVar66 + fVar79;
          auVar86 = divps(auVar85,auVar62);
          auVar86 = minps(auVar86,_DAT_1499314a0);
          auVar86 = maxps(auVar86,ZEXT816(0));
          fVar121 = auVar86._12_4_;
          auVar114._0_4_ =
               ((float)_DAT_14c6daca0 - fVar121) * (local_fc8 - local_1148._0_4_) + local_1148._0_4_
          ;
          auVar114._4_4_ =
               ((float)((ulonglong)_DAT_14c6daca0 >> 0x20) - fVar121) *
               (fStack_fc4 - local_1148._4_4_) + local_1148._4_4_;
          auVar114._8_4_ =
               ((float)uRam000000014c6daca8 - fVar121) * (fStack_fc0 - local_1148._8_4_) +
               local_1148._8_4_;
          auVar114._12_4_ =
               ((float)((ulonglong)uRam000000014c6daca8 >> 0x20) - fVar121) *
               (fStack_fbc - local_1148._12_4_) + local_1148._12_4_;
          if ((local_1338 & 0x10) == 0) {
            fVar121 = 0.0;
          }
          else {
            fVar121 = (float)((int)local_1338._2_2_ << 0x10);
            local_1254 = fVar121;
          }
          fVar123 = (float)local_1228 + fVar121;
          local_1228 = CONCAT44(local_1228._4_4_ + fVar121,fVar123);
          uStack_1220 = CONCAT44(uStack_1220._4_4_ + fVar121,(float)uStack_1220 + fVar121);
          cVar12 = FUN_144c5eed0(param_6);
          if (cVar12 != '\0') {
            iVar30 = (int)param_6[3] + 1;
            if ((int)(*(uint *)((longlong)param_6 + 0x1c) & 0x7fffffff) < iVar30) {
              FUN_144c62aa0(param_6 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar30);
            }
            pfVar25 = (float *)(param_6[2] + (longlong)(int)param_6[3] * 4);
            if (pfVar25 != (float *)0x0) {
              *pfVar25 = fVar123;
            }
            *(int *)(param_6 + 3) = iVar30;
            auVar106._8_8_ = uRam000000014c6daca8;
            auVar106._0_8_ = _DAT_14c6daca0;
            auVar55 = local_1148;
            auVar52 = local_1288;
          }
          cVar12 = FUN_144c5eef0(param_6);
          if (cVar12 != '\0') {
            iVar30 = (int)param_6[5] + 1;
            if ((int)(*(uint *)((longlong)param_6 + 0x2c) & 0x7fffffff) < iVar30) {
              FUN_144bdedb0(param_6 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar30);
            }
            pauVar19 = (undefined1 (*) [16])((longlong)(int)param_6[5] * 0x10 + param_6[4]);
            if (pauVar19 != (undefined1 (*) [16])0x0) {
              *pauVar19 = auVar114;
            }
            *(int *)(param_6 + 5) = iVar30;
            auVar106._8_8_ = uRam000000014c6daca8;
            auVar106._0_8_ = _DAT_14c6daca0;
            auVar55 = local_1148;
            auVar52 = local_1288;
          }
          _local_12f8 = auVar114;
          if (param_5[5][0xc] == '\0') {
            auVar118._0_4_ = *(float *)*param_2 - auVar114._0_4_;
            auVar118._4_4_ = *(float *)(*param_2 + 4) - auVar114._4_4_;
            auVar118._8_4_ = *(float *)(*param_2 + 8) - auVar114._8_4_;
            auVar118._12_4_ = *(float *)(*param_2 + 0xc) - auVar114._12_4_;
            fVar121 = auVar118._0_4_ * auVar118._0_4_;
            fVar123 = auVar118._4_4_ * auVar118._4_4_;
            fVar124 = auVar118._8_4_ * auVar118._8_4_;
            auVar47._4_4_ = fVar121;
            auVar47._0_4_ = fVar121;
            auVar47._8_4_ = fVar121;
            auVar47._12_4_ = fVar121;
            auVar76._0_4_ = fVar123 + fVar121 + fVar124;
            auVar76._4_4_ = fVar123 + fVar121 + fVar124;
            auVar76._8_4_ = fVar123 + fVar121 + fVar124;
            auVar76._12_4_ = fVar123 + fVar121 + fVar124;
            if (auVar76._0_4_ == 0.0) {
              auVar48 = ZEXT816(0);
            }
            else {
              auVar48 = sqrtps(auVar47,auVar76);
              auVar48 = divps(auVar118,auVar48);
            }
          }
          else if ((param_5[5][0xd] & 0x40) != 0) {
            auVar77._0_4_ = (float)local_1278._0_4_ - auVar52._0_4_;
            auVar77._4_4_ = (float)local_1278._4_4_ - auVar52._4_4_;
            auVar77._8_4_ = (float)uStack_1270 - auVar52._8_4_;
            auVar77._12_4_ = uStack_1270._4_4_ - auVar52._12_4_;
            fVar121 = auVar77._0_4_ * auVar77._0_4_;
            fVar123 = auVar77._4_4_ * auVar77._4_4_;
            fVar124 = auVar77._8_4_ * auVar77._8_4_;
            auVar49._4_4_ = fVar121;
            auVar49._0_4_ = fVar121;
            auVar49._8_4_ = fVar121;
            auVar49._12_4_ = fVar121;
            auVar87._0_4_ = fVar123 + fVar121 + fVar124;
            auVar87._4_4_ = fVar123 + fVar121 + fVar124;
            auVar87._8_4_ = fVar123 + fVar121 + fVar124;
            auVar87._12_4_ = fVar123 + fVar121 + fVar124;
            if (auVar87._0_4_ == 0.0) {
              local_1138 = ZEXT816(0);
            }
            else {
              auVar52 = sqrtps(auVar49,auVar87);
              local_1138 = divps(auVar77,auVar52);
            }
            auVar104._0_4_ = auVar55._0_4_ - local_fc8;
            auVar104._4_4_ = auVar55._4_4_ - fStack_fc4;
            auVar104._8_4_ = auVar55._8_4_ - fStack_fc0;
            auVar104._12_4_ = auVar55._12_4_ - fStack_fbc;
            fVar121 = auVar104._0_4_ * auVar104._0_4_;
            fVar123 = auVar104._4_4_ * auVar104._4_4_;
            fVar124 = auVar104._8_4_ * auVar104._8_4_;
            auVar50._4_4_ = fVar121;
            auVar50._0_4_ = fVar121;
            auVar50._8_4_ = fVar121;
            auVar50._12_4_ = fVar121;
            auVar88._0_4_ = fVar123 + fVar121 + fVar124;
            auVar88._4_4_ = fVar123 + fVar121 + fVar124;
            auVar88._8_4_ = fVar123 + fVar121 + fVar124;
            auVar88._12_4_ = fVar123 + fVar121 + fVar124;
            if (auVar88._0_4_ == 0.0) {
              auVar81 = SUB1612(ZEXT816(0),0);
            }
            else {
              auVar52 = sqrtps(auVar50,auVar88);
              auVar52 = divps(auVar104,auVar52);
              auVar81 = auVar52._0_12_;
            }
            fVar66 = local_1138._0_4_;
            fVar65 = local_1138._4_4_;
            fVar79 = local_1138._8_4_;
            fVar80 = auVar81._0_4_;
            fVar121 = fVar66 * fVar80;
            fVar64 = auVar81._4_4_;
            fVar123 = fVar65 * fVar64;
            fVar117 = auVar81._8_4_;
            fVar124 = fVar79 * fVar117;
            auVar94._0_4_ = fVar123 + fVar121 + fVar124;
            auVar94._4_4_ = fVar123 + fVar121 + fVar124;
            auVar94._8_4_ = fVar123 + fVar121 + fVar124;
            auVar94._12_4_ = fVar123 + fVar121 + fVar124;
            local_1190 = 0x3f7fff58;
            auVar101 = _DAT_14c6dae70;
            if (auVar94._0_4_ <= 0.99999) {
              auVar51._8_4_ = 0xbf7fff58;
              auVar51._0_8_ = 0xbf7fff58bf7fff58;
              auVar51._12_4_ = 0xbf7fff58;
              if (-0.99999 <= auVar94._0_4_) {
                fVar121 = (float)DAT_14c6dad90;
                fVar123 = DAT_14c6dad90._4_4_;
                fVar124 = DAT_14c6dad90._8_4_;
                auVar89._0_4_ = auVar94._0_4_ * fVar121 + fVar121;
                auVar89._4_4_ = auVar94._4_4_ * fVar123 + fVar123;
                auVar89._8_4_ = auVar94._8_4_ * fVar124 + fVar124;
                auVar89._12_4_ = auVar94._12_4_ * DAT_14c6dad90._12_4_ + DAT_14c6dad90._12_4_;
                if (auVar89._0_4_ == 0.0) {
                  auVar52 = ZEXT816(0);
                }
                else {
                  auVar52 = sqrtps(auVar51,auVar89);
                  auVar52 = divps(auVar106,auVar52);
                }
                local_11c0 = 0xbf7fbe77;
                fVar96 = fVar64 * fVar66 - fVar65 * fVar80;
                fVar65 = fVar117 * fVar65 - fVar79 * fVar64;
                fVar66 = fVar80 * fVar79 - fVar66 * fVar117;
                auVar103._0_4_ = fVar121 * auVar52._0_4_;
                auVar103._4_4_ = fVar123 * auVar52._4_4_;
                auVar103._8_4_ = fVar124 * auVar52._8_4_;
                if (auVar94._0_4_ < -0.999) {
                  fVar121 = fVar65 * fVar65;
                  fVar123 = fVar66 * fVar66;
                  fVar124 = fVar96 * fVar96;
                  auVar105._0_4_ = auVar89._0_4_ - auVar94._0_4_;
                  auVar105._4_4_ = auVar89._4_4_ - auVar94._4_4_;
                  auVar105._8_4_ = auVar89._8_4_ - auVar94._8_4_;
                  auVar105._12_4_ = auVar89._12_4_ - auVar94._12_4_;
                  auVar53._4_4_ = fVar121;
                  auVar53._0_4_ = fVar121;
                  auVar53._8_4_ = fVar121;
                  auVar53._12_4_ = fVar121;
                  auVar55 = sqrtps(auVar53,auVar105);
                  auVar63._0_4_ = fVar123 + fVar121 + fVar124;
                  auVar63._4_4_ = fVar123 + fVar121 + fVar124;
                  auVar63._8_4_ = fVar123 + fVar121 + fVar124;
                  auVar63._12_4_ = fVar123 + fVar121 + fVar124;
                  auVar86 = sqrtps(auVar94,auVar63);
                  auVar95._0_4_ = auVar86._0_4_ * auVar55._0_4_;
                  auVar95._4_4_ = auVar86._4_4_ * auVar55._4_4_;
                  auVar95._8_4_ = auVar86._8_4_ * auVar55._8_4_;
                  auVar95._12_4_ = auVar86._12_4_ * auVar55._12_4_;
                  if (auVar95._0_4_ == 0.0) {
                    auVar103 = SUB1612(ZEXT816(0),0);
                  }
                  else {
                    auVar55 = divps(auVar105,auVar95);
                    auVar103 = auVar55._0_12_;
                  }
                }
                auVar101._0_4_ = fVar65 * auVar103._0_4_;
                auVar101._4_4_ = fVar66 * auVar103._4_4_;
                auVar101._8_4_ = fVar96 * auVar103._8_4_;
                auVar101._12_4_ = auVar89._12_4_ * auVar52._12_4_;
              }
              else {
                FUN_144bfc970(local_1128);
                auVar101 = local_1128[0];
              }
            }
            local_1128[0] = auVar101;
            fVar64 = auVar48._0_4_;
            fVar96 = auVar48._4_4_;
            fVar116 = auVar48._8_4_;
            fVar119 = auVar48._12_4_;
            fVar66 = local_1128[0]._0_4_;
            fVar65 = local_1128[0]._4_4_;
            fVar79 = local_1128[0]._8_4_;
            fVar80 = local_1128[0]._12_4_;
            fVar121 = fVar64 * fVar66;
            fVar123 = fVar96 * fVar65;
            fVar124 = fVar116 * fVar79;
            fVar117 = (fVar123 + fVar121 + fVar124) * fVar66 +
                      (fVar80 * fVar80 - (float)DAT_14c6dad90) * fVar64 +
                      (fVar116 * fVar65 - fVar79 * fVar96) * fVar80;
            fVar120 = (fVar123 + fVar121 + fVar124) * fVar65 +
                      (fVar80 * fVar80 - DAT_14c6dad90._4_4_) * fVar96 +
                      (fVar64 * fVar79 - fVar66 * fVar116) * fVar80;
            fVar66 = (fVar123 + fVar121 + fVar124) * fVar79 +
                     (fVar80 * fVar80 - DAT_14c6dad90._8_4_) * fVar116 +
                     (fVar96 * fVar66 - fVar65 * fVar64) * fVar80;
            fVar121 = (fVar123 + fVar121 + fVar124) * fVar80 +
                      (fVar80 * fVar80 - DAT_14c6dad90._12_4_) * fVar119 +
                      (fVar119 * fVar80 - fVar80 * fVar119) * fVar80;
            auVar48._0_4_ = fVar117 + fVar117;
            auVar48._4_4_ = fVar120 + fVar120;
            auVar48._8_4_ = fVar66 + fVar66;
            auVar48._12_4_ = fVar121 + fVar121;
            auVar52 = _DAT_14c6dad90;
          }
          fVar124 = auVar48._4_4_ * (float)local_1328._0_4_ -
                    (float)local_1328._4_4_ * auVar48._0_4_;
          fVar121 = auVar48._8_4_ * (float)local_1328._4_4_ - fStack_1320 * auVar48._4_4_;
          fVar123 = auVar48._0_4_ * fStack_1320 - (float)local_1328._0_4_ * auVar48._8_4_;
          auVar111._12_4_ = auVar48._12_4_ * fStack_131c - fStack_131c * auVar48._12_4_;
          auVar111._4_4_ = fVar123;
          auVar111._0_4_ = fVar121;
          auVar111._8_4_ = fVar124;
          fVar121 = fVar121 * fVar121;
          fVar123 = fVar123 * fVar123;
          fVar124 = fVar124 * fVar124;
          auVar54._4_4_ = fVar121;
          auVar54._0_4_ = fVar121;
          auVar54._8_4_ = fVar121;
          auVar54._12_4_ = fVar121;
          auVar78._0_4_ = fVar123 + fVar121 + fVar124;
          auVar78._4_4_ = fVar123 + fVar121 + fVar124;
          auVar78._8_4_ = fVar123 + fVar121 + fVar124;
          auVar78._12_4_ = fVar123 + fVar121 + fVar124;
          if (auVar78._0_4_ == 0.0) {
            auVar81 = SUB1612(ZEXT816(0),0);
          }
          else {
            auVar55 = sqrtps(auVar54,auVar78);
            auVar55 = divps(auVar111,auVar55);
            auVar81 = auVar55._0_12_;
          }
          auVar109._12_4_ =
               0.0 - (auVar114._4_4_ * auVar81._4_4_ + auVar114._0_4_ * auVar81._0_4_ +
                     auVar114._8_4_ * auVar81._8_4_);
          auVar109._0_12_ = auVar81;
          iVar30 = local_1314;
        }
      } while( true );
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return 0;
}



// FUNCTION 144c61100 FUN_144c61100 body=4848 status=ok
// SIG undefined FUN_144c61100(void)

/* WARNING: Removing unreachable block (ram,0x000144c6225e) */
/* WARNING: Removing unreachable block (ram,0x000144c62268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144c61100(float *param_1,float *param_2,float *param_3,undefined1 (*param_4) [16],
                 longlong param_5,longlong param_6,undefined4 param_7,undefined8 param_8,
                 float *param_9)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  float fVar54;
  float fVar55;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  int local_2b0;
  int local_2a8;
  void *local_298;
  longlong local_290;
  uint local_288;
  uint local_284;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  uint local_268;
  uint local_264 [3];
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  ulonglong local_238;
  undefined *local_228;
  undefined *puStack_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined *local_158;
  undefined *puStack_150;
  char *local_148;
  char *pcStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  
  uVar29 = (ulonglong)_tls_index;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8);
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar4 + 0xf0);
  if (lVar18 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar18;
  }
  local_1f0 = *(longlong *)(lVar18 + 0x3e0);
  local_248 = 1256072.0;
  fStack_244 = 1.4013e-45;
  fStack_240 = 1256075.8;
  fStack_23c = 1.4013e-45;
  if (local_1f0 != 0) {
    local_148 = "TtcheckAgainstNearbyBoundaries";
    pcStack_140 = "";
    FUN_144b3f370(local_1f0);
  }
  local_1b8 = *param_1;
  fStack_1b4 = param_1[1];
  fStack_1b0 = param_1[2];
  fStack_1ac = param_1[3];
  iVar17 = 3;
  local_2a8 = 3;
  bVar13 = false;
  bVar2 = *(byte *)(param_6 + 0x5d);
  local_1a8 = (float)(~-(uint)(*param_2 - local_1b8 == 0.0) & (uint)(*param_2 - local_1b8));
  fStack_1a4 = (float)(~-(uint)(param_2[1] - fStack_1b4 == 0.0) & (uint)(param_2[1] - fStack_1b4));
  fStack_1a0 = (float)(~-(uint)(param_2[2] - fStack_1b0 == 0.0) & (uint)(param_2[2] - fStack_1b0));
  fVar73 = (float)(~-(uint)(param_9[3] == 0.0) & (uint)param_9[3]);
  auVar34._4_4_ = fStack_1a4;
  auVar34._0_4_ = local_1a8;
  auVar34._8_4_ = fStack_1a0;
  auVar34._12_4_ = fVar73;
  auVar34 = divps(_DAT_14c6daca0,auVar34);
  auVar64._0_4_ = ~-(uint)(local_1a8 == 0.0) & auVar34._0_4_;
  auVar64._4_4_ = ~-(uint)(fStack_1a4 == 0.0) & auVar34._4_4_;
  auVar64._8_4_ = ~-(uint)(fStack_1a0 == 0.0) & auVar34._8_4_;
  auVar64._12_4_ = ~-(uint)(fVar73 == 0.0) & auVar34._12_4_;
  local_198._0_8_ =
       CONCAT44(-(uint)(fStack_1a4 == 0.0),-(uint)(local_1a8 == 0.0)) & 0x7f7fffee7f7fffee;
  local_198._8_4_ = -(uint)(fStack_1a0 == 0.0) & 0x7f7fffee;
  local_198._12_4_ = -(uint)(fVar73 == 0.0) & 0x7f7fffee;
  local_198 = local_198 | auVar64;
  fStack_19c = fVar73;
  if (fStack_1a0 * fStack_1a0 + fStack_1a4 * fStack_1a4 + local_1a8 * local_1a8 <= 0.0)
  goto LAB_144c6236b;
  local_288 = 0;
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar4 + 0xf0);
  if (lVar18 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar18;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar18 + 0x3d0) + 0x10);
  local_270 = 0x100;
  local_280 = 0;
  if (*(longlong *)(lVar4 + 8) == 0) {
    local_280 = lVar4;
  }
  local_1d0 = 0x100;
  if (local_280 == 0) {
    local_290 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar4 >> 8),1),&local_1d0,0x40);
  }
  else {
    local_1d8 = 0x100;
    if (0xff < *(ulonglong *)(local_280 + 0x28)) {
      local_290 = *(longlong *)(local_280 + 0x38);
      if (local_290 + 0x100U <= *(ulonglong *)(local_280 + 0x40)) {
        *(ulonglong *)(local_280 + 0x38) = local_290 + 0x100U;
        uVar29 = (ulonglong)_tls_index;
        fVar73 = fStack_19c;
        goto LAB_144c61398;
      }
    }
    local_290 = FUN_144b454a0(local_280,&local_1d8);
    uVar29 = (ulonglong)_tls_index;
    fVar73 = fStack_19c;
  }
LAB_144c61398:
  uVar27 = 0x80000040;
  local_284 = 0x80000040;
  uVar25 = 8;
  do {
    uVar32 = uVar25;
    uVar25 = uVar32 * 2;
  } while ((int)(uVar32 * 2) < 0x80);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8);
  local_278 = local_290;
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar4 + 0xf0);
  if (lVar18 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar18;
  }
  local_1f8 = *(longlong *)(*(longlong *)(lVar18 + 0x3d0) + 0x10);
  local_238 = (ulonglong)(int)(uVar32 << 3);
  if (*(longlong *)(local_1f8 + 8) != 0) {
    local_1f8 = 0;
  }
  local_1c0 = local_238;
  if (local_1f8 == 0) {
    local_298 = (void *)(*DAT_14c787670)(1,&local_1c0,0x40);
  }
  else {
    local_1c8 = local_238;
    if (local_238 <= *(ulonglong *)(local_1f8 + 0x28)) {
      local_298 = *(void **)(local_1f8 + 0x38);
      if (local_238 + (longlong)local_298 <= *(ulonglong *)(local_1f8 + 0x40)) {
        *(ulonglong *)(local_1f8 + 0x38) = local_238 + (longlong)local_298;
        fVar73 = fStack_19c;
        uVar27 = local_284;
        goto LAB_144c61493;
      }
    }
    local_298 = (void *)FUN_144b454a0(local_1f8,&local_1c8);
    fVar73 = fStack_19c;
    uVar27 = local_284;
  }
LAB_144c61493:
  uVar25 = (uVar32 & 0x1fffffff) * 2;
  local_2b0 = 0;
  if ((uVar32 & 0x1fffffff) != 0) {
    memset(local_298,-1,(ulonglong)uVar25 << 2);
  }
  uVar32 = local_288 + 1;
  if ((int)(uVar27 & 0x7fffffff) < (int)uVar32) {
    FUN_144c30fb0(&local_290,&PTR_vftable_14c6e47a0,(longlong)(int)uVar32);
  }
  puVar1 = (undefined4 *)(local_290 + (longlong)(int)local_288 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_7;
  }
  do {
    uVar32 = uVar32 - 1;
    uVar31 = uVar25 - 1;
    uVar27 = *(uint *)(local_290 + (longlong)(int)uVar32 * 4);
    uVar21 = uVar25;
    if (0 < (int)uVar31) {
      uVar21 = uVar27 * -0x61c8864f;
      uVar28 = (uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
               uVar27 * -0x4f000000) & uVar31;
      uVar22 = *(uint *)((longlong)local_298 + (longlong)(int)uVar28 * 4);
      while ((uVar21 = uVar25, uVar22 != 0xffffffff && (uVar21 = uVar28, uVar22 != uVar27))) {
        uVar28 = uVar28 + 1 & uVar31;
        uVar22 = *(uint *)((longlong)local_298 + (longlong)(int)uVar28 * 4);
      }
    }
    uVar22 = uVar27 * -0x61c8864f;
    local_288 = uVar32;
    if ((int)uVar31 < (int)uVar21) {
      if (local_2b0 * 2 <= (int)uVar31) {
        iVar17 = 1;
        uVar21 = (uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                 uVar27 * -0x4f000000) & uVar25 - 1;
        uVar32 = *(uint *)((longlong)local_298 + (longlong)(int)uVar21 * 4);
        while (uVar32 != 0xffffffff) {
          if (uVar32 == uVar27) {
            iVar17 = 0;
            break;
          }
          uVar21 = uVar21 + 1 & uVar25 - 1;
          uVar32 = *(uint *)((longlong)local_298 + (longlong)(int)uVar21 * 4);
        }
        local_2b0 = local_2b0 + iVar17;
        *(uint *)((longlong)local_298 + (longlong)(int)uVar21 * 4) = uVar27;
        local_178 = 0;
        uStack_170 = 0;
        lVar4 = *(longlong *)((ulonglong)(uVar27 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38));
        local_268 = uVar27 & 0x3fffff;
        puVar19 = (uint *)FUN_144c44fc0(*(undefined8 *)(lVar4 + 0x20),&local_268,&local_178);
        local_138 = local_178;
        uStack_130 = uStack_170;
        bVar15 = FUN_144c49180(param_8,uVar27,puVar19,&local_138);
        uVar21 = (uint)*(ushort *)((longlong)puVar19 + 10);
        puVar26 = puVar19 + 1;
        if ((short)*(ushort *)((longlong)puVar19 + 10) < 1) {
          puVar26 = puVar19;
        }
        uVar31 = *puVar26;
        uVar32 = local_288;
        fVar73 = fStack_19c;
joined_r0x000144c61688:
        uVar22 = uVar31;
        if (uVar22 == 0xffffffff) goto LAB_144c621e4;
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
                    /* WARNING: Read-only address (ram,0x00014998f680) is written */
        if ((((bVar2 & 3) != 0) || ((int)uVar22 < (int)puVar19[1])) ||
           ((int)((int)(short)uVar21 + puVar19[1]) <= (int)uVar22)) {
          local_228 = (undefined *)0x0;
          puStack_220 = (undefined *)0x0;
          local_264[0] = uVar22;
          piVar20 = (int *)FUN_144c450c0(*(undefined8 *)(lVar4 + 0x20),local_264,&local_228);
          lVar18 = *(longlong *)(lVar4 + 0x20);
          iVar17 = *piVar20;
          iVar3 = *(int *)(lVar18 + 0x40);
          if (iVar17 < iVar3) {
            pfVar24 = (float *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar18 + 0x38));
          }
          else {
            pfVar24 = (float *)((longlong)(iVar17 - iVar3) * 0x10 + *(longlong *)(lVar18 + 0xf0));
          }
          iVar17 = piVar20[1];
          fVar84 = *pfVar24;
          fVar85 = pfVar24[1];
          fVar86 = pfVar24[2];
          if (iVar17 < iVar3) {
            pfVar24 = (float *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar18 + 0x38));
          }
          else {
            pfVar24 = (float *)((longlong)(iVar17 - iVar3) * 0x10 + *(longlong *)(lVar18 + 0xf0));
          }
          fVar49 = *pfVar24;
          fVar54 = pfVar24[1];
          fVar55 = pfVar24[2];
          local_248 = fVar86 * *(float *)(lVar4 + 0x80) +
                      fVar85 * *(float *)(lVar4 + 0x70) + fVar84 * *(float *)(lVar4 + 0x60) +
                      *(float *)(lVar4 + 0x90);
          fStack_244 = fVar86 * *(float *)(lVar4 + 0x84) +
                       fVar85 * *(float *)(lVar4 + 0x74) + fVar84 * *(float *)(lVar4 + 100) +
                       *(float *)(lVar4 + 0x94);
          fStack_240 = fVar86 * *(float *)(lVar4 + 0x88) +
                       fVar85 * *(float *)(lVar4 + 0x78) + fVar84 * *(float *)(lVar4 + 0x68) +
                       *(float *)(lVar4 + 0x98);
          fStack_23c = fVar86 * *(float *)(lVar4 + 0x8c) +
                       fVar85 * *(float *)(lVar4 + 0x7c) + fVar84 * *(float *)(lVar4 + 0x6c) +
                       *(float *)(lVar4 + 0x9c);
          local_208 = fVar55 * *(float *)(lVar4 + 0x80) +
                      fVar54 * *(float *)(lVar4 + 0x70) + fVar49 * *(float *)(lVar4 + 0x60) +
                      *(float *)(lVar4 + 0x90);
          fStack_204 = fVar55 * *(float *)(lVar4 + 0x84) +
                       fVar54 * *(float *)(lVar4 + 0x74) + fVar49 * *(float *)(lVar4 + 100) +
                       *(float *)(lVar4 + 0x94);
          fStack_200 = fVar55 * *(float *)(lVar4 + 0x88) +
                       fVar54 * *(float *)(lVar4 + 0x78) + fVar49 * *(float *)(lVar4 + 0x68) +
                       *(float *)(lVar4 + 0x98);
          fStack_1fc = fVar55 * *(float *)(lVar4 + 0x8c) +
                       fVar54 * *(float *)(lVar4 + 0x7c) + fVar49 * *(float *)(lVar4 + 0x6c) +
                       *(float *)(lVar4 + 0x9c);
          fVar65 = local_208 - local_248;
          fVar66 = fStack_204 - fStack_244;
          fVar68 = fStack_200 - fStack_240;
          fVar70 = local_248 - *param_1;
          fVar71 = fStack_244 - param_1[1];
          fVar72 = fStack_240 - param_1[2];
          fVar84 = fVar73 * (*param_2 - *param_1);
          fVar85 = fVar73 * (param_2[1] - param_1[1]);
          fVar86 = fVar73 * (param_2[2] - param_1[2]);
          fVar49 = fVar65 * fVar85 - fVar66 * fVar84;
          fVar54 = fVar66 * fVar86 - fVar68 * fVar85;
          fVar55 = fVar68 * fVar84 - fVar65 * fVar86;
          fVar74 = fVar54 * fVar54;
          fVar76 = fVar55 * fVar55;
          fVar79 = fVar49 * fVar49;
          fVar75 = fVar79 + fVar76 + fVar74;
          fVar77 = fVar79 + fVar76 + fVar74;
          fVar80 = fVar79 + fVar76 + fVar74;
          if (fVar75 == 0.0) {
            auVar40._0_12_ = ZEXT812(0);
            auVar40._12_4_ = 0;
          }
          else {
            auVar9._4_4_ = fVar77;
            auVar9._0_4_ = fVar75;
            auVar9._8_4_ = fVar80;
            auVar9._12_4_ = fVar79 + fVar76 + fVar74;
            auVar40 = divps(_DAT_14c6daca0,auVar9);
          }
          fVar74 = fVar65 * fVar84;
          fVar76 = fVar66 * fVar85;
          fVar61 = fVar68 * fVar86;
          fVar79 = (fVar55 * fVar68 - fVar66 * fVar49) * fVar70;
          fVar49 = (fVar49 * fVar65 - fVar68 * fVar54) * fVar71;
          fVar54 = (fVar54 * fVar66 - fVar65 * fVar55) * fVar72;
          auVar63._0_4_ = (fVar54 + fVar49 + fVar79) * auVar40._0_4_;
          auVar63._4_4_ = (fVar54 + fVar49 + fVar79) * auVar40._4_4_;
          auVar63._8_4_ = (fVar54 + fVar49 + fVar79) * auVar40._8_4_;
          auVar63._12_4_ = (fVar54 + fVar49 + fVar79) * auVar40._12_4_;
          fVar59 = fVar61 + fVar76 + fVar74;
          fVar60 = fVar61 + fVar76 + fVar74;
          fVar62 = fVar61 + fVar76 + fVar74;
          fVar61 = fVar61 + fVar76 + fVar74;
          auVar34 = minps(auVar63,_DAT_1499314a0);
          auVar64 = maxps(auVar34,ZEXT816(0));
          auVar56._0_4_ = fVar85 * fVar85 + fVar84 * fVar84 + fVar86 * fVar86;
          auVar56._4_4_ = fVar71 * fVar85 + fVar70 * fVar84 + fVar72 * fVar86;
          auVar56._8_4_ = fVar66 * fVar66 + fVar65 * fVar65 + fVar68 * fVar68;
          auVar56._12_4_ = fVar66 * fVar71 + fVar65 * fVar70 + fVar68 * fVar72;
          auVar34 = divps(_DAT_14c6daca0,auVar56);
          auVar43._0_4_ = (float)(~-(uint)(auVar56._0_4_ == 0.0) & auVar34._0_4_);
          fVar74 = (float)(~-(uint)(auVar56._8_4_ == 0.0) & auVar34._8_4_);
          fVar49 = (fVar59 * auVar64._0_4_ - auVar56._12_4_) * fVar74;
          fVar54 = (fVar60 * auVar64._4_4_ - auVar56._12_4_) * fVar74;
          auVar50._4_4_ = fVar54;
          auVar50._0_4_ = fVar49;
          fVar55 = (fVar62 * auVar64._8_4_ - auVar56._12_4_) * fVar74;
          auVar43._4_4_ = auVar43._0_4_;
          auVar43._8_4_ = auVar43._0_4_;
          auVar43._12_4_ = auVar43._0_4_;
          auVar50._8_4_ = fVar55;
          auVar50._12_4_ = (fVar61 * auVar64._12_4_ - auVar56._12_4_) * fVar74;
          auVar34 = minps(auVar50,_DAT_1499314a0);
          auVar34 = maxps(auVar34,ZEXT816(0));
          fVar74 = auVar34._0_4_;
          fVar76 = auVar34._4_4_;
          fVar79 = auVar34._8_4_;
          uVar21 = -(uint)(fVar75 != 0.0 && fVar49 == fVar74);
          uVar31 = -(uint)(fVar77 != 0.0 && fVar54 == fVar76);
          uVar28 = -(uint)(fVar80 != 0.0 && fVar55 == fVar79);
          auVar57._0_4_ = (auVar56._4_4_ + fVar59 * fVar74) * auVar43._0_4_;
          auVar57._4_4_ = (auVar56._4_4_ + fVar60 * fVar76) * auVar43._0_4_;
          auVar57._8_4_ = (auVar56._4_4_ + fVar62 * fVar79) * auVar43._0_4_;
          auVar57._12_4_ = (auVar56._4_4_ + fVar61 * auVar34._12_4_) * auVar43._0_4_;
          auVar34 = minps(auVar57,_DAT_1499314a0);
          auVar34 = maxps(auVar34,ZEXT816(0));
          fVar49 = (fVar70 - (float)((uint)auVar64._0_4_ & uVar21 | ~uVar21 & auVar34._0_4_) *
                             fVar84) + fVar74 * fVar65;
          fVar54 = (fVar71 - (float)((uint)auVar64._4_4_ & uVar31 | ~uVar31 & auVar34._4_4_) *
                             fVar85) + fVar76 * fVar66;
          fVar55 = (fVar72 - (float)((uint)auVar64._8_4_ & uVar28 | ~uVar28 & auVar34._8_4_) *
                             fVar86) + fVar79 * fVar68;
          if (fVar55 * fVar55 + fVar54 * fVar54 + fVar49 * fVar49 <
              *(float *)*param_4 * *(float *)*param_4) {
            if ((piVar20[2] == -1) || ((*(byte *)(piVar20 + 4) & 0x20) != 0)) {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
            if (((*(byte *)(piVar20 + 4) & 0x10) != 0) && ((*(byte *)(param_6 + 0x5d) & 2) != 0)) {
              bVar14 = false;
            }
            uVar21 = (uint)bVar15;
            bVar5 = false;
            if (*(char *)(param_6 + 0x5e) != '\0') {
              fVar84 = (param_3[2] * fVar66 - param_3[1] * fVar68) * fVar84;
              fVar85 = (*param_3 * fVar68 - param_3[2] * fVar65) * fVar85;
              fVar86 = (param_3[1] * fVar65 - *param_3 * fVar66) * fVar86;
              auVar43._0_4_ = fVar86 + fVar85 + fVar84;
              auVar43._4_4_ = fVar86 + fVar85 + fVar84;
              auVar43._8_4_ = fVar86 + fVar85 + fVar84;
              auVar43._12_4_ = fVar86 + fVar85 + fVar84;
              bVar5 = auVar43._0_4_ <= 0.0;
              if (((*(byte *)(piVar20 + 4) & 0x10) != 0) &&
                 ((*(byte *)(param_6 + 0x5d) & 0x12) != 0)) {
                bVar5 = false;
              }
            }
            if (bVar15 == 0) {
              if (bVar14) {
LAB_144c61aa7:
                uVar31 = uVar32;
                if ((char)uVar21 != '\0') goto LAB_144c61ab0;
              }
            }
            else if (bVar14) {
              uVar31 = uVar32;
              if (!bVar5) {
                local_128 = local_228;
                uStack_120 = puStack_220;
                bVar16 = FUN_144c49260(param_8,uVar27 & 0xffc00000 | uVar22,piVar20,&local_128);
                uVar21 = (uint)bVar16;
                fVar73 = fStack_19c;
                uVar32 = local_288;
                goto LAB_144c61aa7;
              }
LAB_144c61ab0:
              uVar32 = uVar31;
              if ((*(byte *)(piVar20 + 4) & 0x10) != 0) goto LAB_144c62191;
              uVar21 = piVar20[3];
              if (((*(byte *)(piVar20 + 4) & 0x40) == 0) && (uVar21 != 0xffffffff)) {
                uVar21 = *(int *)(*(longlong *)(lVar4 + 0x20) + 0x17c) << 0x16 | uVar21 & 0x3fffff;
              }
              uVar30 = uVar25 - 1;
              uVar28 = uVar25;
              if (0 < (int)uVar30) {
                uVar28 = uVar21 * -0x61c8864f;
                uVar23 = (uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                         uVar21 * -0x4f000000) & uVar30;
                uVar33 = *(uint *)((longlong)local_298 + (longlong)(int)uVar23 * 4);
                while ((uVar28 = uVar25, uVar33 != 0xffffffff && (uVar28 = uVar23, uVar33 != uVar21)
                       )) {
                  uVar23 = uVar23 + 1 & uVar30;
                  uVar33 = *(uint *)((longlong)local_298 + (longlong)(int)uVar23 * 4);
                }
              }
              if ((int)(uVar25 - 1) < (int)uVar28) {
                if (uVar31 == (local_284 & 0x7fffffff)) goto LAB_144c622ca;
                uVar32 = uVar31 + 1;
                if ((int)(local_284 & 0x7fffffff) < (int)uVar32) {
                  FUN_144c30fb0(&local_290,&PTR_vftable_14c6e47a0,(longlong)(int)uVar32);
                  uVar31 = local_288;
                }
                puVar26 = (uint *)(local_290 + (longlong)(int)uVar31 * 4);
                local_288 = uVar32;
                if (puVar26 != (uint *)0x0) {
                  *puVar26 = uVar21;
                }
              }
              goto LAB_144c62191;
            }
            if (!bVar5) {
              local_258._4_4_ = fVar73;
              local_258._0_4_ = fVar73;
              fStack_250 = fVar73;
              fStack_24c = fVar73;
              iVar17 = FUN_144c62590(&local_1b8,&local_248,&local_208,param_4,local_258);
              fVar73 = fStack_19c;
              if (iVar17 != 0) {
                fVar73 = *param_1;
                fVar84 = param_1[1];
                fVar85 = param_1[2];
                fVar86 = *param_2;
                fVar49 = param_2[1];
                fVar54 = param_2[2];
                pfVar24 = param_2;
                if (*(char *)(param_6 + 0x59) != '\0') {
                  fVar55 = *param_3;
                  fVar65 = param_3[1];
                  fVar66 = param_3[2];
                  fVar68 = fVar73 * fVar55;
                  fVar71 = fVar84 * fVar65;
                  fVar74 = fVar85 * fVar66;
                  fVar70 = fVar55 * fVar86;
                  fVar72 = fVar65 * fVar49;
                  fVar75 = fVar66 * fVar54;
                  fVar73 = fVar73 - fVar55 * (fVar74 + fVar71 + fVar68);
                  fVar84 = fVar84 - fVar65 * (fVar74 + fVar71 + fVar68);
                  fVar85 = fVar85 - fVar66 * (fVar74 + fVar71 + fVar68);
                  fVar68 = fVar55 * local_248;
                  fVar71 = fVar65 * fStack_244;
                  fVar74 = fVar66 * fStack_240;
                  fVar86 = fVar86 - fVar55 * (fVar75 + fVar72 + fVar70);
                  fVar49 = fVar49 - fVar65 * (fVar75 + fVar72 + fVar70);
                  fVar54 = fVar54 - fVar66 * (fVar75 + fVar72 + fVar70);
                  fVar70 = fVar55 * local_208;
                  fVar72 = fVar65 * fStack_204;
                  fVar75 = fVar66 * fStack_200;
                  local_248 = local_248 - fVar55 * (fVar71 + fVar68 + fVar74);
                  fStack_244 = fStack_244 - fVar65 * (fVar71 + fVar68 + fVar74);
                  fStack_240 = fStack_240 - fVar66 * (fVar71 + fVar68 + fVar74);
                  fStack_23c = fStack_23c - param_3[3] * (fVar71 + fVar68 + fVar74);
                  auVar43._0_4_ = fVar75 + fVar72 + fVar70;
                  auVar43._4_4_ = fVar75 + fVar72 + fVar70;
                  auVar43._8_4_ = fVar75 + fVar72 + fVar70;
                  auVar43._12_4_ = fVar75 + fVar72 + fVar70;
                  local_208 = local_208 - fVar55 * auVar43._0_4_;
                  fStack_204 = fStack_204 - fVar65 * auVar43._4_4_;
                  fStack_200 = fStack_200 - fVar66 * auVar43._8_4_;
                  fStack_1fc = fStack_1fc - param_3[3] * auVar43._12_4_;
                  pfVar24 = param_3;
                }
                fVar68 = (float)(~-(uint)(fVar86 - fVar73 == 0.0) & (uint)(fVar86 - fVar73));
                fVar70 = (float)(~-(uint)(fVar49 - fVar84 == 0.0) & (uint)(fVar49 - fVar84));
                fVar71 = (float)(~-(uint)(fVar54 - fVar85 == 0.0) & (uint)(fVar54 - fVar85));
                fVar86 = fVar68 * fVar68;
                fVar54 = fVar70 * fVar70;
                fVar65 = fVar71 * fVar71;
                fVar49 = fVar65 + fVar54 + fVar86;
                fVar55 = fVar65 + fVar54 + fVar86;
                fVar66 = fVar65 + fVar54 + fVar86;
                fVar65 = fVar65 + fVar54 + fVar86;
                auVar34 = _local_258;
                if (fVar49 <= 0.0) {
LAB_144c62148:
                  auVar12._4_8_ = auVar43._8_8_;
                  auVar12._0_4_ = local_258._4_4_;
                  auVar45._0_8_ = auVar12._0_8_ << 0x20;
                  auVar45._8_4_ = fStack_250;
                  auVar45._12_4_ = fStack_24c;
                }
                else {
                  fVar77 = local_248 - local_208;
                  fVar79 = fStack_244 - fStack_204;
                  fVar80 = fStack_240 - fStack_200;
                  fVar86 = fVar77 * (local_248 - fVar73);
                  fVar54 = fVar79 * (fStack_244 - fVar84);
                  fVar72 = fVar80 * (fStack_240 - fVar85);
                  fVar74 = fVar77 * fVar77;
                  fVar75 = fVar79 * fVar79;
                  fVar76 = fVar80 * fVar80;
                  auVar51._0_4_ = fVar76 + fVar75 + fVar74;
                  auVar51._4_4_ = fVar76 + fVar75 + fVar74;
                  auVar51._8_4_ = fVar76 + fVar75 + fVar74;
                  auVar51._12_4_ = fVar76 + fVar75 + fVar74;
                  auVar41._0_4_ = fVar72 + fVar54 + fVar86;
                  auVar41._4_4_ = fVar72 + fVar54 + fVar86;
                  auVar41._8_4_ = fVar72 + fVar54 + fVar86;
                  auVar41._12_4_ = fVar72 + fVar54 + fVar86;
                  auVar64 = divps(auVar41,auVar51);
                  auVar64 = minps(auVar64,_DAT_1499314a0);
                  auVar64 = maxps(auVar64,ZEXT816(0));
                  fVar54 = (local_248 - fVar73) - auVar64._0_4_ * fVar77;
                  fVar72 = (fStack_244 - fVar84) - auVar64._4_4_ * fVar79;
                  fVar74 = (fStack_240 - fVar85) - auVar64._8_4_ * fVar80;
                  auVar43 = *param_4;
                  fVar86 = auVar43._0_4_;
                  fVar75 = fVar86 * fVar86;
                  fVar76 = auVar43._4_4_ * auVar43._4_4_;
                  fVar77 = auVar43._8_4_ * auVar43._8_4_;
                  fVar79 = auVar43._12_4_ * auVar43._12_4_;
                  if (fVar75 <= fVar74 * fVar74 + fVar72 * fVar72 + fVar54 * fVar54) {
                    fVar61 = local_208 - local_248;
                    fVar62 = fStack_204 - fStack_244;
                    fVar81 = fStack_200 - fStack_240;
                    fVar54 = fVar61 * fVar61;
                    fVar74 = fVar62 * fVar62;
                    fVar59 = fVar81 * fVar81;
                    fVar72 = fVar59 + fVar74 + fVar54;
                    fVar80 = fVar59 + fVar74 + fVar54;
                    fVar60 = fVar59 + fVar74 + fVar54;
                    fVar59 = fVar59 + fVar74 + fVar54;
                    fVar54 = local_258._0_4_;
                    auVar45 = _local_258;
                    if (fVar72 <= 0.0) {
                      fVar86 = (fVar73 - local_248) * fVar68;
                      fVar72 = (fVar84 - fStack_244) * fVar70;
                      fVar74 = (fVar85 - fStack_240) * fVar71;
                      auVar43._0_4_ = fVar74 + fVar72 + fVar86;
                      auVar43._4_4_ = fVar74 + fVar72 + fVar86;
                      auVar43._8_4_ = fVar74 + fVar72 + fVar86;
                      auVar43._12_4_ = fVar74 + fVar72 + fVar86;
                      fVar86 = 0.0 - auVar43._0_4_;
                      fVar72 = 0.0 - auVar43._4_4_;
                      fVar74 = 0.0 - auVar43._8_4_;
                      fVar80 = 0.0 - auVar43._12_4_;
                      if (fVar49 != 0.0) {
                        auVar46._4_4_ = fVar72;
                        auVar46._0_4_ = fVar86;
                        auVar46._8_4_ = fVar74;
                        auVar46._12_4_ = fVar80;
                        auVar6._4_4_ = fVar55;
                        auVar6._0_4_ = fVar49;
                        auVar6._8_4_ = fVar66;
                        auVar6._12_4_ = fVar65;
                        auVar64 = divps(auVar46,auVar6);
                        fVar73 = auVar64._0_4_ * fVar68 + (fVar73 - local_248);
                        fVar84 = auVar64._4_4_ * fVar70 + (fVar84 - fStack_244);
                        fVar85 = auVar64._8_4_ * fVar71 + (fVar85 - fStack_240);
                        fVar73 = fVar73 * fVar73;
                        fVar84 = fVar84 * fVar84;
                        fVar85 = fVar85 * fVar85;
                        auVar43._0_4_ = ((fVar85 + fVar84 + fVar73) - fVar75) * (0.0 - fVar49);
                        auVar43._4_4_ = ((fVar85 + fVar84 + fVar73) - fVar76) * (0.0 - fVar55);
                        auVar43._8_4_ = ((fVar85 + fVar84 + fVar73) - fVar77) * (0.0 - fVar66);
                        auVar43._12_4_ = ((fVar85 + fVar84 + fVar73) - fVar79) * (0.0 - fVar65);
                        if (0.0 <= auVar43._0_4_) {
                          auVar64 = sqrtps(auVar51,auVar43);
                          auVar36._4_4_ = (0.0 - auVar64._4_4_) + fVar72;
                          auVar36._0_4_ = (0.0 - auVar64._0_4_) + fVar86;
                          auVar36._8_4_ = (0.0 - auVar64._8_4_) + fVar74;
                          auVar36._12_4_ = (0.0 - auVar64._12_4_) + fVar80;
                          fVar73 = SUB164(ZEXT816(0) | auVar36,0);
                          if (fVar73 < fVar54 * fVar49 && 0.0 <= fVar73) {
                            auVar7._4_4_ = fVar55;
                            auVar7._0_4_ = fVar49;
                            auVar7._8_4_ = fVar66;
                            auVar7._12_4_ = fVar65;
                            auVar45 = divps(ZEXT816(0) | auVar36,auVar7);
                            auVar34 = auVar45;
                          }
                          goto LAB_144c6214c;
                        }
                      }
                    }
                    else if (0.0 < fVar86) {
                      auVar37._4_4_ = fVar62;
                      auVar37._0_4_ = fVar61;
                      auVar37._8_4_ = fVar81;
                      auVar37._12_4_ = fStack_1fc - fStack_23c;
                      auVar8._4_4_ = fVar80;
                      auVar8._0_4_ = fVar72;
                      auVar8._8_4_ = fVar60;
                      auVar8._12_4_ = fVar59;
                      auVar64 = divps(auVar37,auVar8);
                      fVar49 = fVar73 - local_248;
                      fVar67 = fVar84 - fStack_244;
                      fVar69 = fVar85 - fStack_240;
                      fVar86 = fVar61 * fVar68;
                      fVar55 = fVar62 * fVar70;
                      fVar82 = fVar81 * fVar71;
                      fVar65 = (float)(~-(uint)(fVar72 == 0.0) & auVar64._0_4_);
                      fVar47 = (float)(~-(uint)(fVar80 == 0.0) & auVar64._4_4_);
                      fVar48 = (float)(~-(uint)(fVar60 == 0.0) & auVar64._8_4_);
                      fVar61 = fVar61 * fVar49;
                      fVar62 = fVar62 * fVar67;
                      fVar81 = fVar81 * fVar69;
                      fVar88 = fVar81 + fVar62 + fVar61;
                      fVar89 = fVar81 + fVar62 + fVar61;
                      fVar90 = fVar81 + fVar62 + fVar61;
                      fVar81 = fVar81 + fVar62 + fVar61;
                      fVar62 = fVar82 + fVar55 + fVar86;
                      fVar78 = fVar82 + fVar55 + fVar86;
                      fVar83 = fVar82 + fVar55 + fVar86;
                      fVar82 = fVar82 + fVar55 + fVar86;
                      fVar86 = fVar49 - fVar65 * fVar88;
                      fVar55 = fVar67 - fVar47 * fVar89;
                      fVar66 = fVar69 - fVar48 * fVar90;
                      fVar74 = fVar68 - fVar62 * fVar65;
                      fVar61 = fVar70 - fVar78 * fVar47;
                      auVar42._8_4_ = fVar71 - fVar83 * fVar48;
                      auVar42._12_4_ =
                           (float)(~-(uint)(fStack_19c == 0.0) & (uint)fStack_19c) -
                           fVar82 * (float)(~-(uint)(fVar59 == 0.0) & auVar64._12_4_);
                      auVar42._4_4_ = auVar42._12_4_;
                      auVar42._0_4_ = auVar42._8_4_;
                      fVar65 = fVar68 * fVar68 + fVar70 * fVar70 + fVar71 * fVar71;
                      fVar47 = fVar68 * fVar68 + fVar70 * fVar70 + fVar71 * fVar71;
                      fVar48 = fVar74 * fVar74 + fVar61 * fVar61 + auVar42._8_4_ * auVar42._8_4_;
                      fVar87 = fVar74 * fVar74 + fVar61 * fVar61 + auVar42._8_4_ * auVar42._8_4_;
                      auVar52._0_4_ = fVar69 * fVar71;
                      auVar52._4_4_ = (fVar85 - fStack_200) * fVar71;
                      auVar52._8_4_ = fVar66 * auVar42._8_4_;
                      auVar52._12_4_ = fVar66 * auVar42._8_4_;
                      auVar10._4_4_ = fVar47;
                      auVar10._0_4_ = fVar65;
                      auVar10._8_4_ = fVar48;
                      auVar10._12_4_ = fVar87;
                      auVar43 = sqrtps(auVar42,auVar10);
                      local_218 = -(uint)(0.0 < fVar65);
                      uStack_214 = -(uint)(0.0 < fVar47);
                      uStack_210 = -(uint)(0.0 < fVar48);
                      uStack_20c = -(uint)(0.0 < fVar87);
                      auVar64 = divps(_DAT_14c6daca0,auVar43);
                      local_168 = (float)(~-(uint)(fVar65 == 0.0) & auVar64._0_4_);
                      fStack_164 = (float)(~-(uint)(fVar47 == 0.0) & auVar64._4_4_);
                      fStack_160 = (float)(~-(uint)(fVar48 == 0.0) & auVar64._8_4_);
                      fStack_15c = (float)(~-(uint)(fVar87 == 0.0) & auVar64._12_4_);
                      local_188 = (fVar68 * fVar49 + fVar70 * fVar67 + auVar52._0_4_) *
                                  local_168 * local_168;
                      fStack_184 = (fVar68 * (fVar73 - local_208) + fVar70 * (fVar84 - fStack_204) +
                                   auVar52._4_4_) * fStack_164 * fStack_164;
                      fStack_180 = (fVar74 * fVar86 + fVar61 * fVar55 + auVar52._8_4_) *
                                   fStack_160 * fStack_160;
                      fStack_17c = (fVar74 * fVar86 + fVar61 * fVar55 + auVar52._12_4_) *
                                   fStack_15c * fStack_15c;
                      fVar49 = fVar49 - fVar68 * local_188;
                      fVar65 = (fVar73 - local_208) - fVar68 * fStack_184;
                      fVar68 = fVar86 - fVar74 * fStack_180;
                      fVar86 = fVar86 - fVar74 * fStack_17c;
                      fVar67 = fVar67 - fVar70 * local_188;
                      fVar84 = (fVar84 - fStack_204) - fVar70 * fStack_184;
                      fVar70 = fVar55 - fVar61 * fStack_180;
                      fVar55 = fVar55 - fVar61 * fStack_17c;
                      fVar69 = fVar69 - fVar71 * local_188;
                      fVar85 = (fVar85 - fStack_200) - fVar71 * fStack_184;
                      fVar71 = fVar66 - auVar42._8_4_ * fStack_180;
                      fVar66 = fVar66 - auVar42._8_4_ * fStack_17c;
                      fVar73 = fVar49 * fVar49 + fVar67 * fVar67 + fVar69 * fVar69;
                      fVar84 = fVar65 * fVar65 + fVar84 * fVar84 + fVar85 * fVar85;
                      fVar85 = fVar68 * fVar68 + fVar70 * fVar70 + fVar71 * fVar71;
                      fVar86 = fVar86 * fVar86 + fVar55 * fVar55 + fVar66 * fVar66;
                      uVar31 = -(uint)(fVar73 < fVar75);
                      uVar28 = -(uint)(fVar84 < fVar76);
                      uVar30 = -(uint)(fVar85 < fVar77);
                      uVar33 = -(uint)(fVar86 < fVar79);
                      auVar58._4_4_ = uVar28;
                      auVar58._0_4_ = uVar31;
                      auVar58._8_4_ = uVar30;
                      auVar58._12_4_ = uVar33;
                      iVar17 = movmskps((int)pfVar24,auVar58);
                      if (iVar17 != 0) {
                        auVar38._0_4_ = -(uint)(fVar88 <= fVar72 && 0.0 <= fVar88);
                        auVar38._4_4_ = -(uint)(fVar89 <= fVar80 && 0.0 <= fVar89);
                        auVar38._8_4_ = -(uint)(fVar90 <= fVar60 && 0.0 <= fVar90);
                        auVar38._12_4_ = -(uint)(fVar81 <= fVar59 && 0.0 <= fVar81);
                        auVar11._4_4_ = (uint)(fVar76 - fVar84) & uVar28;
                        auVar11._0_4_ = (uint)(fVar75 - fVar73) & uVar31;
                        auVar11._8_4_ = (uint)(fVar77 - fVar85) & uVar30;
                        auVar11._12_4_ = (uint)(fVar79 - fVar86) & uVar33;
                        auVar64 = sqrtps(auVar52,auVar11);
                        auVar38 = auVar38 | _DAT_14998f680;
                        fVar49 = (float)(auVar64._0_4_ & uVar31) * local_168;
                        fVar55 = (float)(auVar64._4_4_ & uVar28) * fStack_164;
                        fVar65 = (float)(auVar64._8_4_ & uVar30) * fStack_160;
                        fVar66 = (float)(auVar64._12_4_ & uVar33) * fStack_15c;
                        auVar43._0_4_ =
                             (float)(-(uint)(ABS(local_188) <= fVar49 && fVar73 < fVar75) &
                                    auVar38._0_4_);
                        auVar43._4_4_ =
                             (float)(-(uint)(ABS(fStack_184) <= fVar55 && fVar84 < fVar76) &
                                    auVar38._4_4_);
                        auVar43._8_4_ =
                             (float)(-(uint)(ABS(fStack_180) <= fVar65 && fVar85 < fVar77) &
                                    auVar38._8_4_);
                        auVar43._12_4_ =
                             (float)(-(uint)(ABS(fStack_17c) <= fVar66 && fVar86 < fVar79) &
                                    auVar38._12_4_);
                        iVar17 = movmskps(iVar17,auVar43);
                        if (iVar17 == 0) {
                          fVar49 = (0.0 - local_188) - fVar49;
                          fVar55 = (0.0 - fStack_184) - fVar55;
                          fVar65 = (0.0 - fStack_180) - fVar65;
                          fVar66 = (0.0 - fStack_17c) - fVar66;
                          fVar62 = fVar62 * fVar49;
                          fVar78 = fVar78 * fVar55;
                          fVar83 = fVar83 * fVar65;
                          fVar82 = fVar82 * fVar66;
                          bVar13 = 0.0 - fVar90 <= fVar83 && fVar83 <= fVar60 - fVar90;
                          auVar53._0_4_ =
                               -(uint)(0.0 <= fVar49) &
                               (-(uint)((fVar62 <= fVar72 - fVar88 && 0.0 - fVar88 <= fVar62) &&
                                       bVar13) ^ (uint)DAT_14998f680) & uVar31 &
                               -(uint)(fVar49 <= fVar54) & local_218;
                          auVar53._4_4_ =
                               -(uint)(0.0 <= fVar55) &
                               (-(uint)((fVar78 <= fVar80 - fVar89 && 0.0 - fVar89 <= fVar78) &&
                                       bVar13) ^ DAT_14998f680._4_4_) & uVar28 &
                               -(uint)(fVar55 <= (float)local_258._4_4_) & uStack_214;
                          auVar53._8_4_ =
                               -(uint)(0.0 <= fVar65) &
                               (-(uint)bVar13 ^ DAT_14998f680._8_4_) & uVar30 &
                               -(uint)(fVar65 <= fStack_250) & uStack_210;
                          auVar53._12_4_ =
                               -(uint)(0.0 <= fVar66) &
                               (-(uint)((fVar82 <= fVar59 - fVar81 && 0.0 - fVar81 <= fVar82) &&
                                       bVar13) ^ DAT_14998f680._12_4_) & uVar33 &
                               -(uint)(fVar66 <= fStack_24c) & uStack_20c;
                          iVar17 = movmskps(0,auVar53);
                          if (iVar17 != 0) {
                            local_218 = auVar53._0_4_ & (uint)fVar49 | ~auVar53._0_4_ & (uint)fVar54
                            ;
                            uStack_214 = auVar53._4_4_ & (uint)fVar55 |
                                         ~auVar53._4_4_ & local_258._4_4_;
                            auVar44._8_4_ =
                                 auVar53._8_4_ & (uint)fVar65 | ~auVar53._8_4_ & (uint)fStack_250;
                            uStack_20c = auVar53._12_4_ & (uint)fVar66 |
                                         ~auVar53._12_4_ & (uint)fStack_24c;
                            auVar35._4_4_ = local_218;
                            auVar35._0_4_ = local_218;
                            auVar35._8_4_ = local_218;
                            auVar35._12_4_ = local_218;
                            auVar39._4_4_ = uStack_214;
                            auVar39._0_4_ = uStack_214;
                            auVar39._8_4_ = uStack_214;
                            auVar39._12_4_ = uStack_214;
                            auVar34 = minps(auVar39,auVar35);
                            auVar44._4_4_ = auVar44._8_4_;
                            auVar44._0_4_ = auVar44._8_4_;
                            auVar44._12_4_ = auVar44._8_4_;
                            auVar45 = minps(auVar44,auVar34);
                            auVar34 = auVar45;
                            uStack_210 = auVar44._8_4_;
                          }
                          goto LAB_144c6214c;
                        }
                      }
                    }
                    goto LAB_144c62148;
                  }
                  auVar45 = ZEXT816(0);
                  auVar34 = ZEXT816(0);
                }
LAB_144c6214c:
                _local_258 = auVar34;
                fVar73 = auVar45._12_4_;
                iVar17 = (uVar21 ^ 1) + 4;
                bVar13 = true;
                local_2a8 = iVar17;
                fStack_19c = fVar73;
                if (*(char *)(param_6 + 0x5c) == '\0') goto LAB_144c621f8;
              }
            }
          }
        }
LAB_144c62191:
        uVar28 = puVar19[1];
        if (((int)uVar22 < (int)uVar28) ||
           (uVar21 = (uint)*(short *)((longlong)puVar19 + 10),
           (int)((uVar21 - 1) + uVar28) <= (int)uVar22)) goto LAB_144c621ab;
        goto LAB_144c621d2;
      }
LAB_144c622ca:
      iVar17 = 2;
      break;
    }
LAB_144c621e4:
    iVar17 = local_2a8;
  } while (uVar32 != 0);
  if (bVar13) {
LAB_144c621f8:
    *param_9 = fVar73;
    param_9[1] = fVar73;
    param_9[2] = fVar73;
    param_9[3] = fVar73;
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
                    /* WARNING: Read-only address (ram,0x00014998f680) is written */
  if (local_1f8 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar29 = local_238 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_1f8 + 0x28) < uVar29) ||
       (uVar29 + (longlong)local_298 != *(longlong *)(local_1f8 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(void **)(local_1f8 + 0x38) = local_298;
      if (*(void **)(local_1f8 + 0x48) == local_298) {
        FUN_144be8430();
      }
    }
  }
  if (local_278 == local_290) {
    local_288 = 0;
  }
  if (local_280 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar29 = local_270 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_280 + 0x28) < uVar29) ||
       (uVar29 + local_278 != *(longlong *)(local_280 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_280 + 0x38) = local_278;
      if (*(longlong *)(local_280 + 0x48) == local_278) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)local_284) && (local_290 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_290,(ulonglong)(local_284 & 0x7fffffff) << 2);
  }
LAB_144c6236b:
  if (local_1f0 != 0) {
    local_228 = &DAT_149981764;
    puStack_220 = &DAT_149981766;
    local_158 = &DAT_149981764;
    puStack_150 = &DAT_149981766;
    FUN_144b3f260(local_1f0,&local_158);
  }
  return iVar17;
LAB_144c621ab:
  uVar21 = (uint)*(short *)((longlong)puVar19 + 10);
  uVar31 = *puVar19;
  if (uVar22 != (uVar28 - 1) + uVar21) {
    if (((int)uVar22 < (int)uVar31) || ((int)((short)puVar19[2] + -1 + uVar31) <= (int)uVar22))
    goto LAB_144c621e4;
LAB_144c621d2:
    uVar31 = uVar22 + 1;
  }
  goto joined_r0x000144c61688;
}



// FUNCTION 144c623f0 FUN_144c623f0 body=403 status=ok
// SIG undefined FUN_144c623f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144c623f0(float *param_1,float *param_2,undefined8 param_3,char param_4,float *param_5,
             float *param_6,float *param_7,longlong param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  
  fVar14 = *param_2;
  fVar15 = param_2[1];
  fVar16 = param_2[2];
  local_58 = *param_1;
  fStack_54 = param_1[1];
  fStack_50 = param_1[2];
  fStack_4c = param_1[3];
  local_68 = *param_6;
  fStack_64 = param_6[1];
  fStack_60 = param_6[2];
  fStack_5c = param_6[3];
  local_78 = *param_7;
  fStack_74 = param_7[1];
  fStack_70 = param_7[2];
  fStack_6c = param_7[3];
  if (param_4 != '\0') {
    fVar2 = *param_5;
    fVar3 = param_5[1];
    fVar4 = param_5[2];
    fVar5 = param_5[3];
    fVar8 = fVar2 * local_58;
    fVar10 = fVar3 * fStack_54;
    fVar12 = fVar4 * fStack_50;
    fVar9 = fVar2 * fVar14;
    fVar11 = fVar3 * fVar15;
    fVar13 = fVar4 * fVar16;
    local_58 = local_58 - (fVar10 + fVar8 + fVar12) * fVar2;
    fStack_54 = fStack_54 - (fVar10 + fVar8 + fVar12) * fVar3;
    fStack_50 = fStack_50 - (fVar10 + fVar8 + fVar12) * fVar4;
    fStack_4c = fStack_4c - (fVar10 + fVar8 + fVar12) * fVar5;
    fVar8 = fVar2 * local_68;
    fVar10 = fVar3 * fStack_64;
    fVar12 = fVar4 * fStack_60;
    fVar14 = fVar14 - (fVar11 + fVar9 + fVar13) * fVar2;
    fVar15 = fVar15 - (fVar11 + fVar9 + fVar13) * fVar3;
    fVar16 = fVar16 - (fVar11 + fVar9 + fVar13) * fVar4;
    fVar9 = fVar2 * local_78;
    fVar11 = fVar3 * fStack_74;
    fVar13 = fVar4 * fStack_70;
    local_68 = local_68 - (fVar10 + fVar8 + fVar12) * fVar2;
    fStack_64 = fStack_64 - (fVar10 + fVar8 + fVar12) * fVar3;
    fStack_60 = fStack_60 - (fVar10 + fVar8 + fVar12) * fVar4;
    fStack_5c = fStack_5c - (fVar10 + fVar8 + fVar12) * fVar5;
    local_78 = local_78 - (fVar11 + fVar9 + fVar13) * fVar2;
    fStack_74 = fStack_74 - (fVar11 + fVar9 + fVar13) * fVar3;
    fStack_70 = fStack_70 - (fVar11 + fVar9 + fVar13) * fVar4;
    fStack_6c = fStack_6c - (fVar11 + fVar9 + fVar13) * fVar5;
  }
  local_48 = (float)(~-(uint)(fVar14 - local_58 == 0.0) & (uint)(fVar14 - local_58));
  fStack_44 = (float)(~-(uint)(fVar15 - fStack_54 == 0.0) & (uint)(fVar15 - fStack_54));
  fStack_40 = (float)(~-(uint)(fVar16 - fStack_50 == 0.0) & (uint)(fVar16 - fStack_50));
  fStack_3c = (float)(~-(uint)(*(float *)(param_8 + 0xc) == 0.0) & (uint)*(float *)(param_8 + 0xc));
  auVar1._4_4_ = fStack_44;
  auVar1._0_4_ = local_48;
  auVar1._8_4_ = fStack_40;
  auVar1._12_4_ = fStack_3c;
  auVar7 = divps(_DAT_14c6daca0,auVar1);
  local_38._0_4_ = ~-(uint)(local_48 == 0.0) & auVar7._0_4_;
  local_38._4_4_ = ~-(uint)(fStack_44 == 0.0) & auVar7._4_4_;
  local_38._8_4_ = ~-(uint)(fStack_40 == 0.0) & auVar7._8_4_;
  local_38._12_4_ = ~-(uint)(fStack_3c == 0.0) & auVar7._12_4_;
  auVar7._8_4_ = -(uint)(fStack_40 == 0.0) & 0x7f7fffee;
  auVar7._0_8_ = CONCAT44(-(uint)(fStack_44 == 0.0),-(uint)(local_48 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar7._12_4_ = -(uint)(fStack_3c == 0.0) & 0x7f7fffee;
  local_38 = local_38 | auVar7;
  if (0.0 < fStack_44 * fStack_44 + local_48 * local_48 + fStack_40 * fStack_40) {
    uVar6 = FUN_144c62590(&local_58,&local_68,&local_78,param_3,param_8);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 144c62590 FUN_144c62590 body=1293 status=ok
// SIG undefined FUN_144c62590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_144c62590(float *param_1,float *param_2,float *param_3,float *param_4,
                  undefined1 (*param_5) [16])

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar29;
  float fVar30;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  
  fVar48 = *param_2;
  fVar49 = param_2[1];
  fVar51 = param_2[2];
  fVar46 = *param_1;
  fVar50 = param_1[1];
  fVar52 = param_1[2];
  fVar47 = *param_3;
  fVar72 = param_3[1];
  fVar9 = param_3[2];
  fVar43 = fVar48 - fVar47;
  fVar44 = fVar49 - fVar72;
  fVar45 = fVar51 - fVar9;
  fVar20 = (fVar48 - fVar46) * fVar43;
  fVar24 = (fVar49 - fVar50) * fVar44;
  fVar26 = (fVar51 - fVar52) * fVar45;
  fVar29 = fVar43 * fVar43;
  fVar35 = fVar44 * fVar44;
  fVar37 = fVar45 * fVar45;
  auVar39._0_4_ = fVar24 + fVar20 + fVar26;
  auVar39._4_4_ = fVar24 + fVar20 + fVar26;
  auVar39._8_4_ = fVar24 + fVar20 + fVar26;
  auVar39._12_4_ = fVar24 + fVar20 + fVar26;
  auVar40._0_4_ = fVar35 + fVar29 + fVar37;
  auVar40._4_4_ = fVar35 + fVar29 + fVar37;
  auVar40._8_4_ = fVar35 + fVar29 + fVar37;
  auVar40._12_4_ = fVar35 + fVar29 + fVar37;
  fVar20 = *param_4;
  fVar35 = fVar20 * fVar20;
  fVar37 = param_4[1] * param_4[1];
  fVar64 = param_4[2] * param_4[2];
  fVar65 = param_4[3] * param_4[3];
  auVar40 = divps(auVar39,auVar40);
  auVar40 = minps(auVar40,_DAT_1499314a0);
  auVar40 = maxps(auVar40,ZEXT816(0));
  fVar24 = (fVar48 - fVar46) - auVar40._0_4_ * fVar43;
  fVar26 = (fVar49 - fVar50) - auVar40._4_4_ * fVar44;
  fVar29 = (fVar51 - fVar52) - auVar40._8_4_ * fVar45;
  if (fVar26 * fVar26 + fVar24 * fVar24 + fVar29 * fVar29 < fVar35) {
    *(undefined8 *)*param_5 = 0;
    *(undefined8 *)(*param_5 + 8) = 0;
    uVar11 = 1;
  }
  else {
    fVar26 = fVar47 - fVar48;
    fVar43 = fVar72 - fVar49;
    auVar15._4_4_ = fVar43;
    auVar15._0_4_ = fVar26;
    fVar45 = fVar9 - fVar51;
    fVar24 = fVar26 * fVar26;
    fVar29 = fVar43 * fVar43;
    fVar44 = fVar45 * fVar45;
    fVar61 = fVar29 + fVar24 + fVar44;
    fVar62 = fVar29 + fVar24 + fVar44;
    fVar63 = fVar29 + fVar24 + fVar44;
    fVar44 = fVar29 + fVar24 + fVar44;
    if (fVar61 <= 0.0) {
      fVar47 = param_1[4];
      fVar72 = param_1[5];
      fVar9 = param_1[6];
      fVar46 = fVar46 - fVar48;
      fVar50 = fVar50 - fVar49;
      fVar52 = fVar52 - fVar51;
      fVar48 = fVar47 * fVar46;
      fVar49 = fVar72 * fVar50;
      fVar51 = fVar9 * fVar52;
      fVar20 = 0.0 - (fVar49 + fVar48 + fVar51);
      fVar24 = 0.0 - (fVar49 + fVar48 + fVar51);
      auVar23._4_4_ = fVar24;
      auVar23._0_4_ = fVar20;
      fVar26 = 0.0 - (fVar49 + fVar48 + fVar51);
      fVar29 = 0.0 - (fVar49 + fVar48 + fVar51);
      fVar48 = fVar47 * fVar47;
      fVar49 = fVar72 * fVar72;
      fVar51 = fVar9 * fVar9;
      fVar43 = fVar49 + fVar48 + fVar51;
      fVar44 = fVar49 + fVar48 + fVar51;
      fVar45 = fVar49 + fVar48 + fVar51;
      fVar51 = fVar49 + fVar48 + fVar51;
      if (fVar43 != 0.0) {
        auVar23._8_4_ = fVar26;
        auVar23._12_4_ = fVar29;
        auVar3._4_4_ = fVar44;
        auVar3._0_4_ = fVar43;
        auVar3._8_4_ = fVar45;
        auVar3._12_4_ = fVar51;
        auVar40 = divps(auVar23,auVar3);
        fVar48 = auVar40._0_4_ * fVar47 + fVar46;
        fVar49 = auVar40._4_4_ * fVar72 + fVar50;
        fVar47 = auVar40._8_4_ * fVar9 + fVar52;
        fVar48 = fVar48 * fVar48;
        fVar49 = fVar49 * fVar49;
        fVar47 = fVar47 * fVar47;
        auVar18._0_4_ = 0.0 - fVar43;
        auVar18._4_4_ = 0.0 - fVar44;
        auVar18._8_4_ = 0.0 - fVar45;
        auVar18._12_4_ = 0.0 - fVar51;
        auVar34._0_4_ = ((fVar49 + fVar48 + fVar47) - fVar35) * auVar18._0_4_;
        auVar34._4_4_ = ((fVar49 + fVar48 + fVar47) - fVar37) * auVar18._4_4_;
        auVar34._8_4_ = ((fVar49 + fVar48 + fVar47) - fVar64) * auVar18._8_4_;
        auVar34._12_4_ = ((fVar49 + fVar48 + fVar47) - fVar65) * auVar18._12_4_;
        if (0.0 <= auVar34._0_4_) {
          auVar40 = sqrtps(auVar18,auVar34);
          auVar19._4_4_ = (0.0 - auVar40._4_4_) + fVar24;
          auVar19._0_4_ = (0.0 - auVar40._0_4_) + fVar20;
          auVar19._8_4_ = (0.0 - auVar40._8_4_) + fVar26;
          auVar19._12_4_ = (0.0 - auVar40._12_4_) + fVar29;
          fVar48 = SUB164(ZEXT816(0) | auVar19,0);
          if (fVar48 < *(float *)*param_5 * fVar43 && fVar48 >= 0.0) {
            auVar4._4_4_ = fVar44;
            auVar4._0_4_ = fVar43;
            auVar4._8_4_ = fVar45;
            auVar4._12_4_ = fVar51;
            auVar40 = divps(ZEXT816(0) | auVar19,auVar4);
            *param_5 = auVar40;
            if (fVar35 < fVar50 * fVar50 + fVar46 * fVar46 + fVar52 * fVar52) {
              return 2;
            }
            uVar11 = movmskps((int)CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),fVar48 < 0.0),
                              ZEXT816(0));
            return uVar11 & 4 | 1;
          }
        }
      }
    }
    else if (0.0 < fVar20) {
      auVar15._8_4_ = fVar45;
      auVar15._12_4_ = param_3[3] - param_2[3];
      auVar6._4_4_ = fVar62;
      auVar6._0_4_ = fVar61;
      auVar6._8_4_ = fVar63;
      auVar6._12_4_ = fVar44;
      auVar40 = divps(auVar15,auVar6);
      fVar30 = (float)(~-(uint)(fVar61 == 0.0) & auVar40._0_4_);
      fVar36 = (float)(~-(uint)(fVar62 == 0.0) & auVar40._4_4_);
      fVar38 = (float)(~-(uint)(fVar63 == 0.0) & auVar40._8_4_);
      fVar48 = fVar46 - fVar48;
      fVar49 = fVar50 - fVar49;
      fVar51 = fVar52 - fVar51;
      fVar20 = param_1[4];
      fVar24 = param_1[5];
      fVar29 = param_1[6];
      fVar21 = fVar48 * fVar26;
      fVar25 = fVar49 * fVar43;
      fVar27 = fVar51 * fVar45;
      fVar66 = fVar25 + fVar21 + fVar27;
      fVar67 = fVar25 + fVar21 + fVar27;
      fVar68 = fVar25 + fVar21 + fVar27;
      fVar27 = fVar25 + fVar21 + fVar27;
      fVar26 = fVar20 * fVar26;
      fVar43 = fVar24 * fVar43;
      fVar45 = fVar29 * fVar45;
      fVar69 = fVar43 + fVar26 + fVar45;
      fVar70 = fVar43 + fVar26 + fVar45;
      fVar71 = fVar43 + fVar26 + fVar45;
      fVar21 = fVar48 - fVar66 * fVar30;
      fVar25 = fVar49 - fVar67 * fVar36;
      fVar28 = fVar51 - fVar68 * fVar38;
      fVar30 = fVar20 - fVar69 * fVar30;
      fVar36 = fVar24 - fVar70 * fVar36;
      fVar38 = fVar29 - fVar71 * fVar38;
      auVar41._4_4_ = fVar20;
      auVar41._0_4_ = fVar20;
      auVar41._8_4_ = fVar30;
      auVar41._12_4_ = fVar30;
      auVar31._0_4_ = fVar24 * fVar24 + fVar20 * fVar20 + fVar29 * fVar29;
      auVar31._4_4_ = fVar24 * fVar24 + fVar20 * fVar20 + fVar29 * fVar29;
      auVar31._8_4_ = fVar36 * fVar36 + fVar30 * fVar30 + fVar38 * fVar38;
      auVar31._12_4_ = fVar36 * fVar36 + fVar30 * fVar30 + fVar38 * fVar38;
      auVar16._4_4_ = -(uint)(0.0 < auVar31._4_4_);
      auVar16._0_4_ = -(uint)(0.0 < auVar31._0_4_);
      auVar16._8_4_ = -(uint)(0.0 < auVar31._8_4_);
      auVar16._12_4_ = -(uint)(0.0 < auVar31._12_4_);
      auVar40 = sqrtps(auVar16,auVar31);
      auVar40 = divps(_DAT_14c6daca0,auVar40);
      fVar53 = (float)(~-(uint)(auVar31._0_4_ == 0.0) & auVar40._0_4_);
      fVar55 = (float)(~-(uint)(auVar31._4_4_ == 0.0) & auVar40._4_4_);
      fVar57 = (float)(~-(uint)(auVar31._8_4_ == 0.0) & auVar40._8_4_);
      fVar59 = (float)(~-(uint)(auVar31._12_4_ == 0.0) & auVar40._12_4_);
      fVar54 = (fVar24 * fVar49 + fVar20 * fVar48 + fVar29 * fVar51) * fVar53 * fVar53;
      fVar56 = (fVar24 * (fVar50 - fVar72) + fVar20 * (fVar46 - fVar47) + fVar29 * (fVar52 - fVar9))
               * fVar55 * fVar55;
      fVar58 = (fVar36 * fVar25 + fVar30 * fVar21 + fVar38 * fVar28) * fVar57 * fVar57;
      fVar60 = (fVar36 * fVar25 + fVar30 * fVar21 + fVar38 * fVar28) * fVar59 * fVar59;
      fVar48 = fVar48 - fVar54 * fVar20;
      fVar46 = (fVar46 - fVar47) - fVar56 * fVar20;
      fVar47 = fVar21 - fVar58 * fVar30;
      fVar21 = fVar21 - fVar60 * fVar30;
      fVar49 = fVar49 - fVar54 * fVar24;
      fVar72 = (fVar50 - fVar72) - fVar56 * fVar24;
      fVar20 = fVar25 - fVar58 * fVar36;
      fVar25 = fVar25 - fVar60 * fVar36;
      fVar51 = fVar51 - fVar54 * fVar29;
      fVar50 = (fVar52 - fVar9) - fVar56 * fVar29;
      fVar52 = fVar28 - fVar58 * fVar38;
      fVar28 = fVar28 - fVar60 * fVar38;
      fVar48 = fVar49 * fVar49 + fVar48 * fVar48 + fVar51 * fVar51;
      fVar49 = fVar72 * fVar72 + fVar46 * fVar46 + fVar50 * fVar50;
      fVar51 = fVar20 * fVar20 + fVar47 * fVar47 + fVar52 * fVar52;
      fVar46 = fVar25 * fVar25 + fVar21 * fVar21 + fVar28 * fVar28;
      uVar11 = -(uint)(fVar48 < fVar35);
      uVar12 = -(uint)(fVar49 < fVar37);
      bVar1 = fVar51 < fVar64;
      uVar13 = -(uint)bVar1;
      bVar2 = fVar46 < fVar65;
      uVar14 = -(uint)bVar2;
      auVar5._4_4_ = uVar12;
      auVar5._0_4_ = uVar11;
      auVar5._8_4_ = uVar13;
      auVar5._12_4_ = uVar14;
      iVar10 = movmskps((int)&stack0x00000000,auVar5);
      if (iVar10 != 0) {
        auVar7._4_4_ = (uint)(fVar37 - fVar49) & uVar12;
        auVar7._0_4_ = (uint)(fVar35 - fVar48) & uVar11;
        auVar7._8_4_ = (uint)(fVar64 - fVar51) & uVar13;
        auVar7._12_4_ = (uint)(fVar65 - fVar46) & uVar14;
        auVar40 = sqrtps(auVar41,auVar7);
        fVar53 = (float)(auVar40._0_4_ & uVar11) * fVar53;
        fVar55 = (float)(auVar40._4_4_ & uVar12) * fVar55;
        fVar57 = (float)(auVar40._8_4_ & uVar13) * fVar57;
        fVar59 = (float)(auVar40._12_4_ & uVar14) * fVar59;
        auVar32._4_4_ = -(uint)(ABS(fVar56) <= fVar55 && fVar49 < fVar37);
        auVar32._0_4_ = -(uint)(ABS(fVar54) <= fVar53 && fVar48 < fVar35);
        auVar32._8_4_ =
             -(uint)((ABS(fVar58) <= fVar57 && bVar1) && (0.0 <= fVar68 && fVar68 <= fVar63));
        auVar32._12_4_ =
             -(uint)((ABS(fVar60) <= fVar59 && bVar2) && (0.0 <= fVar27 && fVar27 <= fVar44));
        iVar10 = movmskps(iVar10,auVar32);
        if (iVar10 == 0) {
          fVar53 = (0.0 - fVar54) - fVar53;
          fVar55 = (0.0 - fVar56) - fVar55;
          fVar57 = (0.0 - fVar58) - fVar57;
          fVar59 = (0.0 - fVar60) - fVar59;
          fVar69 = fVar69 * fVar53;
          fVar70 = fVar70 * fVar55;
          fVar71 = fVar71 * fVar57;
          fVar48 = (fVar43 + fVar26 + fVar45) * fVar59;
          bVar8 = 0.0 - fVar68 <= fVar71 && fVar71 <= fVar63 - fVar68;
          auVar42._0_4_ =
               (-(uint)((0.0 - fVar66 <= fVar69 && fVar69 <= fVar61 - fVar66) && bVar8) ^ 0xffffffff
               ) & uVar11 & -(uint)(0.0 <= fVar53) & -(uint)(fVar53 <= *(float *)*param_5) &
               -(uint)(0.0 < auVar31._0_4_);
          auVar42._4_4_ =
               (-(uint)((0.0 - fVar67 <= fVar70 && fVar70 <= fVar62 - fVar67) && bVar8) ^ 0xffffffff
               ) & uVar12 & -(uint)(0.0 <= fVar55) & -(uint)(fVar55 <= *(float *)(*param_5 + 4)) &
               -(uint)(0.0 < auVar31._4_4_);
          auVar42._8_4_ =
               -(uint)((((bVar8 && bVar1) && 0.0 <= fVar57) && fVar57 <= *(float *)(*param_5 + 8))
                      && 0.0 < auVar31._8_4_);
          auVar42._12_4_ =
               -(uint)((((((0.0 - fVar27 <= fVar48 && fVar48 <= fVar44 - fVar27) && bVar8) && bVar2)
                        && 0.0 <= fVar59) && fVar59 <= *(float *)(*param_5 + 0xc)) &&
                      0.0 < auVar31._12_4_);
          iVar10 = movmskps(0,auVar42);
          if (iVar10 != 0) {
            uVar11 = ~auVar42._0_4_ & *(uint *)*param_5 | auVar42._0_4_ & (uint)fVar53;
            uVar12 = ~auVar42._4_4_ & *(uint *)(*param_5 + 4) | auVar42._4_4_ & (uint)fVar55;
            auVar33._8_4_ = ~auVar42._8_4_ & *(uint *)(*param_5 + 8) | auVar42._8_4_ & (uint)fVar57;
            auVar22._4_4_ = uVar12;
            auVar22._0_4_ = uVar12;
            auVar22._8_4_ = uVar12;
            auVar22._12_4_ = uVar12;
            auVar17._4_4_ = uVar11;
            auVar17._0_4_ = uVar11;
            auVar17._8_4_ = uVar11;
            auVar17._12_4_ = uVar11;
            auVar40 = minps(auVar22,auVar17);
            auVar33._4_4_ = auVar33._8_4_;
            auVar33._0_4_ = auVar33._8_4_;
            auVar33._12_4_ = auVar33._8_4_;
            auVar40 = minps(auVar33,auVar40);
            *param_5 = auVar40;
            return 2;
          }
        }
      }
      return 0;
    }
    uVar11 = 0;
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return uVar11;
}



// FUNCTION 144c62aa0 FUN_144c62aa0 body=235 status=ok
// SIG undefined FUN_144c62aa0(void)

void FUN_144c62aa0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c62b90 FUN_144c62b90 body=2410 status=ok
// SIG undefined FUN_144c62b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c62b90(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  undefined8 *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  ulonglong uVar16;
  char *pcVar17;
  uint *puVar18;
  longlong lVar19;
  float fVar20;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  uint *local_res20;
  undefined8 in_stack_fffffffffffff878;
  undefined4 uVar21;
  ulonglong in_stack_fffffffffffff880;
  undefined8 local_768;
  undefined8 uStack_760;
  char *local_758;
  undefined8 uStack_750;
  uint *local_748;
  uint local_740;
  uint local_73c;
  longlong local_738;
  undefined4 local_730;
  uint local_72c;
  undefined8 local_728;
  int local_720;
  undefined4 local_71c;
  int local_718;
  longlong local_710;
  undefined8 local_708;
  int local_700;
  undefined4 local_6fc;
  int local_6f8;
  undefined1 local_6f0 [8];
  undefined4 local_6e8;
  undefined8 local_6d8 [2];
  undefined8 *local_6c8;
  undefined4 local_6c0;
  undefined8 local_6b8;
  undefined1 local_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  longlong local_648;
  undefined4 local_640;
  uint local_63c;
  longlong local_638;
  undefined4 local_630;
  uint local_62c;
  undefined4 local_628 [2];
  undefined8 local_620;
  undefined8 local_618;
  undefined4 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined1 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5d8;
  undefined8 local_5d4;
  undefined8 local_5cc;
  undefined1 local_588 [256];
  undefined1 local_488 [256];
  undefined **local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 *local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined1 local_360 [12];
  undefined8 local_354 [94];
  undefined4 local_60 [10];
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffff878 >> 0x20);
  local_res10 = param_2;
  uVar7 = FUN_144c36ab0(local_628);
  FUN_144c64920(param_2,uVar7);
  FUN_144c36b50(local_628);
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_144c55040(&local_res20,param_1);
  FUN_144c3e1d0(local_488);
  local_748 = local_res20;
  if (local_res20 != (uint *)0x0) {
    FUN_144b3d910();
  }
  local_res8[0] = 0;
  FUN_144c3f5c0(local_488,param_1,local_res8,&local_748);
  local_378 = 1;
  local_388 = hkaiNavMeshClearanceCacheManager::vftable;
  local_370 = local_360;
  local_364 = 0x80000020;
  local_380 = 0xffffffff;
  local_368 = 0x20;
  puVar11 = local_354;
  do {
    if ((undefined8 *)((longlong)puVar11 + -0xc) != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)puVar11 + -0xc) = 0;
      *(undefined4 *)((longlong)puVar11 + -4) = 0;
      *puVar11 = 0xffffffff80000000;
      *(undefined4 *)(puVar11 + 1) = 0;
    }
    puVar1 = (undefined4 *)((longlong)puVar11 + 0xc);
    puVar11 = puVar11 + 3;
  } while (puVar1 != local_60);
  in_stack_fffffffffffff880 = in_stack_fffffffffffff880 & 0xffffffff00000000;
  local_60[0] = 0;
  local_res8[0] = 0;
  FUN_144fe7590(&local_388,local_6f0,local_res8,*(undefined8 *)(param_3 + 10),
                CONCAT44(uVar21,(float)param_3[2] * 0.5),in_stack_fffffffffffff880);
  uVar21 = (undefined4)(in_stack_fffffffffffff880 >> 0x20);
  local_628[0] = 0;
  local_5f4 = 0;
  local_618 = *(undefined8 *)(param_3 + 8);
  local_620 = *(undefined8 *)(param_3 + 6);
  local_608 = local_6e8;
  local_600 = 0;
  local_5f8 = 0x1030100;
  local_5f0 = 0xffffffff;
  local_5ec = 0x101;
  local_5e8 = 0x3f800000;
  uStack_5e4 = 0x3c23d70a;
  uStack_5e0 = 0x7f7fffee;
  uStack_5dc = 0xbf800000;
  local_5d8 = 0xbf800000;
  local_5d4 = 0;
  local_5cc = 0;
  FUN_144ca1cf0(local_588,&local_388);
  FUN_144bde5d0(&local_710,0x6a79a7be);
  FUN_144bde5d0(&local_758,0x6a79a7bf);
  FUN_144bde5d0(&local_748,0x9b756a38);
  FUN_144bde5d0(local_res8,0x9b756a38);
  FUN_144ca22e0(local_588,local_488,0,1);
  FUN_144bde650(local_res8);
  FUN_144bde650(&local_748);
  FUN_144bde650(&local_758);
  FUN_144bde650(&local_710);
  local_6d8[0] = 0;
  local_668 = 0.0 - _DAT_14c6daca0;
  fStack_664 = 0.0 - fRam000000014c6daca4;
  fStack_660 = 0.0 - fRam000000014c6daca8;
  fStack_65c = 0.0 - fRam000000014c6dacac;
  local_6c8 = (undefined8 *)0x0;
  local_6c0 = 0;
  local_6b8 = 0;
  local_6b0 = 1;
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_698 = 0;
  local_648 = 0;
  local_640 = 0;
  local_63c = 0x80000000;
  local_638 = 0;
  local_630 = 0;
  local_62c = 0x80000000;
  local_658 = local_668;
  fStack_654 = fStack_664;
  fStack_650 = fStack_660;
  fStack_64c = fStack_65c;
  FUN_144c650f0(local_6d8,local_588);
  uVar16 = (ulonglong)_tls_index;
  local_738 = 0;
  local_730 = 0;
  local_72c = 0x80000000;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
  local_748 = (uint *)0x0;
  local_740 = 0;
  local_73c = 0x80000000;
  cVar10 = *(char *)(lVar19 + 0x114);
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar19 + 0x114);
  }
  lVar8 = *(longlong *)(lVar19 + 0xf0);
  if (lVar8 == 0) {
    if (cVar10 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar19 + 0xf0) = lVar8;
  }
  lVar19 = *(longlong *)(lVar8 + 0x3e0);
  local_758 = "StcalcMask";
  uStack_750 = "";
  local_768 = "LtclusterNavMesh";
  uStack_760 = "";
  local_710 = lVar19;
  if (lVar19 != 0) {
    local_758 = "StcalcMask";
    uStack_750 = "";
    local_768 = "LtclusterNavMesh";
    uStack_760 = "";
    FUN_144be9870(lVar19,&local_768,&local_758);
  }
  local_718 = *(int *)(param_1 + 0x30);
  local_728 = 0;
  local_720 = 0;
  local_71c = 0x80000000;
  local_708 = 0;
  iVar13 = local_718 + 0x1f >> 5;
  local_700 = 0;
  local_6fc = 0x80000000;
  local_6f8 = 0;
  if (0 < iVar13) {
    FUN_140163394(&local_728,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  if ((local_720 < iVar13) || (iVar13 < local_720)) {
    local_720 = iVar13;
  }
  FUN_144bfb550(local_728,0xffffffff,(longlong)local_720);
  bVar2 = 0.0 < (float)param_3[2];
  if (bVar2) {
    fVar20 = (float)param_3[2] * 0.5;
    local_768 = (char *)CONCAT44(fVar20,fVar20);
    uStack_760 = (char *)CONCAT44(fVar20,fVar20);
    FUN_144c66420(param_1,&local_768,*(undefined8 *)(param_3 + 10),&local_728);
  }
  if ((*(longlong *)(param_3 + 8) != 0) || (*(longlong *)(param_3 + 10) != 0)) {
    puVar11 = &local_728;
    FUN_144c66c30(param_1,local_588,param_3 + 2,*(longlong *)(param_3 + 8),
                  *(undefined8 *)(param_3 + 10),puVar11);
    uVar21 = (undefined4)((ulonglong)puVar11 >> 0x20);
    bVar2 = true;
  }
  if ((*(longlong *)(param_3 + 8) == 0) && (*(longlong *)(param_3 + 10) == 0)) {
    if (!bVar2) goto LAB_144c6310f;
  }
  else {
    local_6f8 = *(int *)(param_1 + 0x20);
    iVar14 = local_6f8 + 0x1f >> 5;
    uVar7 = 0;
    iVar13 = 0;
    if (0 < iVar14) {
      FUN_140163394(&local_708,&PTR_vftable_14c6e47a0,(longlong)iVar14);
      uVar7 = local_708;
      iVar13 = local_700;
    }
    if ((iVar13 < iVar14) || (iVar14 < iVar13)) {
      iVar13 = iVar14;
      local_700 = iVar14;
    }
    FUN_144bfb550(uVar7,0xffffffff,(longlong)iVar13);
    puVar11 = &local_728;
    FUN_144c66e70(param_1,local_588,param_3 + 2,*(undefined8 *)(param_3 + 8),
                  *(undefined8 *)(param_3 + 10),puVar11,&local_708);
    uVar21 = (undefined4)((ulonglong)puVar11 >> 0x20);
  }
  local_6c8 = &local_728;
LAB_144c6310f:
  local_768 = "StgenerateClusters";
  uStack_760 = "";
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8);
  if (*(char *)(lVar8 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar8 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar8 + 0xf0) = lVar9;
  }
  if (*(longlong *)(lVar9 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar9 + 0x3e0),&local_768);
  }
  local_6b0 = 0;
  FUN_144c67ca0(local_6d8,&local_708,*param_3,&local_738,&local_748,CONCAT44(uVar21,0x19d));
  FUN_144c6a480(param_1,local_6d8,param_3 + 2,&local_748,&local_738);
  local_768 = "StgenerateGraph";
  uStack_760 = "";
  if (*(char *)(lVar8 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar8 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar8 + 0xf0) = lVar9;
  }
  if (*(longlong *)(lVar9 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar9 + 0x3e0),&local_768);
  }
  uVar5 = local_740;
  uVar16 = (ulonglong)local_740;
  uVar6 = 0;
  local_758 = (char *)0x0;
  uStack_750._0_4_ = 0;
  uStack_750._4_4_ = 0x80000000;
  if (((int)local_740 < 1) ||
     (FUN_1418055da(&local_758,&PTR_vftable_14c6e47a0,(longlong)(int)local_740),
     uVar6 = (uint)uStack_750, (int)uVar5 <= (int)(uint)uStack_750)) {
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
    }
    uStack_750 = (char *)CONCAT44(uStack_750._4_4_,uVar6);
  }
  else {
    uStack_750 = (char *)CONCAT44(uStack_750._4_4_,uVar5);
  }
  puVar12 = local_748;
  pcVar15 = local_758;
  pcVar17 = local_758;
  puVar18 = local_748;
  if (0 < (int)uVar5) {
    do {
      puVar1 = (undefined4 *)(local_648 + (ulonglong)(*puVar12 & 0x3fffff) * 0x10);
      uVar21 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)pcVar15 = *puVar1;
      *(undefined4 *)(pcVar15 + 4) = uVar21;
      *(undefined4 *)(pcVar15 + 8) = uVar3;
      *(undefined4 *)(pcVar15 + 0xc) = uVar4;
      FUN_144c6bcb0(local_588,&local_738,param_3 + 2,*(undefined8 *)(param_3 + 10),pcVar17,puVar18);
      uVar16 = uVar16 - 1;
      puVar12 = puVar12 + 1;
      pcVar15 = pcVar15 + 0x10;
      pcVar17 = pcVar17 + 0x10;
      lVar19 = local_710;
      puVar18 = puVar18 + 1;
    } while (uVar16 != 0);
  }
  puVar12 = local_748;
  pcVar15 = local_758;
  local_6b0 = 1;
  FUN_144c63980(local_6d8,local_res10,&local_738,&local_748,&local_758,local_628,param_3 + 2);
  FUN_144c36d70(local_res10);
  if ((-1 < (longlong)uStack_750) && (pcVar15 != (char *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,pcVar15,(ulonglong)(uStack_750._4_4_ & 0x7fffffff) << 4);
  }
  FUN_144bf90d0(&local_708);
  FUN_144bf90d0(&local_728);
  if (lVar19 != 0) {
    local_768 = "lt";
    uStack_760 = "";
    FUN_144be9b20(lVar19,&local_768);
  }
  if ((-1 < (int)local_73c) && (puVar12 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar12,(ulonglong)(local_73c & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_72c) && (local_738 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_738,(ulonglong)(local_72c & 0x7fffffff) << 2);
  }
  local_630 = 0;
  if ((-1 < (int)local_62c) && (local_638 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_638,(ulonglong)(local_62c & 0x7fffffff) << 4);
  }
  local_638 = 0;
  local_62c = 0x80000000;
  local_640 = 0;
  if ((-1 < (int)local_63c) && (local_648 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_648,(ulonglong)(local_63c & 0x7fffffff) << 4);
  }
  local_648 = 0;
  local_63c = 0x80000000;
  FUN_144ca1fa0(local_588);
  FUN_144c65df0(&local_388);
  FUN_140c3e2cc(local_488);
  if (local_res20 != (uint *)0x0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144c63500 FUN_144c63500 body=186 status=ok
// SIG undefined FUN_144c63500(void)

int FUN_144c63500(undefined8 param_1,undefined8 *param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = (int *)*param_2;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*piVar2 == param_3) {
    return 0;
  }
  if (piVar2[(longlong)iVar1 * 2] == param_3) {
    return iVar1;
  }
  if (piVar2[(longlong)iVar1 * 2] < param_3) {
    *param_4 = *(int *)(param_2 + 1);
    return -1;
  }
  iVar3 = iVar1;
  if (*piVar2 <= param_3) {
    while( true ) {
      if (iVar3 < 2) {
        *param_4 = iVar1;
        return -1;
      }
      iVar3 = (iVar1 + iVar4) / 2;
      if (param_3 == piVar2[(longlong)iVar3 * 2]) break;
      if (piVar2[(longlong)iVar3 * 2] <= param_3) {
        iVar4 = iVar3;
        iVar3 = iVar1;
      }
      iVar1 = iVar3;
      iVar3 = iVar3 - iVar4;
    }
    return iVar3;
  }
  *param_4 = 0;
  return -1;
}



// FUNCTION 144c635c0 FUN_144c635c0 body=385 status=ok
// SIG undefined FUN_144c635c0(void)

void FUN_144c635c0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_2;
  if ((int)(param_1[5] & 0x7fffffff) < param_2) {
    FUN_144c6c100(param_1 + 2,&PTR_vftable_14c6e47a0,lVar8);
  }
  iVar1 = param_1[4];
  lVar7 = 0;
  if (iVar1 < param_2) {
    lVar3 = *(longlong *)(param_1 + 2);
    param_1[4] = param_2;
    for (puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
        puVar5 != (undefined8 *)(lVar8 * 0x10 + lVar3); puVar5 = puVar5 + 2) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0x80000000;
      }
    }
  }
  else if (param_2 < iVar1) {
    lVar3 = *(longlong *)(param_1 + 2);
    param_1[4] = param_2;
    plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 2));
    while (plVar4 != (longlong *)(lVar8 * 0x10 + lVar3)) {
      plVar6 = plVar4 + -2;
      *(undefined4 *)(plVar4 + -1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar4 + -4)) && (*plVar6 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar6,
                   (ulonglong)(*(uint *)((longlong)plVar4 + -4) & 0x7fffffff) << 3);
      }
      *plVar6 = 0;
      *(undefined4 *)((longlong)plVar4 + -4) = 0x80000000;
      plVar4 = plVar6;
    }
  }
  *param_1 = param_3;
  param_1[6] = param_2;
  if (0 < lVar8) {
    do {
      lVar3 = *(longlong *)(param_1 + 2);
      uVar2 = *(uint *)(lVar7 + 0xc + lVar3);
      *(undefined4 *)(lVar7 + 8 + lVar3) = 0;
      if ((-1 < (int)uVar2) && (*(longlong *)(lVar7 + lVar3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar7 + lVar3),
                   (ulonglong)(uVar2 & 0x7fffffff) << 3);
      }
      *(undefined8 *)(lVar7 + lVar3) = 0;
      *(undefined4 *)(lVar7 + 0xc + lVar3) = 0x80000000;
      lVar7 = lVar7 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c63750 FUN_144c63750 body=354 status=ok
// SIG undefined FUN_144c63750(void)

void FUN_144c63750(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int local_res10 [2];
  
  plVar7 = (longlong *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
  iVar2 = (int)plVar7[1];
  if (iVar2 == 0) {
    if ((*(uint *)((longlong)plVar7 + 0xc) & 0x7fffffff) == 0) {
      FUN_144c6c3d0(plVar7,&PTR_vftable_14c6e47a0,1);
    }
    lVar3 = plVar7[1];
    lVar8 = *plVar7;
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)(lVar8 + 4 + (longlong)(int)lVar3 * 8) = param_4;
    *(int *)(lVar8 + (longlong)(int)lVar3 * 8) = (int)param_3;
    return;
  }
  local_res10[0] = -1;
  iVar4 = FUN_144c63500(param_1,plVar7,param_3,local_res10);
  if (iVar4 == -1) {
    lVar8 = (longlong)local_res10[0];
    iVar4 = iVar2 + 1;
    uVar9 = iVar2 - local_res10[0];
    if ((int)(*(uint *)((longlong)plVar7 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_144c6c3d0(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar1 = (undefined8 *)(*plVar7 + lVar8 * 8);
    if (0 < (int)uVar9) {
      puVar6 = puVar1 + 1;
      if (puVar6 < puVar1) {
        uVar5 = (ulonglong)uVar9;
        lVar8 = (longlong)puVar1 - (longlong)puVar6;
        do {
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
          }
          puVar6 = puVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      else if (puVar6 != puVar1) {
        puVar6 = puVar6 + (int)(uVar9 - 1);
        lVar8 = (longlong)(int)(uVar9 - 1) * 8 - (longlong)puVar6;
        uVar5 = (ulonglong)uVar9;
        do {
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar1 + (longlong)puVar6);
          }
          puVar6 = puVar6 + -1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = CONCAT44(param_4,(int)param_3);
    }
    *(int *)(plVar7 + 1) = iVar4;
    return;
  }
  *(undefined4 *)(*plVar7 + 4 + (longlong)iVar4 * 8) = param_4;
  return;
}



// FUNCTION 144c638c0 FUN_144c638c0 body=93 status=ok
// SIG undefined FUN_144c638c0(void)

undefined4 FUN_144c638c0(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined4 *)*param_1;
  plVar3 = (longlong *)((longlong)*(int *)(param_1 + 1) * 0x10 + *(longlong *)(puVar1 + 2));
  iVar2 = FUN_144c63500(puVar1,plVar3,param_2 & 0x3fffff,local_res10);
  if (iVar2 != -1) {
    return *(undefined4 *)(*plVar3 + 4 + (longlong)iVar2 * 8);
  }
  return *puVar1;
}



// FUNCTION 144c63920 FUN_144c63920 body=93 status=ok
// SIG undefined FUN_144c63920(void)

undefined4 FUN_144c63920(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined4 *)*param_1;
  plVar3 = (longlong *)((longlong)*(int *)(param_1 + 1) * 0x10 + *(longlong *)(puVar1 + 2));
  iVar2 = FUN_144c63500(puVar1,plVar3,param_2 & 0x3fffff,local_res10);
  if (iVar2 != -1) {
    return *(undefined4 *)(*plVar3 + 4 + (longlong)iVar2 * 8);
  }
  return *puVar1;
}



// FUNCTION 144c63980 FUN_144c63980 body=3993 status=ok
// SIG undefined FUN_144c63980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c63980(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7)

{
  float *pfVar1;
  undefined8 *puVar2;
  short sVar3;
  int iVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  undefined4 *puVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  uint uVar56;
  float fVar58;
  uint uVar59;
  float fVar60;
  uint uVar61;
  undefined1 auVar57 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined8 local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  uint local_360;
  uint local_35c;
  ulonglong local_358;
  int local_350;
  uint *local_348;
  longlong local_340;
  ulonglong local_338;
  longlong local_328;
  longlong lStack_320;
  uint *local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [24];
  longlong local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  longlong local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined **local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined1 local_298 [8];
  ulonglong local_290;
  longlong local_288;
  longlong local_278;
  longlong *plStack_270;
  undefined4 *local_268;
  undefined1 local_260;
  longlong local_258;
  longlong *plStack_250;
  undefined4 *local_248;
  undefined1 local_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8 [2];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  uint local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint local_188;
  undefined8 local_180;
  longlong local_178;
  longlong lStack_170;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  iVar19 = 0;
  local_2b8 = 0;
  local_2c0 = hkaiClusterGraphBuilder::vftable;
  local_2b0 = 0;
  local_2ac = 0x80000000;
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 0x80000000;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144ff6f80(local_298);
  iVar4 = *(int *)(param_1[1] + 0x20);
  local_350 = iVar4;
  if (0 < (int)param_4[1]) {
    do {
      FUN_144ff6f90(&local_2c0,(longlong)iVar19 * 0x10 + *param_5);
      iVar19 = iVar19 + 1;
    } while (iVar19 < (int)param_4[1]);
  }
  uVar25 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d4 = 0x80000000;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c4 = 0x80000000;
  if (0 < iVar4) {
    uVar24 = (ulonglong)_tls_index;
    local_288 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
    local_310 = 0;
    do {
      lVar12 = local_288;
      iVar4 = *(int *)(*param_3 + local_310 * 4);
      uVar11 = (ulonglong)(uVar25 & 0x3fffff);
      iVar19 = (int)*(short *)(*(longlong *)(param_1[1] + 0x18) + 10 + uVar11 * 0xc) +
               (int)*(short *)(*(longlong *)(param_1[1] + 0x18) + 8 + uVar11 * 0xc);
      if (*(char *)(local_288 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
        uVar24 = (ulonglong)_tls_index;
      }
      lVar12 = *(longlong *)(lVar12 + 0xf0);
      if (lVar12 == 0) {
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8);
        if (*(char *)(lVar20 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar12 = FUN_144b3f4a0();
        *(longlong *)(lVar20 + 0xf0) = lVar12;
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x3d0) + 0x10);
      if (*(longlong *)(lVar12 + 8) == 0) {
        local_res8 = (longlong)iVar19 * 4;
        local_340 = lVar12;
        local_338 = local_res8;
        if (lVar12 == 0) goto LAB_144c63bd8;
        local_290 = local_res8 + 0x3f & 0xffffffffffffffc0;
        if (*(ulonglong *)(lVar12 + 0x28) < local_290) {
LAB_144c63ba3:
          local_348 = (uint *)FUN_144b454a0(lVar12,&local_290);
          local_340 = lVar12;
        }
        else {
          local_348 = *(uint **)(lVar12 + 0x38);
          if (*(ulonglong *)(lVar12 + 0x40) < local_290 + (longlong)local_348) goto LAB_144c63ba3;
          *(ulonglong *)(lVar12 + 0x38) = local_290 + (longlong)local_348;
        }
      }
      else {
        local_340 = 0;
        local_338 = (longlong)iVar19 << 2;
LAB_144c63bd8:
        local_res8 = local_338;
        local_348 = (uint *)(*DAT_14c787670)(1,&local_res8,0x40);
      }
      lVar12 = *(longlong *)(param_1[1] + 0x18);
      sVar3 = *(short *)(lVar12 + 8 + uVar11 * 0xc);
      uVar22 = (int)*(short *)(lVar12 + 10 + uVar11 * 0xc) + (int)sVar3;
      uVar23 = uVar22;
      if (((int)uVar22 < 1) && (uVar23 = 0, (int)uVar22 < 0)) {
        uVar23 = uVar22;
      }
      iVar19 = 0;
      puVar16 = local_348;
      if (0 < sVar3) {
        do {
          uVar22 = *(int *)(lVar12 + uVar11 * 0xc) + iVar19;
          iVar19 = iVar19 + 1;
          *puVar16 = uVar22 | uVar25 & 0xffc00000;
          puVar16 = puVar16 + 1;
        } while (iVar19 < *(short *)(lVar12 + 8 + uVar11 * 0xc));
      }
      iVar19 = 0;
      if (0 < *(short *)(lVar12 + 10 + uVar11 * 0xc)) {
        do {
          uVar22 = *(int *)(lVar12 + 4 + uVar11 * 0xc) + iVar19;
          iVar19 = iVar19 + 1;
          *puVar16 = uVar22 | uVar25 & 0xffc00000;
          puVar16 = puVar16 + 1;
        } while (iVar19 < *(short *)(lVar12 + 10 + uVar11 * 0xc));
      }
      if (0 < (int)uVar23) {
        uVar24 = (ulonglong)uVar23;
        local_318 = local_348;
        uVar69 = _DAT_14c6daca0;
        uVar70 = uRam000000014c6daca4;
        uVar71 = uRam000000014c6daca8;
        uVar72 = uRam000000014c6dacac;
        do {
          uVar23 = *local_318;
          uVar10 = uVar23 & 0x3fffff;
          uVar11 = (ulonglong)uVar10;
          uVar22 = *(uint *)(*(longlong *)(param_1[1] + 0x28) + 0xc + uVar11 * 0x14);
          lVar12 = *(longlong *)
                    (*(longlong *)
                      ((ulonglong)(uVar23 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38)) + 0x20)
          ;
          if ((int)uVar10 < *(int *)(lVar12 + 0x30)) {
            if (*(int *)(lVar12 + 0x78) != 0) {
              uVar10 = *(uint *)(*(longlong *)(lVar12 + 0x70) + (ulonglong)uVar10 * 4);
            }
            if (uVar10 != 0xffffffff) {
              lVar12 = *(longlong *)(lVar12 + 0xc0);
              goto LAB_144c63d42;
            }
            lVar12 = *(longlong *)(lVar12 + 0x28) + uVar11 * 0x14;
          }
          else {
            uVar10 = uVar10 - *(int *)(lVar12 + 0x30);
            lVar12 = *(longlong *)(lVar12 + 0xe0);
LAB_144c63d42:
            lVar12 = lVar12 + (longlong)(int)uVar10 * 0x14;
          }
          if ((*(uint *)(lVar12 + 8) != 0xffffffff) && ((*(byte *)(lVar12 + 0x10) & 0x20) == 0)) {
            if ((longlong *)param_1[2] == (longlong *)0x0) {
              if ((char)param_1[5] == '\0') {
LAB_144c63dc4:
                uVar10 = uVar23 & 0x3fffff;
                uVar11 = (ulonglong)uVar10;
                lVar20 = *(longlong *)
                          (*(longlong *)
                            ((ulonglong)(uVar23 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38)) +
                          0x20);
                if ((int)uVar10 < *(int *)(lVar20 + 0x30)) {
                  if (*(int *)(lVar20 + 0x78) != 0) {
                    uVar10 = *(uint *)(*(longlong *)(lVar20 + 0x70) + uVar11 * 4);
                  }
                  if (uVar10 == 0xffffffff) {
                    lVar13 = *(longlong *)(lVar20 + 0x28);
                    lVar17 = uVar11 * 5;
                  }
                  else {
                    lVar17 = (longlong)(int)uVar10 * 5;
                    lVar13 = *(longlong *)(lVar20 + 0xc0);
                  }
                }
                else {
                  lVar17 = (longlong)(int)(uVar10 - *(int *)(lVar20 + 0x30)) * 5;
                  lVar13 = *(longlong *)(lVar20 + 0xe0);
                }
                uVar10 = *(uint *)(lVar13 + lVar17 * 4 + 8);
                if (((*(byte *)(lVar13 + 0x10 + lVar17 * 4) & 0x40) == 0) && (uVar10 != 0xffffffff))
                {
                  uVar10 = uVar10 & 0x3fffff | *(int *)(lVar20 + 0x17c) << 0x16;
                }
                uVar15 = uVar10 & 0x3fffff;
                uVar11 = (ulonglong)uVar15;
                lVar20 = *(longlong *)
                          (*(longlong *)
                            ((ulonglong)(uVar10 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38)) +
                          0x20);
                if ((int)uVar15 < *(int *)(lVar20 + 0x30)) {
                  if (*(int *)(lVar20 + 0x78) != 0) {
                    uVar15 = *(uint *)(*(longlong *)(lVar20 + 0x70) + uVar11 * 4);
                  }
                  if (uVar15 == 0xffffffff) {
                    lVar20 = *(longlong *)(lVar20 + 0x28);
                    lVar13 = uVar11 * 5;
                  }
                  else {
                    lVar13 = (longlong)(int)uVar15 * 5;
                    lVar20 = *(longlong *)(lVar20 + 0xc0);
                  }
                }
                else {
                  lVar13 = (longlong)(int)(uVar15 - *(int *)(lVar20 + 0x30)) * 5;
                  lVar20 = *(longlong *)(lVar20 + 0xe0);
                }
                if ((*(byte *)(lVar20 + 0x10 + lVar13 * 4) & 0x20) != 0) goto LAB_144c646bd;
              }
LAB_144c63edb:
              uVar15 = uVar23 & 0x3fffff;
              uVar11 = (ulonglong)uVar15;
              uVar10 = uVar25 & 0x3fffff;
              local_358 = uVar11;
              if ((*(uint *)(lVar12 + 0xc) & 0x3fffff) != uVar10) {
                lVar12 = *(longlong *)(param_1[1] + 0x28);
                lVar20 = *(longlong *)(param_1[1] + 0x38);
                pfVar1 = (float *)(lVar20 + (longlong)*(int *)(lVar12 + uVar11 * 0x14) * 0x10);
                fVar65 = *pfVar1;
                fVar66 = pfVar1[1];
                local_258 = *(longlong *)pfVar1;
                fVar67 = pfVar1[2];
                fVar68 = pfVar1[3];
                plStack_250 = *(longlong **)(pfVar1 + 2);
                fVar26 = SUB164(*(undefined1 (*) [16])(param_1 + 0xe),0);
                pfVar1 = (float *)(lVar20 + (longlong)*(int *)(lVar12 + 4 + uVar11 * 0x14) * 0x10);
                fVar6 = *pfVar1;
                fVar7 = pfVar1[1];
                local_278 = *(longlong *)pfVar1;
                fVar8 = pfVar1[2];
                plStack_270 = *(longlong **)(pfVar1 + 2);
                if (0.0 <= fVar26) {
                  fVar43 = fVar65 - fVar6;
                  fVar46 = fVar66 - fVar7;
                  fVar47 = fVar67 - fVar8;
                  fVar49 = fVar66 - *(float *)((longlong)param_1 + 0x54);
                  fVar29 = fVar43 * (fVar65 - *(float *)(param_1 + 10));
                  fVar33 = fVar46 * fVar49;
                  fVar35 = fVar47 * (fVar67 - *(float *)(param_1 + 0xb));
                  fVar36 = fVar43 * fVar43;
                  fVar38 = fVar46 * fVar46;
                  fVar40 = fVar47 * fVar47;
                  auVar54._0_4_ = fVar35 + fVar33 + fVar29;
                  auVar54._4_4_ = fVar35 + fVar33 + fVar29;
                  auVar54._8_4_ = fVar35 + fVar33 + fVar29;
                  auVar54._12_4_ = fVar35 + fVar33 + fVar29;
                  auVar30._4_4_ = fVar40 + fVar38 + fVar36;
                  auVar30._0_4_ = fVar40 + fVar38 + fVar36;
                  auVar30._8_4_ = fVar40 + fVar38 + fVar36;
                  auVar30._12_4_ = fVar40 + fVar38 + fVar36;
                  auVar30 = divps(auVar54,auVar30);
                  auVar30 = minps(auVar30,_DAT_1499314a0);
                  auVar30 = maxps(auVar30,ZEXT816(0));
                  fVar29 = (fVar65 - *(float *)(param_1 + 10)) - auVar30._0_4_ * fVar43;
                  fVar49 = fVar49 - auVar30._4_4_ * fVar46;
                  fVar33 = (fVar67 - *(float *)(param_1 + 0xb)) - auVar30._8_4_ * fVar47;
                  if (fVar26 * fVar26 < fVar33 * fVar33 + fVar49 * fVar49 + fVar29 * fVar29)
                  goto LAB_144c646bd;
                }
                auVar30 = *(undefined1 (*) [16])(param_1 + 0x10);
                fVar26 = auVar30._0_4_;
                if (0.0 <= fVar26) {
                  iVar19 = 0;
                  fVar29 = fVar6 - fVar65;
                  fVar33 = fVar7 - fVar66;
                  fVar35 = fVar8 - fVar67;
                  fVar36 = pfVar1[3] - fVar68;
                  lVar12 = 0;
                  if (0 < (int)param_1[0xd]) {
                    fVar38 = *(float *)(param_1 + 10);
                    local_328 = param_1[10];
                    fVar40 = *(float *)(param_1 + 0xb);
                    lStack_320 = param_1[0xb];
                    uVar37 = 0x3f800000;
                    uVar39 = 0x3f800000;
                    uVar41 = 0x3f800000;
                    uVar42 = 0x3f800000;
                    fVar43 = fVar65 - fVar38;
                    fVar46 = fVar66 - *(float *)((longlong)param_1 + 0x54);
                    fVar47 = fVar67 - fVar40;
                    pfVar21 = (float *)param_1[0xc];
                    local_218._0_4_ = fVar29 * fVar29;
                    local_218._4_4_ = fVar33 * fVar33;
                    local_218._8_4_ = fVar35 * fVar35;
                    local_218._12_4_ = fVar36 * fVar36;
                    local_308 = CONCAT44(auVar30._4_4_ * auVar30._4_4_,fVar26 * fVar26);
                    uStack_300 = CONCAT44(auVar30._12_4_ * auVar30._12_4_,
                                          auVar30._8_4_ * auVar30._8_4_);
                    do {
                      fVar62 = *pfVar21 - fVar38;
                      fVar63 = pfVar21[1] - *(float *)((longlong)param_1 + 0x54);
                      fVar64 = pfVar21[2] - fVar40;
                      fVar36 = fVar63 * fVar29 - fVar62 * fVar33;
                      fVar49 = fVar64 * fVar33 - fVar63 * fVar35;
                      fVar28 = fVar62 * fVar35 - fVar64 * fVar29;
                      fVar55 = fVar49 * fVar49;
                      fVar58 = fVar28 * fVar28;
                      fVar60 = fVar36 * fVar36;
                      auVar57._0_4_ = fVar60 + fVar58 + fVar55;
                      auVar57._4_4_ = fVar60 + fVar58 + fVar55;
                      auVar57._8_4_ = fVar60 + fVar58 + fVar55;
                      auVar57._12_4_ = fVar60 + fVar58 + fVar55;
                      if (auVar57._0_4_ == 0.0) {
                        auVar30 = ZEXT816(0);
                      }
                      else {
                        auVar31._4_4_ = uVar70;
                        auVar31._0_4_ = uVar69;
                        auVar31._8_4_ = uVar71;
                        auVar31._12_4_ = uVar72;
                        auVar30 = divps(auVar31,auVar57);
                      }
                      fVar55 = fVar62 * fVar29;
                      fVar58 = fVar63 * fVar33;
                      fVar51 = fVar64 * fVar35;
                      fVar60 = (fVar35 * fVar28 - fVar36 * fVar33) * fVar43;
                      fVar36 = (fVar29 * fVar36 - fVar49 * fVar35) * fVar46;
                      fVar49 = (fVar33 * fVar49 - fVar28 * fVar29) * fVar47;
                      auVar53._0_4_ = (fVar49 + fVar36 + fVar60) * auVar30._0_4_;
                      auVar53._4_4_ = (fVar49 + fVar36 + fVar60) * auVar30._4_4_;
                      auVar53._8_4_ = (fVar49 + fVar36 + fVar60) * auVar30._8_4_;
                      auVar53._12_4_ = (fVar49 + fVar36 + fVar60) * auVar30._12_4_;
                      fVar48 = fVar51 + fVar58 + fVar55;
                      fVar50 = fVar51 + fVar58 + fVar55;
                      fVar52 = fVar51 + fVar58 + fVar55;
                      fVar51 = fVar51 + fVar58 + fVar55;
                      auVar5._4_4_ = uVar39;
                      auVar5._0_4_ = uVar37;
                      auVar5._8_4_ = uVar41;
                      auVar5._12_4_ = uVar42;
                      auVar30 = minps(auVar53,auVar5);
                      auVar54 = maxps(auVar30,ZEXT816(0));
                      auVar27._4_4_ = uVar70;
                      auVar27._0_4_ = uVar69;
                      auVar27._8_4_ = uVar71;
                      auVar27._12_4_ = uVar72;
                      auVar44._0_4_ = fVar63 * fVar63 + fVar62 * fVar62 + fVar64 * fVar64;
                      auVar44._4_4_ = fVar46 * fVar63 + fVar43 * fVar62 + fVar47 * fVar64;
                      auVar44._8_4_ = local_218._4_4_ + local_218._0_4_ + local_218._8_4_;
                      auVar44._12_4_ = fVar46 * fVar33 + fVar43 * fVar29 + fVar47 * fVar35;
                      uVar37 = (undefined4)DAT_1499314a0;
                      uVar39 = DAT_1499314a0._4_4_;
                      uVar41 = DAT_1499314a0._8_4_;
                      uVar42 = DAT_1499314a0._12_4_;
                      auVar30 = divps(auVar27,auVar44);
                      fVar58 = (float)(~-(uint)(auVar44._0_4_ == 0.0) & auVar30._0_4_);
                      fVar36 = (float)(~-(uint)(auVar44._8_4_ == 0.0) & auVar30._8_4_);
                      fVar49 = (fVar48 * auVar54._0_4_ - auVar44._12_4_) * fVar36;
                      fVar28 = (fVar50 * auVar54._4_4_ - auVar44._12_4_) * fVar36;
                      fVar55 = (fVar52 * auVar54._8_4_ - auVar44._12_4_) * fVar36;
                      auVar32._4_4_ = fVar28;
                      auVar32._0_4_ = fVar49;
                      auVar32._8_4_ = fVar55;
                      auVar32._12_4_ = (fVar51 * auVar54._12_4_ - auVar44._12_4_) * fVar36;
                      auVar30 = minps(auVar32,_DAT_1499314a0);
                      auVar30 = maxps(auVar30,ZEXT816(0));
                      fVar60 = auVar30._0_4_;
                      fVar34 = auVar30._4_4_;
                      fVar36 = auVar30._8_4_;
                      uVar56 = -(uint)(auVar57._0_4_ != 0.0 && fVar60 == fVar49);
                      uVar59 = -(uint)(auVar57._4_4_ != 0.0 && fVar34 == fVar28);
                      uVar61 = -(uint)(auVar57._8_4_ != 0.0 && fVar36 == fVar55);
                      auVar45._0_4_ = (auVar44._4_4_ + fVar60 * fVar48) * fVar58;
                      auVar45._4_4_ = (auVar44._4_4_ + fVar34 * fVar50) * fVar58;
                      auVar45._8_4_ = (auVar44._4_4_ + fVar36 * fVar52) * fVar58;
                      auVar45._12_4_ = (auVar44._4_4_ + auVar30._12_4_ * fVar51) * fVar58;
                      auVar30 = minps(auVar45,_DAT_1499314a0);
                      auVar30 = maxps(auVar30,ZEXT816(0));
                      fVar49 = (fVar43 - (float)(uVar56 & (uint)auVar54._0_4_ |
                                                ~uVar56 & auVar30._0_4_) * fVar62) + fVar60 * fVar29
                      ;
                      fVar28 = (fVar46 - (float)(uVar59 & (uint)auVar54._4_4_ |
                                                ~uVar59 & auVar30._4_4_) * fVar63) + fVar34 * fVar33
                      ;
                      fVar36 = (fVar47 - (float)(uVar61 & (uint)auVar54._8_4_ |
                                                ~uVar61 & auVar30._8_4_) * fVar64) + fVar36 * fVar35
                      ;
                      if (fVar36 * fVar36 + fVar28 * fVar28 + fVar49 * fVar49 <= fVar26 * fVar26)
                      break;
                      iVar19 = iVar19 + 1;
                      lVar12 = lVar12 + 1;
                      pfVar21 = pfVar21 + 4;
                    } while (lVar12 < (int)param_1[0xd]);
                  }
                  if (iVar19 == (int)param_1[0xd]) goto LAB_144c646bd;
                }
                if (param_1[7] != 0) {
                  fVar65 = (fVar6 - fVar65) * _DAT_14c6dad90 + fVar65;
                  fVar66 = (fVar7 - fVar66) * fRam000000014c6dad94 + fVar66;
                  fVar67 = (fVar8 - fVar67) * fRam000000014c6dad98 + fVar67;
                  fVar68 = (pfVar1[3] - fVar68) * fRam000000014c6dad9c + fVar68;
                  lVar12 = *(longlong *)
                            ((ulonglong)(uVar23 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38));
                  local_1e8[0] = 0xffffffff;
                  local_1e0 = 0;
                  local_1d8 = 0;
                  uStack_1d0 = 0;
                  local_1b8 = 0xffffffff;
                  local_1b0 = 0;
                  local_1a8 = 0;
                  lStack_1a0 = 0;
                  local_178 = 0;
                  lStack_170 = 0;
                  lVar20 = *(longlong *)(lVar12 + 0x20);
                  iVar19 = *(int *)(lVar20 + 0x50);
                  if ((int)uVar10 < *(int *)(lVar20 + 0x20)) {
                    uVar56 = uVar10;
                    if (*(int *)(lVar20 + 0x98) != 0) {
                      uVar56 = *(uint *)(*(longlong *)(lVar20 + 0x90) + (ulonglong)uVar10 * 4);
                    }
                    if (uVar56 != 0xffffffff) {
                      local_238 = *(longlong *)(lVar20 + 0x120);
                      goto LAB_144c64322;
                    }
                    local_238 = *(longlong *)(lVar20 + 0x48) + (longlong)(int)(iVar19 * uVar10) * 4;
                    lStack_230 = local_238 + (longlong)iVar19 * 4;
                  }
                  else {
                    local_238 = *(longlong *)(lVar20 + 0x140);
                    uVar56 = uVar10 - *(int *)(lVar20 + 0x20);
LAB_144c64322:
                    lStack_230 = local_238 +
                                 ((longlong)(int)(uVar56 * iVar19) + (longlong)iVar19) * 4;
                    local_238 = local_238 + (longlong)(int)(uVar56 * iVar19) * 4;
                  }
                  local_res8._4_4_ = (undefined4)((ulonglong)*(longlong *)(lVar20 + 0x48) >> 0x20);
                  local_res8 = CONCAT44(local_res8._4_4_,uVar25) & 0xffffffff003fffff;
                  local_328 = lVar12;
                  local_180 = FUN_144c64f60(lVar12,&local_res8);
                  local_178 = local_238;
                  lStack_170 = lStack_230;
                  lVar20 = *(longlong *)(lVar12 + 0x20);
                  iVar19 = *(int *)(lVar20 + 0x60);
                  if ((int)uVar15 < *(int *)(lVar20 + 0x30)) {
                    uVar10 = uVar15;
                    if (*(int *)(lVar20 + 0x78) != 0) {
                      uVar10 = *(uint *)(*(longlong *)(lVar20 + 0x70) + uVar11 * 4);
                    }
                    if (uVar10 != 0xffffffff) {
                      local_228 = *(longlong *)(lVar20 + 0x130);
                      goto LAB_144c643ca;
                    }
                    local_228 = *(longlong *)(lVar20 + 0x58) + (longlong)(int)(uVar15 * iVar19) * 4;
                    lStack_220 = local_228 + (longlong)iVar19 * 4;
                  }
                  else {
                    local_228 = *(longlong *)(lVar20 + 0x150);
                    uVar10 = uVar15 - *(int *)(lVar20 + 0x30);
LAB_144c643ca:
                    lStack_220 = local_228 +
                                 ((longlong)(int)(uVar10 * iVar19) + (longlong)iVar19) * 4;
                    local_228 = local_228 + (longlong)(int)(uVar10 * iVar19) * 4;
                  }
                  local_res8 = CONCAT44(local_res8._4_4_,uVar23) & 0xffffffff003fffff;
                  local_188 = uVar25;
                  local_1b0 = FUN_144c46e20(lVar12,&local_res8);
                  local_258 = *param_1;
                  plStack_250 = param_1 + 3;
                  local_248 = local_1e8;
                  local_1a8 = local_228;
                  lStack_1a0 = lStack_220;
                  local_240 = 0x21;
                  local_1b8 = uVar23;
                  local_198 = fVar65;
                  fStack_194 = fVar66;
                  fStack_190 = fVar67;
                  fStack_18c = fVar68;
                  cVar9 = (**(code **)(*(longlong *)param_1[7] + 0x28))
                                    ((longlong *)param_1[7],&local_258);
                  uVar69 = _DAT_14c6daca0;
                  uVar70 = uRam000000014c6daca4;
                  uVar71 = uRam000000014c6daca8;
                  uVar72 = uRam000000014c6dacac;
                  if (cVar9 == '\0') goto LAB_144c646bd;
                  if ((char)param_1[5] == '\0') {
                    local_res8 = CONCAT44(local_res8._4_4_,uVar23) & 0xffffffff003fffff;
                    FUN_144c5ee50(lVar12,&local_360,&local_res8);
                    uVar23 = local_360;
                    local_308 = 0;
                    uStack_300 = 0;
                    local_res8 = CONCAT44(local_res8._4_4_,local_360) & 0xffffffff003fffff;
                    uVar14 = FUN_144c44fc0(*(undefined8 *)
                                            (*(longlong *)
                                              ((ulonglong)(local_360 >> 0x16) * 0x120 +
                                              *(longlong *)(*param_1 + 0x38)) + 0x20),&local_res8,
                                           &local_308);
                    local_res8._0_4_ = (int)local_358;
                    FUN_144c65070(local_328,&local_35c,&local_res8);
                    uVar10 = local_35c;
                    local_res8 = CONCAT44(local_res8._4_4_,local_35c) & 0xffffffff003fffff;
                    local_328 = 0;
                    lStack_320 = 0;
                    local_130 = FUN_144c450c0(*(undefined8 *)
                                               (*(longlong *)
                                                 ((ulonglong)(local_35c >> 0x16) * 0x120 +
                                                 *(longlong *)(*param_1 + 0x38)) + 0x20),&local_res8
                                              ,&local_328);
                    local_278 = *param_1;
                    local_158 = 0;
                    uStack_150 = 0;
                    plStack_270 = param_1 + 3;
                    local_268 = local_168;
                    local_f8 = local_308;
                    uStack_f0 = uStack_300;
                    local_168[0] = 0xffffffff;
                    local_160 = 0;
                    local_128 = local_328;
                    lStack_120 = lStack_320;
                    local_108 = uVar23;
                    local_138 = uVar10;
                    local_260 = 0x21;
                    local_118 = fVar65;
                    fStack_114 = fVar66;
                    fStack_110 = fVar67;
                    fStack_10c = fVar68;
                    local_100 = uVar14;
                    cVar9 = (**(code **)(*(longlong *)param_1[7] + 0x28))
                                      ((longlong *)param_1[7],&local_278);
                    uVar69 = _DAT_14c6daca0;
                    uVar70 = uRam000000014c6daca4;
                    uVar71 = uRam000000014c6daca8;
                    uVar72 = uRam000000014c6dacac;
                    if (cVar9 == '\0') goto LAB_144c646bd;
                  }
                }
                iVar19 = *(int *)(*local_res18 + (ulonglong)(uVar22 & 0x3fffff) * 4);
                if ((((iVar4 != iVar19) && (iVar4 != -1)) && (iVar19 != -1)) &&
                   (cVar9 = FUN_144ff7090(&local_2c0,iVar19,iVar4), uVar69 = _DAT_14c6daca0,
                   uVar70 = uRam000000014c6daca4, uVar71 = uRam000000014c6daca8,
                   uVar72 = uRam000000014c6dacac, cVar9 == '\0')) {
                  local_358 = CONCAT44(local_358._4_4_,
                                       *(undefined4 *)(*local_res20 + (longlong)iVar4 * 4));
                  puVar2 = (undefined8 *)(*param_5 + (longlong)iVar4 * 0x10);
                  local_1f8 = *puVar2;
                  uStack_1f0 = puVar2[1];
                  local_res8 = CONCAT44(local_res8._4_4_,
                                        *(undefined4 *)(*local_res20 + (longlong)iVar19 * 4));
                  puVar2 = (undefined8 *)(*param_5 + (longlong)iVar19 * 0x10);
                  local_208 = *puVar2;
                  uStack_200 = puVar2[1];
                  fVar65 = (float)FUN_144c66220(param_1,&local_358,&local_1f8,&local_res8,&local_208
                                                ,param_6,param_7,local_2f8);
                  uVar69 = _DAT_14c6daca0;
                  uVar70 = uRam000000014c6daca4;
                  uVar71 = uRam000000014c6daca8;
                  uVar72 = uRam000000014c6dacac;
                  if (fVar65 < 3.40282e+38) {
                    FUN_144ff7000(&local_2c0,iVar19,iVar4);
                    uVar69 = _DAT_14c6daca0;
                    uVar70 = uRam000000014c6daca4;
                    uVar71 = uRam000000014c6daca8;
                    uVar72 = uRam000000014c6dacac;
                  }
                }
              }
            }
            else {
              lVar20 = *(longlong *)param_1[2];
              if ((*(uint *)(lVar20 + (ulonglong)((uVar23 & 0x3fffff) >> 5) * 4) >>
                   ((byte)(uVar23 & 0x3fffff) & 0x1f) & 1) != 0) {
                if ((char)param_1[5] != '\0') goto LAB_144c63edb;
                uVar10 = *(uint *)(lVar12 + 8) & 0x3fffff;
                if ((*(uint *)(lVar20 + (ulonglong)(uVar10 >> 5) * 4) >> ((byte)uVar10 & 0x1f) & 1)
                    != 0) goto LAB_144c63dc4;
              }
            }
          }
LAB_144c646bd:
          local_318 = local_318 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      if (local_340 == 0) {
        (*DAT_14c787678)(1,local_348);
      }
      else {
        uVar24 = local_338 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_340 + 0x28) < uVar24) ||
           ((longlong)local_348 + uVar24 != *(longlong *)(local_340 + 0x38))) {
          FUN_144be8550(local_340,local_348);
        }
        else {
          *(uint **)(local_340 + 0x38) = local_348;
          if (*(uint **)(local_340 + 0x48) == local_348) {
            FUN_144be8430();
          }
        }
      }
      uVar25 = uVar25 + 1;
      local_310 = local_310 + 1;
      uVar24 = (ulonglong)_tls_index;
      param_3 = local_res18;
    } while ((int)uVar25 < local_350);
  }
  lVar12 = local_res10;
  FUN_144ff70c0(&local_2c0,local_res10);
  if ((int)(*(uint *)(lVar12 + 0x74) & 0x7fffffff) < (int)param_3[1]) {
    FUN_144c36de0(lVar12 + 0x68,&PTR_vftable_14c6e47a0,(longlong)(int)param_3[1]);
  }
  iVar4 = (int)param_3[1];
  if ((int)(*(uint *)(lVar12 + 0x74) & 0x7fffffff) < iVar4) {
    FUN_144c6c2d0(lVar12 + 0x68,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  if (*(int *)(lVar12 + 0x70) < iVar4) {
    *(int *)(lVar12 + 0x70) = iVar4;
  }
  else if (iVar4 < *(int *)(lVar12 + 0x70)) {
    *(int *)(lVar12 + 0x70) = iVar4;
  }
  puVar18 = *(undefined4 **)(lVar12 + 0x68);
  if ((puVar18 != (undefined4 *)*param_3) && (lVar12 = (longlong)(int)param_3[1], 0 < lVar12)) {
    lVar20 = *param_3 - (longlong)puVar18;
    do {
      *puVar18 = *(undefined4 *)(lVar20 + (longlong)puVar18);
      puVar18 = puVar18 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  local_2c8 = 0;
  if ((-1 < (int)local_2c4) && (local_2d0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_2d0,local_2c4 & 0x7fffffff);
  }
  local_2d0 = 0;
  local_2c4 = 0x80000000;
  local_2d8 = 0;
  if ((-1 < (int)local_2d4) && (local_2e0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_2e0,local_2d4 & 0x7fffffff);
  }
  local_2e0 = 0;
  local_2d4 = 0x80000000;
  FUN_144c65cf0(&local_2c0);
  return;
}



// FUNCTION 144c64920 FUN_144c64920 body=869 status=ok
// SIG undefined FUN_144c64920(void)

longlong FUN_144c64920(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  plVar2 = (longlong *)(param_1 + 0x18);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 4);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x80000000;
    FUN_147e4a87c(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x28);
  plVar2 = (longlong *)(param_1 + 0x28);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 3);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    FUN_144c37270(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x38);
  plVar2 = (longlong *)(param_1 + 0x38);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) << 3);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80000000;
    FUN_144c372e0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x48);
  plVar2 = (longlong *)(param_1 + 0x48);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x54) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x80000000;
    FUN_14382139c(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x58);
  plVar2 = (longlong *)(param_1 + 0x58);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 100)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 100) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0x80000000;
    FUN_14382139c(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x68);
  plVar2 = (longlong *)(param_1 + 0x68);
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)(param_1 + 0x74) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0x80000000;
    FUN_144c64c90(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  puVar3 = (undefined8 *)(param_2 + 0x80);
  puVar4 = (undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  if (puVar3 != puVar4) {
    FUN_144c64dd0(puVar4,0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
      FUN_144c64d00(puVar3,&PTR_vftable_14c6e47a0);
      *puVar4 = *puVar3;
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
      *puVar3 = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 144c64c90 FUN_144c64c90 body=103 status=ok
// SIG undefined FUN_144c64c90(void)

void FUN_144c64c90(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c64d00 FUN_144c64d00 body=197 status=ok
// SIG undefined FUN_144c64d00(void)

void FUN_144c64d00(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar3 = (undefined1 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
    ;
    uVar1 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar1;
    puVar2 = (undefined1 *)*param_1;
    uVar7 = (ulonglong)uVar1;
    puVar4 = puVar3;
    puVar8 = puVar2;
    if (0 < (int)uVar1) {
      do {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = *puVar8;
          *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 8) = 0;
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 0x10;
        puVar8 = puVar8 + 0x10;
      } while (uVar5 != 0);
      plVar6 = (longlong *)(puVar2 + 8);
      do {
        if (*plVar6 != 0) {
          FUN_144b3f230();
        }
        plVar6 = plVar6 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *param_1 = puVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144c64dd0 FUN_144c64dd0 body=195 status=ok
// SIG undefined FUN_144c64dd0(void)

longlong * FUN_144c64dd0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 144c64ea0 FUN_144c64ea0 body=177 status=ok
// SIG undefined FUN_144c64ea0(void)

longlong *
FUN_144c64ea0(longlong *param_1,longlong param_2,int param_3,longlong *param_4,longlong *param_5,
             longlong *param_6,int param_7,int param_8)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 <= param_7) {
    lVar1 = *param_5;
    lVar2 = (longlong)((param_7 - param_3) * param_8);
    *param_1 = lVar1 + lVar2 * 4;
    param_1[1] = lVar1 + (lVar2 + param_8) * 4;
    return param_1;
  }
  iVar3 = param_7;
  if ((int)param_6[1] != 0) {
    iVar3 = *(int *)(*param_6 + (longlong)param_7 * 4);
  }
  if (iVar3 != -1) {
    lVar1 = *param_4;
    *param_1 = lVar1 + (longlong)(iVar3 * param_8) * 4;
    param_1[1] = lVar1 + ((longlong)(iVar3 * param_8) + (longlong)param_8) * 4;
    return param_1;
  }
  param_2 = param_2 + (longlong)(param_8 * param_7) * 4;
  *param_1 = param_2;
  param_1[1] = param_2 + (longlong)param_8 * 4;
  return param_1;
}



// FUNCTION 144c64f60 FUN_144c64f60 body=92 status=ok
// SIG undefined FUN_144c64f60(void)

longlong FUN_144c64f60(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *param_2;
  lVar3 = (longlong)iVar2;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar1 + 0x20) <= iVar2) {
    return *(longlong *)(lVar1 + 0xd0) + (longlong)(iVar2 - *(int *)(lVar1 + 0x20)) * 0xc;
  }
  if (*(int *)(lVar1 + 0x98) != 0) {
    iVar2 = *(int *)(*(longlong *)(lVar1 + 0x90) + lVar3 * 4);
  }
  if (iVar2 == -1) {
    return *(longlong *)(lVar1 + 0x18) + lVar3 * 0xc;
  }
  return *(longlong *)(lVar1 + 0xb0) + (longlong)iVar2 * 0xc;
}



// FUNCTION 144c64fc0 FUN_144c64fc0 body=80 status=ok
// SIG undefined FUN_144c64fc0(void)

undefined8 FUN_144c64fc0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_144c64ea0(param_2,*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x30),lVar1 + 0x130,
                lVar1 + 0x150,lVar1 + 0x70,*param_3,*(undefined4 *)(lVar1 + 0x60));
  return param_2;
}



// FUNCTION 144c65010 FUN_144c65010 body=83 status=ok
// SIG undefined FUN_144c65010(void)

undefined8 FUN_144c65010(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_144c64ea0(param_2,*(undefined8 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x20),lVar1 + 0x120,
                lVar1 + 0x140,lVar1 + 0x90,*param_3,*(undefined4 *)(lVar1 + 0x50));
  return param_2;
}



// FUNCTION 144c65070 FUN_144c65070 body=123 status=ok
// SIG undefined FUN_144c65070(void)

uint * FUN_144c65070(longlong param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *param_3;
  lVar5 = (longlong)iVar4;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (iVar4 < *(int *)(lVar3 + 0x30)) {
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar4 = *(int *)(*(longlong *)(lVar3 + 0x70) + lVar5 * 4);
    }
    if (iVar4 == -1) {
      lVar6 = *(longlong *)(lVar3 + 0x28);
      lVar5 = lVar5 * 5;
    }
    else {
      lVar5 = (longlong)iVar4 * 5;
      lVar6 = *(longlong *)(lVar3 + 0xc0);
    }
  }
  else {
    lVar5 = (longlong)(iVar4 - *(int *)(lVar3 + 0x30)) * 5;
    lVar6 = *(longlong *)(lVar3 + 0xe0);
  }
  bVar1 = *(byte *)(lVar6 + 0x10 + lVar5 * 4);
  uVar2 = *(uint *)(lVar6 + 8 + lVar5 * 4);
  iVar4 = *(int *)(lVar3 + 0x17c);
  *param_2 = uVar2;
  if (((bVar1 & 0x40) == 0) && (uVar2 != 0xffffffff)) {
    *param_2 = uVar2 & 0x3fffff | iVar4 << 0x16;
  }
  return param_2;
}



// FUNCTION 144c650f0 FUN_144c650f0 body=426 status=ok
// SIG undefined FUN_144c650f0(void)

void FUN_144c650f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int local_res8 [2];
  char *local_38;
  char *local_30;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 != 0) {
    local_38 = "TtsetCollection";
    local_30 = "";
    FUN_144b3f370(lVar2,&local_38);
  }
  *param_1 = param_2;
  lVar3 = *(longlong *)(*(longlong *)(**(longlong **)(param_2 + 0x38) + 0x20) + 0x68);
  iVar1 = *(int *)(lVar3 + 0x20);
  if ((int)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) < iVar1) {
    FUN_1418055da(param_1 + 0x12,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if (((int)param_1[0x13] < iVar1) || (iVar1 < (int)param_1[0x13])) {
    *(int *)(param_1 + 0x13) = iVar1;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) < iVar1) {
    FUN_1418055da(param_1 + 0x14,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if (((int)param_1[0x15] < iVar1) || (iVar1 < (int)param_1[0x15])) {
    *(int *)(param_1 + 0x15) = iVar1;
  }
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < iVar1) {
    do {
      iVar5 = (int)uVar6;
      local_res8[0] = iVar5;
      FUN_144c52c20(lVar3,local_res8,param_1[0x12] + uVar4);
      local_res8[0] = iVar5;
      FUN_144c52ae0(&local_38,lVar3,local_res8,param_1[0x14] + uVar4);
      uVar4 = uVar4 + 0x10;
      uVar6 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < iVar1);
  }
  param_1[1] = lVar3;
  if (lVar2 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar2,&local_38);
  }
  return;
}



// FUNCTION 144c652a0 FUN_144c652a0 body=2318 status=ok
// SIG undefined FUN_144c652a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144c652a0(longlong *param_1,uint *param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar20;
  float *pfVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong *plStack_220;
  undefined4 *local_218;
  undefined1 local_210;
  longlong local_208;
  longlong *plStack_200;
  undefined4 *local_1f8;
  undefined1 local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  ulonglong uVar19;
  
  if (*(int *)(param_3 + 0xc) == -1) {
    return 0;
  }
  uVar3 = *param_2;
  uVar18 = uVar3 & 0x3fffff;
  uVar19 = (ulonglong)uVar18;
  lVar20 = *(longlong *)(param_1[1] + 0x28);
  uVar4 = *(uint *)(lVar20 + 0xc + (ulonglong)(*(uint *)(param_3 + 8) & 0x3fffff) * 0x14);
  lVar12 = *(longlong *)
            (*(longlong *)((ulonglong)(uVar3 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38)) +
            0x20);
  iVar23 = *(int *)(lVar12 + 0x30);
  if ((int)uVar18 < iVar23) {
    uVar22 = uVar18;
    if (*(int *)(lVar12 + 0x78) != 0) {
      uVar22 = *(uint *)(*(longlong *)(lVar12 + 0x70) + uVar19 * 4);
    }
    if (uVar22 == 0xffffffff) {
      lVar10 = *(longlong *)(lVar12 + 0x28);
      lVar14 = uVar19 * 5;
    }
    else {
      lVar14 = (longlong)(int)uVar22 * 5;
      lVar10 = *(longlong *)(lVar12 + 0xc0);
    }
  }
  else {
    lVar14 = (longlong)(int)(uVar18 - iVar23) * 5;
    lVar10 = *(longlong *)(lVar12 + 0xe0);
  }
  uVar22 = *(uint *)(lVar10 + lVar14 * 4 + 8);
  if (uVar22 == 0xffffffff) {
    return 0;
  }
  if ((*(byte *)(lVar10 + lVar14 * 4 + 0x10) & 0x20) != 0) {
    return 0;
  }
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    if ((char)param_1[5] == '\0') goto LAB_144c6541b;
  }
  else {
    lVar11 = *(longlong *)param_1[2];
    if ((*(uint *)(lVar11 + (ulonglong)(uVar18 >> 5) * 4) >> ((byte)uVar18 & 0x1f) & 1) == 0) {
      return 0;
    }
    if ((char)param_1[5] == '\0') {
      uVar22 = uVar22 & 0x3fffff;
      if ((*(uint *)(lVar11 + (ulonglong)(uVar22 >> 5) * 4) >> ((byte)uVar22 & 0x1f) & 1) == 0) {
        return 0;
      }
LAB_144c6541b:
      if ((int)uVar18 < iVar23) {
        uVar22 = uVar18;
        if (*(int *)(lVar12 + 0x78) != 0) {
          uVar22 = *(uint *)(*(longlong *)(lVar12 + 0x70) + uVar19 * 4);
        }
        if (uVar22 == 0xffffffff) {
          lVar11 = *(longlong *)(lVar12 + 0x28);
          lVar15 = uVar19 * 5;
        }
        else {
          lVar15 = (longlong)(int)uVar22 * 5;
          lVar11 = *(longlong *)(lVar12 + 0xc0);
        }
      }
      else {
        lVar15 = (longlong)(int)(uVar18 - iVar23) * 5;
        lVar11 = *(longlong *)(lVar12 + 0xe0);
      }
      uVar22 = *(uint *)(lVar11 + lVar15 * 4 + 8);
      if (((*(byte *)(lVar11 + 0x10 + lVar15 * 4) & 0x40) == 0) && (uVar22 != 0xffffffff)) {
        uVar22 = *(int *)(lVar12 + 0x17c) << 0x16 | uVar22 & 0x3fffff;
      }
      uVar17 = uVar22 & 0x3fffff;
      lVar12 = *(longlong *)
                (*(longlong *)((ulonglong)(uVar22 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38))
                + 0x20);
      if ((int)uVar17 < *(int *)(lVar12 + 0x30)) {
        uVar16 = (ulonglong)uVar17;
        if (*(int *)(lVar12 + 0x78) != 0) {
          uVar17 = *(uint *)(*(longlong *)(lVar12 + 0x70) + (ulonglong)uVar17 * 4);
        }
        if (uVar17 == 0xffffffff) {
          lVar12 = *(longlong *)(lVar12 + 0x28);
          lVar11 = uVar16 * 5;
        }
        else {
          lVar11 = (longlong)(int)uVar17 * 5;
          lVar12 = *(longlong *)(lVar12 + 0xc0);
        }
      }
      else {
        lVar11 = (longlong)(int)(uVar17 - *(int *)(lVar12 + 0x30)) * 5;
        lVar12 = *(longlong *)(lVar12 + 0xe0);
      }
      if ((*(byte *)(lVar12 + lVar11 * 4 + 0x10) & 0x20) != 0) {
        return 0;
      }
    }
  }
  local_res18[0] = uVar4 & 0x3fffff;
  if ((*(uint *)(lVar10 + lVar14 * 4 + 0xc) & 0x3fffff) == local_res18[0]) {
    return 0;
  }
  fVar59 = *(float *)(param_1 + 0xe);
  pfVar1 = (float *)(*(longlong *)(param_1[1] + 0x38) +
                    (longlong)*(int *)(lVar20 + uVar19 * 0x14) * 0x10);
  fVar56 = *pfVar1;
  fVar57 = pfVar1[1];
  local_208 = *(longlong *)pfVar1;
  fVar58 = pfVar1[2];
  plStack_200 = *(longlong **)(pfVar1 + 2);
  pfVar2 = (float *)(*(longlong *)(param_1[1] + 0x38) +
                    (longlong)*(int *)(lVar20 + 4 + uVar19 * 0x14) * 0x10);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  local_228 = *(longlong *)pfVar2;
  fVar8 = pfVar2[2];
  plStack_220 = *(longlong **)(pfVar2 + 2);
  if (0.0 <= fVar59) {
    fVar40 = fVar56 - fVar6;
    fVar42 = fVar57 - fVar7;
    fVar44 = fVar58 - fVar8;
    fVar48 = fVar57 - *(float *)((longlong)param_1 + 0x54);
    fVar24 = fVar40 * fVar40;
    fVar25 = fVar42 * fVar42;
    fVar26 = fVar44 * fVar44;
    fVar35 = (fVar56 - *(float *)(param_1 + 10)) * fVar40;
    fVar38 = fVar48 * fVar42;
    fVar39 = (fVar58 - *(float *)(param_1 + 0xb)) * fVar44;
    auVar47._0_4_ = fVar25 + fVar24 + fVar26;
    auVar47._4_4_ = fVar25 + fVar24 + fVar26;
    auVar47._8_4_ = fVar25 + fVar24 + fVar26;
    auVar47._12_4_ = fVar25 + fVar24 + fVar26;
    auVar29._0_4_ = fVar38 + fVar35 + fVar39;
    auVar29._4_4_ = fVar38 + fVar35 + fVar39;
    auVar29._8_4_ = fVar38 + fVar35 + fVar39;
    auVar29._12_4_ = fVar38 + fVar35 + fVar39;
    auVar29 = divps(auVar29,auVar47);
    auVar29 = minps(auVar29,_DAT_1499314a0);
    auVar29 = maxps(auVar29,ZEXT816(0));
    fVar24 = (fVar56 - *(float *)(param_1 + 10)) - auVar29._0_4_ * fVar40;
    fVar48 = fVar48 - auVar29._4_4_ * fVar42;
    fVar25 = (fVar58 - *(float *)(param_1 + 0xb)) - auVar29._8_4_ * fVar44;
    if (fVar59 * fVar59 < fVar48 * fVar48 + fVar24 * fVar24 + fVar25 * fVar25) {
      return 0;
    }
  }
  fVar59 = *(float *)(param_1 + 0x10);
  if (0.0 <= fVar59) {
    iVar23 = 0;
    fVar24 = fVar6 - fVar56;
    fVar25 = fVar7 - fVar57;
    fVar26 = fVar8 - fVar58;
    if (0 < (int)param_1[0xd]) {
      fVar35 = *(float *)(param_1 + 10);
      local_238 = param_1[10];
      fVar38 = *(float *)(param_1 + 0xb);
      lStack_230 = param_1[0xb];
      pfVar21 = (float *)param_1[0xc];
      lVar20 = 0;
      fVar39 = fVar56 - fVar35;
      fVar40 = fVar57 - *(float *)((longlong)param_1 + 0x54);
      fVar42 = fVar58 - fVar38;
      local_1e8 = fVar24 * fVar24;
      fStack_1e4 = fVar25 * fVar25;
      fStack_1e0 = fVar39 * fVar24;
      fStack_1dc = fVar40 * fVar25;
      local_248 = CONCAT44(*(float *)((longlong)param_1 + 0x84) *
                           *(float *)((longlong)param_1 + 0x84),fVar59 * fVar59);
      uStack_240 = CONCAT44(*(float *)((longlong)param_1 + 0x8c) *
                            *(float *)((longlong)param_1 + 0x8c),
                            *(float *)(param_1 + 0x11) * *(float *)(param_1 + 0x11));
      do {
        fVar53 = *pfVar21 - fVar35;
        fVar54 = pfVar21[1] - *(float *)((longlong)param_1 + 0x54);
        fVar55 = pfVar21[2] - fVar38;
        fVar28 = fVar54 * fVar24 - fVar25 * fVar53;
        fVar30 = fVar55 * fVar25 - fVar26 * fVar54;
        fVar31 = fVar53 * fVar26 - fVar24 * fVar55;
        fVar44 = fVar30 * fVar30;
        fVar48 = fVar31 * fVar31;
        fVar27 = fVar28 * fVar28;
        fVar49 = fVar48 + fVar44 + fVar27;
        fVar50 = fVar48 + fVar44 + fVar27;
        fVar51 = fVar48 + fVar44 + fVar27;
        if (fVar49 == 0.0) {
          auVar29 = ZEXT816(0);
        }
        else {
          auVar5._4_4_ = fVar50;
          auVar5._0_4_ = fVar49;
          auVar5._8_4_ = fVar51;
          auVar5._12_4_ = fVar48 + fVar44 + fVar27;
          auVar29 = divps(_DAT_14c6daca0,auVar5);
        }
        fVar44 = (fVar31 * fVar26 - fVar28 * fVar25) * fVar39;
        fVar48 = (fVar28 * fVar24 - fVar30 * fVar26) * fVar40;
        fVar27 = (fVar30 * fVar25 - fVar31 * fVar24) * fVar42;
        auVar46._0_4_ = (fVar48 + fVar44 + fVar27) * auVar29._0_4_;
        auVar46._4_4_ = (fVar48 + fVar44 + fVar27) * auVar29._4_4_;
        auVar46._8_4_ = (fVar48 + fVar44 + fVar27) * auVar29._8_4_;
        auVar46._12_4_ = (fVar48 + fVar44 + fVar27) * auVar29._12_4_;
        fVar44 = fVar24 * fVar53;
        fVar48 = fVar25 * fVar54;
        fVar27 = fVar26 * fVar55;
        auVar29 = minps(auVar46,_DAT_1499314a0);
        auVar47 = maxps(auVar29,ZEXT816(0));
        fVar41 = fVar48 + fVar44 + fVar27;
        fVar43 = fVar48 + fVar44 + fVar27;
        fVar45 = fVar48 + fVar44 + fVar27;
        fVar27 = fVar48 + fVar44 + fVar27;
        auVar36._0_4_ = fVar54 * fVar54 + fVar53 * fVar53 + fVar55 * fVar55;
        auVar36._4_4_ = fVar40 * fVar54 + fVar39 * fVar53 + fVar42 * fVar55;
        auVar36._8_4_ = fStack_1e4 + local_1e8 + fVar26 * fVar26;
        auVar36._12_4_ = fStack_1dc + fStack_1e0 + fVar42 * fVar26;
        auVar29 = divps(_DAT_14c6daca0,auVar36);
        fVar30 = (float)(~-(uint)(auVar36._0_4_ == 0.0) & auVar29._0_4_);
        fVar31 = (float)(~-(uint)(auVar36._8_4_ == 0.0) & auVar29._8_4_);
        fVar44 = (auVar47._0_4_ * fVar41 - auVar36._12_4_) * fVar31;
        fVar48 = (auVar47._4_4_ * fVar43 - auVar36._12_4_) * fVar31;
        auVar32._4_4_ = fVar48;
        auVar32._0_4_ = fVar44;
        fVar28 = (auVar47._8_4_ * fVar45 - auVar36._12_4_) * fVar31;
        auVar32._8_4_ = fVar28;
        auVar32._12_4_ = (auVar47._12_4_ * fVar27 - auVar36._12_4_) * fVar31;
        auVar29 = minps(auVar32,_DAT_1499314a0);
        auVar29 = maxps(auVar29,ZEXT816(0));
        fVar31 = auVar29._0_4_;
        fVar33 = auVar29._4_4_;
        fVar34 = auVar29._8_4_;
        uVar22 = -(uint)(fVar49 != 0.0 && fVar31 == fVar44);
        uVar17 = -(uint)(fVar50 != 0.0 && fVar33 == fVar48);
        uVar52 = -(uint)(fVar51 != 0.0 && fVar34 == fVar28);
        auVar37._0_4_ = (auVar36._4_4_ + fVar41 * fVar31) * fVar30;
        auVar37._4_4_ = (auVar36._4_4_ + fVar43 * fVar33) * fVar30;
        auVar37._8_4_ = (auVar36._4_4_ + fVar45 * fVar34) * fVar30;
        auVar37._12_4_ = (auVar36._4_4_ + fVar27 * auVar29._12_4_) * fVar30;
        auVar29 = minps(auVar37,_DAT_1499314a0);
        auVar29 = maxps(auVar29,ZEXT816(0));
        fVar44 = (fVar39 - (float)(~uVar22 & auVar29._0_4_ | (uint)auVar47._0_4_ & uVar22) * fVar53)
                 + fVar24 * fVar31;
        fVar48 = (fVar40 - (float)(~uVar17 & auVar29._4_4_ | (uint)auVar47._4_4_ & uVar17) * fVar54)
                 + fVar25 * fVar33;
        fVar27 = (fVar42 - (float)(~uVar52 & auVar29._8_4_ | (uint)auVar47._8_4_ & uVar52) * fVar55)
                 + fVar26 * fVar34;
        if (fVar48 * fVar48 + fVar44 * fVar44 + fVar27 * fVar27 <= fVar59 * fVar59) break;
        iVar23 = iVar23 + 1;
        lVar20 = lVar20 + 1;
        pfVar21 = pfVar21 + 4;
      } while (lVar20 < (int)param_1[0xd]);
    }
    if (iVar23 == (int)param_1[0xd]) {
      return 0;
    }
  }
  if (param_1[7] == 0) {
    return 1;
  }
  fVar56 = (fVar6 - fVar56) * _DAT_14c6dad90 + fVar56;
  fVar57 = (fVar7 - fVar57) * fRam000000014c6dad94 + fVar57;
  fVar58 = (fVar8 - fVar58) * fRam000000014c6dad98 + fVar58;
  fVar59 = (pfVar2[3] - pfVar1[3]) * fRam000000014c6dad9c + pfVar1[3];
  lVar20 = *(longlong *)((ulonglong)(uVar3 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38));
  local_1d8[0] = 0xffffffff;
  local_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  lVar12 = *(longlong *)(lVar20 + 0x20);
  iVar23 = *(int *)(lVar12 + 0x50);
  if ((int)local_res18[0] < *(int *)(lVar12 + 0x20)) {
    uVar22 = local_res18[0];
    if (*(int *)(lVar12 + 0x98) != 0) {
      uVar22 = *(uint *)(*(longlong *)(lVar12 + 0x90) + (ulonglong)local_res18[0] * 4);
    }
    if (uVar22 != 0xffffffff) {
      lVar10 = *(longlong *)(lVar12 + 0x120);
      goto LAB_144c6594a;
    }
    lVar10 = *(longlong *)(lVar12 + 0x48) + (longlong)(int)(iVar23 * local_res18[0]) * 4;
    lVar12 = lVar10 + (longlong)iVar23 * 4;
  }
  else {
    lVar10 = *(longlong *)(lVar12 + 0x140);
    uVar22 = local_res18[0] - *(int *)(lVar12 + 0x20);
LAB_144c6594a:
    lVar12 = lVar10 + ((longlong)(int)(uVar22 * iVar23) + (longlong)iVar23) * 4;
    lVar10 = lVar10 + (longlong)(int)(uVar22 * iVar23) * 4;
  }
  local_170 = FUN_144c64f60(lVar20,local_res18);
  lVar14 = *(longlong *)(lVar20 + 0x20);
  iVar23 = *(int *)(lVar14 + 0x60);
  if ((int)uVar18 < *(int *)(lVar14 + 0x30)) {
    uVar22 = uVar18;
    if (*(int *)(lVar14 + 0x78) != 0) {
      uVar22 = *(uint *)(*(longlong *)(lVar14 + 0x70) + uVar19 * 4);
    }
    if (uVar22 == 0xffffffff) {
      lVar11 = *(longlong *)(lVar14 + 0x58) + (longlong)(int)(iVar23 * uVar18) * 4;
      lVar14 = lVar11 + (longlong)iVar23 * 4;
      goto LAB_144c659e8;
    }
    lVar11 = *(longlong *)(lVar14 + 0x130);
  }
  else {
    lVar11 = *(longlong *)(lVar14 + 0x150);
    uVar22 = uVar18 - *(int *)(lVar14 + 0x30);
  }
  lVar14 = lVar11 + ((longlong)(int)(uVar22 * iVar23) + (longlong)iVar23) * 4;
  lVar11 = lVar11 + (longlong)(int)(uVar22 * iVar23) * 4;
LAB_144c659e8:
  local_res18[0] = uVar18;
  local_178 = uVar4;
  local_168 = lVar10;
  local_160 = lVar12;
  local_1a0 = FUN_144c46e20(lVar20,local_res18);
  local_208 = *param_1;
  local_1f8 = local_1d8;
  local_1f0 = 0x21;
  plStack_200 = param_1 + 3;
  local_1a8 = uVar3;
  local_198 = lVar11;
  local_190 = lVar14;
  local_188 = fVar56;
  fStack_184 = fVar57;
  fStack_180 = fVar58;
  fStack_17c = fVar59;
  cVar9 = (**(code **)(*(longlong *)param_1[7] + 0x28))((longlong *)param_1[7],&local_208);
  if (cVar9 == '\0') {
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
    return 0;
  }
  if ((char)param_1[5] == '\0') {
    local_res18[0] = uVar18;
    FUN_144c5ee50(lVar20,local_res20,local_res18);
    uVar3 = local_res20[0];
    local_238 = 0;
    lStack_230 = 0;
    local_res18[0] = local_res20[0] & 0x3fffff;
    uVar13 = FUN_144c44fc0(*(undefined8 *)
                            (*(longlong *)
                              ((ulonglong)(local_res20[0] >> 0x16) * 0x120 +
                              *(longlong *)(*param_1 + 0x38)) + 0x20),local_res18,&local_238);
    local_res18[0] = uVar18;
    FUN_144c65070(lVar20,local_res20,local_res18);
    local_248 = 0;
    uStack_240 = 0;
    local_res18[0] = local_res20[0] & 0x3fffff;
    local_120 = FUN_144c450c0(*(undefined8 *)
                               (*(longlong *)
                                 ((ulonglong)(local_res20[0] >> 0x16) * 0x120 +
                                 *(longlong *)(*param_1 + 0x38)) + 0x20),local_res18,&local_248);
    local_118 = local_248;
    local_e8 = local_238;
    local_110 = uStack_240;
    local_228 = *param_1;
    local_e0 = lStack_230;
    local_218 = local_158;
    local_158[0] = 0xffffffff;
    local_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_f8 = uVar3;
    local_128 = local_res20[0];
    local_210 = 0x21;
    plStack_220 = param_1 + 3;
    local_108 = fVar56;
    fStack_104 = fVar57;
    fStack_100 = fVar58;
    fStack_fc = fVar59;
    local_f0 = uVar13;
    cVar9 = (**(code **)(*(longlong *)param_1[7] + 0x28))((longlong *)param_1[7],&local_228);
    if (cVar9 == '\0') {
      return 0;
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return 1;
}



// FUNCTION 144c65bb0 FUN_144c65bb0 body=204 status=ok
// SIG undefined FUN_144c65bb0(void)

undefined4 * FUN_144c65bb0(longlong *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  
  uVar2 = (uint)(param_2 * -0x61c8864f) >> 0x18;
  uVar4 = *(ushort *)(param_1[2] + (ulonglong)uVar2 * 2);
  if (-1 < (short)uVar4) {
    do {
      puVar3 = (undefined4 *)((ulonglong)uVar4 * 0x10 + *param_1);
      if (puVar3[2] == param_2) {
        return puVar3;
      }
      uVar4 = *(ushort *)(param_1[1] + (ulonglong)uVar4 * 2);
    } while (-1 < (short)uVar4);
  }
  sVar1 = *(short *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10 + *param_1);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  puVar3[2] = param_2;
  *puVar3 = 0x7f7fffee;
  puVar3[1] = 0x7f7fffee;
  puVar3[3] = 0xffff;
  *(undefined2 *)(param_1[1] + (longlong)sVar1 * 2) =
       *(undefined2 *)(param_1[2] + (ulonglong)uVar2 * 2);
  *(short *)(param_1[2] + (ulonglong)uVar2 * 2) = sVar1;
  return puVar3;
}



// FUNCTION 144c65c80 FUN_144c65c80 body=3 status=ok
// SIG undefined FUN_144c65c80(void)

void FUN_144c65c80(void)

{
  return;
}



// FUNCTION 144c65c90 FUN_144c65c90 body=3 status=ok
// SIG undefined FUN_144c65c90(void)

void FUN_144c65c90(void)

{
  return;
}



// FUNCTION 144c65ca0 FUN_144c65ca0 body=71 status=ok
// SIG undefined FUN_144c65ca0(void)

undefined8 * FUN_144c65ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiGraphBuilder::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 144c65cf0 FUN_144c65cf0 body=156 status=ok
// SIG undefined FUN_144c65cf0(void)

void FUN_144c65cf0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0xc);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 4);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = hkaiGraphBuilder::vftable;
  return;
}



// FUNCTION 144c65d90 FUN_144c65d90 body=87 status=ok
// SIG undefined FUN_144c65d90(void)

undefined8 FUN_144c65d90(undefined8 param_1,ulonglong param_2)

{
  FUN_144c65cf0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144c65df0 FUN_144c65df0 body=334 status=ok
// SIG undefined FUN_144c65df0(void)

void FUN_144c65df0(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar4 = (uint *)param_1[3];
  if (puVar4 + (longlong)*(int *)(param_1 + 4) * 6 != puVar4) {
    puVar6 = puVar4 + (longlong)*(int *)(param_1 + 4) * 6 + 3;
    do {
      puVar1 = puVar6 + -6;
      puVar2 = puVar6 + -9;
      uVar5 = 0;
      uVar8 = 0;
      if (0 < (int)puVar6[-7]) {
        do {
          pfVar3 = (float *)(uVar5 + 8 + *(longlong *)puVar2);
          if ((0.0 < *pfVar3 || *pfVar3 == 0.0) && (*(longlong *)(uVar5 + *(longlong *)puVar2) != 0)
             ) {
            FUN_144b3f230();
          }
          uVar7 = (int)uVar8 + 1;
          uVar5 = uVar5 + 0x18;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < (int)puVar6[-7]);
      }
      puVar6[-7] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)puVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)puVar2,
                   (ulonglong)(*puVar1 & 0x7fffffff) * 0x18);
      }
      puVar2[0] = 0;
      puVar2[1] = 0;
      *puVar1 = 0x80000000;
      puVar6 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144c65f40 FUN_144c65f40 body=104 status=ok
// SIG undefined FUN_144c65f40(void)

void FUN_144c65f40(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144c65fb0 FUN_144c65fb0 body=490 status=ok
// SIG undefined FUN_144c65fb0(void)

void FUN_144c65fb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char *local_28;
  char *local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if ((*(int *)(param_1 + 0x10) == 0) || (lVar1 == 0)) {
    iVar2 = *(int *)(param_1 + 0x28);
    if (lVar1 == 0) goto LAB_144c660d9;
  }
  else {
    local_28 = "YtnearestNeighbors";
    local_20 = "";
    FUN_144be9d00(lVar1,&local_28);
    local_28 = "Wt";
    local_20 = "";
    FUN_144be9e30(lVar1,&local_28,param_1);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 0) {
    local_28 = "YtinitSeeding";
    local_20 = "";
    FUN_144be9d00(lVar1,&local_28);
    local_28 = "Wt";
    local_20 = "";
    FUN_144be9e30(lVar1,&local_28,param_1 + 0x18);
  }
  local_28 = "YtkMeans";
  local_20 = "";
  FUN_144be9d00(lVar1,&local_28);
LAB_144c660d9:
  if ((*(int *)(param_1 + 0x58) == 0) || (lVar1 == 0)) {
    iVar2 = *(int *)(param_1 + 0x70);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    local_28 = "YtclosestRep";
    local_20 = "";
    FUN_144be9d00(lVar1,&local_28);
    local_28 = "Wt";
    local_20 = "";
    FUN_144be9e30(lVar1,&local_28,param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x70);
  }
  if (iVar2 != 0) {
    local_28 = "YtupdateRep";
    local_20 = "";
    FUN_144be9d00(lVar1,&local_28);
    local_28 = "Wt";
    local_20 = "";
    FUN_144be9e30(lVar1,&local_28,param_1 + 0x60);
  }
  local_28 = "Wt";
  local_20 = "";
  FUN_144be9e30(lVar1,&local_28,param_1 + 0x30);
  return;
}



// FUNCTION 144c661a0 FUN_144c661a0 body=122 status=ok
// SIG undefined FUN_144c661a0(void)

void FUN_144c661a0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3)
    ;
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    puVar3 = (undefined8 *)*param_1;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *puVar3;
        }
        puVar3 = puVar3 + 1;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 144c66220 FUN_144c66220 body=502 status=ok
// SIG undefined FUN_144c66220(void)

undefined4
FUN_144c66220(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  longlong local_1a8;
  int local_1a0;
  uint local_19c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined1 local_e8 [64];
  undefined1 local_a8 [120];
  undefined4 local_30;
  
  FUN_144b40b30(local_208);
  puVar3 = (undefined8 *)FUN_144b40980(local_e8,param_3,*param_2);
  local_1e8 = *puVar3;
  uStack_1e0 = puVar3[1];
  local_1d8 = *(undefined4 *)(puVar3 + 2);
  local_1c8 = *(undefined4 *)(puVar3 + 4);
  uStack_1c4 = *(undefined4 *)((longlong)puVar3 + 0x24);
  uStack_1c0 = *(undefined4 *)(puVar3 + 5);
  uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0x2c);
  local_1b8 = *(undefined1 *)(puVar3 + 6);
  puVar3 = (undefined8 *)FUN_144b40980(local_e8,param_5,*param_4);
  iVar1 = local_1a0 + 1;
  if ((int)(local_19c & 0x7fffffff) < iVar1) {
    FUN_144c30e90(&local_1a8,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  puVar4 = (undefined8 *)((longlong)local_1a0 * 0x40 + local_1a8);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = puVar3[1];
    *puVar4 = *puVar3;
    puVar4[1] = uVar2;
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar3 + 2);
    uVar2 = puVar3[5];
    puVar4[4] = puVar3[4];
    puVar4[5] = uVar2;
    *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar3 + 6);
  }
  local_188 = *param_7;
  uStack_180 = param_7[1];
  local_178 = *param_6;
  local_170 = *(undefined8 *)(param_6 + 2);
  local_168 = *(undefined8 *)(param_6 + 4);
  local_160 = param_6[6];
  local_15c = param_6[7];
  local_158 = param_6[8];
  local_150 = *(undefined8 *)(param_6 + 10);
  local_148 = *(undefined1 *)(param_6 + 0xc);
  local_147 = *(undefined1 *)((longlong)param_6 + 0x31);
  local_146 = *(undefined1 *)((longlong)param_6 + 0x32);
  local_145 = *(undefined1 *)((longlong)param_6 + 0x33);
  local_144 = *(undefined1 *)(param_6 + 0xd);
  local_140 = param_6[0xe];
  local_13c = *(undefined1 *)(param_6 + 0xf);
  local_13b = *(undefined1 *)((longlong)param_6 + 0x3d);
  local_13a = *(undefined1 *)((longlong)param_6 + 0x3e);
  local_139 = *(undefined1 *)((longlong)param_6 + 0x3f);
  local_138 = *(undefined8 *)(param_6 + 0x10);
  uStack_130 = *(undefined8 *)(param_6 + 0x12);
  local_124 = *(undefined8 *)(param_6 + 0x15);
  local_11c = *(undefined8 *)(param_6 + 0x17);
  local_128 = param_6[0x14];
  local_1a0 = iVar1;
  FUN_144c2f3c0(local_208,param_8);
  local_146 = 0;
  FUN_144b40a10(local_a8);
  FUN_144b41050(*param_1,local_208,local_a8);
  FUN_144b40c40(local_a8);
  FUN_144b409a0(local_208);
  return local_30;
}



// FUNCTION 144c66420 FUN_144c66420 body=2055 status=ok
// SIG undefined FUN_144c66420(void)

void FUN_144c66420(longlong param_1,float *param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  short sVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  void *pvVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res8 [2];
  float *local_res10;
  longlong *local_res18;
  int local_3c8;
  int local_3c4;
  short local_3c0;
  short local_3be;
  longlong local_3b8;
  int local_3b0;
  uint local_3ac;
  longlong local_3a8 [2];
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  undefined4 local_380;
  uint local_37c;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined1 local_348 [4];
  undefined1 local_344 [4];
  ulonglong local_340;
  longlong local_338;
  longlong lStack_330;
  longlong local_328;
  longlong lStack_320;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  longlong local_2f8;
  longlong lStack_2f0;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_278 [32];
  undefined1 local_258 [16];
  undefined1 local_248 [256];
  undefined1 local_148 [272];
  
  local_res8[0] = *(float *)(param_1 + 0xb0);
  if (local_res8[0] < *param_2) {
    local_358 = *(float *)(param_1 + 0xc0);
    fStack_354 = *(float *)(param_1 + 0xc4);
    fStack_350 = *(float *)(param_1 + 200);
    fStack_34c = *(float *)(param_1 + 0xcc);
    local_res10 = param_2;
    local_res18 = param_3;
    local_2e8 = local_res8[0];
    fStack_2e4 = local_res8[0];
    fStack_2e0 = local_res8[0];
    fStack_2dc = local_res8[0];
    FUN_144c3e1d0(local_148);
    iVar18 = 0;
    local_res8[0] = 0.0;
    local_3a8[0] = 0;
    FUN_144c3f5c0(local_148,param_1,local_res8,local_3a8);
    FUN_144ca1a50(local_248);
    local_res8[0] = 0.0;
    FUN_144ca27c0(local_248,local_148,0,local_res8);
    FUN_144bea730(local_2b8);
    FUN_144bea730(local_2a0);
    local_res8[0] = *(float *)(param_1 + 0x20);
    local_288 = 0;
    local_280 = 0;
    if (0 < (int)local_res8[0]) {
      uVar13 = (ulonglong)_tls_index;
      local_3a8[0] = 0;
      pvVar17 = ThreadLocalStoragePointer;
      do {
        iVar16 = 0;
        lVar14 = *(longlong *)(param_1 + 0x18);
        local_3c8 = *(int *)(local_3a8[0] + lVar14);
        local_3c4 = *(int *)(local_3a8[0] + 4 + lVar14);
        local_3c0 = *(short *)(local_3a8[0] + 8 + lVar14);
        local_3be = *(short *)(local_3a8[0] + 10 + lVar14);
        lVar10 = (longlong)(*(int *)(param_1 + 0x78) * iVar18);
        lVar14 = *(longlong *)(param_1 + 0x58) + (lVar10 + *(int *)(param_1 + 0x78)) * 4;
        lVar10 = *(longlong *)(param_1 + 0x58) + lVar10 * 4;
        local_338 = lVar10;
        lStack_330 = lVar14;
        if ((param_3 == (longlong *)0x0) ||
           (local_398 = lVar10, lStack_390 = lVar14,
           cVar6 = (**(code **)(*param_3 + 0x18))(param_3,local_248,iVar18,&local_3c8,&local_398),
           cVar6 != '\0')) {
          sVar5 = local_3c0;
          lVar9 = *(longlong *)((longlong)pvVar17 + uVar13 * 8);
          local_388 = 0;
          local_380 = 0;
          local_3b8 = 0;
          local_3b0 = 0;
          local_3ac = 0x80000000;
          lVar12 = (longlong)local_3c0;
          local_37c = 0x80000000;
          if (*(char *)(lVar9 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = *(longlong *)(lVar9 + 0xf0);
          if (lVar8 == 0) {
            if (*(char *)(lVar9 + 0x114) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar8 = FUN_144b3f4a0();
            *(longlong *)(lVar9 + 0xf0) = lVar8;
          }
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
          local_378 = 0;
          if (*(longlong *)(lVar9 + 8) == 0) {
            local_378 = lVar9;
          }
          local_398 = lVar12 * 0x20;
          local_368 = local_398;
          if (local_378 == 0) {
            lVar9 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_398 >> 8),1),&local_398,0x40);
          }
          else {
            local_340 = local_398 + 0x3fU & 0xffffffffffffffc0;
            if (local_340 <= *(ulonglong *)(local_378 + 0x28)) {
              lVar9 = *(longlong *)(local_378 + 0x38);
              if (lVar9 + local_340 <= *(ulonglong *)(local_378 + 0x40)) {
                *(ulonglong *)(local_378 + 0x38) = lVar9 + local_340;
                goto LAB_144c667b8;
              }
            }
            lVar9 = FUN_144b454a0(local_378,&local_340);
          }
LAB_144c667b8:
          pfVar4 = local_res10;
          local_37c = (int)sVar5 | 0x80000000;
          local_398 = lVar10;
          lStack_390 = lVar14;
          local_388 = lVar9;
          local_370 = lVar9;
          FUN_144fe3e90(local_248,local_res18,iVar18,&local_3c8,&local_398,local_res10,&local_3b8,
                        &local_388,local_258,local_2b8);
          if (local_370 == local_388) {
            local_380 = 0;
          }
          if (local_378 == 0) {
            (*DAT_14c787678)(1);
          }
          else {
            uVar13 = local_368 + 0x3fU & 0xffffffffffffffc0;
            if ((*(ulonglong *)(local_378 + 0x28) < uVar13) ||
               (local_370 + uVar13 != *(longlong *)(local_378 + 0x38))) {
              FUN_144be8550();
            }
            else {
              *(longlong *)(local_378 + 0x38) = local_370;
              if (*(longlong *)(local_378 + 0x48) == local_370) {
                FUN_144be8430();
              }
            }
          }
          local_380 = 0;
          if ((-1 < (int)local_37c) && (local_388 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_388,(ulonglong)(local_37c & 0x7fffffff) << 5);
          }
          iVar16 = 0;
          if (0 < local_3c0) {
            do {
              uVar7 = local_3c8 + iVar16;
              lVar10 = (longlong)(int)uVar7;
              lVar14 = *(longlong *)(param_1 + 0x28);
              uVar3 = *(uint *)(lVar14 + 8 + lVar10 * 0x14);
              if ((uVar3 != 0xffffffff) && ((int)uVar7 < (int)(uVar3 & 0x3fffff))) {
                pfVar1 = (float *)(*(longlong *)(param_1 + 0x38) +
                                  (longlong)*(int *)(lVar14 + lVar10 * 0x14) * 0x10);
                fVar19 = local_358 * *pfVar1;
                fVar20 = fStack_354 * pfVar1[1];
                fVar22 = fStack_350 * pfVar1[2];
                pfVar2 = (float *)(*(longlong *)(param_1 + 0x38) +
                                  (longlong)*(int *)(lVar14 + 4 + lVar10 * 0x14) * 0x10);
                local_328 = local_3b8;
                lStack_390 = (longlong)local_3b0 * 0x20 + local_3b8;
                local_308 = *pfVar1 - (fVar22 + fVar20 + fVar19) * local_358;
                fStack_304 = pfVar1[1] - (fVar22 + fVar20 + fVar19) * fStack_354;
                fStack_300 = pfVar1[2] - (fVar22 + fVar20 + fVar19) * fStack_350;
                fStack_2fc = pfVar1[3] - (fVar22 + fVar20 + fVar19) * fStack_34c;
                fVar19 = local_358 * *pfVar2;
                fVar20 = fStack_354 * pfVar2[1];
                fVar22 = fStack_350 * pfVar2[2];
                local_398 = local_3b8;
                local_318 = *pfVar2 - (fVar22 + fVar20 + fVar19) * local_358;
                fStack_314 = pfVar2[1] - (fVar22 + fVar20 + fVar19) * fStack_354;
                fStack_310 = pfVar2[2] - (fVar22 + fVar20 + fVar19) * fStack_350;
                fStack_30c = pfVar2[3] - (fVar22 + fVar20 + fVar19) * fStack_34c;
                lStack_320 = lStack_390;
                iVar15 = FUN_144fda400(&local_308,&local_318,pfVar4,&local_2e8,&local_358,&local_398
                                       ,local_348,local_278);
                if (iVar15 == 0) {
                  *(uint *)(*param_4 + (longlong)((int)uVar7 >> 5) * 4) =
                       *(uint *)(*param_4 + (longlong)((int)uVar7 >> 5) * 4) &
                       ~(1 << (uVar7 & 0x1f));
                  uVar13 = (ulonglong)((uVar3 & 0x3fffff) >> 5);
                  *(uint *)(*param_4 + uVar13 * 4) =
                       *(uint *)(*param_4 + uVar13 * 4) & ~(1 << (uVar3 & 0x1f));
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_3c0);
          }
          iVar16 = 0;
          if (0 < local_3be) {
            do {
              uVar7 = local_3c4 + iVar16;
              lVar10 = (longlong)(int)uVar7;
              lVar14 = *(longlong *)(param_1 + 0x28);
              uVar3 = *(uint *)(lVar14 + 8 + lVar10 * 0x14);
              if (uVar3 != 0xffffffff) {
                pfVar1 = (float *)(*(longlong *)(param_1 + 0x38) +
                                  (longlong)*(int *)(lVar14 + lVar10 * 0x14) * 0x10);
                fVar19 = *pfVar1 * local_358;
                fVar22 = pfVar1[1] * fStack_354;
                fVar23 = pfVar1[2] * fStack_350;
                pfVar2 = (float *)(*(longlong *)(param_1 + 0x38) +
                                  (longlong)*(int *)(lVar14 + 4 + lVar10 * 0x14) * 0x10);
                local_2f8 = local_3b8;
                lStack_390 = (longlong)local_3b0 * 0x20 + local_3b8;
                fVar20 = local_358 * *pfVar2;
                fVar21 = fStack_354 * pfVar2[1];
                fVar24 = fStack_350 * pfVar2[2];
                local_2c8 = *pfVar1 - local_358 * (fVar23 + fVar22 + fVar19);
                fStack_2c4 = pfVar1[1] - fStack_354 * (fVar23 + fVar22 + fVar19);
                fStack_2c0 = pfVar1[2] - fStack_350 * (fVar23 + fVar22 + fVar19);
                fStack_2bc = pfVar1[3] - fStack_34c * (fVar23 + fVar22 + fVar19);
                local_398 = local_3b8;
                local_2d8 = *pfVar2 - local_358 * (fVar24 + fVar21 + fVar20);
                fStack_2d4 = pfVar2[1] - fStack_354 * (fVar24 + fVar21 + fVar20);
                fStack_2d0 = pfVar2[2] - fStack_350 * (fVar24 + fVar21 + fVar20);
                fStack_2cc = pfVar2[3] - fStack_34c * (fVar24 + fVar21 + fVar20);
                lStack_2f0 = lStack_390;
                iVar15 = FUN_144fda400(&local_2c8,&local_2d8,pfVar4,&local_2e8,&local_358,&local_398
                                       ,local_344,local_278);
                if (iVar15 == 0) {
                  *(uint *)(*param_4 + (longlong)((int)uVar7 >> 5) * 4) =
                       *(uint *)(*param_4 + (longlong)((int)uVar7 >> 5) * 4) &
                       ~(1 << (uVar7 & 0x1f));
                  uVar13 = (ulonglong)((uVar3 & 0x3fffff) >> 5);
                  *(uint *)(*param_4 + uVar13 * 4) =
                       *(uint *)(*param_4 + uVar13 * 4) & ~(1 << (uVar3 & 0x1f));
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_3be);
          }
          local_3b0 = 0;
          if ((-1 < (int)local_3ac) && (local_3b8 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_3b8,(ulonglong)(local_3ac & 0x7fffffff) << 5);
          }
          uVar13 = (ulonglong)_tls_index;
          local_3b8 = 0;
          local_3ac = 0x80000000;
          param_3 = local_res18;
          pvVar17 = ThreadLocalStoragePointer;
        }
        else {
          iVar15 = iVar16;
          if (0 < local_3c0) {
            do {
              uVar7 = local_3c8 + iVar15;
              uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar7 * 0x14);
              if ((uVar3 != 0xffffffff) && ((int)uVar7 < (int)(uVar3 & 0x3fffff))) {
                lVar14 = (longlong)(int)uVar7 >> 5;
                *(uint *)(*param_4 + lVar14 * 4) =
                     *(uint *)(*param_4 + lVar14 * 4) & ~(1 << (uVar7 & 0x1f));
                uVar11 = (ulonglong)((uVar3 & 0x3fffff) >> 5);
                *(uint *)(*param_4 + uVar11 * 4) =
                     *(uint *)(*param_4 + uVar11 * 4) & ~(1 << (uVar3 & 0x1f));
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < local_3c0);
          }
          if (0 < local_3be) {
            do {
              uVar7 = local_3c4 + iVar16;
              uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar7 * 0x14);
              if (uVar3 != 0xffffffff) {
                lVar14 = (longlong)(int)uVar7 >> 5;
                *(uint *)(*param_4 + lVar14 * 4) =
                     *(uint *)(*param_4 + lVar14 * 4) & ~(1 << (uVar7 & 0x1f));
                uVar11 = (ulonglong)((uVar3 & 0x3fffff) >> 5);
                *(uint *)(*param_4 + uVar11 * 4) =
                     *(uint *)(*param_4 + uVar11 * 4) & ~(1 << (uVar3 & 0x1f));
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < local_3be);
          }
        }
        iVar18 = iVar18 + 1;
        local_3a8[0] = local_3a8[0] + 0xc;
      } while (iVar18 < (int)local_res8[0]);
    }
    FUN_144ca1fa0(local_248);
    FUN_140c3e2cc(local_148);
  }
  return;
}



// FUNCTION 144c66c30 FUN_144c66c30 body=576 status=ok
// SIG undefined FUN_144c66c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c66c30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined1 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_78;
  int *local_70;
  longlong local_68;
  longlong local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar8 = (longlong)(int)uVar7;
      uVar4 = *(uint *)(lVar6 + 8 + lVar8 * 0x14);
      piVar1 = (int *)(lVar6 + lVar8 * 0x14);
      if ((uVar4 != 0xffffffff) && ((*(byte *)(piVar1 + 4) & 0x20) == 0)) {
        bVar9 = false;
        if (param_4 != (longlong *)0x0) {
          local_48 = *(uint *)(lVar6 + 0xc + (ulonglong)(uVar4 & 0x3fffff) * 0x14) & 0x3fffff;
          pfVar2 = (float *)(*(longlong *)(param_1 + 0x38) + (longlong)*piVar1 * 0x10);
          pfVar3 = (float *)(*(longlong *)(param_1 + 0x38) + (longlong)piVar1[1] * 0x10);
          local_a8[0] = 0xffffffff;
          local_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          lVar6 = (longlong)(int)(*(int *)(param_1 + 0x78) * local_48);
          local_58 = (*pfVar3 - *pfVar2) * _DAT_14c6dad90 + *pfVar2;
          fStack_54 = (pfVar3[1] - pfVar2[1]) * fRam000000014c6dad94 + pfVar2[1];
          fStack_50 = (pfVar3[2] - pfVar2[2]) * fRam000000014c6dad98 + pfVar2[2];
          fStack_4c = (pfVar3[3] - pfVar2[3]) * fRam000000014c6dad9c + pfVar2[3];
          local_40 = *(longlong *)(param_1 + 0x18) + (ulonglong)local_48 * 0xc;
          local_38 = *(longlong *)(param_1 + 0x58) + lVar6 * 4;
          local_30 = *(longlong *)(param_1 + 0x58) + (lVar6 + *(int *)(param_1 + 0x78)) * 4;
          local_b0 = 0x11;
          lVar6 = (longlong)(int)(*(int *)(param_1 + 0x7c) * uVar7);
          local_68 = *(longlong *)(param_1 + 0x68) + lVar6 * 4;
          local_60 = *(longlong *)(param_1 + 0x68) + (lVar6 + *(int *)(param_1 + 0x7c)) * 4;
          local_b8 = local_a8;
          local_c8 = param_2;
          local_c0 = param_3;
          local_78 = uVar7;
          local_70 = piVar1;
          cVar5 = (**(code **)(*param_4 + 0x28))(param_4,&local_c8);
          bVar9 = cVar5 == '\0';
        }
        if (param_5 == (longlong *)0x0) {
          if (!bVar9) goto LAB_144c66e2f;
        }
        else if (!bVar9) {
          lVar6 = (longlong)(int)(*(int *)(param_1 + 0x7c) * uVar7);
          local_d8 = *(longlong *)(param_1 + 0x68) + lVar6 * 4;
          local_d0 = *(longlong *)(param_1 + 0x68) + (lVar6 + *(int *)(param_1 + 0x7c)) * 4;
          cVar5 = (**(code **)(*param_5 + 0x20))(param_5,param_2,uVar7,piVar1,&local_d8);
          if (cVar5 != '\0') goto LAB_144c66e2f;
        }
        *(uint *)(*param_6 + (lVar8 >> 5) * 4) =
             *(uint *)(*param_6 + (lVar8 >> 5) * 4) & ~(1 << (uVar7 & 0x1f));
      }
LAB_144c66e2f:
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 144c66e70 FUN_144c66e70 body=579 status=ok
// SIG undefined FUN_144c66e70(void)

void FUN_144c66e70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  undefined1 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_48;
  int *local_40;
  longlong local_38;
  longlong local_30;
  
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar9 * 0xc);
      bVar10 = false;
      if (param_4 != (longlong *)0x0) {
        local_a0 = 0;
        local_70 = 0;
        local_a8[0] = 0xffffffff;
        local_98 = 0;
        uStack_90 = 0;
        local_78 = 0xffffffff;
        local_68 = 0;
        uStack_60 = 0;
        lVar7 = (longlong)(int)(*(int *)(param_1 + 0x78) * uVar9);
        local_38 = *(longlong *)(param_1 + 0x58) + lVar7 * 4;
        local_b0 = 0x11;
        local_30 = *(longlong *)(param_1 + 0x58) + (lVar7 + *(int *)(param_1 + 0x78)) * 4;
        local_b8 = local_a8;
        local_c8 = param_2;
        local_c0 = param_3;
        local_48 = uVar9;
        local_40 = piVar1;
        cVar4 = (**(code **)(*param_4 + 0x28))(param_4);
        bVar10 = cVar4 == '\0';
      }
      if (param_5 == (longlong *)0x0) {
        if (bVar10) goto LAB_144c66fe2;
      }
      else {
        if (!bVar10) {
          lVar7 = (longlong)(int)(*(int *)(param_1 + 0x78) * uVar9);
          local_d8 = *(longlong *)(param_1 + 0x58) + lVar7 * 4;
          local_d0 = *(longlong *)(param_1 + 0x58) + (lVar7 + *(int *)(param_1 + 0x78)) * 4;
          cVar4 = (**(code **)(*param_5 + 0x18))(param_5,param_2,uVar9,piVar1,&local_d8);
          if (cVar4 != '\0') goto LAB_144c67073;
        }
LAB_144c66fe2:
        puVar2 = (uint *)(*param_7 + ((longlong)(int)uVar9 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (uVar9 & 0x1f));
        iVar6 = 0;
        if (0 < (short)piVar1[2]) {
          do {
            uVar5 = *piVar1 + iVar6;
            uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)(int)uVar5 * 0x14);
            if (uVar3 != 0xffffffff) {
              puVar2 = (uint *)(*param_6 + ((longlong)(int)uVar5 >> 5) * 4);
              *puVar2 = *puVar2 & ~(1 << (uVar5 & 0x1f));
              uVar8 = (ulonglong)((uVar3 & 0x3fffff) >> 5);
              *(uint *)(*param_6 + uVar8 * 4) =
                   *(uint *)(*param_6 + uVar8 * 4) & ~(1 << (uVar3 & 0x1f));
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (short)piVar1[2]);
        }
      }
LAB_144c67073:
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 144c670c0 FUN_144c670c0 body=1076 status=ok
// SIG undefined FUN_144c670c0(void)

void FUN_144c670c0(longlong param_1,undefined8 *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_XMM3 [16];
  undefined1 local_res8 [8];
  int local_res10;
  int local_198;
  uint *local_190;
  int local_188;
  uint local_184;
  longlong local_180;
  int local_178;
  uint local_174;
  uint *local_170;
  uint *local_168;
  int local_160;
  uint local_15c;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  uint local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  uint *local_e8;
  uint local_e0;
  undefined1 local_d8 [160];
  
  FUN_144c635c0(param_3,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20),0x49742400);
  puVar10 = (uint *)*param_2;
  iVar12 = 0;
  iVar15 = (int)(param_2[1] - (longlong)puVar10 >> 2);
  puVar11 = puVar10;
  local_170 = puVar10;
  if (0 < iVar15) {
    do {
      in_XMM3 = ZEXT816(0);
      FUN_144c63750(param_3,*puVar11,*puVar11);
      iVar12 = iVar12 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar12 < iVar15);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 0x80000000;
  local_190 = (uint *)0x0;
  local_188 = 0;
  local_184 = 0x80000000;
  FUN_14039ab22(&local_180,&PTR_vftable_14c6e47c0,0xb00);
  local_res10 = local_178;
  if (local_178 != 0xb00) {
    local_res10 = 0xb00;
  }
  FUN_14039ab22(&local_190,&PTR_vftable_14c6e47c0,0x400);
  lVar7 = local_180;
  iVar12 = local_188;
  if (local_188 != 0x400) {
    iVar12 = 0x400;
  }
  local_198 = 0;
  if (0 < iVar15) {
    local_f0 = (ulonglong)(longlong)iVar12 >> 3;
    do {
      uVar14 = 0;
      pfVar2 = *(float **)(param_1 + 0x90);
      uVar1 = *puVar10;
      local_15c = (uint)local_f0;
      uVar13 = local_f0 & 0xffffffff;
      fVar17 = *pfVar2;
      fVar18 = pfVar2[1];
      fVar19 = pfVar2[2];
      local_158 = 0;
      lStack_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_11c = 0x3f800000;
      local_128 = 0xffffffff;
      local_124 = 3.40282e+38;
      local_120 = 0x7f7fffee;
      local_138 = 0x7f7fffee;
      local_134 = 0x7f7fffee;
      local_130 = 0xffffffff;
      local_12c = 0xffff;
      local_168 = local_190;
      local_e8 = param_3;
      local_e0 = uVar1;
      if (0x200 < local_res10) {
        local_148 = lVar7;
        local_158 = lVar7 + 0x200;
        uVar9 = (uint)((ulonglong)(longlong)(local_res10 + -0x200) / 0x12);
        if ((-1 < (int)uVar9) && (uVar14 = uVar9, 0x8000 < (int)uVar9)) {
          uVar14 = 0x8000;
        }
        local_140 = (ulonglong)uVar14;
        lStack_150 = (int)(uVar14 << 4) + local_158;
        if (lVar7 != 0) {
          FUN_144bfb550(lVar7,0xffffffff,0x80);
          FUN_144bfb550(lStack_150,0xffffffff,
                        (longlong)((int)(uVar14 * 2 + ((int)(uVar14 * 2) >> 0x1f & 3U)) >> 2));
        }
      }
      local_11c = 0;
      puVar8 = (undefined4 *)FUN_144c65bb0(&local_158,uVar1);
      *puVar8 = 0;
      pfVar2 = (float *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar1 & 0x3fffff) * 0x10);
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      *(ushort *)((longlong)puVar8 + 0xe) = *(ushort *)((longlong)puVar8 + 0xe) | 5;
      fVar17 = (fVar4 - fVar17) * (fVar4 - fVar17);
      fVar18 = (fVar5 - fVar18) * (fVar5 - fVar18);
      fVar19 = (fVar6 - fVar19) * (fVar6 - fVar19);
      auVar3._4_4_ = fVar19 + fVar18 + fVar17;
      auVar3._0_4_ = fVar19 + fVar18 + fVar17;
      auVar3._8_4_ = fVar19 + fVar18 + fVar17;
      auVar3._12_4_ = fVar19 + fVar18 + fVar17;
      in_XMM3 = sqrtps(in_XMM3,auVar3);
      fVar17 = in_XMM3._0_4_;
      puVar8[1] = fVar17;
      if (fVar17 < local_124) {
        local_128 = uVar1;
        local_124 = fVar17;
      }
      *(longlong **)(param_1 + 0x40) = &local_158;
      plVar16 = (longlong *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(param_3 + 2));
      iVar12 = FUN_144c63500(param_3,plVar16,uVar1 & 0x3fffff,local_res8);
      puVar10 = param_3;
      if (iVar12 != -1) {
        puVar10 = (uint *)((longlong)iVar12 * 8 + 4 + *plVar16);
      }
      local_160 = 1;
      local_190[1] = *puVar10;
      *local_190 = uVar1;
      if (0 < param_4) {
        while ((local_160 != 0 && (local_160 < (int)uVar13))) {
          if ((int)local_140 <= local_140._4_4_) break;
          FUN_144c68970(local_f8,param_1,param_1,&local_168,&local_158,local_res8,local_d8,&local_e8
                        ,param_1);
          uVar13 = (ulonglong)local_15c;
        }
      }
      local_198 = local_198 + 1;
      puVar10 = local_170 + 1;
      local_170 = puVar10;
    } while (local_198 < iVar15);
  }
  if ((-1 < (int)local_184) && (local_190 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_190,local_184 & 0x7fffffff);
  }
  if ((-1 < (int)local_174) && (lVar7 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,lVar7,local_174 & 0x7fffffff)
    ;
  }
  return;
}



// FUNCTION 144c67500 FUN_144c67500 body=1094 status=ok
// SIG undefined FUN_144c67500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144c67500(longlong param_1,longlong *param_2,int **param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  float *pfVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 in_XMM3 [16];
  uint local_c4;
  longlong local_c0;
  int local_b8;
  uint local_b4;
  int *local_b0;
  undefined4 local_a8;
  uint local_a4;
  longlong local_a0;
  int local_98;
  uint local_94;
  float *local_90;
  int local_88;
  uint local_84;
  longlong local_80;
  int *local_78;
  longlong local_70;
  
  piVar15 = (int *)0x0;
  iVar3 = *(int *)(param_3 + 1);
  lVar20 = *param_2;
  lVar19 = param_2[1];
  pfVar22 = (float *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_c4 = 0x80000000;
  local_b4 = 0x80000000;
  local_90 = (float *)0x0;
  local_88 = 0;
  local_84 = 0x80000000;
  if (iVar3 < 1) {
LAB_144c675cc:
    lVar16 = local_c0;
    if (iVar3 < 1) goto LAB_144c67625;
  }
  else {
    FUN_141807aa8(&local_c0,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    if (iVar3 <= local_b8) goto LAB_144c675cc;
    if (iVar3 - local_b8 < 1) goto LAB_144c675cc;
    uVar13 = (ulonglong)(uint)(iVar3 - local_b8);
    puVar12 = (undefined4 *)(local_c0 + (longlong)local_b8 * 4);
    do {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = 0;
      }
      uVar13 = uVar13 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar13 != 0);
  }
  lVar16 = local_c0;
  FUN_1418055da(&local_90,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  pfVar22 = local_90;
  if (local_88 < iVar3) {
    if (0 < iVar3 - local_88) {
      uVar13 = (ulonglong)(uint)(iVar3 - local_88);
      pfVar10 = local_90 + (longlong)local_88 * 4;
      do {
        if (pfVar10 != (float *)0x0) {
          pfVar10[0] = 0.0;
          pfVar10[1] = 0.0;
          pfVar10[2] = 0.0;
          pfVar10[3] = 0.0;
        }
        uVar13 = uVar13 - 1;
        pfVar10 = pfVar10 + 4;
      } while (uVar13 != 0);
    }
  }
LAB_144c67625:
  iVar21 = (int)(lVar19 - lVar20 >> 2);
  lVar19 = (longlong)iVar21;
  piVar11 = piVar15;
  if (0 < iVar21) {
    do {
      lVar17 = (longlong)*(int *)(*param_4 + (longlong)piVar11 * 4);
      piVar18 = (int *)((longlong)piVar11 + 1);
      pfVar10 = (float *)(*(longlong *)(param_1 + 0x90) +
                         (ulonglong)(*(uint *)(lVar20 + (longlong)piVar11 * 4) & 0x3fffff) * 0x10);
      fVar24 = pfVar10[1];
      fVar25 = pfVar10[2];
      fVar26 = pfVar10[3];
      pfVar2 = pfVar22 + lVar17 * 4;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar1 = pfVar22 + lVar17 * 4;
      *pfVar1 = *pfVar10 + *pfVar2;
      pfVar1[1] = fVar24 + fVar7;
      pfVar1[2] = fVar25 + fVar8;
      pfVar1[3] = fVar26 + fVar9;
      piVar11 = (int *)(lVar16 + lVar17 * 4);
      *piVar11 = *piVar11 + 1;
      piVar11 = piVar18;
    } while ((longlong)piVar18 < lVar19);
  }
  lVar20 = (longlong)iVar3;
  pfVar10 = pfVar22;
  piVar11 = piVar15;
  if (0 < iVar3) {
    do {
      fVar24 = (float)*(int *)(lVar16 + (longlong)piVar11 * 4);
      piVar11 = (int *)((longlong)piVar11 + 1);
      auVar23._4_4_ = fVar24;
      auVar23._0_4_ = fVar24;
      auVar23._8_4_ = fVar24;
      auVar23._12_4_ = fVar24;
      auVar23 = divps(_DAT_14c6daca0,auVar23);
      *pfVar10 = auVar23._0_4_ * *pfVar10;
      pfVar10[1] = auVar23._4_4_ * pfVar10[1];
      pfVar10[2] = auVar23._8_4_ * pfVar10[2];
      pfVar10[3] = auVar23._12_4_ * pfVar10[3];
      pfVar10 = pfVar10 + 4;
    } while ((longlong)piVar11 < lVar20);
  }
  local_a0 = 0;
  local_98 = 0;
  iVar21 = *(int *)(param_3 + 1);
  local_94 = 0x80000000;
  local_70 = lVar20;
  if (0 < iVar21) {
    FUN_144c2b610(&local_a0,&PTR_vftable_14c6e47c0,(longlong)iVar21);
    if (local_98 < iVar21) {
      if (0 < iVar21 - local_98) {
        uVar13 = (ulonglong)(uint)(iVar21 - local_98);
        puVar12 = (undefined4 *)(local_a0 + (longlong)local_98 * 4);
        do {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = 0x7f7fffee;
          }
          uVar13 = uVar13 - 1;
          puVar12 = puVar12 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  lVar17 = local_a0;
  local_b0 = (int *)0x0;
  local_a8 = 0;
  local_a4 = 0x80000000;
  piVar11 = piVar15;
  if (param_3 != &local_b0) {
    local_80 = (longlong)*(int *)(param_3 + 1);
    local_78 = *param_3;
    if (0 < *(int *)(param_3 + 1)) {
      FUN_144c6c5b0(&local_b0,&PTR_vftable_14c6e47c0,local_80);
    }
    local_c4 = local_a4;
    piVar11 = local_b0;
    FUN_144b3d470(local_b0,local_78,local_80 * 4);
  }
  if (0 < lVar19) {
    lVar5 = *param_2;
    piVar18 = piVar15;
    do {
      iVar21 = *(int *)(*param_4 + (longlong)piVar18 * 4);
      lVar20 = (longlong)iVar21;
      if (iVar21 != -1) {
        uVar4 = *(uint *)(lVar5 + (longlong)piVar18 * 4);
        pfVar10 = pfVar22 + lVar20 * 4;
        pfVar2 = (float *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar4 & 0x3fffff) * 0x10);
        fVar24 = (*pfVar10 - *pfVar2) * (*pfVar10 - *pfVar2);
        fVar25 = (pfVar10[1] - pfVar2[1]) * (pfVar10[1] - pfVar2[1]);
        fVar26 = (pfVar10[2] - pfVar2[2]) * (pfVar10[2] - pfVar2[2]);
        auVar6._4_4_ = fVar26 + fVar25 + fVar24;
        auVar6._0_4_ = fVar26 + fVar25 + fVar24;
        auVar6._8_4_ = fVar26 + fVar25 + fVar24;
        auVar6._12_4_ = fVar26 + fVar25 + fVar24;
        in_XMM3 = sqrtps(in_XMM3,auVar6);
        if (in_XMM3._0_4_ < *(float *)(lVar17 + lVar20 * 4)) {
          (*param_3)[lVar20] = uVar4;
          *(float *)(lVar17 + lVar20 * 4) = in_XMM3._0_4_;
        }
      }
      piVar18 = (int *)((longlong)piVar18 + 1);
      lVar16 = local_c0;
      lVar20 = local_70;
      piVar11 = local_b0;
    } while ((longlong)piVar18 < lVar19);
  }
  if (0 < iVar3) {
    piVar18 = piVar11;
    piVar14 = piVar15;
    do {
      if (*(int *)(((longlong)*param_3 - (longlong)piVar11) + (longlong)piVar18) != *piVar18) {
        piVar15 = (int *)&DAT_00000001;
        break;
      }
      piVar14 = (int *)((longlong)piVar14 + 1);
      piVar18 = piVar18 + 1;
    } while ((longlong)piVar14 < lVar20);
  }
  if ((-1 < (int)local_c4) && (piVar11 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,piVar11,(ulonglong)(local_c4 & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_94) && (lVar17 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar17,(ulonglong)(local_94 & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_84) && (pfVar22 != (float *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,pfVar22,(ulonglong)(local_84 & 0x7fffffff) << 4);
  }
  if ((-1 < (int)local_b4) && (lVar16 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar16,(ulonglong)(local_b4 & 0x7fffffff) << 2);
  }
  return piVar15;
}



// FUNCTION 144c67950 FUN_144c67950 body=838 status=ok
// SIG undefined FUN_144c67950(void)

void FUN_144c67950(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint local_98;
  longlong local_90;
  int local_88;
  uint local_84;
  longlong local_80;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int *local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  local_50 = (int *)0x0;
  local_48 = 0;
  local_44 = 0x80000000;
  FUN_144c69ff0(&local_6c,param_1,&local_50,param_3,param_4);
  if (0 < (int)param_2[2]) {
    local_68 = 0;
    local_90 = 0;
    local_84 = 0x80000000;
    local_88 = 0;
    if (0 < (int)param_4[1]) {
      FUN_144c584b0(&local_90,&PTR_vftable_14c6e47a0,(longlong)(int)param_4[1]);
      local_68 = local_90;
    }
    local_98 = local_84;
    iVar6 = local_88;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0x80000000;
    local_90 = local_68;
    if (0 < (int)param_3[1]) {
      FUN_1401f86b2(&local_80,&PTR_vftable_14c6e47a0,(longlong)(int)param_3[1]);
    }
    local_6c = 0;
    local_70 = 0;
    lVar11 = local_80;
    uVar9 = local_74;
    if (0 < (int)param_4[1]) {
      lVar8 = 0;
      local_60 = 0;
      local_58 = 0;
      iVar5 = local_78;
      bVar3 = false;
      do {
        local_50 = (int *)(local_58 + *param_4);
        if ((*(uint *)(*param_2 + (longlong)(*local_50 >> 5) * 4) >> ((byte)*local_50 & 0x1f) & 1)
            != 0) {
          iVar10 = iVar6 + 1;
          if ((int)(local_98 & 0x7fffffff) < iVar10) {
            FUN_144c584b0(&local_90,&PTR_vftable_14c6e47a0,(longlong)iVar10);
            local_98 = local_84;
            local_68 = local_90;
            iVar6 = local_88;
          }
          piVar1 = (int *)(local_68 + (longlong)iVar6 * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = *local_50;
          }
          local_88 = iVar10;
          iVar7 = iVar5;
          if (!bVar3) {
            iVar7 = iVar5 + 1;
            if ((int)(uVar9 & 0x7fffffff) < iVar7) {
              FUN_1401f86b2(&local_80,&PTR_vftable_14c6e47a0,(longlong)iVar7);
              lVar11 = local_80;
              uVar9 = local_74;
              iVar5 = local_78;
            }
            puVar2 = (undefined4 *)(lVar11 + (longlong)iVar5 * 4);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
            }
            bVar3 = true;
            local_78 = iVar7;
          }
          piVar1 = (int *)(lVar11 + (longlong)(iVar7 + -1) * 4);
          *piVar1 = *piVar1 + 1;
          lVar8 = local_60;
          iVar6 = iVar10;
          iVar5 = iVar7;
        }
        iVar7 = local_6c + 1;
        iVar10 = *(int *)(lVar8 + *param_3);
        if (iVar10 <= iVar7) {
          lVar8 = lVar8 + 4;
          local_60 = lVar8;
        }
        local_70 = local_70 + 1;
        local_58 = local_58 + 4;
        local_6c = 0;
        if (iVar7 < iVar10) {
          local_6c = iVar7;
        }
        bVar4 = false;
        if (iVar7 < iVar10) {
          bVar4 = bVar3;
        }
        bVar3 = bVar4;
      } while (local_70 < (int)param_4[1]);
    }
    lVar8 = local_68;
    if (&local_90 != param_4) {
      FUN_144c52690(param_4,&PTR_vftable_14c6e47a0);
      FUN_144c52690(&local_90,&PTR_vftable_14c6e47a0);
      lVar8 = *param_4;
      *param_4 = local_90;
      local_98 = *(uint *)((longlong)param_4 + 0xc);
      *(int *)(param_4 + 1) = local_88;
      *(uint *)((longlong)param_4 + 0xc) = local_84;
    }
    if (&local_80 != param_3) {
      FUN_143821c08(param_3,&PTR_vftable_14c6e47a0);
      FUN_143821c08(&local_80,&PTR_vftable_14c6e47a0);
      lVar11 = *param_3;
      *param_3 = local_80;
      uVar9 = *(uint *)((longlong)param_3 + 0xc);
      *(int *)(param_3 + 1) = local_78;
      *(uint *)((longlong)param_3 + 0xc) = local_74;
    }
    if ((-1 < (int)uVar9) && (lVar11 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar11,(ulonglong)(uVar9 & 0x7fffffff) << 2);
    }
    if ((-1 < (int)local_98) && (lVar8 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar8,(ulonglong)(local_98 & 0x7fffffff) << 2);
    }
  }
  return;
}



// FUNCTION 144c67ca0 FUN_144c67ca0 body=3274 status=ok
// SIG undefined FUN_144c67ca0(void)

void FUN_144c67ca0(longlong param_1,undefined8 param_2,int param_3,longlong *param_4,
                  longlong *param_5,undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  char *pcVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  char cVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  char *pcVar26;
  uint uVar27;
  char *pcVar28;
  longlong *plVar29;
  longlong lVar30;
  uint uVar31;
  char *pcVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 unaff_XMM6 [16];
  float fVar36;
  undefined1 local_res18;
  uint *local_2b8;
  uint local_2b0;
  uint local_2ac;
  uint *local_2a8;
  int local_2a0;
  uint local_29c;
  int local_298;
  int local_294;
  int local_290;
  char *local_288;
  char *pcStack_280;
  char *local_278;
  char *pcStack_270;
  ulonglong local_268;
  char *local_260;
  char *local_258;
  undefined8 uStack_250;
  longlong local_248;
  int local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  int local_230;
  uint *local_228;
  float local_220 [2];
  longlong *local_218;
  int local_210;
  uint local_20c;
  undefined4 local_200;
  undefined4 local_1fc;
  uint *local_1f8;
  char *local_1f0;
  longlong local_1e8;
  undefined1 *local_1e0;
  undefined1 local_1d8 [4];
  uint local_1d4;
  longlong local_1d0;
  int local_1c8;
  char *local_1b8;
  char *pcStack_1b0;
  longlong local_1a8;
  int local_1a0;
  char *local_198;
  char *pcStack_190;
  longlong local_188;
  int local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  char *pcStack_170;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  undefined1 local_150 [8];
  longlong local_148;
  undefined1 local_140 [8];
  longlong local_138;
  undefined1 local_130 [8];
  longlong local_128;
  undefined1 *local_120;
  undefined1 local_118 [8];
  longlong local_110;
  int local_108;
  char local_f8 [24];
  char local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [80];
  
  iVar11 = *(int *)(*(longlong *)(param_1 + 8) + 0x20);
  if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar11 / param_3) {
    FUN_144c584b0(param_5,&PTR_vftable_14c6e47a0,(longlong)(iVar11 / param_3));
  }
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar11) {
    FUN_144c6c2d0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar19 = (int)param_4[1];
  if (iVar19 < iVar11) {
    *(int *)(param_4 + 1) = iVar11;
    if (0 < iVar11 - iVar19) {
      uVar17 = (ulonglong)(uint)(iVar11 - iVar19);
      puVar21 = (undefined4 *)(*param_4 + (longlong)iVar19 * 4);
      do {
        if (puVar21 != (undefined4 *)0x0) {
          *puVar21 = 0xffffffff;
        }
        uVar17 = uVar17 - 1;
        puVar21 = puVar21 + 1;
      } while (uVar17 != 0);
    }
  }
  else if (iVar11 < iVar19) {
    *(int *)(param_4 + 1) = iVar11;
  }
  lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar16 = *(char *)(lVar30 + 0x114);
  if (cVar16 == '\0') {
    __dyn_tls_on_demand_init();
    cVar16 = *(char *)(lVar30 + 0x114);
  }
  lVar13 = *(longlong *)(lVar30 + 0xf0);
  if (lVar13 == 0) {
    if (cVar16 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar30 + 0xf0) = lVar13;
  }
  lVar13 = *(longlong *)(lVar13 + 0x3e0);
  local_278 = "StregionCount";
  pcStack_270 = "";
  local_258 = "LtgenerateClusters";
  uStack_250 = "";
  local_158 = lVar13;
  if (lVar13 != 0) {
    local_288 = "StregionCount";
    pcStack_280 = "";
    local_178 = 0x49995548;
    uStack_174 = 1;
    pcStack_170 = "";
    FUN_144be9870(lVar13,&local_178,&local_288);
  }
  iVar11 = 0;
  local_23c = 0x80000000;
  local_248 = 0;
  local_240 = 0;
  local_258 = (char *)0x0;
  uStack_250 = (char *)0x8000000000000000;
  FUN_144c67950(param_1,param_2,&local_248,&local_258);
  local_200 = param_6;
  local_1fc = param_6;
  local_278 = "Stregions";
  pcStack_270 = "";
  if (*(char *)(lVar30 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)(lVar30 + 0xf0);
  if (lVar14 == 0) {
    if (*(char *)(lVar30 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar30 + 0xf0) = lVar14;
  }
  if (*(longlong *)(lVar14 + 0x3e0) != 0) {
    local_288 = local_278;
    pcStack_280 = pcStack_270;
    FUN_144be99f0(*(longlong *)(lVar14 + 0x3e0),&local_288);
  }
  local_290 = 0;
  local_1e8 = 0;
  if (0 < local_240) {
    local_res18 = (undefined1)param_3;
    local_230 = param_3 * 6;
    do {
      lVar30 = local_1e8;
      iVar19 = local_230;
      FUN_144bfbef0(local_f8,0,0x78);
      local_1a0 = 1;
      local_294 = *(int *)(local_248 + lVar30 * 4);
      lVar30 = (longlong)local_294;
      local_218 = (longlong *)0x0;
      local_210 = 0;
      local_20c = 0x80000000;
      uVar31 = (local_294 + -1) / param_3 + 1;
      pcVar28 = local_258 + (longlong)iVar11 * 4;
      local_1b8 = local_f8;
      local_278 = pcVar28;
      pcStack_270 = pcVar28 + lVar30 * 4;
      local_238 = uVar31;
      FUN_144bea720(&pcStack_1b0,(longlong)(local_294 + -1) % (longlong)param_3 & 0xffffffff);
      pcVar8 = pcStack_270;
      pcVar7 = local_278;
      local_198 = local_278;
      pcStack_190 = pcStack_270;
      FUN_144c670c0(param_1,&local_198,local_220,iVar19);
      if (local_1a0 != 0) {
        FUN_144bea720(local_150);
        pcVar32 = local_1b8;
        local_148 = local_148 - local_1a8;
        *(longlong *)(local_1b8 + 8) = *(longlong *)(local_1b8 + 8) + local_148;
        *(int *)(pcVar32 + 0x10) = *(int *)(pcVar32 + 0x10) + 1;
      }
      local_198 = local_e0;
      local_2b8 = (uint *)0x0;
      local_2b0 = 0;
      local_2ac = 0x80000000;
      local_180 = 1;
      FUN_144bea720(&pcStack_190);
      uVar17 = (longlong)(pcVar28 + lVar30 * 4) - (longlong)pcVar28 >> 2;
      uVar12 = (uint)uVar17;
      puVar22 = (uint *)0x0;
      local_268 = uVar17;
      if (0 < (int)uVar12) {
        FUN_144c6c5b0(&local_2b8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar12);
        puVar22 = local_2b8;
      }
      lVar30 = (longlong)(int)uVar12 * 4;
      FUN_144b3d470(puVar22,pcVar28,lVar30);
      uVar25 = lVar30 >> 2;
      uVar23 = (uint)uVar25;
      local_2b0 = uVar12;
      if (1 < uVar23) {
        uVar12 = 0;
        if (uVar23 != 1) {
          do {
            iVar11 = FUN_144ff6390(&local_200,uVar12,uVar25 & 0xffffffff);
            uVar27 = uVar12 + 1;
            uVar20 = puVar22[(int)uVar12];
            puVar22[(int)uVar12] = puVar22[iVar11];
            puVar22[iVar11] = uVar20;
            uVar12 = uVar27;
          } while (uVar27 < uVar23 - 1);
        }
      }
      if ((int)(local_2ac & 0x7fffffff) < (int)uVar31) {
        FUN_144c585a0(&local_2b8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar31);
        uVar17 = (ulonglong)local_2b0;
        puVar22 = local_2b8;
        local_268 = uVar17;
      }
      if (((int)uVar17 < (int)uVar31) || ((int)uVar31 < (int)uVar17)) {
        local_268 = (ulonglong)uVar31;
        local_2b0 = uVar31;
      }
      if (local_180 != 0) {
        FUN_144bea720(local_140);
        local_138 = local_138 - local_188;
        *(longlong *)(local_198 + 8) = *(longlong *)(local_198 + 8) + local_138;
        *(int *)(local_198 + 0x10) = *(int *)(local_198 + 0x10) + 1;
      }
      iVar11 = local_294;
      pcVar28 = (char *)(longlong)local_294;
      iVar19 = 0;
      local_2a8 = (uint *)0x0;
      local_2a0 = 0;
      local_29c = 0x80000000;
      if (local_294 < 1) {
LAB_144c6818c:
        local_2a0 = iVar19;
        if (iVar11 < iVar19) {
          local_2a0 = iVar11;
        }
      }
      else {
        FUN_144c6c2d0(&local_2a8,&PTR_vftable_14c6e47a0,pcVar28);
        lVar30 = (longlong)local_2a0;
        iVar19 = local_2a0;
        if (iVar11 <= local_2a0) goto LAB_144c6818c;
        uVar12 = iVar11 - local_2a0;
        local_2a0 = iVar11;
        if (0 < (int)uVar12) {
          uVar17 = (ulonglong)uVar12;
          puVar15 = local_2a8 + lVar30;
          do {
            if (puVar15 != (uint *)0x0) {
              *puVar15 = 0xffffffff;
            }
            uVar17 = uVar17 - 1;
            puVar15 = puVar15 + 1;
          } while (uVar17 != 0);
        }
      }
      local_120 = local_c8;
      local_108 = 1;
      FUN_144bea720(local_118);
      pcVar32 = (char *)((longlong)(int)uVar31 << 3);
      local_234 = uVar31 | 0x80000000;
      local_298 = 0;
      local_1f0 = pcVar28;
      local_198 = pcVar32;
      do {
        uVar12 = local_234;
        uVar17 = (ulonglong)_tls_index;
        lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
        if (*(char *)(lVar30 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
          uVar17 = (ulonglong)_tls_index;
        }
        lVar13 = *(longlong *)(lVar30 + 0xf0);
        if (lVar13 == 0) {
          if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8) + 0x114) ==
              '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar13 = FUN_144b3f4a0();
          *(longlong *)(lVar30 + 0xf0) = lVar13;
        }
        pcVar28 = *(char **)(*(longlong *)(lVar13 + 0x3d0) + 0x10);
        pcVar26 = (char *)0x0;
        if (*(longlong *)(pcVar28 + 8) == 0) {
          pcVar26 = pcVar28;
        }
        local_260 = pcVar32;
        local_1b8 = pcVar26;
        if (pcVar26 == (char *)0x0) {
          puVar15 = (uint *)(*DAT_14c787670)(CONCAT71((int7)((ulonglong)pcVar28 >> 8),1),&local_260,
                                             0x40);
        }
        else {
          local_168 = (ulonglong)(pcVar32 + 0x3f) & 0xffffffffffffffc0;
          if (local_168 <= *(ulonglong *)(pcVar26 + 0x28)) {
            puVar15 = *(uint **)(pcVar26 + 0x38);
            local_228 = puVar15;
            if ((longlong)puVar15 + local_168 <= *(ulonglong *)(pcVar26 + 0x40)) {
              *(ulonglong *)(pcVar26 + 0x38) = (longlong)puVar15 + local_168;
              goto LAB_144c682bc;
            }
          }
          puVar15 = (uint *)FUN_144b454a0(pcVar26);
        }
LAB_144c682bc:
        uVar23 = uVar31;
        if (((int)uVar31 < 1) && (uVar23 = 0, (int)uVar31 < 0)) {
          uVar23 = uVar31;
        }
        uVar20 = 0;
        puVar18 = puVar15;
        if (0 < (int)uVar31) {
          do {
            uVar27 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar18 = uVar27;
            puVar18[1] = uVar20;
            uVar20 = uVar20 + 1;
            puVar18 = puVar18 + 2;
          } while ((int)uVar20 < (int)uVar31);
        }
        local_228 = puVar15;
        local_1d4 = uVar12;
        if (1 < (int)uVar23) {
          FUN_144c6c4e0(puVar15,0,uVar23 - 1,local_res18);
        }
        uVar17 = local_268;
        if (0 < (longlong)local_1f0) {
          lVar30 = (longlong)local_278 - (longlong)local_2a8;
          pcVar28 = local_1f0;
          puVar22 = local_2a8;
          local_160 = lVar30;
          do {
            local_1e0 = local_b0;
            local_1c8 = 1;
            local_260 = pcVar28;
            local_1f8 = puVar22;
            FUN_144bea720();
            uVar31 = *(uint *)(lVar30 + (longlong)puVar22);
            iVar11 = 0;
            lVar13 = 0;
            if (0 < (int)uVar23) {
              do {
                if (puVar15[lVar13 * 2] == uVar31) {
                  uVar12 = puVar15[lVar13 * 2 + 1];
                  goto LAB_144c684a4;
                }
                iVar11 = iVar11 + 1;
                lVar13 = lVar13 + 1;
              } while (iVar11 < (int)uVar23);
            }
            lVar14 = 0;
            lVar13 = 0;
            uVar12 = 0xffffffff;
            iVar11 = (int)(local_218 + (longlong)(int)uVar31 * 2)[1];
            fVar36 = local_220[0];
            pcVar28 = local_260;
            if (iVar11 < 1) {
LAB_144c683fe:
              uVar20 = 0;
              if (0 < (int)uVar17) {
                puVar18 = local_2b8;
                uVar27 = uVar12;
                do {
                  pfVar1 = (float *)(*(longlong *)(param_1 + 0x90) +
                                    (ulonglong)(*puVar18 & 0x3fffff) * 0x10);
                  pfVar2 = (float *)(*(longlong *)(param_1 + 0x90) +
                                    (ulonglong)(uVar31 & 0x3fffff) * 0x10);
                  fVar33 = (*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2);
                  fVar34 = (pfVar1[1] - pfVar2[1]) * (pfVar1[1] - pfVar2[1]);
                  fVar35 = (pfVar1[2] - pfVar2[2]) * (pfVar1[2] - pfVar2[2]);
                  auVar5._4_4_ = fVar35 + fVar34 + fVar33;
                  auVar5._0_4_ = fVar35 + fVar34 + fVar33;
                  auVar5._8_4_ = fVar35 + fVar34 + fVar33;
                  auVar5._12_4_ = fVar35 + fVar34 + fVar33;
                  unaff_XMM6 = sqrtps(unaff_XMM6,auVar5);
                  fVar33 = unaff_XMM6._0_4_;
                  FUN_144c63750(local_220,*puVar18,uVar31,fVar33);
                  uVar12 = uVar20;
                  if (fVar36 <= fVar33) {
                    uVar12 = uVar27;
                    fVar33 = fVar36;
                  }
                  fVar36 = fVar33;
                  uVar20 = uVar20 + 1;
                  puVar18 = puVar18 + 1;
                  pcVar28 = local_260;
                  lVar30 = local_160;
                  puVar15 = local_228;
                  puVar22 = local_1f8;
                  uVar27 = uVar12;
                } while ((int)uVar20 < (int)uVar17);
              }
            }
            else {
              do {
                if ((int)uVar23 <= lVar13) break;
                lVar4 = local_218[(longlong)(int)uVar31 * 2];
                uVar20 = *(uint *)(lVar4 + lVar14 * 8);
                if (uVar20 == puVar15[lVar13 * 2]) {
                  fVar33 = *(float *)(lVar4 + 4 + lVar14 * 8);
                  if (fVar33 < fVar36) {
                    uVar12 = puVar15[lVar13 * 2 + 1];
                    fVar36 = fVar33;
                  }
                  lVar14 = lVar14 + 1;
LAB_144c683ed:
                  lVar13 = lVar13 + 1;
                }
                else {
                  if ((int)puVar15[lVar13 * 2] <= (int)uVar20) goto LAB_144c683ed;
                  lVar14 = lVar14 + 1;
                }
              } while (lVar14 < iVar11);
              if (uVar12 == 0xffffffff) goto LAB_144c683fe;
            }
LAB_144c684a4:
            *puVar22 = uVar12;
            if (local_1c8 != 0) {
              FUN_144bea720(local_130);
              local_128 = local_128 - local_1d0;
              *(longlong *)(local_1e0 + 8) = *(longlong *)(local_1e0 + 8) + local_128;
              *(int *)(local_1e0 + 0x10) = *(int *)(local_1e0 + 0x10) + 1;
            }
            puVar22 = puVar22 + 1;
            pcVar28 = pcVar28 + -1;
          } while (pcVar28 != (char *)0x0);
          local_260 = (char *)0x0;
          pcVar26 = local_1b8;
          pcVar32 = local_198;
          uVar31 = local_238;
          local_1f8 = puVar22;
        }
        pcVar28 = local_1f0;
        local_1e0 = local_98;
        local_1c8 = 1;
        FUN_144bea720(local_1d8);
        local_1b8 = pcVar7;
        pcStack_1b0 = pcVar8;
        iVar11 = FUN_144c67500(param_1,&local_1b8,&local_2b8,&local_2a8);
        if (local_1c8 != 0) {
          FUN_144bea720(&local_178);
          puVar10 = local_1e0;
          pcStack_170 = pcStack_170 + -local_1d0;
          *(char **)(local_1e0 + 8) = pcStack_170 + *(longlong *)(local_1e0 + 8);
          *(int *)(puVar10 + 0x10) = *(int *)(puVar10 + 0x10) + 1;
        }
        if (iVar11 == 0) {
          if (pcVar26 == (char *)0x0) {
            (*DAT_14c787678)(1,puVar15,pcVar32);
          }
          else if ((*(ulonglong *)(pcVar26 + 0x28) <
                    ((ulonglong)(pcVar32 + 0x3f) & 0xffffffffffffffc0)) ||
                  ((longlong)puVar15 + ((ulonglong)(pcVar32 + 0x3f) & 0xffffffffffffffc0) !=
                   *(longlong *)(pcVar26 + 0x38))) {
            FUN_144be8550(pcVar26,puVar15);
          }
          else {
            *(uint **)(pcVar26 + 0x38) = puVar15;
            if (*(uint **)(pcVar26 + 0x48) == puVar15) {
              FUN_144be8430(pcVar26);
            }
          }
          break;
        }
        if (pcVar26 == (char *)0x0) {
          (*DAT_14c787678)(1,puVar15,pcVar32);
        }
        else if ((*(ulonglong *)(pcVar26 + 0x28) <
                  ((ulonglong)(pcVar32 + 0x3f) & 0xffffffffffffffc0)) ||
                ((longlong)puVar15 + ((ulonglong)(pcVar32 + 0x3f) & 0xffffffffffffffc0) !=
                 *(longlong *)(pcVar26 + 0x38))) {
          FUN_144be8550(pcVar26,puVar15);
        }
        else {
          *(uint **)(pcVar26 + 0x38) = puVar15;
          if (*(uint **)(pcVar26 + 0x48) == puVar15) {
            FUN_144be8430(pcVar26);
          }
        }
        local_298 = local_298 + 1;
        puVar22 = local_2b8;
      } while (local_298 < 10);
      if (local_108 != 0) {
        FUN_144bea720(&local_288);
        pcStack_280 = pcStack_280 + -local_110;
        *(char **)(local_120 + 8) = pcStack_280 + *(longlong *)(local_120 + 8);
        *(int *)(local_120 + 0x10) = *(int *)(local_120 + 0x10) + 1;
      }
      uVar17 = local_268;
      iVar11 = (int)param_5[1];
      iVar19 = (int)local_268;
      iVar24 = iVar11 + iVar19;
      if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar24) {
        FUN_144c585a0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      if (0 < iVar19) {
        uVar17 = uVar17 & 0xffffffff;
        puVar22 = (uint *)(*param_5 + (longlong)iVar11 * 4);
        puVar15 = local_2b8;
        do {
          if (puVar22 != (uint *)0x0) {
            uVar31 = *puVar15;
            puVar15 = puVar15 + 1;
            *puVar22 = uVar31;
          }
          uVar17 = uVar17 - 1;
          puVar22 = puVar22 + 1;
        } while (uVar17 != 0);
      }
      *(int *)(param_5 + 1) = iVar24;
      if (0 < (longlong)pcVar28) {
        puVar22 = local_2a8;
        do {
          uVar31 = *puVar22;
          piVar3 = (int *)(((longlong)local_278 - (longlong)local_2a8) + (longlong)puVar22);
          puVar22 = puVar22 + 1;
          *(uint *)(*param_4 + (longlong)*piVar3 * 4) = uVar31 + iVar11;
          pcVar28 = pcVar28 + -1;
        } while (pcVar28 != (char *)0x0);
      }
      iVar11 = local_290 + local_294;
      local_2a0 = 0;
      local_290 = iVar11;
      if ((-1 < (int)local_29c) && (local_2a8 != (uint *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2a8,(ulonglong)(local_29c & 0x7fffffff) << 2);
      }
      local_2a8 = (uint *)0x0;
      local_29c = 0x80000000;
      local_2b0 = 0;
      if ((-1 < (int)local_2ac) && (local_2b8 != (uint *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2b8,(ulonglong)(local_2ac & 0x7fffffff) << 2);
      }
      plVar9 = local_218;
      local_2b8 = (uint *)0x0;
      local_2ac = 0x80000000;
      plVar6 = local_218 + (longlong)local_210 * 2;
      while (plVar6 != plVar9) {
        plVar29 = plVar6 + -2;
        *(undefined4 *)(plVar6 + -1) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar6 + -4)) && (*plVar29 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar29,
                     (ulonglong)(*(uint *)((longlong)plVar6 + -4) & 0x7fffffff) << 3);
        }
        *plVar29 = 0;
        *(undefined4 *)((longlong)plVar6 + -4) = 0x80000000;
        plVar6 = plVar29;
      }
      local_210 = 0;
      if ((-1 < (int)local_20c) && (local_218 != (longlong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_218,(ulonglong)(local_20c & 0x7fffffff) << 4);
      }
      local_218 = (longlong *)0x0;
      local_20c = 0x80000000;
      FUN_144c65fb0(local_f8);
      local_1e8 = local_1e8 + 1;
      lVar13 = local_158;
    } while (local_1e8 < local_240);
  }
  if ((-1 < (longlong)uStack_250) && (local_258 != (char *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_258,(ulonglong)(uStack_250._4_4_ & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_23c) && (local_248 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_248,(ulonglong)(local_23c & 0x7fffffff) << 2);
  }
  if (lVar13 != 0) {
    local_288 = "lt";
    pcStack_280 = "";
    FUN_144be9b20(lVar13,&local_288);
  }
  return;
}



// FUNCTION 144c68970 FUN_144c68970 body=5760 status=ok
// SIG undefined FUN_144c68970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_144c68970(uint *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                    longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                    longlong param_9)

{
  ushort *puVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  float *pfVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  float *pfVar28;
  longlong lVar29;
  int iVar30;
  float fVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar43;
  float fVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar44;
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  float fVar62;
  float fVar63;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  uint uVar73;
  float fVar77;
  float fVar79;
  undefined1 auVar74 [16];
  uint uVar78;
  uint uVar80;
  uint uVar81;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  uint local_3a8 [2];
  undefined8 local_3a0;
  uint local_398 [4];
  undefined1 local_388 [16];
  longlong local_378;
  longlong lStack_370;
  float local_368;
  uint *local_360;
  uint local_358;
  uint local_354;
  uint *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_338;
  longlong local_328;
  longlong *plStack_320;
  uint *local_318;
  undefined1 local_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  undefined1 local_2f8 [16];
  uint *local_2e8;
  ulonglong local_2e0;
  longlong local_2d8;
  longlong *plStack_2d0;
  uint *local_2c8;
  undefined1 local_2c0;
  uint local_2b8 [2];
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  uint local_288;
  undefined8 local_280;
  longlong local_278;
  longlong lStack_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  uint local_258;
  undefined8 local_250;
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  uint local_218 [2];
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  uint local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [128];
  
  lVar25 = param_4[1];
  puVar15 = (uint *)*param_4;
  *param_1 = *puVar15;
  *(int *)(param_4 + 1) = (int)lVar25 + -1;
  *(undefined8 *)puVar15 = *(undefined8 *)(puVar15 + (longlong)(int)lVar25 * 2 + -2);
  lVar25 = param_4[1];
  if ((int)lVar25 < 3) {
    uVar27 = 0;
  }
  else {
    uVar27 = (uint)(*(int *)(*param_4 + 0x14) < *(int *)(*param_4 + 0xc));
  }
  uVar27 = uVar27 + 1;
  uVar16 = 0;
  while ((int)uVar27 < (int)lVar25) {
    uVar26 = (ulonglong)uVar27;
    lVar14 = *param_4;
    lVar29 = (longlong)(int)uVar16;
    lVar24 = (longlong)(int)uVar27;
    if (*(int *)(lVar14 + 4 + lVar29 * 8) <= *(int *)(lVar14 + 4 + lVar24 * 8)) break;
    uVar13 = *(undefined8 *)(lVar14 + lVar29 * 8);
    *(undefined8 *)(lVar14 + lVar29 * 8) = *(undefined8 *)(lVar14 + lVar24 * 8);
    *(undefined8 *)(lVar14 + lVar24 * 8) = uVar13;
    iVar22 = uVar27 * 2;
    uVar27 = iVar22 + 1;
    uVar16 = uVar26;
    if (iVar22 + 2 < (int)param_4[1]) {
      uVar27 = uVar27 + (*(int *)(*param_4 + 0x14 + (longlong)iVar22 * 8) <
                        *(int *)(*param_4 + 4 + (longlong)(int)uVar27 * 8));
    }
  }
  piVar5 = *(int **)(param_9 + 0x40);
  uVar13 = FUN_144c65bb0(piVar5,*param_1);
  uVar27 = *param_1;
  piVar5[0x10] = (int)(short)((longlong)(ulonglong)(uint)((int)uVar13 - *piVar5) >> 4);
  *(undefined8 *)(piVar5 + 0x12) = uVar13;
  *(undefined8 *)(piVar5 + 0x14) = uVar13;
  fVar31 = (float)FUN_144c638c0(param_8,uVar27);
  iVar22 = (int)*(short *)(*(longlong *)(param_2[1] + 0x18) + 10 +
                          (ulonglong)(*param_1 & 0x3fffff) * 0xc) +
           (int)*(short *)(*(longlong *)(param_2[1] + 0x18) + 8 +
                          (ulonglong)(*param_1 & 0x3fffff) * 0xc);
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_368 = fVar31;
  if (*(char *)(lVar25 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar13 = 0x114;
  lVar14 = *(longlong *)(lVar25 + 0xf0);
  if (lVar14 == 0) {
    if (*(char *)(lVar25 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    uVar13 = 0;
    *(longlong *)(lVar25 + 0xf0) = lVar14;
  }
  uVar16 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar16 + 8) != 0) {
    uVar16 = 0;
  }
  local_378 = (longlong)iVar22 * 4;
  local_338 = local_378;
  local_2e0 = uVar16;
  if (uVar16 == 0) {
    puVar15 = (uint *)(*DAT_14c787670)(CONCAT71((int7)((ulonglong)uVar13 >> 8),1),&local_378,0x40);
  }
  else {
    local_360 = (uint *)(local_378 + 0x3fU & 0xffffffffffffffc0);
    if (local_360 <= *(uint **)(uVar16 + 0x28)) {
      puVar15 = *(uint **)(uVar16 + 0x38);
      local_350 = puVar15;
      if ((ulonglong)((longlong)local_360 + (longlong)puVar15) <= *(ulonglong *)(uVar16 + 0x40)) {
        *(longlong *)(uVar16 + 0x38) = (longlong)local_360 + (longlong)puVar15;
        goto LAB_144c68b9b;
      }
    }
    puVar15 = (uint *)FUN_144b454a0(uVar16,&local_360);
  }
LAB_144c68b9b:
  plStack_320 = (longlong *)(CONCAT44(iVar22,plStack_320._0_4_) | 0x8000000000000000);
  uVar26 = (ulonglong)(*param_1 & 0x3fffff);
  lVar25 = *(longlong *)(param_2[1] + 0x18);
  sVar2 = *(short *)(lVar25 + 8 + uVar26 * 0xc);
  iVar30 = (int)*(short *)(lVar25 + 10 + uVar26 * 0xc) + (int)sVar2;
  iVar22 = iVar30;
  if ((iVar30 < 1) && (iVar22 = 0, iVar30 < 0)) {
    iVar22 = iVar30;
  }
  uVar27 = *param_1 & 0xffc00000;
  iVar30 = 0;
  puVar21 = puVar15;
  if (0 < sVar2) {
    do {
      uVar12 = *(int *)(lVar25 + uVar26 * 0xc) + iVar30;
      iVar30 = iVar30 + 1;
      *puVar21 = uVar12 | uVar27;
      puVar21 = puVar21 + 1;
    } while (iVar30 < *(short *)(lVar25 + 8 + uVar26 * 0xc));
  }
  iVar30 = 0;
  if (0 < *(short *)(lVar25 + 10 + uVar26 * 0xc)) {
    do {
      uVar12 = *(int *)(lVar25 + 4 + uVar26 * 0xc) + iVar30;
      iVar30 = iVar30 + 1;
      *puVar21 = uVar12 | uVar27;
      puVar21 = puVar21 + 1;
    } while (iVar30 < *(short *)(lVar25 + 10 + uVar26 * 0xc));
  }
  local_2e8 = puVar15 + iVar22;
  local_360 = puVar15;
  local_350 = puVar15;
  if (puVar15 < local_2e8) {
    do {
      uVar27 = *puVar15;
      uVar16 = local_2e0;
      local_360 = puVar15;
      if (*(int *)(param_5 + 0x18) <= *(int *)(param_5 + 0x1c)) break;
      uVar12 = uVar27 & 0x3fffff;
      uVar16 = (ulonglong)uVar12;
      lVar25 = *(longlong *)(param_9 + 0x40);
      if (*(int *)(*(longlong *)(*(longlong *)(param_9 + 8) + 0x28) + 0xc + uVar16 * 0x14) == -1) {
        uVar13 = 0;
      }
      else {
        uVar13 = FUN_144c65bb0(lVar25);
      }
      *(undefined8 *)(lVar25 + 0x48) = uVar13;
      uVar4 = *(uint *)(*(longlong *)(param_2[1] + 0x28) + 0xc + uVar16 * 0x14);
      if (uVar4 != 0xffffffff) {
        uVar23 = *param_1;
        lVar25 = *(longlong *)
                  (*(longlong *)
                    ((ulonglong)(uVar27 >> 0x16) * 0x120 + *(longlong *)(*param_3 + 0x38)) + 0x20);
        if ((int)uVar12 < *(int *)(lVar25 + 0x30)) {
          if (*(int *)(lVar25 + 0x78) != 0) {
            uVar12 = *(uint *)(*(longlong *)(lVar25 + 0x70) + (ulonglong)uVar12 * 4);
          }
          if (uVar12 != 0xffffffff) {
            lVar25 = *(longlong *)(lVar25 + 0xc0);
            goto LAB_144c68d80;
          }
          lVar25 = *(longlong *)(lVar25 + 0x28) + uVar16 * 0x14;
        }
        else {
          uVar12 = uVar12 - *(int *)(lVar25 + 0x30);
          lVar25 = *(longlong *)(lVar25 + 0xe0);
LAB_144c68d80:
          lVar25 = lVar25 + (longlong)(int)uVar12 * 0x14;
        }
        uVar12 = *(uint *)(lVar25 + 8);
        if ((uVar12 != 0xffffffff) && ((*(byte *)(lVar25 + 0x10) & 0x20) == 0)) {
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            if ((char)param_3[5] == '\0') {
LAB_144c68e02:
              uVar12 = uVar27 & 0x3fffff;
              uVar16 = (ulonglong)uVar12;
              lVar14 = *(longlong *)
                        (*(longlong *)
                          ((ulonglong)(uVar27 >> 0x16) * 0x120 + *(longlong *)(*param_3 + 0x38)) +
                        0x20);
              if ((int)uVar12 < *(int *)(lVar14 + 0x30)) {
                if (*(int *)(lVar14 + 0x78) != 0) {
                  uVar12 = *(uint *)(*(longlong *)(lVar14 + 0x70) + uVar16 * 4);
                }
                if (uVar12 == 0xffffffff) {
                  lVar24 = *(longlong *)(lVar14 + 0x28);
                  lVar29 = uVar16 * 5;
                }
                else {
                  lVar29 = (longlong)(int)uVar12 * 5;
                  lVar24 = *(longlong *)(lVar14 + 0xc0);
                }
              }
              else {
                lVar29 = (longlong)(int)(uVar12 - *(int *)(lVar14 + 0x30)) * 5;
                lVar24 = *(longlong *)(lVar14 + 0xe0);
              }
              uVar12 = *(uint *)(lVar24 + lVar29 * 4 + 8);
              if (((*(byte *)(lVar24 + 0x10 + lVar29 * 4) & 0x40) == 0) && (uVar12 != 0xffffffff)) {
                uVar12 = uVar12 & 0x3fffff | *(int *)(lVar14 + 0x17c) << 0x16;
              }
              uVar20 = uVar12 & 0x3fffff;
              uVar16 = (ulonglong)uVar20;
              lVar14 = *(longlong *)
                        (*(longlong *)
                          ((ulonglong)(uVar12 >> 0x16) * 0x120 + *(longlong *)(*param_3 + 0x38)) +
                        0x20);
              if ((int)uVar20 < *(int *)(lVar14 + 0x30)) {
                if (*(int *)(lVar14 + 0x78) != 0) {
                  uVar20 = *(uint *)(*(longlong *)(lVar14 + 0x70) + uVar16 * 4);
                }
                if (uVar20 == 0xffffffff) {
                  lVar14 = *(longlong *)(lVar14 + 0x28);
                  lVar24 = uVar16 * 5;
                }
                else {
                  lVar24 = (longlong)(int)uVar20 * 5;
                  lVar14 = *(longlong *)(lVar14 + 0xc0);
                }
              }
              else {
                lVar24 = (longlong)(int)(uVar20 - *(int *)(lVar14 + 0x30)) * 5;
                lVar14 = *(longlong *)(lVar14 + 0xe0);
              }
              if ((*(byte *)(lVar14 + 0x10 + lVar24 * 4) & 0x20) != 0) goto LAB_144c69eb8;
            }
LAB_144c68f14:
            uVar20 = uVar27 & 0x3fffff;
            uVar16 = (ulonglong)uVar20;
            uVar12 = uVar23 & 0x3fffff;
            local_3a0 = uVar16;
            if ((*(uint *)(lVar25 + 0xc) & 0x3fffff) != uVar12) {
              auVar38 = *(undefined1 (*) [16])(param_3 + 0xe);
              lVar25 = *(longlong *)(param_3[1] + 0x28);
              lVar14 = *(longlong *)(param_3[1] + 0x38);
              pfVar17 = (float *)(lVar14 + (longlong)*(int *)(lVar25 + uVar16 * 0x14) * 0x10);
              fVar85 = *pfVar17;
              fVar86 = pfVar17[1];
              local_328 = *(longlong *)pfVar17;
              fVar87 = pfVar17[2];
              fVar88 = pfVar17[3];
              plStack_320 = *(longlong **)(pfVar17 + 2);
              fVar37 = auVar38._0_4_;
              pfVar17 = (float *)(lVar14 + (longlong)*(int *)(lVar25 + 4 + uVar16 * 0x14) * 0x10);
              fVar50 = *pfVar17;
              fVar53 = pfVar17[1];
              local_2d8 = *(longlong *)pfVar17;
              fVar56 = pfVar17[2];
              plStack_2d0 = *(longlong **)(pfVar17 + 2);
              auVar34 = auVar38;
              if (0.0 <= fVar37) {
                auVar34._0_4_ = fVar37 * fVar37;
                auVar34._4_4_ = auVar38._4_4_ * auVar38._4_4_;
                auVar34._8_4_ = auVar38._8_4_ * auVar38._8_4_;
                auVar34._12_4_ = auVar38._12_4_ * auVar38._12_4_;
                fVar55 = fVar85 - fVar50;
                fVar62 = fVar86 - fVar53;
                fVar63 = fVar87 - fVar56;
                fVar65 = fVar86 - *(float *)((longlong)param_3 + 0x54);
                fVar37 = fVar55 * (fVar85 - *(float *)(param_3 + 10));
                fVar43 = fVar62 * fVar65;
                fVar45 = fVar63 * (fVar87 - *(float *)(param_3 + 0xb));
                fVar47 = fVar55 * fVar55;
                fVar48 = fVar62 * fVar62;
                fVar51 = fVar63 * fVar63;
                auVar70._0_4_ = fVar45 + fVar43 + fVar37;
                auVar70._4_4_ = fVar45 + fVar43 + fVar37;
                auVar70._8_4_ = fVar45 + fVar43 + fVar37;
                auVar70._12_4_ = fVar45 + fVar43 + fVar37;
                auVar38._4_4_ = fVar51 + fVar48 + fVar47;
                auVar38._0_4_ = fVar51 + fVar48 + fVar47;
                auVar38._8_4_ = fVar51 + fVar48 + fVar47;
                auVar38._12_4_ = fVar51 + fVar48 + fVar47;
                auVar38 = divps(auVar70,auVar38);
                auVar38 = minps(auVar38,_DAT_1499314a0);
                auVar38 = maxps(auVar38,ZEXT816(0));
                fVar37 = (fVar85 - *(float *)(param_3 + 10)) - auVar38._0_4_ * fVar55;
                fVar65 = fVar65 - auVar38._4_4_ * fVar62;
                fVar43 = (fVar87 - *(float *)(param_3 + 0xb)) - auVar38._8_4_ * fVar63;
                if (auVar34._0_4_ < fVar43 * fVar43 + fVar65 * fVar65 + fVar37 * fVar37)
                goto LAB_144c69eb8;
              }
              auVar38 = *(undefined1 (*) [16])(param_3 + 0x10);
              fVar37 = auVar38._0_4_;
              if (0.0 <= fVar37) {
                iVar22 = 0;
                fVar31 = fVar50 - fVar85;
                fVar43 = fVar53 - fVar86;
                fVar45 = fVar56 - fVar87;
                fVar47 = pfVar17[3] - fVar88;
                lVar25 = 0;
                if (0 < (int)param_3[0xd]) {
                  fVar48 = *(float *)(param_3 + 10);
                  local_378 = param_3[10];
                  fVar51 = *(float *)(param_3 + 0xb);
                  lStack_370 = param_3[0xb];
                  fVar55 = fVar85 - fVar48;
                  fVar62 = fVar86 - *(float *)((longlong)param_3 + 0x54);
                  fVar63 = fVar87 - fVar51;
                  uVar32 = 0x3f800000;
                  uVar49 = 0x3f800000;
                  uVar52 = 0x3f800000;
                  uVar54 = 0x3f800000;
                  pfVar28 = (float *)param_3[0xc];
                  local_388._0_4_ = fVar31 * fVar31;
                  local_388._4_4_ = fVar43 * fVar43;
                  local_388._8_4_ = fVar45 * fVar45;
                  local_388._12_4_ = fVar47 * fVar47;
                  local_348 = CONCAT44(auVar38._4_4_ * auVar38._4_4_,fVar37 * fVar37);
                  uStack_340 = CONCAT44(auVar38._12_4_ * auVar38._12_4_,
                                        auVar38._8_4_ * auVar38._8_4_);
                  do {
                    fVar82 = *pfVar28 - fVar48;
                    fVar83 = pfVar28[1] - *(float *)((longlong)param_3 + 0x54);
                    fVar84 = pfVar28[2] - fVar51;
                    fVar47 = fVar31 * fVar83 - fVar43 * fVar82;
                    fVar65 = fVar43 * fVar84 - fVar45 * fVar83;
                    fVar36 = fVar45 * fVar82 - fVar31 * fVar84;
                    fVar72 = fVar65 * fVar65;
                    fVar77 = fVar36 * fVar36;
                    fVar79 = fVar47 * fVar47;
                    auVar74._0_4_ = fVar79 + fVar77 + fVar72;
                    auVar74._4_4_ = fVar79 + fVar77 + fVar72;
                    auVar74._8_4_ = fVar79 + fVar77 + fVar72;
                    auVar74._12_4_ = fVar79 + fVar77 + fVar72;
                    if (auVar74._0_4_ == 0.0) {
                      auVar38 = ZEXT816(0);
                    }
                    else {
                      auVar38 = divps(_DAT_14c6daca0,auVar74);
                    }
                    fVar72 = fVar31 * fVar82;
                    fVar77 = fVar43 * fVar83;
                    fVar67 = fVar45 * fVar84;
                    fVar79 = (fVar36 * fVar45 - fVar47 * fVar43) * fVar55;
                    fVar47 = (fVar47 * fVar31 - fVar65 * fVar45) * fVar62;
                    fVar65 = (fVar65 * fVar43 - fVar36 * fVar31) * fVar63;
                    auVar69._0_4_ = (fVar65 + fVar47 + fVar79) * auVar38._0_4_;
                    auVar69._4_4_ = (fVar65 + fVar47 + fVar79) * auVar38._4_4_;
                    auVar69._8_4_ = (fVar65 + fVar47 + fVar79) * auVar38._8_4_;
                    auVar69._12_4_ = (fVar65 + fVar47 + fVar79) * auVar38._12_4_;
                    fVar64 = fVar67 + fVar77 + fVar72;
                    fVar66 = fVar67 + fVar77 + fVar72;
                    fVar68 = fVar67 + fVar77 + fVar72;
                    fVar67 = fVar67 + fVar77 + fVar72;
                    auVar7._4_4_ = uVar49;
                    auVar7._0_4_ = uVar32;
                    auVar7._8_4_ = uVar52;
                    auVar7._12_4_ = uVar54;
                    auVar38 = minps(auVar69,auVar7);
                    auVar70 = maxps(auVar38,ZEXT816(0));
                    auVar57._0_4_ = fVar83 * fVar83 + fVar82 * fVar82 + fVar84 * fVar84;
                    auVar57._4_4_ = fVar62 * fVar83 + fVar55 * fVar82 + fVar63 * fVar84;
                    auVar57._8_4_ = local_388._4_4_ + (float)local_388._0_4_ + local_388._8_4_;
                    auVar57._12_4_ = fVar62 * fVar43 + fVar55 * fVar31 + fVar63 * fVar45;
                    uVar32 = (undefined4)DAT_1499314a0;
                    uVar49 = DAT_1499314a0._4_4_;
                    uVar52 = DAT_1499314a0._8_4_;
                    uVar54 = DAT_1499314a0._12_4_;
                    auVar38 = divps(_DAT_14c6daca0,auVar57);
                    fVar77 = (float)(~-(uint)(auVar57._0_4_ == 0.0) & auVar38._0_4_);
                    fVar72 = (float)(~-(uint)(auVar57._8_4_ == 0.0) & auVar38._8_4_);
                    fVar47 = (fVar64 * auVar70._0_4_ - auVar57._12_4_) * fVar72;
                    fVar65 = (fVar66 * auVar70._4_4_ - auVar57._12_4_) * fVar72;
                    fVar36 = (fVar68 * auVar70._8_4_ - auVar57._12_4_) * fVar72;
                    fVar72 = (fVar67 * auVar70._12_4_ - auVar57._12_4_) * fVar72;
                    auVar39._4_4_ = fVar65;
                    auVar39._0_4_ = fVar47;
                    auVar39._8_4_ = fVar36;
                    auVar39._12_4_ = fVar72;
                    auVar38 = minps(auVar39,_DAT_1499314a0);
                    auVar38 = maxps(auVar38,ZEXT816(0));
                    fVar79 = auVar38._0_4_;
                    fVar44 = auVar38._4_4_;
                    fVar46 = auVar38._8_4_;
                    uVar73 = -(uint)(auVar74._0_4_ != 0.0 && fVar79 == fVar47);
                    uVar78 = -(uint)(auVar74._4_4_ != 0.0 && fVar44 == fVar65);
                    uVar80 = -(uint)(auVar74._8_4_ != 0.0 && fVar46 == fVar36);
                    uVar81 = -(uint)(auVar74._12_4_ != 0.0 && auVar38._12_4_ == fVar72);
                    auVar58._0_4_ = (auVar57._4_4_ + fVar64 * fVar79) * fVar77;
                    auVar58._4_4_ = (auVar57._4_4_ + fVar66 * fVar44) * fVar77;
                    auVar58._8_4_ = (auVar57._4_4_ + fVar68 * fVar46) * fVar77;
                    auVar58._12_4_ = (auVar57._4_4_ + fVar67 * auVar38._12_4_) * fVar77;
                    auVar38 = minps(auVar58,_DAT_1499314a0);
                    auVar38 = maxps(auVar38,ZEXT816(0));
                    auVar34._0_4_ =
                         (float)((uint)auVar70._0_4_ & uVar73 | ~uVar73 & auVar38._0_4_) * fVar82;
                    auVar34._4_4_ =
                         (float)((uint)auVar70._4_4_ & uVar78 | ~uVar78 & auVar38._4_4_) * fVar83;
                    auVar34._8_4_ =
                         (float)((uint)auVar70._8_4_ & uVar80 | ~uVar80 & auVar38._8_4_) * fVar84;
                    auVar34._12_4_ =
                         (float)((uint)auVar70._12_4_ & uVar81 | ~uVar81 & auVar38._12_4_) *
                         (pfVar28[3] - *(float *)((longlong)param_3 + 0x5c));
                    fVar47 = (fVar55 - auVar34._0_4_) + fVar79 * fVar31;
                    fVar65 = (fVar62 - auVar34._4_4_) + fVar44 * fVar43;
                    fVar36 = (fVar63 - auVar34._8_4_) + fVar46 * fVar45;
                    if (fVar36 * fVar36 + fVar65 * fVar65 + fVar47 * fVar47 <= fVar37 * fVar37)
                    break;
                    iVar22 = iVar22 + 1;
                    lVar25 = lVar25 + 1;
                    pfVar28 = pfVar28 + 4;
                  } while (lVar25 < (int)param_3[0xd]);
                }
                fVar31 = local_368;
                if (iVar22 == (int)param_3[0xd]) goto LAB_144c69eb8;
              }
              if (param_3[7] != 0) {
                fVar85 = (fVar50 - fVar85) * _DAT_14c6dad90 + fVar85;
                fVar86 = (fVar53 - fVar86) * fRam000000014c6dad94 + fVar86;
                fVar87 = (fVar56 - fVar87) * fRam000000014c6dad98 + fVar87;
                fVar88 = (pfVar17[3] - fVar88) * fRam000000014c6dad9c + fVar88;
                lVar25 = *(longlong *)
                          ((ulonglong)(uVar27 >> 0x16) * 0x120 + *(longlong *)(*param_3 + 0x38));
                local_2b8[0] = 0xffffffff;
                local_2b0 = 0;
                local_2a8 = 0;
                uStack_2a0 = 0;
                local_288 = 0xffffffff;
                local_280 = 0;
                local_278 = 0;
                lStack_270 = 0;
                local_248 = 0;
                lStack_240 = 0;
                lVar14 = *(longlong *)(lVar25 + 0x20);
                local_388._0_8_ = lVar25;
                local_378 = *(longlong *)(lVar14 + 0x48);
                iVar22 = *(int *)(lVar14 + 0x50);
                if ((int)uVar12 < *(int *)(lVar14 + 0x20)) {
                  uVar73 = uVar12;
                  if (*(int *)(lVar14 + 0x98) != 0) {
                    uVar73 = *(uint *)(*(longlong *)(lVar14 + 0x90) + (ulonglong)uVar12 * 4);
                  }
                  if (uVar73 != 0xffffffff) {
                    local_238 = *(longlong *)(lVar14 + 0x120);
                    goto LAB_144c69347;
                  }
                  local_238 = local_378 + (longlong)(int)(iVar22 * uVar12) * 4;
                  lStack_230 = local_238 + (longlong)iVar22 * 4;
                }
                else {
                  local_238 = *(longlong *)(lVar14 + 0x140);
                  uVar73 = uVar12 - *(int *)(lVar14 + 0x20);
LAB_144c69347:
                  lStack_230 = local_238 + ((longlong)(int)(uVar73 * iVar22) + (longlong)iVar22) * 4
                  ;
                  local_238 = local_238 + (longlong)(int)(uVar73 * iVar22) * 4;
                }
                local_3a8[0] = uVar12;
                local_250 = FUN_144c64f60(lVar25,local_3a8);
                local_248 = local_238;
                lStack_240 = lStack_230;
                lVar14 = *(longlong *)(lVar25 + 0x20);
                iVar22 = *(int *)(lVar14 + 0x60);
                if ((int)uVar20 < *(int *)(lVar14 + 0x30)) {
                  uVar12 = uVar20;
                  if (*(int *)(lVar14 + 0x78) != 0) {
                    uVar12 = *(uint *)(*(longlong *)(lVar14 + 0x70) + uVar16 * 4);
                  }
                  if (uVar12 != 0xffffffff) {
                    local_228 = *(longlong *)(lVar14 + 0x130);
                    goto LAB_144c693ee;
                  }
                  local_228 = *(longlong *)(lVar14 + 0x58) + (longlong)(int)(uVar20 * iVar22) * 4;
                  lStack_220 = local_228 + (longlong)iVar22 * 4;
                }
                else {
                  local_228 = *(longlong *)(lVar14 + 0x150);
                  uVar12 = uVar20 - *(int *)(lVar14 + 0x30);
LAB_144c693ee:
                  lStack_220 = local_228 + ((longlong)(int)(uVar12 * iVar22) + (longlong)iVar22) * 4
                  ;
                  local_228 = local_228 + (longlong)(int)(uVar12 * iVar22) * 4;
                }
                local_3a8[0] = uVar20;
                local_258 = uVar23;
                local_280 = FUN_144c46e20(lVar25,local_3a8);
                local_328 = *param_3;
                plStack_320 = param_3 + 3;
                local_318 = local_2b8;
                local_278 = local_228;
                lStack_270 = lStack_220;
                local_310 = 0x21;
                local_288 = uVar27;
                local_268 = fVar85;
                fStack_264 = fVar86;
                fStack_260 = fVar87;
                fStack_25c = fVar88;
                cVar11 = (**(code **)(*(longlong *)param_3[7] + 0x28))
                                   ((longlong *)param_3[7],&local_328);
                if (cVar11 == '\0') goto LAB_144c69eb8;
                if ((char)param_3[5] == '\0') {
                  local_3a8[0] = uVar20;
                  FUN_144c5ee50(lVar25,&local_358,local_3a8);
                  uVar12 = local_358;
                  local_3a8[0] = local_358 & 0x3fffff;
                  local_348 = 0;
                  uStack_340 = 0;
                  uVar13 = FUN_144c44fc0(*(undefined8 *)
                                          (*(longlong *)
                                            ((ulonglong)(local_358 >> 0x16) * 0x120 +
                                            *(longlong *)(*param_3 + 0x38)) + 0x20),local_3a8,
                                         &local_348);
                  local_3a8[0] = (uint)local_3a0;
                  FUN_144c65070(local_388._0_8_,&local_354,local_3a8);
                  uVar23 = local_354;
                  local_3a8[0] = local_354 & 0x3fffff;
                  local_378 = 0;
                  lStack_370 = 0;
                  local_1e0 = FUN_144c450c0(*(undefined8 *)
                                             (*(longlong *)
                                               ((ulonglong)(local_354 >> 0x16) * 0x120 +
                                               *(longlong *)(*param_3 + 0x38)) + 0x20),local_3a8,
                                            &local_378);
                  local_2d8 = *param_3;
                  local_208 = 0;
                  uStack_200 = 0;
                  plStack_2d0 = param_3 + 3;
                  local_210 = 0;
                  local_1a8 = local_348;
                  uStack_1a0 = uStack_340;
                  local_2c8 = local_218;
                  local_218[0] = 0xffffffff;
                  local_1d8 = local_378;
                  lStack_1d0 = lStack_370;
                  local_1b8 = uVar12;
                  local_1e8 = uVar23;
                  local_2c0 = 0x21;
                  local_1c8 = fVar85;
                  fStack_1c4 = fVar86;
                  fStack_1c0 = fVar87;
                  fStack_1bc = fVar88;
                  local_1b0 = uVar13;
                  cVar11 = (**(code **)(*(longlong *)param_3[7] + 0x28))
                                     ((longlong *)param_3[7],&local_2d8);
                  if (cVar11 == '\0') goto LAB_144c69eb8;
                }
              }
              uVar12 = *param_1;
              lVar25 = param_2[1];
              uVar16 = (ulonglong)(uVar27 & 0x3fffff);
              uVar23 = uVar12 & 0x3fffff;
              lVar14 = *(longlong *)(lVar25 + 0x28);
              local_398[0] = uVar4 & 0x3fffff;
              if ((*(byte *)(lVar14 + 0x10 + uVar16 * 0x14) & 0x10) == 0) {
                local_388._0_4_ = fVar31;
                auVar38 = *(undefined1 (*) [16])(param_2[0x12] + (ulonglong)local_398[0] * 0x10);
                pfVar17 = (float *)(param_2[0x12] + (ulonglong)uVar23 * 0x10);
                fVar85 = *pfVar17;
                fVar86 = pfVar17[1];
                fVar87 = pfVar17[2];
                fVar77 = auVar38._0_4_ - fVar85;
                fVar79 = auVar38._4_4_ - fVar86;
                fVar82 = auVar38._8_4_ - fVar87;
                pfVar17 = (float *)(*(longlong *)(lVar25 + 0x38) +
                                   (longlong)*(int *)(lVar14 + uVar16 * 0x14) * 0x10);
                fVar88 = *pfVar17;
                fVar50 = pfVar17[1];
                fVar53 = pfVar17[2];
                fVar56 = pfVar17[3];
                pfVar17 = (float *)(*(longlong *)(lVar25 + 0x38) +
                                   (longlong)*(int *)(lVar14 + 4 + uVar16 * 0x14) * 0x10);
                fVar37 = *pfVar17;
                fVar43 = pfVar17[1];
                fVar45 = pfVar17[2];
                pfVar28 = (float *)(param_2[0x14] + (ulonglong)uVar23 * 0x10);
                fVar65 = fVar79 * *pfVar28 - pfVar28[1] * fVar77;
                fVar36 = fVar82 * pfVar28[1] - pfVar28[2] * fVar79;
                fVar72 = fVar77 * pfVar28[2] - *pfVar28 * fVar82;
                fVar62 = 0.0 - (fVar87 * fVar65 + fVar86 * fVar72 + fVar85 * fVar36);
                fVar47 = fVar50 * fVar72 + fVar88 * fVar36;
                fVar48 = fVar88 * fVar36 + fVar50 * fVar72;
                fVar51 = fVar62 + fVar53 * fVar65;
                fVar55 = fVar53 * fVar65 + fVar62;
                fVar63 = fVar51 + fVar47;
                if ((0.0 < fVar63) ||
                   (fVar62 + fVar65 * fVar45 + fVar72 * fVar43 + fVar36 * fVar37 < 0.0)) {
                  uVar23 = -(uint)(0.0 < fVar63);
                  uVar20 = -(uint)(0.0 < fVar55 + fVar48);
                  uVar73 = -(uint)(0.0 < fVar47 + fVar51);
                  uVar78 = -(uint)(0.0 < fVar48 + fVar55);
                  fVar88 = (float)((uint)fVar88 & uVar23 | ~uVar23 & (uint)fVar37);
                  fVar50 = (float)((uint)fVar50 & uVar20 | ~uVar20 & (uint)fVar43);
                  fVar53 = (float)((uint)fVar53 & uVar73 | ~uVar73 & (uint)fVar45);
                  fVar56 = (float)((uint)fVar56 & uVar78 | ~uVar78 & (uint)pfVar17[3]);
                  fVar37 = fVar88 - auVar38._0_4_;
                  fVar43 = fVar50 - auVar38._4_4_;
                  fVar45 = fVar53 - auVar38._8_4_;
                  fVar85 = (fVar85 - fVar88) * (fVar85 - fVar88);
                  fVar86 = (fVar86 - fVar50) * (fVar86 - fVar50);
                  fVar87 = (fVar87 - fVar53) * (fVar87 - fVar53);
                  fVar37 = fVar37 * fVar37;
                  fVar43 = fVar43 * fVar43;
                  fVar45 = fVar45 * fVar45;
                  auVar35._4_4_ = fVar85;
                  auVar35._0_4_ = fVar85;
                  auVar35._8_4_ = fVar85;
                  auVar35._12_4_ = fVar85;
                  auVar42._0_4_ = fVar45 + fVar43 + fVar37;
                  auVar42._4_4_ = fVar45 + fVar43 + fVar37;
                  auVar42._8_4_ = fVar45 + fVar43 + fVar37;
                  auVar42._12_4_ = fVar45 + fVar43 + fVar37;
                  auVar34 = sqrtps(auVar35,auVar42);
                  auVar8._4_4_ = fVar87 + fVar86 + fVar85;
                  auVar8._0_4_ = fVar87 + fVar86 + fVar85;
                  auVar8._8_4_ = fVar87 + fVar86 + fVar85;
                  auVar8._12_4_ = fVar87 + fVar86 + fVar85;
                  auVar38 = sqrtps(auVar38,auVar8);
                  auVar76._0_4_ = auVar38._0_4_ + auVar34._0_4_;
                  auVar76._4_4_ = auVar38._4_4_ + auVar34._4_4_;
                  auVar76._8_4_ = auVar38._8_4_ + auVar34._8_4_;
                  auVar76._12_4_ = auVar38._12_4_ + auVar34._12_4_;
                }
                else {
                  fVar77 = fVar77 * fVar77;
                  fVar79 = fVar79 * fVar79;
                  fVar82 = fVar82 * fVar82;
                  fVar88 = (fVar37 - fVar88) * _DAT_14c6dad90 + fVar88;
                  fVar50 = (fVar43 - fVar50) * fRam000000014c6dad94 + fVar50;
                  fVar53 = (fVar45 - fVar53) * fRam000000014c6dad98 + fVar53;
                  fVar56 = (pfVar17[3] - fVar56) * fRam000000014c6dad9c + fVar56;
                  auVar61._0_4_ = fVar82 + fVar79 + fVar77;
                  auVar61._4_4_ = fVar82 + fVar79 + fVar77;
                  auVar61._8_4_ = fVar82 + fVar79 + fVar77;
                  auVar61._12_4_ = fVar82 + fVar79 + fVar77;
                  auVar76 = sqrtps(auVar38,auVar61);
                }
                if (param_2[6] == 0) {
                  fVar31 = auVar76._0_4_ + fVar31;
                }
                else {
                  local_3a0 = CONCAT44(local_3a0._4_4_,uVar12) & 0xffffffff003fffff;
                  uVar13 = *(undefined8 *)
                            ((ulonglong)(uVar27 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38));
                  local_218[0] = 0xffffffff;
                  local_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  puVar18 = (undefined8 *)FUN_144c65010(uVar13,local_118,&local_3a0);
                  local_3a0 = CONCAT44(local_3a0._4_4_,uVar12) & 0xffffffff003fffff;
                  uVar9 = *puVar18;
                  uVar10 = puVar18[1];
                  local_1b0 = FUN_144c64f60(uVar13,&local_3a0);
                  local_3a0 = CONCAT44(local_3a0._4_4_,uVar27) & 0xffffffff003fffff;
                  local_1b8 = uVar12;
                  local_1a8 = uVar9;
                  uStack_1a0 = uVar10;
                  plVar19 = (longlong *)FUN_144c64fc0(uVar13,local_108,&local_3a0);
                  local_3a0 = CONCAT44(local_3a0._4_4_,uVar27) & 0xffffffff003fffff;
                  lVar25 = *plVar19;
                  lVar14 = plVar19[1];
                  local_1e0 = FUN_144c46e20(uVar13,&local_3a0);
                  uVar32 = local_388._0_4_;
                  local_328 = *param_2;
                  plStack_320 = param_2 + 3;
                  local_318 = local_218;
                  local_310 = 0x21;
                  local_308 = (float)local_388._0_4_;
                  fStack_304 = (float)local_388._0_4_;
                  fStack_300 = (float)local_388._0_4_;
                  fStack_2fc = (float)local_388._0_4_;
                  local_2f8 = auVar76;
                  local_1e8 = uVar27;
                  local_1d8 = lVar25;
                  lStack_1d0 = lVar14;
                  local_1c8 = fVar88;
                  fStack_1c4 = fVar50;
                  fStack_1c0 = fVar53;
                  fStack_1bc = fVar56;
                  pfVar17 = (float *)(**(code **)(*(longlong *)param_2[6] + 0x28))
                                               ((longlong *)param_2[6],local_f8,&local_328);
                  fVar31 = (float)uVar32 + *pfVar17;
                }
              }
              else {
                local_3a0 = CONCAT44(local_3a0._4_4_,fVar31);
                local_3a8[0] = uVar23;
                FUN_144c52c20(lVar25,local_3a8,&local_198);
                FUN_144c52c90(*(undefined8 *)
                               ((ulonglong)(uVar4 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38))
                              ,local_398,&local_168);
                local_378 = *(longlong *)(param_2[1] + 0x28) + (ulonglong)(uVar27 & 0x3fffff) * 0x14
                ;
                local_388._0_4_ = *(uint *)(local_378 + 8) & 0x3fffff;
                local_348 = FUN_144c46e20(*(undefined8 *)
                                           ((ulonglong)(*(uint *)(local_378 + 8) >> 0x16) * 0x120 +
                                           *(longlong *)(*param_2 + 0x38)),local_388);
                lVar25 = *(longlong *)(param_2[1] + 0x28);
                lVar14 = *(longlong *)(param_2[1] + 0x38);
                pfVar17 = (float *)(lVar14 + (longlong)
                                             *(int *)(lVar25 + (ulonglong)(uVar27 & 0x3fffff) * 0x14
                                                     ) * 0x10);
                fVar45 = *pfVar17 - local_198;
                fVar47 = pfVar17[1] - fStack_194;
                fVar48 = pfVar17[2] - fStack_190;
                pfVar28 = (float *)(lVar14 + (longlong)
                                             *(int *)(lVar25 + 4 +
                                                     (ulonglong)(uVar27 & 0x3fffff) * 0x14) * 0x10);
                fVar88 = *pfVar17 - *pfVar28;
                fVar50 = pfVar17[1] - pfVar28[1];
                fVar53 = pfVar17[2] - pfVar28[2];
                fVar56 = fVar45 * fVar88;
                fVar37 = fVar47 * fVar50;
                fVar43 = fVar48 * fVar53;
                fVar85 = fVar88 * fVar88;
                fVar86 = fVar50 * fVar50;
                fVar87 = fVar53 * fVar53;
                auVar40._0_4_ = fVar87 + fVar86 + fVar85;
                auVar40._4_4_ = fVar87 + fVar86 + fVar85;
                auVar40._8_4_ = fVar87 + fVar86 + fVar85;
                auVar40._12_4_ = fVar87 + fVar86 + fVar85;
                auVar59._0_4_ = fVar43 + fVar37 + fVar56;
                auVar59._4_4_ = fVar43 + fVar37 + fVar56;
                auVar59._8_4_ = fVar43 + fVar37 + fVar56;
                auVar59._12_4_ = fVar43 + fVar37 + fVar56;
                auVar38 = divps(auVar59,auVar40);
                auVar38 = minps(auVar38,_DAT_1499314a0);
                auVar38 = maxps(auVar38,ZEXT816(0));
                fVar45 = fVar45 - auVar38._0_4_ * fVar88;
                fVar47 = fVar47 - auVar38._4_4_ * fVar50;
                fVar48 = fVar48 - auVar38._8_4_ * fVar53;
                fVar51 = local_198 + fVar45;
                fVar55 = fStack_194 + fVar47;
                fVar62 = fStack_190 + fVar48;
                fVar45 = fVar45 * fVar45;
                fVar47 = fVar47 * fVar47;
                fVar48 = fVar48 * fVar48;
                local_388._0_4_ = *(uint *)(local_378 + 8) & 0x3fffff;
                auVar75._0_4_ = fVar48 + fVar47 + fVar45;
                auVar75._4_4_ = fVar48 + fVar47 + fVar45;
                auVar75._8_4_ = fVar48 + fVar47 + fVar45;
                auVar75._12_4_ = fVar48 + fVar47 + fVar45;
                FUN_144c2ead0(*(undefined8 *)
                               ((ulonglong)(*(uint *)(local_378 + 8) >> 0x16) * 0x120 +
                               *(longlong *)(*param_2 + 0x38)),local_388,&local_188,&local_178);
                fVar88 = local_188 - local_178;
                fVar50 = fStack_184 - fStack_174;
                fVar53 = fStack_180 - fStack_170;
                fVar85 = fVar88 * fVar88;
                fVar86 = fVar50 * fVar50;
                fVar87 = fVar53 * fVar53;
                fVar56 = fVar88 * (local_188 - local_168);
                fVar37 = fVar50 * (fStack_184 - fStack_164);
                fVar43 = fVar53 * (fStack_180 - fStack_160);
                auVar41._0_4_ = fVar87 + fVar86 + fVar85;
                auVar41._4_4_ = fVar87 + fVar86 + fVar85;
                auVar41._8_4_ = fVar87 + fVar86 + fVar85;
                auVar41._12_4_ = fVar87 + fVar86 + fVar85;
                auVar60._0_4_ = fVar43 + fVar37 + fVar56;
                auVar60._4_4_ = fVar43 + fVar37 + fVar56;
                auVar60._8_4_ = fVar43 + fVar37 + fVar56;
                auVar60._12_4_ = fVar43 + fVar37 + fVar56;
                auVar70 = divps(auVar60,auVar41);
                auVar70 = minps(auVar70,_DAT_1499314a0);
                auVar70 = maxps(auVar70,ZEXT816(0));
                fVar56 = auVar70._12_4_;
                fVar85 = (local_188 - local_168) - fVar88 * auVar70._0_4_;
                fVar86 = (fStack_184 - fStack_164) - fVar50 * auVar70._4_4_;
                fVar87 = (fStack_180 - fStack_160) - fVar53 * auVar70._8_4_;
                fVar88 = local_168 + fVar85;
                fVar50 = fStack_164 + fVar86;
                fVar53 = fStack_160 + fVar87;
                fVar85 = fVar85 * fVar85;
                fVar86 = fVar86 * fVar86;
                fVar87 = fVar87 * fVar87;
                auVar33._4_4_ = auVar70._8_4_;
                auVar33._0_4_ = fVar53;
                auVar33._8_4_ =
                     fStack_15c + ((fStack_17c - fStack_15c) - (fStack_17c - fStack_16c) * fVar56);
                auVar33._12_4_ = fVar56;
                if ((*(byte *)(local_378 + 0x10) & 0x10) == 0) {
                  fVar37 = 0.0;
                }
                else {
                  fVar37 = (float)((int)*(short *)(local_378 + 0x12) << 0x10);
                  local_388._0_4_ = fVar37;
                }
                auVar6._4_4_ = fVar87 + fVar86 + fVar85;
                auVar6._0_4_ = fVar87 + fVar86 + fVar85;
                auVar6._8_4_ = fVar87 + fVar86 + fVar85;
                auVar6._12_4_ = fVar87 + fVar86 + fVar85;
                auVar70 = sqrtps(auVar34,auVar6);
                auVar34 = sqrtps(auVar33,auVar75);
                auVar71._0_4_ = auVar70._0_4_ + auVar34._0_4_ + fVar37;
                auVar71._4_4_ = auVar70._4_4_ + auVar34._4_4_ + fVar37;
                auVar71._8_4_ = auVar70._8_4_ + auVar34._8_4_ + fVar37;
                auVar71._12_4_ = auVar70._12_4_ + auVar34._12_4_ + fVar37;
                if (param_2[6] == 0) {
                  fVar31 = auVar71._0_4_ + fVar31;
                }
                else {
                  lVar25 = *(longlong *)
                            ((ulonglong)(uVar27 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38));
                  lVar14 = *(longlong *)(lVar25 + 0x20);
                  FUN_144c64ea0(&local_158,*(undefined8 *)(lVar14 + 0x48),
                                *(undefined4 *)(lVar14 + 0x20),lVar14 + 0x120,lVar14 + 0x140,
                                lVar14 + 0x90,uVar23,*(undefined4 *)(lVar14 + 0x50));
                  local_388._0_4_ = uVar23;
                  local_250 = FUN_144c64f60(lVar25,local_388);
                  local_248 = local_158;
                  lStack_240 = lStack_150;
                  lVar25 = *(longlong *)(lVar25 + 0x20);
                  local_258 = uVar12;
                  FUN_144c64ea0(&local_148,*(undefined8 *)(lVar25 + 0x58),
                                *(undefined4 *)(lVar25 + 0x30),lVar25 + 0x130,lVar25 + 0x150,
                                lVar25 + 0x70,uVar27 & 0x3fffff,*(undefined4 *)(lVar25 + 0x60));
                  local_2b0 = local_378;
                  lVar25 = *param_2;
                  local_2a8 = local_148;
                  uStack_2a0 = uStack_140;
                  lVar14 = *(longlong *)
                            (*(longlong *)
                              ((ulonglong)(*(uint *)(local_378 + 8) >> 0x16) * 0x120 +
                              *(longlong *)(lVar25 + 0x38)) + 0x20);
                  local_2b8[0] = uVar27;
                  local_298 = fVar51;
                  fStack_294 = fVar55;
                  fStack_290 = fVar62;
                  uStack_28c = auVar38._12_4_;
                  FUN_144c64ea0(&local_138,*(undefined8 *)(lVar14 + 0x58),
                                *(undefined4 *)(lVar14 + 0x30),lVar14 + 0x130,lVar14 + 0x150,
                                lVar14 + 0x70,*(uint *)(local_378 + 8) & 0x3fffff,
                                *(undefined4 *)(lVar14 + 0x60));
                  local_280 = local_348;
                  plStack_320 = param_2 + 3;
                  fVar31 = (float)local_3a0;
                  local_278 = local_138;
                  lStack_270 = lStack_130;
                  local_318 = local_2b8;
                  local_310 = 0x21;
                  local_308 = (float)local_3a0;
                  fStack_304 = (float)local_3a0;
                  fStack_300 = (float)local_3a0;
                  fStack_2fc = (float)local_3a0;
                  local_328 = lVar25;
                  local_2f8 = auVar71;
                  local_288 = uVar27;
                  local_268 = fVar88;
                  fStack_264 = fVar50;
                  fStack_260 = fVar53;
                  fStack_25c = fVar56;
                  pfVar17 = (float *)(**(code **)(*(longlong *)param_2[6] + 0x28))
                                               ((longlong *)param_2[6],local_128,&local_328);
                  fVar31 = fVar31 + *pfVar17;
                }
              }
              fVar85 = (float)FUN_144c638c0(param_8,uVar4);
              if (((*(byte *)(*(longlong *)(param_5 + 0x48) + 0xe) & 3) == 0) || (fVar31 < fVar85))
              {
                FUN_144c63750(*param_8,*(undefined4 *)(param_8 + 1),uVar4 & 0x3fffff);
                lVar25 = *(longlong *)(param_5 + 0x48);
                uVar3 = *(ushort *)(lVar25 + 0xe);
                uVar32 = FUN_144c63920(param_8,uVar4);
                *(ushort *)(lVar25 + 0xe) = uVar3 & 0xfffd | 1;
                uVar27 = *(uint *)(param_4 + 1);
                uVar26 = (ulonglong)(int)uVar27;
                if ((uVar3 & 1) == 0) {
                  uVar16 = local_2e0;
                  if (*(int *)((longlong)param_4 + 0xc) <= (int)uVar27) break;
                  lVar25 = *param_4;
                  *(uint *)(param_4 + 1) = uVar27 + 1;
                  *(undefined4 *)(lVar25 + 4 + uVar26 * 8) = uVar32;
                  *(uint *)(lVar25 + uVar26 * 8) = uVar4;
                  uVar32 = *(undefined4 *)(*param_4 + uVar26 * 8);
                  iVar22 = *(int *)(*param_4 + 4 + uVar26 * 8);
                  uVar12 = uVar27;
                  while (0 < (int)uVar12) {
                    uVar27 = (int)(uVar12 - 1) / 2;
                    uVar12 = (uint)uVar26;
                    lVar25 = *param_4;
                    if (*(int *)(lVar25 + 4 + (longlong)(int)uVar27 * 8) <= iVar22) break;
                    uVar16 = uVar26 & 0xffffffff;
                    uVar26 = (ulonglong)uVar27;
                    *(undefined8 *)(lVar25 + uVar16 * 8) =
                         *(undefined8 *)(lVar25 + (longlong)(int)uVar27 * 8);
                    uVar12 = uVar27;
                  }
LAB_144c69ea1:
                  *(undefined4 *)(*param_4 + (longlong)(int)uVar12 * 8) = uVar32;
                  *(int *)(*param_4 + 4 + (longlong)(int)uVar12 * 8) = iVar22;
                }
                else {
                  local_3a0 = CONCAT44(local_3a0._4_4_,uVar32);
                  uVar12 = 0;
                  lVar25 = 0;
                  if (0 < (int)uVar27) {
                    puVar15 = (uint *)*param_4;
                    do {
                      if (*puVar15 == uVar4) {
                        *(undefined4 *)(*param_4 + 4 + lVar25 * 8) = uVar32;
                        uVar32 = *(undefined4 *)(*param_4 + lVar25 * 8);
                        iVar22 = *(int *)(*param_4 + 4 + lVar25 * 8);
                        goto joined_r0x000144c69e6f;
                      }
                      uVar12 = uVar12 + 1;
                      lVar25 = lVar25 + 1;
                      puVar15 = puVar15 + 2;
                    } while ((int)uVar12 < (int)uVar27);
                  }
                }
              }
            }
          }
          else {
            lVar14 = *(longlong *)param_3[2];
            if ((*(uint *)(lVar14 + (ulonglong)((uVar27 & 0x3fffff) >> 5) * 4) >>
                 ((byte)uVar27 & 0x1f) & 1) != 0) {
              if ((char)param_3[5] != '\0') goto LAB_144c68f14;
              if ((*(uint *)(lVar14 + (ulonglong)((uVar12 & 0x3fffff) >> 5) * 4) >>
                   ((byte)uVar12 & 0x1f) & 1) != 0) goto LAB_144c68e02;
            }
          }
        }
      }
LAB_144c69eb8:
      puVar15 = local_360 + 1;
      uVar16 = local_2e0;
      fVar31 = local_368;
      local_360 = puVar15;
    } while (puVar15 < local_2e8);
  }
  lVar25 = *(longlong *)(param_5 + 0x50);
  puVar1 = (ushort *)(lVar25 + 0xe);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar25 + 0xe);
  *puVar1 = *puVar1 | 2;
  if (uVar16 == 0) {
    (*DAT_14c787678)(1,local_350);
  }
  else {
    uVar26 = local_338 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar16 + 0x28) < uVar26) ||
       ((longlong)local_350 + uVar26 != *(longlong *)(uVar16 + 0x38))) {
      FUN_144be8550(uVar16,local_350);
      return param_1;
    }
    *(uint **)(uVar16 + 0x38) = local_350;
    if (*(uint **)(uVar16 + 0x48) == local_350) {
      FUN_144be8430(uVar16);
      return param_1;
    }
  }
  return param_1;
joined_r0x000144c69e6f:
  if ((int)uVar12 < 1) goto LAB_144c69ea1;
  uVar27 = (int)(uVar12 - 1) / 2;
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  lVar25 = *param_4;
  if (*(int *)(lVar25 + 4 + (longlong)(int)uVar27 * 8) <= iVar22) goto LAB_144c69ea1;
  *(undefined8 *)(lVar25 + (ulonglong)uVar12 * 8) =
       *(undefined8 *)(lVar25 + (longlong)(int)uVar27 * 8);
  uVar12 = uVar27;
  goto joined_r0x000144c69e6f;
}



// FUNCTION 144c69ff0 FUN_144c69ff0 body=1166 status=ok
// SIG undefined FUN_144c69ff0(void)

undefined4 *
FUN_144c69ff0(undefined4 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 local_res10;
  longlong *local_res18;
  longlong *local_res20;
  char *local_98;
  char *local_90;
  longlong local_88;
  char *local_78;
  char *pcStack_70;
  undefined1 local_68 [16];
  int local_58;
  undefined4 local_54;
  
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar8 = *(char *)(lVar14 + 0x114);
  local_res18 = param_3;
  local_res20 = param_4;
  if (cVar8 == '\0') {
    __dyn_tls_on_demand_init();
    cVar8 = *(char *)(lVar14 + 0x114);
  }
  lVar11 = *(longlong *)(lVar14 + 0xf0);
  if (lVar11 == 0) {
    if (cVar8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar14 + 0xf0) = lVar11;
  }
  local_88 = *(longlong *)(lVar11 + 0x3e0);
  local_78 = "TtcomputeRegions";
  pcStack_70 = "";
  if (local_88 != 0) {
    local_78 = "TtcomputeRegions";
    pcStack_70 = "";
    FUN_144b3f370(local_88,&local_78);
  }
  iVar3 = *(int *)(*(longlong *)(param_2 + 8) + 0x20);
  if (*(char *)(lVar14 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar14 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar14 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar14 + 0xf0) = lVar11;
  }
  pcVar2 = (char *)((longlong)iVar3 * 4);
  uVar15 = 0;
  uVar16 = *(ulonglong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar16 + 8) != 0) {
    uVar16 = uVar15;
  }
  local_78 = pcVar2;
  if (uVar16 == 0) {
    pcVar12 = (char *)(*DAT_14c787670)(1,&local_78,0x40);
  }
  else {
    local_res10 = (ulonglong)(pcVar2 + 0x3f) & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(uVar16 + 0x28)) {
      pcVar12 = *(char **)(uVar16 + 0x38);
      local_98 = pcVar12;
      if (pcVar12 + local_res10 <= *(char **)(uVar16 + 0x40)) {
        *(char **)(uVar16 + 0x38) = pcVar12 + local_res10;
        goto LAB_144c6a15b;
      }
    }
    pcVar12 = (char *)FUN_144b454a0(uVar16,&local_res10);
  }
LAB_144c6a15b:
  pcStack_70 = pcVar12 + (longlong)pcVar2;
  local_98 = pcVar12;
  local_78 = pcVar12;
  FUN_144ff1390(local_68,&local_78);
  lVar14 = *(longlong *)(param_2 + 8);
  local_54 = 0;
  if (0 < *(int *)(lVar14 + 0x20)) {
    do {
      iVar9 = (int)uVar15;
      piVar1 = (int *)(*(longlong *)(lVar14 + 0x18) + (longlong)iVar9 * 0xc);
      piVar13 = piVar1 + 1;
      if (*(short *)(*(longlong *)(lVar14 + 0x18) + 10 + (longlong)iVar9 * 0xc) < 1) {
        piVar13 = piVar1;
      }
      iVar10 = *piVar13;
joined_r0x000144c6a1b6:
      iVar5 = iVar10;
      if (iVar5 != -1) {
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
        lVar14 = lVar11 + (longlong)iVar5 * 0x14;
        if ((*(byte *)(lVar11 + 0x10 + (longlong)iVar5 * 0x14) & 0x40) == 0) {
          uVar6 = local_res10 >> 0x20;
          local_res10 = CONCAT44((int)uVar6,iVar5);
          cVar8 = FUN_144c652a0(param_2,&local_res10,lVar14);
          if (cVar8 != '\0') {
            FUN_144ff13e0(local_68,uVar15,*(uint *)(lVar14 + 0xc) & 0x3fffff);
          }
        }
        iVar4 = piVar1[1];
        if ((iVar5 < iVar4) || (*(short *)((longlong)piVar1 + 10) + -1 + iVar4 <= iVar5))
        goto LAB_144c6a21b;
        goto LAB_144c6a241;
      }
LAB_144c6a24c:
      lVar14 = *(longlong *)(param_2 + 8);
      uVar15 = (ulonglong)(iVar9 + 1U);
      param_4 = local_res20;
      pcVar12 = local_98;
    } while ((int)(iVar9 + 1U) < *(int *)(lVar14 + 0x20));
  }
  plVar7 = local_res18;
  lVar14 = local_res18[1];
  if (0 < (longlong)(int)lVar14) {
    lVar11 = 0;
    do {
      FUN_144ff13e0(local_68,*(undefined4 *)(*plVar7 + lVar11 * 8),
                    *(undefined4 *)(*plVar7 + 4 + lVar11 * 8));
      lVar11 = lVar11 + 1;
      pcVar12 = local_98;
    } while (lVar11 < (int)lVar14);
  }
  iVar9 = FUN_144ff15e0(local_68);
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_1401f86b2(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_141807aa8(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar10 = (int)param_4[1];
  if ((iVar10 < iVar9) || (iVar9 < iVar10)) {
    *(int *)(param_4 + 1) = iVar9;
    iVar10 = iVar9;
  }
  local_78 = (char *)*param_4;
  pcStack_70 = local_78 + (longlong)iVar10 * 4;
  FUN_144ff1650(local_68,&local_78);
  pcVar2 = (char *)*param_4;
  local_90 = pcVar2 + (longlong)(int)local_res20[1] * 4;
  if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < local_58) {
    FUN_141807aa8(param_5,&PTR_vftable_14c6e47a0,(longlong)local_58);
  }
  iVar9 = (int)param_5[1];
  if ((iVar9 < local_58) || (local_58 < iVar9)) {
    *(int *)(param_5 + 1) = local_58;
    iVar9 = local_58;
  }
  local_78 = (char *)*param_5;
  pcStack_70 = local_78 + (longlong)iVar9 * 4;
  local_98 = pcVar2;
  FUN_144ff14b0(local_68,&local_res18,&local_98,&local_78);
  lVar14 = (longlong)iVar3 * 4;
  if ((int)local_res18 < 0) {
    *param_1 = 0x80040200;
    if (uVar16 == 0) {
      (*DAT_14c787678)(1,pcVar12);
    }
    else {
      uVar15 = lVar14 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)(uVar16 + 0x28) < uVar15) ||
         (pcVar12 + uVar15 != *(char **)(uVar16 + 0x38))) {
        FUN_144be8550(uVar16,pcVar12);
      }
      else {
        *(char **)(uVar16 + 0x38) = pcVar12;
        if (*(char **)(uVar16 + 0x48) == pcVar12) {
          FUN_144be8430(uVar16);
        }
      }
    }
  }
  else {
    if (uVar16 == 0) {
      (*DAT_14c787678)(1,pcVar12);
    }
    else {
      uVar15 = lVar14 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)(uVar16 + 0x28) < uVar15) ||
         (pcVar12 + uVar15 != *(char **)(uVar16 + 0x38))) {
        FUN_144be8550(uVar16,pcVar12);
      }
      else {
        *(char **)(uVar16 + 0x38) = pcVar12;
        if (*(char **)(uVar16 + 0x48) == pcVar12) {
          FUN_144be8430(uVar16);
        }
      }
    }
    *param_1 = 0;
  }
  if (local_88 != 0) {
    local_78 = "Et";
    pcStack_70 = "";
    FUN_144b3f260(local_88,&local_78);
  }
  return param_1;
LAB_144c6a21b:
  iVar10 = *piVar1;
  if (iVar5 != *(short *)((longlong)piVar1 + 10) + -1 + iVar4) {
    if ((iVar5 < iVar10) || ((short)piVar1[2] + -1 + iVar10 <= iVar5)) goto LAB_144c6a24c;
LAB_144c6a241:
    iVar10 = iVar5 + 1;
  }
  goto joined_r0x000144c6a1b6;
}



// FUNCTION 144c6a480 FUN_144c6a480 body=6074 status=ok
// SIG undefined FUN_144c6a480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c6a480(longlong param_1,longlong *param_2,float *param_3,longlong *param_4,
                  longlong *param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  char cVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  longlong lVar27;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  float *pfVar35;
  uint uVar36;
  longlong lVar38;
  int iVar39;
  float fVar40;
  undefined1 auVar41 [16];
  uint uVar42;
  uint uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  float fVar52;
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  float fVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar71;
  float fVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  uint local_358;
  char local_354;
  uint local_350;
  uint local_34c;
  uint *local_348;
  int local_340;
  uint local_33c;
  uint local_338;
  undefined4 *local_330;
  longlong local_328;
  uint local_320;
  uint local_31c;
  uint *local_318;
  undefined8 uStack_310;
  longlong local_308;
  ulonglong uStack_300;
  uint local_2f8 [2];
  uint *local_2f0;
  uint *local_2e8;
  longlong lStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  longlong *local_2b8;
  uint *puStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 *local_298;
  undefined1 local_290;
  longlong local_288;
  longlong *plStack_280;
  undefined4 *local_278;
  undefined1 local_270;
  undefined1 local_268 [16];
  undefined4 local_258 [2];
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_228;
  undefined8 local_220;
  longlong local_218;
  ulonglong uStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  uint local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  uint *puStack_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined4 *local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined4 *local_1a8;
  undefined1 local_1a0;
  undefined4 local_198 [2];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  uint local_168;
  undefined8 local_160;
  uint *local_158;
  longlong lStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint local_138;
  undefined8 local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  ulonglong uVar28;
  ulonglong uVar37;
  
  uVar29 = *(uint *)(param_4 + 1);
  if ((int)uVar29 < 1) {
    local_2f8[0] = 0x80000000;
    local_330 = (undefined4 *)0x0;
    local_338 = 0;
  }
  else {
    local_338 = uVar29;
    local_330 = (undefined4 *)
                (**(code **)(PTR_vftable_14c6e47c0 + 8))
                          (&PTR_vftable_14c6e47c0,(longlong)(int)uVar29 << 2);
    uVar30 = (ulonglong)uVar29;
    puVar17 = local_330;
    do {
      if (puVar17 != (undefined4 *)0x0) {
        *puVar17 = 0;
      }
      uVar30 = uVar30 - 1;
      puVar17 = puVar17 + 1;
      local_2f8[0] = uVar29;
    } while (uVar30 != 0);
  }
  puVar17 = local_330;
  uVar28 = 0;
  uVar30 = uVar28;
  if (0 < (int)param_5[1]) {
    do {
      if (-1 < *(int *)(uVar30 + *param_5)) {
        local_330[*(int *)(uVar30 + *param_5)] = local_330[*(int *)(uVar30 + *param_5)] + 1;
      }
      uVar29 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar29;
      uVar30 = uVar30 + 4;
    } while ((int)uVar29 < (int)param_5[1]);
  }
  FUN_144ca7ee0(local_108);
  local_34c = (int)param_4[1] - 1;
  local_348 = (uint *)0x0;
  local_340 = 0;
  local_33c = 0x80000000;
  local_318 = (uint *)0x0;
  uStack_310 = -0x8000000000000000;
  local_308 = 0;
  uStack_300 = 0x8000000000000000;
  local_2f0 = (uint *)0x0;
  if (-1 < (int)local_34c) {
    local_328 = (longlong)(int)local_34c * 4;
    do {
      uVar29 = *(uint *)(local_328 + *param_4);
      lVar38 = (longlong)(int)uVar29;
      uVar31 = local_34c;
      if ((int)puVar17[*(int *)(*param_5 + lVar38 * 4)] < 2) {
        uVar31 = *(uint *)(*(longlong *)(param_1 + 0x18) + lVar38 * 0xc);
        local_2c8 = *(longlong *)(param_1 + 0x18) + lVar38 * 0xc;
        bVar14 = false;
        iVar39 = (int)*(short *)(local_2c8 + 8) + uVar31;
        if ((int)uVar31 < iVar39) {
          do {
            if (bVar14) goto LAB_144c6acfe;
            local_358 = uVar31 & 0x3fffff;
            lVar18 = FUN_144c46e20(*(undefined8 *)
                                    ((ulonglong)(uVar31 >> 0x16) * 0x120 +
                                    *(longlong *)(*param_2 + 0x38)));
            if ((*(uint *)(lVar18 + 8) == 0xffffffff) || ((*(byte *)(lVar18 + 0x10) & 0x20) != 0)) {
LAB_144c6acfa:
              bVar14 = false;
            }
            else if ((longlong *)param_2[2] == (longlong *)0x0) {
              if ((char)param_2[5] == '\0') {
LAB_144c6a6f2:
                local_358 = uVar31 & 0x3fffff;
                FUN_144c65070(*(undefined8 *)
                               ((ulonglong)(uVar31 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38)
                               ),&local_320,&local_358);
                local_358 = local_320 & 0x3fffff;
                lVar19 = FUN_144c46e20(*(undefined8 *)
                                        ((ulonglong)(local_320 >> 0x16) * 0x120 +
                                        *(longlong *)(*param_2 + 0x38)));
                if ((*(byte *)(lVar19 + 0x10) & 0x20) != 0) goto LAB_144c6acfa;
              }
LAB_144c6a764:
              uVar33 = uVar31 & 0x3fffff;
              uVar25 = uVar29 & 0x3fffff;
              if ((*(uint *)(lVar18 + 0xc) & 0x3fffff) == uVar25) goto LAB_144c6acfa;
              fVar40 = *(float *)(param_2 + 0xe);
              lVar18 = *(longlong *)(param_2[1] + 0x28);
              lVar19 = *(longlong *)(param_2[1] + 0x38);
              pfVar1 = (float *)(lVar19 + (longlong)*(int *)(lVar18 + (ulonglong)uVar33 * 0x14) *
                                          0x10);
              fVar90 = *pfVar1;
              fVar91 = pfVar1[1];
              local_288 = *(longlong *)pfVar1;
              fVar92 = pfVar1[2];
              fVar93 = pfVar1[3];
              plStack_280 = *(longlong **)(pfVar1 + 2);
              pfVar1 = (float *)(lVar19 + (longlong)*(int *)(lVar18 + 4 + (ulonglong)uVar33 * 0x14)
                                          * 0x10);
              fVar10 = *pfVar1;
              fVar11 = pfVar1[1];
              local_2a8 = *(longlong **)pfVar1;
              fVar12 = pfVar1[2];
              uStack_2a0 = *(uint **)(pfVar1 + 2);
              if (0.0 <= fVar40) {
                fVar66 = fVar90 - fVar10;
                fVar71 = fVar91 - fVar11;
                fVar72 = fVar92 - fVar12;
                fVar74 = fVar91 - *(float *)((longlong)param_2 + 0x54);
                fVar55 = fVar66 * fVar66;
                fVar59 = fVar71 * fVar71;
                fVar62 = fVar72 * fVar72;
                fVar46 = (fVar90 - *(float *)(param_2 + 10)) * fVar66;
                fVar52 = fVar74 * fVar71;
                fVar53 = (fVar92 - *(float *)(param_2 + 0xb)) * fVar72;
                auVar80._0_4_ = fVar53 + fVar52 + fVar46;
                auVar80._4_4_ = fVar53 + fVar52 + fVar46;
                auVar80._8_4_ = fVar53 + fVar52 + fVar46;
                auVar80._12_4_ = fVar53 + fVar52 + fVar46;
                auVar49._4_4_ = fVar62 + fVar59 + fVar55;
                auVar49._0_4_ = fVar62 + fVar59 + fVar55;
                auVar49._8_4_ = fVar62 + fVar59 + fVar55;
                auVar49._12_4_ = fVar62 + fVar59 + fVar55;
                auVar49 = divps(auVar80,auVar49);
                auVar49 = minps(auVar49,_DAT_1499314a0);
                auVar49 = maxps(auVar49,ZEXT816(0));
                fVar46 = (fVar90 - *(float *)(param_2 + 10)) - auVar49._0_4_ * fVar66;
                fVar74 = fVar74 - auVar49._4_4_ * fVar71;
                fVar52 = (fVar92 - *(float *)(param_2 + 0xb)) - auVar49._8_4_ * fVar72;
                if (fVar40 * fVar40 < fVar52 * fVar52 + fVar74 * fVar74 + fVar46 * fVar46)
                goto LAB_144c6acfa;
              }
              fVar40 = *(float *)(param_2 + 0x10);
              uVar30 = 0;
              if (0.0 <= fVar40) {
                fVar46 = fVar10 - fVar90;
                fVar52 = fVar11 - fVar91;
                fVar53 = fVar12 - fVar92;
                fVar55 = pfVar1[3] - fVar93;
                uVar36 = 0;
                if (0 < (int)param_2[0xd]) {
                  fVar59 = *(float *)(param_2 + 10);
                  local_2e8 = (uint *)param_2[10];
                  fVar62 = *(float *)(param_2 + 0xb);
                  lStack_2e0 = param_2[0xb];
                  auVar13._4_4_ = uRam000000014c6daca4;
                  auVar13._0_4_ = _DAT_14c6daca0;
                  auVar13._8_4_ = uRam000000014c6daca8;
                  auVar13._12_4_ = uRam000000014c6dacac;
                  fVar66 = fVar90 - fVar59;
                  fVar71 = fVar91 - *(float *)((longlong)param_2 + 0x54);
                  fVar72 = fVar92 - fVar62;
                  uVar54 = 0x3f800000;
                  uVar58 = 0x3f800000;
                  uVar61 = 0x3f800000;
                  uVar64 = 0x3f800000;
                  pfVar35 = (float *)param_2[0xc];
                  local_268._0_4_ = fVar46 * fVar46;
                  local_268._4_4_ = fVar52 * fVar52;
                  local_268._8_4_ = fVar53 * fVar53;
                  local_268._12_4_ = fVar55 * fVar55;
                  local_2d8 = CONCAT44(*(float *)((longlong)param_2 + 0x84) *
                                       *(float *)((longlong)param_2 + 0x84),fVar40 * fVar40);
                  uStack_2d0 = CONCAT44(*(float *)((longlong)param_2 + 0x8c) *
                                        *(float *)((longlong)param_2 + 0x8c),
                                        *(float *)(param_2 + 0x11) * *(float *)(param_2 + 0x11));
                  uVar28 = uVar30;
                  do {
                    uVar36 = (uint)uVar28;
                    fVar87 = *pfVar35 - fVar59;
                    fVar88 = pfVar35[1] - *(float *)((longlong)param_2 + 0x54);
                    fVar89 = pfVar35[2] - fVar62;
                    fVar55 = fVar88 * fVar46 - fVar87 * fVar52;
                    fVar74 = fVar89 * fVar52 - fVar88 * fVar53;
                    fVar44 = fVar87 * fVar53 - fVar89 * fVar46;
                    fVar81 = fVar74 * fVar74;
                    fVar83 = fVar44 * fVar44;
                    fVar85 = fVar55 * fVar55;
                    fVar82 = fVar85 + fVar83 + fVar81;
                    fVar84 = fVar85 + fVar83 + fVar81;
                    fVar86 = fVar85 + fVar83 + fVar81;
                    if (fVar82 == 0.0) {
                      auVar49 = ZEXT816(0);
                    }
                    else {
                      auVar9._4_4_ = fVar84;
                      auVar9._0_4_ = fVar82;
                      auVar9._8_4_ = fVar86;
                      auVar9._12_4_ = fVar85 + fVar83 + fVar81;
                      auVar49 = divps(auVar13,auVar9);
                    }
                    fVar81 = fVar87 * fVar46;
                    fVar83 = fVar88 * fVar52;
                    fVar76 = fVar89 * fVar53;
                    fVar85 = (fVar53 * fVar44 - fVar55 * fVar52) * fVar66;
                    fVar55 = (fVar46 * fVar55 - fVar74 * fVar53) * fVar71;
                    fVar74 = (fVar52 * fVar74 - fVar44 * fVar46) * fVar72;
                    auVar78._0_4_ = (fVar74 + fVar55 + fVar85) * auVar49._0_4_;
                    auVar78._4_4_ = (fVar74 + fVar55 + fVar85) * auVar49._4_4_;
                    auVar78._8_4_ = (fVar74 + fVar55 + fVar85) * auVar49._8_4_;
                    auVar78._12_4_ = (fVar74 + fVar55 + fVar85) * auVar49._12_4_;
                    fVar73 = fVar76 + fVar83 + fVar81;
                    fVar75 = fVar76 + fVar83 + fVar81;
                    fVar77 = fVar76 + fVar83 + fVar81;
                    fVar76 = fVar76 + fVar83 + fVar81;
                    auVar7._4_4_ = uVar58;
                    auVar7._0_4_ = uVar54;
                    auVar7._8_4_ = uVar61;
                    auVar7._12_4_ = uVar64;
                    auVar49 = minps(auVar78,auVar7);
                    auVar80 = maxps(auVar49,ZEXT816(0));
                    auVar67._0_4_ = fVar88 * fVar88 + fVar87 * fVar87 + fVar89 * fVar89;
                    auVar67._4_4_ = fVar88 * fVar71 + fVar87 * fVar66 + fVar89 * fVar72;
                    auVar67._8_4_ = local_268._4_4_ + local_268._0_4_ + local_268._8_4_;
                    auVar67._12_4_ = fVar52 * fVar71 + fVar46 * fVar66 + fVar53 * fVar72;
                    auVar49 = divps(auVar13,auVar67);
                    fVar57 = (float)(~-(uint)(auVar67._0_4_ == 0.0) & auVar49._0_4_);
                    fVar81 = (float)(~-(uint)(auVar67._8_4_ == 0.0) & auVar49._8_4_);
                    fVar55 = (auVar80._0_4_ * fVar73 - auVar67._12_4_) * fVar81;
                    fVar74 = (auVar80._4_4_ * fVar75 - auVar67._12_4_) * fVar81;
                    fVar44 = (auVar80._8_4_ * fVar77 - auVar67._12_4_) * fVar81;
                    auVar47._4_4_ = fVar74;
                    auVar47._0_4_ = fVar55;
                    auVar47._8_4_ = fVar44;
                    auVar47._12_4_ = (auVar80._12_4_ * fVar76 - auVar67._12_4_) * fVar81;
                    auVar49 = minps(auVar47,_DAT_1499314a0);
                    auVar49 = maxps(auVar49,ZEXT816(0));
                    fVar81 = auVar49._0_4_;
                    fVar83 = auVar49._4_4_;
                    fVar85 = auVar49._8_4_;
                    uVar42 = -(uint)(fVar82 != 0.0 && fVar55 == fVar81);
                    uVar43 = -(uint)(fVar84 != 0.0 && fVar74 == fVar83);
                    uVar45 = -(uint)(fVar86 != 0.0 && fVar44 == fVar85);
                    auVar68._0_4_ = (auVar67._4_4_ + fVar73 * fVar81) * fVar57;
                    auVar68._4_4_ = (auVar67._4_4_ + fVar75 * fVar83) * fVar57;
                    auVar68._8_4_ = (auVar67._4_4_ + fVar77 * fVar85) * fVar57;
                    auVar68._12_4_ = (auVar67._4_4_ + fVar76 * auVar49._12_4_) * fVar57;
                    uVar54 = (undefined4)DAT_1499314a0;
                    uVar58 = DAT_1499314a0._4_4_;
                    uVar61 = DAT_1499314a0._8_4_;
                    uVar64 = DAT_1499314a0._12_4_;
                    auVar49 = minps(auVar68,_DAT_1499314a0);
                    auVar49 = maxps(auVar49,ZEXT816(0));
                    fVar55 = (fVar66 - (float)((uint)auVar80._0_4_ & uVar42 |
                                              ~uVar42 & auVar49._0_4_) * fVar87) + fVar46 * fVar81;
                    fVar74 = (fVar71 - (float)((uint)auVar80._4_4_ & uVar43 |
                                              ~uVar43 & auVar49._4_4_) * fVar88) + fVar52 * fVar83;
                    fVar44 = (fVar72 - (float)((uint)auVar80._8_4_ & uVar45 |
                                              ~uVar45 & auVar49._8_4_) * fVar89) + fVar53 * fVar85;
                    if (fVar44 * fVar44 + fVar74 * fVar74 + fVar55 * fVar55 <= fVar40 * fVar40)
                    break;
                    uVar36 = uVar36 + 1;
                    uVar28 = (ulonglong)uVar36;
                    uVar30 = uVar30 + 1;
                    pfVar35 = pfVar35 + 4;
                  } while ((longlong)uVar30 < (longlong)(int)param_2[0xd]);
                }
                if (uVar36 == *(uint *)(param_2 + 0xd)) goto LAB_144c6acfa;
              }
              if (param_2[7] != 0) {
                fVar90 = fVar90 + (fVar10 - fVar90) * _DAT_14c6dad90;
                fVar91 = fVar91 + (fVar11 - fVar91) * fRam000000014c6dad94;
                fVar92 = fVar92 + (fVar12 - fVar92) * fRam000000014c6dad98;
                fVar93 = fVar93 + (pfVar1[3] - fVar93) * fRam000000014c6dad9c;
                puVar34 = *(uint **)((ulonglong)(uVar31 >> 0x16) * 0x120 +
                                    *(longlong *)(*param_2 + 0x38));
                local_250 = 0;
                local_258[0] = 0xffffffff;
                local_248 = 0;
                uStack_240 = 0;
                local_358 = uVar25;
                local_2e8 = puVar34;
                plVar20 = (longlong *)FUN_144c65010(puVar34,&local_1d8,&local_358);
                plVar21 = (longlong *)*plVar20;
                puVar26 = (uint *)plVar20[1];
                local_358 = uVar25;
                local_1f0 = FUN_144c64f60(puVar34,&local_358);
                local_358 = uVar33;
                local_1f8 = uVar29;
                local_1e8 = plVar21;
                puStack_1e0 = puVar26;
                plVar21 = (longlong *)FUN_144c64fc0(puVar34,&local_1b8,&local_358);
                lVar18 = *plVar21;
                uVar30 = plVar21[1];
                local_358 = uVar33;
                local_220 = FUN_144c46e20(puVar34,&local_358);
                local_2a8 = (longlong *)*param_2;
                uStack_2a0 = (uint *)(param_2 + 3);
                local_298 = local_258;
                local_290 = 0x21;
                local_228 = uVar31;
                local_218 = lVar18;
                uStack_210 = uVar30;
                local_208 = fVar90;
                fStack_204 = fVar91;
                fStack_200 = fVar92;
                fStack_1fc = fVar93;
                cVar16 = (**(code **)(*(longlong *)param_2[7] + 0x28))();
                if (cVar16 == '\0') goto LAB_144c6acfa;
                if ((char)param_2[5] == '\0') {
                  local_358 = uVar33;
                  FUN_144c5ee50(puVar34,&local_31c,&local_358);
                  uVar25 = local_31c;
                  local_358 = local_31c & 0x3fffff;
                  local_2d8 = 0;
                  uStack_2d0 = 0;
                  uVar23 = FUN_144c44fc0(*(undefined8 *)
                                          (*(longlong *)
                                            ((ulonglong)(local_31c >> 0x16) * 0x120 +
                                            *(longlong *)(*param_2 + 0x38)) + 0x20),&local_358,
                                         &local_2d8);
                  local_358 = uVar33;
                  FUN_144c65070(local_2e8,&local_350,&local_358);
                  uVar33 = local_350;
                  local_358 = local_350 & 0x3fffff;
                  local_2e8 = (uint *)0x0;
                  lStack_2e0 = 0;
                  local_160 = FUN_144c450c0(*(undefined8 *)
                                             (*(longlong *)
                                               ((ulonglong)(local_350 >> 0x16) * 0x120 +
                                               *(longlong *)(*param_2 + 0x38)) + 0x20),&local_358,
                                            &local_2e8);
                  local_288 = *param_2;
                  local_188 = 0;
                  uStack_180 = 0;
                  plStack_280 = param_2 + 3;
                  local_278 = local_198;
                  local_128 = local_2d8;
                  uStack_120 = uStack_2d0;
                  local_198[0] = 0xffffffff;
                  local_190 = 0;
                  local_158 = local_2e8;
                  lStack_150 = lStack_2e0;
                  local_138 = uVar25;
                  local_168 = uVar33;
                  local_270 = 0x21;
                  local_148 = fVar90;
                  fStack_144 = fVar91;
                  fStack_140 = fVar92;
                  fStack_13c = fVar93;
                  local_130 = uVar23;
                  cVar16 = (**(code **)(*(longlong *)param_2[7] + 0x28))();
                  if (cVar16 == '\0') goto LAB_144c6acfa;
                }
              }
LAB_144c6acfe:
              bVar14 = true;
            }
            else {
              lVar19 = *(longlong *)param_2[2];
              if ((*(uint *)(lVar19 + (ulonglong)((uVar31 & 0x3fffff) >> 5) * 4) >>
                   ((byte)uVar31 & 0x1f) & 1) == 0) goto LAB_144c6acfa;
              if ((char)param_2[5] != '\0') goto LAB_144c6a764;
              uVar33 = *(uint *)(lVar18 + 8) & 0x3fffff;
              if ((*(uint *)(lVar19 + (ulonglong)(uVar33 >> 5) * 4) >> ((byte)uVar33 & 0x1f) & 1) !=
                  0) goto LAB_144c6a6f2;
              bVar14 = false;
            }
            uVar31 = uVar31 + 1;
          } while ((int)uVar31 < iVar39);
          puVar17 = local_330;
          uVar31 = local_34c;
          if (bVar14) goto LAB_144c6af47;
        }
        uVar31 = local_34c;
        lVar18 = 0;
        local_340 = 0;
        iVar39 = *(short *)(local_2c8 + 8) + 1;
        if ((int)(local_33c & 0x7fffffff) < iVar39) {
          FUN_1418055da(&local_348,&PTR_vftable_14c6e47a0,(longlong)iVar39);
        }
        if ((local_340 < iVar39) || (iVar39 < local_340)) {
          local_340 = iVar39;
        }
        FUN_144c52880(param_1,local_2c8,&local_348);
        iVar24 = local_340 + -1;
        uVar29 = uStack_310._4_4_ & 0x7fffffff;
        uStack_310 = (ulonglong)uStack_310._4_4_ << 0x20;
        iVar39 = 0;
        local_340 = iVar24;
        if ((int)uVar29 < iVar24) {
          FUN_144c587a0(&local_318,&PTR_vftable_14c6e47a0,(longlong)iVar24);
          iVar39 = (int)uStack_310;
        }
        if ((iVar39 < iVar24) || (iVar24 < iVar39)) {
          uStack_310 = CONCAT44(uStack_310._4_4_,iVar24);
        }
        iVar39 = 0;
        lVar19 = lVar18;
        if (0 < local_340) {
          do {
            iVar39 = iVar39 + 1;
            pfVar1 = (float *)((longlong)local_348 + lVar19);
            fVar40 = *pfVar1;
            fVar90 = pfVar1[1];
            fVar91 = pfVar1[2];
            *(float *)((longlong)local_318 + lVar18) =
                 fVar91 * fStack_f0 + fVar90 * fStack_f4 + fVar40 * local_f8;
            *(float *)((longlong)local_318 + lVar18 + 4) =
                 fVar91 * fStack_e0 + fVar90 * fStack_e4 + fVar40 * local_e8;
            lVar18 = lVar18 + 8;
            lVar19 = lVar19 + 0x10;
          } while (iVar39 < local_340);
        }
        uStack_300 = uStack_300 & 0xffffffff00000000;
        FUN_144ff7b90(&local_308,&local_318,*param_3 * 0.5,8);
        local_2b8 = &local_308;
        puStack_2b0 = local_2f8;
        local_2a8 = local_2b8;
        uStack_2a0 = puStack_2b0;
        cVar16 = FUN_144ff8830(&local_2a8,&local_2f0,local_118);
        puVar17 = local_330;
        if (cVar16 == '\0') {
          *(undefined4 *)(*param_5 + lVar38 * 4) = 0xffffffff;
          lVar38 = param_4[1];
          uVar29 = (int)lVar38 - 1;
          *(uint *)(param_4 + 1) = uVar29;
          if (uVar29 != uVar31) {
            puVar2 = (undefined4 *)(*param_4 + ((longlong)(int)lVar38 + -1) * 4);
            puVar3 = (undefined4 *)(*param_4 + local_328);
            if (puVar3 != puVar2) {
              *puVar3 = *puVar2;
            }
          }
          local_338 = local_338 - 1;
          if (local_338 != uVar31) {
            if ((undefined4 *)((longlong)local_330 + local_328) != local_330 + (int)local_338) {
              *(undefined4 *)((longlong)local_330 + local_328) = local_330[(int)local_338];
            }
          }
          puVar26 = (uint *)*param_5;
          puVar34 = puVar26 + (int)param_5[1];
          for (; puVar26 != puVar34; puVar26 = puVar26 + 1) {
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
            if (*puVar26 == *(uint *)(param_4 + 1)) {
              *puVar26 = uVar31;
            }
          }
        }
      }
LAB_144c6af47:
      local_34c = uVar31 - 1;
      local_328 = local_328 + -4;
    } while (-1 < (int)local_34c);
  }
  FUN_144c65f40(&local_308);
  FUN_144c65f40(&local_318);
  local_340 = 0;
  if ((-1 < (int)local_33c) && (local_348 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_348,(ulonglong)(local_33c & 0x7fffffff) << 4);
  }
  local_354 = '\0';
  uVar54 = _DAT_14c6daca0;
  uVar58 = uRam000000014c6daca4;
  uVar61 = uRam000000014c6daca8;
  uVar64 = uRam000000014c6dacac;
LAB_144c6afc1:
  bVar14 = false;
  uVar29 = (int)param_4[1] - 1;
  bVar15 = false;
  local_34c = uVar29;
  if (-1 < (int)uVar29) goto code_r0x000144c6afde;
  goto LAB_144c6bbac;
code_r0x000144c6afde:
  local_328 = (longlong)(int)uVar29;
  do {
    iVar39 = 0;
    uVar31 = *(uint *)(*param_4 + local_328 * 4);
    lVar38 = (longlong)(int)uVar31;
    if ((int)local_330[*(int *)(*param_5 + lVar38 * 4)] < 2) {
      local_348 = (uint *)0x0;
      uVar30 = (ulonglong)(uVar31 & 0x3fffff);
      local_340 = 0;
      local_33c = 0x80000000;
      iVar24 = (int)*(short *)(*(longlong *)(param_2[1] + 0x18) + 10 + uVar30 * 0xc) +
               (int)*(short *)(*(longlong *)(param_2[1] + 0x18) + 8 + uVar30 * 0xc);
      local_34c = uVar29;
      if (0 < iVar24) {
        FUN_144c313c0(&local_348,&PTR_vftable_14c6e47c0,(longlong)iVar24);
        uVar54 = _DAT_14c6daca0;
        uVar58 = uRam000000014c6daca4;
        uVar61 = uRam000000014c6daca8;
        uVar64 = uRam000000014c6dacac;
      }
      lVar18 = *(longlong *)(param_2[1] + 0x18);
      sVar4 = *(short *)(lVar18 + 8 + uVar30 * 0xc);
      iVar24 = (int)*(short *)(lVar18 + 10 + uVar30 * 0xc) + (int)sVar4;
      if ((local_340 < iVar24) || (iVar32 = local_340, iVar24 < local_340)) {
        iVar32 = iVar24;
      }
      puVar34 = local_348;
      if (0 < sVar4) {
        iVar24 = iVar39;
        do {
          uVar33 = *(int *)(lVar18 + uVar30 * 0xc) + iVar24;
          iVar24 = iVar24 + 1;
          *puVar34 = (uVar31 >> 0x16) << 0x16 | uVar33;
          puVar34 = puVar34 + 1;
          uVar54 = _DAT_14c6daca0;
          uVar58 = uRam000000014c6daca4;
          uVar61 = uRam000000014c6daca8;
          uVar64 = uRam000000014c6dacac;
        } while (iVar24 < *(short *)(lVar18 + 8 + uVar30 * 0xc));
      }
      if (0 < *(short *)(lVar18 + 10 + uVar30 * 0xc)) {
        do {
          uVar33 = *(int *)(lVar18 + 4 + uVar30 * 0xc) + iVar39;
          iVar39 = iVar39 + 1;
          *puVar34 = uVar33 | (uVar31 >> 0x16) << 0x16;
          puVar34 = puVar34 + 1;
          uVar54 = _DAT_14c6daca0;
          uVar58 = uRam000000014c6daca4;
          uVar61 = uRam000000014c6daca8;
          uVar64 = uRam000000014c6dacac;
        } while (iVar39 < *(short *)(lVar18 + 10 + uVar30 * 0xc));
      }
      local_2e8 = local_348 + iVar32;
      local_2f0 = local_348;
      bVar14 = bVar15;
      if (local_348 != local_2e8) {
LAB_144c6b130:
        uVar30 = 0;
        uVar29 = *local_2f0;
        uVar33 = uVar29 & 0x3fffff;
        uVar28 = (ulonglong)uVar33;
        lVar18 = *(longlong *)
                  (*(longlong *)
                    ((ulonglong)(uVar29 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38)) + 0x20);
        if ((int)uVar33 < *(int *)(lVar18 + 0x30)) {
          if (*(int *)(lVar18 + 0x78) != 0) {
            uVar33 = *(uint *)(*(longlong *)(lVar18 + 0x70) + uVar28 * 4);
          }
          if (uVar33 == 0xffffffff) {
            lVar18 = *(longlong *)(lVar18 + 0x28);
            lVar19 = uVar28 * 5;
          }
          else {
            lVar19 = (longlong)(int)uVar33 * 5;
            lVar18 = *(longlong *)(lVar18 + 0xc0);
          }
        }
        else {
          lVar19 = (longlong)(int)(uVar33 - *(int *)(lVar18 + 0x30)) * 5;
          lVar18 = *(longlong *)(lVar18 + 0xe0);
        }
        uVar33 = *(uint *)(lVar18 + 8 + lVar19 * 4);
        lVar18 = lVar18 + lVar19 * 4;
        if ((uVar33 == 0xffffffff) || ((*(byte *)(lVar18 + 0x10) & 0x20) != 0)) goto LAB_144c6bb0d;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          lVar19 = *(longlong *)param_2[2];
          if ((*(uint *)(lVar19 + (ulonglong)((uVar29 & 0x3fffff) >> 5) * 4) >>
               ((byte)(uVar29 & 0x3fffff) & 0x1f) & 1) != 0) {
            if ((char)param_2[5] != '\0') goto LAB_144c6b33b;
            uVar33 = uVar33 & 0x3fffff;
            if ((*(uint *)(lVar19 + (ulonglong)(uVar33 >> 5) * 4) >> ((byte)uVar33 & 0x1f) & 1) != 0
               ) goto LAB_144c6b229;
          }
          goto LAB_144c6bb0d;
        }
        if ((char)param_2[5] == '\0') {
LAB_144c6b229:
          uVar33 = uVar29 & 0x3fffff;
          uVar28 = (ulonglong)uVar33;
          lVar19 = *(longlong *)
                    (*(longlong *)
                      ((ulonglong)(uVar29 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38)) + 0x20)
          ;
          if ((int)uVar33 < *(int *)(lVar19 + 0x30)) {
            if (*(int *)(lVar19 + 0x78) != 0) {
              uVar33 = *(uint *)(*(longlong *)(lVar19 + 0x70) + uVar28 * 4);
            }
            if (uVar33 == 0xffffffff) {
              lVar22 = *(longlong *)(lVar19 + 0x28);
              lVar27 = uVar28 * 5;
            }
            else {
              lVar27 = (longlong)(int)uVar33 * 5;
              lVar22 = *(longlong *)(lVar19 + 0xc0);
            }
          }
          else {
            lVar27 = (longlong)(int)(uVar33 - *(int *)(lVar19 + 0x30)) * 5;
            lVar22 = *(longlong *)(lVar19 + 0xe0);
          }
          uVar33 = *(uint *)(lVar22 + lVar27 * 4 + 8);
          if (((*(byte *)(lVar22 + 0x10 + lVar27 * 4) & 0x40) == 0) && (uVar33 != 0xffffffff)) {
            uVar33 = uVar33 & 0x3fffff | *(int *)(lVar19 + 0x17c) << 0x16;
          }
          uVar25 = uVar33 & 0x3fffff;
          uVar28 = (ulonglong)uVar25;
          lVar19 = *(longlong *)
                    (*(longlong *)
                      ((ulonglong)(uVar33 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38)) + 0x20)
          ;
          if ((int)uVar25 < *(int *)(lVar19 + 0x30)) {
            if (*(int *)(lVar19 + 0x78) != 0) {
              uVar25 = *(uint *)(*(longlong *)(lVar19 + 0x70) + uVar28 * 4);
            }
            if (uVar25 == 0xffffffff) {
              lVar19 = *(longlong *)(lVar19 + 0x28);
              lVar22 = uVar28 * 5;
            }
            else {
              lVar22 = (longlong)(int)uVar25 * 5;
              lVar19 = *(longlong *)(lVar19 + 0xc0);
            }
          }
          else {
            lVar22 = (longlong)(int)(uVar25 - *(int *)(lVar19 + 0x30)) * 5;
            lVar19 = *(longlong *)(lVar19 + 0xe0);
          }
          if ((*(byte *)(lVar19 + 0x10 + lVar22 * 4) & 0x20) != 0) goto LAB_144c6bb0d;
        }
LAB_144c6b33b:
        uVar25 = uVar29 & 0x3fffff;
        uVar28 = (ulonglong)uVar25;
        uVar33 = uVar31 & 0x3fffff;
        if ((*(uint *)(lVar18 + 0xc) & 0x3fffff) == uVar33) goto LAB_144c6bb0d;
        fVar40 = *(float *)(param_2 + 0xe);
        lVar18 = *(longlong *)(param_2[1] + 0x28);
        lVar19 = *(longlong *)(param_2[1] + 0x38);
        pfVar1 = (float *)(lVar19 + (longlong)*(int *)(lVar18 + uVar28 * 0x14) * 0x10);
        fVar90 = *pfVar1;
        fVar91 = pfVar1[1];
        local_318 = *(uint **)pfVar1;
        fVar92 = pfVar1[2];
        fVar93 = pfVar1[3];
        uStack_310 = *(longlong *)(pfVar1 + 2);
        pfVar1 = (float *)(lVar19 + (longlong)*(int *)(lVar18 + 4 + uVar28 * 0x14) * 0x10);
        fVar10 = *pfVar1;
        fVar11 = pfVar1[1];
        local_308 = *(longlong *)pfVar1;
        fVar12 = pfVar1[2];
        uStack_300 = *(ulonglong *)(pfVar1 + 2);
        if (0.0 <= fVar40) {
          fVar66 = fVar90 - fVar10;
          fVar71 = fVar91 - fVar11;
          fVar72 = fVar92 - fVar12;
          fVar74 = fVar91 - *(float *)((longlong)param_2 + 0x54);
          fVar46 = fVar66 * (fVar90 - *(float *)(param_2 + 10));
          fVar52 = fVar71 * fVar74;
          fVar53 = fVar72 * (fVar92 - *(float *)(param_2 + 0xb));
          fVar55 = fVar66 * fVar66;
          fVar59 = fVar71 * fVar71;
          fVar62 = fVar72 * fVar72;
          auVar48._0_4_ = fVar53 + fVar52 + fVar46;
          auVar48._4_4_ = fVar53 + fVar52 + fVar46;
          auVar48._8_4_ = fVar53 + fVar52 + fVar46;
          auVar48._12_4_ = fVar53 + fVar52 + fVar46;
          auVar5._4_4_ = fVar62 + fVar59 + fVar55;
          auVar5._0_4_ = fVar62 + fVar59 + fVar55;
          auVar5._8_4_ = fVar62 + fVar59 + fVar55;
          auVar5._12_4_ = fVar62 + fVar59 + fVar55;
          auVar49 = divps(auVar48,auVar5);
          auVar49 = minps(auVar49,_DAT_1499314a0);
          auVar49 = maxps(auVar49,ZEXT816(0));
          fVar46 = (fVar90 - *(float *)(param_2 + 10)) - auVar49._0_4_ * fVar66;
          fVar74 = fVar74 - auVar49._4_4_ * fVar71;
          fVar52 = (fVar92 - *(float *)(param_2 + 0xb)) - auVar49._8_4_ * fVar72;
          if (fVar40 * fVar40 < fVar52 * fVar52 + fVar74 * fVar74 + fVar46 * fVar46)
          goto LAB_144c6bb0d;
        }
        auVar49 = *(undefined1 (*) [16])(param_2 + 0x10);
        fVar40 = auVar49._0_4_;
        if (0.0 <= fVar40) {
          fVar46 = fVar10 - fVar90;
          fVar52 = fVar11 - fVar91;
          fVar53 = fVar12 - fVar92;
          fVar55 = pfVar1[3] - fVar93;
          uVar36 = 0;
          if (0 < (int)param_2[0xd]) {
            fVar59 = *(float *)(param_2 + 10);
            local_288 = param_2[10];
            fVar62 = *(float *)(param_2 + 0xb);
            plStack_280 = (longlong *)param_2[0xb];
            uVar56 = 0x3f800000;
            uVar60 = 0x3f800000;
            uVar63 = 0x3f800000;
            uVar65 = 0x3f800000;
            fVar66 = fVar90 - fVar59;
            fVar71 = fVar91 - *(float *)((longlong)param_2 + 0x54);
            fVar72 = fVar92 - fVar62;
            pfVar35 = (float *)param_2[0xc];
            local_268._0_4_ = fVar46 * fVar46;
            local_268._4_4_ = fVar52 * fVar52;
            local_268._8_4_ = fVar53 * fVar53;
            local_268._12_4_ = fVar55 * fVar55;
            local_2a8 = (longlong *)CONCAT44(auVar49._4_4_ * auVar49._4_4_,fVar40 * fVar40);
            uStack_2a0 = (uint *)CONCAT44(auVar49._12_4_ * auVar49._12_4_,
                                          auVar49._8_4_ * auVar49._8_4_);
            uVar37 = uVar30;
            do {
              uVar36 = (uint)uVar37;
              fVar87 = *pfVar35 - fVar59;
              fVar88 = pfVar35[1] - *(float *)((longlong)param_2 + 0x54);
              fVar89 = pfVar35[2] - fVar62;
              fVar55 = fVar88 * fVar46 - fVar52 * fVar87;
              fVar74 = fVar89 * fVar52 - fVar53 * fVar88;
              fVar44 = fVar87 * fVar53 - fVar46 * fVar89;
              fVar81 = fVar74 * fVar74;
              fVar83 = fVar44 * fVar44;
              fVar85 = fVar55 * fVar55;
              fVar82 = fVar85 + fVar83 + fVar81;
              fVar84 = fVar85 + fVar83 + fVar81;
              fVar86 = fVar85 + fVar83 + fVar81;
              if (fVar82 == 0.0) {
                auVar49 = ZEXT816(0);
              }
              else {
                auVar50._4_4_ = uVar58;
                auVar50._0_4_ = uVar54;
                auVar50._8_4_ = uVar61;
                auVar50._12_4_ = uVar64;
                auVar8._4_4_ = fVar84;
                auVar8._0_4_ = fVar82;
                auVar8._8_4_ = fVar86;
                auVar8._12_4_ = fVar85 + fVar83 + fVar81;
                auVar49 = divps(auVar50,auVar8);
              }
              fVar81 = fVar46 * fVar87;
              fVar83 = fVar52 * fVar88;
              fVar76 = fVar53 * fVar89;
              fVar85 = (fVar53 * fVar44 - fVar55 * fVar52) * fVar66;
              fVar55 = (fVar46 * fVar55 - fVar74 * fVar53) * fVar71;
              fVar74 = (fVar52 * fVar74 - fVar44 * fVar46) * fVar72;
              auVar79._0_4_ = (fVar74 + fVar55 + fVar85) * auVar49._0_4_;
              auVar79._4_4_ = (fVar74 + fVar55 + fVar85) * auVar49._4_4_;
              auVar79._8_4_ = (fVar74 + fVar55 + fVar85) * auVar49._8_4_;
              auVar79._12_4_ = (fVar74 + fVar55 + fVar85) * auVar49._12_4_;
              fVar73 = fVar76 + fVar83 + fVar81;
              fVar75 = fVar76 + fVar83 + fVar81;
              fVar77 = fVar76 + fVar83 + fVar81;
              fVar76 = fVar76 + fVar83 + fVar81;
              auVar6._4_4_ = uVar60;
              auVar6._0_4_ = uVar56;
              auVar6._8_4_ = uVar63;
              auVar6._12_4_ = uVar65;
              auVar49 = minps(auVar79,auVar6);
              auVar80 = maxps(auVar49,ZEXT816(0));
              auVar41._4_4_ = uVar58;
              auVar41._0_4_ = uVar54;
              auVar41._8_4_ = uVar61;
              auVar41._12_4_ = uVar64;
              auVar69._0_4_ = fVar88 * fVar88 + fVar87 * fVar87 + fVar89 * fVar89;
              auVar69._4_4_ = fVar88 * fVar71 + fVar87 * fVar66 + fVar89 * fVar72;
              auVar69._8_4_ = local_268._4_4_ + local_268._0_4_ + local_268._8_4_;
              auVar69._12_4_ = fVar52 * fVar71 + fVar46 * fVar66 + fVar53 * fVar72;
              auVar49 = divps(auVar41,auVar69);
              fVar57 = (float)(~-(uint)(auVar69._0_4_ == 0.0) & auVar49._0_4_);
              fVar81 = (float)(~-(uint)(auVar69._8_4_ == 0.0) & auVar49._8_4_);
              fVar55 = (fVar73 * auVar80._0_4_ - auVar69._12_4_) * fVar81;
              fVar74 = (fVar75 * auVar80._4_4_ - auVar69._12_4_) * fVar81;
              fVar44 = (fVar77 * auVar80._8_4_ - auVar69._12_4_) * fVar81;
              auVar51._4_4_ = fVar74;
              auVar51._0_4_ = fVar55;
              auVar51._8_4_ = fVar44;
              auVar51._12_4_ = (fVar76 * auVar80._12_4_ - auVar69._12_4_) * fVar81;
              auVar49 = minps(auVar51,_DAT_1499314a0);
              auVar49 = maxps(auVar49,ZEXT816(0));
              fVar81 = auVar49._0_4_;
              fVar83 = auVar49._4_4_;
              fVar85 = auVar49._8_4_;
              uVar42 = -(uint)(fVar81 == fVar55 && fVar82 != 0.0);
              uVar43 = -(uint)(fVar83 == fVar74 && fVar84 != 0.0);
              uVar45 = -(uint)(fVar85 == fVar44 && fVar86 != 0.0);
              auVar70._0_4_ = (auVar69._4_4_ + fVar73 * fVar81) * fVar57;
              auVar70._4_4_ = (auVar69._4_4_ + fVar75 * fVar83) * fVar57;
              auVar70._8_4_ = (auVar69._4_4_ + fVar77 * fVar85) * fVar57;
              auVar70._12_4_ = (auVar69._4_4_ + fVar76 * auVar49._12_4_) * fVar57;
              uVar56 = (undefined4)DAT_1499314a0;
              uVar60 = DAT_1499314a0._4_4_;
              uVar63 = DAT_1499314a0._8_4_;
              uVar65 = DAT_1499314a0._12_4_;
              auVar49 = minps(auVar70,_DAT_1499314a0);
              auVar49 = maxps(auVar49,ZEXT816(0));
              fVar55 = (fVar66 - (float)((uint)auVar80._0_4_ & uVar42 | ~uVar42 & auVar49._0_4_) *
                                 fVar87) + fVar46 * fVar81;
              fVar74 = (fVar71 - (float)((uint)auVar80._4_4_ & uVar43 | ~uVar43 & auVar49._4_4_) *
                                 fVar88) + fVar52 * fVar83;
              fVar44 = (fVar72 - (float)((uint)auVar80._8_4_ & uVar45 | ~uVar45 & auVar49._8_4_) *
                                 fVar89) + fVar53 * fVar85;
              if (fVar44 * fVar44 + fVar74 * fVar74 + fVar55 * fVar55 <= fVar40 * fVar40) break;
              uVar36 = uVar36 + 1;
              uVar37 = (ulonglong)uVar36;
              uVar30 = uVar30 + 1;
              pfVar35 = pfVar35 + 4;
            } while ((longlong)uVar30 < (longlong)(int)param_2[0xd]);
          }
          if (uVar36 == *(uint *)(param_2 + 0xd)) goto LAB_144c6bb0d;
        }
        if (param_2[7] != 0) {
          fVar90 = (fVar10 - fVar90) * _DAT_14c6dad90 + fVar90;
          fVar91 = (fVar11 - fVar91) * fRam000000014c6dad94 + fVar91;
          fVar92 = (fVar12 - fVar92) * fRam000000014c6dad98 + fVar92;
          fVar93 = (pfVar1[3] - fVar93) * fRam000000014c6dad9c + fVar93;
          lVar18 = *(longlong *)
                    ((ulonglong)(uVar29 >> 0x16) * 0x120 + *(longlong *)(*param_2 + 0x38));
          local_258[0] = 0xffffffff;
          local_250 = 0;
          local_248 = 0;
          uStack_240 = 0;
          local_228 = 0xffffffff;
          local_220 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_1e8 = (longlong *)0x0;
          puStack_1e0 = (uint *)0x0;
          lVar19 = *(longlong *)(lVar18 + 0x20);
          iVar39 = *(int *)(lVar19 + 0x50);
          if ((int)uVar33 < *(int *)(lVar19 + 0x20)) {
            uVar36 = uVar33;
            if (*(int *)(lVar19 + 0x98) != 0) {
              uVar36 = *(uint *)(*(longlong *)(lVar19 + 0x90) + (ulonglong)uVar33 * 4);
            }
            if (uVar36 != 0xffffffff) {
              lVar22 = *(longlong *)(lVar19 + 0x120);
              goto LAB_144c6b753;
            }
            local_2b8 = (longlong *)
                        (*(longlong *)(lVar19 + 0x48) + (longlong)(int)(iVar39 * uVar33) * 4);
            puStack_2b0 = (uint *)((longlong)local_2b8 + (longlong)iVar39 * 4);
          }
          else {
            lVar22 = *(longlong *)(lVar19 + 0x140);
            uVar36 = uVar33 - *(int *)(lVar19 + 0x20);
LAB_144c6b753:
            puStack_2b0 = (uint *)(lVar22 + ((longlong)(int)(uVar36 * iVar39) + (longlong)iVar39) *
                                            4);
            local_2b8 = (longlong *)(lVar22 + (longlong)(int)(uVar36 * iVar39) * 4);
          }
          local_350 = uVar33;
          local_1f0 = FUN_144c64f60(lVar18,&local_350);
          local_1e8 = local_2b8;
          puStack_1e0 = puStack_2b0;
          lVar19 = *(longlong *)(lVar18 + 0x20);
          iVar39 = *(int *)(lVar19 + 0x60);
          if ((int)uVar25 < *(int *)(lVar19 + 0x30)) {
            uVar33 = uVar25;
            if (*(int *)(lVar19 + 0x78) != 0) {
              uVar33 = *(uint *)(*(longlong *)(lVar19 + 0x70) + uVar28 * 4);
            }
            if (uVar33 != 0xffffffff) {
              local_2d8 = *(longlong *)(lVar19 + 0x130);
              goto LAB_144c6b7f3;
            }
            local_2d8 = *(longlong *)(lVar19 + 0x58) + (longlong)(int)(uVar25 * iVar39) * 4;
            uStack_2d0 = local_2d8 + (longlong)iVar39 * 4;
          }
          else {
            local_2d8 = *(longlong *)(lVar19 + 0x150);
            uVar33 = uVar25 - *(int *)(lVar19 + 0x30);
LAB_144c6b7f3:
            uStack_2d0 = local_2d8 + ((longlong)(int)(uVar33 * iVar39) + (longlong)iVar39) * 4;
            local_2d8 = local_2d8 + (longlong)(int)(uVar33 * iVar39) * 4;
          }
          local_350 = uVar25;
          local_1f8 = uVar31;
          local_220 = FUN_144c46e20(lVar18,&local_350);
          local_1b8 = *param_2;
          local_1b0 = param_2 + 3;
          local_1a8 = local_258;
          local_218 = local_2d8;
          uStack_210 = uStack_2d0;
          local_1a0 = 0x21;
          local_228 = uVar29;
          local_208 = fVar90;
          fStack_204 = fVar91;
          fStack_200 = fVar92;
          fStack_1fc = fVar93;
          cVar16 = (**(code **)(*(longlong *)param_2[7] + 0x28))((longlong *)param_2[7],&local_1b8);
          uVar54 = _DAT_14c6daca0;
          uVar58 = uRam000000014c6daca4;
          uVar61 = uRam000000014c6daca8;
          uVar64 = uRam000000014c6dacac;
          if (cVar16 == '\0') goto LAB_144c6bb0d;
          if ((char)param_2[5] == '\0') {
            local_350 = uVar25;
            FUN_144c5ee50(lVar18,&local_31c,&local_350);
            uVar36 = local_31c;
            local_350 = local_31c & 0x3fffff;
            local_308 = 0;
            uStack_300 = 0;
            uVar23 = FUN_144c44fc0(*(undefined8 *)
                                    (*(longlong *)
                                      ((ulonglong)(local_31c >> 0x16) * 0x120 +
                                      *(longlong *)(*param_2 + 0x38)) + 0x20),&local_350,&local_308)
            ;
            local_350 = uVar25;
            FUN_144c65070(lVar18,&local_320,&local_350);
            uVar33 = local_320;
            local_350 = local_320 & 0x3fffff;
            local_318 = (uint *)0x0;
            uStack_310 = 0;
            local_160 = FUN_144c450c0(*(undefined8 *)
                                       (*(longlong *)
                                         ((ulonglong)(local_320 >> 0x16) * 0x120 +
                                         *(longlong *)(*param_2 + 0x38)) + 0x20),&local_350,
                                      &local_318);
            local_1d8 = *param_2;
            local_188 = 0;
            uStack_180 = 0;
            local_1d0 = param_2 + 3;
            local_1c8 = local_198;
            local_128 = local_308;
            uStack_120 = uStack_300;
            local_198[0] = 0xffffffff;
            local_190 = 0;
            local_158 = local_318;
            lStack_150 = uStack_310;
            local_138 = uVar36;
            local_168 = uVar33;
            local_1c0 = 0x21;
            local_148 = fVar90;
            fStack_144 = fVar91;
            fStack_140 = fVar92;
            fStack_13c = fVar93;
            local_130 = uVar23;
            cVar16 = (**(code **)(*(longlong *)param_2[7] + 0x28))
                               ((longlong *)param_2[7],&local_1d8);
            uVar54 = _DAT_14c6daca0;
            uVar58 = uRam000000014c6daca4;
            uVar61 = uRam000000014c6daca8;
            uVar64 = uRam000000014c6dacac;
            if (cVar16 == '\0') goto LAB_144c6bb0d;
          }
        }
        local_350 = uVar29 & 0x3fffff;
        lVar18 = FUN_144c46e20(*(undefined8 *)
                                ((ulonglong)(uVar29 >> 0x16) * 0x120 +
                                *(longlong *)(*param_2 + 0x38)),&local_350);
        uVar30 = (ulonglong)(*(uint *)(lVar18 + 0xc) & 0x3fffff);
        if ((local_354 == '\0') &&
           (uVar54 = _DAT_14c6daca0, uVar58 = uRam000000014c6daca4, uVar61 = uRam000000014c6daca8,
           uVar64 = uRam000000014c6dacac, (int)local_330[*(int *)(*param_5 + uVar30 * 4)] < 2))
        goto LAB_144c6bb0d;
        *(undefined4 *)(*param_5 + lVar38 * 4) = *(undefined4 *)(*param_5 + uVar30 * 4);
        local_330[*(int *)(*param_5 + lVar38 * 4)] = local_330[*(int *)(*param_5 + lVar38 * 4)] + 1;
        lVar38 = param_4[1];
        uVar29 = (int)lVar38 - 1;
        *(uint *)(param_4 + 1) = uVar29;
        if (uVar29 != local_34c) {
          puVar17 = (undefined4 *)(*param_4 + ((longlong)(int)lVar38 + -1) * 4);
          puVar2 = (undefined4 *)(*param_4 + local_328 * 4);
          if (puVar2 != puVar17) {
            *puVar2 = *puVar17;
          }
        }
        local_338 = local_338 - 1;
        if (local_338 != local_34c) {
          if (local_330 + local_328 != local_330 + (int)local_338) {
            local_330[local_328] = local_330[(int)local_338];
          }
        }
        puVar26 = (uint *)*param_5;
        puVar34 = puVar26 + (int)param_5[1];
        uVar54 = _DAT_14c6daca0;
        uVar58 = uRam000000014c6daca4;
        uVar61 = uRam000000014c6daca8;
        uVar64 = uRam000000014c6dacac;
        for (; _DAT_14c6daca0 = uVar54, uRam000000014c6daca4 = uVar58, uRam000000014c6daca8 = uVar61
            , uRam000000014c6dacac = uVar64, puVar26 != puVar34; puVar26 = puVar26 + 1) {
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
          if (*puVar26 == *(uint *)(param_4 + 1)) {
            *puVar26 = local_34c;
          }
          uVar54 = _DAT_14c6daca0;
          uVar58 = uRam000000014c6daca4;
          uVar61 = uRam000000014c6daca8;
          uVar64 = uRam000000014c6dacac;
        }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
        uVar29 = local_34c;
        bVar14 = true;
      }
LAB_144c6bb3b:
      local_340 = 0;
      if ((-1 < (int)local_33c) && (local_348 != (uint *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_348,(ulonglong)(local_33c & 0x7fffffff) << 2);
        uVar54 = _DAT_14c6daca0;
        uVar58 = uRam000000014c6daca4;
        uVar61 = uRam000000014c6daca8;
        uVar64 = uRam000000014c6dacac;
      }
      local_348 = (uint *)0x0;
      local_33c = 0x80000000;
      bVar15 = bVar14;
    }
    uVar29 = uVar29 - 1;
    local_328 = local_328 + -1;
  } while (-1 < (int)uVar29);
  local_34c = uVar29;
  if (!bVar14) {
LAB_144c6bbac:
    if (local_354 != '\0') {
      if ((-1 < (int)local_2f8[0]) && (local_330 != (undefined4 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_330,(ulonglong)(local_2f8[0] & 0x7fffffff) << 2);
      }
      return;
    }
    local_354 = '\x01';
  }
  goto LAB_144c6afc1;
LAB_144c6bb0d:
  local_2f0 = local_2f0 + 1;
  uVar29 = local_34c;
  if (local_2f0 == local_2e8) goto LAB_144c6bb3b;
  goto LAB_144c6b130;
}



// FUNCTION 144c6bc40 FUN_144c6bc40 body=30 status=ok
// SIG undefined FUN_144c6bc40(void)

ulonglong FUN_144c6bc40(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x60);
  if (iVar1 != -1) {
    return (ulonglong)
           CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),
                    *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 4) ==
                    *(int *)(param_1 + 0x18));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144c6bc60 FUN_144c6bc60 body=71 status=ok
// SIG undefined FUN_144c6bc60(void)

undefined8 * FUN_144c6bc60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144c6bcb0 FUN_144c6bcb0 body=1096 status=ok
// SIG undefined FUN_144c6bcb0(void)

void FUN_144c6bcb0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
                  float *param_5,uint *param_6)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  uint local_res8 [2];
  uint local_res18 [4];
  float *local_228;
  uint local_220;
  uint local_21c;
  longlong local_218;
  undefined4 local_210;
  uint local_20c;
  float local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [20];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined ***local_140;
  undefined8 local_138;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  
  local_208 = *param_3 * 0.51;
  if (*(float *)(*(longlong *)(*(longlong *)(**(longlong **)(param_1 + 0x38) + 0x20) + 0x68) + 0xb0)
      < local_208) {
    local_1b8 = *param_2;
    local_1b0 = local_1b8 + (longlong)(int)param_2[1] * 4;
    iVar7 = 0;
    local_1c0 = *(undefined4 *)(local_1b8 + (longlong)(int)*param_6 * 4);
    local_1d8 = _anon_3433F78A::BelongToGroupEdgeFilter::vftable;
    local_1d0 = 0xffffffff;
    local_1c8 = 1;
    local_184 = 0xbf800000;
    local_180 = 0xbf800000;
    local_178 = 0;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0x5f7ffff0;
    local_158 = 0xffffffffffffffff;
    local_150 = 0xffffffff;
    local_140 = (undefined ***)0x0;
    local_138 = 0;
    local_148 = param_4;
    FUN_144c54ee0(local_198,param_5,local_1b8,0x3f800000);
    local_140 = &local_1d8;
    iVar4 = FUN_144b3e3c0(param_1,local_198,&local_1a8,local_res8);
    if ((iVar4 == 0) ||
       (*(int *)(*param_2 + (ulonglong)(local_res8[0] & 0x3fffff) * 4) !=
        *(int *)(*param_2 + (longlong)(int)*param_6 * 4))) {
      uVar2 = *param_6;
      local_res18[0] = uVar2 & 0x3fffff;
      local_1f8 = 0;
      uStack_1f0 = 0;
      piVar5 = (int *)FUN_144c44fc0(*(undefined8 *)
                                     (*(longlong *)
                                       ((ulonglong)(uVar2 >> 0x16) * 0x120 +
                                       *(longlong *)(param_1 + 0x38)) + 0x20),local_res18,&local_1f8
                                   );
      local_220 = (int)*(short *)((longlong)piVar5 + 10) + (int)(short)piVar5[2];
      if ((int)local_220 < 1) {
        local_228 = (float *)0x0;
        local_220 = 0;
        local_21c = 0x80000000;
      }
      else {
        local_228 = (float *)(**(code **)(PTR_vftable_14c6e47a0 + 8))
                                       (&PTR_vftable_14c6e47a0,(longlong)(int)local_220 * 0xc);
        local_21c = local_220;
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 0x80000000;
      FUN_144bea730(local_110);
      FUN_144bea730(local_f8);
      local_e0 = 0;
      local_d8 = 0;
      FUN_144bea730(local_d0);
      local_b8 = 0;
      FUN_144bea730(local_b0);
      FUN_144bea730(local_98);
      FUN_144bea730(local_80);
      FUN_144bea730(local_68);
      local_50 = 0;
      local_48 = 0;
      FUN_144bea730(local_128);
      local_1e8 = (float)local_1f8;
      fStack_1e4 = local_1f8._4_4_;
      fStack_1e0 = (float)uStack_1f0;
      fStack_1dc = uStack_1f0._4_4_;
      local_1f8._0_4_ = local_208;
      local_1f8._4_4_ = local_208;
      uStack_1f0._0_4_ = local_208;
      uStack_1f0._4_4_ = local_208;
      FUN_144fdbae0(param_1,0,uVar2,piVar5,&local_1e8,&local_1f8,&local_228,&local_218,local_128);
      if (0 < (int)local_220) {
        pfVar8 = local_228;
        do {
          if (*param_3 * 0.5 < pfVar8[1]) {
            local_res18[0] = *piVar5 + iVar7 & 0x3fffff;
            FUN_144c2ead0(*(undefined8 *)
                           ((ulonglong)((uint)(*piVar5 + iVar7) >> 0x16) * 0x120 +
                           *(longlong *)(param_1 + 0x38)),local_res18,&local_1f8,&local_1e8);
            fVar1 = *pfVar8;
            *param_5 = (local_1e8 - (float)local_1f8) * fVar1 + (float)local_1f8;
            param_5[1] = (fStack_1e4 - local_1f8._4_4_) * fVar1 + local_1f8._4_4_;
            param_5[2] = (fStack_1e0 - (float)uStack_1f0) * fVar1 + (float)uStack_1f0;
            param_5[3] = (fStack_1dc - uStack_1f0._4_4_) * fVar1 + uStack_1f0._4_4_;
            break;
          }
          iVar7 = iVar7 + 1;
          pfVar8 = pfVar8 + 3;
        } while (iVar7 < (int)local_220);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar3 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar3 + 0xf0);
      if (lVar6 == 0) {
        if (*(char *)(lVar3 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar6 = FUN_144b3f4a0();
        *(longlong *)(lVar3 + 0xf0) = lVar6;
      }
      FUN_144fe6af0(local_128,*(undefined8 *)(lVar6 + 0x3e0));
      local_210 = 0;
      if ((-1 < (int)local_20c) && (local_218 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_218,(ulonglong)(local_20c & 0x7fffffff) << 2);
      }
      local_218 = 0;
      local_20c = 0x80000000;
      local_220 = 0;
      if ((-1 < (int)local_21c) && (local_228 != (float *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_228,(ulonglong)(local_21c & 0x7fffffff) * 0xc);
      }
    }
    else {
      *(undefined8 *)param_5 = local_1a8;
      *(undefined8 *)(param_5 + 2) = uStack_1a0;
      *param_6 = local_res8[0] & 0x3fffff;
    }
  }
  return;
}



// FUNCTION 144c6c100 FUN_144c6c100 body=459 status=ok
// SIG undefined FUN_144c6c100(void)

void FUN_144c6c100(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 <= uVar10 && uVar10 - param_3 != 0) {
    uVar7 = uVar10;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar8 = uVar7 << 4;
  local_res20 = lVar8;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar8,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  local_res18 = puVar4;
  if (0 < (int)uVar2) {
    puVar9 = (undefined4 *)(lVar3 + 0xc);
    uVar6 = (ulonglong)uVar2;
    do {
      puVar1 = (undefined8 *)(puVar9 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        FUN_144c661a0(puVar4,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar4;
        puVar9[-1] = *(undefined4 *)(puVar4 + 1);
        *puVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar9 = puVar9 + 4;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = (uint *)((longlong)local_res18 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 3);
      }
      *puVar5 = 0x80000000;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5 = puVar5 + 4;
      uVar10 = uVar10 - 1;
      lVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  if (lVar8 + 0x10U <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar7 = uVar7 + 1;
    if (lVar8 + 0x10U <= local_res8) {
      uVar7 = uVar7 + (local_res8 - lVar8 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 4);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 144c6c2d0 FUN_144c6c2d0 body=247 status=ok
// SIG undefined FUN_144c6c2d0(void)

void FUN_144c6c2d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 4,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c6c3d0 FUN_144c6c3d0 body=269 status=ok
// SIG undefined FUN_144c6c3d0(void)

void FUN_144c6c3d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c6c4e0 FUN_144c6c4e0 body=208 status=ok
// SIG undefined FUN_144c6c4e0(void)

void FUN_144c6c4e0(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar7 = (ulonglong)param_2;
  uVar8 = uVar7;
  do {
    uVar10 = uVar8 & 0xffffffff;
    uVar2 = *(undefined8 *)(param_1 + ((longlong)((int)uVar8 + param_3) >> 1) * 8);
    uVar6 = (longlong)param_3;
    iVar5 = param_3;
    do {
      uVar9 = (uint)uVar10;
      iVar4 = (int)uVar2;
      iVar1 = *(int *)(param_1 + uVar7 * 8);
      while (iVar1 < iVar4) {
        uVar7 = uVar7 + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        iVar1 = *(int *)(param_1 + uVar7 * 8);
      }
      iVar1 = *(int *)(param_1 + uVar6 * 8);
      while (iVar4 < iVar1) {
        uVar6 = uVar6 - 1;
        iVar5 = iVar5 + -1;
        iVar1 = *(int *)(param_1 + uVar6 * 8);
      }
      if ((longlong)uVar6 < (longlong)uVar7) break;
      if (uVar6 != uVar7) {
        uVar3 = *(undefined8 *)(param_1 + uVar6 * 8);
        *(undefined8 *)(param_1 + uVar6 * 8) = *(undefined8 *)(param_1 + uVar7 * 8);
        *(undefined8 *)(param_1 + uVar7 * 8) = uVar3;
      }
      iVar5 = iVar5 + -1;
      uVar6 = uVar6 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 <= (longlong)uVar6);
    if ((int)uVar8 < iVar5) {
      FUN_144c6c4e0(param_1,uVar8 & 0xffffffff,iVar5,param_4);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar8 = (ulonglong)uVar9;
  } while( true );
}



// FUNCTION 144c6c5b0 FUN_144c6c5b0 body=159 status=ok
// SIG undefined FUN_144c6c5b0(void)

void FUN_144c6c5b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c6c650 FUN_144c6c650 body=12 status=ok
// SIG undefined FUN_144c6c650(void)

longlong FUN_144c6c650(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 144c6c660 FUN_144c6c660 body=40 status=ok
// SIG undefined FUN_144c6c660(void)

undefined4 * FUN_144c6c660(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  return param_1;
}



// FUNCTION 144c6c690 FUN_144c6c690 body=24 status=ok
// SIG undefined FUN_144c6c690(void)

undefined4 * FUN_144c6c690(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  return param_1;
}



// FUNCTION 144c6c6b0 FUN_144c6c6b0 body=14 status=ok
// SIG undefined FUN_144c6c6b0(void)

void FUN_144c6c6b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if (plVar3[1] != 0) {
    LOCK();
    plVar1 = plVar3 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144b3f24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144c6c6c0 FUN_144c6c6c0 body=76 status=ok
// SIG undefined FUN_144c6c6c0(void)

undefined4 * FUN_144c6c6c0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  if (*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) {
    if (*(longlong *)(param_2 + 2) != 0) {
      FUN_144b3d910();
    }
    lVar1 = *(longlong *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 144c6c710 FUN_144c6c710 body=2110 status=ok
// SIG undefined FUN_144c6c710(void)

uint * FUN_144c6c710(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    uint param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong local_458;
  longlong local_450;
  uint local_448;
  uint local_444;
  undefined8 local_438;
  undefined8 uStack_430;
  longlong local_428;
  longlong local_418;
  longlong lStack_410;
  longlong local_408;
  int local_400;
  uint local_3fc;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  longlong lStack_3d0;
  longlong local_3c8;
  uint local_3c0;
  uint local_3bc;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  ulonglong local_3a0;
  ulonglong local_398 [2];
  longlong local_388;
  longlong lStack_380;
  longlong local_378;
  longlong lStack_370;
  undefined8 local_368;
  longlong lStack_360;
  longlong local_358;
  longlong lStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [24];
  undefined1 local_320 [24];
  undefined1 local_308 [24];
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e0 [24];
  undefined8 local_2c8;
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [24];
  undefined1 local_290 [24];
  undefined1 local_278 [24];
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_248 [32];
  longlong local_228;
  undefined1 local_148 [272];
  
  FUN_144bea730(local_320);
  FUN_144bea730(local_308);
  uVar18 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  FUN_144bea730(local_2e0);
  local_2c8 = 0;
  FUN_144bea730(local_2c0);
  FUN_144bea730(local_2a8);
  FUN_144bea730(local_290);
  FUN_144bea730(local_278);
  local_260 = 0;
  local_258 = 0;
  FUN_144bea730(local_338);
  FUN_144c3e1d0(local_248);
  local_458 = 0;
  local_438 = (ulonglong)local_438._4_4_ << 0x20;
  FUN_144c3f5c0(local_248,param_2,&local_438,&local_458);
  FUN_144ca1a50(local_148);
  FUN_144ca22e0(local_148,local_248,0,0);
  *param_1 = param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  local_458 = 0x68;
  lVar10 = (*DAT_14c787670)(0,&local_458,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar10,"hkaiNavMeshClearanceCache");
  }
  uVar11 = uVar18;
  if (lVar10 != 0) {
    uVar11 = FUN_144fd2b10(lVar10);
  }
  lVar10 = *(longlong *)(param_1 + 2);
  *(ulonglong *)(param_1 + 2) = uVar11;
  if (lVar10 != 0) {
    FUN_144b3f230();
  }
  uVar5 = *(undefined8 *)(param_1 + 2);
  local_3e0 = uVar5;
  FUN_144fd2bc0(uVar5,local_248,param_4);
  cVar9 = FUN_144fd2ef0(uVar5);
  if ((cVar9 == '\0') &&
     (iVar17 = *(int *)(local_228 + 0xd8) + *(int *)(local_228 + 0x20), local_348 = param_4,
     uStack_344 = param_4, uStack_340 = param_4, uStack_33c = param_4, 0 < iVar17)) {
    local_458 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_428 = 0x114;
    do {
      lVar10 = local_458;
      FUN_144bda970(0x1bedf6dc);
      iVar3 = *(int *)(local_228 + 0x50);
      lVar13 = (longlong)iVar3;
      iVar14 = (int)uVar18;
      if (iVar14 < *(int *)(local_228 + 0x20)) {
        uVar11 = uVar18;
        if ((*(int *)(local_228 + 0x98) == 0) ||
           (uVar4 = *(uint *)(*(longlong *)(local_228 + 0x90) + uVar18 * 4),
           uVar11 = (ulonglong)uVar4, uVar4 != 0xffffffff)) {
          iVar19 = (int)uVar11;
          lStack_3d0 = *(longlong *)(local_228 + 0x120) + (lVar13 + iVar19 * iVar3) * 4;
          local_3d8 = *(longlong *)(local_228 + 0x120) + (longlong)(iVar19 * iVar3) * 4;
          lVar13 = *(longlong *)(local_228 + 0xb0);
          goto LAB_144c6c9e8;
        }
        local_3d8 = *(longlong *)(local_228 + 0x48) + (longlong)(iVar3 * iVar14) * 4;
        lStack_3d0 = local_3d8 + lVar13 * 4;
        puVar15 = (undefined4 *)(*(longlong *)(local_228 + 0x18) + uVar18 * 0xc);
      }
      else {
        iVar19 = iVar14 - *(int *)(local_228 + 0x20);
        lStack_3d0 = *(longlong *)(local_228 + 0x140) + (iVar19 * iVar3 + lVar13) * 4;
        local_3d8 = *(longlong *)(local_228 + 0x140) + (longlong)(iVar19 * iVar3) * 4;
        lVar13 = *(longlong *)(local_228 + 0xd0);
LAB_144c6c9e8:
        puVar15 = (undefined4 *)(lVar13 + (longlong)iVar19 * 0xc);
      }
      sVar1 = *(short *)(puVar15 + 2);
      sVar2 = *(short *)((longlong)puVar15 + 10);
      local_450 = 0;
      local_448 = 0;
      local_444 = 0x80000000;
      uVar4 = (int)sVar1 + (int)sVar2;
      local_408 = 0;
      local_400 = 0;
      local_3fc = 0x80000000;
      if (*(char *)(local_428 + lVar10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar13 = *(longlong *)(lVar10 + 0xf0);
      if (lVar13 == 0) {
        lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar10 + local_428) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar13 = FUN_144b3f4a0();
        *(longlong *)(lVar10 + 0xf0) = lVar13;
        lVar10 = local_458;
      }
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x3d0) + 0x10);
      local_3f8 = 0;
      if (*(longlong *)(lVar13 + 8) == 0) {
        local_3f8 = lVar13;
      }
      local_438 = (longlong)(int)uVar4 * 0xc;
      local_3e8 = local_438;
      if (local_3f8 == 0) {
        lVar13 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar13 >> 8),1),&local_438,0x40);
      }
      else {
        local_3a0 = local_438 + 0x3fU & 0xffffffffffffffc0;
        if (local_3a0 <= *(ulonglong *)(local_3f8 + 0x28)) {
          lVar13 = *(longlong *)(local_3f8 + 0x38);
          if (local_3a0 + lVar13 <= *(ulonglong *)(local_3f8 + 0x40)) {
            *(ulonglong *)(local_3f8 + 0x38) = local_3a0 + lVar13;
            goto LAB_144c6caec;
          }
        }
        lVar13 = FUN_144b454a0(local_3f8,&local_3a0);
      }
LAB_144c6caec:
      local_3fc = uVar4 | 0x80000000;
      local_418 = local_3d8;
      lStack_410 = lStack_3d0;
      local_408 = lVar13;
      local_3f0 = lVar13;
      FUN_144fdbae0(local_148,param_3,uVar18,puVar15,&local_418,&local_348,&local_408,&local_450,
                    local_338);
      local_388 = local_408;
      lStack_410 = local_408 + (longlong)local_400 * 0xc;
      param_5 = puVar15[1];
      local_418 = local_408;
      lStack_380 = lStack_410;
      local_438._0_4_ = *puVar15;
      FUN_144fd39c0(local_3e0,&local_438,(int)sVar1,&param_5,(int)sVar2,&local_418);
      uVar4 = local_448;
      lVar13 = (longlong)(int)local_448;
      local_438 = (ulonglong)local_438._4_4_ << 0x20;
      local_3c0 = 0;
      if (*(char *)(local_428 + lVar10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar12 = *(longlong *)(lVar10 + 0xf0);
      if (lVar12 == 0) {
        if (*(char *)(local_428 +
                     *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8))
            == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar12 = FUN_144b3f4a0();
        *(longlong *)(lVar10 + 0xf0) = lVar12;
      }
      lVar10 = *(longlong *)(*(longlong *)(lVar12 + 0x3d0) + 0x10);
      lVar12 = 0;
      if (*(longlong *)(lVar10 + 8) == 0) {
        lVar12 = lVar10;
      }
      local_418 = lVar13;
      local_3b8 = lVar12;
      local_3a8 = lVar13;
      if (lVar12 == 0) {
        lVar10 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar10 >> 8),1),&local_418,0x40);
      }
      else {
        local_398[0] = lVar13 + 0x3fU & 0xffffffffffffffc0;
        if (local_398[0] <= *(ulonglong *)(lVar12 + 0x28)) {
          lVar10 = *(longlong *)(lVar12 + 0x38);
          if (lVar10 + local_398[0] <= *(ulonglong *)(lVar12 + 0x40)) {
            *(ulonglong *)(lVar12 + 0x38) = lVar10 + local_398[0];
            goto LAB_144c6cc71;
          }
        }
        lVar10 = FUN_144b454a0(lVar12,local_398);
      }
LAB_144c6cc71:
      uVar6 = local_448;
      param_5 = uVar4 | 0x80000000;
      local_3c8 = lVar10;
      local_3bc = param_5;
      local_3b0 = lVar10;
      if ((int)(uVar4 & 0x7fffffff) < (int)local_448) {
        FUN_144be4580(&local_3c8,&PTR_vftable_14c6e47c0,(longlong)(int)local_448);
        lVar13 = local_3a8;
        lVar12 = local_3b8;
        local_438._0_4_ = local_3c0;
      }
      else {
      }
      lVar7 = local_3b0;
      lVar10 = local_3c8;
      if (((int)(uint)local_438 < (int)uVar6) || ((int)uVar6 < (int)(uint)local_438)) {
        local_438._0_4_ = uVar6;
      }
      lVar16 = (int)(uint)local_438 + local_3c8;
      local_368 = local_450;
      lVar8 = local_368;
      lStack_360 = local_450 + (longlong)(int)local_448 * 4;
      local_368._4_4_ = (undefined4)((ulonglong)local_450 >> 0x20);
      local_438._0_4_ = (uint)local_450;
      local_438._4_4_ = local_368._4_4_;
      param_5 = local_3bc;
      local_418 = local_3c8;
      lStack_410 = lVar16;
      local_378 = local_3c8;
      lStack_370 = lVar16;
      local_368 = lVar8;
      uStack_430 = lStack_360;
      FUN_144fd3810(local_3e0,&local_438,&local_418);
      local_438 = CONCAT44(local_438._4_4_,iVar14);
      local_418 = lVar10;
      lStack_410 = lVar16;
      local_358 = lVar10;
      lStack_350 = lVar16;
      FUN_144fd3c20(local_3e0,&local_438,&local_418);
      if (lVar12 == 0) {
        (*DAT_14c787678)(1,lVar7,lVar13);
      }
      else {
        uVar18 = lVar13 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulonglong *)(lVar12 + 0x28) < uVar18) ||
           (lVar7 + uVar18 != *(longlong *)(lVar12 + 0x38))) {
          FUN_144be8550(lVar12,lVar7);
        }
        else {
          *(longlong *)(lVar12 + 0x38) = lVar7;
          if (*(longlong *)(lVar12 + 0x48) == lVar7) {
            FUN_144be8430(lVar12);
          }
        }
      }
      if ((-1 < (int)param_5) && (lVar10 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,lVar10,param_5 & 0x7fffffff);
      }
      if (local_3f0 == local_408) {
        local_400 = 0;
      }
      if (local_3f8 == 0) {
        (*DAT_14c787678)(1);
      }
      else {
        uVar18 = local_3e8 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_3f8 + 0x28) < uVar18) ||
           (uVar18 + local_3f0 != *(longlong *)(local_3f8 + 0x38))) {
          FUN_144be8550();
        }
        else {
          *(longlong *)(local_3f8 + 0x38) = local_3f0;
          if (*(longlong *)(local_3f8 + 0x48) == local_3f0) {
            FUN_144be8430();
          }
        }
      }
      local_400 = 0;
      if ((-1 < (int)local_3fc) && (local_408 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_408,(ulonglong)(local_3fc & 0x7fffffff) * 0xc);
      }
      local_408 = 0;
      local_3fc = 0x80000000;
      local_448 = 0;
      if ((-1 < (int)local_444) && (local_450 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_450,(ulonglong)(local_444 & 0x7fffffff) << 2);
      }
      uVar18 = (ulonglong)(iVar14 + 1U);
      local_450 = 0;
      local_444 = 0x80000000;
    } while ((int)(iVar14 + 1U) < iVar17);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar10 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar10 + 0xf0);
  if (lVar13 == 0) {
    if (*(char *)(lVar10 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar10 + 0xf0) = lVar13;
  }
  FUN_144fe6af0(local_338,*(undefined8 *)(lVar13 + 0x3e0));
  FUN_144ca1fa0(local_148);
  FUN_140c3e2cc(local_248);
  return param_1;
}



// FUNCTION 144c6cf50 FUN_144c6cf50 body=207 status=ok
// SIG undefined FUN_144c6cf50(void)

undefined8 * FUN_144c6cf50(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[3];
  lVar3 = (longlong)*(int *)(param_1 + 4) * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144c6d020 FUN_144c6d020 body=261 status=ok
// SIG undefined FUN_144c6d020(void)

void FUN_144c6d020(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_res8 [2];
  undefined1 local_58 [4];
  int local_54;
  
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x20) * 4;
  uVar4 = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 0x180);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 4) {
    local_res8[0] = uVar4;
    FUN_144fe7ab0(param_2,local_58,local_res8,*puVar8);
    if (-1 < local_54) {
      plVar1 = (longlong *)(*(longlong *)(param_3 + 0x38) + (longlong)local_54 * 0x18);
      if ((char)plVar1[2] == '\x01') {
        lVar7 = *plVar1;
      }
      else {
        lVar7 = FUN_144c3f6d0();
      }
      lVar5 = *(longlong *)(puVar8 + 2);
      fVar2 = *(float *)(lVar7 + 0x18);
      fVar3 = *(float *)(lVar5 + 0x18);
      cVar6 = FUN_144fd2ef0(lVar7);
      if ((cVar6 == '\0') && (fVar2 <= fVar3)) {
        FUN_144c6d130(lVar7,lVar5);
        FUN_144fd2e20(lVar7,fVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 144c6d130 FUN_144c6d130 body=410 status=ok
// SIG undefined FUN_144c6d130(void)

longlong FUN_144c6d130(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  if ((longlong *)(param_2 + 0x28) != plVar1) {
    iVar4 = *(int *)(param_2 + 0x30);
    lVar5 = *(longlong *)(param_2 + 0x28);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar4) {
      FUN_144c6d410(plVar1,&PTR_vftable_14c6e47a0);
    }
    lVar6 = *plVar1;
    iVar8 = iVar4;
    if (*(int *)(param_1 + 0x30) < iVar4) {
      iVar8 = *(int *)(param_1 + 0x30);
    }
    if (lVar6 != lVar5) {
      uVar9 = 0;
      uVar12 = uVar9;
      if (0 < iVar8) {
        do {
          lVar3 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          LOCK();
          *(undefined4 *)(lVar6 + uVar12 * 4) = *(undefined4 *)(lVar5 + lVar3);
          UNLOCK();
          uVar12 = (ulonglong)((int)uVar12 + 1);
        } while ((longlong)uVar9 < (longlong)iVar8);
      }
    }
    puVar11 = (undefined4 *)(lVar5 + (longlong)iVar8 * 4);
    if (0 < iVar4 - iVar8) {
      uVar12 = (ulonglong)(uint)(iVar4 - iVar8);
      puVar10 = (undefined4 *)(*plVar1 + (longlong)iVar8 * 4);
      do {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar11;
          puVar11 = puVar11 + 1;
        }
        uVar12 = uVar12 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar12 != 0);
    }
    *(int *)(param_1 + 0x30) = iVar4;
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  if ((undefined8 *)(param_2 + 0x38) != puVar2) {
    iVar4 = *(int *)(param_2 + 0x40);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar4) {
      FUN_144c6d4d0(puVar2,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    FUN_144b3d470(*puVar2,uVar7,(longlong)iVar4);
    *(int *)(param_1 + 0x40) = iVar4;
  }
  puVar2 = (undefined8 *)(param_1 + 0x50);
  LOCK();
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  UNLOCK();
  if ((undefined8 *)(param_2 + 0x50) != puVar2) {
    iVar4 = *(int *)(param_2 + 0x58);
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar4) {
      FUN_144c6d570(puVar2,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    FUN_144b3d470(*puVar2,uVar7,(longlong)iVar4 * 3);
    *(int *)(param_1 + 0x58) = iVar4;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  UNLOCK();
  return param_1;
}



// FUNCTION 144c6d2d0 FUN_144c6d2d0 body=318 status=ok
// SIG undefined FUN_144c6d2d0(void)

void FUN_144c6d2d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong local_res8;
  
  uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar7 * 0x10;
  puVar3 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar9 = puVar9 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c6d410 FUN_144c6d410 body=188 status=ok
// SIG undefined FUN_144c6d410(void)

void FUN_144c6d410(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
      }
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c6d4d0 FUN_144c6d4d0 body=150 status=ok
// SIG undefined FUN_144c6d4d0(void)

void FUN_144c6d4d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c6d570 FUN_144c6d570 body=155 status=ok
// SIG undefined FUN_144c6d570(void)

void FUN_144c6d570(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 3);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c6d610 FUN_144c6d610 body=142 status=ok
// SIG undefined FUN_144c6d610(void)

void FUN_144c6d610(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] << 4);
    uVar4 = *(uint *)(param_1 + 1);
    puVar3 = (undefined4 *)*param_1;
    if (0 < (int)uVar4) {
      puVar2 = (undefined4 *)(lVar1 + 8);
      uVar5 = (ulonglong)uVar4;
      do {
        if (puVar2 + -2 != (undefined4 *)0x0) {
          puVar2[-2] = *puVar3;
          puVar2[-1] = puVar3[1];
          *puVar2 = puVar3[2];
          puVar2[1] = puVar3[3];
        }
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = lVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 144c6d6a0 FUN_144c6d6a0 body=115 status=ok
// SIG undefined FUN_144c6d6a0(void)

undefined1 * FUN_144c6d6a0(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x7fffffff;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x50) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x58] = 0;
  return param_1;
}



// FUNCTION 144c6d720 FUN_144c6d720 body=165 status=ok
// SIG undefined FUN_144c6d720(void)

void FUN_144c6d720(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 144c6d7d0 FUN_144c6d7d0 body=714 status=ok
// SIG undefined FUN_144c6d7d0(void)

void FUN_144c6d7d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_84;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined1 local_48 [32];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar3 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar3 != 0) {
    local_78 = "TtdisableAsyncProcessing";
    local_70 = "";
    FUN_144b3f370(lVar3,&local_78);
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    if (*(longlong *)(param_1 + 0x4e8) != 0) {
      if (*(char *)(lVar1 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar1 + 0xf0);
      if (lVar4 == 0) {
        if (*(char *)(lVar1 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar4 = FUN_144b3f4a0();
        *(longlong *)(lVar1 + 0xf0) = lVar4;
      }
      lVar1 = *(longlong *)(lVar4 + 0x3e0);
      if (lVar1 != 0) {
        local_68 = "TtcompleteAsyncProcessingRunImmediately";
        local_60 = "";
        FUN_144b3f370(lVar1,&local_68);
      }
      local_94 = 0x1e;
      local_98 = 0x5000010;
      FUN_144c2c1d0(param_1 + 0x28,param_1,&local_98);
      plVar5 = (longlong *)FUN_144bdb440(*(undefined8 *)(param_1 + 0x4d8));
      cVar2 = (**(code **)(*plVar5 + 0x80))(plVar5,*(undefined8 *)(param_1 + 0x4f0));
      if (cVar2 == '\0') {
        FUN_144bdb460(*(undefined8 *)(param_1 + 0x4d8),*(undefined8 *)(param_1 + 0x4f0));
      }
      local_res8[0] = 0xbf800000;
      FUN_144c6d720(param_1 + 0x108,param_1,local_res8);
      if (lVar1 != 0) {
        local_58 = &DAT_149981764;
        local_50 = &DAT_149981766;
        FUN_144b3f260(lVar1,&local_58);
      }
      FUN_144be4a80(local_48);
      FUN_144c6dcd0(param_1,local_48,1);
      FUN_144be4aa0(local_48);
    }
    lVar1 = *(longlong *)(param_1 + 0x500);
    lVar4 = (longlong)*(int *)(param_1 + 0x508) * 0x30 + lVar1;
    while (lVar4 != lVar1) {
      if (*(longlong *)(lVar4 + -8) != 0) {
        LOCK();
        plVar5 = (longlong *)(*(longlong *)(lVar4 + -8) + 0x60);
        lVar6 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar6 == 1) {
          lVar6 = *(longlong *)(lVar4 + -0x18);
          if (lVar6 == 0) {
            lVar6 = *(longlong *)(lVar4 + -0x28);
          }
          FUN_144bea6d0(*(undefined8 *)(lVar4 + -8),lVar6);
        }
      }
      *(undefined8 *)(lVar4 + -8) = 0;
      lVar4 = lVar4 + -0x30;
    }
    *(undefined4 *)(param_1 + 0x508) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x18))();
    lVar1 = *(longlong *)(param_1 + 0x4d8);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
    *(undefined4 *)(param_1 + 0x4e0) = 0;
  }
  local_84 = 0x1b;
  local_88 = 0x5000010;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_88);
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  if (lVar3 != 0) {
    local_58 = &DAT_149981764;
    local_50 = &DAT_149981766;
    FUN_144b3f260(lVar3,&local_58);
  }
  return;
}



// FUNCTION 144c6daa0 FUN_144c6daa0 body=133 status=ok
// SIG undefined FUN_144c6daa0(void)

undefined4 FUN_144c6daa0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  iVar2 = *(int *)(param_1 + 0x4b8);
  if (iVar2 != 0) {
    if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) {
      return 1;
    }
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,"Unknown stepping mode");
    iVar2 = FUN_144bfc110(0xa612b2a,local_208,"World\\hkaiWorld_async.cpp",0x51);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_144bde6e0(local_218);
  }
  return 0;
}



// FUNCTION 144c6db30 FUN_144c6db30 body=402 status=ok
// SIG undefined FUN_144c6db30(void)

undefined8 FUN_144c6db30(longlong param_1,char *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar1 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar4;
  }
  lVar1 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtisProcessingNeeded";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  if (*param_2 == '\0') {
LAB_144c6dbf2:
    if ((param_2[0x24] != '\0') && (*param_2 == '\0')) {
      cVar3 = FUN_144f634e0(&DAT_1499956a0,"Not implemented");
      if (cVar3 != '\0') {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
    }
    if (param_2[0x48] == '\0') {
LAB_144c6dc3e:
      if ((param_2[0x58] == '\0') ||
         ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x438) + 0x20),
          lVar4 == lVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x438) + 0x28) * 8 &&
          (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 0x20),
          lVar4 == lVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x28) * 8)))) {
        uVar5 = 0;
        goto LAB_144c6dc7a;
      }
    }
    else {
      cVar3 = FUN_144faac00(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_2 + 0x54));
      if (cVar3 == '\0') {
        cVar3 = FUN_144fbc1c0(*(undefined8 *)(param_1 + 0x438));
        if (cVar3 == '\0') goto LAB_144c6dc3e;
      }
    }
  }
  else if (*(char *)(param_1 + 0x430) == '\0') {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      cVar3 = FUN_144fb01c0();
      if (cVar3 != '\0') goto LAB_144c6dc74;
    }
    goto LAB_144c6dbf2;
  }
LAB_144c6dc74:
  uVar5 = 1;
LAB_144c6dc7a:
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return uVar5;
}



// FUNCTION 144c6dcd0 FUN_144c6dcd0 body=440 status=ok
// SIG undefined FUN_144c6dcd0(void)

void FUN_144c6dcd0(longlong param_1,char **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char **ppcVar4;
  longlong local_res8;
  undefined4 local_48;
  undefined4 local_44;
  char *local_38;
  char *local_30;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_38 = "TtcommitAsyncProcessingRun";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  local_44 = 0x1f;
  local_48 = 0x5000010;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_48);
  plVar3 = (longlong *)FUN_144bdb440(*(undefined8 *)(param_1 + 0x4d8));
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x4f0,1,8);
  lVar2 = *(longlong *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  FUN_144c2d090(param_1,&local_res8,*(undefined8 *)(param_1 + 0x4f8));
  if (local_res8 != 0) {
    FUN_144be4a80(&local_38);
    ppcVar4 = &local_38;
    if (param_2 != (char **)0x0) {
      ppcVar4 = param_2;
    }
    (**(code **)(*ppcVar4 + 0x98))(ppcVar4,local_res8,0);
    FUN_144be4aa0(&local_38);
    if (local_res8 != 0) {
      FUN_144b3f230();
    }
  }
  FUN_144bdb4a0(*(undefined8 *)(param_1 + 0x4d8),param_1 + 0x500);
  lVar2 = *(longlong *)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 144c6de90 FUN_144c6de90 body=58 status=ok
// SIG undefined FUN_144c6de90(void)

void FUN_144c6de90(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0x1a;
  local_18 = 0x5000010;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_18);
  *(undefined4 *)(param_1 + 0x4b8) = 3;
  return;
}



// FUNCTION 144c6ded0 FUN_144c6ded0 body=355 status=ok
// SIG undefined FUN_144c6ded0(void)

undefined1 * FUN_144c6ded0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  FUN_144c6d6a0(param_2);
  *param_2 = 1;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x150);
  }
  *(undefined4 *)(param_2 + 0x20) = uVar6;
  plVar1 = (longlong *)(param_2 + 0x28);
  param_2[0x24] = 1;
  if (plVar1 != (longlong *)(param_1 + 0x158)) {
    iVar3 = *(int *)(param_1 + 0x160);
    lVar4 = *(longlong *)(param_1 + 0x158);
    if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) < iVar3) {
      FUN_140069f0e(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    lVar9 = *plVar1;
    iVar5 = iVar3;
    if (*(int *)(param_2 + 0x30) < iVar3) {
      iVar5 = *(int *)(param_2 + 0x30);
    }
    if ((lVar9 != lVar4) && (lVar8 = (longlong)iVar5, 0 < iVar5)) {
      puVar7 = (undefined4 *)(lVar9 + 4);
      lVar9 = lVar4 - lVar9;
      do {
        puVar7[-1] = *(undefined4 *)(lVar9 + -4 + (longlong)puVar7);
        *puVar7 = *(undefined4 *)(lVar9 + (longlong)puVar7);
        puVar7[1] = *(undefined4 *)(lVar9 + 4 + (longlong)puVar7);
        puVar7[2] = *(undefined4 *)(lVar9 + 8 + (longlong)puVar7);
        puVar7 = puVar7 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    puVar7 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar4);
    if (0 < iVar3 - iVar5) {
      uVar11 = (ulonglong)(uint)(iVar3 - iVar5);
      puVar10 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x10);
      do {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar7;
          puVar10[1] = puVar7[1];
          puVar10[2] = puVar7[2];
          puVar2 = puVar7 + 3;
          puVar7 = puVar7 + 4;
          puVar10[3] = *puVar2;
        }
        uVar11 = uVar11 - 1;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
    }
    *(int *)(param_2 + 0x30) = iVar3;
    FUN_140069e50(param_2 + 0x38,param_1 + 0x168);
  }
  param_2[0x48] = 1;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x23c);
  param_2[0x58] = 0;
  return param_2;
}



// FUNCTION 144c6e040 FUN_144c6e040 body=269 status=ok
// SIG undefined FUN_144c6e040(void)

undefined8 FUN_144c6e040(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  uVar2 = param_4[1];
  iVar4 = *(int *)(param_2 + 2);
  *param_2 = *param_4;
  param_2[1] = uVar2;
  iVar1 = *(int *)(param_1 + 0x20);
  if (((-1 < iVar4) && (iVar4 < iVar1)) &&
     (*(int *)((longlong)iVar4 * 0x40 + 0x34 + *(longlong *)(param_1 + 0x18)) == param_3)) {
    return 0;
  }
  iVar6 = iVar4 + 1;
  if (iVar6 < iVar1) {
    lVar5 = (longlong)iVar6;
    piVar3 = (int *)(*(longlong *)(param_1 + 0x18) + 0x34 + lVar5 * 0x40);
    do {
      if (*piVar3 == param_3) {
        *(int *)(param_2 + 2) = iVar6;
        return 0;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      piVar3 = piVar3 + 0x10;
    } while (lVar5 < iVar1);
  }
  if (iVar1 <= iVar4 + -1) {
    iVar4 = iVar1;
  }
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4;
    piVar3 = (int *)(*(longlong *)(param_1 + 0x18) + 0x34 + lVar5 * 0x40);
    do {
      if (*piVar3 == param_3) {
        *(int *)(param_2 + 2) = iVar4;
        return 0;
      }
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  return 1;
}



// FUNCTION 144c6e150 FUN_144c6e150 body=2223 status=ok
// SIG undefined FUN_144c6e150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c6e150(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  bool bVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  ushort *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined8 uVar28;
  float fVar30;
  uint uVar31;
  float fVar32;
  uint uVar33;
  undefined1 auVar29 [16];
  uint uVar34;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  longlong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  ulonglong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  iVar2 = *(int *)(param_3 + 0x20);
  lVar18 = (longlong)iVar2;
  plVar1 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_160 = 0;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar2) {
    FUN_144c6f280(plVar1,&PTR_vftable_14c6e47a0,lVar18);
  }
  uVar14 = *(uint *)(param_2 + 0x40);
  uVar13 = (ulonglong)(uVar14 >> 0x16);
  local_118 = uVar13;
  lVar19 = *(longlong *)((ulonglong)(uVar14 >> 0x16) * 0x120 + 8 + *(longlong *)(param_4 + 0x38));
  lVar3 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0x38);
  auVar26 = *(undefined1 (*) [16])
             (*(longlong *)(*(longlong *)(lVar19 + 0x20) + 0x18) +
             (ulonglong)(uVar14 & 0x3fffff) * 0x18);
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar26._0_10_;
  auVar4._12_2_ = auVar26._6_2_;
  auVar6._8_2_ = auVar26._4_2_;
  auVar6._0_8_ = auVar26._0_8_;
  auVar6._10_4_ = auVar4._10_4_;
  auVar10._6_8_ = 0;
  auVar10._0_6_ = auVar6._8_6_;
  auVar8._4_2_ = auVar26._2_2_;
  auVar8._0_4_ = auVar26._0_4_;
  auVar8._6_8_ = SUB148(auVar10 << 0x40,6);
  auVar61._0_4_ =
       ((float)(auVar26._0_4_ & 0xffff) + 0.0) * *(float *)(lVar3 + 0xa0) + *(float *)(lVar3 + 0xb0)
  ;
  auVar61._4_4_ = ((float)auVar8._4_4_ + 0.0) * *(float *)(lVar3 + 0xa4) + *(float *)(lVar3 + 0xb4);
  auVar61._8_4_ =
       ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) *
       *(float *)(lVar3 + 0xa8) + *(float *)(lVar3 + 0xb8);
  auVar61._12_4_ =
       ((float)auVar26._6_2_ + 0.0) * *(float *)(lVar3 + 0xac) + *(float *)(lVar3 + 0xbc);
  auVar53._0_4_ = ((float)auVar26._8_2_ + 0.0) * *(float *)(lVar3 + 0xa0) + *(float *)(lVar3 + 0xb0)
  ;
  auVar53._4_4_ =
       ((float)auVar26._10_2_ + 0.0) * *(float *)(lVar3 + 0xa4) + *(float *)(lVar3 + 0xb4);
  auVar53._8_4_ =
       ((float)auVar26._12_2_ + 0.0) * *(float *)(lVar3 + 0xa8) + *(float *)(lVar3 + 0xb8);
  auVar53._12_4_ =
       ((float)auVar26._14_2_ + 0.0) * *(float *)(lVar3 + 0xac) + *(float *)(lVar3 + 0xbc);
  if (*(byte *)(lVar19 + 0x40) != 0) {
    uVar31 = (uint)*(byte *)(lVar19 + 0x40);
    uVar45 = -(uint)(0x16a8300 << uVar31 < 0);
    uVar47 = -(uint)(0x502ab000 << uVar31 < 0);
    uVar49 = -(uint)(0xa2a8c00 << uVar31 < 0);
    uVar41 = -(uint)(0xa154c00 << uVar31 < 0);
    uVar42 = -(uint)(0x1554300 << uVar31 < 0);
    uVar43 = -(uint)(0x50157000 << uVar31 < 0);
    uVar20 = (ulonglong)uVar31;
    uVar34 = (0xae71e0U >> uVar20) << 0x1f;
    uVar38 = (0xb9e306U >> uVar20) << 0x1f;
    uVar39 = (0xeb903cU >> uVar20) << 0x1f;
    uVar40 = (0U >> uVar20) << 0x1f;
    uVar28 = CONCAT44(uVar38 ^ (~uVar42 & ((uint)auVar61._8_4_ & uVar47 |
                                          ~uVar47 & (uint)auVar61._4_4_) |
                               (uint)auVar61._0_4_ & uVar42),
                      uVar34 ^ (~uVar41 & ((uint)auVar61._4_4_ & uVar45 |
                                          ~uVar45 & (uint)auVar61._0_4_) |
                               (uint)auVar61._8_4_ & uVar41));
    uVar31 = uVar39 ^ (~uVar43 & ((uint)auVar61._0_4_ & uVar49 | ~uVar49 & (uint)auVar61._8_4_) |
                      (uint)auVar61._4_4_ & uVar43);
    uVar33 = uVar40 ^ (uint)auVar61._12_4_;
    auVar60._8_4_ = uVar31;
    auVar60._0_8_ = uVar28;
    auVar60._12_4_ = uVar33;
    auVar52._8_4_ = uVar31;
    auVar52._0_8_ = uVar28;
    auVar52._12_4_ = uVar33;
    auVar26._0_4_ =
         uVar34 ^ (~uVar41 & ((uint)auVar53._4_4_ & uVar45 | ~uVar45 & (uint)auVar53._0_4_) |
                  (uint)auVar53._8_4_ & uVar41);
    auVar26._4_4_ =
         uVar38 ^ (~uVar42 & ((uint)auVar53._8_4_ & uVar47 | ~uVar47 & (uint)auVar53._4_4_) |
                  (uint)auVar53._0_4_ & uVar42);
    auVar26._8_4_ =
         uVar39 ^ (~uVar43 & ((uint)auVar53._0_4_ & uVar49 | ~uVar49 & (uint)auVar53._8_4_) |
                  (uint)auVar53._4_4_ & uVar43);
    auVar26._12_4_ = uVar40 ^ (uint)auVar53._12_4_;
    auVar61 = minps(auVar60,auVar26);
    auVar53 = maxps(auVar52,auVar26);
  }
  local_138._0_4_ = auVar61._0_4_ + *(float *)(lVar19 + 0x50);
  local_138._4_4_ = auVar61._4_4_ + *(float *)(lVar19 + 0x54);
  local_138._8_4_ = auVar61._8_4_ + *(float *)(lVar19 + 0x58);
  local_138._12_4_ = auVar61._12_4_ + *(float *)(lVar19 + 0x5c);
  local_128._0_4_ = auVar53._0_4_ + *(float *)(lVar19 + 0x50);
  local_128._4_4_ = auVar53._4_4_ + *(float *)(lVar19 + 0x54);
  local_128._8_4_ = auVar53._8_4_ + *(float *)(lVar19 + 0x58);
  local_128._12_4_ = auVar53._12_4_ + *(float *)(lVar19 + 0x5c);
  if (1 < lVar18) {
    local_110 = lVar18 + -1;
    uVar31 = uVar14;
    do {
      uVar33 = (uint)uVar13;
      local_118 = uVar13;
      if ((*(int *)(param_3 + 0x30) == 0) ||
         (uVar14 = *(uint *)(local_160 + *(longlong *)(param_3 + 0x28)), uVar14 == 0xffffffff)) {
        bVar12 = false;
      }
      else {
        lVar18 = *(longlong *)(lVar19 + 0x20);
        uVar14 = uVar14 & 0x3fffff;
        if ((int)uVar14 < *(int *)(lVar18 + 0x30)) {
          puVar17 = (ushort *)(*(longlong *)(lVar18 + 0x28) + (ulonglong)uVar14 * 8);
        }
        else {
          puVar17 = (ushort *)
                    (*(longlong *)(lVar18 + 0x60) +
                    (longlong)(int)(uVar14 - *(int *)(lVar18 + 0x30)) * 8);
        }
        uVar13 = (ulonglong)*puVar17;
        iVar15 = *(int *)(param_1 + 0x20);
        lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x38) + 0x38);
        iVar2 = iVar15 + 2;
        if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar2) {
          FUN_144c6f370(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        *(int *)(param_1 + 0x20) = iVar2;
        puVar16 = (undefined8 *)((longlong)iVar15 * 0x40 + *plVar1);
        lVar3 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0x38);
        local_f8 = (float)*(ushort *)(lVar18 + uVar13 * 0x18) * *(float *)(lVar3 + 0xa0) +
                   *(float *)(lVar3 + 0xb0);
        fStack_f4 = (float)*(ushort *)(lVar18 + 2 + uVar13 * 0x18) * *(float *)(lVar3 + 0xa4) +
                    *(float *)(lVar3 + 0xb4);
        fStack_f0 = (float)*(ushort *)(lVar18 + 4 + uVar13 * 0x18) * *(float *)(lVar3 + 0xa8) +
                    *(float *)(lVar3 + 0xb8);
        fStack_ec = *(float *)(lVar3 + 0xac) * 0.0 + *(float *)(lVar3 + 0xbc);
        if (*(byte *)(lVar19 + 0x40) != 0) {
          uVar33 = (uint)*(byte *)(lVar19 + 0x40);
          uVar34 = -(uint)(0x16a8300 << uVar33 < 0);
          uVar38 = -(uint)(0x502ab000 << uVar33 < 0);
          uVar39 = -(uint)(0xa2a8c00 << uVar33 < 0);
          uVar40 = -(uint)(0xa154c00 << uVar33 < 0);
          uVar41 = -(uint)(0x1554300 << uVar33 < 0);
          uVar42 = -(uint)(0x50157000 << uVar33 < 0);
          uVar43 = -(uint)(0 << uVar33 < 0);
          auVar35._0_4_ = (uint)fStack_f0 & uVar40;
          auVar35._4_4_ = (uint)local_f8 & uVar41;
          auVar35._8_4_ = (uint)fStack_f4 & uVar42;
          auVar35._12_4_ = (uint)fStack_ec & uVar43;
          auVar22._0_4_ = ~uVar40 & ((uint)fStack_f4 & uVar34 | ~uVar34 & (uint)local_f8);
          auVar22._4_4_ = ~uVar41 & ((uint)fStack_f0 & uVar38 | ~uVar38 & (uint)fStack_f4);
          auVar22._8_4_ = ~uVar42 & ((uint)local_f8 & uVar39 | ~uVar39 & (uint)fStack_f0);
          auVar22._12_4_ = ~uVar43 & (uint)fStack_ec;
          auVar22 = auVar22 | auVar35;
          uVar20 = (ulonglong)uVar33;
          local_f8 = (float)((0xae71e0U >> uVar20) << 0x1f ^ auVar22._0_4_);
          fStack_f4 = (float)((0xb9e306U >> uVar20) << 0x1f ^ auVar22._4_4_);
          fStack_f0 = (float)((0xeb903cU >> uVar20) << 0x1f ^ auVar22._8_4_);
          fStack_ec = (float)((0U >> uVar20) << 0x1f ^ auVar22._12_4_);
        }
        local_f8 = local_f8 + *(float *)(lVar19 + 0x50);
        fStack_f4 = fStack_f4 + *(float *)(lVar19 + 0x54);
        fStack_f0 = fStack_f0 + *(float *)(lVar19 + 0x58);
        fStack_ec = fStack_ec + *(float *)(lVar19 + 0x5c);
        FUN_144ff88a0(puVar16 + 2,&local_f8);
        *(uint *)((longlong)puVar16 + 0x34) = uVar31;
        *(uint *)(puVar16 + 7) = uVar14;
        *puVar16 = CONCAT44(fStack_f4,local_f8);
        puVar16[1] = CONCAT44(fStack_ec,fStack_f0);
        *(undefined1 *)(puVar16 + 6) = 0xf;
        lVar3 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0x38);
        local_e8 = (float)*(ushort *)(lVar18 + 8 + uVar13 * 0x18) * *(float *)(lVar3 + 0xa0) +
                   *(float *)(lVar3 + 0xb0);
        fStack_e4 = (float)*(ushort *)(lVar18 + 10 + uVar13 * 0x18) * *(float *)(lVar3 + 0xa4) +
                    *(float *)(lVar3 + 0xb4);
        fStack_e0 = (float)*(ushort *)(lVar18 + 0xc + uVar13 * 0x18) * *(float *)(lVar3 + 0xa8) +
                    *(float *)(lVar3 + 0xb8);
        fStack_dc = *(float *)(lVar3 + 0xac) * 0.0 + *(float *)(lVar3 + 0xbc);
        if (*(byte *)(lVar19 + 0x40) != 0) {
          uVar14 = (uint)*(byte *)(lVar19 + 0x40);
          uVar33 = -(uint)(0x16a8300 << uVar14 < 0);
          uVar34 = -(uint)(0x502ab000 << uVar14 < 0);
          uVar38 = -(uint)(0xa2a8c00 << uVar14 < 0);
          uVar39 = -(uint)(0xa154c00 << uVar14 < 0);
          uVar40 = -(uint)(0x1554300 << uVar14 < 0);
          uVar41 = -(uint)(0x50157000 << uVar14 < 0);
          uVar42 = -(uint)(0 << uVar14 < 0);
          auVar36._0_4_ = (uint)fStack_e0 & uVar39;
          auVar36._4_4_ = (uint)local_e8 & uVar40;
          auVar36._8_4_ = (uint)fStack_e4 & uVar41;
          auVar36._12_4_ = (uint)fStack_dc & uVar42;
          auVar23._0_4_ = ~uVar39 & ((uint)fStack_e4 & uVar33 | ~uVar33 & (uint)local_e8);
          auVar23._4_4_ = ~uVar40 & ((uint)fStack_e0 & uVar34 | ~uVar34 & (uint)fStack_e4);
          auVar23._8_4_ = ~uVar41 & ((uint)local_e8 & uVar38 | ~uVar38 & (uint)fStack_e0);
          auVar23._12_4_ = ~uVar42 & (uint)fStack_dc;
          auVar23 = auVar23 | auVar36;
          uVar13 = (ulonglong)uVar14;
          local_e8 = (float)((0xae71e0U >> uVar13) << 0x1f ^ auVar23._0_4_);
          fStack_e4 = (float)((0xb9e306U >> uVar13) << 0x1f ^ auVar23._4_4_);
          fStack_e0 = (float)((0xeb903cU >> uVar13) << 0x1f ^ auVar23._8_4_);
          fStack_dc = (float)((0U >> uVar13) << 0x1f ^ auVar23._12_4_);
        }
        local_e8 = local_e8 + *(float *)(lVar19 + 0x50);
        fStack_e4 = fStack_e4 + *(float *)(lVar19 + 0x54);
        fStack_e0 = fStack_e0 + *(float *)(lVar19 + 0x58);
        fStack_dc = fStack_dc + *(float *)(lVar19 + 0x5c);
        FUN_144ff88a0(puVar16 + 10,&local_e8);
        uVar33 = (uint)local_118;
        *(undefined8 *)((longlong)puVar16 + 0x74) = 0xffffffffffffffff;
        puVar16[8] = CONCAT44(fStack_e4,local_e8);
        puVar16[9] = CONCAT44(fStack_dc,fStack_e0);
        *(undefined1 *)(puVar16 + 0xe) = 0xf;
        bVar12 = true;
      }
      uVar14 = *(uint *)(*(longlong *)(param_3 + 0x18) + 4 + local_160);
      uVar34 = uVar14 >> 0x16;
      uVar13 = (ulonglong)uVar34;
      if (uVar34 != uVar33) {
        lVar19 = *(longlong *)(uVar13 * 0x120 + 8 + *(longlong *)(param_4 + 0x38));
      }
      lVar18 = *(longlong *)(*(longlong *)(lVar19 + 0x20) + 0x38);
      auVar26 = *(undefined1 (*) [16])
                 (*(longlong *)(*(longlong *)(lVar19 + 0x20) + 0x18) +
                 (ulonglong)(uVar14 & 0x3fffff) * 0x18);
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar26._0_10_;
      auVar5._12_2_ = auVar26._6_2_;
      auVar7._8_2_ = auVar26._4_2_;
      auVar7._0_8_ = auVar26._0_8_;
      auVar7._10_4_ = auVar5._10_4_;
      auVar11._6_8_ = 0;
      auVar11._0_6_ = auVar7._8_6_;
      auVar9._4_2_ = auVar26._2_2_;
      auVar9._0_4_ = auVar26._0_4_;
      auVar9._6_8_ = SUB148(auVar11 << 0x40,6);
      auVar59._0_4_ =
           ((float)(auVar26._0_4_ & 0xffff) + 0.0) * *(float *)(lVar18 + 0xa0) +
           *(float *)(lVar18 + 0xb0);
      auVar59._4_4_ =
           ((float)auVar9._4_4_ + 0.0) * *(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0xb4);
      auVar59._8_4_ =
           ((float)(auVar7._8_4_ >> 0x10) * 65536.0 + (float)(auVar7._8_4_ & 0xffff)) *
           *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0xb8);
      auVar59._12_4_ =
           ((float)(auVar5._10_4_ >> 0x10) + 0.0) * *(float *)(lVar18 + 0xac) +
           *(float *)(lVar18 + 0xbc);
      auVar57._0_4_ =
           ((float)auVar26._8_2_ + 0.0) * *(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0xb0);
      auVar57._4_4_ =
           ((float)auVar26._10_2_ + 0.0) * *(float *)(lVar18 + 0xa4) + *(float *)(lVar18 + 0xb4);
      auVar57._8_4_ =
           ((float)auVar26._12_2_ + 0.0) * *(float *)(lVar18 + 0xa8) + *(float *)(lVar18 + 0xb8);
      auVar57._12_4_ =
           ((float)auVar26._14_2_ + 0.0) * *(float *)(lVar18 + 0xac) + *(float *)(lVar18 + 0xbc);
      uVar38 = (uint)*(byte *)(lVar19 + 0x40);
      if (*(byte *)(lVar19 + 0x40) != 0) {
        uVar46 = -(uint)(0x16a8300 << uVar38 < 0);
        uVar48 = -(uint)(0x502ab000 << uVar38 < 0);
        uVar50 = -(uint)(0xa2a8c00 << uVar38 < 0);
        uVar47 = -(uint)(0xa154c00 << uVar38 < 0);
        uVar49 = -(uint)(0x1554300 << uVar38 < 0);
        uVar44 = -(uint)(0x50157000 << uVar38 < 0);
        uVar20 = (ulonglong)uVar38;
        uVar41 = (0xae71e0U >> uVar20) << 0x1f;
        uVar42 = (0xb9e306U >> uVar20) << 0x1f;
        uVar43 = (0xeb903cU >> uVar20) << 0x1f;
        uVar45 = (0U >> uVar20) << 0x1f;
        uVar28 = CONCAT44(uVar42 ^ (~uVar49 & ((uint)auVar59._8_4_ & uVar48 |
                                              ~uVar48 & (uint)auVar59._4_4_) |
                                   (uint)auVar59._0_4_ & uVar49),
                          uVar41 ^ (~uVar47 & ((uint)auVar59._4_4_ & uVar46 |
                                              ~uVar46 & (uint)auVar59._0_4_) |
                                   (uint)auVar59._8_4_ & uVar47));
        uVar39 = uVar43 ^ (~uVar44 & ((uint)auVar59._0_4_ & uVar50 | ~uVar50 & (uint)auVar59._8_4_)
                          | (uint)auVar59._4_4_ & uVar44);
        uVar40 = uVar45 ^ (uint)auVar59._12_4_;
        auVar58._8_4_ = uVar39;
        auVar58._0_8_ = uVar28;
        auVar58._12_4_ = uVar40;
        auVar56._8_4_ = uVar39;
        auVar56._0_8_ = uVar28;
        auVar56._12_4_ = uVar40;
        auVar37._0_4_ =
             uVar41 ^ (~uVar47 & ((uint)auVar57._4_4_ & uVar46 | ~uVar46 & (uint)auVar57._0_4_) |
                      (uint)auVar57._8_4_ & uVar47);
        auVar37._4_4_ =
             uVar42 ^ (~uVar49 & ((uint)auVar57._8_4_ & uVar48 | ~uVar48 & (uint)auVar57._4_4_) |
                      (uint)auVar57._0_4_ & uVar49);
        auVar37._8_4_ =
             uVar43 ^ (~uVar44 & ((uint)auVar57._0_4_ & uVar50 | ~uVar50 & (uint)auVar57._8_4_) |
                      (uint)auVar57._4_4_ & uVar44);
        auVar37._12_4_ = uVar45 ^ (uint)auVar57._12_4_;
        auVar59 = minps(auVar58,auVar37);
        auVar57 = maxps(auVar56,auVar37);
      }
      local_158._0_4_ = auVar59._0_4_ + *(float *)(lVar19 + 0x50);
      local_158._4_4_ = auVar59._4_4_ + *(float *)(lVar19 + 0x54);
      local_158._8_4_ = auVar59._8_4_ + *(float *)(lVar19 + 0x58);
      local_158._12_4_ = auVar59._12_4_ + *(float *)(lVar19 + 0x5c);
      local_148._0_4_ = auVar57._0_4_ + *(float *)(lVar19 + 0x50);
      local_148._4_4_ = auVar57._4_4_ + *(float *)(lVar19 + 0x54);
      local_148._8_4_ = auVar57._8_4_ + *(float *)(lVar19 + 0x58);
      local_148._12_4_ = auVar57._12_4_ + *(float *)(lVar19 + 0x5c);
      if (!bVar12) {
        if (uVar34 != uVar33) {
          auVar61 = maxps(local_138,local_158);
          auVar53 = minps(local_128,local_148);
          fVar51 = auVar53._0_4_ - auVar61._0_4_;
          fVar54 = auVar53._4_4_ - auVar61._4_4_;
          fVar55 = auVar53._8_4_ - auVar61._8_4_;
          fVar27 = ABS(fVar51);
          fVar30 = ABS(fVar54);
          fVar32 = ABS(fVar55);
          auVar21._0_8_ = CONCAT44(fVar51,fVar51) & 0x7fffffff7fffffff;
          auVar21._8_4_ = fVar27;
          auVar21._12_4_ = fVar27;
          auVar25._0_8_ = CONCAT44(fVar54,fVar54) & 0x7fffffff7fffffff;
          auVar25._8_4_ = fVar30;
          auVar25._12_4_ = fVar30;
          auVar26 = minps(auVar25,auVar21);
          auVar24._0_8_ = CONCAT44(fVar55,fVar55) & 0x7fffffff7fffffff;
          auVar24._8_4_ = fVar32;
          auVar24._12_4_ = fVar32;
          auVar26 = minps(auVar24,auVar26);
          auVar29._4_4_ = -(uint)(fVar30 <= auVar26._4_4_);
          auVar29._0_4_ = -(uint)(fVar27 <= auVar26._0_4_);
          auVar29._8_4_ = -(uint)(fVar32 <= auVar26._8_4_);
          auVar29._12_4_ = -(uint)(ABS(auVar53._12_4_ - auVar61._12_4_) <= auVar26._12_4_);
          uVar33 = movmskps(uVar38,auVar29);
          lVar18 = (longlong)(char)(&DAT_14998f5a0)[uVar33 & 7];
          fVar27 = *(float *)(local_128 + lVar18 * 4);
          if (fVar27 < *(float *)(local_148 + lVar18 * 4) ||
              fVar27 == *(float *)(local_148 + lVar18 * 4)) {
            *(float *)(local_158 + lVar18 * 4) = fVar27;
          }
          else {
            *(undefined4 *)(local_148 + lVar18 * 4) = *(undefined4 *)(local_138 + lVar18 * 4);
          }
        }
        iVar2 = *(int *)(param_1 + 0x20);
        iVar15 = iVar2 + 1;
        if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar15) {
          FUN_144c6f370(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar15);
        }
        puVar16 = (undefined8 *)((longlong)iVar2 * 0x40 + *plVar1);
        *(int *)(param_1 + 0x20) = iVar15;
        FUN_144ff8d70(local_138,local_158,puVar16 + 2);
        *puVar16 = puVar16[2];
        puVar16[1] = puVar16[3];
        *(uint *)((longlong)puVar16 + 0x34) = uVar31;
        *(undefined4 *)(puVar16 + 7) = 0xffffffff;
        *(undefined1 *)(puVar16 + 6) = 0;
      }
      local_160 = local_160 + 4;
      local_110 = local_110 + -1;
      local_138 = local_158;
      local_128 = local_148;
      local_118 = uVar13;
      uVar31 = uVar14;
    } while (local_110 != 0);
  }
  iVar2 = *(int *)(param_3 + 0x54);
  if (iVar2 < 0) {
    local_108 = CONCAT44((local_128._4_4_ + local_138._4_4_) * fRam000000014c6dad94,
                         (local_128._0_4_ + local_138._0_4_) * _DAT_14c6dad90);
    uStack_100 = CONCAT44((local_128._12_4_ + local_138._12_4_) * fRam000000014c6dad9c,
                          (local_128._8_4_ + local_138._8_4_) * fRam000000014c6dad98);
  }
  else {
    uVar14 = *(uint *)(*(longlong *)(param_2 + 0x48) + (longlong)iVar2 * 4);
    puVar16 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 0x10);
    local_108 = *puVar16;
    uStack_100 = puVar16[1];
  }
  iVar2 = *(int *)(param_1 + 0x20);
  iVar15 = iVar2 + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar15) {
    FUN_144c6f370((longlong *)(param_1 + 0x18),&PTR_vftable_14c6e47a0,(longlong)iVar15);
  }
  *(int *)(param_1 + 0x20) = iVar15;
  puVar16 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x18));
  FUN_144ff88a0(puVar16 + 2,&local_108);
  *puVar16 = local_108;
  puVar16[1] = uStack_100;
  *(uint *)((longlong)puVar16 + 0x34) = uVar14;
  *(undefined1 *)(puVar16 + 6) = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}



// FUNCTION 144c6ea00 FUN_144c6ea00 body=371 status=ok
// SIG undefined FUN_144c6ea00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c6ea00(longlong param_1,undefined8 param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar4 = *param_3;
    iVar2 = param_3[1];
    FUN_144c6edf0(param_1,param_2,param_3,local_res8);
    iVar5 = 1;
    if (1 < iVar2) {
      do {
        if ((iVar4 <= iVar5) && (local_res8[0] != 0)) {
          return;
        }
        FUN_144c6edf0(param_1,param_2,param_3,local_res8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  else {
    lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x40 + *(longlong *)(param_1 + 0x18);
    iVar4 = FUN_144ff88c0(lVar6 + -0x30);
    local_48 = *(float *)(lVar6 + -0x30);
    fStack_44 = *(float *)(lVar6 + -0x2c);
    fStack_40 = *(float *)(lVar6 + -0x28);
    fStack_3c = *(float *)(lVar6 + -0x24);
    if (iVar4 == 0) {
      FUN_144ff8910(lVar6 + -0x30,&local_38);
      local_48 = (local_38 - local_48) * _DAT_14c6dad90 + local_48;
      fStack_44 = (fStack_34 - fStack_44) * fRam000000014c6dad94 + fStack_44;
      fStack_40 = (fStack_30 - fStack_40) * fRam000000014c6dad98 + fStack_40;
      fStack_3c = (fStack_2c - fStack_3c) * fRam000000014c6dad9c + fStack_3c;
    }
    *(float *)(lVar6 + -0x40) = local_48;
    *(float *)(lVar6 + -0x3c) = fStack_44;
    *(float *)(lVar6 + -0x38) = fStack_40;
    *(float *)(lVar6 + -0x34) = fStack_3c;
    iVar4 = *(int *)(param_1 + 0x20) + -2;
    lVar6 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar7 = lVar6 << 6;
      do {
        lVar3 = *(longlong *)(param_1 + 0x18);
        FUN_144ff8e30(lVar3 + 0x10 + lVar7,&local_48,&local_48);
        pfVar1 = (float *)(lVar3 + lVar7);
        *pfVar1 = local_48;
        pfVar1[1] = fStack_44;
        pfVar1[2] = fStack_40;
        pfVar1[3] = fStack_3c;
        lVar7 = lVar7 + -0x40;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    iVar4 = param_3[2];
    iVar2 = param_3[3];
    FUN_144c6edf0(param_1,param_2,param_3,local_res8);
    iVar5 = 1;
    if (1 < iVar2) {
      do {
        if ((iVar4 <= iVar5) && (local_res8[0] != 0)) break;
        FUN_144c6edf0(param_1,param_2,param_3,local_res8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 144c6eb80 FUN_144c6eb80 body=135 status=ok
// SIG undefined FUN_144c6eb80(void)

void FUN_144c6eb80(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pfVar2 = (float *)((longlong)(int)param_2[4] * 0x40 + *(longlong *)(param_1 + 0x18));
  fVar4 = *pfVar2 - *param_2;
  fVar5 = pfVar2[1] - param_2[1];
  fVar6 = pfVar2[2] - param_2[2];
  fVar7 = pfVar2[3] - param_2[3];
  iVar1 = FUN_144ff88c0(pfVar2 + 4);
  if (iVar1 == 0) {
    fVar3 = pfVar2[8];
    if (pfVar2[9] <= pfVar2[8]) {
      fVar3 = pfVar2[9];
    }
    fVar3 = fVar3 * 0.01;
    FUN_144ff88d0(pfVar2 + 4,&local_38);
    fVar4 = fVar4 - fVar3 * local_38;
    fVar5 = fVar5 - fVar3 * fStack_34;
    fVar6 = fVar6 - fVar3 * fStack_30;
    fVar7 = fVar7 - fVar3 * fStack_2c;
  }
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = fVar7;
  return;
}



// FUNCTION 144c6ec10 FUN_144c6ec10 body=7 status=ok
// SIG undefined FUN_144c6ec10(void)

int FUN_144c6ec10(longlong param_1,longlong param_2)

{
  return *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x10);
}



// FUNCTION 144c6ec20 FUN_144c6ec20 body=151 status=ok
// SIG undefined FUN_144c6ec20(void)

ulonglong FUN_144c6ec20(longlong param_1,float *param_2,float param_3,int param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  
  uVar7 = (ulonglong)(int)param_2[4];
  iVar5 = *(int *)(param_1 + 0x20) + -1;
  if ((int)param_2[4] < iVar5) {
    pfVar6 = (float *)(uVar7 * 0x40 + *(longlong *)(param_1 + 0x18));
    uVar8 = uVar7;
    fVar9 = *param_2;
    fVar11 = param_2[1];
    fVar12 = param_2[2];
    while( true ) {
      fVar2 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar4 = pfVar6 + 2;
      fVar9 = fVar9 - fVar2;
      fVar11 = fVar11 - *pfVar3;
      fVar12 = fVar12 - *pfVar4;
      auVar10._8_4_ = fVar12 * fVar12;
      auVar10._4_4_ = auVar10._8_4_;
      auVar10._0_4_ = auVar10._8_4_;
      auVar10._12_4_ = auVar10._8_4_;
      fVar9 = fVar11 * fVar11 + fVar9 * fVar9 + auVar10._8_4_;
      if (param_3 * param_3 < fVar9) break;
      if (pfVar6[0xe] != -NAN) {
        if ((int)uVar8 < param_4) {
          return 0xffffffff;
        }
        return uVar8 & 0xffffffff;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar7 = uVar7 + 1;
      auVar1._4_4_ = fVar9;
      auVar1._0_4_ = fVar9;
      auVar1._8_4_ = fVar9;
      auVar1._12_4_ = fVar9;
      auVar10 = sqrtps(auVar10,auVar1);
      pfVar6 = pfVar6 + 0x10;
      param_3 = param_3 - auVar10._0_4_;
      fVar9 = fVar2;
      fVar11 = *pfVar3;
      fVar12 = *pfVar4;
      if ((longlong)iVar5 <= (longlong)uVar7) {
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 144c6ecc0 FUN_144c6ecc0 body=43 status=ok
// SIG undefined FUN_144c6ecc0(void)

void FUN_144c6ecc0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
  uVar2 = puVar1[1];
  *param_3 = *puVar1;
  param_3[1] = uVar2;
  puVar1 = (undefined8 *)(((longlong)param_2 + 1) * 0x40 + *(longlong *)(param_1 + 0x18));
  uVar2 = puVar1[1];
  *param_4 = *puVar1;
  param_4[1] = uVar2;
  return;
}



// FUNCTION 144c6ecf0 FUN_144c6ecf0 body=100 status=ok
// SIG undefined FUN_144c6ecf0(void)

longlong * FUN_144c6ecf0(longlong param_1,longlong *param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3 * 0x40 + *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)
           (*(longlong *)
             (*(longlong *)
               ((ulonglong)(*(uint *)(lVar4 + 0x34) >> 0x16) * 0x120 + 8 +
               *(longlong *)(param_4 + 0x38)) + 0x20) + 0x38);
  iVar1 = *(int *)(lVar3 + 0xcc);
  lVar2 = *(longlong *)(lVar3 + 0x48);
  lVar3 = (longlong)
          (int)((uint)*(ushort *)
                       (*(longlong *)(lVar3 + 0x28) + (longlong)*(int *)(lVar4 + 0x38) * 8) * iVar1)
  ;
  *param_2 = lVar2 + lVar3 * 4;
  param_2[1] = lVar2 + (lVar3 + iVar1) * 4;
  return param_2;
}



// FUNCTION 144c6ed60 FUN_144c6ed60 body=133 status=ok
// SIG undefined FUN_144c6ed60(void)

void FUN_144c6ed60(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < *(int *)(param_1 + 0x20)) {
    FUN_144c33790(param_2,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x20));
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x40 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x40) {
    lVar2 = param_2[1];
    puVar1 = (undefined4 *)(*param_2 + (longlong)(int)lVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(lVar3 + 0x34);
    }
    *(int *)(param_2 + 1) = (int)lVar2 + 1;
  }
  return;
}



// FUNCTION 144c6edf0 FUN_144c6edf0 body=1156 status=ok
// SIG undefined FUN_144c6edf0(void)

void FUN_144c6edf0(longlong param_1,float *param_2,longlong param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  longlong local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [64];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  fVar5 = param_2[4];
  bVar14 = true;
  uVar16 = (*(int *)(param_1 + 0x20) - (int)fVar5) - 2;
  local_148 = 2;
  bVar8 = false;
  uVar16 = uVar16 | (int)uVar16 >> 0x10;
  bVar7 = true;
  bVar9 = false;
  uVar16 = uVar16 | (int)uVar16 >> 8;
  uVar16 = uVar16 | (int)uVar16 >> 4;
  uVar16 = uVar16 | (int)uVar16 >> 2;
  uVar6 = *(uint *)(param_1 + 0x28);
  if ((int)(((int)uVar16 >> 1 | uVar16) + 1) <= (int)*(uint *)(param_1 + 0x28)) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x28) = uVar6 + 1;
  fVar3 = *(float *)(param_3 + 0x10);
  fVar4 = *(float *)(param_3 + 0x14);
  local_98 = fVar3 * fVar3;
  fStack_94 = fVar3 * fVar3;
  fStack_90 = fVar3 * fVar3;
  fStack_8c = fVar3 * fVar3;
  fVar18 = fVar5;
  if ((int)fVar5 < *(int *)(param_1 + 0x20)) {
    do {
      local_128 = *(longlong *)(param_1 + 0x18);
      lVar17 = (longlong)(int)fVar18 * 0x40;
      iVar11 = FUN_144ff88c0(local_128 + 0x10 + lVar17);
      if (iVar11 == 0) {
        fVar33 = param_2[4];
        if (fVar18 == fVar33) {
LAB_144c6ef0d:
          local_138 = *param_2;
          fStack_134 = param_2[1];
          fStack_130 = param_2[2];
          fStack_12c = param_2[3];
        }
        else {
          puVar2 = (undefined4 *)(lVar17 + *(longlong *)(param_1 + 0x18));
          local_b8 = *puVar2;
          uStack_b4 = puVar2[1];
          uStack_b0 = puVar2[2];
          uStack_ac = puVar2[3];
          FUN_144ff90f0(local_f8,&local_b8);
          iVar11 = (int)fVar18 + -1;
          iVar12 = FUN_144ff88c0((longlong)iVar11 * 0x40 + 0x10 + *(longlong *)(param_1 + 0x18));
          if (iVar12 == 0) {
            do {
              lVar15 = (longlong)iVar11 * 0x40;
              FUN_144ff9800(local_f8,*(longlong *)(param_1 + 0x18) + 0x10 + lVar15);
              iVar11 = iVar11 + -1;
              if (iVar11 == (int)fVar33 + -1) {
                cVar10 = FUN_144ff9860(local_f8,param_2);
                if (cVar10 != '\0') goto LAB_144c6ef0d;
                pfVar1 = (float *)(lVar15 + *(longlong *)(param_1 + 0x18));
                local_138 = *pfVar1;
                fStack_134 = pfVar1[1];
                fStack_130 = pfVar1[2];
                fStack_12c = pfVar1[3];
                goto LAB_144c6efb0;
              }
              cVar10 = FUN_144ff9860(local_f8,*(longlong *)(param_1 + 0x18) +
                                              (longlong)iVar11 * 0x40);
              if (cVar10 == '\0') {
                pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + lVar15);
                local_138 = *pfVar1;
                fStack_134 = pfVar1[1];
                fStack_130 = pfVar1[2];
                fStack_12c = pfVar1[3];
                goto LAB_144c6efb0;
              }
              iVar12 = FUN_144ff88c0(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)iVar11 * 0x40)
              ;
            } while (iVar12 == 0);
          }
          pfVar1 = (float *)((longlong)iVar11 * 0x40 + *(longlong *)(param_1 + 0x18));
          local_138 = *pfVar1;
          fStack_134 = pfVar1[1];
          fStack_130 = pfVar1[2];
          fStack_12c = pfVar1[3];
        }
LAB_144c6efb0:
        iVar11 = (int)fVar18 + 1;
        lVar15 = ((longlong)(int)fVar18 + 1) * 0x40;
        iVar12 = FUN_144ff88c0(*(longlong *)(param_1 + 0x18) + 0x10 + lVar15);
        if (iVar12 == 0) {
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar17);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          FUN_144ff90f0(local_f8,&local_a8);
          FUN_144ff9100(local_f8,*(longlong *)(param_1 + 0x18) + 0x10 + lVar15);
          iVar12 = (int)fVar18 + 2;
          lVar15 = (longlong)iVar12 * 0x40 + *(longlong *)(param_1 + 0x18);
          cVar10 = FUN_144ff9860(local_f8,lVar15);
          while (cVar10 != '\0') {
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 1;
            iVar13 = FUN_144ff88c0(lVar15 + 0x10);
            if (iVar13 != 0) break;
            FUN_144ff9100(local_f8,lVar15 + 0x10);
            lVar15 = (longlong)iVar12 * 0x40 + *(longlong *)(param_1 + 0x18);
            cVar10 = FUN_144ff9860(local_f8,lVar15);
          }
          puVar2 = (undefined4 *)((longlong)iVar11 * 0x40 + *(longlong *)(param_1 + 0x18));
          local_118 = *puVar2;
          uStack_114 = puVar2[1];
          uStack_110 = puVar2[2];
          uStack_10c = puVar2[3];
        }
        else {
          puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar15);
          local_118 = *puVar2;
          uStack_114 = puVar2[1];
          uStack_110 = puVar2[2];
          uStack_10c = puVar2[3];
        }
        lVar15 = local_128;
        pfVar1 = (float *)(lVar17 + local_128);
        fVar33 = *pfVar1;
        fVar34 = pfVar1[1];
        fVar35 = pfVar1[2];
        FUN_144ff89b0(local_128 + 0x10 + lVar17,&local_138,&local_118,&local_98,&local_108);
        pfVar1 = (float *)(lVar17 + lVar15);
        *pfVar1 = local_108;
        pfVar1[1] = fStack_104;
        pfVar1[2] = fStack_100;
        pfVar1[3] = fStack_fc;
        bVar8 = bVar9;
        if (fVar18 == param_2[4]) {
          fVar27 = fVar33 - *param_2;
          fVar28 = fVar34 - param_2[1];
          fVar29 = fVar35 - param_2[2];
          fVar30 = local_108 - *param_2;
          fVar31 = fStack_104 - param_2[1];
          fVar32 = fStack_100 - param_2[2];
          fVar18 = fVar27 * fVar27;
          fVar21 = fVar28 * fVar28;
          fVar22 = fVar29 * fVar29;
          fVar23 = fVar30 * fVar30;
          fVar25 = fVar31 * fVar31;
          fVar26 = fVar32 * fVar32;
          fVar36 = (fVar21 + fVar18 + fVar22) * (fVar25 + fVar23 + fVar26);
          if (fVar36 != 0.0) {
            fVar24 = fVar31 * fVar27 - fVar28 * fVar30;
            fVar28 = fVar32 * fVar28 - fVar29 * fVar31;
            fVar27 = fVar30 * fVar29 - fVar27 * fVar32;
            fVar28 = fVar28 * fVar28;
            fVar27 = fVar27 * fVar27;
            fVar24 = fVar24 * fVar24;
            auVar19._0_4_ = fVar27 + fVar28 + fVar24;
            auVar19._4_4_ = fVar27 + fVar28 + fVar24;
            auVar19._8_4_ = fVar27 + fVar28 + fVar24;
            auVar19._12_4_ = fVar27 + fVar28 + fVar24;
            auVar20._4_4_ = (fVar21 + fVar18 + fVar22) * (fVar25 + fVar23 + fVar26);
            auVar20._0_4_ = fVar36;
            auVar20._8_4_ = (fVar21 + fVar18 + fVar22) * (fVar25 + fVar23 + fVar26);
            auVar20._12_4_ = (fVar21 + fVar18 + fVar22) * (fVar25 + fVar23 + fVar26);
            auVar20 = divps(auVar19,auVar20);
            bVar8 = auVar20._0_4_ < fVar4 * fVar4;
          }
        }
        bVar9 = bVar8;
        if ((!bVar7) ||
           (fVar33 = fVar33 - local_108, fVar34 = fVar34 - fStack_104, fVar35 = fVar35 - fStack_100,
           fVar3 <= fVar34 * fVar34 + fVar33 * fVar33 + fVar35 * fVar35)) {
          bVar7 = false;
          bVar14 = bVar7;
        }
        else {
          bVar7 = true;
          bVar14 = bVar7;
        }
      }
      uVar16 = local_148 - 1 & uVar6 | local_148;
      local_148 = local_148 * 2;
      fVar18 = (float)((int)fVar5 + -1 + uVar16);
    } while ((int)fVar18 < *(int *)(param_1 + 0x20));
    if ((!bVar14) && (!bVar8)) {
      *param_4 = 0;
      return;
    }
  }
  *param_4 = 1;
  return;
}



// FUNCTION 144c6f280 FUN_144c6f280 body=236 status=ok
// SIG undefined FUN_144c6f280(void)

void FUN_144c6f280(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x40;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 6);
  uVar1 = uVar3 * 0x40 + 0x40;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c6f370 FUN_144c6f370 body=243 status=ok
// SIG undefined FUN_144c6f370(void)

void FUN_144c6f370(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x40,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 6);
  uVar1 = uVar3 * 0x40 + 0x40;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 6);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c6f490 FUN_144c6f490 body=92 status=ok
// SIG undefined FUN_144c6f490(void)

void FUN_144c6f490(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1] + 1;
  if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_144c33790(plVar2,&PTR_vftable_14c6e47c0,(longlong)iVar3);
  }
  puVar1 = (undefined4 *)(*plVar2 + (longlong)(int)plVar2[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(plVar2 + 1) = iVar3;
  return;
}



// FUNCTION 144c6f4f0 FUN_144c6f4f0 body=227 status=ok
// SIG undefined FUN_144c6f4f0(void)

undefined8 * FUN_144c6f4f0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 144c6f5e0 FUN_144c6f5e0 body=3 status=ok
// SIG undefined FUN_144c6f5e0(void)

void FUN_144c6f5e0(void)

{
  return;
}



// FUNCTION 144c6f5f0 FUN_144c6f5f0 body=162 status=ok
// SIG undefined FUN_144c6f5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144c6f5f0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_144ca9a00();
  *param_1 = hkaiPointCloudSilhouetteGenerator::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)(param_1 + 0x13) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3ba3d70a;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[10] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0xb] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0xc) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 100) = uVar2;
  *(uint *)(param_1 + 0xd) = uVar3;
  *(uint *)((longlong)param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x1010101;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return param_1;
}



// FUNCTION 144c6f6a0 FUN_144c6f6a0 body=176 status=ok
// SIG undefined FUN_144c6f6a0(void)

void FUN_144c6f6a0(undefined8 *param_1)

{
  *param_1 = hkaiPointCloudSilhouetteGenerator::vftable;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 4);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  FUN_144ca9a60(param_1);
  return;
}



// FUNCTION 144c6f750 FUN_144c6f750 body=7 status=ok
// SIG undefined FUN_144c6f750(void)

undefined4 FUN_144c6f750(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// FUNCTION 144c6f760 FUN_144c6f760 body=1007 status=ok
// SIG undefined FUN_144c6f760(void)

longlong FUN_144c6f760(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  uint local_5c;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  
  iVar7 = FUN_144ca9ac0();
  if (iVar7 != 0) {
    return param_1[5];
  }
  lVar8 = (**(code **)(PTR_vftable_14c6e47c0 + 8))(&PTR_vftable_14c6e47c0,0x800);
  uVar13 = *(uint *)(param_1 + 0x11);
  local_70 = 0;
  local_6c = 0x80000080;
  if ((uVar13 == 0) || (*(char *)((longlong)param_1 + 0xa4) == '\x03')) {
    uVar13 = 1;
  }
  local_60 = 0;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_78 = lVar8;
  if (*(char *)(lVar12 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar12 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar12 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar12 + 0xf0) = lVar9;
  }
  puVar11 = *(undefined8 **)(*(longlong *)(lVar9 + 0x3d0) + 0x10);
  local_58 = (undefined8 *)0x0;
  if (puVar11[1] == 0) {
    local_58 = puVar11;
  }
  local_80 = (longlong)(int)uVar13 * 4;
  local_48 = local_80;
  if (local_58 == (undefined8 *)0x0) {
    local_68 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_80 >> 8),1),&local_80);
  }
  else {
    local_88 = local_80 + 0x3fU & 0xffffffffffffffc0;
    if (local_88 <= (ulonglong)local_58[5]) {
      local_68 = local_58[7];
      if (local_68 + local_88 <= (ulonglong)local_58[8]) {
        local_58[7] = local_68 + local_88;
        goto LAB_144c6f8cd;
      }
    }
    local_68 = FUN_144b454a0(local_58,&local_88);
  }
LAB_144c6f8cd:
  local_5c = uVar13 | 0x80000000;
  local_50 = local_68;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,&local_78,&local_68);
  puVar11 = (undefined8 *)param_1[5];
  if (puVar11 == (undefined8 *)0x0) {
    local_80 = 0x70;
    puVar10 = (undefined8 *)(*DAT_14c787670)(0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar10);
    }
    puVar11 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[2] = 1;
      puVar10[1] = 0xffffffff;
      puVar10[3] = 0;
      *puVar10 = hkaiConvexSilhouetteSet::vftable;
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x24) = 0x80000000;
      puVar10[5] = 0;
      *(undefined4 *)(puVar10 + 6) = 0;
      *(undefined4 *)((longlong)puVar10 + 0x34) = 0x80000000;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar11 = puVar10;
    }
    lVar12 = param_1[5];
    param_1[5] = (longlong)puVar11;
    if (lVar12 != 0) {
      FUN_144b3f230();
      puVar11 = (undefined8 *)param_1[5];
    }
  }
  iVar7 = local_70;
  plVar1 = puVar11 + 3;
  if (&local_78 != plVar1) {
    if ((int)(*(uint *)((longlong)puVar11 + 0x24) & 0x7fffffff) < local_70) {
      FUN_140c3e7da(plVar1,&PTR_vftable_14c6e47a0,(longlong)local_70);
    }
    FUN_144b3d470(*plVar1);
    *(int *)(puVar11 + 4) = iVar7;
  }
  iVar7 = local_60;
  lVar12 = (longlong)local_60;
  if ((int)(*(uint *)((longlong)puVar11 + 0x34) & 0x7fffffff) < local_60) {
    FUN_141807aa8(puVar11 + 5);
  }
  if ((*(int *)(puVar11 + 6) < iVar7) || (iVar7 < *(int *)(puVar11 + 6))) {
    *(int *)(puVar11 + 6) = iVar7;
  }
  iVar7 = 0;
  lVar9 = 0;
  if (0 < lVar12) {
    do {
      iVar2 = *(int *)(local_68 + lVar9 * 4);
      *(int *)(puVar11[5] + lVar9 * 4) = iVar7;
      iVar7 = iVar7 + iVar2;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar12);
  }
  uVar6 = param_2[1];
  puVar11[8] = *param_2;
  puVar11[9] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar11 + 0x54) = uVar3;
  *(undefined4 *)(puVar11 + 0xb) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0x5c) = uVar5;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(puVar11 + 0xc) = *param_4;
  *(undefined4 *)((longlong)puVar11 + 100) = uVar3;
  *(undefined4 *)(puVar11 + 0xd) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0x6c) = uVar5;
  lVar12 = param_1[5];
  if (local_50 == local_68) {
    local_60 = 0;
  }
  if (local_58 == (undefined8 *)0x0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar14 = local_48 + 0x3fU & 0xffffffffffffffc0;
    if (((ulonglong)local_58[5] < uVar14) || (local_50 + uVar14 != local_58[7])) {
      FUN_144be8550();
    }
    else {
      local_58[7] = local_50;
      if (local_58[9] == local_50) {
        FUN_144be8430();
      }
    }
  }
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 2);
  }
  local_68 = 0;
  local_5c = 0x80000000;
  if (lVar8 != 0) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,lVar8,0x800);
  }
  return lVar12;
}



// FUNCTION 144c6fb50 FUN_144c6fb50 body=26 status=ok
// SIG undefined FUN_144c6fb50(void)

void FUN_144c6fb50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
    return;
  }
  return;
}



// FUNCTION 144c6fb70 FUN_144c6fb70 body=821 status=ok
// SIG undefined FUN_144c6fb70(void)

void FUN_144c6fb70(longlong param_1,undefined8 param_2,float param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  longlong local_a0;
  int local_98;
  uint local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  cVar4 = *(char *)(param_1 + 0xa4);
  bVar20 = cVar4 == '\x02';
  local_88 = *(longlong *)(param_1 + 0x70);
  iVar19 = *(int *)(param_1 + 0x88);
  local_80 = (longlong)*(int *)(param_1 + 0x78) * 0x10 + local_88;
  if ((iVar19 == 0) || (cVar4 == '\x03')) {
    iVar9 = 1;
    if ((iVar19 == 0) || (cVar4 == '\x03')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
  }
  else {
    bVar8 = false;
    iVar9 = iVar19;
  }
  uVar17 = 0;
  iVar19 = 0;
  local_78 = *(float *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\0') {
    local_78 = local_78 + param_3;
  }
  local_70 = *(undefined4 *)(param_1 + 0x9c);
  local_74 = *(undefined4 *)(param_1 + 0x98);
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_58 = param_4[2];
  uStack_50 = param_4[3];
  local_48 = *(undefined4 *)(param_4 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_40 = *(undefined4 *)(param_4 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_6c = *(undefined4 *)(param_1 + 0xa0);
  plVar1 = param_6 + 1;
  if (0 < iVar9) {
    local_90 = (longlong)iVar9;
    uVar16 = uVar17;
    do {
      if (bVar20) goto LAB_144c6fe38;
      if (bVar8) {
        uVar18 = local_80 - local_88 >> 4;
      }
      else {
        uVar18 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x80) + uVar16 * 4);
      }
      local_a0 = (**(code **)(PTR_vftable_14c6e47c0 + 8))(&PTR_vftable_14c6e47c0,0x800);
      local_98 = 0x80;
      local_94 = 0x80;
      iVar9 = FUN_144fe8aa0((longlong)iVar19 * 0x10 + local_88,uVar18 & 0xffffffff,&local_78,param_2
                            ,&local_a0);
      iVar14 = 0;
      if (((iVar9 == 0) ||
          (iVar9 = (int)param_5[1],
          (int)((*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) - iVar9) < local_98)) ||
         ((int)((*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) - (int)param_6[1]) < 1)) {
        *(undefined4 *)(param_5 + 1) = 0;
        bVar20 = true;
      }
      else {
        uVar12 = uVar17;
        uVar15 = uVar17;
        if (0 < local_98) {
          do {
            lVar10 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            puVar11 = (undefined4 *)(lVar10 * 0x10 + *param_5);
            if (puVar11 != (undefined4 *)0x0) {
              puVar2 = (undefined4 *)(uVar12 + local_a0);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              *puVar11 = *puVar2;
              puVar11[1] = uVar5;
              puVar11[2] = uVar6;
              puVar11[3] = uVar7;
            }
            uVar13 = (int)uVar15 + 1;
            *(int *)(param_5 + 1) = iVar9;
            uVar12 = uVar12 + 0x10;
            uVar15 = (ulonglong)uVar13;
          } while ((int)uVar13 < local_98);
        }
        piVar3 = (int *)(*param_6 + (longlong)(int)param_6[1] * 4);
        iVar14 = (int)param_6[1] + 1;
        if (piVar3 != (int *)0x0) {
          *piVar3 = local_98;
        }
        iVar19 = iVar19 + (int)uVar18;
      }
      *(int *)plVar1 = iVar14;
      local_98 = 0;
      if ((-1 < (int)local_94) && (local_a0 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 4);
      }
      uVar16 = uVar16 + 1;
      local_a0 = 0;
      local_94 = 0x80000000;
    } while ((longlong)uVar16 < local_90);
  }
  if (bVar20) {
LAB_144c6fe38:
    FUN_144fe9340(param_1 + 0x50,param_2,local_78,param_4,param_5);
    lVar10 = *plVar1;
    puVar11 = (undefined4 *)(*param_6 + (longlong)(int)lVar10 * 4);
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = (int)param_5[1];
    }
    *(int *)plVar1 = (int)lVar10 + 1;
  }
  return;
}



// FUNCTION 144c6feb0 FUN_144c6feb0 body=53 status=ok
// SIG undefined FUN_144c6feb0(void)

void FUN_144c6feb0(longlong param_1)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 0xa5) = 0;
  bVar1 = *(char *)(param_1 + 0xa6) != '\0';
  if (bVar1) {
    *(undefined2 *)(param_1 + 0xa5) = 1;
  }
  if (*(char *)(param_1 + 0xa7) != '\0') {
    *(undefined1 *)(param_1 + 0xa7) = 0;
    *(byte *)(param_1 + 0xa5) = bVar1 | 2;
  }
  return;
}



// FUNCTION 144c6fef0 FUN_144c6fef0 body=387 status=ok
// SIG undefined FUN_144c6fef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c6fef0(longlong param_1,float *param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  iVar1 = *(int *)(param_1 + 0x78);
  lVar9 = (longlong)iVar1;
  local_88 = _DAT_14c6dae80;
  local_78._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  local_78._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  local_78._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  if ((0x7f < iVar1) && (*(char *)(param_1 + 0xa4) != '\x02')) {
    FUN_144be9500(param_2,param_1 + 0x50,local_88);
    *(undefined8 *)*param_3 = local_88._0_8_;
    *(undefined8 *)(*param_3 + 8) = local_88._8_8_;
    *(undefined8 *)param_3[1] = local_78._0_8_;
    *(undefined8 *)(param_3[1] + 8) = local_78._8_8_;
    return;
  }
  auVar19 = _DAT_14c6dae80;
  if (0 < iVar1) {
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_2[3];
    pfVar8 = *(float **)(param_1 + 0x70);
    do {
      fVar14 = *pfVar8;
      fVar16 = pfVar8[1];
      fVar17 = pfVar8[2];
      fVar18 = pfVar8[3];
      pfVar8 = pfVar8 + 4;
      fVar10 = fVar14 * fVar4;
      fVar11 = fVar16 * fVar5;
      fVar12 = fVar17 * fVar6;
      fVar13 = (fVar11 + fVar10 + fVar12) * fVar4 + fVar14 * (fVar7 * fVar7 - _DAT_14c6dad90) +
               (fVar17 * fVar5 - fVar16 * fVar6) * fVar7;
      fVar15 = (fVar11 + fVar10 + fVar12) * fVar5 + fVar16 * (fVar7 * fVar7 - fRam000000014c6dad94)
               + (fVar14 * fVar6 - fVar17 * fVar4) * fVar7;
      fVar17 = (fVar11 + fVar10 + fVar12) * fVar6 + fVar17 * (fVar7 * fVar7 - fRam000000014c6dad98)
               + (fVar16 * fVar4 - fVar14 * fVar5) * fVar7;
      fVar18 = (fVar11 + fVar10 + fVar12) * fVar7 + fVar18 * (fVar7 * fVar7 - fRam000000014c6dad9c)
               + (fVar18 * fVar7 - fVar18 * fVar7) * fVar7;
      fVar14 = fVar13 + fVar13 + param_2[4];
      fVar16 = fVar15 + fVar15 + param_2[5];
      fVar17 = fVar17 + fVar17 + param_2[6];
      fVar18 = fVar18 + fVar18 + param_2[7];
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar14;
      auVar2._8_4_ = fVar17;
      auVar2._12_4_ = fVar18;
      auVar19 = minps(auVar19,auVar2);
      auVar3._4_4_ = fVar16;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fVar17;
      auVar3._12_4_ = fVar18;
      local_78 = maxps(local_78,auVar3);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *param_3 = auVar19;
  param_3[1] = local_78;
  return;
}



// FUNCTION 144c70080 FUN_144c70080 body=101 status=ok
// SIG undefined FUN_144c70080(void)

void FUN_144c70080(longlong param_1,undefined4 param_2,float param_3,float *param_4)

{
  float fVar1;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_144c6fef0(param_1,param_2,&local_38);
  fVar1 = *(float *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\0') {
    fVar1 = fVar1 + param_3;
  }
  param_4[4] = local_28 + fVar1;
  param_4[5] = fStack_24 + fVar1;
  param_4[6] = fStack_20 + fVar1;
  param_4[7] = fStack_1c + fVar1;
  *param_4 = local_38 - fVar1;
  param_4[1] = fStack_34 - fVar1;
  param_4[2] = fStack_30 - fVar1;
  param_4[3] = fStack_2c - fVar1;
  return;
}



// FUNCTION 144c700f0 FUN_144c700f0 body=156 status=ok
// SIG undefined FUN_144c700f0(void)

void FUN_144c700f0(longlong param_1,undefined8 param_2,float param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_144c6fef0(param_1,param_2,&local_38);
  local_58 = *(float *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\0') {
    local_58 = local_58 + param_3;
  }
  local_48 = 0;
  uStack_40 = 0;
  fStack_54 = local_58;
  fStack_50 = local_58;
  fStack_4c = local_58;
  FUN_144ca9e80(&local_38,param_4,&local_48,&local_58,2);
  *param_5 = local_38;
  param_5[1] = uStack_30;
  param_5[2] = local_28;
  param_5[3] = uStack_20;
  return;
}



// FUNCTION 144c70190 FUN_144c70190 body=16 status=ok
// SIG undefined FUN_144c70190(void)

void FUN_144c70190(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = *(undefined8 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  param_2[2] = *(undefined8 *)(param_1 + 0x60);
  param_2[3] = uVar1;
  return;
}



// FUNCTION 144c701a0 FUN_144c701a0 body=11 status=ok
// SIG undefined FUN_144c701a0(void)

bool FUN_144c701a0(longlong param_1)

{
  return (*(byte *)(param_1 + 0xa5) & 3) != 0;
}



// FUNCTION 144c701b0 FUN_144c701b0 body=11 status=ok
// SIG undefined FUN_144c701b0(void)

bool FUN_144c701b0(longlong param_1)

{
  return *(char *)(param_1 + 0xa8) != '\0';
}



// FUNCTION 144c701c0 FUN_144c701c0 body=250 status=ok
// SIG undefined FUN_144c701c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c701c0(longlong param_1,float *param_2,longlong *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar8 = *(int *)(param_1 + 0x78);
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_1418055da(param_3,&PTR_vftable_14c6e47c0,(longlong)iVar8);
  }
  if (((int)param_3[1] < iVar8) || (iVar8 < (int)param_3[1])) {
    *(int *)(param_3 + 1) = iVar8;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar9 = 0;
    do {
      fVar2 = *param_2;
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      fVar16 = param_2[3];
      iVar8 = iVar8 + 1;
      pfVar1 = (float *)(lVar9 + *(longlong *)(param_1 + 0x70));
      fVar15 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar10 = fVar15 * fVar2;
      fVar11 = fVar5 * fVar3;
      fVar12 = fVar6 * fVar4;
      fVar13 = (fVar11 + fVar10 + fVar12) * fVar2 + (fVar16 * fVar16 - _DAT_14c6dad90) * fVar15 +
               (fVar6 * fVar3 - fVar4 * fVar5) * fVar16;
      fVar14 = (fVar11 + fVar10 + fVar12) * fVar3 + (fVar16 * fVar16 - fRam000000014c6dad94) * fVar5
               + (fVar15 * fVar4 - fVar2 * fVar6) * fVar16;
      fVar15 = (fVar11 + fVar10 + fVar12) * fVar4 + (fVar16 * fVar16 - fRam000000014c6dad98) * fVar6
               + (fVar5 * fVar2 - fVar3 * fVar15) * fVar16;
      fVar16 = (fVar11 + fVar10 + fVar12) * fVar16 +
               (fVar16 * fVar16 - fRam000000014c6dad9c) * fVar7 +
               (fVar7 * fVar16 - fVar16 * fVar7) * fVar16;
      fVar2 = param_2[5];
      fVar3 = param_2[6];
      fVar4 = param_2[7];
      pfVar1 = (float *)(lVar9 + *param_3);
      *pfVar1 = fVar13 + fVar13 + param_2[4];
      pfVar1[1] = fVar14 + fVar14 + fVar2;
      pfVar1[2] = fVar15 + fVar15 + fVar3;
      pfVar1[3] = fVar16 + fVar16 + fVar4;
      lVar9 = lVar9 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 144c702c0 FUN_144c702c0 body=250 status=ok
// SIG undefined FUN_144c702c0(void)

undefined8 * FUN_144c702c0(undefined8 *param_1,uint param_2)

{
  *param_1 = hkaiPointCloudSilhouetteGenerator::vftable;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 4);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  FUN_144ca9a60(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 144c703c0 FUN_144c703c0 body=120 status=ok
// SIG undefined FUN_144c703c0(void)

void FUN_144c703c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    puVar2 = (undefined1 *)(param_1 + 0x10);
    do {
      if ((longlong *)(puVar2 + -0x10) != (longlong *)0x0) {
        lVar1 = *(longlong *)(puVar2 + (param_2 - param_1) + -0x10);
        *(longlong *)(puVar2 + -0x10) = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined8 *)(puVar2 + -8) = 0;
        *puVar2 = 0;
        *puVar2 = puVar2[param_2 - param_1];
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c70440 FUN_144c70440 body=18 status=ok
// SIG undefined FUN_144c70440(void)

undefined8 * FUN_144c70440(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5900;
  return param_2;
}



// FUNCTION 144c70460 FUN_144c70460 body=105 status=ok
// SIG undefined FUN_144c70460(void)

void FUN_144c70460(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + lVar3 * 0x18);
    do {
      lVar1 = plVar2[1];
      if (lVar1 != 0) {
        FUN_144be5d10(lVar1);
        (*DAT_14c787678)(0,lVar1,0);
      }
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      plVar2 = plVar2 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144c704d0 FUN_144c704d0 body=132 status=ok
// SIG undefined FUN_144c704d0(void)

void FUN_144c704d0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - (longlong)param_2;
    plVar2 = param_2;
    do {
      if (*(longlong *)((longlong)plVar2 + lVar3) != *plVar2) {
        if (*plVar2 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)((longlong)plVar2 + lVar3);
        *(longlong *)((longlong)plVar2 + lVar3) = *plVar2;
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined1 *)(lVar3 + 0x10 + (longlong)plVar2) =
           *(undefined1 *)((longlong)param_2 + (lVar3 - param_1) + 0x10 + (longlong)plVar2);
      plVar2 = plVar2 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c70560 FUN_144c70560 body=18 status=ok
// SIG undefined FUN_144c70560(void)

undefined8 * FUN_144c70560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5a40;
  return param_2;
}



// FUNCTION 144c70640 FUN_144c70640 body=74 status=ok
// SIG undefined FUN_144c70640(void)

void FUN_144c70640(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c70690 FUN_144c70690 body=80 status=ok
// SIG undefined FUN_144c70690(void)

void FUN_144c70690(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c706e0 FUN_144c706e0 body=55 status=ok
// SIG undefined FUN_144c706e0(void)

void FUN_144c706e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144faa930(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c70720 FUN_144c70720 body=77 status=ok
// SIG undefined FUN_144c70720(void)

void FUN_144c70720(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c70780 FUN_144c70780 body=63 status=ok
// SIG undefined FUN_144c70780(void)

void FUN_144c70780(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c707c0 FUN_144c707c0 body=292 status=ok
// SIG undefined FUN_144c707c0(void)

void FUN_144c707c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar6 = (uint *)(param_1 + 0x24);
    lVar7 = (longlong)param_4;
    do {
      if (puVar6 + -9 != (uint *)0x0) {
        puVar6[-7] = 0xffffffff;
        puVar6[-6] = 0;
        puVar6[-5] = 1;
        puVar6[-4] = 0;
        *(undefined ***)(puVar6 + -9) = hkaiPathRequestManager::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar6);
        uVar5 = (ulonglong)uVar1;
        plVar4 = *(longlong **)((longlong)puVar6 + param_2 + -0xc);
        if (0 < (int)uVar1) {
          plVar3 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(longlong **)(puVar6 + -3) = plVar3;
          puVar6[-1] = uVar1;
          *puVar6 = uVar1;
          do {
            if (plVar3 != (longlong *)0x0) {
              lVar2 = *plVar4;
              *plVar3 = lVar2;
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              plVar4 = plVar4 + 1;
            }
            uVar5 = uVar5 - 1;
            plVar3 = plVar3 + 1;
          } while (uVar5 != 0);
        }
        *(undefined8 *)(puVar6 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar6);
      }
      puVar6 = puVar6 + 0xc;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c70940 FUN_144c70940 body=97 status=ok
// SIG undefined FUN_144c70940(void)

void FUN_144c70940(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c709b0 FUN_144c709b0 body=88 status=ok
// SIG undefined FUN_144c709b0(void)

void FUN_144c709b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c70a40 FUN_144c70a40 body=446 status=ok
// SIG undefined FUN_144c70a40(void)

void FUN_144c70a40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar10 = (longlong *)(param_1 + 0x18);
    lVar9 = (longlong)param_4;
    do {
      if ((longlong *)(param_2 + (longlong)plVar10) != plVar10) {
        plVar6 = *(longlong **)(param_2 + (longlong)plVar10);
        iVar1 = *(int *)((longlong)plVar10 + param_2 + 8);
        if ((int)(*(uint *)((longlong)plVar10 + 0xc) & 0x7fffffff) < iVar1) {
          FUN_144c9cea0(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
        }
        if (iVar1 < (int)plVar10[1]) {
          lVar7 = *plVar10;
          lVar4 = lVar7 + (longlong)(int)plVar10[1] * 8;
          while (lVar4 != lVar7 + (longlong)iVar1 * 8) {
            plVar5 = (longlong *)(lVar4 + -8);
            lVar4 = lVar4 + -8;
            if (*plVar5 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar5 = (longlong *)*plVar10;
        iVar3 = iVar1;
        if ((int)plVar10[1] < iVar1) {
          iVar3 = (int)plVar10[1];
        }
        if ((plVar5 != plVar6) && (lVar4 = (longlong)iVar3, 0 < iVar3)) {
          lVar7 = (longlong)plVar6 - (longlong)plVar5;
          do {
            lVar2 = *(longlong *)(lVar7 + (longlong)plVar5);
            if (*plVar5 != lVar2) {
              if (lVar2 != 0) {
                FUN_144b3d910();
              }
              lVar2 = *plVar5;
              *plVar5 = *(longlong *)(lVar7 + (longlong)plVar5);
              if (lVar2 != 0) {
                FUN_144b3f230();
              }
            }
            plVar5 = plVar5 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        plVar6 = plVar6 + iVar3;
        if (0 < iVar1 - iVar3) {
          uVar8 = (ulonglong)(uint)(iVar1 - iVar3);
          plVar5 = (longlong *)(*plVar10 + (longlong)iVar3 * 8);
          do {
            if (plVar5 != (longlong *)0x0) {
              lVar4 = *plVar6;
              *plVar5 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              plVar6 = plVar6 + 1;
            }
            uVar8 = uVar8 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar8 != 0);
        }
        *(int *)(plVar10 + 1) = iVar1;
      }
      plVar10[2] = *(longlong *)((longlong)plVar10 + param_2 + 0x10);
      plVar10 = plVar10 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c70c00 FUN_144c70c00 body=106 status=ok
// SIG undefined FUN_144c70c00(void)

undefined8 * FUN_144c70c00(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[10] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144c70c70 FUN_144c70c70 body=106 status=ok
// SIG undefined FUN_144c70c70(void)

undefined8 * FUN_144c70c70(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c70d30 FUN_144c70d30 body=91 status=ok
// SIG undefined FUN_144c70d30(void)

void FUN_144c70d30(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c70d90 FUN_144c70d90 body=18 status=ok
// SIG undefined FUN_144c70d90(void)

undefined8 * FUN_144c70d90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5bd0;
  return param_2;
}



// FUNCTION 144c70de0 FUN_144c70de0 body=689 status=ok
// SIG undefined FUN_144c70de0(void)

void FUN_144c70de0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_4;
  lVar5 = 0;
  param_2 = param_2 - param_1;
  if (3 < lVar6) {
    puVar4 = (undefined8 *)(param_1 + 0x60);
    lVar3 = (lVar6 - 4U >> 2) + 1;
    lVar5 = lVar3 * 4;
    do {
      if (puVar4 + -0xc != (undefined8 *)0x0) {
        puVar4[-0xb] = 0xffffffff;
        puVar4[-10] = 1;
        puVar4[-0xc] = hkaiBlockedCharacterDetector::vftable;
        *(undefined4 *)(puVar4 + -9) = *(undefined4 *)(param_2 + -0x48 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + -0x44) =
             *(undefined4 *)(param_2 + -0x44 + (longlong)puVar4);
        *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(param_2 + -0x40 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + -0x3c) =
             *(undefined4 *)(param_2 + -0x3c + (longlong)puVar4);
        puVar1 = (undefined8 *)(param_2 + -0x30 + (longlong)puVar4);
        uVar2 = puVar1[1];
        puVar4[-6] = *puVar1;
        puVar4[-5] = uVar2;
        *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar4);
        *(undefined1 *)((longlong)puVar4 + -0x1c) =
             *(undefined1 *)(param_2 + -0x1c + (longlong)puVar4);
        *(undefined1 *)((longlong)puVar4 + -0x1b) =
             *(undefined1 *)(param_2 + -0x1b + (longlong)puVar4);
      }
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-1] = 0xffffffff;
        *puVar4 = 1;
        puVar4[-2] = hkaiBlockedCharacterDetector::vftable;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar4);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 0x14) =
             *(undefined4 *)((longlong)puVar4 + param_2 + 0x14);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x20);
        uVar2 = puVar1[1];
        puVar4[4] = *puVar1;
        puVar4[5] = uVar2;
        *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((longlong)puVar4 + param_2 + 0x30);
        *(undefined1 *)((longlong)puVar4 + 0x34) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0x34);
        *(undefined1 *)((longlong)puVar4 + 0x35) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0x35);
      }
      if (puVar4 + 8 != (undefined8 *)0x0) {
        puVar4[9] = 0xffffffff;
        puVar4[10] = 1;
        puVar4[8] = hkaiBlockedCharacterDetector::vftable;
        *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(param_2 + 0x58 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 0x5c) =
             *(undefined4 *)(param_2 + 0x5c + (longlong)puVar4);
        *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(param_2 + 0x60 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)puVar4 + param_2 + 100);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x70);
        uVar2 = puVar1[1];
        puVar4[0xe] = *puVar1;
        puVar4[0xf] = uVar2;
        *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)((longlong)puVar4 + param_2 + 0x80);
        *(undefined1 *)((longlong)puVar4 + 0x84) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0x84);
        *(undefined1 *)((longlong)puVar4 + 0x85) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0x85);
      }
      if (puVar4 + 0x12 != (undefined8 *)0x0) {
        puVar4[0x13] = 0xffffffff;
        puVar4[0x14] = 1;
        puVar4[0x12] = hkaiBlockedCharacterDetector::vftable;
        *(undefined4 *)(puVar4 + 0x15) = *(undefined4 *)((longlong)puVar4 + param_2 + 0xa8);
        *(undefined4 *)((longlong)puVar4 + 0xac) =
             *(undefined4 *)((longlong)puVar4 + param_2 + 0xac);
        *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)((longlong)puVar4 + param_2 + 0xb0);
        *(undefined4 *)((longlong)puVar4 + 0xb4) =
             *(undefined4 *)((longlong)puVar4 + param_2 + 0xb4);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0xc0);
        uVar2 = puVar1[1];
        puVar4[0x18] = *puVar1;
        puVar4[0x19] = uVar2;
        *(undefined4 *)(puVar4 + 0x1a) = *(undefined4 *)((longlong)puVar4 + param_2 + 0xd0);
        *(undefined1 *)((longlong)puVar4 + 0xd4) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0xd4);
        *(undefined1 *)((longlong)puVar4 + 0xd5) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0xd5);
      }
      puVar4 = puVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar5 < lVar6) {
    puVar4 = (undefined8 *)(lVar5 * 0x50 + 0x10 + param_1);
    lVar6 = lVar6 - lVar5;
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-1] = 0xffffffff;
        *puVar4 = 1;
        puVar4[-2] = hkaiBlockedCharacterDetector::vftable;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar4);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + 0x14) =
             *(undefined4 *)((longlong)puVar4 + param_2 + 0x14);
        puVar1 = (undefined8 *)((longlong)puVar4 + param_2 + 0x20);
        uVar2 = puVar1[1];
        puVar4[4] = *puVar1;
        puVar4[5] = uVar2;
        *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((longlong)puVar4 + param_2 + 0x30);
        *(undefined1 *)((longlong)puVar4 + 0x34) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0x34);
        *(undefined1 *)((longlong)puVar4 + 0x35) =
             *(undefined1 *)((longlong)puVar4 + param_2 + 0x35);
      }
      puVar4 = puVar4 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c710a0 FUN_144c710a0 body=74 status=ok
// SIG undefined FUN_144c710a0(void)

void FUN_144c710a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c710f0 FUN_144c710f0 body=74 status=ok
// SIG undefined FUN_144c710f0(void)

void FUN_144c710f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c71140 FUN_144c71140 body=271 status=ok
// SIG undefined FUN_144c71140(void)

void FUN_144c71140(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar7 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar1 != puVar7) {
        uVar3 = *(undefined8 *)puVar7;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144c9f400(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[-1] = uVar2;
        puVar1 = puVar5 + 1;
        puVar7 = (uint *)(param_2 + 4 + (longlong)puVar5);
        if (puVar7 != puVar1) {
          lVar4 = *(longlong *)puVar1;
          if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
            FUN_144b3ec00(puVar1);
          }
          FUN_140069ea2(puVar1,puVar7);
        }
      }
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c71250 FUN_144c71250 body=62 status=ok
// SIG undefined FUN_144c71250(void)

undefined8 * FUN_144c71250(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6e5ca0);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5ca0;
  return param_2;
}



// FUNCTION 144c71290 FUN_144c71290 body=88 status=ok
// SIG undefined FUN_144c71290(void)

void FUN_144c71290(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c712f0 FUN_144c712f0 body=74 status=ok
// SIG undefined FUN_144c712f0(void)

void FUN_144c712f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c71360 FUN_144c71360 body=106 status=ok
// SIG undefined FUN_144c71360(void)

undefined8 * FUN_144c71360(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c71640 FUN_144c71640 body=80 status=ok
// SIG undefined FUN_144c71640(void)

void FUN_144c71640(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c71690 FUN_144c71690 body=18 status=ok
// SIG undefined FUN_144c71690(void)

undefined8 * FUN_144c71690(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5dd0;
  return param_2;
}



// FUNCTION 144c716b0 FUN_144c716b0 body=63 status=ok
// SIG undefined FUN_144c716b0(void)

void FUN_144c716b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c716f0 FUN_144c716f0 body=106 status=ok
// SIG undefined FUN_144c716f0(void)

undefined8 * FUN_144c716f0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c71760 FUN_144c71760 body=97 status=ok
// SIG undefined FUN_144c71760(void)

void FUN_144c71760(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c717d0 FUN_144c717d0 body=18 status=ok
// SIG undefined FUN_144c717d0(void)

undefined8 * FUN_144c717d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6f10f0;
  return param_2;
}



// FUNCTION 144c71820 FUN_144c71820 body=18 status=ok
// SIG undefined FUN_144c71820(void)

undefined8 * FUN_144c71820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5ea0;
  return param_2;
}



// FUNCTION 144c71840 FUN_144c71840 body=74 status=ok
// SIG undefined FUN_144c71840(void)

void FUN_144c71840(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c718c0 FUN_144c718c0 body=80 status=ok
// SIG undefined FUN_144c718c0(void)

void FUN_144c718c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c71910 FUN_144c71910 body=63 status=ok
// SIG undefined FUN_144c71910(void)

void FUN_144c71910(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c71950 FUN_144c71950 body=269 status=ok
// SIG undefined FUN_144c71950(void)

void FUN_144c71950(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0xc);
    lVar9 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        uVar3 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar8);
        uVar6 = (ulonglong)uVar3;
        lVar4 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar8);
        if (0 < (int)uVar3) {
          plVar5 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x18);
          *(longlong **)puVar1 = plVar5;
          puVar8[-1] = uVar3;
          puVar7 = (undefined4 *)(lVar4 + 0xc);
          *puVar8 = uVar3;
          do {
            if (plVar5 != (longlong *)0x0) {
              lVar4 = *(longlong *)(puVar7 + -3);
              *plVar5 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              *(undefined4 *)(plVar5 + 1) = puVar7[-1];
              *(undefined4 *)((longlong)plVar5 + 0xc) = *puVar7;
              puVar2 = puVar7 + 1;
              puVar7 = puVar7 + 6;
              *(undefined4 *)(plVar5 + 2) = *puVar2;
            }
            uVar6 = uVar6 - 1;
            plVar5 = plVar5 + 3;
          } while (uVar6 != 0);
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c71a60 FUN_144c71a60 body=58 status=ok
// SIG undefined FUN_144c71a60(void)

void FUN_144c71a60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145016bc0(param_1);
      }
      param_1 = param_1 + 0x260;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c71aa0 FUN_144c71aa0 body=133 status=ok
// SIG undefined FUN_144c71aa0(void)

void FUN_144c71aa0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(lVar2 * 0x10 + 0xc + param_1);
    do {
      puVar1[-1] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar1 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar1 + -3),
                   (ulonglong)(*puVar1 & 0x7fffffff) * 0x18);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -4;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144c71b30 FUN_144c71b30 body=97 status=ok
// SIG undefined FUN_144c71b30(void)

void FUN_144c71b30(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c71ba0 FUN_144c71ba0 body=91 status=ok
// SIG undefined FUN_144c71ba0(void)

void FUN_144c71ba0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c71c00 FUN_144c71c00 body=87 status=ok
// SIG undefined FUN_144c71c00(void)

undefined8 FUN_144c71c00(undefined8 param_1,ulonglong param_2)

{
  FUN_144ca9a60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144c71c60 FUN_144c71c60 body=63 status=ok
// SIG undefined FUN_144c71c60(void)

void FUN_144c71c60(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x260 + param_1;
    do {
      FUN_145016c10(param_1);
      param_1 = param_1 + -0x260;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c71cd0 FUN_144c71cd0 body=74 status=ok
// SIG undefined FUN_144c71cd0(void)

void FUN_144c71cd0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c71d50 FUN_144c71d50 body=192 status=ok
// SIG undefined FUN_144c71d50(void)

void FUN_144c71d50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144ca0750(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 0x18);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c71e10 FUN_144c71e10 body=80 status=ok
// SIG undefined FUN_144c71e10(void)

void FUN_144c71e10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c71e60 FUN_144c71e60 body=71 status=ok
// SIG undefined FUN_144c71e60(void)

undefined8 * FUN_144c71e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c71eb0 FUN_144c71eb0 body=80 status=ok
// SIG undefined FUN_144c71eb0(void)

void FUN_144c71eb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c71f00 FUN_144c71f00 body=63 status=ok
// SIG undefined FUN_144c71f00(void)

void FUN_144c71f00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c71f40 FUN_144c71f40 body=63 status=ok
// SIG undefined FUN_144c71f40(void)

void FUN_144c71f40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c71f80 FUN_144c71f80 body=18 status=ok
// SIG undefined FUN_144c71f80(void)

undefined8 * FUN_144c71f80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e5f70;
  return param_2;
}



// FUNCTION 144c71fa0 FUN_144c71fa0 body=97 status=ok
// SIG undefined FUN_144c71fa0(void)

void FUN_144c71fa0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c72040 FUN_144c72040 body=97 status=ok
// SIG undefined FUN_144c72040(void)

void FUN_144c72040(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c720b0 FUN_144c720b0 body=71 status=ok
// SIG undefined FUN_144c720b0(void)

undefined8 * FUN_144c720b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c72100 FUN_144c72100 body=74 status=ok
// SIG undefined FUN_144c72100(void)

void FUN_144c72100(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c72170 FUN_144c72170 body=18 status=ok
// SIG undefined FUN_144c72170(void)

undefined8 * FUN_144c72170(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6090;
  return param_2;
}



// FUNCTION 144c722b0 FUN_144c722b0 body=80 status=ok
// SIG undefined FUN_144c722b0(void)

void FUN_144c722b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c72330 FUN_144c72330 body=94 status=ok
// SIG undefined FUN_144c72330(void)

void FUN_144c72330(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xe0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1c;
      plVar2 = plVar2 + -0x1c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c72390 FUN_144c72390 body=63 status=ok
// SIG undefined FUN_144c72390(void)

void FUN_144c72390(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c723d0 FUN_144c723d0 body=74 status=ok
// SIG undefined FUN_144c723d0(void)

void FUN_144c723d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c72420 FUN_144c72420 body=80 status=ok
// SIG undefined FUN_144c72420(void)

void FUN_144c72420(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c72470 FUN_144c72470 body=97 status=ok
// SIG undefined FUN_144c72470(void)

void FUN_144c72470(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c724e0 FUN_144c724e0 body=63 status=ok
// SIG undefined FUN_144c724e0(void)

void FUN_144c724e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c72520 FUN_144c72520 body=74 status=ok
// SIG undefined FUN_144c72520(void)

void FUN_144c72520(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c725a0 FUN_144c725a0 body=97 status=ok
// SIG undefined FUN_144c725a0(void)

void FUN_144c725a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c72620 FUN_144c72620 body=80 status=ok
// SIG undefined FUN_144c72620(void)

void FUN_144c72620(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c72670 FUN_144c72670 body=74 status=ok
// SIG undefined FUN_144c72670(void)

void FUN_144c72670(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c726c0 FUN_144c726c0 body=63 status=ok
// SIG undefined FUN_144c726c0(void)

void FUN_144c726c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c72700 FUN_144c72700 body=94 status=ok
// SIG undefined FUN_144c72700(void)

void FUN_144c72700(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x4e0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x9c;
      plVar2 = plVar2 + -0x9c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c72760 FUN_144c72760 body=97 status=ok
// SIG undefined FUN_144c72760(void)

void FUN_144c72760(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c727d0 FUN_144c727d0 body=510 status=ok
// SIG undefined FUN_144c727d0(void)

void FUN_144c727d0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined2 *)(param_1 + 0x58);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0x2c) != (undefined8 *)0x0) {
        *(undefined ***)(puVar1 + -0x2c) = hkaiNavigator::vftable;
        *(undefined8 *)(puVar1 + -0x28) = 0xffffffff;
        *(undefined8 *)(puVar1 + -0x24) = 1;
        *(undefined4 *)(puVar1 + -0x1c) = 0;
        *(undefined1 *)((longlong)puVar1 + -0x17) = 0;
        *(undefined8 *)(puVar1 + -8) = 0;
        *(undefined8 *)(puVar1 + -4) = 1;
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 0;
        *(undefined8 *)(puVar1 + 0x4c) = 0;
        *(undefined8 *)(puVar1 + 0x50) = 0;
        *(undefined4 *)(puVar1 + 0x5c) = 0;
        *(undefined4 *)(puVar1 + 0x5e) = 0;
        *(undefined4 *)(puVar1 + 0x60) = 0;
        *(undefined4 *)(puVar1 + 0x62) = 0x5f7ffff0;
        *(undefined8 *)(puVar1 + 100) = 0xffffffffffffffff;
        *(undefined2 **)(puVar1 + 0x6c) = puVar1 + 0x74;
        *(undefined4 *)(puVar1 + 0x70) = 0;
        *(undefined4 *)(puVar1 + 0x72) = 0x80000001;
        FUN_144c98970(puVar1 + 0x8c);
        *(undefined4 *)(puVar1 + 0xdc) = 0;
        *(undefined4 *)(puVar1 + 0xec) = 0;
        *(undefined4 *)(puVar1 + 0xee) = 0;
        *(undefined4 *)(puVar1 + 0xf0) = 0;
        *(undefined4 *)(puVar1 + 0xf2) = 0x5f7ffff0;
        *(undefined8 *)(puVar1 + 0xf4) = 0xffffffffffffffff;
        *(undefined2 **)(puVar1 + 0xfc) = puVar1 + 0x104;
        *(undefined4 *)(puVar1 + 0x100) = 0;
        *(undefined4 *)(puVar1 + 0x102) = 0x80000001;
        FUN_144c98970(puVar1 + 0x11c);
        *(undefined4 *)(puVar1 + 0x16c) = 0;
        *(undefined4 *)(puVar1 + 0x17c) = 0;
        *(undefined4 *)(puVar1 + 0x17e) = 0;
        *(undefined4 *)(puVar1 + 0x180) = 0;
        *(undefined4 *)(puVar1 + 0x182) = 0x5f7ffff0;
        *(undefined8 *)(puVar1 + 0x184) = 0xffffffffffffffff;
        *(undefined2 **)(puVar1 + 0x18c) = puVar1 + 0x194;
        *(undefined4 *)(puVar1 + 400) = 0;
        *(undefined4 *)(puVar1 + 0x192) = 0x80000001;
        FUN_144c98970(puVar1 + 0x1ac);
        *(undefined4 *)(puVar1 + 0x1fc) = 0;
        *(undefined4 *)(puVar1 + 0x204) = 0;
        *(undefined1 *)(puVar1 + 0x206) = 1;
        *(undefined4 *)(puVar1 + 0x208) = 0x3a83126f;
        *(undefined1 *)(puVar1 + 0x20a) = 0;
        *(undefined8 *)(puVar1 + 0x20c) = 0;
        *(undefined8 *)(puVar1 + 0x218) = 0;
        *(undefined4 *)(puVar1 + 0x21c) = 0;
        *(undefined4 *)(puVar1 + 0x21e) = 0x80000000;
        *(undefined8 *)(puVar1 + 0x220) = 0;
        *(undefined8 *)(puVar1 + 0x224) = 0;
        *(undefined8 *)(puVar1 + 0x228) = 0;
        *(undefined8 *)(puVar1 + 0x22c) = 0;
        *(undefined8 *)(puVar1 + 0x230) = 0;
        *(undefined8 *)(puVar1 + 0x234) = 0;
        *(undefined8 *)(puVar1 + 0x238) = 0;
        *(undefined1 *)(puVar1 + 0x23c) = 0xb;
      }
      puVar1 = puVar1 + 0x270;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c729d0 FUN_144c729d0 body=58 status=ok
// SIG undefined FUN_144c729d0(void)

void FUN_144c729d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c2fac0(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c72a10 FUN_144c72a10 body=106 status=ok
// SIG undefined FUN_144c72a10(void)

undefined8 * FUN_144c72a10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c72a80 FUN_144c72a80 body=78 status=ok
// SIG undefined FUN_144c72a80(void)

void FUN_144c72a80(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c2fb50(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c72b00 FUN_144c72b00 body=64 status=ok
// SIG undefined FUN_144c72b00(void)

void FUN_144c72b00(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0xa0 + param_1;
    do {
      FUN_144c2ffe0(param_1);
      param_1 = param_1 + -0xa0;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c72b40 FUN_144c72b40 body=18 status=ok
// SIG undefined FUN_144c72b40(void)

undefined8 * FUN_144c72b40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6470;
  return param_2;
}



// FUNCTION 144c72b60 FUN_144c72b60 body=80 status=ok
// SIG undefined FUN_144c72b60(void)

void FUN_144c72b60(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c72bb0 FUN_144c72bb0 body=91 status=ok
// SIG undefined FUN_144c72bb0(void)

void FUN_144c72bb0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c72c10 FUN_144c72c10 body=73 status=ok
// SIG undefined FUN_144c72c10(void)

void FUN_144c72c10(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c2fe40(param_1,param_2 + param_1);
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c72c60 FUN_144c72c60 body=161 status=ok
// SIG undefined FUN_144c72c60(void)

undefined8 * FUN_144c72c60(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x60);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c72d10 FUN_144c72d10 body=63 status=ok
// SIG undefined FUN_144c72d10(void)

void FUN_144c72d10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c72d50 FUN_144c72d50 body=106 status=ok
// SIG undefined FUN_144c72d50(void)

undefined8 * FUN_144c72d50(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c72dc0 FUN_144c72dc0 body=18 status=ok
// SIG undefined FUN_144c72dc0(void)

undefined8 * FUN_144c72dc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e64d0;
  return param_2;
}



// FUNCTION 144c72de0 FUN_144c72de0 body=558 status=ok
// SIG undefined FUN_144c72de0(void)

void FUN_144c72de0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong local_40;
  
  local_40 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar9 = (longlong *)(param_1 + 0x10);
    do {
      plVar5 = (longlong *)(param_2 + -0x10 + (longlong)plVar9);
      plVar1 = plVar9 + -2;
      if (plVar1 != plVar5) {
        lVar3 = *plVar5;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9f300(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar9[-1]) {
          lVar10 = *plVar1;
          for (lVar6 = lVar10 + (longlong)(int)plVar9[-1] * 0x28;
              lVar6 != lVar10 + (longlong)iVar2 * 0x28; lVar6 = lVar6 + -0x28) {
            FUN_144bf90d0(lVar6 + -0x18);
          }
        }
        lVar6 = *plVar1;
        iVar4 = iVar2;
        if ((int)plVar9[-1] < iVar2) {
          iVar4 = (int)plVar9[-1];
        }
        if ((lVar6 != lVar3) && (lVar10 = (longlong)iVar4, 0 < iVar4)) {
          puVar7 = (undefined1 *)(lVar6 + 0xc);
          lVar6 = lVar3 - lVar6;
          do {
            *(undefined4 *)(puVar7 + -0xc) = *(undefined4 *)(puVar7 + lVar6 + -0xc);
            *(undefined4 *)(puVar7 + -4) = *(undefined4 *)(puVar7 + lVar6 + -4);
            *puVar7 = puVar7[lVar6];
            puVar7[1] = puVar7[lVar6 + 1];
            FUN_144c904b0(puVar7 + 4,puVar7 + lVar6 + 4);
            puVar7 = puVar7 + 0x28;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        puVar12 = (undefined4 *)(lVar3 + (longlong)iVar4 * 0x28);
        if (0 < iVar2 - iVar4) {
          puVar7 = (undefined1 *)((longlong)puVar12 + 0xd);
          uVar8 = (ulonglong)(uint)(iVar2 - iVar4);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x28);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar12;
              puVar11[2] = *(undefined4 *)(puVar7 + -5);
              *(undefined1 *)(puVar11 + 3) = puVar7[-1];
              *(undefined1 *)((longlong)puVar11 + 0xd) = *puVar7;
              FUN_144c90410(puVar11 + 4,puVar7 + 3);
              puVar12 = puVar12 + 10;
              puVar7 = puVar7 + 0x28;
            }
            uVar8 = uVar8 - 1;
            puVar11 = puVar11 + 10;
          } while (uVar8 != 0);
        }
        *(int *)(plVar9 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar9) != plVar9) {
          lVar3 = *plVar9;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar9);
          }
          FUN_140069ea2(plVar9,(longlong *)(param_2 + (longlong)plVar9));
        }
      }
      plVar9 = plVar9 + 4;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}



// FUNCTION 144c73010 FUN_144c73010 body=97 status=ok
// SIG undefined FUN_144c73010(void)

void FUN_144c73010(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73080 FUN_144c73080 body=74 status=ok
// SIG undefined FUN_144c73080(void)

void FUN_144c73080(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c730d0 FUN_144c730d0 body=74 status=ok
// SIG undefined FUN_144c730d0(void)

void FUN_144c730d0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73120 FUN_144c73120 body=91 status=ok
// SIG undefined FUN_144c73120(void)

void FUN_144c73120(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c731b0 FUN_144c731b0 body=80 status=ok
// SIG undefined FUN_144c731b0(void)

void FUN_144c731b0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73200 FUN_144c73200 body=87 status=ok
// SIG undefined FUN_144c73200(void)

undefined8 FUN_144c73200(undefined8 param_1,ulonglong param_2)

{
  FUN_144fb7000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 144c73260 FUN_144c73260 body=74 status=ok
// SIG undefined FUN_144c73260(void)

void FUN_144c73260(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73360 FUN_144c73360 body=63 status=ok
// SIG undefined FUN_144c73360(void)

void FUN_144c73360(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c733a0 FUN_144c733a0 body=91 status=ok
// SIG undefined FUN_144c733a0(void)

void FUN_144c733a0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c73400 FUN_144c73400 body=192 status=ok
// SIG undefined FUN_144c73400(void)

void FUN_144c73400(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    lVar2 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar1 + -8) != (undefined8 *)0x0) {
        *(undefined ***)(puVar1 + -8) = hkaiNavMeshClearanceCacheManager::vftable;
        *(undefined8 *)(puVar1 + -6) = 0xffffffff;
        *(undefined4 **)(puVar1 + -2) = puVar1 + 2;
        *(undefined8 *)(puVar1 + -4) = 1;
        *puVar1 = 0;
        puVar1[1] = 0x80000020;
        FUN_144c96440(puVar1 + -2,(param_2 - param_1) + -8 + (longlong)puVar1);
        puVar1[0xc2] = *(undefined4 *)((param_2 - param_1) + 0x308 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 0xcc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c734c0 FUN_144c734c0 body=97 status=ok
// SIG undefined FUN_144c734c0(void)

void FUN_144c734c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73530 FUN_144c73530 body=58 status=ok
// SIG undefined FUN_144c73530(void)

void FUN_144c73530(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c36fc0(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73570 FUN_144c73570 body=503 status=ok
// SIG undefined FUN_144c73570(void)

void FUN_144c73570(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong local_40;
  
  local_40 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar12 = (longlong *)(param_1 + 0x10);
    do {
      plVar6 = (longlong *)(param_2 + -0x10 + (longlong)plVar12);
      plVar1 = plVar12 + -2;
      if (plVar1 != plVar6) {
        lVar3 = *plVar6;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar12);
        if ((int)(*(uint *)((longlong)plVar12 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9eb10(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar12[-1]) {
          lVar4 = *plVar1;
          for (lVar7 = (longlong)(int)plVar12[-1] * 0x38 + *plVar1;
              lVar7 != (longlong)iVar2 * 0x38 + lVar4; lVar7 = lVar7 + -0x38) {
            FUN_144c432b0(lVar7 + -0x30);
          }
        }
        lVar4 = *plVar1;
        iVar5 = iVar2;
        if ((int)plVar12[-1] < iVar2) {
          iVar5 = (int)plVar12[-1];
        }
        if ((lVar4 != lVar3) && (lVar7 = (longlong)iVar5, 0 < iVar5)) {
          lVar8 = lVar4 + 8;
          do {
            *(undefined4 *)(lVar8 + -8) = *(undefined4 *)((lVar3 - lVar4) + -8 + lVar8);
            FUN_144c92560(lVar8,(lVar3 - lVar4) + lVar8);
            lVar8 = lVar8 + 0x38;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        puVar9 = (undefined4 *)((longlong)iVar5 * 0x38 + lVar3);
        if (0 < iVar2 - iVar5) {
          uVar10 = (ulonglong)(uint)(iVar2 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x38);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
              FUN_144c43380(puVar11 + 2,puVar9 + 2);
              puVar9 = puVar9 + 0xe;
            }
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 0xe;
          } while (uVar10 != 0);
        }
        *(int *)(plVar12 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar12) != plVar12) {
          lVar3 = *plVar12;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar12);
          }
          FUN_140069ea2(plVar12,(longlong *)(param_2 + (longlong)plVar12));
        }
      }
      plVar12 = plVar12 + 4;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}



// FUNCTION 144c73770 FUN_144c73770 body=94 status=ok
// SIG undefined FUN_144c73770(void)

void FUN_144c73770(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x330 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x66;
      plVar2 = plVar2 + -0x66;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c737d0 FUN_144c737d0 body=78 status=ok
// SIG undefined FUN_144c737d0(void)

void FUN_144c737d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c370d0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73820 FUN_144c73820 body=87 status=ok
// SIG undefined FUN_144c73820(void)

void FUN_144c73820(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    lVar1 = param_1 + 0x18;
    do {
      FUN_144c96440(lVar1,(param_2 - param_1) + lVar1);
      *(undefined4 *)(lVar1 + 0x310) = *(undefined4 *)((param_2 - param_1) + 0x310 + lVar1);
      lVar1 = lVar1 + 0x330;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73880 FUN_144c73880 body=18 status=ok
// SIG undefined FUN_144c73880(void)

undefined8 * FUN_144c73880(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6760;
  return param_2;
}



// FUNCTION 144c738b0 FUN_144c738b0 body=94 status=ok
// SIG undefined FUN_144c738b0(void)

void FUN_144c738b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x90 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x12;
      plVar2 = plVar2 + -0x12;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c73940 FUN_144c73940 body=18 status=ok
// SIG undefined FUN_144c73940(void)

undefined8 * FUN_144c73940(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6880;
  return param_2;
}



// FUNCTION 144c73960 FUN_144c73960 body=80 status=ok
// SIG undefined FUN_144c73960(void)

void FUN_144c73960(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c739b0 FUN_144c739b0 body=63 status=ok
// SIG undefined FUN_144c739b0(void)

void FUN_144c739b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c73a80 FUN_144c73a80 body=97 status=ok
// SIG undefined FUN_144c73a80(void)

void FUN_144c73a80(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73af0 FUN_144c73af0 body=77 status=ok
// SIG undefined FUN_144c73af0(void)

void FUN_144c73af0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c73c10 FUN_144c73c10 body=80 status=ok
// SIG undefined FUN_144c73c10(void)

void FUN_144c73c10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73c60 FUN_144c73c60 body=74 status=ok
// SIG undefined FUN_144c73c60(void)

void FUN_144c73c60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73cb0 FUN_144c73cb0 body=63 status=ok
// SIG undefined FUN_144c73cb0(void)

void FUN_144c73cb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c73d40 FUN_144c73d40 body=97 status=ok
// SIG undefined FUN_144c73d40(void)

void FUN_144c73d40(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c73db0 FUN_144c73db0 body=134 status=ok
// SIG undefined FUN_144c73db0(void)

undefined8 * FUN_144c73db0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xc] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0xb] != 0) {
    FUN_144b3f230();
  }
  if (param_1[10] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 144c73e40 FUN_144c73e40 body=74 status=ok
// SIG undefined FUN_144c73e40(void)

void FUN_144c73e40(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73e90 FUN_144c73e90 body=91 status=ok
// SIG undefined FUN_144c73e90(void)

void FUN_144c73e90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c73f10 FUN_144c73f10 body=58 status=ok
// SIG undefined FUN_144c73f10(void)

void FUN_144c73f10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c501d0(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c73f50 FUN_144c73f50 body=87 status=ok
// SIG undefined FUN_144c73f50(void)

undefined8 FUN_144c73f50(undefined8 param_1,ulonglong param_2)

{
  FUN_1450051e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c73fb0 FUN_144c73fb0 body=18 status=ok
// SIG undefined FUN_144c73fb0(void)

undefined8 * FUN_144c73fb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6dc0;
  return param_2;
}



// FUNCTION 144c73fd0 FUN_144c73fd0 body=153 status=ok
// SIG undefined FUN_144c73fd0(void)

void FUN_144c73fd0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    lVar3 = (longlong)param_3;
    do {
      if (puVar2 + -4 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar2 + -4) = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        puVar2[2] = 0;
        puVar2[4] = 0x7fffffff;
        *(undefined1 *)(puVar2 + 5) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        puVar2[8] = 0;
        puVar2[9] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 10) = uVar1;
        puVar2[0xc] = 0;
        *(undefined1 *)(puVar2 + 0xe) = 0;
        puVar2[0xf] = 0x7fffffff;
        puVar2[0x10] = 0x7fffffff;
        puVar2[0x11] = 0xffffffff;
        *(undefined1 *)(puVar2 + 0x12) = 0;
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c74070 FUN_144c74070 body=110 status=ok
// SIG undefined FUN_144c74070(void)

undefined8 * FUN_144c74070(undefined8 *param_1,ulonglong param_2)

{
  FUN_144bf90d0(param_1 + 10);
  FUN_144b3e940(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 144c74110 FUN_144c74110 body=80 status=ok
// SIG undefined FUN_144c74110(void)

void FUN_144c74110(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c74170 FUN_144c74170 body=92 status=ok
// SIG undefined FUN_144c74170(void)

void FUN_144c74170(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    lVar3 = (longlong)param_3;
    do {
      if (puVar2 != (undefined4 *)&DAT_00000010) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c741d0 FUN_144c741d0 body=63 status=ok
// SIG undefined FUN_144c741d0(void)

void FUN_144c741d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c74210 FUN_144c74210 body=18 status=ok
// SIG undefined FUN_144c74210(void)

undefined8 * FUN_144c74210(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e6fa0;
  return param_2;
}



// FUNCTION 144c74230 FUN_144c74230 body=97 status=ok
// SIG undefined FUN_144c74230(void)

void FUN_144c74230(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c742a0 FUN_144c742a0 body=94 status=ok
// SIG undefined FUN_144c742a0(void)

void FUN_144c742a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xc0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x18;
      plVar2 = plVar2 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c74310 FUN_144c74310 body=74 status=ok
// SIG undefined FUN_144c74310(void)

void FUN_144c74310(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c743e0 FUN_144c743e0 body=159 status=ok
// SIG undefined FUN_144c743e0(void)

void FUN_144c743e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiNavVolumeInstanceQueryMediator::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        puVar2[2] = *(undefined8 *)((param_2 - param_1) + 0x10 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c74480 FUN_144c74480 body=80 status=ok
// SIG undefined FUN_144c74480(void)

void FUN_144c74480(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c744e0 FUN_144c744e0 body=91 status=ok
// SIG undefined FUN_144c744e0(void)

void FUN_144c744e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c74580 FUN_144c74580 body=88 status=ok
// SIG undefined FUN_144c74580(void)

void FUN_144c74580(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c745e0 FUN_144c745e0 body=63 status=ok
// SIG undefined FUN_144c745e0(void)

void FUN_144c745e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c74620 FUN_144c74620 body=843 status=ok
// SIG undefined FUN_144c74620(void)

void FUN_144c74620(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong local_68;
  
  local_68 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar18 = (longlong *)(param_1 + 0x10);
    do {
      plVar9 = (longlong *)(param_2 + -0x10 + (longlong)plVar18);
      plVar4 = plVar18 + -2;
      if (plVar4 != plVar9) {
        lVar7 = *plVar9;
        iVar5 = *(int *)(param_2 + -8 + (longlong)plVar18);
        if ((int)(*(uint *)((longlong)plVar18 + -4) & 0x7fffffff) < iVar5) {
          FUN_144c9f170(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        if (iVar5 < (int)plVar18[-1]) {
          puVar13 = (undefined4 *)(*plVar4 + (longlong)(int)plVar18[-1] * 0x18);
          puVar16 = (undefined4 *)(*plVar4 + (longlong)iVar5 * 0x18);
          if (puVar13 != puVar16) {
            puVar13 = puVar13 + 5;
            do {
              puVar13[-7] = 0;
              if ((-1 < (int)puVar13[-6]) && (*(longlong *)(puVar13 + -9) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -9),
                           (ulonglong)(puVar13[-6] & 0x7fffffff) << 3);
              }
              puVar15 = puVar13 + -0xb;
              *(undefined8 *)(puVar13 + -9) = 0;
              puVar13[-6] = 0x80000000;
              puVar13 = puVar13 + -6;
            } while (puVar15 != puVar16);
          }
        }
        lVar10 = plVar18[-2];
        iVar8 = iVar5;
        if ((int)plVar18[-1] < iVar5) {
          iVar8 = (int)plVar18[-1];
        }
        if ((lVar10 != lVar7) && (lVar19 = (longlong)iVar8, 0 < iVar8)) {
          puVar14 = (uint *)(lVar10 + 0x14);
          lVar10 = lVar7 - lVar10;
          do {
            puVar1 = puVar14 + -3;
            puVar14[-5] = *(uint *)((longlong)puVar14 + lVar10 + -0x14);
            puVar3 = (uint *)(lVar10 + -0xc + (longlong)puVar14);
            if (puVar3 != puVar1) {
              uVar11 = *(undefined8 *)puVar3;
              uVar6 = *(uint *)(lVar10 + -4 + (longlong)puVar14);
              if ((int)(*puVar14 & 0x7fffffff) < (int)uVar6) {
                FUN_144ca0e60(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar6);
              }
              FUN_144b3d470(*(undefined8 *)puVar1,uVar11,(longlong)(int)uVar6 * 8);
              puVar14[-1] = uVar6;
            }
            puVar14 = puVar14 + 6;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        puVar13 = (undefined4 *)(lVar7 + (longlong)iVar8 * 0x18);
        if (0 < iVar5 - iVar8) {
          uVar20 = (ulonglong)(uint)(iVar5 - iVar8);
          puVar16 = (undefined4 *)(plVar18[-2] + (longlong)iVar8 * 0x18);
          do {
            if (puVar16 != (undefined4 *)0x0) {
              *puVar16 = *puVar13;
              *(undefined8 *)(puVar16 + 2) = 0;
              puVar16[4] = 0;
              puVar16[5] = 0x80000000;
              uVar6 = puVar13[4];
              puVar15 = (undefined4 *)0x0;
              if (*(undefined4 **)(puVar13 + 2) != (undefined4 *)0x0) {
                puVar15 = *(undefined4 **)(puVar13 + 2);
              }
              if (0 < (int)uVar6) {
                uVar11 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                   (&PTR_vftable_14c6e47a0,(longlong)(int)uVar6 << 3);
                *(undefined8 *)(puVar16 + 2) = uVar11;
                uVar17 = (ulonglong)uVar6;
                puVar16[4] = uVar6;
                puVar16[5] = uVar6;
                puVar12 = *(undefined4 **)(puVar16 + 2);
                do {
                  if (puVar12 != (undefined4 *)0x0) {
                    *puVar12 = *puVar15;
                    puVar2 = puVar15 + 1;
                    puVar15 = puVar15 + 2;
                    puVar12[1] = *puVar2;
                  }
                  uVar17 = uVar17 - 1;
                  puVar12 = puVar12 + 2;
                } while (uVar17 != 0);
              }
              puVar13 = puVar13 + 6;
            }
            uVar20 = uVar20 - 1;
            puVar16 = puVar16 + 6;
          } while (uVar20 != 0);
        }
        *(int *)(plVar18 + -1) = iVar5;
        if ((longlong *)(param_2 + (longlong)plVar18) != plVar18) {
          lVar7 = *plVar18;
          if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar7,0);
            FUN_144b3ec00(plVar18);
          }
          FUN_140069ea2(plVar18,(longlong *)(param_2 + (longlong)plVar18));
        }
      }
      plVar18 = plVar18 + 4;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
  }
  return;
}



// FUNCTION 144c749b0 FUN_144c749b0 body=55 status=ok
// SIG undefined FUN_144c749b0(void)

void FUN_144c749b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145005280(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c74ab0 FUN_144c74ab0 body=97 status=ok
// SIG undefined FUN_144c74ab0(void)

void FUN_144c74ab0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c74b70 FUN_144c74b70 body=74 status=ok
// SIG undefined FUN_144c74b70(void)

void FUN_144c74b70(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c74bc0 FUN_144c74bc0 body=120 status=ok
// SIG undefined FUN_144c74bc0(void)

void FUN_144c74bc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    puVar2 = (undefined1 *)(param_1 + 0x10);
    do {
      if ((longlong *)(puVar2 + -0x10) != (longlong *)0x0) {
        lVar1 = *(longlong *)(puVar2 + (param_2 - param_1) + -0x10);
        *(longlong *)(puVar2 + -0x10) = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined8 *)(puVar2 + -8) = 0;
        *puVar2 = 0;
        *puVar2 = puVar2[param_2 - param_1];
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c74c40 FUN_144c74c40 body=60 status=ok
// SIG undefined FUN_144c74c40(void)

void FUN_144c74c40(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x70 + param_1;
    do {
      FUN_1450052f0(param_1);
      param_1 = param_1 + -0x70;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}


