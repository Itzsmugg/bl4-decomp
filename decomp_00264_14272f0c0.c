// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14272f0c0 FUN_14272f0c0 body=264 status=ok
// SIG undefined FUN_14272f0c0(void)

void FUN_14272f0c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = FUN_14272ed80(param_1,param_2,0xf,param_4,param_1,param_2,param_3,param_4,param_5);
  uVar5 = param_2;
  uVar2 = FUN_14272ed80();
  uVar4 = uVar5;
  uVar3 = FUN_14272ed80();
  *param_1 = uVar2;
  param_1[3] = param_2;
  uVar5 = uVar4 ^ uVar5 ^ uVar1 ^ param_2;
  param_1[2] = uVar5;
  param_1[1] = uVar3 ^ uVar4 ^ uVar2 ^ param_2 ^ uVar5;
  return;
}



// FUNCTION 14272f310 FUN_14272f310 body=255 status=ok
// SIG undefined FUN_14272f310(void)

void FUN_14272f310(undefined8 *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  unkbyte10 Var8;
  unkbyte10 Var9;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar12;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar35;
  short sVar36;
  short sVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar42;
  short sVar43;
  short sVar44;
  undefined1 auVar41 [14];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  
  puVar1 = (undefined8 *)((longlong)param_1 + param_3 * 4);
  uVar2 = *param_1;
  uVar3 = *(undefined8 *)((longlong)param_1 + param_3 * 2);
  uVar4 = *puVar1;
  uVar5 = *(undefined8 *)((longlong)puVar1 + param_3 * 2);
  sVar12 = (short)uVar2 + (short)uVar3;
  sVar40 = (short)((ulonglong)uVar3 >> 0x10);
  sVar14 = (short)((ulonglong)uVar2 >> 0x10) + sVar40;
  sVar42 = (short)((ulonglong)uVar3 >> 0x20);
  sVar15 = (short)((ulonglong)uVar2 >> 0x20) + sVar42;
  sVar44 = (short)((ulonglong)uVar3 >> 0x30);
  sVar16 = (short)((ulonglong)uVar2 >> 0x30) + sVar44;
  sVar28 = (short)uVar5 - (short)uVar4;
  sVar35 = (short)((ulonglong)uVar4 >> 0x10);
  sVar29 = (short)((ulonglong)uVar5 >> 0x10) - sVar35;
  sVar36 = (short)((ulonglong)uVar4 >> 0x20);
  sVar30 = (short)((ulonglong)uVar5 >> 0x20) - sVar36;
  sVar37 = (short)((ulonglong)uVar4 >> 0x30);
  sVar31 = (short)((ulonglong)uVar5 >> 0x30) - sVar37;
  auVar33._0_2_ = sVar12 - sVar28;
  auVar33._2_2_ = sVar14 - sVar29;
  auVar33._4_2_ = sVar15 - sVar30;
  auVar33._6_2_ = sVar16 - sVar31;
  auVar33._8_8_ = 0;
  auVar34 = psraw(auVar33,1);
  sVar38 = auVar34._0_2_ - (short)uVar3;
  sVar40 = auVar34._2_2_ - sVar40;
  sVar42 = auVar34._4_2_ - sVar42;
  sVar44 = auVar34._6_2_ - sVar44;
  sVar32 = auVar34._0_2_ - (short)uVar4;
  sVar35 = auVar34._2_2_ - sVar35;
  sVar36 = auVar34._4_2_ - sVar36;
  sVar37 = auVar34._6_2_ - sVar37;
  sVar14 = sVar14 - sVar35;
  sVar15 = sVar15 - sVar36;
  sVar16 = sVar16 - sVar37;
  sVar29 = sVar29 + sVar40;
  sVar30 = sVar30 + sVar42;
  sVar31 = sVar31 + sVar44;
  sVar12 = (sVar12 - sVar32) + sVar14;
  sVar32 = sVar32 + sVar35;
  sVar28 = sVar28 + sVar38 + sVar29;
  sVar38 = sVar38 + sVar40;
  sVar39 = sVar16 - sVar15;
  sVar43 = sVar31 - sVar30;
  auVar17._0_2_ = sVar12 - sVar39;
  auVar17._2_2_ = sVar32 - (sVar37 - sVar36);
  auVar17._4_2_ = sVar28 - sVar43;
  auVar17._6_2_ = sVar38 - (sVar44 - sVar42);
  auVar17._8_2_ = sVar16;
  auVar17._10_2_ = sVar37;
  auVar17._12_2_ = sVar31;
  auVar17._14_2_ = sVar44;
  auVar34 = psraw(auVar17,1);
  sVar14 = auVar34._0_2_ - sVar14;
  sVar35 = auVar34._2_2_ - sVar35;
  sVar29 = auVar34._4_2_ - sVar29;
  sVar40 = auVar34._6_2_ - sVar40;
  sVar15 = auVar34._0_2_ - sVar15;
  sVar16 = auVar34._2_2_ - sVar36;
  sVar30 = auVar34._4_2_ - sVar30;
  sVar31 = auVar34._6_2_ - sVar42;
  sVar38 = sVar38 - sVar31;
  sVar42 = (sVar44 - sVar42) + sVar40;
  uVar10 = CONCAT22(sVar31,sVar38);
  Var8 = CONCAT64(CONCAT42(uVar10,sVar30),CONCAT22(sVar28 - sVar30,sVar38));
  auVar6._4_8_ = (longlong)((unkuint10)Var8 >> 0x10);
  auVar6._2_2_ = sVar16;
  auVar6._0_2_ = sVar32 - sVar16;
  auVar34._0_4_ = CONCAT22(sVar15,sVar12 - sVar15);
  auVar34._4_12_ = auVar6;
  uVar11 = CONCAT22(sVar40,sVar42);
  Var9 = CONCAT64(CONCAT42(uVar11,sVar29),CONCAT22(sVar43 + sVar29,sVar42));
  auVar7._4_8_ = (longlong)((unkuint10)Var9 >> 0x10);
  auVar7._2_2_ = sVar35;
  auVar7._0_2_ = (sVar37 - sVar36) + sVar35;
  auVar19._6_2_ = sVar14;
  auVar19._4_2_ = sVar39 + sVar14;
  auVar13._0_8_ = auVar34._0_8_;
  auVar13._8_4_ = auVar6._0_4_;
  auVar13._12_4_ = auVar7._0_4_;
  auVar19._8_8_ = auVar13._8_8_;
  auVar19._0_4_ = auVar34._0_4_;
  auVar18._4_4_ = (int)((unkuint10)Var9 >> 0x10);
  auVar18._0_4_ = (int)((unkuint10)Var8 >> 0x10);
  auVar18._8_4_ = uVar10;
  auVar18._12_4_ = uVar11;
  auVar34 = psllw(auVar19,2);
  auVar19 = psllw(auVar18,2);
  auVar41 = SUB1614((undefined1  [16])0x0,2);
  auVar23._0_12_ = auVar34._0_12_;
  auVar23._12_2_ = auVar34._6_2_;
  auVar23._14_2_ = -(ushort)(auVar34._6_2_ < 0);
  auVar22._12_4_ = auVar23._12_4_;
  auVar22._0_10_ = auVar34._0_10_;
  auVar22._10_2_ = -(ushort)(auVar34._4_2_ < 0);
  auVar21._10_6_ = auVar22._10_6_;
  auVar21._0_8_ = auVar34._0_8_;
  auVar21._8_2_ = auVar34._4_2_;
  auVar20._8_8_ = auVar21._8_8_;
  auVar20._6_2_ = -(ushort)(auVar34._2_2_ < 0);
  auVar20._4_2_ = auVar34._2_2_;
  auVar20._2_2_ = -(ushort)(auVar34._0_2_ < 0);
  auVar20._0_2_ = auVar34._0_2_;
  *param_2 = auVar20;
  *(short *)param_2[1] = auVar34._8_2_;
  *(ushort *)(param_2[1] + 2) = -(ushort)(auVar34._8_2_ < 0);
  *(short *)(param_2[1] + 4) = auVar34._10_2_;
  *(ushort *)(param_2[1] + 6) = -(ushort)(auVar34._10_2_ < auVar41._8_2_);
  *(short *)(param_2[1] + 8) = auVar34._12_2_;
  *(ushort *)(param_2[1] + 10) = -(ushort)(auVar34._12_2_ < auVar41._10_2_);
  *(short *)(param_2[1] + 0xc) = auVar34._14_2_;
  *(ushort *)(param_2[1] + 0xe) = -(ushort)(auVar34._14_2_ < auVar41._12_2_);
  auVar41 = SUB1614((undefined1  [16])0x0,2);
  auVar27._0_12_ = auVar19._0_12_;
  auVar27._12_2_ = auVar19._6_2_;
  auVar27._14_2_ = -(ushort)(auVar19._6_2_ < 0);
  auVar26._12_4_ = auVar27._12_4_;
  auVar26._0_10_ = auVar19._0_10_;
  auVar26._10_2_ = -(ushort)(auVar19._4_2_ < 0);
  auVar25._10_6_ = auVar26._10_6_;
  auVar25._0_8_ = auVar19._0_8_;
  auVar25._8_2_ = auVar19._4_2_;
  auVar24._8_8_ = auVar25._8_8_;
  auVar24._6_2_ = -(ushort)(auVar19._2_2_ < 0);
  auVar24._4_2_ = auVar19._2_2_;
  auVar24._2_2_ = -(ushort)(auVar19._0_2_ < 0);
  auVar24._0_2_ = auVar19._0_2_;
  param_2[2] = auVar24;
  *(short *)param_2[3] = auVar19._8_2_;
  *(ushort *)(param_2[3] + 2) = -(ushort)(auVar19._8_2_ < 0);
  *(short *)(param_2[3] + 4) = auVar19._10_2_;
  *(ushort *)(param_2[3] + 6) = -(ushort)(auVar19._10_2_ < auVar41._8_2_);
  *(short *)(param_2[3] + 8) = auVar19._12_2_;
  *(ushort *)(param_2[3] + 10) = -(ushort)(auVar19._12_2_ < auVar41._10_2_);
  *(short *)(param_2[3] + 0xc) = auVar19._14_2_;
  *(ushort *)(param_2[3] + 0xe) = -(ushort)(auVar19._14_2_ < auVar41._12_2_);
  return;
}



// FUNCTION 14272f410 FUN_14272f410 body=458 status=ok
// SIG undefined FUN_14272f410(void)

void FUN_14272f410(short *param_1,int param_2,short *param_3,int param_4,int *param_5,int *param_6)

{
  short *psVar1;
  short *psVar2;
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ushort uVar18;
  ushort uVar19;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  undefined1 auVar20 [14];
  ushort uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar13 [12];
  
  lVar6 = (longlong)param_2;
  lVar8 = (longlong)param_4;
  iVar31 = 0;
  iVar32 = 0;
  iVar33 = 0;
  iVar34 = 0;
  iVar27 = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar30 = 0;
  lVar7 = 0x10;
  do {
    auVar17._0_2_ = *param_1 - *param_3;
    auVar17._2_2_ = param_1[1] - param_3[1];
    auVar17._4_2_ = param_1[2] - param_3[2];
    auVar17._6_2_ = param_1[3] - param_3[3];
    auVar17._8_2_ = param_1[4] - param_3[4];
    auVar17._10_2_ = param_1[5] - param_3[5];
    auVar17._12_2_ = param_1[6] - param_3[6];
    auVar17._14_2_ = param_1[7] - param_3[7];
    auVar20 = SUB1614((undefined1  [16])0x0,2);
    auVar9 = pmaddwd(auVar17,auVar17);
    auVar14._0_2_ = param_1[8] - param_3[8];
    auVar14._2_2_ = param_1[9] - param_3[9];
    auVar14._4_2_ = param_1[10] - param_3[10];
    auVar14._6_2_ = param_1[0xb] - param_3[0xb];
    auVar14._8_2_ = param_1[0xc] - param_3[0xc];
    auVar14._10_2_ = param_1[0xd] - param_3[0xd];
    auVar14._12_2_ = param_1[0xe] - param_3[0xe];
    auVar14._14_2_ = param_1[0xf] - param_3[0xf];
    psVar1 = param_1 + lVar6;
    auVar15 = pmaddwd(auVar14,auVar14);
    psVar2 = param_3 + lVar8;
    auVar10._0_2_ = *psVar1 - *psVar2;
    auVar10._2_2_ = psVar1[1] - psVar2[1];
    auVar10._4_2_ = psVar1[2] - psVar2[2];
    auVar10._6_2_ = psVar1[3] - psVar2[3];
    auVar10._8_2_ = psVar1[4] - psVar2[4];
    auVar10._10_2_ = psVar1[5] - psVar2[5];
    auVar10._12_2_ = psVar1[6] - psVar2[6];
    auVar10._14_2_ = psVar1[7] - psVar2[7];
    psVar1 = param_1 + lVar6 + 8;
    auVar11 = pmaddwd(auVar10,auVar10);
    psVar2 = param_3 + lVar8 + 8;
    auVar16._0_2_ = *psVar1 - *psVar2;
    auVar16._2_2_ = psVar1[1] - psVar2[1];
    auVar16._4_2_ = psVar1[2] - psVar2[2];
    auVar16._6_2_ = psVar1[3] - psVar2[3];
    auVar16._8_2_ = psVar1[4] - psVar2[4];
    auVar16._10_2_ = psVar1[5] - psVar2[5];
    auVar16._12_2_ = psVar1[6] - psVar2[6];
    auVar16._14_2_ = psVar1[7] - psVar2[7];
    uVar18 = auVar17._0_2_ + auVar14._0_2_ + auVar10._0_2_ + auVar16._0_2_;
    uVar19 = auVar17._2_2_ + auVar14._2_2_ + auVar10._2_2_ + auVar16._2_2_;
    uVar21 = auVar17._4_2_ + auVar14._4_2_ + auVar10._4_2_ + auVar16._4_2_;
    uVar22 = auVar17._6_2_ + auVar14._6_2_ + auVar10._6_2_ + auVar16._6_2_;
    uVar23 = auVar17._8_2_ + auVar14._8_2_ + auVar10._8_2_ + auVar16._8_2_;
    uVar24 = auVar20._8_2_ + auVar17._10_2_ + auVar14._10_2_ + auVar10._10_2_ + auVar16._10_2_;
    uVar25 = auVar20._10_2_ + auVar17._12_2_ + auVar14._12_2_ + auVar10._12_2_ + auVar16._12_2_;
    uVar26 = auVar20._12_2_ + auVar17._14_2_ + auVar14._14_2_ + auVar10._14_2_ + auVar16._14_2_;
    auVar17 = pmaddwd(auVar16,auVar16);
    iVar27 = iVar27 + auVar9._0_4_ + auVar15._0_4_ + auVar11._0_4_ + auVar17._0_4_;
    iVar28 = iVar28 + auVar9._4_4_ + auVar15._4_4_ + auVar11._4_4_ + auVar17._4_4_;
    iVar29 = iVar29 + auVar9._8_4_ + auVar15._8_4_ + auVar11._8_4_ + auVar17._8_4_;
    iVar30 = iVar30 + auVar9._12_4_ + auVar15._12_4_ + auVar11._12_4_ + auVar17._12_4_;
    iVar5 = CONCAT22(-(ushort)(0x7fff < uVar22),uVar22);
    Var4 = CONCAT64(CONCAT42(iVar5,-(ushort)(0x7fff < uVar21)),CONCAT22(uVar21,uVar22));
    auVar3._4_8_ = (longlong)((unkuint10)Var4 >> 0x10);
    auVar3._2_2_ = -(ushort)(0x7fff < uVar19);
    auVar3._0_2_ = uVar19;
    iVar12 = CONCAT22(-(ushort)(0x7fff < uVar23),uVar23);
    auVar13._0_8_ = CONCAT26(-(ushort)(0x7fff < uVar24),CONCAT24(uVar24,iVar12));
    auVar13._8_2_ = uVar25;
    auVar13._10_2_ = -(ushort)(0x7fff < uVar25);
    auVar9._12_2_ = uVar26;
    auVar9._0_12_ = auVar13;
    auVar9._14_2_ = -(ushort)(0x7fff < uVar26);
    iVar31 = iVar31 + CONCAT22(-(ushort)(0x7fff < uVar18),uVar18) + iVar12;
    iVar32 = iVar32 + auVar3._0_4_ + (int)((ulonglong)auVar13._0_8_ >> 0x20);
    iVar33 = iVar33 + (int)((unkuint10)Var4 >> 0x10) + auVar13._8_4_;
    iVar34 = iVar34 + iVar5 + auVar9._12_4_;
    param_1 = param_1 + lVar6 * 2;
    param_3 = param_3 + lVar8 * 2;
    lVar7 = lVar7 + -2;
  } while (lVar7 != 0);
  *param_5 = iVar27 + iVar29 + iVar28 + iVar30;
  *param_6 = iVar31 + iVar33 + iVar32 + iVar34;
  return;
}



// FUNCTION 14272f5da FUN_14272f5da body=430 status=ok
// SIG undefined FUN_14272f5da(void)

void FUN_14272f5da(short *param_1,int param_2,short *param_3,int param_4,int *param_5,int *param_6)

{
  short *psVar1;
  short *psVar2;
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ushort uVar18;
  ushort uVar19;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  undefined1 auVar20 [14];
  ushort uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 auVar13 [12];
  
  lVar6 = (longlong)param_2;
  lVar8 = (longlong)param_4;
  iVar31 = 0;
  iVar32 = 0;
  iVar33 = 0;
  iVar34 = 0;
  iVar27 = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar30 = 0;
  lVar7 = 8;
  do {
    auVar17._0_2_ = *param_1 - *param_3;
    auVar17._2_2_ = param_1[1] - param_3[1];
    auVar17._4_2_ = param_1[2] - param_3[2];
    auVar17._6_2_ = param_1[3] - param_3[3];
    auVar17._8_2_ = param_1[4] - param_3[4];
    auVar17._10_2_ = param_1[5] - param_3[5];
    auVar17._12_2_ = param_1[6] - param_3[6];
    auVar17._14_2_ = param_1[7] - param_3[7];
    psVar1 = param_1 + lVar6;
    auVar20 = SUB1614((undefined1  [16])0x0,2);
    auVar9 = pmaddwd(auVar17,auVar17);
    psVar2 = param_3 + lVar8;
    param_1 = param_1 + lVar6 * 2;
    param_3 = param_3 + lVar8 * 2;
    auVar14._0_2_ = *psVar1 - *psVar2;
    auVar14._2_2_ = psVar1[1] - psVar2[1];
    auVar14._4_2_ = psVar1[2] - psVar2[2];
    auVar14._6_2_ = psVar1[3] - psVar2[3];
    auVar14._8_2_ = psVar1[4] - psVar2[4];
    auVar14._10_2_ = psVar1[5] - psVar2[5];
    auVar14._12_2_ = psVar1[6] - psVar2[6];
    auVar14._14_2_ = psVar1[7] - psVar2[7];
    auVar15 = pmaddwd(auVar14,auVar14);
    auVar10._0_2_ = *param_1 - *param_3;
    auVar10._2_2_ = param_1[1] - param_3[1];
    auVar10._4_2_ = param_1[2] - param_3[2];
    auVar10._6_2_ = param_1[3] - param_3[3];
    auVar10._8_2_ = param_1[4] - param_3[4];
    auVar10._10_2_ = param_1[5] - param_3[5];
    auVar10._12_2_ = param_1[6] - param_3[6];
    auVar10._14_2_ = param_1[7] - param_3[7];
    psVar1 = param_1 + lVar6;
    auVar11 = pmaddwd(auVar10,auVar10);
    psVar2 = param_3 + lVar8;
    auVar16._0_2_ = *psVar1 - *psVar2;
    auVar16._2_2_ = psVar1[1] - psVar2[1];
    auVar16._4_2_ = psVar1[2] - psVar2[2];
    auVar16._6_2_ = psVar1[3] - psVar2[3];
    auVar16._8_2_ = psVar1[4] - psVar2[4];
    auVar16._10_2_ = psVar1[5] - psVar2[5];
    auVar16._12_2_ = psVar1[6] - psVar2[6];
    auVar16._14_2_ = psVar1[7] - psVar2[7];
    uVar18 = auVar17._0_2_ + auVar14._0_2_ + auVar10._0_2_ + auVar16._0_2_;
    uVar19 = auVar17._2_2_ + auVar14._2_2_ + auVar10._2_2_ + auVar16._2_2_;
    uVar21 = auVar17._4_2_ + auVar14._4_2_ + auVar10._4_2_ + auVar16._4_2_;
    uVar22 = auVar17._6_2_ + auVar14._6_2_ + auVar10._6_2_ + auVar16._6_2_;
    uVar23 = auVar17._8_2_ + auVar14._8_2_ + auVar10._8_2_ + auVar16._8_2_;
    uVar24 = auVar20._8_2_ + auVar17._10_2_ + auVar14._10_2_ + auVar10._10_2_ + auVar16._10_2_;
    uVar25 = auVar20._10_2_ + auVar17._12_2_ + auVar14._12_2_ + auVar10._12_2_ + auVar16._12_2_;
    uVar26 = auVar20._12_2_ + auVar17._14_2_ + auVar14._14_2_ + auVar10._14_2_ + auVar16._14_2_;
    auVar17 = pmaddwd(auVar16,auVar16);
    iVar27 = iVar27 + auVar9._0_4_ + auVar15._0_4_ + auVar11._0_4_ + auVar17._0_4_;
    iVar28 = iVar28 + auVar9._4_4_ + auVar15._4_4_ + auVar11._4_4_ + auVar17._4_4_;
    iVar29 = iVar29 + auVar9._8_4_ + auVar15._8_4_ + auVar11._8_4_ + auVar17._8_4_;
    iVar30 = iVar30 + auVar9._12_4_ + auVar15._12_4_ + auVar11._12_4_ + auVar17._12_4_;
    iVar5 = CONCAT22(-(ushort)(0x7fff < uVar22),uVar22);
    Var4 = CONCAT64(CONCAT42(iVar5,-(ushort)(0x7fff < uVar21)),CONCAT22(uVar21,uVar22));
    auVar3._4_8_ = (longlong)((unkuint10)Var4 >> 0x10);
    auVar3._2_2_ = -(ushort)(0x7fff < uVar19);
    auVar3._0_2_ = uVar19;
    iVar12 = CONCAT22(-(ushort)(0x7fff < uVar23),uVar23);
    auVar13._0_8_ = CONCAT26(-(ushort)(0x7fff < uVar24),CONCAT24(uVar24,iVar12));
    auVar13._8_2_ = uVar25;
    auVar13._10_2_ = -(ushort)(0x7fff < uVar25);
    auVar9._12_2_ = uVar26;
    auVar9._0_12_ = auVar13;
    auVar9._14_2_ = -(ushort)(0x7fff < uVar26);
    iVar31 = iVar31 + CONCAT22(-(ushort)(0x7fff < uVar18),uVar18) + iVar12;
    iVar32 = iVar32 + auVar3._0_4_ + (int)((ulonglong)auVar13._0_8_ >> 0x20);
    iVar33 = iVar33 + (int)((unkuint10)Var4 >> 0x10) + auVar13._8_4_;
    iVar34 = iVar34 + iVar5 + auVar9._12_4_;
    param_1 = param_1 + lVar6 * 2;
    param_3 = param_3 + lVar8 * 2;
    lVar7 = lVar7 + -4;
  } while (lVar7 != 0);
  *param_5 = iVar27 + iVar29 + iVar28 + iVar30;
  *param_6 = iVar31 + iVar33 + iVar32 + iVar34;
  return;
}



// FUNCTION 14272f790 FUN_14272f790 body=2586 status=ok
// SIG undefined FUN_14272f790(void)

int FUN_14272f790(short *param_1,longlong param_2,int param_3,int param_4,short *param_5,
                 longlong param_6,int param_7,int *param_8)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  unkbyte10 Var14;
  int iVar15;
  short *psVar16;
  uint uVar17;
  uint uVar18;
  undefined2 uVar19;
  ushort uVar20;
  undefined2 uVar29;
  ushort uVar30;
  undefined2 uVar31;
  ushort uVar32;
  undefined2 uVar33;
  ushort uVar34;
  short sVar35;
  ushort uVar37;
  short sVar38;
  ushort uVar40;
  short sVar41;
  ushort uVar43;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  short sVar44;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined2 uVar36;
  undefined2 uVar39;
  undefined2 uVar42;
  undefined2 uVar45;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ushort uVar46;
  short sVar47;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined2 uVar59;
  ushort uVar60;
  short sVar61;
  undefined2 uVar66;
  undefined2 uVar69;
  undefined2 uVar72;
  undefined2 uVar75;
  undefined2 uVar78;
  undefined2 uVar81;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined2 uVar84;
  undefined1 auVar64 [16];
  ushort uVar67;
  short sVar68;
  ushort uVar70;
  short sVar71;
  ushort uVar73;
  short sVar74;
  ushort uVar76;
  short sVar77;
  ushort uVar79;
  short sVar80;
  ushort uVar82;
  short sVar83;
  ushort uVar85;
  short sVar86;
  undefined1 auVar65 [16];
  short sVar87;
  undefined2 uVar88;
  short sVar89;
  ushort uVar90;
  short sVar91;
  undefined2 uVar92;
  short sVar93;
  ushort uVar94;
  short sVar95;
  undefined2 uVar96;
  short sVar97;
  ushort uVar98;
  short sVar99;
  undefined2 uVar100;
  short sVar101;
  ushort uVar102;
  undefined2 uVar103;
  short sVar104;
  ushort uVar105;
  undefined2 uVar106;
  short sVar107;
  ushort uVar108;
  undefined2 uVar109;
  short sVar110;
  ushort uVar111;
  undefined2 uVar112;
  short sVar113;
  ushort uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  
  iVar117 = 0;
  iVar118 = 0;
  iVar119 = 0;
  iVar120 = 0;
  iVar121 = 0;
  iVar122 = 0;
  iVar123 = 0;
  iVar124 = 0;
  param_7 = param_7 >> 1;
  if (param_3 == 0) {
    if (param_4 == 0) {
      do {
        psVar16 = param_1 + param_2;
        psVar1 = param_5 + param_6;
        auVar62._0_2_ = *psVar16 - *psVar1;
        auVar62._2_2_ = psVar16[1] - psVar1[1];
        auVar62._4_2_ = psVar16[2] - psVar1[2];
        auVar62._6_2_ = psVar16[3] - psVar1[3];
        auVar62._8_2_ = psVar16[4] - psVar1[4];
        auVar62._10_2_ = psVar16[5] - psVar1[5];
        auVar62._12_2_ = psVar16[6] - psVar1[6];
        auVar62._14_2_ = psVar16[7] - psVar1[7];
        auVar21._0_2_ = *param_1 - *param_5;
        auVar21._2_2_ = param_1[1] - param_5[1];
        auVar21._4_2_ = param_1[2] - param_5[2];
        auVar21._6_2_ = param_1[3] - param_5[3];
        auVar21._8_2_ = param_1[4] - param_5[4];
        auVar21._10_2_ = param_1[5] - param_5[5];
        auVar21._12_2_ = param_1[6] - param_5[6];
        auVar21._14_2_ = param_1[7] - param_5[7];
        auVar63 = pmaddwd(auVar62,auVar62);
        auVar22 = pmaddwd(auVar21,auVar21);
        sVar87 = auVar62._0_2_ + auVar21._0_2_ + auVar62._8_2_ + auVar21._8_2_;
        sVar91 = auVar62._2_2_ + auVar21._2_2_ + auVar62._10_2_ + auVar21._10_2_;
        sVar95 = auVar62._4_2_ + auVar21._4_2_ + auVar62._12_2_ + auVar21._12_2_;
        sVar99 = auVar62._6_2_ + auVar21._6_2_ + auVar62._14_2_ + auVar21._14_2_;
        iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
        Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
        auVar5._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar5._2_2_ = -(ushort)(sVar91 < 0);
        auVar5._0_2_ = sVar91;
        iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
        iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
        iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
        iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
        iVar118 = iVar118 + auVar5._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar15;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        iVar15 = param_7 + -1;
        bVar4 = 0 < param_7;
        param_7 = iVar15;
      } while (iVar15 != 0 && bVar4);
      *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    if (param_4 == 8) {
      do {
        psVar16 = param_1 + param_2;
        psVar1 = param_1 + param_2 * 2;
        psVar2 = param_5 + param_6;
        sVar87 = pavgw(*param_1,*psVar16);
        sVar91 = pavgw(param_1[1],psVar16[1]);
        sVar95 = pavgw(param_1[2],psVar16[2]);
        sVar99 = pavgw(param_1[3],psVar16[3]);
        sVar35 = pavgw(param_1[4],psVar16[4]);
        sVar38 = pavgw(param_1[5],psVar16[5]);
        sVar41 = pavgw(param_1[6],psVar16[6]);
        sVar44 = pavgw(param_1[7],psVar16[7]);
        sVar47 = pavgw(*psVar16,*psVar1);
        sVar52 = pavgw(psVar16[1],psVar1[1]);
        sVar53 = pavgw(psVar16[2],psVar1[2]);
        sVar54 = pavgw(psVar16[3],psVar1[3]);
        sVar55 = pavgw(psVar16[4],psVar1[4]);
        sVar56 = pavgw(psVar16[5],psVar1[5]);
        sVar57 = pavgw(psVar16[6],psVar1[6]);
        sVar58 = pavgw(psVar16[7],psVar1[7]);
        auVar48._0_2_ = sVar47 - *psVar2;
        auVar48._2_2_ = sVar52 - psVar2[1];
        auVar48._4_2_ = sVar53 - psVar2[2];
        auVar48._6_2_ = sVar54 - psVar2[3];
        auVar48._8_2_ = sVar55 - psVar2[4];
        auVar48._10_2_ = sVar56 - psVar2[5];
        auVar48._12_2_ = sVar57 - psVar2[6];
        auVar48._14_2_ = sVar58 - psVar2[7];
        auVar23._0_2_ = sVar87 - *param_5;
        auVar23._2_2_ = sVar91 - param_5[1];
        auVar23._4_2_ = sVar95 - param_5[2];
        auVar23._6_2_ = sVar99 - param_5[3];
        auVar23._8_2_ = sVar35 - param_5[4];
        auVar23._10_2_ = sVar38 - param_5[5];
        auVar23._12_2_ = sVar41 - param_5[6];
        auVar23._14_2_ = sVar44 - param_5[7];
        auVar63 = pmaddwd(auVar48,auVar48);
        auVar22 = pmaddwd(auVar23,auVar23);
        sVar87 = auVar48._0_2_ + auVar23._0_2_ + auVar48._8_2_ + auVar23._8_2_;
        sVar91 = auVar48._2_2_ + auVar23._2_2_ + auVar48._10_2_ + auVar23._10_2_;
        sVar95 = auVar48._4_2_ + auVar23._4_2_ + auVar48._12_2_ + auVar23._12_2_;
        sVar99 = auVar48._6_2_ + auVar23._6_2_ + auVar48._14_2_ + auVar23._14_2_;
        iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
        Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
        auVar6._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar6._2_2_ = -(ushort)(sVar91 < 0);
        auVar6._0_2_ = sVar91;
        iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
        iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
        iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
        iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
        iVar118 = iVar118 + auVar6._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar15;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        iVar15 = param_7 + -1;
        bVar4 = 0 < param_7;
        param_7 = iVar15;
      } while (iVar15 != 0 && bVar4);
      *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    uVar17 = param_4 << 5;
    do {
      psVar16 = param_1 + param_2;
      psVar1 = param_1 + param_2 * 2;
      psVar2 = param_5 + param_6;
      auVar49._0_2_ =
           ((ushort)(*psVar16 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                    *psVar1 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4) - *psVar2;
      auVar49._2_2_ =
           ((ushort)(psVar16[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                    psVar1[1] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4) - psVar2[1];
      auVar49._4_2_ =
           ((ushort)(psVar16[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                    psVar1[2] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4) - psVar2[2];
      auVar49._6_2_ =
           ((ushort)(psVar16[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                    psVar1[3] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4) - psVar2[3];
      auVar49._8_2_ =
           ((ushort)(psVar16[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                    psVar1[4] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4) - psVar2[4];
      auVar49._10_2_ =
           ((ushort)(psVar16[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                    psVar1[5] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4) - psVar2[5];
      auVar49._12_2_ =
           ((ushort)(psVar16[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                    psVar1[6] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4) - psVar2[6];
      auVar49._14_2_ =
           ((ushort)(psVar16[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                    psVar1[7] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4) - psVar2[7];
      auVar24._0_2_ =
           ((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                    *psVar16 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4) - *param_5;
      auVar24._2_2_ =
           ((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                    psVar16[1] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4) - param_5[1];
      auVar24._4_2_ =
           ((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                    psVar16[2] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4) - param_5[2];
      auVar24._6_2_ =
           ((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                    psVar16[3] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4) - param_5[3];
      auVar24._8_2_ =
           ((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                    psVar16[4] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4) - param_5[4];
      auVar24._10_2_ =
           ((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                    psVar16[5] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4) - param_5[5];
      auVar24._12_2_ =
           ((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                    psVar16[6] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4) - param_5[6];
      auVar24._14_2_ =
           ((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                    psVar16[7] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4) - param_5[7];
      auVar63 = pmaddwd(auVar49,auVar49);
      auVar22 = pmaddwd(auVar24,auVar24);
      sVar87 = auVar49._0_2_ + auVar24._0_2_ + auVar49._8_2_ + auVar24._8_2_;
      sVar91 = auVar49._2_2_ + auVar24._2_2_ + auVar49._10_2_ + auVar24._10_2_;
      sVar95 = auVar49._4_2_ + auVar24._4_2_ + auVar49._12_2_ + auVar24._12_2_;
      sVar99 = auVar49._6_2_ + auVar24._6_2_ + auVar49._14_2_ + auVar24._14_2_;
      iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
      Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
      auVar7._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar7._2_2_ = -(ushort)(sVar91 < 0);
      auVar7._0_2_ = sVar91;
      iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
      iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
      iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
      iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
      iVar118 = iVar118 + auVar7._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar15;
      param_1 = param_1 + param_2 * 2;
      param_5 = param_5 + param_6 * 2;
      iVar15 = param_7 + -1;
      bVar4 = 0 < param_7;
      param_7 = iVar15;
    } while (iVar15 != 0 && bVar4);
    *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  if (param_3 != 8) {
    if (param_4 == 0) {
      uVar17 = param_3 << 5;
      do {
        psVar16 = param_1 + param_2;
        psVar2 = param_1 + param_2 + 1;
        psVar1 = param_5 + param_6;
        auVar51._0_2_ =
             ((ushort)(*psVar16 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                      *psVar2 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4) - *psVar1;
        auVar51._2_2_ =
             ((ushort)(psVar16[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                      psVar2[1] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4) - psVar1[1];
        auVar51._4_2_ =
             ((ushort)(psVar16[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                      psVar2[2] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4) - psVar1[2];
        auVar51._6_2_ =
             ((ushort)(psVar16[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                      psVar2[3] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4) - psVar1[3];
        auVar51._8_2_ =
             ((ushort)(psVar16[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                      psVar2[4] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4) - psVar1[4];
        auVar51._10_2_ =
             ((ushort)(psVar16[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                      psVar2[5] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4) - psVar1[5];
        auVar51._12_2_ =
             ((ushort)(psVar16[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                      psVar2[6] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4) - psVar1[6];
        auVar51._14_2_ =
             ((ushort)(psVar16[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                      psVar2[7] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4) - psVar1[7];
        auVar28._0_2_ =
             ((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                      param_1[1] * *(short *)(&DAT_149df7a10 + uVar17)) >> 4) - *param_5;
        auVar28._2_2_ =
             ((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                      param_1[2] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4) - param_5[1];
        auVar28._4_2_ =
             ((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                      param_1[3] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4) - param_5[2];
        auVar28._6_2_ =
             ((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                      param_1[4] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4) - param_5[3];
        auVar28._8_2_ =
             ((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                      param_1[5] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4) - param_5[4];
        auVar28._10_2_ =
             ((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                      param_1[6] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4) - param_5[5];
        auVar28._12_2_ =
             ((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                      param_1[7] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4) - param_5[6];
        auVar28._14_2_ =
             ((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                      param_1[8] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4) - param_5[7];
        auVar63 = pmaddwd(auVar51,auVar51);
        auVar22 = pmaddwd(auVar28,auVar28);
        sVar87 = auVar51._0_2_ + auVar28._0_2_ + auVar51._8_2_ + auVar28._8_2_;
        sVar91 = auVar51._2_2_ + auVar28._2_2_ + auVar51._10_2_ + auVar28._10_2_;
        sVar95 = auVar51._4_2_ + auVar28._4_2_ + auVar51._12_2_ + auVar28._12_2_;
        sVar99 = auVar51._6_2_ + auVar28._6_2_ + auVar51._14_2_ + auVar28._14_2_;
        iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
        Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
        auVar11._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar11._2_2_ = -(ushort)(sVar91 < 0);
        auVar11._0_2_ = sVar91;
        iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
        iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
        iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
        iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
        iVar118 = iVar118 + auVar11._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar15;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        iVar15 = param_7 + -1;
        bVar4 = 0 < param_7;
        param_7 = iVar15;
      } while (iVar15 != 0 && bVar4);
      *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    if (param_4 == 8) {
      uVar17 = param_3 << 5;
      sVar87 = *(short *)(&DAT_149df7a00 + uVar17);
      sVar91 = *(short *)(&UNK_149df7a02 + uVar17);
      sVar95 = *(short *)(&UNK_149df7a04 + uVar17);
      sVar99 = *(short *)(&UNK_149df7a06 + uVar17);
      sVar35 = *(short *)(&UNK_149df7a08 + uVar17);
      sVar38 = *(short *)(&UNK_149df7a0a + uVar17);
      sVar41 = *(short *)(&UNK_149df7a0c + uVar17);
      sVar44 = *(short *)(&UNK_149df7a0e + uVar17);
      sVar47 = *(short *)(&DAT_149df7a10 + uVar17);
      sVar52 = *(short *)(&UNK_149df7a12 + uVar17);
      sVar53 = *(short *)(&UNK_149df7a14 + uVar17);
      sVar54 = *(short *)(&UNK_149df7a16 + uVar17);
      sVar55 = *(short *)(&UNK_149df7a18 + uVar17);
      sVar56 = *(short *)(&UNK_149df7a1a + uVar17);
      sVar57 = *(short *)(&UNK_149df7a1c + uVar17);
      sVar58 = *(short *)(&UNK_149df7a1e + uVar17);
      psVar16 = param_1 + param_2;
      uVar20 = (ushort)(*param_1 * sVar87 + 8 + param_1[1] * sVar47) >> 4;
      uVar30 = (ushort)(param_1[1] * sVar91 + 8 + param_1[2] * sVar52) >> 4;
      uVar32 = (ushort)(param_1[2] * sVar95 + 8 + param_1[3] * sVar53) >> 4;
      uVar34 = (ushort)(param_1[3] * sVar99 + 8 + param_1[4] * sVar54) >> 4;
      uVar37 = (ushort)(param_1[4] * sVar35 + 8 + param_1[5] * sVar55) >> 4;
      uVar40 = (ushort)(param_1[5] * sVar38 + 8 + param_1[6] * sVar56) >> 4;
      uVar43 = (ushort)(param_1[6] * sVar41 + 8 + param_1[7] * sVar57) >> 4;
      uVar46 = (ushort)(param_1[7] * sVar44 + 8 + param_1[8] * sVar58) >> 4;
      do {
        psVar1 = psVar16 + param_2;
        psVar3 = psVar16 + param_2 + 1;
        psVar2 = param_5 + param_6;
        uVar60 = (ushort)(*psVar16 * sVar87 + 8 + psVar16[1] * sVar47) >> 4;
        uVar67 = (ushort)(psVar16[1] * sVar91 + 8 + psVar16[2] * sVar52) >> 4;
        uVar70 = (ushort)(psVar16[2] * sVar95 + 8 + psVar16[3] * sVar53) >> 4;
        uVar73 = (ushort)(psVar16[3] * sVar99 + 8 + psVar16[4] * sVar54) >> 4;
        uVar76 = (ushort)(psVar16[4] * sVar35 + 8 + psVar16[5] * sVar55) >> 4;
        uVar79 = (ushort)(psVar16[5] * sVar38 + 8 + psVar16[6] * sVar56) >> 4;
        uVar82 = (ushort)(psVar16[6] * sVar41 + 8 + psVar16[7] * sVar57) >> 4;
        uVar85 = (ushort)(psVar16[7] * sVar44 + 8 + psVar16[8] * sVar58) >> 4;
        uVar90 = (ushort)(*psVar1 * sVar87 + 8 + *psVar3 * sVar47) >> 4;
        uVar94 = (ushort)(psVar1[1] * sVar91 + 8 + psVar3[1] * sVar52) >> 4;
        uVar98 = (ushort)(psVar1[2] * sVar95 + 8 + psVar3[2] * sVar53) >> 4;
        uVar102 = (ushort)(psVar1[3] * sVar99 + 8 + psVar3[3] * sVar54) >> 4;
        uVar105 = (ushort)(psVar1[4] * sVar35 + 8 + psVar3[4] * sVar55) >> 4;
        uVar108 = (ushort)(psVar1[5] * sVar38 + 8 + psVar3[5] * sVar56) >> 4;
        uVar111 = (ushort)(psVar1[6] * sVar41 + 8 + psVar3[6] * sVar57) >> 4;
        uVar114 = (ushort)(psVar1[7] * sVar44 + 8 + psVar3[7] * sVar58) >> 4;
        sVar89 = pavgw(uVar20,uVar60);
        sVar93 = pavgw(uVar30,uVar67);
        sVar97 = pavgw(uVar32,uVar70);
        sVar101 = pavgw(uVar34,uVar73);
        sVar104 = pavgw(uVar37,uVar76);
        sVar107 = pavgw(uVar40,uVar79);
        sVar110 = pavgw(uVar43,uVar82);
        sVar113 = pavgw(uVar46,uVar85);
        sVar61 = pavgw(uVar60,uVar90);
        sVar68 = pavgw(uVar67,uVar94);
        sVar71 = pavgw(uVar70,uVar98);
        sVar74 = pavgw(uVar73,uVar102);
        sVar77 = pavgw(uVar76,uVar105);
        sVar80 = pavgw(uVar79,uVar108);
        sVar83 = pavgw(uVar82,uVar111);
        sVar86 = pavgw(uVar85,uVar114);
        auVar116._0_2_ = sVar61 - *psVar2;
        auVar116._2_2_ = sVar68 - psVar2[1];
        auVar116._4_2_ = sVar71 - psVar2[2];
        auVar116._6_2_ = sVar74 - psVar2[3];
        auVar116._8_2_ = sVar77 - psVar2[4];
        auVar116._10_2_ = sVar80 - psVar2[5];
        auVar116._12_2_ = sVar83 - psVar2[6];
        auVar116._14_2_ = sVar86 - psVar2[7];
        auVar63._0_2_ = sVar89 - *param_5;
        auVar63._2_2_ = sVar93 - param_5[1];
        auVar63._4_2_ = sVar97 - param_5[2];
        auVar63._6_2_ = sVar101 - param_5[3];
        auVar63._8_2_ = sVar104 - param_5[4];
        auVar63._10_2_ = sVar107 - param_5[5];
        auVar63._12_2_ = sVar110 - param_5[6];
        auVar63._14_2_ = sVar113 - param_5[7];
        auVar65 = pmaddwd(auVar116,auVar116);
        auVar22 = pmaddwd(auVar63,auVar63);
        sVar89 = auVar116._0_2_ + auVar63._0_2_ + auVar116._8_2_ + auVar63._8_2_;
        sVar93 = auVar116._2_2_ + auVar63._2_2_ + auVar116._10_2_ + auVar63._10_2_;
        sVar97 = auVar116._4_2_ + auVar63._4_2_ + auVar116._12_2_ + auVar63._12_2_;
        sVar101 = auVar116._6_2_ + auVar63._6_2_ + auVar116._14_2_ + auVar63._14_2_;
        iVar15 = CONCAT22(-(ushort)(sVar101 < 0),sVar101);
        Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar97 < 0)),CONCAT22(sVar97,sVar101));
        auVar12._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar12._2_2_ = -(ushort)(sVar93 < 0);
        auVar12._0_2_ = sVar93;
        iVar121 = iVar121 + auVar65._0_4_ + auVar22._0_4_;
        iVar122 = iVar122 + auVar65._4_4_ + auVar22._4_4_;
        iVar123 = iVar123 + auVar65._8_4_ + auVar22._8_4_;
        iVar124 = iVar124 + auVar65._12_4_ + auVar22._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar89 < 0),sVar89);
        iVar118 = iVar118 + auVar12._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar15;
        psVar16 = psVar16 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        iVar15 = param_7 + -1;
        bVar4 = 0 < param_7;
        param_7 = iVar15;
        uVar20 = uVar90;
        uVar30 = uVar94;
        uVar32 = uVar98;
        uVar34 = uVar102;
        uVar37 = uVar105;
        uVar40 = uVar108;
        uVar43 = uVar111;
        uVar46 = uVar114;
      } while (iVar15 != 0 && bVar4);
      *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    uVar17 = param_3 << 5;
    uVar18 = param_4 << 5;
    sVar87 = *(short *)(&DAT_149df7a00 + uVar17);
    sVar91 = *(short *)(&UNK_149df7a02 + uVar17);
    sVar95 = *(short *)(&UNK_149df7a04 + uVar17);
    sVar99 = *(short *)(&UNK_149df7a06 + uVar17);
    sVar35 = *(short *)(&UNK_149df7a08 + uVar17);
    sVar38 = *(short *)(&UNK_149df7a0a + uVar17);
    sVar41 = *(short *)(&UNK_149df7a0c + uVar17);
    sVar44 = *(short *)(&UNK_149df7a0e + uVar17);
    sVar47 = *(short *)(&DAT_149df7a10 + uVar17);
    sVar52 = *(short *)(&UNK_149df7a12 + uVar17);
    sVar53 = *(short *)(&UNK_149df7a14 + uVar17);
    sVar54 = *(short *)(&UNK_149df7a16 + uVar17);
    sVar55 = *(short *)(&UNK_149df7a18 + uVar17);
    sVar56 = *(short *)(&UNK_149df7a1a + uVar17);
    sVar57 = *(short *)(&UNK_149df7a1c + uVar17);
    sVar58 = *(short *)(&UNK_149df7a1e + uVar17);
    uVar20 = (ushort)(*param_1 * sVar87 + 8 + param_1[1] * sVar47) >> 4;
    uVar30 = (ushort)(param_1[1] * sVar91 + 8 + param_1[2] * sVar52) >> 4;
    uVar32 = (ushort)(param_1[2] * sVar95 + 8 + param_1[3] * sVar53) >> 4;
    uVar34 = (ushort)(param_1[3] * sVar99 + 8 + param_1[4] * sVar54) >> 4;
    uVar37 = (ushort)(param_1[4] * sVar35 + 8 + param_1[5] * sVar55) >> 4;
    uVar40 = (ushort)(param_1[5] * sVar38 + 8 + param_1[6] * sVar56) >> 4;
    uVar43 = (ushort)(param_1[6] * sVar41 + 8 + param_1[7] * sVar57) >> 4;
    uVar46 = (ushort)(param_1[7] * sVar44 + 8 + param_1[8] * sVar58) >> 4;
    do {
      psVar16 = param_1 + param_2;
      param_1 = psVar16 + param_2;
      uVar60 = (ushort)(*psVar16 * sVar87 + 8 + psVar16[1] * sVar47) >> 4;
      uVar67 = (ushort)(psVar16[1] * sVar91 + 8 + psVar16[2] * sVar52) >> 4;
      uVar70 = (ushort)(psVar16[2] * sVar95 + 8 + psVar16[3] * sVar53) >> 4;
      uVar73 = (ushort)(psVar16[3] * sVar99 + 8 + psVar16[4] * sVar54) >> 4;
      uVar76 = (ushort)(psVar16[4] * sVar35 + 8 + psVar16[5] * sVar55) >> 4;
      uVar79 = (ushort)(psVar16[5] * sVar38 + 8 + psVar16[6] * sVar56) >> 4;
      uVar82 = (ushort)(psVar16[6] * sVar41 + 8 + psVar16[7] * sVar57) >> 4;
      uVar85 = (ushort)(psVar16[7] * sVar44 + 8 + psVar16[8] * sVar58) >> 4;
      uVar90 = (ushort)(*param_1 * sVar87 + 8 + param_1[1] * sVar47) >> 4;
      uVar94 = (ushort)(param_1[1] * sVar91 + 8 + param_1[2] * sVar52) >> 4;
      uVar98 = (ushort)(param_1[2] * sVar95 + 8 + param_1[3] * sVar53) >> 4;
      uVar102 = (ushort)(param_1[3] * sVar99 + 8 + param_1[4] * sVar54) >> 4;
      uVar105 = (ushort)(param_1[4] * sVar35 + 8 + param_1[5] * sVar55) >> 4;
      uVar108 = (ushort)(param_1[5] * sVar38 + 8 + param_1[6] * sVar56) >> 4;
      uVar111 = (ushort)(param_1[6] * sVar41 + 8 + param_1[7] * sVar57) >> 4;
      uVar114 = (ushort)(param_1[7] * sVar44 + 8 + param_1[8] * sVar58) >> 4;
      psVar16 = param_5 + param_6;
      auVar65._0_2_ =
           ((ushort)(uVar60 * *(short *)(&DAT_149df7a00 + uVar18) + 8 +
                    uVar90 * *(short *)(&DAT_149df7a10 + uVar18)) >> 4) - *psVar16;
      auVar65._2_2_ =
           ((ushort)(uVar67 * *(short *)(&UNK_149df7a02 + uVar18) + 8 +
                    uVar94 * *(short *)(&UNK_149df7a12 + uVar18)) >> 4) - psVar16[1];
      auVar65._4_2_ =
           ((ushort)(uVar70 * *(short *)(&UNK_149df7a04 + uVar18) + 8 +
                    uVar98 * *(short *)(&UNK_149df7a14 + uVar18)) >> 4) - psVar16[2];
      auVar65._6_2_ =
           ((ushort)(uVar73 * *(short *)(&UNK_149df7a06 + uVar18) + 8 +
                    uVar102 * *(short *)(&UNK_149df7a16 + uVar18)) >> 4) - psVar16[3];
      auVar65._8_2_ =
           ((ushort)(uVar76 * *(short *)(&UNK_149df7a08 + uVar18) + 8 +
                    uVar105 * *(short *)(&UNK_149df7a18 + uVar18)) >> 4) - psVar16[4];
      auVar65._10_2_ =
           ((ushort)(uVar79 * *(short *)(&UNK_149df7a0a + uVar18) + 8 +
                    uVar108 * *(short *)(&UNK_149df7a1a + uVar18)) >> 4) - psVar16[5];
      auVar65._12_2_ =
           ((ushort)(uVar82 * *(short *)(&UNK_149df7a0c + uVar18) + 8 +
                    uVar111 * *(short *)(&UNK_149df7a1c + uVar18)) >> 4) - psVar16[6];
      auVar65._14_2_ =
           ((ushort)(uVar85 * *(short *)(&UNK_149df7a0e + uVar18) + 8 +
                    uVar114 * *(short *)(&UNK_149df7a1e + uVar18)) >> 4) - psVar16[7];
      auVar22._0_2_ =
           ((ushort)(uVar20 * *(short *)(&DAT_149df7a00 + uVar18) + 8 +
                    uVar60 * *(short *)(&DAT_149df7a10 + uVar18)) >> 4) - *param_5;
      auVar22._2_2_ =
           ((ushort)(uVar30 * *(short *)(&UNK_149df7a02 + uVar18) + 8 +
                    uVar67 * *(short *)(&UNK_149df7a12 + uVar18)) >> 4) - param_5[1];
      auVar22._4_2_ =
           ((ushort)(uVar32 * *(short *)(&UNK_149df7a04 + uVar18) + 8 +
                    uVar70 * *(short *)(&UNK_149df7a14 + uVar18)) >> 4) - param_5[2];
      auVar22._6_2_ =
           ((ushort)(uVar34 * *(short *)(&UNK_149df7a06 + uVar18) + 8 +
                    uVar73 * *(short *)(&UNK_149df7a16 + uVar18)) >> 4) - param_5[3];
      auVar22._8_2_ =
           ((ushort)(uVar37 * *(short *)(&UNK_149df7a08 + uVar18) + 8 +
                    uVar76 * *(short *)(&UNK_149df7a18 + uVar18)) >> 4) - param_5[4];
      auVar22._10_2_ =
           ((ushort)(uVar40 * *(short *)(&UNK_149df7a0a + uVar18) + 8 +
                    uVar79 * *(short *)(&UNK_149df7a1a + uVar18)) >> 4) - param_5[5];
      auVar22._12_2_ =
           ((ushort)(uVar43 * *(short *)(&UNK_149df7a0c + uVar18) + 8 +
                    uVar82 * *(short *)(&UNK_149df7a1c + uVar18)) >> 4) - param_5[6];
      auVar22._14_2_ =
           ((ushort)(uVar46 * *(short *)(&UNK_149df7a0e + uVar18) + 8 +
                    uVar85 * *(short *)(&UNK_149df7a1e + uVar18)) >> 4) - param_5[7];
      auVar116 = pmaddwd(auVar65,auVar65);
      auVar63 = pmaddwd(auVar22,auVar22);
      sVar89 = auVar65._0_2_ + auVar22._0_2_ + auVar65._8_2_ + auVar22._8_2_;
      sVar93 = auVar65._2_2_ + auVar22._2_2_ + auVar65._10_2_ + auVar22._10_2_;
      sVar97 = auVar65._4_2_ + auVar22._4_2_ + auVar65._12_2_ + auVar22._12_2_;
      sVar101 = auVar65._6_2_ + auVar22._6_2_ + auVar65._14_2_ + auVar22._14_2_;
      iVar15 = CONCAT22(-(ushort)(sVar101 < 0),sVar101);
      Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar97 < 0)),CONCAT22(sVar97,sVar101));
      auVar13._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar13._2_2_ = -(ushort)(sVar93 < 0);
      auVar13._0_2_ = sVar93;
      iVar121 = iVar121 + auVar116._0_4_ + auVar63._0_4_;
      iVar122 = iVar122 + auVar116._4_4_ + auVar63._4_4_;
      iVar123 = iVar123 + auVar116._8_4_ + auVar63._8_4_;
      iVar124 = iVar124 + auVar116._12_4_ + auVar63._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar89 < 0),sVar89);
      iVar118 = iVar118 + auVar13._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar15;
      param_5 = param_5 + param_6 * 2;
      iVar15 = param_7 + -1;
      bVar4 = 0 < param_7;
      param_7 = iVar15;
      uVar20 = uVar90;
      uVar30 = uVar94;
      uVar32 = uVar98;
      uVar34 = uVar102;
      uVar37 = uVar105;
      uVar40 = uVar108;
      uVar43 = uVar111;
      uVar46 = uVar114;
    } while (iVar15 != 0 && bVar4);
    *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  if (param_4 == 0) {
    do {
      psVar16 = param_1 + param_2;
      psVar2 = param_1 + param_2 + 1;
      psVar1 = param_5 + param_6;
      sVar87 = pavgw(*param_1,param_1[1]);
      sVar91 = pavgw(param_1[1],param_1[2]);
      sVar95 = pavgw(param_1[2],param_1[3]);
      sVar99 = pavgw(param_1[3],param_1[4]);
      sVar35 = pavgw(param_1[4],param_1[5]);
      sVar38 = pavgw(param_1[5],param_1[6]);
      sVar41 = pavgw(param_1[6],param_1[7]);
      sVar44 = pavgw(param_1[7],param_1[8]);
      sVar47 = pavgw(*psVar16,*psVar2);
      sVar52 = pavgw(psVar16[1],psVar2[1]);
      sVar53 = pavgw(psVar16[2],psVar2[2]);
      sVar54 = pavgw(psVar16[3],psVar2[3]);
      sVar55 = pavgw(psVar16[4],psVar2[4]);
      sVar56 = pavgw(psVar16[5],psVar2[5]);
      sVar57 = pavgw(psVar16[6],psVar2[6]);
      sVar58 = pavgw(psVar16[7],psVar2[7]);
      auVar50._0_2_ = sVar47 - *psVar1;
      auVar50._2_2_ = sVar52 - psVar1[1];
      auVar50._4_2_ = sVar53 - psVar1[2];
      auVar50._6_2_ = sVar54 - psVar1[3];
      auVar50._8_2_ = sVar55 - psVar1[4];
      auVar50._10_2_ = sVar56 - psVar1[5];
      auVar50._12_2_ = sVar57 - psVar1[6];
      auVar50._14_2_ = sVar58 - psVar1[7];
      auVar25._0_2_ = sVar87 - *param_5;
      auVar25._2_2_ = sVar91 - param_5[1];
      auVar25._4_2_ = sVar95 - param_5[2];
      auVar25._6_2_ = sVar99 - param_5[3];
      auVar25._8_2_ = sVar35 - param_5[4];
      auVar25._10_2_ = sVar38 - param_5[5];
      auVar25._12_2_ = sVar41 - param_5[6];
      auVar25._14_2_ = sVar44 - param_5[7];
      auVar63 = pmaddwd(auVar50,auVar50);
      auVar22 = pmaddwd(auVar25,auVar25);
      sVar87 = auVar50._0_2_ + auVar25._0_2_ + auVar50._8_2_ + auVar25._8_2_;
      sVar91 = auVar50._2_2_ + auVar25._2_2_ + auVar50._10_2_ + auVar25._10_2_;
      sVar95 = auVar50._4_2_ + auVar25._4_2_ + auVar50._12_2_ + auVar25._12_2_;
      sVar99 = auVar50._6_2_ + auVar25._6_2_ + auVar50._14_2_ + auVar25._14_2_;
      iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
      Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
      auVar8._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar8._2_2_ = -(ushort)(sVar91 < 0);
      auVar8._0_2_ = sVar91;
      iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
      iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
      iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
      iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
      iVar118 = iVar118 + auVar8._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar15;
      param_1 = param_1 + param_2 * 2;
      param_5 = param_5 + param_6 * 2;
      iVar15 = param_7 + -1;
      bVar4 = 0 < param_7;
      param_7 = iVar15;
    } while (iVar15 != 0 && bVar4);
    *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  if (param_4 == 8) {
    psVar16 = param_1 + param_2;
    uVar19 = pavgw(*param_1,param_1[1]);
    uVar29 = pavgw(param_1[1],param_1[2]);
    uVar31 = pavgw(param_1[2],param_1[3]);
    uVar33 = pavgw(param_1[3],param_1[4]);
    uVar36 = pavgw(param_1[4],param_1[5]);
    uVar39 = pavgw(param_1[5],param_1[6]);
    uVar42 = pavgw(param_1[6],param_1[7]);
    uVar45 = pavgw(param_1[7],param_1[8]);
    do {
      psVar1 = psVar16 + param_2;
      psVar2 = psVar16 + param_2 + 1;
      uVar59 = pavgw(*psVar16,psVar16[1]);
      uVar66 = pavgw(psVar16[1],psVar16[2]);
      uVar69 = pavgw(psVar16[2],psVar16[3]);
      uVar72 = pavgw(psVar16[3],psVar16[4]);
      uVar75 = pavgw(psVar16[4],psVar16[5]);
      uVar78 = pavgw(psVar16[5],psVar16[6]);
      uVar81 = pavgw(psVar16[6],psVar16[7]);
      uVar84 = pavgw(psVar16[7],psVar16[8]);
      uVar88 = pavgw(*psVar1,*psVar2);
      uVar92 = pavgw(psVar1[1],psVar2[1]);
      uVar96 = pavgw(psVar1[2],psVar2[2]);
      uVar100 = pavgw(psVar1[3],psVar2[3]);
      uVar103 = pavgw(psVar1[4],psVar2[4]);
      uVar106 = pavgw(psVar1[5],psVar2[5]);
      uVar109 = pavgw(psVar1[6],psVar2[6]);
      uVar112 = pavgw(psVar1[7],psVar2[7]);
      sVar87 = pavgw(uVar19,uVar59);
      sVar91 = pavgw(uVar29,uVar66);
      sVar95 = pavgw(uVar31,uVar69);
      sVar99 = pavgw(uVar33,uVar72);
      sVar35 = pavgw(uVar36,uVar75);
      sVar38 = pavgw(uVar39,uVar78);
      sVar41 = pavgw(uVar42,uVar81);
      sVar44 = pavgw(uVar45,uVar84);
      sVar47 = pavgw(uVar59,uVar88);
      sVar52 = pavgw(uVar66,uVar92);
      sVar53 = pavgw(uVar69,uVar96);
      sVar54 = pavgw(uVar72,uVar100);
      sVar55 = pavgw(uVar75,uVar103);
      sVar56 = pavgw(uVar78,uVar106);
      sVar57 = pavgw(uVar81,uVar109);
      sVar58 = pavgw(uVar84,uVar112);
      psVar1 = param_5 + param_6;
      auVar64._0_2_ = sVar47 - *psVar1;
      auVar64._2_2_ = sVar52 - psVar1[1];
      auVar64._4_2_ = sVar53 - psVar1[2];
      auVar64._6_2_ = sVar54 - psVar1[3];
      auVar64._8_2_ = sVar55 - psVar1[4];
      auVar64._10_2_ = sVar56 - psVar1[5];
      auVar64._12_2_ = sVar57 - psVar1[6];
      auVar64._14_2_ = sVar58 - psVar1[7];
      auVar26._0_2_ = sVar87 - *param_5;
      auVar26._2_2_ = sVar91 - param_5[1];
      auVar26._4_2_ = sVar95 - param_5[2];
      auVar26._6_2_ = sVar99 - param_5[3];
      auVar26._8_2_ = sVar35 - param_5[4];
      auVar26._10_2_ = sVar38 - param_5[5];
      auVar26._12_2_ = sVar41 - param_5[6];
      auVar26._14_2_ = sVar44 - param_5[7];
      auVar63 = pmaddwd(auVar64,auVar64);
      auVar22 = pmaddwd(auVar26,auVar26);
      sVar87 = auVar64._0_2_ + auVar26._0_2_ + auVar64._8_2_ + auVar26._8_2_;
      sVar91 = auVar64._2_2_ + auVar26._2_2_ + auVar64._10_2_ + auVar26._10_2_;
      sVar95 = auVar64._4_2_ + auVar26._4_2_ + auVar64._12_2_ + auVar26._12_2_;
      sVar99 = auVar64._6_2_ + auVar26._6_2_ + auVar64._14_2_ + auVar26._14_2_;
      iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
      Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
      auVar9._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar9._2_2_ = -(ushort)(sVar91 < 0);
      auVar9._0_2_ = sVar91;
      iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
      iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
      iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
      iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
      iVar118 = iVar118 + auVar9._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar15;
      psVar16 = psVar16 + param_2 * 2;
      param_5 = param_5 + param_6 * 2;
      iVar15 = param_7 + -1;
      bVar4 = 0 < param_7;
      param_7 = iVar15;
      uVar19 = uVar88;
      uVar29 = uVar92;
      uVar31 = uVar96;
      uVar33 = uVar100;
      uVar36 = uVar103;
      uVar39 = uVar106;
      uVar42 = uVar109;
      uVar45 = uVar112;
    } while (iVar15 != 0 && bVar4);
    *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  uVar17 = param_4 << 5;
  psVar16 = param_1 + param_2;
  sVar87 = pavgw(*param_1,param_1[1]);
  sVar91 = pavgw(param_1[1],param_1[2]);
  sVar95 = pavgw(param_1[2],param_1[3]);
  sVar99 = pavgw(param_1[3],param_1[4]);
  sVar35 = pavgw(param_1[4],param_1[5]);
  sVar38 = pavgw(param_1[5],param_1[6]);
  sVar41 = pavgw(param_1[6],param_1[7]);
  sVar44 = pavgw(param_1[7],param_1[8]);
  do {
    psVar1 = psVar16 + param_2;
    psVar2 = psVar16 + param_2 + 1;
    sVar47 = pavgw(*psVar16,psVar16[1]);
    sVar52 = pavgw(psVar16[1],psVar16[2]);
    sVar53 = pavgw(psVar16[2],psVar16[3]);
    sVar54 = pavgw(psVar16[3],psVar16[4]);
    sVar55 = pavgw(psVar16[4],psVar16[5]);
    sVar56 = pavgw(psVar16[5],psVar16[6]);
    sVar57 = pavgw(psVar16[6],psVar16[7]);
    sVar58 = pavgw(psVar16[7],psVar16[8]);
    sVar89 = pavgw(*psVar1,*psVar2);
    sVar93 = pavgw(psVar1[1],psVar2[1]);
    sVar97 = pavgw(psVar1[2],psVar2[2]);
    sVar101 = pavgw(psVar1[3],psVar2[3]);
    sVar104 = pavgw(psVar1[4],psVar2[4]);
    sVar107 = pavgw(psVar1[5],psVar2[5]);
    sVar110 = pavgw(psVar1[6],psVar2[6]);
    sVar113 = pavgw(psVar1[7],psVar2[7]);
    psVar1 = param_5 + param_6;
    auVar115._0_2_ =
         ((ushort)(sVar47 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                  sVar89 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4) - *psVar1;
    auVar115._2_2_ =
         ((ushort)(sVar52 * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                  sVar93 * *(short *)(&UNK_149df7a12 + uVar17)) >> 4) - psVar1[1];
    auVar115._4_2_ =
         ((ushort)(sVar53 * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                  sVar97 * *(short *)(&UNK_149df7a14 + uVar17)) >> 4) - psVar1[2];
    auVar115._6_2_ =
         ((ushort)(sVar54 * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                  sVar101 * *(short *)(&UNK_149df7a16 + uVar17)) >> 4) - psVar1[3];
    auVar115._8_2_ =
         ((ushort)(sVar55 * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                  sVar104 * *(short *)(&UNK_149df7a18 + uVar17)) >> 4) - psVar1[4];
    auVar115._10_2_ =
         ((ushort)(sVar56 * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                  sVar107 * *(short *)(&UNK_149df7a1a + uVar17)) >> 4) - psVar1[5];
    auVar115._12_2_ =
         ((ushort)(sVar57 * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                  sVar110 * *(short *)(&UNK_149df7a1c + uVar17)) >> 4) - psVar1[6];
    auVar115._14_2_ =
         ((ushort)(sVar58 * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                  sVar113 * *(short *)(&UNK_149df7a1e + uVar17)) >> 4) - psVar1[7];
    auVar27._0_2_ =
         ((ushort)(sVar87 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                  sVar47 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4) - *param_5;
    auVar27._2_2_ =
         ((ushort)(sVar91 * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                  sVar52 * *(short *)(&UNK_149df7a12 + uVar17)) >> 4) - param_5[1];
    auVar27._4_2_ =
         ((ushort)(sVar95 * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                  sVar53 * *(short *)(&UNK_149df7a14 + uVar17)) >> 4) - param_5[2];
    auVar27._6_2_ =
         ((ushort)(sVar99 * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                  sVar54 * *(short *)(&UNK_149df7a16 + uVar17)) >> 4) - param_5[3];
    auVar27._8_2_ =
         ((ushort)(sVar35 * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                  sVar55 * *(short *)(&UNK_149df7a18 + uVar17)) >> 4) - param_5[4];
    auVar27._10_2_ =
         ((ushort)(sVar38 * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                  sVar56 * *(short *)(&UNK_149df7a1a + uVar17)) >> 4) - param_5[5];
    auVar27._12_2_ =
         ((ushort)(sVar41 * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                  sVar57 * *(short *)(&UNK_149df7a1c + uVar17)) >> 4) - param_5[6];
    auVar27._14_2_ =
         ((ushort)(sVar44 * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                  sVar58 * *(short *)(&UNK_149df7a1e + uVar17)) >> 4) - param_5[7];
    auVar63 = pmaddwd(auVar115,auVar115);
    auVar22 = pmaddwd(auVar27,auVar27);
    sVar87 = auVar115._0_2_ + auVar27._0_2_ + auVar115._8_2_ + auVar27._8_2_;
    sVar91 = auVar115._2_2_ + auVar27._2_2_ + auVar115._10_2_ + auVar27._10_2_;
    sVar95 = auVar115._4_2_ + auVar27._4_2_ + auVar115._12_2_ + auVar27._12_2_;
    sVar99 = auVar115._6_2_ + auVar27._6_2_ + auVar115._14_2_ + auVar27._14_2_;
    iVar15 = CONCAT22(-(ushort)(sVar99 < 0),sVar99);
    Var14 = CONCAT64(CONCAT42(iVar15,-(ushort)(sVar95 < 0)),CONCAT22(sVar95,sVar99));
    auVar10._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
    auVar10._2_2_ = -(ushort)(sVar91 < 0);
    auVar10._0_2_ = sVar91;
    iVar121 = iVar121 + auVar63._0_4_ + auVar22._0_4_;
    iVar122 = iVar122 + auVar63._4_4_ + auVar22._4_4_;
    iVar123 = iVar123 + auVar63._8_4_ + auVar22._8_4_;
    iVar124 = iVar124 + auVar63._12_4_ + auVar22._12_4_;
    iVar117 = iVar117 + CONCAT22(-(ushort)(sVar87 < 0),sVar87);
    iVar118 = iVar118 + auVar10._0_4_;
    iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
    iVar120 = iVar120 + iVar15;
    psVar16 = psVar16 + param_2 * 2;
    param_5 = param_5 + param_6 * 2;
    iVar15 = param_7 + -1;
    bVar4 = 0 < param_7;
    param_7 = iVar15;
    sVar87 = sVar89;
    sVar91 = sVar93;
    sVar95 = sVar97;
    sVar99 = sVar101;
    sVar35 = sVar104;
    sVar38 = sVar107;
    sVar41 = sVar110;
    sVar44 = sVar113;
  } while (iVar15 != 0 && bVar4);
  *param_8 = iVar121 + iVar123 + iVar122 + iVar124;
  return iVar117 + iVar119 + iVar118 + iVar120;
}



// FUNCTION 1427301b0 FUN_1427301b0 body=2696 status=ok
// SIG undefined FUN_1427301b0(void)

int FUN_1427301b0(short *param_1,longlong param_2,int param_3,int param_4,short *param_5,
                 longlong param_6,int param_7,int *param_8)

{
  short *psVar1;
  short *psVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  ushort uVar18;
  undefined2 uVar27;
  ushort uVar28;
  undefined2 uVar29;
  ushort uVar30;
  undefined2 uVar31;
  ushort uVar32;
  short sVar33;
  ushort uVar35;
  short sVar36;
  ushort uVar38;
  short sVar39;
  ushort uVar41;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  short sVar42;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined2 uVar34;
  undefined2 uVar37;
  undefined2 uVar40;
  undefined2 uVar43;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ushort uVar44;
  short sVar45;
  undefined2 uVar46;
  ushort uVar47;
  short sVar56;
  short sVar59;
  short sVar62;
  short sVar65;
  short sVar68;
  short sVar71;
  short sVar74;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined2 uVar57;
  undefined2 uVar60;
  undefined2 uVar63;
  undefined2 uVar66;
  undefined2 uVar69;
  undefined2 uVar72;
  undefined2 uVar75;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  ushort uVar58;
  ushort uVar61;
  ushort uVar64;
  ushort uVar67;
  ushort uVar70;
  ushort uVar73;
  ushort uVar76;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined2 uVar77;
  short sVar78;
  ushort uVar79;
  undefined2 uVar82;
  short sVar83;
  ushort uVar84;
  undefined2 uVar85;
  short sVar86;
  ushort uVar87;
  undefined2 uVar88;
  short sVar89;
  ushort uVar90;
  undefined2 uVar91;
  short sVar92;
  ushort uVar93;
  undefined2 uVar94;
  short sVar95;
  ushort uVar96;
  undefined2 uVar97;
  short sVar98;
  ushort uVar99;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined2 uVar100;
  short sVar101;
  ushort uVar102;
  short sVar103;
  undefined2 uVar104;
  short sVar105;
  ushort uVar106;
  short sVar107;
  undefined2 uVar108;
  short sVar109;
  ushort uVar110;
  short sVar111;
  undefined2 uVar112;
  short sVar113;
  ushort uVar114;
  short sVar115;
  undefined2 uVar116;
  short sVar117;
  ushort uVar118;
  undefined2 uVar119;
  short sVar120;
  ushort uVar121;
  undefined2 uVar122;
  short sVar123;
  ushort uVar124;
  undefined2 uVar125;
  short sVar126;
  ushort uVar127;
  undefined2 uVar128;
  short sVar129;
  ushort uVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  
  iVar131 = 0;
  iVar132 = 0;
  iVar133 = 0;
  iVar134 = 0;
  iVar135 = 0;
  iVar136 = 0;
  iVar137 = 0;
  iVar138 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      do {
        auVar80._0_2_ = param_1[8] - param_5[8];
        auVar80._2_2_ = param_1[9] - param_5[9];
        auVar80._4_2_ = param_1[10] - param_5[10];
        auVar80._6_2_ = param_1[0xb] - param_5[0xb];
        auVar80._8_2_ = param_1[0xc] - param_5[0xc];
        auVar80._10_2_ = param_1[0xd] - param_5[0xd];
        auVar80._12_2_ = param_1[0xe] - param_5[0xe];
        auVar80._14_2_ = param_1[0xf] - param_5[0xf];
        auVar19._0_2_ = *param_1 - *param_5;
        auVar19._2_2_ = param_1[1] - param_5[1];
        auVar19._4_2_ = param_1[2] - param_5[2];
        auVar19._6_2_ = param_1[3] - param_5[3];
        auVar19._8_2_ = param_1[4] - param_5[4];
        auVar19._10_2_ = param_1[5] - param_5[5];
        auVar19._12_2_ = param_1[6] - param_5[6];
        auVar19._14_2_ = param_1[7] - param_5[7];
        auVar81 = pmaddwd(auVar80,auVar80);
        auVar20 = pmaddwd(auVar19,auVar19);
        sVar103 = auVar80._0_2_ + auVar19._0_2_ + auVar80._8_2_ + auVar19._8_2_;
        sVar107 = auVar80._2_2_ + auVar19._2_2_ + auVar80._10_2_ + auVar19._10_2_;
        sVar111 = auVar80._4_2_ + auVar19._4_2_ + auVar80._12_2_ + auVar19._12_2_;
        sVar115 = auVar80._6_2_ + auVar19._6_2_ + auVar80._14_2_ + auVar19._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
        auVar4._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar4._2_2_ = -(ushort)(sVar107 < 0);
        auVar4._0_2_ = sVar107;
        iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
        iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
        iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
        iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
        iVar132 = iVar132 + auVar4._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        iVar14 = param_7 + -1;
        bVar3 = 0 < param_7;
        param_7 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    if (param_4 == 8) {
      do {
        psVar1 = param_1 + param_2;
        psVar2 = param_1 + param_2 + 8;
        sVar103 = pavgw(*param_1,*psVar1);
        sVar107 = pavgw(param_1[1],psVar1[1]);
        sVar111 = pavgw(param_1[2],psVar1[2]);
        sVar115 = pavgw(param_1[3],psVar1[3]);
        sVar33 = pavgw(param_1[4],psVar1[4]);
        sVar36 = pavgw(param_1[5],psVar1[5]);
        sVar39 = pavgw(param_1[6],psVar1[6]);
        sVar42 = pavgw(param_1[7],psVar1[7]);
        sVar45 = pavgw(param_1[8],*psVar2);
        sVar56 = pavgw(param_1[9],psVar2[1]);
        sVar59 = pavgw(param_1[10],psVar2[2]);
        sVar62 = pavgw(param_1[0xb],psVar2[3]);
        sVar65 = pavgw(param_1[0xc],psVar2[4]);
        sVar68 = pavgw(param_1[0xd],psVar2[5]);
        sVar71 = pavgw(param_1[0xe],psVar2[6]);
        sVar74 = pavgw(param_1[0xf],psVar2[7]);
        auVar48._0_2_ = sVar45 - param_5[8];
        auVar48._2_2_ = sVar56 - param_5[9];
        auVar48._4_2_ = sVar59 - param_5[10];
        auVar48._6_2_ = sVar62 - param_5[0xb];
        auVar48._8_2_ = sVar65 - param_5[0xc];
        auVar48._10_2_ = sVar68 - param_5[0xd];
        auVar48._12_2_ = sVar71 - param_5[0xe];
        auVar48._14_2_ = sVar74 - param_5[0xf];
        auVar21._0_2_ = sVar103 - *param_5;
        auVar21._2_2_ = sVar107 - param_5[1];
        auVar21._4_2_ = sVar111 - param_5[2];
        auVar21._6_2_ = sVar115 - param_5[3];
        auVar21._8_2_ = sVar33 - param_5[4];
        auVar21._10_2_ = sVar36 - param_5[5];
        auVar21._12_2_ = sVar39 - param_5[6];
        auVar21._14_2_ = sVar42 - param_5[7];
        auVar81 = pmaddwd(auVar48,auVar48);
        auVar20 = pmaddwd(auVar21,auVar21);
        sVar103 = auVar48._0_2_ + auVar21._0_2_ + auVar48._8_2_ + auVar21._8_2_;
        sVar107 = auVar48._2_2_ + auVar21._2_2_ + auVar48._10_2_ + auVar21._10_2_;
        sVar111 = auVar48._4_2_ + auVar21._4_2_ + auVar48._12_2_ + auVar21._12_2_;
        sVar115 = auVar48._6_2_ + auVar21._6_2_ + auVar48._14_2_ + auVar21._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
        auVar5._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar5._2_2_ = -(ushort)(sVar107 < 0);
        auVar5._0_2_ = sVar107;
        iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
        iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
        iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
        iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
        iVar132 = iVar132 + auVar5._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        iVar14 = param_7 + -1;
        bVar3 = 0 < param_7;
        param_7 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    uVar15 = param_4 << 5;
    do {
      psVar1 = param_1 + param_2;
      psVar2 = param_1 + param_2 + 8;
      auVar49._0_2_ =
           ((ushort)(param_1[8] * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                    *psVar2 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4) - param_5[8];
      auVar49._2_2_ =
           ((ushort)(param_1[9] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                    psVar2[1] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4) - param_5[9];
      auVar49._4_2_ =
           ((ushort)(param_1[10] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                    psVar2[2] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4) - param_5[10];
      auVar49._6_2_ =
           ((ushort)(param_1[0xb] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                    psVar2[3] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4) - param_5[0xb];
      auVar49._8_2_ =
           ((ushort)(param_1[0xc] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                    psVar2[4] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4) - param_5[0xc];
      auVar49._10_2_ =
           ((ushort)(param_1[0xd] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                    psVar2[5] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4) - param_5[0xd];
      auVar49._12_2_ =
           ((ushort)(param_1[0xe] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                    psVar2[6] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4) - param_5[0xe];
      auVar49._14_2_ =
           ((ushort)(param_1[0xf] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                    psVar2[7] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4) - param_5[0xf];
      auVar22._0_2_ =
           ((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                    *psVar1 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4) - *param_5;
      auVar22._2_2_ =
           ((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                    psVar1[1] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4) - param_5[1];
      auVar22._4_2_ =
           ((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                    psVar1[2] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4) - param_5[2];
      auVar22._6_2_ =
           ((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                    psVar1[3] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4) - param_5[3];
      auVar22._8_2_ =
           ((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                    psVar1[4] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4) - param_5[4];
      auVar22._10_2_ =
           ((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                    psVar1[5] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4) - param_5[5];
      auVar22._12_2_ =
           ((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                    psVar1[6] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4) - param_5[6];
      auVar22._14_2_ =
           ((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                    psVar1[7] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4) - param_5[7];
      auVar81 = pmaddwd(auVar49,auVar49);
      auVar20 = pmaddwd(auVar22,auVar22);
      sVar103 = auVar49._0_2_ + auVar22._0_2_ + auVar49._8_2_ + auVar22._8_2_;
      sVar107 = auVar49._2_2_ + auVar22._2_2_ + auVar49._10_2_ + auVar22._10_2_;
      sVar111 = auVar49._4_2_ + auVar22._4_2_ + auVar49._12_2_ + auVar22._12_2_;
      sVar115 = auVar49._6_2_ + auVar22._6_2_ + auVar49._14_2_ + auVar22._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
      auVar6._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar6._2_2_ = -(ushort)(sVar107 < 0);
      auVar6._0_2_ = sVar107;
      iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
      iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
      iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
      iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
      iVar132 = iVar132 + auVar6._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      iVar14 = param_7 + -1;
      bVar3 = 0 < param_7;
      param_7 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  if (param_3 != 8) {
    if (param_4 == 0) {
      uVar15 = param_3 << 5;
      do {
        auVar53._0_2_ =
             ((ushort)(param_1[8] * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                      param_1[9] * *(short *)(&DAT_149df7a10 + uVar15)) >> 4) - param_5[8];
        auVar53._2_2_ =
             ((ushort)(param_1[9] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                      param_1[10] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4) - param_5[9];
        auVar53._4_2_ =
             ((ushort)(param_1[10] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                      param_1[0xb] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4) - param_5[10];
        auVar53._6_2_ =
             ((ushort)(param_1[0xb] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                      param_1[0xc] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4) - param_5[0xb];
        auVar53._8_2_ =
             ((ushort)(param_1[0xc] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                      param_1[0xd] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4) - param_5[0xc];
        auVar53._10_2_ =
             ((ushort)(param_1[0xd] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                      param_1[0xe] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4) - param_5[0xd];
        auVar53._12_2_ =
             ((ushort)(param_1[0xe] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                      param_1[0xf] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4) - param_5[0xe];
        auVar53._14_2_ =
             ((ushort)(param_1[0xf] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                      param_1[0x10] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4) - param_5[0xf];
        auVar26._0_2_ =
             ((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                      param_1[1] * *(short *)(&DAT_149df7a10 + uVar15)) >> 4) - *param_5;
        auVar26._2_2_ =
             ((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                      param_1[2] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4) - param_5[1];
        auVar26._4_2_ =
             ((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                      param_1[3] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4) - param_5[2];
        auVar26._6_2_ =
             ((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                      param_1[4] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4) - param_5[3];
        auVar26._8_2_ =
             ((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                      param_1[5] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4) - param_5[4];
        auVar26._10_2_ =
             ((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                      param_1[6] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4) - param_5[5];
        auVar26._12_2_ =
             ((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                      param_1[7] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4) - param_5[6];
        auVar26._14_2_ =
             ((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                      param_1[8] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4) - param_5[7];
        auVar81 = pmaddwd(auVar53,auVar53);
        auVar20 = pmaddwd(auVar26,auVar26);
        sVar103 = auVar53._0_2_ + auVar26._0_2_ + auVar53._8_2_ + auVar26._8_2_;
        sVar107 = auVar53._2_2_ + auVar26._2_2_ + auVar53._10_2_ + auVar26._10_2_;
        sVar111 = auVar53._4_2_ + auVar26._4_2_ + auVar53._12_2_ + auVar26._12_2_;
        sVar115 = auVar53._6_2_ + auVar26._6_2_ + auVar53._14_2_ + auVar26._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
        auVar10._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar10._2_2_ = -(ushort)(sVar107 < 0);
        auVar10._0_2_ = sVar107;
        iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
        iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
        iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
        iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
        iVar132 = iVar132 + auVar10._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        iVar14 = param_7 + -1;
        bVar3 = 0 < param_7;
        param_7 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    if (param_4 == 8) {
      uVar15 = param_3 << 5;
      sVar103 = *(short *)(&DAT_149df7a00 + uVar15);
      sVar107 = *(short *)(&UNK_149df7a02 + uVar15);
      sVar111 = *(short *)(&UNK_149df7a04 + uVar15);
      sVar115 = *(short *)(&UNK_149df7a06 + uVar15);
      sVar33 = *(short *)(&UNK_149df7a08 + uVar15);
      sVar36 = *(short *)(&UNK_149df7a0a + uVar15);
      sVar39 = *(short *)(&UNK_149df7a0c + uVar15);
      sVar42 = *(short *)(&UNK_149df7a0e + uVar15);
      sVar45 = *(short *)(&DAT_149df7a10 + uVar15);
      sVar56 = *(short *)(&UNK_149df7a12 + uVar15);
      sVar59 = *(short *)(&UNK_149df7a14 + uVar15);
      sVar62 = *(short *)(&UNK_149df7a16 + uVar15);
      sVar65 = *(short *)(&UNK_149df7a18 + uVar15);
      sVar68 = *(short *)(&UNK_149df7a1a + uVar15);
      sVar71 = *(short *)(&UNK_149df7a1c + uVar15);
      sVar74 = *(short *)(&UNK_149df7a1e + uVar15);
      uVar18 = (ushort)(*param_1 * sVar103 + 8 + param_1[1] * sVar45) >> 4;
      uVar28 = (ushort)(param_1[1] * sVar107 + 8 + param_1[2] * sVar56) >> 4;
      uVar30 = (ushort)(param_1[2] * sVar111 + 8 + param_1[3] * sVar59) >> 4;
      uVar32 = (ushort)(param_1[3] * sVar115 + 8 + param_1[4] * sVar62) >> 4;
      uVar35 = (ushort)(param_1[4] * sVar33 + 8 + param_1[5] * sVar65) >> 4;
      uVar38 = (ushort)(param_1[5] * sVar36 + 8 + param_1[6] * sVar68) >> 4;
      uVar41 = (ushort)(param_1[6] * sVar39 + 8 + param_1[7] * sVar71) >> 4;
      uVar44 = (ushort)(param_1[7] * sVar42 + 8 + param_1[8] * sVar74) >> 4;
      uVar47 = (ushort)(param_1[8] * sVar103 + 8 + param_1[9] * sVar45) >> 4;
      uVar58 = (ushort)(param_1[9] * sVar107 + 8 + param_1[10] * sVar56) >> 4;
      uVar61 = (ushort)(param_1[10] * sVar111 + 8 + param_1[0xb] * sVar59) >> 4;
      uVar64 = (ushort)(param_1[0xb] * sVar115 + 8 + param_1[0xc] * sVar62) >> 4;
      uVar67 = (ushort)(param_1[0xc] * sVar33 + 8 + param_1[0xd] * sVar65) >> 4;
      uVar70 = (ushort)(param_1[0xd] * sVar36 + 8 + param_1[0xe] * sVar68) >> 4;
      uVar73 = (ushort)(param_1[0xe] * sVar39 + 8 + param_1[0xf] * sVar71) >> 4;
      uVar76 = (ushort)(param_1[0xf] * sVar42 + 8 + param_1[0x10] * sVar74) >> 4;
      do {
        param_1 = param_1 + param_2;
        uVar79 = (ushort)(*param_1 * sVar103 + 8 + param_1[1] * sVar45) >> 4;
        uVar84 = (ushort)(param_1[1] * sVar107 + 8 + param_1[2] * sVar56) >> 4;
        uVar87 = (ushort)(param_1[2] * sVar111 + 8 + param_1[3] * sVar59) >> 4;
        uVar90 = (ushort)(param_1[3] * sVar115 + 8 + param_1[4] * sVar62) >> 4;
        uVar93 = (ushort)(param_1[4] * sVar33 + 8 + param_1[5] * sVar65) >> 4;
        uVar96 = (ushort)(param_1[5] * sVar36 + 8 + param_1[6] * sVar68) >> 4;
        uVar99 = (ushort)(param_1[6] * sVar39 + 8 + param_1[7] * sVar71) >> 4;
        uVar102 = (ushort)(param_1[7] * sVar42 + 8 + param_1[8] * sVar74) >> 4;
        uVar106 = (ushort)(param_1[8] * sVar103 + 8 + param_1[9] * sVar45) >> 4;
        uVar110 = (ushort)(param_1[9] * sVar107 + 8 + param_1[10] * sVar56) >> 4;
        uVar114 = (ushort)(param_1[10] * sVar111 + 8 + param_1[0xb] * sVar59) >> 4;
        uVar118 = (ushort)(param_1[0xb] * sVar115 + 8 + param_1[0xc] * sVar62) >> 4;
        uVar121 = (ushort)(param_1[0xc] * sVar33 + 8 + param_1[0xd] * sVar65) >> 4;
        uVar124 = (ushort)(param_1[0xd] * sVar36 + 8 + param_1[0xe] * sVar68) >> 4;
        uVar127 = (ushort)(param_1[0xe] * sVar39 + 8 + param_1[0xf] * sVar71) >> 4;
        uVar130 = (ushort)(param_1[0xf] * sVar42 + 8 + param_1[0x10] * sVar74) >> 4;
        sVar78 = pavgw(uVar18,uVar79);
        sVar83 = pavgw(uVar28,uVar84);
        sVar86 = pavgw(uVar30,uVar87);
        sVar89 = pavgw(uVar32,uVar90);
        sVar92 = pavgw(uVar35,uVar93);
        sVar95 = pavgw(uVar38,uVar96);
        sVar98 = pavgw(uVar41,uVar99);
        sVar101 = pavgw(uVar44,uVar102);
        sVar105 = pavgw(uVar47,uVar106);
        sVar109 = pavgw(uVar58,uVar110);
        sVar113 = pavgw(uVar61,uVar114);
        sVar117 = pavgw(uVar64,uVar118);
        sVar120 = pavgw(uVar67,uVar121);
        sVar123 = pavgw(uVar70,uVar124);
        sVar126 = pavgw(uVar73,uVar127);
        sVar129 = pavgw(uVar76,uVar130);
        auVar55._0_2_ = sVar105 - param_5[8];
        auVar55._2_2_ = sVar109 - param_5[9];
        auVar55._4_2_ = sVar113 - param_5[10];
        auVar55._6_2_ = sVar117 - param_5[0xb];
        auVar55._8_2_ = sVar120 - param_5[0xc];
        auVar55._10_2_ = sVar123 - param_5[0xd];
        auVar55._12_2_ = sVar126 - param_5[0xe];
        auVar55._14_2_ = sVar129 - param_5[0xf];
        auVar81._0_2_ = sVar78 - *param_5;
        auVar81._2_2_ = sVar83 - param_5[1];
        auVar81._4_2_ = sVar86 - param_5[2];
        auVar81._6_2_ = sVar89 - param_5[3];
        auVar81._8_2_ = sVar92 - param_5[4];
        auVar81._10_2_ = sVar95 - param_5[5];
        auVar81._12_2_ = sVar98 - param_5[6];
        auVar81._14_2_ = sVar101 - param_5[7];
        auVar54 = pmaddwd(auVar55,auVar55);
        auVar20 = pmaddwd(auVar81,auVar81);
        sVar78 = auVar55._0_2_ + auVar81._0_2_ + auVar55._8_2_ + auVar81._8_2_;
        sVar83 = auVar55._2_2_ + auVar81._2_2_ + auVar55._10_2_ + auVar81._10_2_;
        sVar86 = auVar55._4_2_ + auVar81._4_2_ + auVar55._12_2_ + auVar81._12_2_;
        sVar89 = auVar55._6_2_ + auVar81._6_2_ + auVar55._14_2_ + auVar81._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar89 < 0),sVar89);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar86 < 0)),CONCAT22(sVar86,sVar89));
        auVar11._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar11._2_2_ = -(ushort)(sVar83 < 0);
        auVar11._0_2_ = sVar83;
        iVar135 = iVar135 + auVar54._0_4_ + auVar20._0_4_;
        iVar136 = iVar136 + auVar54._4_4_ + auVar20._4_4_;
        iVar137 = iVar137 + auVar54._8_4_ + auVar20._8_4_;
        iVar138 = iVar138 + auVar54._12_4_ + auVar20._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar78 < 0),sVar78);
        iVar132 = iVar132 + auVar11._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_5 = param_5 + param_6;
        iVar14 = param_7 + -1;
        bVar3 = 0 < param_7;
        uVar18 = uVar79;
        uVar28 = uVar84;
        uVar30 = uVar87;
        uVar32 = uVar90;
        uVar35 = uVar93;
        uVar38 = uVar96;
        uVar41 = uVar99;
        uVar44 = uVar102;
        uVar47 = uVar106;
        uVar58 = uVar110;
        uVar61 = uVar114;
        uVar64 = uVar118;
        uVar67 = uVar121;
        uVar70 = uVar124;
        uVar73 = uVar127;
        uVar76 = uVar130;
        param_7 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    uVar15 = param_3 << 5;
    uVar16 = param_4 << 5;
    sVar103 = *(short *)(&DAT_149df7a00 + uVar15);
    sVar107 = *(short *)(&UNK_149df7a02 + uVar15);
    sVar111 = *(short *)(&UNK_149df7a04 + uVar15);
    sVar115 = *(short *)(&UNK_149df7a06 + uVar15);
    sVar33 = *(short *)(&UNK_149df7a08 + uVar15);
    sVar36 = *(short *)(&UNK_149df7a0a + uVar15);
    sVar39 = *(short *)(&UNK_149df7a0c + uVar15);
    sVar42 = *(short *)(&UNK_149df7a0e + uVar15);
    sVar45 = *(short *)(&DAT_149df7a10 + uVar15);
    sVar56 = *(short *)(&UNK_149df7a12 + uVar15);
    sVar59 = *(short *)(&UNK_149df7a14 + uVar15);
    sVar62 = *(short *)(&UNK_149df7a16 + uVar15);
    sVar65 = *(short *)(&UNK_149df7a18 + uVar15);
    sVar68 = *(short *)(&UNK_149df7a1a + uVar15);
    sVar71 = *(short *)(&UNK_149df7a1c + uVar15);
    sVar74 = *(short *)(&UNK_149df7a1e + uVar15);
    uVar18 = (ushort)(*param_1 * sVar103 + 8 + param_1[1] * sVar45) >> 4;
    uVar28 = (ushort)(param_1[1] * sVar107 + 8 + param_1[2] * sVar56) >> 4;
    uVar30 = (ushort)(param_1[2] * sVar111 + 8 + param_1[3] * sVar59) >> 4;
    uVar32 = (ushort)(param_1[3] * sVar115 + 8 + param_1[4] * sVar62) >> 4;
    uVar35 = (ushort)(param_1[4] * sVar33 + 8 + param_1[5] * sVar65) >> 4;
    uVar38 = (ushort)(param_1[5] * sVar36 + 8 + param_1[6] * sVar68) >> 4;
    uVar41 = (ushort)(param_1[6] * sVar39 + 8 + param_1[7] * sVar71) >> 4;
    uVar44 = (ushort)(param_1[7] * sVar42 + 8 + param_1[8] * sVar74) >> 4;
    uVar47 = (ushort)(param_1[8] * sVar103 + 8 + param_1[9] * sVar45) >> 4;
    uVar58 = (ushort)(param_1[9] * sVar107 + 8 + param_1[10] * sVar56) >> 4;
    uVar61 = (ushort)(param_1[10] * sVar111 + 8 + param_1[0xb] * sVar59) >> 4;
    uVar64 = (ushort)(param_1[0xb] * sVar115 + 8 + param_1[0xc] * sVar62) >> 4;
    uVar67 = (ushort)(param_1[0xc] * sVar33 + 8 + param_1[0xd] * sVar65) >> 4;
    uVar70 = (ushort)(param_1[0xd] * sVar36 + 8 + param_1[0xe] * sVar68) >> 4;
    uVar73 = (ushort)(param_1[0xe] * sVar39 + 8 + param_1[0xf] * sVar71) >> 4;
    uVar76 = (ushort)(param_1[0xf] * sVar42 + 8 + param_1[0x10] * sVar74) >> 4;
    do {
      param_1 = param_1 + param_2;
      uVar79 = (ushort)(*param_1 * sVar103 + 8 + param_1[1] * sVar45) >> 4;
      uVar84 = (ushort)(param_1[1] * sVar107 + 8 + param_1[2] * sVar56) >> 4;
      uVar87 = (ushort)(param_1[2] * sVar111 + 8 + param_1[3] * sVar59) >> 4;
      uVar90 = (ushort)(param_1[3] * sVar115 + 8 + param_1[4] * sVar62) >> 4;
      uVar93 = (ushort)(param_1[4] * sVar33 + 8 + param_1[5] * sVar65) >> 4;
      uVar96 = (ushort)(param_1[5] * sVar36 + 8 + param_1[6] * sVar68) >> 4;
      uVar99 = (ushort)(param_1[6] * sVar39 + 8 + param_1[7] * sVar71) >> 4;
      uVar102 = (ushort)(param_1[7] * sVar42 + 8 + param_1[8] * sVar74) >> 4;
      uVar106 = (ushort)(param_1[8] * sVar103 + 8 + param_1[9] * sVar45) >> 4;
      uVar110 = (ushort)(param_1[9] * sVar107 + 8 + param_1[10] * sVar56) >> 4;
      uVar114 = (ushort)(param_1[10] * sVar111 + 8 + param_1[0xb] * sVar59) >> 4;
      uVar118 = (ushort)(param_1[0xb] * sVar115 + 8 + param_1[0xc] * sVar62) >> 4;
      uVar121 = (ushort)(param_1[0xc] * sVar33 + 8 + param_1[0xd] * sVar65) >> 4;
      uVar124 = (ushort)(param_1[0xd] * sVar36 + 8 + param_1[0xe] * sVar68) >> 4;
      uVar127 = (ushort)(param_1[0xe] * sVar39 + 8 + param_1[0xf] * sVar71) >> 4;
      uVar130 = (ushort)(param_1[0xf] * sVar42 + 8 + param_1[0x10] * sVar74) >> 4;
      auVar54._0_2_ =
           ((ushort)(uVar47 * *(short *)(&DAT_149df7a00 + uVar16) + 8 +
                    uVar106 * *(short *)(&DAT_149df7a10 + uVar16)) >> 4) - param_5[8];
      auVar54._2_2_ =
           ((ushort)(uVar58 * *(short *)(&UNK_149df7a02 + uVar16) + 8 +
                    uVar110 * *(short *)(&UNK_149df7a12 + uVar16)) >> 4) - param_5[9];
      auVar54._4_2_ =
           ((ushort)(uVar61 * *(short *)(&UNK_149df7a04 + uVar16) + 8 +
                    uVar114 * *(short *)(&UNK_149df7a14 + uVar16)) >> 4) - param_5[10];
      auVar54._6_2_ =
           ((ushort)(uVar64 * *(short *)(&UNK_149df7a06 + uVar16) + 8 +
                    uVar118 * *(short *)(&UNK_149df7a16 + uVar16)) >> 4) - param_5[0xb];
      auVar54._8_2_ =
           ((ushort)(uVar67 * *(short *)(&UNK_149df7a08 + uVar16) + 8 +
                    uVar121 * *(short *)(&UNK_149df7a18 + uVar16)) >> 4) - param_5[0xc];
      auVar54._10_2_ =
           ((ushort)(uVar70 * *(short *)(&UNK_149df7a0a + uVar16) + 8 +
                    uVar124 * *(short *)(&UNK_149df7a1a + uVar16)) >> 4) - param_5[0xd];
      auVar54._12_2_ =
           ((ushort)(uVar73 * *(short *)(&UNK_149df7a0c + uVar16) + 8 +
                    uVar127 * *(short *)(&UNK_149df7a1c + uVar16)) >> 4) - param_5[0xe];
      auVar54._14_2_ =
           ((ushort)(uVar76 * *(short *)(&UNK_149df7a0e + uVar16) + 8 +
                    uVar130 * *(short *)(&UNK_149df7a1e + uVar16)) >> 4) - param_5[0xf];
      auVar20._0_2_ =
           ((ushort)(uVar18 * *(short *)(&DAT_149df7a00 + uVar16) + 8 +
                    uVar79 * *(short *)(&DAT_149df7a10 + uVar16)) >> 4) - *param_5;
      auVar20._2_2_ =
           ((ushort)(uVar28 * *(short *)(&UNK_149df7a02 + uVar16) + 8 +
                    uVar84 * *(short *)(&UNK_149df7a12 + uVar16)) >> 4) - param_5[1];
      auVar20._4_2_ =
           ((ushort)(uVar30 * *(short *)(&UNK_149df7a04 + uVar16) + 8 +
                    uVar87 * *(short *)(&UNK_149df7a14 + uVar16)) >> 4) - param_5[2];
      auVar20._6_2_ =
           ((ushort)(uVar32 * *(short *)(&UNK_149df7a06 + uVar16) + 8 +
                    uVar90 * *(short *)(&UNK_149df7a16 + uVar16)) >> 4) - param_5[3];
      auVar20._8_2_ =
           ((ushort)(uVar35 * *(short *)(&UNK_149df7a08 + uVar16) + 8 +
                    uVar93 * *(short *)(&UNK_149df7a18 + uVar16)) >> 4) - param_5[4];
      auVar20._10_2_ =
           ((ushort)(uVar38 * *(short *)(&UNK_149df7a0a + uVar16) + 8 +
                    uVar96 * *(short *)(&UNK_149df7a1a + uVar16)) >> 4) - param_5[5];
      auVar20._12_2_ =
           ((ushort)(uVar41 * *(short *)(&UNK_149df7a0c + uVar16) + 8 +
                    uVar99 * *(short *)(&UNK_149df7a1c + uVar16)) >> 4) - param_5[6];
      auVar20._14_2_ =
           ((ushort)(uVar44 * *(short *)(&UNK_149df7a0e + uVar16) + 8 +
                    uVar102 * *(short *)(&UNK_149df7a1e + uVar16)) >> 4) - param_5[7];
      auVar55 = pmaddwd(auVar54,auVar54);
      auVar81 = pmaddwd(auVar20,auVar20);
      sVar78 = auVar54._0_2_ + auVar20._0_2_ + auVar54._8_2_ + auVar20._8_2_;
      sVar83 = auVar54._2_2_ + auVar20._2_2_ + auVar54._10_2_ + auVar20._10_2_;
      sVar86 = auVar54._4_2_ + auVar20._4_2_ + auVar54._12_2_ + auVar20._12_2_;
      sVar89 = auVar54._6_2_ + auVar20._6_2_ + auVar54._14_2_ + auVar20._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar89 < 0),sVar89);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar86 < 0)),CONCAT22(sVar86,sVar89));
      auVar12._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar12._2_2_ = -(ushort)(sVar83 < 0);
      auVar12._0_2_ = sVar83;
      iVar135 = iVar135 + auVar55._0_4_ + auVar81._0_4_;
      iVar136 = iVar136 + auVar55._4_4_ + auVar81._4_4_;
      iVar137 = iVar137 + auVar55._8_4_ + auVar81._8_4_;
      iVar138 = iVar138 + auVar55._12_4_ + auVar81._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar78 < 0),sVar78);
      iVar132 = iVar132 + auVar12._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_5 = param_5 + param_6;
      iVar14 = param_7 + -1;
      bVar3 = 0 < param_7;
      uVar18 = uVar79;
      uVar28 = uVar84;
      uVar30 = uVar87;
      uVar32 = uVar90;
      uVar35 = uVar93;
      uVar38 = uVar96;
      uVar41 = uVar99;
      uVar44 = uVar102;
      uVar47 = uVar106;
      uVar58 = uVar110;
      uVar61 = uVar114;
      uVar64 = uVar118;
      uVar67 = uVar121;
      uVar70 = uVar124;
      uVar73 = uVar127;
      uVar76 = uVar130;
      param_7 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  if (param_4 == 0) {
    do {
      sVar103 = pavgw(*param_1,param_1[1]);
      sVar107 = pavgw(param_1[1],param_1[2]);
      sVar111 = pavgw(param_1[2],param_1[3]);
      sVar115 = pavgw(param_1[3],param_1[4]);
      sVar33 = pavgw(param_1[4],param_1[5]);
      sVar36 = pavgw(param_1[5],param_1[6]);
      sVar39 = pavgw(param_1[6],param_1[7]);
      sVar42 = pavgw(param_1[7],param_1[8]);
      sVar45 = pavgw(param_1[8],param_1[9]);
      sVar56 = pavgw(param_1[9],param_1[10]);
      sVar59 = pavgw(param_1[10],param_1[0xb]);
      sVar62 = pavgw(param_1[0xb],param_1[0xc]);
      sVar65 = pavgw(param_1[0xc],param_1[0xd]);
      sVar68 = pavgw(param_1[0xd],param_1[0xe]);
      sVar71 = pavgw(param_1[0xe],param_1[0xf]);
      sVar74 = pavgw(param_1[0xf],param_1[0x10]);
      auVar50._0_2_ = sVar45 - param_5[8];
      auVar50._2_2_ = sVar56 - param_5[9];
      auVar50._4_2_ = sVar59 - param_5[10];
      auVar50._6_2_ = sVar62 - param_5[0xb];
      auVar50._8_2_ = sVar65 - param_5[0xc];
      auVar50._10_2_ = sVar68 - param_5[0xd];
      auVar50._12_2_ = sVar71 - param_5[0xe];
      auVar50._14_2_ = sVar74 - param_5[0xf];
      auVar23._0_2_ = sVar103 - *param_5;
      auVar23._2_2_ = sVar107 - param_5[1];
      auVar23._4_2_ = sVar111 - param_5[2];
      auVar23._6_2_ = sVar115 - param_5[3];
      auVar23._8_2_ = sVar33 - param_5[4];
      auVar23._10_2_ = sVar36 - param_5[5];
      auVar23._12_2_ = sVar39 - param_5[6];
      auVar23._14_2_ = sVar42 - param_5[7];
      auVar81 = pmaddwd(auVar50,auVar50);
      auVar20 = pmaddwd(auVar23,auVar23);
      sVar103 = auVar50._0_2_ + auVar23._0_2_ + auVar50._8_2_ + auVar23._8_2_;
      sVar107 = auVar50._2_2_ + auVar23._2_2_ + auVar50._10_2_ + auVar23._10_2_;
      sVar111 = auVar50._4_2_ + auVar23._4_2_ + auVar50._12_2_ + auVar23._12_2_;
      sVar115 = auVar50._6_2_ + auVar23._6_2_ + auVar50._14_2_ + auVar23._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
      auVar7._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar7._2_2_ = -(ushort)(sVar107 < 0);
      auVar7._0_2_ = sVar107;
      iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
      iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
      iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
      iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
      iVar132 = iVar132 + auVar7._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      iVar14 = param_7 + -1;
      bVar3 = 0 < param_7;
      param_7 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  if (param_4 == 8) {
    uVar17 = pavgw(*param_1,param_1[1]);
    uVar27 = pavgw(param_1[1],param_1[2]);
    uVar29 = pavgw(param_1[2],param_1[3]);
    uVar31 = pavgw(param_1[3],param_1[4]);
    uVar34 = pavgw(param_1[4],param_1[5]);
    uVar37 = pavgw(param_1[5],param_1[6]);
    uVar40 = pavgw(param_1[6],param_1[7]);
    uVar43 = pavgw(param_1[7],param_1[8]);
    uVar46 = pavgw(param_1[8],param_1[9]);
    uVar57 = pavgw(param_1[9],param_1[10]);
    uVar60 = pavgw(param_1[10],param_1[0xb]);
    uVar63 = pavgw(param_1[0xb],param_1[0xc]);
    uVar66 = pavgw(param_1[0xc],param_1[0xd]);
    uVar69 = pavgw(param_1[0xd],param_1[0xe]);
    uVar72 = pavgw(param_1[0xe],param_1[0xf]);
    uVar75 = pavgw(param_1[0xf],param_1[0x10]);
    do {
      param_1 = param_1 + param_2;
      uVar77 = pavgw(*param_1,param_1[1]);
      uVar82 = pavgw(param_1[1],param_1[2]);
      uVar85 = pavgw(param_1[2],param_1[3]);
      uVar88 = pavgw(param_1[3],param_1[4]);
      uVar91 = pavgw(param_1[4],param_1[5]);
      uVar94 = pavgw(param_1[5],param_1[6]);
      uVar97 = pavgw(param_1[6],param_1[7]);
      uVar100 = pavgw(param_1[7],param_1[8]);
      uVar104 = pavgw(param_1[8],param_1[9]);
      uVar108 = pavgw(param_1[9],param_1[10]);
      uVar112 = pavgw(param_1[10],param_1[0xb]);
      uVar116 = pavgw(param_1[0xb],param_1[0xc]);
      uVar119 = pavgw(param_1[0xc],param_1[0xd]);
      uVar122 = pavgw(param_1[0xd],param_1[0xe]);
      uVar125 = pavgw(param_1[0xe],param_1[0xf]);
      uVar128 = pavgw(param_1[0xf],param_1[0x10]);
      sVar103 = pavgw(uVar17,uVar77);
      sVar107 = pavgw(uVar27,uVar82);
      sVar111 = pavgw(uVar29,uVar85);
      sVar115 = pavgw(uVar31,uVar88);
      sVar33 = pavgw(uVar34,uVar91);
      sVar36 = pavgw(uVar37,uVar94);
      sVar39 = pavgw(uVar40,uVar97);
      sVar42 = pavgw(uVar43,uVar100);
      sVar45 = pavgw(uVar46,uVar104);
      sVar56 = pavgw(uVar57,uVar108);
      sVar59 = pavgw(uVar60,uVar112);
      sVar62 = pavgw(uVar63,uVar116);
      sVar65 = pavgw(uVar66,uVar119);
      sVar68 = pavgw(uVar69,uVar122);
      sVar71 = pavgw(uVar72,uVar125);
      sVar74 = pavgw(uVar75,uVar128);
      auVar51._0_2_ = sVar45 - param_5[8];
      auVar51._2_2_ = sVar56 - param_5[9];
      auVar51._4_2_ = sVar59 - param_5[10];
      auVar51._6_2_ = sVar62 - param_5[0xb];
      auVar51._8_2_ = sVar65 - param_5[0xc];
      auVar51._10_2_ = sVar68 - param_5[0xd];
      auVar51._12_2_ = sVar71 - param_5[0xe];
      auVar51._14_2_ = sVar74 - param_5[0xf];
      auVar24._0_2_ = sVar103 - *param_5;
      auVar24._2_2_ = sVar107 - param_5[1];
      auVar24._4_2_ = sVar111 - param_5[2];
      auVar24._6_2_ = sVar115 - param_5[3];
      auVar24._8_2_ = sVar33 - param_5[4];
      auVar24._10_2_ = sVar36 - param_5[5];
      auVar24._12_2_ = sVar39 - param_5[6];
      auVar24._14_2_ = sVar42 - param_5[7];
      auVar81 = pmaddwd(auVar51,auVar51);
      auVar20 = pmaddwd(auVar24,auVar24);
      sVar103 = auVar51._0_2_ + auVar24._0_2_ + auVar51._8_2_ + auVar24._8_2_;
      sVar107 = auVar51._2_2_ + auVar24._2_2_ + auVar51._10_2_ + auVar24._10_2_;
      sVar111 = auVar51._4_2_ + auVar24._4_2_ + auVar51._12_2_ + auVar24._12_2_;
      sVar115 = auVar51._6_2_ + auVar24._6_2_ + auVar51._14_2_ + auVar24._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
      auVar8._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar8._2_2_ = -(ushort)(sVar107 < 0);
      auVar8._0_2_ = sVar107;
      iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
      iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
      iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
      iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
      iVar132 = iVar132 + auVar8._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_5 = param_5 + param_6;
      iVar14 = param_7 + -1;
      bVar3 = 0 < param_7;
      uVar17 = uVar77;
      uVar27 = uVar82;
      uVar29 = uVar85;
      uVar31 = uVar88;
      uVar34 = uVar91;
      uVar37 = uVar94;
      uVar40 = uVar97;
      uVar43 = uVar100;
      uVar46 = uVar104;
      uVar57 = uVar108;
      uVar60 = uVar112;
      uVar63 = uVar116;
      uVar66 = uVar119;
      uVar69 = uVar122;
      uVar72 = uVar125;
      uVar75 = uVar128;
      param_7 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  uVar15 = param_4 << 5;
  sVar103 = pavgw(*param_1,param_1[1]);
  sVar107 = pavgw(param_1[1],param_1[2]);
  sVar111 = pavgw(param_1[2],param_1[3]);
  sVar115 = pavgw(param_1[3],param_1[4]);
  sVar33 = pavgw(param_1[4],param_1[5]);
  sVar36 = pavgw(param_1[5],param_1[6]);
  sVar39 = pavgw(param_1[6],param_1[7]);
  sVar42 = pavgw(param_1[7],param_1[8]);
  sVar45 = pavgw(param_1[8],param_1[9]);
  sVar56 = pavgw(param_1[9],param_1[10]);
  sVar59 = pavgw(param_1[10],param_1[0xb]);
  sVar62 = pavgw(param_1[0xb],param_1[0xc]);
  sVar65 = pavgw(param_1[0xc],param_1[0xd]);
  sVar68 = pavgw(param_1[0xd],param_1[0xe]);
  sVar71 = pavgw(param_1[0xe],param_1[0xf]);
  sVar74 = pavgw(param_1[0xf],param_1[0x10]);
  do {
    param_1 = param_1 + param_2;
    sVar78 = pavgw(*param_1,param_1[1]);
    sVar83 = pavgw(param_1[1],param_1[2]);
    sVar86 = pavgw(param_1[2],param_1[3]);
    sVar89 = pavgw(param_1[3],param_1[4]);
    sVar92 = pavgw(param_1[4],param_1[5]);
    sVar95 = pavgw(param_1[5],param_1[6]);
    sVar98 = pavgw(param_1[6],param_1[7]);
    sVar101 = pavgw(param_1[7],param_1[8]);
    sVar105 = pavgw(param_1[8],param_1[9]);
    sVar109 = pavgw(param_1[9],param_1[10]);
    sVar113 = pavgw(param_1[10],param_1[0xb]);
    sVar117 = pavgw(param_1[0xb],param_1[0xc]);
    sVar120 = pavgw(param_1[0xc],param_1[0xd]);
    sVar123 = pavgw(param_1[0xd],param_1[0xe]);
    sVar126 = pavgw(param_1[0xe],param_1[0xf]);
    sVar129 = pavgw(param_1[0xf],param_1[0x10]);
    auVar52._0_2_ =
         ((ushort)(sVar45 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                  sVar105 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4) - param_5[8];
    auVar52._2_2_ =
         ((ushort)(sVar56 * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                  sVar109 * *(short *)(&UNK_149df7a12 + uVar15)) >> 4) - param_5[9];
    auVar52._4_2_ =
         ((ushort)(sVar59 * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                  sVar113 * *(short *)(&UNK_149df7a14 + uVar15)) >> 4) - param_5[10];
    auVar52._6_2_ =
         ((ushort)(sVar62 * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                  sVar117 * *(short *)(&UNK_149df7a16 + uVar15)) >> 4) - param_5[0xb];
    auVar52._8_2_ =
         ((ushort)(sVar65 * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                  sVar120 * *(short *)(&UNK_149df7a18 + uVar15)) >> 4) - param_5[0xc];
    auVar52._10_2_ =
         ((ushort)(sVar68 * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                  sVar123 * *(short *)(&UNK_149df7a1a + uVar15)) >> 4) - param_5[0xd];
    auVar52._12_2_ =
         ((ushort)(sVar71 * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                  sVar126 * *(short *)(&UNK_149df7a1c + uVar15)) >> 4) - param_5[0xe];
    auVar52._14_2_ =
         ((ushort)(sVar74 * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                  sVar129 * *(short *)(&UNK_149df7a1e + uVar15)) >> 4) - param_5[0xf];
    auVar25._0_2_ =
         ((ushort)(sVar103 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                  sVar78 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4) - *param_5;
    auVar25._2_2_ =
         ((ushort)(sVar107 * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                  sVar83 * *(short *)(&UNK_149df7a12 + uVar15)) >> 4) - param_5[1];
    auVar25._4_2_ =
         ((ushort)(sVar111 * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                  sVar86 * *(short *)(&UNK_149df7a14 + uVar15)) >> 4) - param_5[2];
    auVar25._6_2_ =
         ((ushort)(sVar115 * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                  sVar89 * *(short *)(&UNK_149df7a16 + uVar15)) >> 4) - param_5[3];
    auVar25._8_2_ =
         ((ushort)(sVar33 * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                  sVar92 * *(short *)(&UNK_149df7a18 + uVar15)) >> 4) - param_5[4];
    auVar25._10_2_ =
         ((ushort)(sVar36 * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                  sVar95 * *(short *)(&UNK_149df7a1a + uVar15)) >> 4) - param_5[5];
    auVar25._12_2_ =
         ((ushort)(sVar39 * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                  sVar98 * *(short *)(&UNK_149df7a1c + uVar15)) >> 4) - param_5[6];
    auVar25._14_2_ =
         ((ushort)(sVar42 * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                  sVar101 * *(short *)(&UNK_149df7a1e + uVar15)) >> 4) - param_5[7];
    auVar81 = pmaddwd(auVar52,auVar52);
    auVar20 = pmaddwd(auVar25,auVar25);
    sVar103 = auVar52._0_2_ + auVar25._0_2_ + auVar52._8_2_ + auVar25._8_2_;
    sVar107 = auVar52._2_2_ + auVar25._2_2_ + auVar52._10_2_ + auVar25._10_2_;
    sVar111 = auVar52._4_2_ + auVar25._4_2_ + auVar52._12_2_ + auVar25._12_2_;
    sVar115 = auVar52._6_2_ + auVar25._6_2_ + auVar52._14_2_ + auVar25._14_2_;
    iVar14 = CONCAT22(-(ushort)(sVar115 < 0),sVar115);
    Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar111 < 0)),CONCAT22(sVar111,sVar115));
    auVar9._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
    auVar9._2_2_ = -(ushort)(sVar107 < 0);
    auVar9._0_2_ = sVar107;
    iVar135 = iVar135 + auVar81._0_4_ + auVar20._0_4_;
    iVar136 = iVar136 + auVar81._4_4_ + auVar20._4_4_;
    iVar137 = iVar137 + auVar81._8_4_ + auVar20._8_4_;
    iVar138 = iVar138 + auVar81._12_4_ + auVar20._12_4_;
    iVar131 = iVar131 + CONCAT22(-(ushort)(sVar103 < 0),sVar103);
    iVar132 = iVar132 + auVar9._0_4_;
    iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
    iVar134 = iVar134 + iVar14;
    param_5 = param_5 + param_6;
    iVar14 = param_7 + -1;
    bVar3 = 0 < param_7;
    sVar103 = sVar78;
    sVar107 = sVar83;
    sVar111 = sVar86;
    sVar115 = sVar89;
    sVar33 = sVar92;
    sVar36 = sVar95;
    sVar39 = sVar98;
    sVar42 = sVar101;
    sVar45 = sVar105;
    sVar56 = sVar109;
    sVar59 = sVar113;
    sVar62 = sVar117;
    sVar65 = sVar120;
    sVar68 = sVar123;
    sVar71 = sVar126;
    sVar74 = sVar129;
    param_7 = iVar14;
  } while (iVar14 != 0 && bVar3);
  *param_8 = iVar135 + iVar137 + iVar136 + iVar138;
  return iVar131 + iVar133 + iVar132 + iVar134;
}



// FUNCTION 142730c40 FUN_142730c40 body=2755 status=ok
// SIG undefined FUN_142730c40(void)

int FUN_142730c40(short *param_1,longlong param_2,int param_3,int param_4,short *param_5,
                 longlong param_6,undefined2 *param_7,longlong param_8,int param_9,int *param_10)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  unkbyte10 Var14;
  short *psVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  undefined2 uVar20;
  ushort uVar21;
  short sVar30;
  ushort uVar32;
  short sVar33;
  ushort uVar35;
  short sVar36;
  ushort uVar38;
  short sVar39;
  ushort uVar41;
  short sVar42;
  ushort uVar44;
  short sVar45;
  ushort uVar47;
  short sVar48;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined2 uVar31;
  undefined2 uVar34;
  undefined2 uVar37;
  undefined2 uVar40;
  undefined2 uVar43;
  undefined2 uVar46;
  undefined2 uVar49;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ushort uVar50;
  undefined2 uVar51;
  undefined2 uVar56;
  undefined2 uVar57;
  undefined2 uVar58;
  undefined2 uVar59;
  undefined2 uVar60;
  undefined2 uVar61;
  undefined2 uVar62;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  short sVar63;
  ushort uVar64;
  short sVar65;
  short sVar70;
  short sVar73;
  short sVar76;
  short sVar79;
  short sVar82;
  short sVar85;
  short sVar88;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  ushort uVar71;
  short sVar72;
  ushort uVar74;
  short sVar75;
  ushort uVar77;
  short sVar78;
  ushort uVar80;
  short sVar81;
  ushort uVar83;
  short sVar84;
  ushort uVar86;
  short sVar87;
  ushort uVar89;
  short sVar90;
  undefined1 auVar69 [16];
  undefined2 uVar91;
  short sVar92;
  ushort uVar93;
  undefined2 uVar94;
  short sVar95;
  ushort uVar96;
  undefined2 uVar97;
  short sVar98;
  ushort uVar99;
  undefined2 uVar100;
  short sVar101;
  ushort uVar102;
  undefined2 uVar103;
  short sVar104;
  ushort uVar105;
  undefined2 uVar106;
  short sVar107;
  ushort uVar108;
  undefined2 uVar109;
  short sVar110;
  ushort uVar111;
  undefined2 uVar112;
  short sVar113;
  ushort uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  
  iVar117 = 0;
  iVar118 = 0;
  iVar119 = 0;
  iVar120 = 0;
  iVar121 = 0;
  iVar122 = 0;
  iVar123 = 0;
  iVar124 = 0;
  param_9 = param_9 >> 1;
  if (param_3 == 0) {
    if (param_4 == 0) {
      do {
        psVar15 = param_1 + param_2;
        psVar1 = param_5 + param_6;
        sVar19 = pavgw(*param_1,*param_7);
        sVar30 = pavgw(param_1[1],param_7[1]);
        sVar33 = pavgw(param_1[2],param_7[2]);
        sVar36 = pavgw(param_1[3],param_7[3]);
        sVar39 = pavgw(param_1[4],param_7[4]);
        sVar42 = pavgw(param_1[5],param_7[5]);
        sVar45 = pavgw(param_1[6],param_7[6]);
        sVar48 = pavgw(param_1[7],param_7[7]);
        param_7 = param_7 + param_8;
        sVar63 = pavgw(*psVar15,*param_7);
        sVar70 = pavgw(psVar15[1],param_7[1]);
        sVar73 = pavgw(psVar15[2],param_7[2]);
        sVar76 = pavgw(psVar15[3],param_7[3]);
        sVar79 = pavgw(psVar15[4],param_7[4]);
        sVar82 = pavgw(psVar15[5],param_7[5]);
        sVar85 = pavgw(psVar15[6],param_7[6]);
        sVar88 = pavgw(psVar15[7],param_7[7]);
        auVar66._0_2_ = sVar63 - *psVar1;
        auVar66._2_2_ = sVar70 - psVar1[1];
        auVar66._4_2_ = sVar73 - psVar1[2];
        auVar66._6_2_ = sVar76 - psVar1[3];
        auVar66._8_2_ = sVar79 - psVar1[4];
        auVar66._10_2_ = sVar82 - psVar1[5];
        auVar66._12_2_ = sVar85 - psVar1[6];
        auVar66._14_2_ = sVar88 - psVar1[7];
        auVar22._0_2_ = sVar19 - *param_5;
        auVar22._2_2_ = sVar30 - param_5[1];
        auVar22._4_2_ = sVar33 - param_5[2];
        auVar22._6_2_ = sVar36 - param_5[3];
        auVar22._8_2_ = sVar39 - param_5[4];
        auVar22._10_2_ = sVar42 - param_5[5];
        auVar22._12_2_ = sVar45 - param_5[6];
        auVar22._14_2_ = sVar48 - param_5[7];
        auVar67 = pmaddwd(auVar66,auVar66);
        auVar23 = pmaddwd(auVar22,auVar22);
        sVar19 = auVar66._0_2_ + auVar22._0_2_ + auVar66._8_2_ + auVar22._8_2_;
        sVar30 = auVar66._2_2_ + auVar22._2_2_ + auVar66._10_2_ + auVar22._10_2_;
        sVar33 = auVar66._4_2_ + auVar22._4_2_ + auVar66._12_2_ + auVar22._12_2_;
        sVar36 = auVar66._6_2_ + auVar22._6_2_ + auVar66._14_2_ + auVar22._14_2_;
        iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
        Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
        auVar5._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar5._2_2_ = -(ushort)(sVar30 < 0);
        auVar5._0_2_ = sVar30;
        iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
        iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
        iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
        iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
        iVar118 = iVar118 + auVar5._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar16;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        param_7 = param_7 + param_8;
        iVar16 = param_9 + -1;
        bVar4 = 0 < param_9;
        param_9 = iVar16;
      } while (iVar16 != 0 && bVar4);
      *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    if (param_4 == 8) {
      do {
        psVar15 = param_1 + param_2;
        psVar1 = param_1 + param_2 * 2;
        psVar2 = param_5 + param_6;
        uVar20 = pavgw(*param_1,*psVar15);
        uVar31 = pavgw(param_1[1],psVar15[1]);
        uVar34 = pavgw(param_1[2],psVar15[2]);
        uVar37 = pavgw(param_1[3],psVar15[3]);
        uVar40 = pavgw(param_1[4],psVar15[4]);
        uVar43 = pavgw(param_1[5],psVar15[5]);
        uVar46 = pavgw(param_1[6],psVar15[6]);
        uVar49 = pavgw(param_1[7],psVar15[7]);
        uVar51 = pavgw(*psVar15,*psVar1);
        uVar56 = pavgw(psVar15[1],psVar1[1]);
        uVar57 = pavgw(psVar15[2],psVar1[2]);
        uVar58 = pavgw(psVar15[3],psVar1[3]);
        uVar59 = pavgw(psVar15[4],psVar1[4]);
        uVar60 = pavgw(psVar15[5],psVar1[5]);
        uVar61 = pavgw(psVar15[6],psVar1[6]);
        uVar62 = pavgw(psVar15[7],psVar1[7]);
        sVar19 = pavgw(uVar20,*param_7);
        sVar30 = pavgw(uVar31,param_7[1]);
        sVar33 = pavgw(uVar34,param_7[2]);
        sVar36 = pavgw(uVar37,param_7[3]);
        sVar39 = pavgw(uVar40,param_7[4]);
        sVar42 = pavgw(uVar43,param_7[5]);
        sVar45 = pavgw(uVar46,param_7[6]);
        sVar48 = pavgw(uVar49,param_7[7]);
        param_7 = param_7 + param_8;
        sVar63 = pavgw(uVar51,*param_7);
        sVar70 = pavgw(uVar56,param_7[1]);
        sVar73 = pavgw(uVar57,param_7[2]);
        sVar76 = pavgw(uVar58,param_7[3]);
        sVar79 = pavgw(uVar59,param_7[4]);
        sVar82 = pavgw(uVar60,param_7[5]);
        sVar85 = pavgw(uVar61,param_7[6]);
        sVar88 = pavgw(uVar62,param_7[7]);
        auVar52._0_2_ = sVar63 - *psVar2;
        auVar52._2_2_ = sVar70 - psVar2[1];
        auVar52._4_2_ = sVar73 - psVar2[2];
        auVar52._6_2_ = sVar76 - psVar2[3];
        auVar52._8_2_ = sVar79 - psVar2[4];
        auVar52._10_2_ = sVar82 - psVar2[5];
        auVar52._12_2_ = sVar85 - psVar2[6];
        auVar52._14_2_ = sVar88 - psVar2[7];
        auVar24._0_2_ = sVar19 - *param_5;
        auVar24._2_2_ = sVar30 - param_5[1];
        auVar24._4_2_ = sVar33 - param_5[2];
        auVar24._6_2_ = sVar36 - param_5[3];
        auVar24._8_2_ = sVar39 - param_5[4];
        auVar24._10_2_ = sVar42 - param_5[5];
        auVar24._12_2_ = sVar45 - param_5[6];
        auVar24._14_2_ = sVar48 - param_5[7];
        auVar67 = pmaddwd(auVar52,auVar52);
        auVar23 = pmaddwd(auVar24,auVar24);
        sVar19 = auVar52._0_2_ + auVar24._0_2_ + auVar52._8_2_ + auVar24._8_2_;
        sVar30 = auVar52._2_2_ + auVar24._2_2_ + auVar52._10_2_ + auVar24._10_2_;
        sVar33 = auVar52._4_2_ + auVar24._4_2_ + auVar52._12_2_ + auVar24._12_2_;
        sVar36 = auVar52._6_2_ + auVar24._6_2_ + auVar52._14_2_ + auVar24._14_2_;
        iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
        Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
        auVar6._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar6._2_2_ = -(ushort)(sVar30 < 0);
        auVar6._0_2_ = sVar30;
        iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
        iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
        iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
        iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
        iVar118 = iVar118 + auVar6._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar16;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        param_7 = param_7 + param_8;
        iVar16 = param_9 + -1;
        bVar4 = 0 < param_9;
        param_9 = iVar16;
      } while (iVar16 != 0 && bVar4);
      *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    uVar17 = param_4 << 5;
    do {
      psVar15 = param_1 + param_2;
      psVar1 = param_1 + param_2 * 2;
      psVar2 = param_5 + param_6;
      sVar19 = pavgw((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                             *psVar15 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4,*param_7);
      sVar30 = pavgw((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                             psVar15[1] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4,param_7[1]);
      sVar33 = pavgw((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                             psVar15[2] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4,param_7[2]);
      sVar36 = pavgw((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                             psVar15[3] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4,param_7[3]);
      sVar39 = pavgw((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                             psVar15[4] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4,param_7[4]);
      sVar42 = pavgw((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                             psVar15[5] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4,param_7[5]);
      sVar45 = pavgw((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                             psVar15[6] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4,param_7[6]);
      sVar48 = pavgw((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                             psVar15[7] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4,param_7[7]);
      param_7 = param_7 + param_8;
      sVar63 = pavgw((ushort)(*psVar15 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                             *psVar1 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4,*param_7);
      sVar70 = pavgw((ushort)(psVar15[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                             psVar1[1] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4,param_7[1]);
      sVar73 = pavgw((ushort)(psVar15[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                             psVar1[2] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4,param_7[2]);
      sVar76 = pavgw((ushort)(psVar15[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                             psVar1[3] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4,param_7[3]);
      sVar79 = pavgw((ushort)(psVar15[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                             psVar1[4] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4,param_7[4]);
      sVar82 = pavgw((ushort)(psVar15[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                             psVar1[5] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4,param_7[5]);
      sVar85 = pavgw((ushort)(psVar15[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                             psVar1[6] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4,param_7[6]);
      sVar88 = pavgw((ushort)(psVar15[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                             psVar1[7] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4,param_7[7]);
      auVar53._0_2_ = sVar63 - *psVar2;
      auVar53._2_2_ = sVar70 - psVar2[1];
      auVar53._4_2_ = sVar73 - psVar2[2];
      auVar53._6_2_ = sVar76 - psVar2[3];
      auVar53._8_2_ = sVar79 - psVar2[4];
      auVar53._10_2_ = sVar82 - psVar2[5];
      auVar53._12_2_ = sVar85 - psVar2[6];
      auVar53._14_2_ = sVar88 - psVar2[7];
      auVar25._0_2_ = sVar19 - *param_5;
      auVar25._2_2_ = sVar30 - param_5[1];
      auVar25._4_2_ = sVar33 - param_5[2];
      auVar25._6_2_ = sVar36 - param_5[3];
      auVar25._8_2_ = sVar39 - param_5[4];
      auVar25._10_2_ = sVar42 - param_5[5];
      auVar25._12_2_ = sVar45 - param_5[6];
      auVar25._14_2_ = sVar48 - param_5[7];
      auVar67 = pmaddwd(auVar53,auVar53);
      auVar23 = pmaddwd(auVar25,auVar25);
      sVar19 = auVar53._0_2_ + auVar25._0_2_ + auVar53._8_2_ + auVar25._8_2_;
      sVar30 = auVar53._2_2_ + auVar25._2_2_ + auVar53._10_2_ + auVar25._10_2_;
      sVar33 = auVar53._4_2_ + auVar25._4_2_ + auVar53._12_2_ + auVar25._12_2_;
      sVar36 = auVar53._6_2_ + auVar25._6_2_ + auVar53._14_2_ + auVar25._14_2_;
      iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
      Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
      auVar7._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar7._2_2_ = -(ushort)(sVar30 < 0);
      auVar7._0_2_ = sVar30;
      iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
      iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
      iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
      iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
      iVar118 = iVar118 + auVar7._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar16;
      param_1 = param_1 + param_2 * 2;
      param_5 = param_5 + param_6 * 2;
      param_7 = param_7 + param_8;
      iVar16 = param_9 + -1;
      bVar4 = 0 < param_9;
      param_9 = iVar16;
    } while (iVar16 != 0 && bVar4);
    *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  if (param_3 != 8) {
    if (param_4 == 0) {
      uVar17 = param_3 << 5;
      do {
        psVar15 = param_1 + param_2;
        psVar2 = param_1 + param_2 + 1;
        psVar1 = param_5 + param_6;
        sVar19 = pavgw((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                               param_1[1] * *(short *)(&DAT_149df7a10 + uVar17)) >> 4,*param_7);
        sVar30 = pavgw((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                               param_1[2] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4,param_7[1]);
        sVar33 = pavgw((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                               param_1[3] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4,param_7[2]);
        sVar36 = pavgw((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                               param_1[4] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4,param_7[3]);
        sVar39 = pavgw((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                               param_1[5] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4,param_7[4]);
        sVar42 = pavgw((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                               param_1[6] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4,param_7[5]);
        sVar45 = pavgw((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                               param_1[7] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4,param_7[6]);
        sVar48 = pavgw((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                               param_1[8] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4,param_7[7]);
        param_7 = param_7 + param_8;
        sVar63 = pavgw((ushort)(*psVar15 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                               *psVar2 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4,*param_7);
        sVar70 = pavgw((ushort)(psVar15[1] * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                               psVar2[1] * *(short *)(&UNK_149df7a12 + uVar17)) >> 4,param_7[1]);
        sVar73 = pavgw((ushort)(psVar15[2] * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                               psVar2[2] * *(short *)(&UNK_149df7a14 + uVar17)) >> 4,param_7[2]);
        sVar76 = pavgw((ushort)(psVar15[3] * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                               psVar2[3] * *(short *)(&UNK_149df7a16 + uVar17)) >> 4,param_7[3]);
        sVar79 = pavgw((ushort)(psVar15[4] * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                               psVar2[4] * *(short *)(&UNK_149df7a18 + uVar17)) >> 4,param_7[4]);
        sVar82 = pavgw((ushort)(psVar15[5] * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                               psVar2[5] * *(short *)(&UNK_149df7a1a + uVar17)) >> 4,param_7[5]);
        sVar85 = pavgw((ushort)(psVar15[6] * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                               psVar2[6] * *(short *)(&UNK_149df7a1c + uVar17)) >> 4,param_7[6]);
        sVar88 = pavgw((ushort)(psVar15[7] * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                               psVar2[7] * *(short *)(&UNK_149df7a1e + uVar17)) >> 4,param_7[7]);
        auVar55._0_2_ = sVar63 - *psVar1;
        auVar55._2_2_ = sVar70 - psVar1[1];
        auVar55._4_2_ = sVar73 - psVar1[2];
        auVar55._6_2_ = sVar76 - psVar1[3];
        auVar55._8_2_ = sVar79 - psVar1[4];
        auVar55._10_2_ = sVar82 - psVar1[5];
        auVar55._12_2_ = sVar85 - psVar1[6];
        auVar55._14_2_ = sVar88 - psVar1[7];
        auVar29._0_2_ = sVar19 - *param_5;
        auVar29._2_2_ = sVar30 - param_5[1];
        auVar29._4_2_ = sVar33 - param_5[2];
        auVar29._6_2_ = sVar36 - param_5[3];
        auVar29._8_2_ = sVar39 - param_5[4];
        auVar29._10_2_ = sVar42 - param_5[5];
        auVar29._12_2_ = sVar45 - param_5[6];
        auVar29._14_2_ = sVar48 - param_5[7];
        auVar67 = pmaddwd(auVar55,auVar55);
        auVar23 = pmaddwd(auVar29,auVar29);
        sVar19 = auVar55._0_2_ + auVar29._0_2_ + auVar55._8_2_ + auVar29._8_2_;
        sVar30 = auVar55._2_2_ + auVar29._2_2_ + auVar55._10_2_ + auVar29._10_2_;
        sVar33 = auVar55._4_2_ + auVar29._4_2_ + auVar55._12_2_ + auVar29._12_2_;
        sVar36 = auVar55._6_2_ + auVar29._6_2_ + auVar55._14_2_ + auVar29._14_2_;
        iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
        Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
        auVar11._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar11._2_2_ = -(ushort)(sVar30 < 0);
        auVar11._0_2_ = sVar30;
        iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
        iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
        iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
        iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
        iVar118 = iVar118 + auVar11._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar16;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        param_7 = param_7 + param_8;
        iVar16 = param_9 + -1;
        bVar4 = 0 < param_9;
        param_9 = iVar16;
      } while (iVar16 != 0 && bVar4);
      *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    if (param_4 == 8) {
      uVar17 = param_3 << 5;
      sVar19 = *(short *)(&DAT_149df7a00 + uVar17);
      sVar30 = *(short *)(&UNK_149df7a02 + uVar17);
      sVar33 = *(short *)(&UNK_149df7a04 + uVar17);
      sVar36 = *(short *)(&UNK_149df7a06 + uVar17);
      sVar39 = *(short *)(&UNK_149df7a08 + uVar17);
      sVar42 = *(short *)(&UNK_149df7a0a + uVar17);
      sVar45 = *(short *)(&UNK_149df7a0c + uVar17);
      sVar48 = *(short *)(&UNK_149df7a0e + uVar17);
      sVar63 = *(short *)(&DAT_149df7a10 + uVar17);
      sVar70 = *(short *)(&UNK_149df7a12 + uVar17);
      sVar73 = *(short *)(&UNK_149df7a14 + uVar17);
      sVar76 = *(short *)(&UNK_149df7a16 + uVar17);
      sVar79 = *(short *)(&UNK_149df7a18 + uVar17);
      sVar82 = *(short *)(&UNK_149df7a1a + uVar17);
      sVar85 = *(short *)(&UNK_149df7a1c + uVar17);
      sVar88 = *(short *)(&UNK_149df7a1e + uVar17);
      psVar15 = param_1 + param_2;
      uVar21 = (ushort)(*param_1 * sVar19 + 8 + param_1[1] * sVar63) >> 4;
      uVar32 = (ushort)(param_1[1] * sVar30 + 8 + param_1[2] * sVar70) >> 4;
      uVar35 = (ushort)(param_1[2] * sVar33 + 8 + param_1[3] * sVar73) >> 4;
      uVar38 = (ushort)(param_1[3] * sVar36 + 8 + param_1[4] * sVar76) >> 4;
      uVar41 = (ushort)(param_1[4] * sVar39 + 8 + param_1[5] * sVar79) >> 4;
      uVar44 = (ushort)(param_1[5] * sVar42 + 8 + param_1[6] * sVar82) >> 4;
      uVar47 = (ushort)(param_1[6] * sVar45 + 8 + param_1[7] * sVar85) >> 4;
      uVar50 = (ushort)(param_1[7] * sVar48 + 8 + param_1[8] * sVar88) >> 4;
      do {
        psVar1 = psVar15 + param_2;
        psVar3 = psVar15 + param_2 + 1;
        psVar2 = param_5 + param_6;
        uVar64 = (ushort)(*psVar15 * sVar19 + 8 + psVar15[1] * sVar63) >> 4;
        uVar71 = (ushort)(psVar15[1] * sVar30 + 8 + psVar15[2] * sVar70) >> 4;
        uVar74 = (ushort)(psVar15[2] * sVar33 + 8 + psVar15[3] * sVar73) >> 4;
        uVar77 = (ushort)(psVar15[3] * sVar36 + 8 + psVar15[4] * sVar76) >> 4;
        uVar80 = (ushort)(psVar15[4] * sVar39 + 8 + psVar15[5] * sVar79) >> 4;
        uVar83 = (ushort)(psVar15[5] * sVar42 + 8 + psVar15[6] * sVar82) >> 4;
        uVar86 = (ushort)(psVar15[6] * sVar45 + 8 + psVar15[7] * sVar85) >> 4;
        uVar89 = (ushort)(psVar15[7] * sVar48 + 8 + psVar15[8] * sVar88) >> 4;
        uVar93 = (ushort)(*psVar1 * sVar19 + 8 + *psVar3 * sVar63) >> 4;
        uVar96 = (ushort)(psVar1[1] * sVar30 + 8 + psVar3[1] * sVar70) >> 4;
        uVar99 = (ushort)(psVar1[2] * sVar33 + 8 + psVar3[2] * sVar73) >> 4;
        uVar102 = (ushort)(psVar1[3] * sVar36 + 8 + psVar3[3] * sVar76) >> 4;
        uVar105 = (ushort)(psVar1[4] * sVar39 + 8 + psVar3[4] * sVar79) >> 4;
        uVar108 = (ushort)(psVar1[5] * sVar42 + 8 + psVar3[5] * sVar82) >> 4;
        uVar111 = (ushort)(psVar1[6] * sVar45 + 8 + psVar3[6] * sVar85) >> 4;
        uVar114 = (ushort)(psVar1[7] * sVar48 + 8 + psVar3[7] * sVar88) >> 4;
        uVar20 = pavgw(uVar21,uVar64);
        uVar31 = pavgw(uVar32,uVar71);
        uVar34 = pavgw(uVar35,uVar74);
        uVar37 = pavgw(uVar38,uVar77);
        uVar40 = pavgw(uVar41,uVar80);
        uVar43 = pavgw(uVar44,uVar83);
        uVar46 = pavgw(uVar47,uVar86);
        uVar49 = pavgw(uVar50,uVar89);
        uVar51 = pavgw(uVar64,uVar93);
        uVar56 = pavgw(uVar71,uVar96);
        uVar57 = pavgw(uVar74,uVar99);
        uVar58 = pavgw(uVar77,uVar102);
        uVar59 = pavgw(uVar80,uVar105);
        uVar60 = pavgw(uVar83,uVar108);
        uVar61 = pavgw(uVar86,uVar111);
        uVar62 = pavgw(uVar89,uVar114);
        sVar92 = pavgw(uVar20,*param_7);
        sVar95 = pavgw(uVar31,param_7[1]);
        sVar98 = pavgw(uVar34,param_7[2]);
        sVar101 = pavgw(uVar37,param_7[3]);
        sVar104 = pavgw(uVar40,param_7[4]);
        sVar107 = pavgw(uVar43,param_7[5]);
        sVar110 = pavgw(uVar46,param_7[6]);
        sVar113 = pavgw(uVar49,param_7[7]);
        param_7 = param_7 + param_8;
        sVar65 = pavgw(uVar51,*param_7);
        sVar72 = pavgw(uVar56,param_7[1]);
        sVar75 = pavgw(uVar57,param_7[2]);
        sVar78 = pavgw(uVar58,param_7[3]);
        sVar81 = pavgw(uVar59,param_7[4]);
        sVar84 = pavgw(uVar60,param_7[5]);
        sVar87 = pavgw(uVar61,param_7[6]);
        sVar90 = pavgw(uVar62,param_7[7]);
        auVar116._0_2_ = sVar65 - *psVar2;
        auVar116._2_2_ = sVar72 - psVar2[1];
        auVar116._4_2_ = sVar75 - psVar2[2];
        auVar116._6_2_ = sVar78 - psVar2[3];
        auVar116._8_2_ = sVar81 - psVar2[4];
        auVar116._10_2_ = sVar84 - psVar2[5];
        auVar116._12_2_ = sVar87 - psVar2[6];
        auVar116._14_2_ = sVar90 - psVar2[7];
        auVar67._0_2_ = sVar92 - *param_5;
        auVar67._2_2_ = sVar95 - param_5[1];
        auVar67._4_2_ = sVar98 - param_5[2];
        auVar67._6_2_ = sVar101 - param_5[3];
        auVar67._8_2_ = sVar104 - param_5[4];
        auVar67._10_2_ = sVar107 - param_5[5];
        auVar67._12_2_ = sVar110 - param_5[6];
        auVar67._14_2_ = sVar113 - param_5[7];
        auVar69 = pmaddwd(auVar116,auVar116);
        auVar23 = pmaddwd(auVar67,auVar67);
        sVar92 = auVar116._0_2_ + auVar67._0_2_ + auVar116._8_2_ + auVar67._8_2_;
        sVar95 = auVar116._2_2_ + auVar67._2_2_ + auVar116._10_2_ + auVar67._10_2_;
        sVar98 = auVar116._4_2_ + auVar67._4_2_ + auVar116._12_2_ + auVar67._12_2_;
        sVar101 = auVar116._6_2_ + auVar67._6_2_ + auVar116._14_2_ + auVar67._14_2_;
        iVar16 = CONCAT22(-(ushort)(sVar101 < 0),sVar101);
        Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar98 < 0)),CONCAT22(sVar98,sVar101));
        auVar12._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
        auVar12._2_2_ = -(ushort)(sVar95 < 0);
        auVar12._0_2_ = sVar95;
        iVar121 = iVar121 + auVar69._0_4_ + auVar23._0_4_;
        iVar122 = iVar122 + auVar69._4_4_ + auVar23._4_4_;
        iVar123 = iVar123 + auVar69._8_4_ + auVar23._8_4_;
        iVar124 = iVar124 + auVar69._12_4_ + auVar23._12_4_;
        iVar117 = iVar117 + CONCAT22(-(ushort)(sVar92 < 0),sVar92);
        iVar118 = iVar118 + auVar12._0_4_;
        iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
        iVar120 = iVar120 + iVar16;
        psVar15 = psVar15 + param_2 * 2;
        param_5 = param_5 + param_6 * 2;
        param_7 = param_7 + param_8;
        iVar16 = param_9 + -1;
        bVar4 = 0 < param_9;
        param_9 = iVar16;
        uVar21 = uVar93;
        uVar32 = uVar96;
        uVar35 = uVar99;
        uVar38 = uVar102;
        uVar41 = uVar105;
        uVar44 = uVar108;
        uVar47 = uVar111;
        uVar50 = uVar114;
      } while (iVar16 != 0 && bVar4);
      *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
      return iVar117 + iVar119 + iVar118 + iVar120;
    }
    uVar17 = param_3 << 5;
    uVar18 = param_4 << 5;
    sVar19 = *(short *)(&DAT_149df7a00 + uVar17);
    sVar30 = *(short *)(&UNK_149df7a02 + uVar17);
    sVar33 = *(short *)(&UNK_149df7a04 + uVar17);
    sVar36 = *(short *)(&UNK_149df7a06 + uVar17);
    sVar39 = *(short *)(&UNK_149df7a08 + uVar17);
    sVar42 = *(short *)(&UNK_149df7a0a + uVar17);
    sVar45 = *(short *)(&UNK_149df7a0c + uVar17);
    sVar48 = *(short *)(&UNK_149df7a0e + uVar17);
    sVar63 = *(short *)(&DAT_149df7a10 + uVar17);
    sVar70 = *(short *)(&UNK_149df7a12 + uVar17);
    sVar73 = *(short *)(&UNK_149df7a14 + uVar17);
    sVar76 = *(short *)(&UNK_149df7a16 + uVar17);
    sVar79 = *(short *)(&UNK_149df7a18 + uVar17);
    sVar82 = *(short *)(&UNK_149df7a1a + uVar17);
    sVar85 = *(short *)(&UNK_149df7a1c + uVar17);
    sVar88 = *(short *)(&UNK_149df7a1e + uVar17);
    uVar21 = (ushort)(*param_1 * sVar19 + 8 + param_1[1] * sVar63) >> 4;
    uVar32 = (ushort)(param_1[1] * sVar30 + 8 + param_1[2] * sVar70) >> 4;
    uVar35 = (ushort)(param_1[2] * sVar33 + 8 + param_1[3] * sVar73) >> 4;
    uVar38 = (ushort)(param_1[3] * sVar36 + 8 + param_1[4] * sVar76) >> 4;
    uVar41 = (ushort)(param_1[4] * sVar39 + 8 + param_1[5] * sVar79) >> 4;
    uVar44 = (ushort)(param_1[5] * sVar42 + 8 + param_1[6] * sVar82) >> 4;
    uVar47 = (ushort)(param_1[6] * sVar45 + 8 + param_1[7] * sVar85) >> 4;
    uVar50 = (ushort)(param_1[7] * sVar48 + 8 + param_1[8] * sVar88) >> 4;
    do {
      psVar15 = param_1 + param_2;
      param_1 = psVar15 + param_2;
      uVar64 = (ushort)(*psVar15 * sVar19 + 8 + psVar15[1] * sVar63) >> 4;
      uVar71 = (ushort)(psVar15[1] * sVar30 + 8 + psVar15[2] * sVar70) >> 4;
      uVar74 = (ushort)(psVar15[2] * sVar33 + 8 + psVar15[3] * sVar73) >> 4;
      uVar77 = (ushort)(psVar15[3] * sVar36 + 8 + psVar15[4] * sVar76) >> 4;
      uVar80 = (ushort)(psVar15[4] * sVar39 + 8 + psVar15[5] * sVar79) >> 4;
      uVar83 = (ushort)(psVar15[5] * sVar42 + 8 + psVar15[6] * sVar82) >> 4;
      uVar86 = (ushort)(psVar15[6] * sVar45 + 8 + psVar15[7] * sVar85) >> 4;
      uVar89 = (ushort)(psVar15[7] * sVar48 + 8 + psVar15[8] * sVar88) >> 4;
      uVar93 = (ushort)(*param_1 * sVar19 + 8 + param_1[1] * sVar63) >> 4;
      uVar96 = (ushort)(param_1[1] * sVar30 + 8 + param_1[2] * sVar70) >> 4;
      uVar99 = (ushort)(param_1[2] * sVar33 + 8 + param_1[3] * sVar73) >> 4;
      uVar102 = (ushort)(param_1[3] * sVar36 + 8 + param_1[4] * sVar76) >> 4;
      uVar105 = (ushort)(param_1[4] * sVar39 + 8 + param_1[5] * sVar79) >> 4;
      uVar108 = (ushort)(param_1[5] * sVar42 + 8 + param_1[6] * sVar82) >> 4;
      uVar111 = (ushort)(param_1[6] * sVar45 + 8 + param_1[7] * sVar85) >> 4;
      uVar114 = (ushort)(param_1[7] * sVar48 + 8 + param_1[8] * sVar88) >> 4;
      psVar15 = param_5 + param_6;
      sVar92 = pavgw((ushort)(uVar21 * *(short *)(&DAT_149df7a00 + uVar18) + 8 +
                             uVar64 * *(short *)(&DAT_149df7a10 + uVar18)) >> 4,*param_7);
      sVar95 = pavgw((ushort)(uVar32 * *(short *)(&UNK_149df7a02 + uVar18) + 8 +
                             uVar71 * *(short *)(&UNK_149df7a12 + uVar18)) >> 4,param_7[1]);
      sVar98 = pavgw((ushort)(uVar35 * *(short *)(&UNK_149df7a04 + uVar18) + 8 +
                             uVar74 * *(short *)(&UNK_149df7a14 + uVar18)) >> 4,param_7[2]);
      sVar101 = pavgw((ushort)(uVar38 * *(short *)(&UNK_149df7a06 + uVar18) + 8 +
                              uVar77 * *(short *)(&UNK_149df7a16 + uVar18)) >> 4,param_7[3]);
      sVar104 = pavgw((ushort)(uVar41 * *(short *)(&UNK_149df7a08 + uVar18) + 8 +
                              uVar80 * *(short *)(&UNK_149df7a18 + uVar18)) >> 4,param_7[4]);
      sVar107 = pavgw((ushort)(uVar44 * *(short *)(&UNK_149df7a0a + uVar18) + 8 +
                              uVar83 * *(short *)(&UNK_149df7a1a + uVar18)) >> 4,param_7[5]);
      sVar110 = pavgw((ushort)(uVar47 * *(short *)(&UNK_149df7a0c + uVar18) + 8 +
                              uVar86 * *(short *)(&UNK_149df7a1c + uVar18)) >> 4,param_7[6]);
      sVar113 = pavgw((ushort)(uVar50 * *(short *)(&UNK_149df7a0e + uVar18) + 8 +
                              uVar89 * *(short *)(&UNK_149df7a1e + uVar18)) >> 4,param_7[7]);
      param_7 = param_7 + param_8;
      sVar65 = pavgw((ushort)(uVar64 * *(short *)(&DAT_149df7a00 + uVar18) + 8 +
                             uVar93 * *(short *)(&DAT_149df7a10 + uVar18)) >> 4,*param_7);
      sVar72 = pavgw((ushort)(uVar71 * *(short *)(&UNK_149df7a02 + uVar18) + 8 +
                             uVar96 * *(short *)(&UNK_149df7a12 + uVar18)) >> 4,param_7[1]);
      sVar75 = pavgw((ushort)(uVar74 * *(short *)(&UNK_149df7a04 + uVar18) + 8 +
                             uVar99 * *(short *)(&UNK_149df7a14 + uVar18)) >> 4,param_7[2]);
      sVar78 = pavgw((ushort)(uVar77 * *(short *)(&UNK_149df7a06 + uVar18) + 8 +
                             uVar102 * *(short *)(&UNK_149df7a16 + uVar18)) >> 4,param_7[3]);
      sVar81 = pavgw((ushort)(uVar80 * *(short *)(&UNK_149df7a08 + uVar18) + 8 +
                             uVar105 * *(short *)(&UNK_149df7a18 + uVar18)) >> 4,param_7[4]);
      sVar84 = pavgw((ushort)(uVar83 * *(short *)(&UNK_149df7a0a + uVar18) + 8 +
                             uVar108 * *(short *)(&UNK_149df7a1a + uVar18)) >> 4,param_7[5]);
      sVar87 = pavgw((ushort)(uVar86 * *(short *)(&UNK_149df7a0c + uVar18) + 8 +
                             uVar111 * *(short *)(&UNK_149df7a1c + uVar18)) >> 4,param_7[6]);
      sVar90 = pavgw((ushort)(uVar89 * *(short *)(&UNK_149df7a0e + uVar18) + 8 +
                             uVar114 * *(short *)(&UNK_149df7a1e + uVar18)) >> 4,param_7[7]);
      auVar69._0_2_ = sVar65 - *psVar15;
      auVar69._2_2_ = sVar72 - psVar15[1];
      auVar69._4_2_ = sVar75 - psVar15[2];
      auVar69._6_2_ = sVar78 - psVar15[3];
      auVar69._8_2_ = sVar81 - psVar15[4];
      auVar69._10_2_ = sVar84 - psVar15[5];
      auVar69._12_2_ = sVar87 - psVar15[6];
      auVar69._14_2_ = sVar90 - psVar15[7];
      auVar23._0_2_ = sVar92 - *param_5;
      auVar23._2_2_ = sVar95 - param_5[1];
      auVar23._4_2_ = sVar98 - param_5[2];
      auVar23._6_2_ = sVar101 - param_5[3];
      auVar23._8_2_ = sVar104 - param_5[4];
      auVar23._10_2_ = sVar107 - param_5[5];
      auVar23._12_2_ = sVar110 - param_5[6];
      auVar23._14_2_ = sVar113 - param_5[7];
      auVar116 = pmaddwd(auVar69,auVar69);
      auVar67 = pmaddwd(auVar23,auVar23);
      sVar92 = auVar69._0_2_ + auVar23._0_2_ + auVar69._8_2_ + auVar23._8_2_;
      sVar95 = auVar69._2_2_ + auVar23._2_2_ + auVar69._10_2_ + auVar23._10_2_;
      sVar98 = auVar69._4_2_ + auVar23._4_2_ + auVar69._12_2_ + auVar23._12_2_;
      sVar101 = auVar69._6_2_ + auVar23._6_2_ + auVar69._14_2_ + auVar23._14_2_;
      iVar16 = CONCAT22(-(ushort)(sVar101 < 0),sVar101);
      Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar98 < 0)),CONCAT22(sVar98,sVar101));
      auVar13._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar13._2_2_ = -(ushort)(sVar95 < 0);
      auVar13._0_2_ = sVar95;
      iVar121 = iVar121 + auVar116._0_4_ + auVar67._0_4_;
      iVar122 = iVar122 + auVar116._4_4_ + auVar67._4_4_;
      iVar123 = iVar123 + auVar116._8_4_ + auVar67._8_4_;
      iVar124 = iVar124 + auVar116._12_4_ + auVar67._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar92 < 0),sVar92);
      iVar118 = iVar118 + auVar13._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar16;
      param_5 = param_5 + param_6 * 2;
      param_7 = param_7 + param_8;
      iVar16 = param_9 + -1;
      bVar4 = 0 < param_9;
      param_9 = iVar16;
      uVar21 = uVar93;
      uVar32 = uVar96;
      uVar35 = uVar99;
      uVar38 = uVar102;
      uVar41 = uVar105;
      uVar44 = uVar108;
      uVar47 = uVar111;
      uVar50 = uVar114;
    } while (iVar16 != 0 && bVar4);
    *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  if (param_4 == 0) {
    do {
      psVar15 = param_1 + param_2;
      psVar2 = param_1 + param_2 + 1;
      psVar1 = param_5 + param_6;
      uVar20 = pavgw(*param_1,param_1[1]);
      uVar31 = pavgw(param_1[1],param_1[2]);
      uVar34 = pavgw(param_1[2],param_1[3]);
      uVar37 = pavgw(param_1[3],param_1[4]);
      uVar40 = pavgw(param_1[4],param_1[5]);
      uVar43 = pavgw(param_1[5],param_1[6]);
      uVar46 = pavgw(param_1[6],param_1[7]);
      uVar49 = pavgw(param_1[7],param_1[8]);
      uVar51 = pavgw(*psVar15,*psVar2);
      uVar56 = pavgw(psVar15[1],psVar2[1]);
      uVar57 = pavgw(psVar15[2],psVar2[2]);
      uVar58 = pavgw(psVar15[3],psVar2[3]);
      uVar59 = pavgw(psVar15[4],psVar2[4]);
      uVar60 = pavgw(psVar15[5],psVar2[5]);
      uVar61 = pavgw(psVar15[6],psVar2[6]);
      uVar62 = pavgw(psVar15[7],psVar2[7]);
      sVar19 = pavgw(uVar20,*param_7);
      sVar30 = pavgw(uVar31,param_7[1]);
      sVar33 = pavgw(uVar34,param_7[2]);
      sVar36 = pavgw(uVar37,param_7[3]);
      sVar39 = pavgw(uVar40,param_7[4]);
      sVar42 = pavgw(uVar43,param_7[5]);
      sVar45 = pavgw(uVar46,param_7[6]);
      sVar48 = pavgw(uVar49,param_7[7]);
      param_7 = param_7 + param_8;
      sVar63 = pavgw(uVar51,*param_7);
      sVar70 = pavgw(uVar56,param_7[1]);
      sVar73 = pavgw(uVar57,param_7[2]);
      sVar76 = pavgw(uVar58,param_7[3]);
      sVar79 = pavgw(uVar59,param_7[4]);
      sVar82 = pavgw(uVar60,param_7[5]);
      sVar85 = pavgw(uVar61,param_7[6]);
      sVar88 = pavgw(uVar62,param_7[7]);
      auVar54._0_2_ = sVar63 - *psVar1;
      auVar54._2_2_ = sVar70 - psVar1[1];
      auVar54._4_2_ = sVar73 - psVar1[2];
      auVar54._6_2_ = sVar76 - psVar1[3];
      auVar54._8_2_ = sVar79 - psVar1[4];
      auVar54._10_2_ = sVar82 - psVar1[5];
      auVar54._12_2_ = sVar85 - psVar1[6];
      auVar54._14_2_ = sVar88 - psVar1[7];
      auVar26._0_2_ = sVar19 - *param_5;
      auVar26._2_2_ = sVar30 - param_5[1];
      auVar26._4_2_ = sVar33 - param_5[2];
      auVar26._6_2_ = sVar36 - param_5[3];
      auVar26._8_2_ = sVar39 - param_5[4];
      auVar26._10_2_ = sVar42 - param_5[5];
      auVar26._12_2_ = sVar45 - param_5[6];
      auVar26._14_2_ = sVar48 - param_5[7];
      auVar67 = pmaddwd(auVar54,auVar54);
      auVar23 = pmaddwd(auVar26,auVar26);
      sVar19 = auVar54._0_2_ + auVar26._0_2_ + auVar54._8_2_ + auVar26._8_2_;
      sVar30 = auVar54._2_2_ + auVar26._2_2_ + auVar54._10_2_ + auVar26._10_2_;
      sVar33 = auVar54._4_2_ + auVar26._4_2_ + auVar54._12_2_ + auVar26._12_2_;
      sVar36 = auVar54._6_2_ + auVar26._6_2_ + auVar54._14_2_ + auVar26._14_2_;
      iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
      Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
      auVar8._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar8._2_2_ = -(ushort)(sVar30 < 0);
      auVar8._0_2_ = sVar30;
      iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
      iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
      iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
      iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
      iVar118 = iVar118 + auVar8._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar16;
      param_1 = param_1 + param_2 * 2;
      param_5 = param_5 + param_6 * 2;
      param_7 = param_7 + param_8;
      iVar16 = param_9 + -1;
      bVar4 = 0 < param_9;
      param_9 = iVar16;
    } while (iVar16 != 0 && bVar4);
    *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  if (param_4 == 8) {
    psVar15 = param_1 + param_2;
    uVar20 = pavgw(*param_1,param_1[1]);
    uVar31 = pavgw(param_1[1],param_1[2]);
    uVar34 = pavgw(param_1[2],param_1[3]);
    uVar37 = pavgw(param_1[3],param_1[4]);
    uVar40 = pavgw(param_1[4],param_1[5]);
    uVar43 = pavgw(param_1[5],param_1[6]);
    uVar46 = pavgw(param_1[6],param_1[7]);
    uVar49 = pavgw(param_1[7],param_1[8]);
    do {
      psVar1 = psVar15 + param_2;
      psVar2 = psVar15 + param_2 + 1;
      uVar51 = pavgw(*psVar15,psVar15[1]);
      uVar56 = pavgw(psVar15[1],psVar15[2]);
      uVar57 = pavgw(psVar15[2],psVar15[3]);
      uVar58 = pavgw(psVar15[3],psVar15[4]);
      uVar59 = pavgw(psVar15[4],psVar15[5]);
      uVar60 = pavgw(psVar15[5],psVar15[6]);
      uVar61 = pavgw(psVar15[6],psVar15[7]);
      uVar62 = pavgw(psVar15[7],psVar15[8]);
      uVar91 = pavgw(*psVar1,*psVar2);
      uVar94 = pavgw(psVar1[1],psVar2[1]);
      uVar97 = pavgw(psVar1[2],psVar2[2]);
      uVar100 = pavgw(psVar1[3],psVar2[3]);
      uVar103 = pavgw(psVar1[4],psVar2[4]);
      uVar106 = pavgw(psVar1[5],psVar2[5]);
      uVar109 = pavgw(psVar1[6],psVar2[6]);
      uVar112 = pavgw(psVar1[7],psVar2[7]);
      uVar20 = pavgw(uVar20,uVar51);
      uVar31 = pavgw(uVar31,uVar56);
      uVar34 = pavgw(uVar34,uVar57);
      uVar37 = pavgw(uVar37,uVar58);
      uVar40 = pavgw(uVar40,uVar59);
      uVar43 = pavgw(uVar43,uVar60);
      uVar46 = pavgw(uVar46,uVar61);
      uVar49 = pavgw(uVar49,uVar62);
      uVar51 = pavgw(uVar51,uVar91);
      uVar56 = pavgw(uVar56,uVar94);
      uVar57 = pavgw(uVar57,uVar97);
      uVar58 = pavgw(uVar58,uVar100);
      uVar59 = pavgw(uVar59,uVar103);
      uVar60 = pavgw(uVar60,uVar106);
      uVar61 = pavgw(uVar61,uVar109);
      uVar62 = pavgw(uVar62,uVar112);
      psVar1 = param_5 + param_6;
      sVar19 = pavgw(uVar20,*param_7);
      sVar30 = pavgw(uVar31,param_7[1]);
      sVar33 = pavgw(uVar34,param_7[2]);
      sVar36 = pavgw(uVar37,param_7[3]);
      sVar39 = pavgw(uVar40,param_7[4]);
      sVar42 = pavgw(uVar43,param_7[5]);
      sVar45 = pavgw(uVar46,param_7[6]);
      sVar48 = pavgw(uVar49,param_7[7]);
      param_7 = param_7 + param_8;
      sVar63 = pavgw(uVar51,*param_7);
      sVar70 = pavgw(uVar56,param_7[1]);
      sVar73 = pavgw(uVar57,param_7[2]);
      sVar76 = pavgw(uVar58,param_7[3]);
      sVar79 = pavgw(uVar59,param_7[4]);
      sVar82 = pavgw(uVar60,param_7[5]);
      sVar85 = pavgw(uVar61,param_7[6]);
      sVar88 = pavgw(uVar62,param_7[7]);
      auVar68._0_2_ = sVar63 - *psVar1;
      auVar68._2_2_ = sVar70 - psVar1[1];
      auVar68._4_2_ = sVar73 - psVar1[2];
      auVar68._6_2_ = sVar76 - psVar1[3];
      auVar68._8_2_ = sVar79 - psVar1[4];
      auVar68._10_2_ = sVar82 - psVar1[5];
      auVar68._12_2_ = sVar85 - psVar1[6];
      auVar68._14_2_ = sVar88 - psVar1[7];
      auVar27._0_2_ = sVar19 - *param_5;
      auVar27._2_2_ = sVar30 - param_5[1];
      auVar27._4_2_ = sVar33 - param_5[2];
      auVar27._6_2_ = sVar36 - param_5[3];
      auVar27._8_2_ = sVar39 - param_5[4];
      auVar27._10_2_ = sVar42 - param_5[5];
      auVar27._12_2_ = sVar45 - param_5[6];
      auVar27._14_2_ = sVar48 - param_5[7];
      auVar67 = pmaddwd(auVar68,auVar68);
      auVar23 = pmaddwd(auVar27,auVar27);
      sVar19 = auVar68._0_2_ + auVar27._0_2_ + auVar68._8_2_ + auVar27._8_2_;
      sVar30 = auVar68._2_2_ + auVar27._2_2_ + auVar68._10_2_ + auVar27._10_2_;
      sVar33 = auVar68._4_2_ + auVar27._4_2_ + auVar68._12_2_ + auVar27._12_2_;
      sVar36 = auVar68._6_2_ + auVar27._6_2_ + auVar68._14_2_ + auVar27._14_2_;
      iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
      Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
      auVar9._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
      auVar9._2_2_ = -(ushort)(sVar30 < 0);
      auVar9._0_2_ = sVar30;
      iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
      iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
      iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
      iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
      iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
      iVar118 = iVar118 + auVar9._0_4_;
      iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
      iVar120 = iVar120 + iVar16;
      psVar15 = psVar15 + param_2 * 2;
      param_5 = param_5 + param_6 * 2;
      param_7 = param_7 + param_8;
      iVar16 = param_9 + -1;
      bVar4 = 0 < param_9;
      param_9 = iVar16;
      uVar20 = uVar91;
      uVar31 = uVar94;
      uVar34 = uVar97;
      uVar37 = uVar100;
      uVar40 = uVar103;
      uVar43 = uVar106;
      uVar46 = uVar109;
      uVar49 = uVar112;
    } while (iVar16 != 0 && bVar4);
    *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
    return iVar117 + iVar119 + iVar118 + iVar120;
  }
  uVar17 = param_4 << 5;
  psVar15 = param_1 + param_2;
  sVar19 = pavgw(*param_1,param_1[1]);
  sVar30 = pavgw(param_1[1],param_1[2]);
  sVar33 = pavgw(param_1[2],param_1[3]);
  sVar36 = pavgw(param_1[3],param_1[4]);
  sVar39 = pavgw(param_1[4],param_1[5]);
  sVar42 = pavgw(param_1[5],param_1[6]);
  sVar45 = pavgw(param_1[6],param_1[7]);
  sVar48 = pavgw(param_1[7],param_1[8]);
  do {
    psVar1 = psVar15 + param_2;
    psVar2 = psVar15 + param_2 + 1;
    sVar63 = pavgw(*psVar15,psVar15[1]);
    sVar70 = pavgw(psVar15[1],psVar15[2]);
    sVar73 = pavgw(psVar15[2],psVar15[3]);
    sVar76 = pavgw(psVar15[3],psVar15[4]);
    sVar79 = pavgw(psVar15[4],psVar15[5]);
    sVar82 = pavgw(psVar15[5],psVar15[6]);
    sVar85 = pavgw(psVar15[6],psVar15[7]);
    sVar88 = pavgw(psVar15[7],psVar15[8]);
    sVar92 = pavgw(*psVar1,*psVar2);
    sVar95 = pavgw(psVar1[1],psVar2[1]);
    sVar98 = pavgw(psVar1[2],psVar2[2]);
    sVar101 = pavgw(psVar1[3],psVar2[3]);
    sVar104 = pavgw(psVar1[4],psVar2[4]);
    sVar107 = pavgw(psVar1[5],psVar2[5]);
    sVar110 = pavgw(psVar1[6],psVar2[6]);
    sVar113 = pavgw(psVar1[7],psVar2[7]);
    psVar1 = param_5 + param_6;
    sVar19 = pavgw((ushort)(sVar19 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                           sVar63 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4,*param_7);
    sVar30 = pavgw((ushort)(sVar30 * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                           sVar70 * *(short *)(&UNK_149df7a12 + uVar17)) >> 4,param_7[1]);
    sVar33 = pavgw((ushort)(sVar33 * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                           sVar73 * *(short *)(&UNK_149df7a14 + uVar17)) >> 4,param_7[2]);
    sVar36 = pavgw((ushort)(sVar36 * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                           sVar76 * *(short *)(&UNK_149df7a16 + uVar17)) >> 4,param_7[3]);
    sVar39 = pavgw((ushort)(sVar39 * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                           sVar79 * *(short *)(&UNK_149df7a18 + uVar17)) >> 4,param_7[4]);
    sVar42 = pavgw((ushort)(sVar42 * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                           sVar82 * *(short *)(&UNK_149df7a1a + uVar17)) >> 4,param_7[5]);
    sVar45 = pavgw((ushort)(sVar45 * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                           sVar85 * *(short *)(&UNK_149df7a1c + uVar17)) >> 4,param_7[6]);
    sVar48 = pavgw((ushort)(sVar48 * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                           sVar88 * *(short *)(&UNK_149df7a1e + uVar17)) >> 4,param_7[7]);
    param_7 = param_7 + param_8;
    sVar63 = pavgw((ushort)(sVar63 * *(short *)(&DAT_149df7a00 + uVar17) + 8 +
                           sVar92 * *(short *)(&DAT_149df7a10 + uVar17)) >> 4,*param_7);
    sVar70 = pavgw((ushort)(sVar70 * *(short *)(&UNK_149df7a02 + uVar17) + 8 +
                           sVar95 * *(short *)(&UNK_149df7a12 + uVar17)) >> 4,param_7[1]);
    sVar73 = pavgw((ushort)(sVar73 * *(short *)(&UNK_149df7a04 + uVar17) + 8 +
                           sVar98 * *(short *)(&UNK_149df7a14 + uVar17)) >> 4,param_7[2]);
    sVar76 = pavgw((ushort)(sVar76 * *(short *)(&UNK_149df7a06 + uVar17) + 8 +
                           sVar101 * *(short *)(&UNK_149df7a16 + uVar17)) >> 4,param_7[3]);
    sVar79 = pavgw((ushort)(sVar79 * *(short *)(&UNK_149df7a08 + uVar17) + 8 +
                           sVar104 * *(short *)(&UNK_149df7a18 + uVar17)) >> 4,param_7[4]);
    sVar82 = pavgw((ushort)(sVar82 * *(short *)(&UNK_149df7a0a + uVar17) + 8 +
                           sVar107 * *(short *)(&UNK_149df7a1a + uVar17)) >> 4,param_7[5]);
    sVar85 = pavgw((ushort)(sVar85 * *(short *)(&UNK_149df7a0c + uVar17) + 8 +
                           sVar110 * *(short *)(&UNK_149df7a1c + uVar17)) >> 4,param_7[6]);
    sVar88 = pavgw((ushort)(sVar88 * *(short *)(&UNK_149df7a0e + uVar17) + 8 +
                           sVar113 * *(short *)(&UNK_149df7a1e + uVar17)) >> 4,param_7[7]);
    auVar115._0_2_ = sVar63 - *psVar1;
    auVar115._2_2_ = sVar70 - psVar1[1];
    auVar115._4_2_ = sVar73 - psVar1[2];
    auVar115._6_2_ = sVar76 - psVar1[3];
    auVar115._8_2_ = sVar79 - psVar1[4];
    auVar115._10_2_ = sVar82 - psVar1[5];
    auVar115._12_2_ = sVar85 - psVar1[6];
    auVar115._14_2_ = sVar88 - psVar1[7];
    auVar28._0_2_ = sVar19 - *param_5;
    auVar28._2_2_ = sVar30 - param_5[1];
    auVar28._4_2_ = sVar33 - param_5[2];
    auVar28._6_2_ = sVar36 - param_5[3];
    auVar28._8_2_ = sVar39 - param_5[4];
    auVar28._10_2_ = sVar42 - param_5[5];
    auVar28._12_2_ = sVar45 - param_5[6];
    auVar28._14_2_ = sVar48 - param_5[7];
    auVar67 = pmaddwd(auVar115,auVar115);
    auVar23 = pmaddwd(auVar28,auVar28);
    sVar19 = auVar115._0_2_ + auVar28._0_2_ + auVar115._8_2_ + auVar28._8_2_;
    sVar30 = auVar115._2_2_ + auVar28._2_2_ + auVar115._10_2_ + auVar28._10_2_;
    sVar33 = auVar115._4_2_ + auVar28._4_2_ + auVar115._12_2_ + auVar28._12_2_;
    sVar36 = auVar115._6_2_ + auVar28._6_2_ + auVar115._14_2_ + auVar28._14_2_;
    iVar16 = CONCAT22(-(ushort)(sVar36 < 0),sVar36);
    Var14 = CONCAT64(CONCAT42(iVar16,-(ushort)(sVar33 < 0)),CONCAT22(sVar33,sVar36));
    auVar10._4_8_ = (longlong)((unkuint10)Var14 >> 0x10);
    auVar10._2_2_ = -(ushort)(sVar30 < 0);
    auVar10._0_2_ = sVar30;
    iVar121 = iVar121 + auVar67._0_4_ + auVar23._0_4_;
    iVar122 = iVar122 + auVar67._4_4_ + auVar23._4_4_;
    iVar123 = iVar123 + auVar67._8_4_ + auVar23._8_4_;
    iVar124 = iVar124 + auVar67._12_4_ + auVar23._12_4_;
    iVar117 = iVar117 + CONCAT22(-(ushort)(sVar19 < 0),sVar19);
    iVar118 = iVar118 + auVar10._0_4_;
    iVar119 = iVar119 + (int)((unkuint10)Var14 >> 0x10);
    iVar120 = iVar120 + iVar16;
    psVar15 = psVar15 + param_2 * 2;
    param_5 = param_5 + param_6 * 2;
    param_7 = param_7 + param_8;
    iVar16 = param_9 + -1;
    bVar4 = 0 < param_9;
    param_9 = iVar16;
    sVar19 = sVar92;
    sVar30 = sVar95;
    sVar33 = sVar98;
    sVar36 = sVar101;
    sVar39 = sVar104;
    sVar42 = sVar107;
    sVar45 = sVar110;
    sVar48 = sVar113;
  } while (iVar16 != 0 && bVar4);
  *param_10 = iVar121 + iVar123 + iVar122 + iVar124;
  return iVar117 + iVar119 + iVar118 + iVar120;
}



// FUNCTION 142731710 FUN_142731710 body=2847 status=ok
// SIG undefined FUN_142731710(void)

int FUN_142731710(short *param_1,longlong param_2,int param_3,int param_4,short *param_5,
                 longlong param_6,undefined2 *param_7,longlong param_8,int param_9,int *param_10)

{
  short *psVar1;
  short *psVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  undefined2 uVar18;
  ushort uVar19;
  short sVar28;
  ushort uVar30;
  short sVar31;
  ushort uVar33;
  short sVar34;
  ushort uVar36;
  short sVar37;
  ushort uVar39;
  short sVar40;
  ushort uVar42;
  short sVar43;
  ushort uVar45;
  short sVar46;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined2 uVar29;
  undefined2 uVar32;
  undefined2 uVar35;
  undefined2 uVar38;
  undefined2 uVar41;
  undefined2 uVar44;
  undefined2 uVar47;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ushort uVar48;
  undefined2 uVar49;
  ushort uVar50;
  undefined2 uVar59;
  undefined2 uVar61;
  undefined2 uVar63;
  undefined2 uVar65;
  undefined2 uVar67;
  undefined2 uVar69;
  undefined2 uVar71;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  ushort uVar60;
  ushort uVar62;
  ushort uVar64;
  ushort uVar66;
  ushort uVar68;
  ushort uVar70;
  ushort uVar72;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  short sVar73;
  undefined2 uVar74;
  short sVar75;
  ushort uVar76;
  short sVar79;
  undefined2 uVar80;
  short sVar81;
  ushort uVar82;
  short sVar83;
  undefined2 uVar84;
  short sVar85;
  ushort uVar86;
  short sVar87;
  undefined2 uVar88;
  short sVar89;
  ushort uVar90;
  short sVar91;
  undefined2 uVar92;
  short sVar93;
  ushort uVar94;
  short sVar95;
  undefined2 uVar96;
  short sVar97;
  ushort uVar98;
  short sVar99;
  undefined2 uVar100;
  short sVar101;
  ushort uVar102;
  short sVar103;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined2 uVar104;
  short sVar105;
  ushort uVar106;
  undefined2 uVar107;
  short sVar108;
  ushort uVar109;
  undefined2 uVar110;
  short sVar111;
  ushort uVar112;
  undefined2 uVar113;
  short sVar114;
  ushort uVar115;
  undefined2 uVar116;
  short sVar117;
  ushort uVar118;
  undefined2 uVar119;
  short sVar120;
  ushort uVar121;
  undefined2 uVar122;
  short sVar123;
  ushort uVar124;
  undefined2 uVar125;
  short sVar126;
  ushort uVar127;
  undefined2 uVar128;
  short sVar129;
  ushort uVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  
  iVar131 = 0;
  iVar132 = 0;
  iVar133 = 0;
  iVar134 = 0;
  iVar135 = 0;
  iVar136 = 0;
  iVar137 = 0;
  iVar138 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      do {
        sVar17 = pavgw(*param_1,*param_7);
        sVar28 = pavgw(param_1[1],param_7[1]);
        sVar31 = pavgw(param_1[2],param_7[2]);
        sVar34 = pavgw(param_1[3],param_7[3]);
        sVar37 = pavgw(param_1[4],param_7[4]);
        sVar40 = pavgw(param_1[5],param_7[5]);
        sVar43 = pavgw(param_1[6],param_7[6]);
        sVar46 = pavgw(param_1[7],param_7[7]);
        sVar73 = pavgw(param_1[8],param_7[8]);
        sVar79 = pavgw(param_1[9],param_7[9]);
        sVar83 = pavgw(param_1[10],param_7[10]);
        sVar87 = pavgw(param_1[0xb],param_7[0xb]);
        sVar91 = pavgw(param_1[0xc],param_7[0xc]);
        sVar95 = pavgw(param_1[0xd],param_7[0xd]);
        sVar99 = pavgw(param_1[0xe],param_7[0xe]);
        sVar103 = pavgw(param_1[0xf],param_7[0xf]);
        auVar77._0_2_ = sVar73 - param_5[8];
        auVar77._2_2_ = sVar79 - param_5[9];
        auVar77._4_2_ = sVar83 - param_5[10];
        auVar77._6_2_ = sVar87 - param_5[0xb];
        auVar77._8_2_ = sVar91 - param_5[0xc];
        auVar77._10_2_ = sVar95 - param_5[0xd];
        auVar77._12_2_ = sVar99 - param_5[0xe];
        auVar77._14_2_ = sVar103 - param_5[0xf];
        auVar20._0_2_ = sVar17 - *param_5;
        auVar20._2_2_ = sVar28 - param_5[1];
        auVar20._4_2_ = sVar31 - param_5[2];
        auVar20._6_2_ = sVar34 - param_5[3];
        auVar20._8_2_ = sVar37 - param_5[4];
        auVar20._10_2_ = sVar40 - param_5[5];
        auVar20._12_2_ = sVar43 - param_5[6];
        auVar20._14_2_ = sVar46 - param_5[7];
        auVar78 = pmaddwd(auVar77,auVar77);
        auVar21 = pmaddwd(auVar20,auVar20);
        sVar17 = auVar77._0_2_ + auVar20._0_2_ + auVar77._8_2_ + auVar20._8_2_;
        sVar28 = auVar77._2_2_ + auVar20._2_2_ + auVar77._10_2_ + auVar20._10_2_;
        sVar31 = auVar77._4_2_ + auVar20._4_2_ + auVar77._12_2_ + auVar20._12_2_;
        sVar34 = auVar77._6_2_ + auVar20._6_2_ + auVar77._14_2_ + auVar20._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
        auVar4._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar4._2_2_ = -(ushort)(sVar28 < 0);
        auVar4._0_2_ = sVar28;
        iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
        iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
        iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
        iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
        iVar132 = iVar132 + auVar4._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        param_7 = param_7 + param_8;
        iVar14 = param_9 + -1;
        bVar3 = 0 < param_9;
        param_9 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    if (param_4 == 8) {
      do {
        psVar1 = param_1 + param_2;
        psVar2 = param_1 + param_2 + 8;
        uVar18 = pavgw(*param_1,*psVar1);
        uVar29 = pavgw(param_1[1],psVar1[1]);
        uVar32 = pavgw(param_1[2],psVar1[2]);
        uVar35 = pavgw(param_1[3],psVar1[3]);
        uVar38 = pavgw(param_1[4],psVar1[4]);
        uVar41 = pavgw(param_1[5],psVar1[5]);
        uVar44 = pavgw(param_1[6],psVar1[6]);
        uVar47 = pavgw(param_1[7],psVar1[7]);
        uVar49 = pavgw(param_1[8],*psVar2);
        uVar59 = pavgw(param_1[9],psVar2[1]);
        uVar61 = pavgw(param_1[10],psVar2[2]);
        uVar63 = pavgw(param_1[0xb],psVar2[3]);
        uVar65 = pavgw(param_1[0xc],psVar2[4]);
        uVar67 = pavgw(param_1[0xd],psVar2[5]);
        uVar69 = pavgw(param_1[0xe],psVar2[6]);
        uVar71 = pavgw(param_1[0xf],psVar2[7]);
        sVar17 = pavgw(uVar18,*param_7);
        sVar28 = pavgw(uVar29,param_7[1]);
        sVar31 = pavgw(uVar32,param_7[2]);
        sVar34 = pavgw(uVar35,param_7[3]);
        sVar37 = pavgw(uVar38,param_7[4]);
        sVar40 = pavgw(uVar41,param_7[5]);
        sVar43 = pavgw(uVar44,param_7[6]);
        sVar46 = pavgw(uVar47,param_7[7]);
        sVar73 = pavgw(uVar49,param_7[8]);
        sVar79 = pavgw(uVar59,param_7[9]);
        sVar83 = pavgw(uVar61,param_7[10]);
        sVar87 = pavgw(uVar63,param_7[0xb]);
        sVar91 = pavgw(uVar65,param_7[0xc]);
        sVar95 = pavgw(uVar67,param_7[0xd]);
        sVar99 = pavgw(uVar69,param_7[0xe]);
        sVar103 = pavgw(uVar71,param_7[0xf]);
        auVar51._0_2_ = sVar73 - param_5[8];
        auVar51._2_2_ = sVar79 - param_5[9];
        auVar51._4_2_ = sVar83 - param_5[10];
        auVar51._6_2_ = sVar87 - param_5[0xb];
        auVar51._8_2_ = sVar91 - param_5[0xc];
        auVar51._10_2_ = sVar95 - param_5[0xd];
        auVar51._12_2_ = sVar99 - param_5[0xe];
        auVar51._14_2_ = sVar103 - param_5[0xf];
        auVar22._0_2_ = sVar17 - *param_5;
        auVar22._2_2_ = sVar28 - param_5[1];
        auVar22._4_2_ = sVar31 - param_5[2];
        auVar22._6_2_ = sVar34 - param_5[3];
        auVar22._8_2_ = sVar37 - param_5[4];
        auVar22._10_2_ = sVar40 - param_5[5];
        auVar22._12_2_ = sVar43 - param_5[6];
        auVar22._14_2_ = sVar46 - param_5[7];
        auVar78 = pmaddwd(auVar51,auVar51);
        auVar21 = pmaddwd(auVar22,auVar22);
        sVar17 = auVar51._0_2_ + auVar22._0_2_ + auVar51._8_2_ + auVar22._8_2_;
        sVar28 = auVar51._2_2_ + auVar22._2_2_ + auVar51._10_2_ + auVar22._10_2_;
        sVar31 = auVar51._4_2_ + auVar22._4_2_ + auVar51._12_2_ + auVar22._12_2_;
        sVar34 = auVar51._6_2_ + auVar22._6_2_ + auVar51._14_2_ + auVar22._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
        auVar5._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar5._2_2_ = -(ushort)(sVar28 < 0);
        auVar5._0_2_ = sVar28;
        iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
        iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
        iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
        iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
        iVar132 = iVar132 + auVar5._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        param_7 = param_7 + param_8;
        iVar14 = param_9 + -1;
        bVar3 = 0 < param_9;
        param_9 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    uVar15 = param_4 << 5;
    do {
      psVar1 = param_1 + param_2;
      psVar2 = param_1 + param_2 + 8;
      sVar17 = pavgw((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                             *psVar1 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4,*param_7);
      sVar28 = pavgw((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                             psVar1[1] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4,param_7[1]);
      sVar31 = pavgw((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                             psVar1[2] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4,param_7[2]);
      sVar34 = pavgw((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                             psVar1[3] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4,param_7[3]);
      sVar37 = pavgw((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                             psVar1[4] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4,param_7[4]);
      sVar40 = pavgw((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                             psVar1[5] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4,param_7[5]);
      sVar43 = pavgw((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                             psVar1[6] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4,param_7[6]);
      sVar46 = pavgw((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                             psVar1[7] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4,param_7[7]);
      sVar73 = pavgw((ushort)(param_1[8] * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                             *psVar2 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4,param_7[8]);
      sVar79 = pavgw((ushort)(param_1[9] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                             psVar2[1] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4,param_7[9]);
      sVar83 = pavgw((ushort)(param_1[10] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                             psVar2[2] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4,param_7[10]);
      sVar87 = pavgw((ushort)(param_1[0xb] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                             psVar2[3] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4,param_7[0xb]);
      sVar91 = pavgw((ushort)(param_1[0xc] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                             psVar2[4] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4,param_7[0xc]);
      sVar95 = pavgw((ushort)(param_1[0xd] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                             psVar2[5] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4,param_7[0xd]);
      sVar99 = pavgw((ushort)(param_1[0xe] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                             psVar2[6] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4,param_7[0xe]);
      sVar103 = pavgw((ushort)(param_1[0xf] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                              psVar2[7] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4,param_7[0xf]);
      auVar52._0_2_ = sVar73 - param_5[8];
      auVar52._2_2_ = sVar79 - param_5[9];
      auVar52._4_2_ = sVar83 - param_5[10];
      auVar52._6_2_ = sVar87 - param_5[0xb];
      auVar52._8_2_ = sVar91 - param_5[0xc];
      auVar52._10_2_ = sVar95 - param_5[0xd];
      auVar52._12_2_ = sVar99 - param_5[0xe];
      auVar52._14_2_ = sVar103 - param_5[0xf];
      auVar23._0_2_ = sVar17 - *param_5;
      auVar23._2_2_ = sVar28 - param_5[1];
      auVar23._4_2_ = sVar31 - param_5[2];
      auVar23._6_2_ = sVar34 - param_5[3];
      auVar23._8_2_ = sVar37 - param_5[4];
      auVar23._10_2_ = sVar40 - param_5[5];
      auVar23._12_2_ = sVar43 - param_5[6];
      auVar23._14_2_ = sVar46 - param_5[7];
      auVar78 = pmaddwd(auVar52,auVar52);
      auVar21 = pmaddwd(auVar23,auVar23);
      sVar17 = auVar52._0_2_ + auVar23._0_2_ + auVar52._8_2_ + auVar23._8_2_;
      sVar28 = auVar52._2_2_ + auVar23._2_2_ + auVar52._10_2_ + auVar23._10_2_;
      sVar31 = auVar52._4_2_ + auVar23._4_2_ + auVar52._12_2_ + auVar23._12_2_;
      sVar34 = auVar52._6_2_ + auVar23._6_2_ + auVar52._14_2_ + auVar23._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
      auVar6._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar6._2_2_ = -(ushort)(sVar28 < 0);
      auVar6._0_2_ = sVar28;
      iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
      iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
      iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
      iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
      iVar132 = iVar132 + auVar6._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      param_7 = param_7 + param_8;
      iVar14 = param_9 + -1;
      bVar3 = 0 < param_9;
      param_9 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  if (param_3 != 8) {
    if (param_4 == 0) {
      uVar15 = param_3 << 5;
      do {
        sVar17 = pavgw((ushort)(*param_1 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                               param_1[1] * *(short *)(&DAT_149df7a10 + uVar15)) >> 4,*param_7);
        sVar28 = pavgw((ushort)(param_1[1] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                               param_1[2] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4,param_7[1]);
        sVar31 = pavgw((ushort)(param_1[2] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                               param_1[3] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4,param_7[2]);
        sVar34 = pavgw((ushort)(param_1[3] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                               param_1[4] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4,param_7[3]);
        sVar37 = pavgw((ushort)(param_1[4] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                               param_1[5] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4,param_7[4]);
        sVar40 = pavgw((ushort)(param_1[5] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                               param_1[6] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4,param_7[5]);
        sVar43 = pavgw((ushort)(param_1[6] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                               param_1[7] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4,param_7[6]);
        sVar46 = pavgw((ushort)(param_1[7] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                               param_1[8] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4,param_7[7]);
        sVar73 = pavgw((ushort)(param_1[8] * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                               param_1[9] * *(short *)(&DAT_149df7a10 + uVar15)) >> 4,param_7[8]);
        sVar79 = pavgw((ushort)(param_1[9] * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                               param_1[10] * *(short *)(&UNK_149df7a12 + uVar15)) >> 4,param_7[9]);
        sVar83 = pavgw((ushort)(param_1[10] * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                               param_1[0xb] * *(short *)(&UNK_149df7a14 + uVar15)) >> 4,param_7[10])
        ;
        sVar87 = pavgw((ushort)(param_1[0xb] * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                               param_1[0xc] * *(short *)(&UNK_149df7a16 + uVar15)) >> 4,param_7[0xb]
                      );
        sVar91 = pavgw((ushort)(param_1[0xc] * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                               param_1[0xd] * *(short *)(&UNK_149df7a18 + uVar15)) >> 4,param_7[0xc]
                      );
        sVar95 = pavgw((ushort)(param_1[0xd] * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                               param_1[0xe] * *(short *)(&UNK_149df7a1a + uVar15)) >> 4,param_7[0xd]
                      );
        sVar99 = pavgw((ushort)(param_1[0xe] * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                               param_1[0xf] * *(short *)(&UNK_149df7a1c + uVar15)) >> 4,param_7[0xe]
                      );
        sVar103 = pavgw((ushort)(param_1[0xf] * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                                param_1[0x10] * *(short *)(&UNK_149df7a1e + uVar15)) >> 4,
                        param_7[0xf]);
        auVar56._0_2_ = sVar73 - param_5[8];
        auVar56._2_2_ = sVar79 - param_5[9];
        auVar56._4_2_ = sVar83 - param_5[10];
        auVar56._6_2_ = sVar87 - param_5[0xb];
        auVar56._8_2_ = sVar91 - param_5[0xc];
        auVar56._10_2_ = sVar95 - param_5[0xd];
        auVar56._12_2_ = sVar99 - param_5[0xe];
        auVar56._14_2_ = sVar103 - param_5[0xf];
        auVar27._0_2_ = sVar17 - *param_5;
        auVar27._2_2_ = sVar28 - param_5[1];
        auVar27._4_2_ = sVar31 - param_5[2];
        auVar27._6_2_ = sVar34 - param_5[3];
        auVar27._8_2_ = sVar37 - param_5[4];
        auVar27._10_2_ = sVar40 - param_5[5];
        auVar27._12_2_ = sVar43 - param_5[6];
        auVar27._14_2_ = sVar46 - param_5[7];
        auVar78 = pmaddwd(auVar56,auVar56);
        auVar21 = pmaddwd(auVar27,auVar27);
        sVar17 = auVar56._0_2_ + auVar27._0_2_ + auVar56._8_2_ + auVar27._8_2_;
        sVar28 = auVar56._2_2_ + auVar27._2_2_ + auVar56._10_2_ + auVar27._10_2_;
        sVar31 = auVar56._4_2_ + auVar27._4_2_ + auVar56._12_2_ + auVar27._12_2_;
        sVar34 = auVar56._6_2_ + auVar27._6_2_ + auVar56._14_2_ + auVar27._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
        auVar10._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar10._2_2_ = -(ushort)(sVar28 < 0);
        auVar10._0_2_ = sVar28;
        iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
        iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
        iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
        iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
        iVar132 = iVar132 + auVar10._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_1 = param_1 + param_2;
        param_5 = param_5 + param_6;
        param_7 = param_7 + param_8;
        iVar14 = param_9 + -1;
        bVar3 = 0 < param_9;
        param_9 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    if (param_4 == 8) {
      uVar15 = param_3 << 5;
      sVar17 = *(short *)(&DAT_149df7a00 + uVar15);
      sVar28 = *(short *)(&UNK_149df7a02 + uVar15);
      sVar31 = *(short *)(&UNK_149df7a04 + uVar15);
      sVar34 = *(short *)(&UNK_149df7a06 + uVar15);
      sVar37 = *(short *)(&UNK_149df7a08 + uVar15);
      sVar40 = *(short *)(&UNK_149df7a0a + uVar15);
      sVar43 = *(short *)(&UNK_149df7a0c + uVar15);
      sVar46 = *(short *)(&UNK_149df7a0e + uVar15);
      sVar73 = *(short *)(&DAT_149df7a10 + uVar15);
      sVar79 = *(short *)(&UNK_149df7a12 + uVar15);
      sVar83 = *(short *)(&UNK_149df7a14 + uVar15);
      sVar87 = *(short *)(&UNK_149df7a16 + uVar15);
      sVar91 = *(short *)(&UNK_149df7a18 + uVar15);
      sVar95 = *(short *)(&UNK_149df7a1a + uVar15);
      sVar99 = *(short *)(&UNK_149df7a1c + uVar15);
      sVar103 = *(short *)(&UNK_149df7a1e + uVar15);
      uVar19 = (ushort)(*param_1 * sVar17 + 8 + param_1[1] * sVar73) >> 4;
      uVar30 = (ushort)(param_1[1] * sVar28 + 8 + param_1[2] * sVar79) >> 4;
      uVar33 = (ushort)(param_1[2] * sVar31 + 8 + param_1[3] * sVar83) >> 4;
      uVar36 = (ushort)(param_1[3] * sVar34 + 8 + param_1[4] * sVar87) >> 4;
      uVar39 = (ushort)(param_1[4] * sVar37 + 8 + param_1[5] * sVar91) >> 4;
      uVar42 = (ushort)(param_1[5] * sVar40 + 8 + param_1[6] * sVar95) >> 4;
      uVar45 = (ushort)(param_1[6] * sVar43 + 8 + param_1[7] * sVar99) >> 4;
      uVar48 = (ushort)(param_1[7] * sVar46 + 8 + param_1[8] * sVar103) >> 4;
      uVar50 = (ushort)(param_1[8] * sVar17 + 8 + param_1[9] * sVar73) >> 4;
      uVar60 = (ushort)(param_1[9] * sVar28 + 8 + param_1[10] * sVar79) >> 4;
      uVar62 = (ushort)(param_1[10] * sVar31 + 8 + param_1[0xb] * sVar83) >> 4;
      uVar64 = (ushort)(param_1[0xb] * sVar34 + 8 + param_1[0xc] * sVar87) >> 4;
      uVar66 = (ushort)(param_1[0xc] * sVar37 + 8 + param_1[0xd] * sVar91) >> 4;
      uVar68 = (ushort)(param_1[0xd] * sVar40 + 8 + param_1[0xe] * sVar95) >> 4;
      uVar70 = (ushort)(param_1[0xe] * sVar43 + 8 + param_1[0xf] * sVar99) >> 4;
      uVar72 = (ushort)(param_1[0xf] * sVar46 + 8 + param_1[0x10] * sVar103) >> 4;
      do {
        param_1 = param_1 + param_2;
        uVar76 = (ushort)(*param_1 * sVar17 + 8 + param_1[1] * sVar73) >> 4;
        uVar82 = (ushort)(param_1[1] * sVar28 + 8 + param_1[2] * sVar79) >> 4;
        uVar86 = (ushort)(param_1[2] * sVar31 + 8 + param_1[3] * sVar83) >> 4;
        uVar90 = (ushort)(param_1[3] * sVar34 + 8 + param_1[4] * sVar87) >> 4;
        uVar94 = (ushort)(param_1[4] * sVar37 + 8 + param_1[5] * sVar91) >> 4;
        uVar98 = (ushort)(param_1[5] * sVar40 + 8 + param_1[6] * sVar95) >> 4;
        uVar102 = (ushort)(param_1[6] * sVar43 + 8 + param_1[7] * sVar99) >> 4;
        uVar106 = (ushort)(param_1[7] * sVar46 + 8 + param_1[8] * sVar103) >> 4;
        uVar109 = (ushort)(param_1[8] * sVar17 + 8 + param_1[9] * sVar73) >> 4;
        uVar112 = (ushort)(param_1[9] * sVar28 + 8 + param_1[10] * sVar79) >> 4;
        uVar115 = (ushort)(param_1[10] * sVar31 + 8 + param_1[0xb] * sVar83) >> 4;
        uVar118 = (ushort)(param_1[0xb] * sVar34 + 8 + param_1[0xc] * sVar87) >> 4;
        uVar121 = (ushort)(param_1[0xc] * sVar37 + 8 + param_1[0xd] * sVar91) >> 4;
        uVar124 = (ushort)(param_1[0xd] * sVar40 + 8 + param_1[0xe] * sVar95) >> 4;
        uVar127 = (ushort)(param_1[0xe] * sVar43 + 8 + param_1[0xf] * sVar99) >> 4;
        uVar130 = (ushort)(param_1[0xf] * sVar46 + 8 + param_1[0x10] * sVar103) >> 4;
        uVar18 = pavgw(uVar19,uVar76);
        uVar29 = pavgw(uVar30,uVar82);
        uVar32 = pavgw(uVar33,uVar86);
        uVar35 = pavgw(uVar36,uVar90);
        uVar38 = pavgw(uVar39,uVar94);
        uVar41 = pavgw(uVar42,uVar98);
        uVar44 = pavgw(uVar45,uVar102);
        uVar47 = pavgw(uVar48,uVar106);
        uVar49 = pavgw(uVar50,uVar109);
        uVar59 = pavgw(uVar60,uVar112);
        uVar61 = pavgw(uVar62,uVar115);
        uVar63 = pavgw(uVar64,uVar118);
        uVar65 = pavgw(uVar66,uVar121);
        uVar67 = pavgw(uVar68,uVar124);
        uVar69 = pavgw(uVar70,uVar127);
        uVar71 = pavgw(uVar72,uVar130);
        sVar75 = pavgw(uVar18,*param_7);
        sVar81 = pavgw(uVar29,param_7[1]);
        sVar85 = pavgw(uVar32,param_7[2]);
        sVar89 = pavgw(uVar35,param_7[3]);
        sVar93 = pavgw(uVar38,param_7[4]);
        sVar97 = pavgw(uVar41,param_7[5]);
        sVar101 = pavgw(uVar44,param_7[6]);
        sVar105 = pavgw(uVar47,param_7[7]);
        sVar108 = pavgw(uVar49,param_7[8]);
        sVar111 = pavgw(uVar59,param_7[9]);
        sVar114 = pavgw(uVar61,param_7[10]);
        sVar117 = pavgw(uVar63,param_7[0xb]);
        sVar120 = pavgw(uVar65,param_7[0xc]);
        sVar123 = pavgw(uVar67,param_7[0xd]);
        sVar126 = pavgw(uVar69,param_7[0xe]);
        sVar129 = pavgw(uVar71,param_7[0xf]);
        auVar58._0_2_ = sVar108 - param_5[8];
        auVar58._2_2_ = sVar111 - param_5[9];
        auVar58._4_2_ = sVar114 - param_5[10];
        auVar58._6_2_ = sVar117 - param_5[0xb];
        auVar58._8_2_ = sVar120 - param_5[0xc];
        auVar58._10_2_ = sVar123 - param_5[0xd];
        auVar58._12_2_ = sVar126 - param_5[0xe];
        auVar58._14_2_ = sVar129 - param_5[0xf];
        auVar78._0_2_ = sVar75 - *param_5;
        auVar78._2_2_ = sVar81 - param_5[1];
        auVar78._4_2_ = sVar85 - param_5[2];
        auVar78._6_2_ = sVar89 - param_5[3];
        auVar78._8_2_ = sVar93 - param_5[4];
        auVar78._10_2_ = sVar97 - param_5[5];
        auVar78._12_2_ = sVar101 - param_5[6];
        auVar78._14_2_ = sVar105 - param_5[7];
        auVar57 = pmaddwd(auVar58,auVar58);
        auVar21 = pmaddwd(auVar78,auVar78);
        sVar75 = auVar58._0_2_ + auVar78._0_2_ + auVar58._8_2_ + auVar78._8_2_;
        sVar81 = auVar58._2_2_ + auVar78._2_2_ + auVar58._10_2_ + auVar78._10_2_;
        sVar85 = auVar58._4_2_ + auVar78._4_2_ + auVar58._12_2_ + auVar78._12_2_;
        sVar89 = auVar58._6_2_ + auVar78._6_2_ + auVar58._14_2_ + auVar78._14_2_;
        iVar14 = CONCAT22(-(ushort)(sVar89 < 0),sVar89);
        Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar85 < 0)),CONCAT22(sVar85,sVar89));
        auVar11._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
        auVar11._2_2_ = -(ushort)(sVar81 < 0);
        auVar11._0_2_ = sVar81;
        iVar135 = iVar135 + auVar57._0_4_ + auVar21._0_4_;
        iVar136 = iVar136 + auVar57._4_4_ + auVar21._4_4_;
        iVar137 = iVar137 + auVar57._8_4_ + auVar21._8_4_;
        iVar138 = iVar138 + auVar57._12_4_ + auVar21._12_4_;
        iVar131 = iVar131 + CONCAT22(-(ushort)(sVar75 < 0),sVar75);
        iVar132 = iVar132 + auVar11._0_4_;
        iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
        iVar134 = iVar134 + iVar14;
        param_5 = param_5 + param_6;
        param_7 = param_7 + param_8;
        iVar14 = param_9 + -1;
        bVar3 = 0 < param_9;
        uVar19 = uVar76;
        uVar30 = uVar82;
        uVar33 = uVar86;
        uVar36 = uVar90;
        uVar39 = uVar94;
        uVar42 = uVar98;
        uVar45 = uVar102;
        uVar48 = uVar106;
        uVar50 = uVar109;
        uVar60 = uVar112;
        uVar62 = uVar115;
        uVar64 = uVar118;
        uVar66 = uVar121;
        uVar68 = uVar124;
        uVar70 = uVar127;
        uVar72 = uVar130;
        param_9 = iVar14;
      } while (iVar14 != 0 && bVar3);
      *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
      return iVar131 + iVar133 + iVar132 + iVar134;
    }
    uVar15 = param_3 << 5;
    uVar16 = param_4 << 5;
    sVar17 = *(short *)(&DAT_149df7a00 + uVar15);
    sVar28 = *(short *)(&UNK_149df7a02 + uVar15);
    sVar31 = *(short *)(&UNK_149df7a04 + uVar15);
    sVar34 = *(short *)(&UNK_149df7a06 + uVar15);
    sVar37 = *(short *)(&UNK_149df7a08 + uVar15);
    sVar40 = *(short *)(&UNK_149df7a0a + uVar15);
    sVar43 = *(short *)(&UNK_149df7a0c + uVar15);
    sVar46 = *(short *)(&UNK_149df7a0e + uVar15);
    sVar73 = *(short *)(&DAT_149df7a10 + uVar15);
    sVar79 = *(short *)(&UNK_149df7a12 + uVar15);
    sVar83 = *(short *)(&UNK_149df7a14 + uVar15);
    sVar87 = *(short *)(&UNK_149df7a16 + uVar15);
    sVar91 = *(short *)(&UNK_149df7a18 + uVar15);
    sVar95 = *(short *)(&UNK_149df7a1a + uVar15);
    sVar99 = *(short *)(&UNK_149df7a1c + uVar15);
    sVar103 = *(short *)(&UNK_149df7a1e + uVar15);
    uVar19 = (ushort)(*param_1 * sVar17 + 8 + param_1[1] * sVar73) >> 4;
    uVar30 = (ushort)(param_1[1] * sVar28 + 8 + param_1[2] * sVar79) >> 4;
    uVar33 = (ushort)(param_1[2] * sVar31 + 8 + param_1[3] * sVar83) >> 4;
    uVar36 = (ushort)(param_1[3] * sVar34 + 8 + param_1[4] * sVar87) >> 4;
    uVar39 = (ushort)(param_1[4] * sVar37 + 8 + param_1[5] * sVar91) >> 4;
    uVar42 = (ushort)(param_1[5] * sVar40 + 8 + param_1[6] * sVar95) >> 4;
    uVar45 = (ushort)(param_1[6] * sVar43 + 8 + param_1[7] * sVar99) >> 4;
    uVar48 = (ushort)(param_1[7] * sVar46 + 8 + param_1[8] * sVar103) >> 4;
    uVar50 = (ushort)(param_1[8] * sVar17 + 8 + param_1[9] * sVar73) >> 4;
    uVar60 = (ushort)(param_1[9] * sVar28 + 8 + param_1[10] * sVar79) >> 4;
    uVar62 = (ushort)(param_1[10] * sVar31 + 8 + param_1[0xb] * sVar83) >> 4;
    uVar64 = (ushort)(param_1[0xb] * sVar34 + 8 + param_1[0xc] * sVar87) >> 4;
    uVar66 = (ushort)(param_1[0xc] * sVar37 + 8 + param_1[0xd] * sVar91) >> 4;
    uVar68 = (ushort)(param_1[0xd] * sVar40 + 8 + param_1[0xe] * sVar95) >> 4;
    uVar70 = (ushort)(param_1[0xe] * sVar43 + 8 + param_1[0xf] * sVar99) >> 4;
    uVar72 = (ushort)(param_1[0xf] * sVar46 + 8 + param_1[0x10] * sVar103) >> 4;
    do {
      param_1 = param_1 + param_2;
      uVar76 = (ushort)(*param_1 * sVar17 + 8 + param_1[1] * sVar73) >> 4;
      uVar82 = (ushort)(param_1[1] * sVar28 + 8 + param_1[2] * sVar79) >> 4;
      uVar86 = (ushort)(param_1[2] * sVar31 + 8 + param_1[3] * sVar83) >> 4;
      uVar90 = (ushort)(param_1[3] * sVar34 + 8 + param_1[4] * sVar87) >> 4;
      uVar94 = (ushort)(param_1[4] * sVar37 + 8 + param_1[5] * sVar91) >> 4;
      uVar98 = (ushort)(param_1[5] * sVar40 + 8 + param_1[6] * sVar95) >> 4;
      uVar102 = (ushort)(param_1[6] * sVar43 + 8 + param_1[7] * sVar99) >> 4;
      uVar106 = (ushort)(param_1[7] * sVar46 + 8 + param_1[8] * sVar103) >> 4;
      uVar109 = (ushort)(param_1[8] * sVar17 + 8 + param_1[9] * sVar73) >> 4;
      uVar112 = (ushort)(param_1[9] * sVar28 + 8 + param_1[10] * sVar79) >> 4;
      uVar115 = (ushort)(param_1[10] * sVar31 + 8 + param_1[0xb] * sVar83) >> 4;
      uVar118 = (ushort)(param_1[0xb] * sVar34 + 8 + param_1[0xc] * sVar87) >> 4;
      uVar121 = (ushort)(param_1[0xc] * sVar37 + 8 + param_1[0xd] * sVar91) >> 4;
      uVar124 = (ushort)(param_1[0xd] * sVar40 + 8 + param_1[0xe] * sVar95) >> 4;
      uVar127 = (ushort)(param_1[0xe] * sVar43 + 8 + param_1[0xf] * sVar99) >> 4;
      uVar130 = (ushort)(param_1[0xf] * sVar46 + 8 + param_1[0x10] * sVar103) >> 4;
      sVar75 = pavgw((ushort)(uVar19 * *(short *)(&DAT_149df7a00 + uVar16) + 8 +
                             uVar76 * *(short *)(&DAT_149df7a10 + uVar16)) >> 4,*param_7);
      sVar81 = pavgw((ushort)(uVar30 * *(short *)(&UNK_149df7a02 + uVar16) + 8 +
                             uVar82 * *(short *)(&UNK_149df7a12 + uVar16)) >> 4,param_7[1]);
      sVar85 = pavgw((ushort)(uVar33 * *(short *)(&UNK_149df7a04 + uVar16) + 8 +
                             uVar86 * *(short *)(&UNK_149df7a14 + uVar16)) >> 4,param_7[2]);
      sVar89 = pavgw((ushort)(uVar36 * *(short *)(&UNK_149df7a06 + uVar16) + 8 +
                             uVar90 * *(short *)(&UNK_149df7a16 + uVar16)) >> 4,param_7[3]);
      sVar93 = pavgw((ushort)(uVar39 * *(short *)(&UNK_149df7a08 + uVar16) + 8 +
                             uVar94 * *(short *)(&UNK_149df7a18 + uVar16)) >> 4,param_7[4]);
      sVar97 = pavgw((ushort)(uVar42 * *(short *)(&UNK_149df7a0a + uVar16) + 8 +
                             uVar98 * *(short *)(&UNK_149df7a1a + uVar16)) >> 4,param_7[5]);
      sVar101 = pavgw((ushort)(uVar45 * *(short *)(&UNK_149df7a0c + uVar16) + 8 +
                              uVar102 * *(short *)(&UNK_149df7a1c + uVar16)) >> 4,param_7[6]);
      sVar105 = pavgw((ushort)(uVar48 * *(short *)(&UNK_149df7a0e + uVar16) + 8 +
                              uVar106 * *(short *)(&UNK_149df7a1e + uVar16)) >> 4,param_7[7]);
      sVar108 = pavgw((ushort)(uVar50 * *(short *)(&DAT_149df7a00 + uVar16) + 8 +
                              uVar109 * *(short *)(&DAT_149df7a10 + uVar16)) >> 4,param_7[8]);
      sVar111 = pavgw((ushort)(uVar60 * *(short *)(&UNK_149df7a02 + uVar16) + 8 +
                              uVar112 * *(short *)(&UNK_149df7a12 + uVar16)) >> 4,param_7[9]);
      sVar114 = pavgw((ushort)(uVar62 * *(short *)(&UNK_149df7a04 + uVar16) + 8 +
                              uVar115 * *(short *)(&UNK_149df7a14 + uVar16)) >> 4,param_7[10]);
      sVar117 = pavgw((ushort)(uVar64 * *(short *)(&UNK_149df7a06 + uVar16) + 8 +
                              uVar118 * *(short *)(&UNK_149df7a16 + uVar16)) >> 4,param_7[0xb]);
      sVar120 = pavgw((ushort)(uVar66 * *(short *)(&UNK_149df7a08 + uVar16) + 8 +
                              uVar121 * *(short *)(&UNK_149df7a18 + uVar16)) >> 4,param_7[0xc]);
      sVar123 = pavgw((ushort)(uVar68 * *(short *)(&UNK_149df7a0a + uVar16) + 8 +
                              uVar124 * *(short *)(&UNK_149df7a1a + uVar16)) >> 4,param_7[0xd]);
      sVar126 = pavgw((ushort)(uVar70 * *(short *)(&UNK_149df7a0c + uVar16) + 8 +
                              uVar127 * *(short *)(&UNK_149df7a1c + uVar16)) >> 4,param_7[0xe]);
      sVar129 = pavgw((ushort)(uVar72 * *(short *)(&UNK_149df7a0e + uVar16) + 8 +
                              uVar130 * *(short *)(&UNK_149df7a1e + uVar16)) >> 4,param_7[0xf]);
      auVar57._0_2_ = sVar108 - param_5[8];
      auVar57._2_2_ = sVar111 - param_5[9];
      auVar57._4_2_ = sVar114 - param_5[10];
      auVar57._6_2_ = sVar117 - param_5[0xb];
      auVar57._8_2_ = sVar120 - param_5[0xc];
      auVar57._10_2_ = sVar123 - param_5[0xd];
      auVar57._12_2_ = sVar126 - param_5[0xe];
      auVar57._14_2_ = sVar129 - param_5[0xf];
      auVar21._0_2_ = sVar75 - *param_5;
      auVar21._2_2_ = sVar81 - param_5[1];
      auVar21._4_2_ = sVar85 - param_5[2];
      auVar21._6_2_ = sVar89 - param_5[3];
      auVar21._8_2_ = sVar93 - param_5[4];
      auVar21._10_2_ = sVar97 - param_5[5];
      auVar21._12_2_ = sVar101 - param_5[6];
      auVar21._14_2_ = sVar105 - param_5[7];
      auVar58 = pmaddwd(auVar57,auVar57);
      auVar78 = pmaddwd(auVar21,auVar21);
      sVar75 = auVar57._0_2_ + auVar21._0_2_ + auVar57._8_2_ + auVar21._8_2_;
      sVar81 = auVar57._2_2_ + auVar21._2_2_ + auVar57._10_2_ + auVar21._10_2_;
      sVar85 = auVar57._4_2_ + auVar21._4_2_ + auVar57._12_2_ + auVar21._12_2_;
      sVar89 = auVar57._6_2_ + auVar21._6_2_ + auVar57._14_2_ + auVar21._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar89 < 0),sVar89);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar85 < 0)),CONCAT22(sVar85,sVar89));
      auVar12._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar12._2_2_ = -(ushort)(sVar81 < 0);
      auVar12._0_2_ = sVar81;
      iVar135 = iVar135 + auVar58._0_4_ + auVar78._0_4_;
      iVar136 = iVar136 + auVar58._4_4_ + auVar78._4_4_;
      iVar137 = iVar137 + auVar58._8_4_ + auVar78._8_4_;
      iVar138 = iVar138 + auVar58._12_4_ + auVar78._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar75 < 0),sVar75);
      iVar132 = iVar132 + auVar12._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_5 = param_5 + param_6;
      param_7 = param_7 + param_8;
      iVar14 = param_9 + -1;
      bVar3 = 0 < param_9;
      uVar19 = uVar76;
      uVar30 = uVar82;
      uVar33 = uVar86;
      uVar36 = uVar90;
      uVar39 = uVar94;
      uVar42 = uVar98;
      uVar45 = uVar102;
      uVar48 = uVar106;
      uVar50 = uVar109;
      uVar60 = uVar112;
      uVar62 = uVar115;
      uVar64 = uVar118;
      uVar66 = uVar121;
      uVar68 = uVar124;
      uVar70 = uVar127;
      uVar72 = uVar130;
      param_9 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  if (param_4 == 0) {
    do {
      uVar18 = pavgw(*param_1,param_1[1]);
      uVar29 = pavgw(param_1[1],param_1[2]);
      uVar32 = pavgw(param_1[2],param_1[3]);
      uVar35 = pavgw(param_1[3],param_1[4]);
      uVar38 = pavgw(param_1[4],param_1[5]);
      uVar41 = pavgw(param_1[5],param_1[6]);
      uVar44 = pavgw(param_1[6],param_1[7]);
      uVar47 = pavgw(param_1[7],param_1[8]);
      uVar49 = pavgw(param_1[8],param_1[9]);
      uVar59 = pavgw(param_1[9],param_1[10]);
      uVar61 = pavgw(param_1[10],param_1[0xb]);
      uVar63 = pavgw(param_1[0xb],param_1[0xc]);
      uVar65 = pavgw(param_1[0xc],param_1[0xd]);
      uVar67 = pavgw(param_1[0xd],param_1[0xe]);
      uVar69 = pavgw(param_1[0xe],param_1[0xf]);
      uVar71 = pavgw(param_1[0xf],param_1[0x10]);
      sVar17 = pavgw(uVar18,*param_7);
      sVar28 = pavgw(uVar29,param_7[1]);
      sVar31 = pavgw(uVar32,param_7[2]);
      sVar34 = pavgw(uVar35,param_7[3]);
      sVar37 = pavgw(uVar38,param_7[4]);
      sVar40 = pavgw(uVar41,param_7[5]);
      sVar43 = pavgw(uVar44,param_7[6]);
      sVar46 = pavgw(uVar47,param_7[7]);
      sVar73 = pavgw(uVar49,param_7[8]);
      sVar79 = pavgw(uVar59,param_7[9]);
      sVar83 = pavgw(uVar61,param_7[10]);
      sVar87 = pavgw(uVar63,param_7[0xb]);
      sVar91 = pavgw(uVar65,param_7[0xc]);
      sVar95 = pavgw(uVar67,param_7[0xd]);
      sVar99 = pavgw(uVar69,param_7[0xe]);
      sVar103 = pavgw(uVar71,param_7[0xf]);
      auVar53._0_2_ = sVar73 - param_5[8];
      auVar53._2_2_ = sVar79 - param_5[9];
      auVar53._4_2_ = sVar83 - param_5[10];
      auVar53._6_2_ = sVar87 - param_5[0xb];
      auVar53._8_2_ = sVar91 - param_5[0xc];
      auVar53._10_2_ = sVar95 - param_5[0xd];
      auVar53._12_2_ = sVar99 - param_5[0xe];
      auVar53._14_2_ = sVar103 - param_5[0xf];
      auVar24._0_2_ = sVar17 - *param_5;
      auVar24._2_2_ = sVar28 - param_5[1];
      auVar24._4_2_ = sVar31 - param_5[2];
      auVar24._6_2_ = sVar34 - param_5[3];
      auVar24._8_2_ = sVar37 - param_5[4];
      auVar24._10_2_ = sVar40 - param_5[5];
      auVar24._12_2_ = sVar43 - param_5[6];
      auVar24._14_2_ = sVar46 - param_5[7];
      auVar78 = pmaddwd(auVar53,auVar53);
      auVar21 = pmaddwd(auVar24,auVar24);
      sVar17 = auVar53._0_2_ + auVar24._0_2_ + auVar53._8_2_ + auVar24._8_2_;
      sVar28 = auVar53._2_2_ + auVar24._2_2_ + auVar53._10_2_ + auVar24._10_2_;
      sVar31 = auVar53._4_2_ + auVar24._4_2_ + auVar53._12_2_ + auVar24._12_2_;
      sVar34 = auVar53._6_2_ + auVar24._6_2_ + auVar53._14_2_ + auVar24._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
      auVar7._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar7._2_2_ = -(ushort)(sVar28 < 0);
      auVar7._0_2_ = sVar28;
      iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
      iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
      iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
      iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
      iVar132 = iVar132 + auVar7._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_1 = param_1 + param_2;
      param_5 = param_5 + param_6;
      param_7 = param_7 + param_8;
      iVar14 = param_9 + -1;
      bVar3 = 0 < param_9;
      param_9 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  if (param_4 == 8) {
    uVar18 = pavgw(*param_1,param_1[1]);
    uVar29 = pavgw(param_1[1],param_1[2]);
    uVar32 = pavgw(param_1[2],param_1[3]);
    uVar35 = pavgw(param_1[3],param_1[4]);
    uVar38 = pavgw(param_1[4],param_1[5]);
    uVar41 = pavgw(param_1[5],param_1[6]);
    uVar44 = pavgw(param_1[6],param_1[7]);
    uVar47 = pavgw(param_1[7],param_1[8]);
    uVar49 = pavgw(param_1[8],param_1[9]);
    uVar59 = pavgw(param_1[9],param_1[10]);
    uVar61 = pavgw(param_1[10],param_1[0xb]);
    uVar63 = pavgw(param_1[0xb],param_1[0xc]);
    uVar65 = pavgw(param_1[0xc],param_1[0xd]);
    uVar67 = pavgw(param_1[0xd],param_1[0xe]);
    uVar69 = pavgw(param_1[0xe],param_1[0xf]);
    uVar71 = pavgw(param_1[0xf],param_1[0x10]);
    do {
      param_1 = param_1 + param_2;
      uVar74 = pavgw(*param_1,param_1[1]);
      uVar80 = pavgw(param_1[1],param_1[2]);
      uVar84 = pavgw(param_1[2],param_1[3]);
      uVar88 = pavgw(param_1[3],param_1[4]);
      uVar92 = pavgw(param_1[4],param_1[5]);
      uVar96 = pavgw(param_1[5],param_1[6]);
      uVar100 = pavgw(param_1[6],param_1[7]);
      uVar104 = pavgw(param_1[7],param_1[8]);
      uVar107 = pavgw(param_1[8],param_1[9]);
      uVar110 = pavgw(param_1[9],param_1[10]);
      uVar113 = pavgw(param_1[10],param_1[0xb]);
      uVar116 = pavgw(param_1[0xb],param_1[0xc]);
      uVar119 = pavgw(param_1[0xc],param_1[0xd]);
      uVar122 = pavgw(param_1[0xd],param_1[0xe]);
      uVar125 = pavgw(param_1[0xe],param_1[0xf]);
      uVar128 = pavgw(param_1[0xf],param_1[0x10]);
      uVar18 = pavgw(uVar18,uVar74);
      uVar29 = pavgw(uVar29,uVar80);
      uVar32 = pavgw(uVar32,uVar84);
      uVar35 = pavgw(uVar35,uVar88);
      uVar38 = pavgw(uVar38,uVar92);
      uVar41 = pavgw(uVar41,uVar96);
      uVar44 = pavgw(uVar44,uVar100);
      uVar47 = pavgw(uVar47,uVar104);
      uVar49 = pavgw(uVar49,uVar107);
      uVar59 = pavgw(uVar59,uVar110);
      uVar61 = pavgw(uVar61,uVar113);
      uVar63 = pavgw(uVar63,uVar116);
      uVar65 = pavgw(uVar65,uVar119);
      uVar67 = pavgw(uVar67,uVar122);
      uVar69 = pavgw(uVar69,uVar125);
      uVar71 = pavgw(uVar71,uVar128);
      sVar17 = pavgw(uVar18,*param_7);
      sVar28 = pavgw(uVar29,param_7[1]);
      sVar31 = pavgw(uVar32,param_7[2]);
      sVar34 = pavgw(uVar35,param_7[3]);
      sVar37 = pavgw(uVar38,param_7[4]);
      sVar40 = pavgw(uVar41,param_7[5]);
      sVar43 = pavgw(uVar44,param_7[6]);
      sVar46 = pavgw(uVar47,param_7[7]);
      sVar73 = pavgw(uVar49,param_7[8]);
      sVar79 = pavgw(uVar59,param_7[9]);
      sVar83 = pavgw(uVar61,param_7[10]);
      sVar87 = pavgw(uVar63,param_7[0xb]);
      sVar91 = pavgw(uVar65,param_7[0xc]);
      sVar95 = pavgw(uVar67,param_7[0xd]);
      sVar99 = pavgw(uVar69,param_7[0xe]);
      sVar103 = pavgw(uVar71,param_7[0xf]);
      auVar54._0_2_ = sVar73 - param_5[8];
      auVar54._2_2_ = sVar79 - param_5[9];
      auVar54._4_2_ = sVar83 - param_5[10];
      auVar54._6_2_ = sVar87 - param_5[0xb];
      auVar54._8_2_ = sVar91 - param_5[0xc];
      auVar54._10_2_ = sVar95 - param_5[0xd];
      auVar54._12_2_ = sVar99 - param_5[0xe];
      auVar54._14_2_ = sVar103 - param_5[0xf];
      auVar25._0_2_ = sVar17 - *param_5;
      auVar25._2_2_ = sVar28 - param_5[1];
      auVar25._4_2_ = sVar31 - param_5[2];
      auVar25._6_2_ = sVar34 - param_5[3];
      auVar25._8_2_ = sVar37 - param_5[4];
      auVar25._10_2_ = sVar40 - param_5[5];
      auVar25._12_2_ = sVar43 - param_5[6];
      auVar25._14_2_ = sVar46 - param_5[7];
      auVar78 = pmaddwd(auVar54,auVar54);
      auVar21 = pmaddwd(auVar25,auVar25);
      sVar17 = auVar54._0_2_ + auVar25._0_2_ + auVar54._8_2_ + auVar25._8_2_;
      sVar28 = auVar54._2_2_ + auVar25._2_2_ + auVar54._10_2_ + auVar25._10_2_;
      sVar31 = auVar54._4_2_ + auVar25._4_2_ + auVar54._12_2_ + auVar25._12_2_;
      sVar34 = auVar54._6_2_ + auVar25._6_2_ + auVar54._14_2_ + auVar25._14_2_;
      iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
      Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
      auVar8._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
      auVar8._2_2_ = -(ushort)(sVar28 < 0);
      auVar8._0_2_ = sVar28;
      iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
      iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
      iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
      iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
      iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
      iVar132 = iVar132 + auVar8._0_4_;
      iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
      iVar134 = iVar134 + iVar14;
      param_5 = param_5 + param_6;
      param_7 = param_7 + param_8;
      iVar14 = param_9 + -1;
      bVar3 = 0 < param_9;
      uVar18 = uVar74;
      uVar29 = uVar80;
      uVar32 = uVar84;
      uVar35 = uVar88;
      uVar38 = uVar92;
      uVar41 = uVar96;
      uVar44 = uVar100;
      uVar47 = uVar104;
      uVar49 = uVar107;
      uVar59 = uVar110;
      uVar61 = uVar113;
      uVar63 = uVar116;
      uVar65 = uVar119;
      uVar67 = uVar122;
      uVar69 = uVar125;
      uVar71 = uVar128;
      param_9 = iVar14;
    } while (iVar14 != 0 && bVar3);
    *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
    return iVar131 + iVar133 + iVar132 + iVar134;
  }
  uVar15 = param_4 << 5;
  sVar17 = pavgw(*param_1,param_1[1]);
  sVar28 = pavgw(param_1[1],param_1[2]);
  sVar31 = pavgw(param_1[2],param_1[3]);
  sVar34 = pavgw(param_1[3],param_1[4]);
  sVar37 = pavgw(param_1[4],param_1[5]);
  sVar40 = pavgw(param_1[5],param_1[6]);
  sVar43 = pavgw(param_1[6],param_1[7]);
  sVar46 = pavgw(param_1[7],param_1[8]);
  sVar73 = pavgw(param_1[8],param_1[9]);
  sVar79 = pavgw(param_1[9],param_1[10]);
  sVar83 = pavgw(param_1[10],param_1[0xb]);
  sVar87 = pavgw(param_1[0xb],param_1[0xc]);
  sVar91 = pavgw(param_1[0xc],param_1[0xd]);
  sVar95 = pavgw(param_1[0xd],param_1[0xe]);
  sVar99 = pavgw(param_1[0xe],param_1[0xf]);
  sVar103 = pavgw(param_1[0xf],param_1[0x10]);
  do {
    param_1 = param_1 + param_2;
    sVar75 = pavgw(*param_1,param_1[1]);
    sVar81 = pavgw(param_1[1],param_1[2]);
    sVar85 = pavgw(param_1[2],param_1[3]);
    sVar89 = pavgw(param_1[3],param_1[4]);
    sVar93 = pavgw(param_1[4],param_1[5]);
    sVar97 = pavgw(param_1[5],param_1[6]);
    sVar101 = pavgw(param_1[6],param_1[7]);
    sVar105 = pavgw(param_1[7],param_1[8]);
    sVar108 = pavgw(param_1[8],param_1[9]);
    sVar111 = pavgw(param_1[9],param_1[10]);
    sVar114 = pavgw(param_1[10],param_1[0xb]);
    sVar117 = pavgw(param_1[0xb],param_1[0xc]);
    sVar120 = pavgw(param_1[0xc],param_1[0xd]);
    sVar123 = pavgw(param_1[0xd],param_1[0xe]);
    sVar126 = pavgw(param_1[0xe],param_1[0xf]);
    sVar129 = pavgw(param_1[0xf],param_1[0x10]);
    sVar17 = pavgw((ushort)(sVar17 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                           sVar75 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4,*param_7);
    sVar28 = pavgw((ushort)(sVar28 * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                           sVar81 * *(short *)(&UNK_149df7a12 + uVar15)) >> 4,param_7[1]);
    sVar31 = pavgw((ushort)(sVar31 * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                           sVar85 * *(short *)(&UNK_149df7a14 + uVar15)) >> 4,param_7[2]);
    sVar34 = pavgw((ushort)(sVar34 * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                           sVar89 * *(short *)(&UNK_149df7a16 + uVar15)) >> 4,param_7[3]);
    sVar37 = pavgw((ushort)(sVar37 * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                           sVar93 * *(short *)(&UNK_149df7a18 + uVar15)) >> 4,param_7[4]);
    sVar40 = pavgw((ushort)(sVar40 * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                           sVar97 * *(short *)(&UNK_149df7a1a + uVar15)) >> 4,param_7[5]);
    sVar43 = pavgw((ushort)(sVar43 * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                           sVar101 * *(short *)(&UNK_149df7a1c + uVar15)) >> 4,param_7[6]);
    sVar46 = pavgw((ushort)(sVar46 * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                           sVar105 * *(short *)(&UNK_149df7a1e + uVar15)) >> 4,param_7[7]);
    sVar73 = pavgw((ushort)(sVar73 * *(short *)(&DAT_149df7a00 + uVar15) + 8 +
                           sVar108 * *(short *)(&DAT_149df7a10 + uVar15)) >> 4,param_7[8]);
    sVar79 = pavgw((ushort)(sVar79 * *(short *)(&UNK_149df7a02 + uVar15) + 8 +
                           sVar111 * *(short *)(&UNK_149df7a12 + uVar15)) >> 4,param_7[9]);
    sVar83 = pavgw((ushort)(sVar83 * *(short *)(&UNK_149df7a04 + uVar15) + 8 +
                           sVar114 * *(short *)(&UNK_149df7a14 + uVar15)) >> 4,param_7[10]);
    sVar87 = pavgw((ushort)(sVar87 * *(short *)(&UNK_149df7a06 + uVar15) + 8 +
                           sVar117 * *(short *)(&UNK_149df7a16 + uVar15)) >> 4,param_7[0xb]);
    sVar91 = pavgw((ushort)(sVar91 * *(short *)(&UNK_149df7a08 + uVar15) + 8 +
                           sVar120 * *(short *)(&UNK_149df7a18 + uVar15)) >> 4,param_7[0xc]);
    sVar95 = pavgw((ushort)(sVar95 * *(short *)(&UNK_149df7a0a + uVar15) + 8 +
                           sVar123 * *(short *)(&UNK_149df7a1a + uVar15)) >> 4,param_7[0xd]);
    sVar99 = pavgw((ushort)(sVar99 * *(short *)(&UNK_149df7a0c + uVar15) + 8 +
                           sVar126 * *(short *)(&UNK_149df7a1c + uVar15)) >> 4,param_7[0xe]);
    sVar103 = pavgw((ushort)(sVar103 * *(short *)(&UNK_149df7a0e + uVar15) + 8 +
                            sVar129 * *(short *)(&UNK_149df7a1e + uVar15)) >> 4,param_7[0xf]);
    auVar55._0_2_ = sVar73 - param_5[8];
    auVar55._2_2_ = sVar79 - param_5[9];
    auVar55._4_2_ = sVar83 - param_5[10];
    auVar55._6_2_ = sVar87 - param_5[0xb];
    auVar55._8_2_ = sVar91 - param_5[0xc];
    auVar55._10_2_ = sVar95 - param_5[0xd];
    auVar55._12_2_ = sVar99 - param_5[0xe];
    auVar55._14_2_ = sVar103 - param_5[0xf];
    auVar26._0_2_ = sVar17 - *param_5;
    auVar26._2_2_ = sVar28 - param_5[1];
    auVar26._4_2_ = sVar31 - param_5[2];
    auVar26._6_2_ = sVar34 - param_5[3];
    auVar26._8_2_ = sVar37 - param_5[4];
    auVar26._10_2_ = sVar40 - param_5[5];
    auVar26._12_2_ = sVar43 - param_5[6];
    auVar26._14_2_ = sVar46 - param_5[7];
    auVar78 = pmaddwd(auVar55,auVar55);
    auVar21 = pmaddwd(auVar26,auVar26);
    sVar17 = auVar55._0_2_ + auVar26._0_2_ + auVar55._8_2_ + auVar26._8_2_;
    sVar28 = auVar55._2_2_ + auVar26._2_2_ + auVar55._10_2_ + auVar26._10_2_;
    sVar31 = auVar55._4_2_ + auVar26._4_2_ + auVar55._12_2_ + auVar26._12_2_;
    sVar34 = auVar55._6_2_ + auVar26._6_2_ + auVar55._14_2_ + auVar26._14_2_;
    iVar14 = CONCAT22(-(ushort)(sVar34 < 0),sVar34);
    Var13 = CONCAT64(CONCAT42(iVar14,-(ushort)(sVar31 < 0)),CONCAT22(sVar31,sVar34));
    auVar9._4_8_ = (longlong)((unkuint10)Var13 >> 0x10);
    auVar9._2_2_ = -(ushort)(sVar28 < 0);
    auVar9._0_2_ = sVar28;
    iVar135 = iVar135 + auVar78._0_4_ + auVar21._0_4_;
    iVar136 = iVar136 + auVar78._4_4_ + auVar21._4_4_;
    iVar137 = iVar137 + auVar78._8_4_ + auVar21._8_4_;
    iVar138 = iVar138 + auVar78._12_4_ + auVar21._12_4_;
    iVar131 = iVar131 + CONCAT22(-(ushort)(sVar17 < 0),sVar17);
    iVar132 = iVar132 + auVar9._0_4_;
    iVar133 = iVar133 + (int)((unkuint10)Var13 >> 0x10);
    iVar134 = iVar134 + iVar14;
    param_5 = param_5 + param_6;
    param_7 = param_7 + param_8;
    iVar14 = param_9 + -1;
    bVar3 = 0 < param_9;
    sVar17 = sVar75;
    sVar28 = sVar81;
    sVar31 = sVar85;
    sVar34 = sVar89;
    sVar37 = sVar93;
    sVar40 = sVar97;
    sVar43 = sVar101;
    sVar46 = sVar105;
    sVar73 = sVar108;
    sVar79 = sVar111;
    sVar83 = sVar114;
    sVar87 = sVar117;
    sVar91 = sVar120;
    sVar95 = sVar123;
    sVar99 = sVar126;
    sVar103 = sVar129;
    param_9 = iVar14;
  } while (iVar14 != 0 && bVar3);
  *param_10 = iVar135 + iVar137 + iVar136 + iVar138;
  return iVar131 + iVar133 + iVar132 + iVar134;
}



// FUNCTION 142732278 FUN_142732278 body=12 status=ok
// SIG undefined FUN_142732278(void)

void FUN_142732278(void)

{
  __tlregdtor(&LAB_142732254);
  return;
}



// FUNCTION 14273228e FUN_14273228e body=211 status=ok
// SIG undefined FUN_14273228e(void)

undefined8 FUN_14273228e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  plVar1 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  lVar2 = *plVar1;
  *plVar1 = param_2;
  if (((((*(ulonglong *)(param_2 + 0x38) & 0x3000000000000000) == 0) || (lVar2 != 0)) ||
      (DAT_14c758590 != '\x01')) ||
     (((lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
       *(int *)(lVar3 + 0x2c8) == 0 || (*(longlong *)(lVar3 + 0x2c0) != param_1)) ||
      ((*(ulonglong *)(param_2 + 0x38) & 5) != 0)))) {
    uVar4 = FUN_14470ba62(param_2);
  }
  else {
    puVar5 = TlsGetValue(DAT_14c844254);
    (**(code **)*puVar5)(puVar5,*(undefined4 *)(param_1 + 0x7bfc));
    uVar4 = FUN_14470ba62(param_2);
    (**(code **)*puVar5)(puVar5,*(undefined4 *)(param_1 + 0x7bf8));
  }
  *plVar1 = lVar2;
  return uVar4;
}



// FUNCTION 142732362 FUN_142732362 body=231 status=ok
// SIG undefined FUN_142732362(void)

undefined8 FUN_142732362(int *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  LOCK();
  plVar6 = (longlong *)(param_1 + 0x18);
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + 0x40000000000;
  UNLOCK();
  uVar3 = lVar1 + 0x40000000000;
  while( true ) {
    uVar7 = (uint)(uVar3 >> 0xe) & 0x3fff;
    if ((uint)param_1[1] <= uVar7) {
      return 0;
    }
    if ((uint)(param_1[0x14] + *param_1) <= uVar7) break;
    uVar8 = 0x3fff;
    if ((uVar3 & 0x3fff) != 0x3fff) {
      uVar8 = (ulonglong)
              ((uint)*(undefined8 *)
                      (**(longlong **)(param_1 + 0x1a) +
                      (ulonglong)(uint)((int)(uVar3 & 0x3fff) << 6)) & 0x3fff);
    }
    LOCK();
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    bVar9 = uVar3 == uVar4;
    if (bVar9) {
      *(ulonglong *)(param_1 + 0x18) = (uVar3 & 0xfffffc000fffc000) + 0x40000004000 | uVar8;
      uVar4 = uVar3;
    }
    UNLOCK();
    uVar3 = uVar4;
    if (bVar9) {
      if ((uVar4 & 0x3fff) == 0x3fff) {
        if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
          LOCK();
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -0x4000;
          UNLOCK();
          return 0;
        }
        pcVar2 = *(code **)(param_1 + 4);
        plVar6 = (longlong *)(param_1 + 0xc);
        if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar2)(uVar5);
      }
      else {
        (**(code **)(**(longlong **)
                       (**(longlong **)(param_1 + 0x1a) + 0x18 +
                       (ulonglong)(uint)((int)(uVar4 & 0x3fff) << 6)) + 0x10))();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142732449 FUN_142732449 body=69 status=ok
// SIG undefined FUN_142732449(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732449(void)

{
  _DAT_14c82b430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014273248b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b438,1);
  return;
}



// FUNCTION 14273248e FUN_14273248e body=69 status=ok
// SIG undefined FUN_14273248e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273248e(void)

{
  _DAT_14c82b448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427324d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b450,1);
  return;
}



// FUNCTION 1427324d3 FUN_1427324d3 body=69 status=ok
// SIG undefined FUN_1427324d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427324d3(void)

{
  _DAT_14c82b460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142732515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b468,1);
  return;
}



// FUNCTION 142732518 FUN_142732518 body=69 status=ok
// SIG undefined FUN_142732518(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732518(void)

{
  _DAT_14c82b470 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014273255a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b478,1);
  return;
}



// FUNCTION 14273255d FUN_14273255d body=69 status=ok
// SIG undefined FUN_14273255d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273255d(void)

{
  _DAT_14c82b480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014273259f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b488,1);
  return;
}



// FUNCTION 1427325a2 FUN_1427325a2 body=69 status=ok
// SIG undefined FUN_1427325a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427325a2(void)

{
  _DAT_14c82b490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427325e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b498,1);
  return;
}



// FUNCTION 1427325e7 FUN_1427325e7 body=69 status=ok
// SIG undefined FUN_1427325e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427325e7(void)

{
  _DAT_14c82b4a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142732629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b4a8,1);
  return;
}



// FUNCTION 14273262c FUN_14273262c body=69 status=ok
// SIG undefined FUN_14273262c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273262c(void)

{
  _DAT_14c82b4b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014273266e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b4b8,1);
  return;
}



// FUNCTION 142732671 FUN_142732671 body=69 status=ok
// SIG undefined FUN_142732671(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732671(void)

{
  _DAT_14c82b4c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427326b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b4c8,1);
  return;
}



// FUNCTION 1427326b6 FUN_1427326b6 body=98 status=ok
// SIG undefined FUN_1427326b6(void)

void FUN_1427326b6(longlong *param_1)

{
  int iVar1;
  wchar_t *_Str;
  wchar_t *_Str_00;
  
  if ((int)param_1[1] == 2) {
    _Str_00 = L"";
    _Str = L"";
    if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    DAT_14c7585d8 = (uint)(iVar1 != 0);
    if (*(int *)(*param_1 + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar1 = _wtoi(_Str_00);
    DAT_14c7585dc = (uint)(iVar1 != 0);
  }
  return;
}



// FUNCTION 142732718 FUN_142732718 body=69 status=ok
// SIG undefined FUN_142732718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732718(void)

{
  _DAT_14c82b4d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014273275a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b4d8,1);
  return;
}



// FUNCTION 14273275d FUN_14273275d body=69 status=ok
// SIG undefined FUN_14273275d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14273275d(void)

{
  _DAT_14c82b4e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014273279f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b4e8,1);
  return;
}



// FUNCTION 1427327a2 FUN_1427327a2 body=69 status=ok
// SIG undefined FUN_1427327a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427327a2(void)

{
  _DAT_14c82b4f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427327e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b4f8,1);
  return;
}



// FUNCTION 14273280c FUN_14273280c body=12 status=ok
// SIG undefined FUN_14273280c(void)

bool FUN_14273280c(void)

{
  return DAT_14c82b500 != 0;
}



// FUNCTION 142732818 FUN_142732818 body=42 status=ok
// SIG undefined FUN_142732818(void)

void FUN_142732818(void)

{
  TlsFree(DAT_14c82b540);
  DAT_14c82b540 = 0xffffffff;
  FUN_1400bf3ec(&DAT_14c82b580);
  return;
}



// FUNCTION 142732842 FUN_142732842 body=69 status=ok
// SIG undefined FUN_142732842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732842(void)

{
  _DAT_14c82b608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142732884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b610,1);
  return;
}



// FUNCTION 142732887 FUN_142732887 body=174 status=ok
// SIG undefined FUN_142732887(void)

void FUN_142732887(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  wchar_t *_Str;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_14c82b9a8;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    uVar2 = _wtoi(_Str);
    iVar3 = (**(code **)(*DAT_14c82b500 + 0x20))();
    uVar1 = DAT_14c82b9a8;
    if ((uVar2 != DAT_14c82b9a8) && (-1 < (int)uVar2)) {
      iVar5 = DAT_14c82b9a8 + iVar3;
      iVar4 = iVar5 - uVar2;
      if (iVar4 != 0 && (int)uVar2 <= iVar5) {
        uVar1 = uVar2;
        if ((int)DAT_14c82b9a8 < (int)uVar2) {
          while ((int)(iVar5 - uVar2) < iVar3) {
            iVar3 = iVar3 + -1;
            (**(code **)(*DAT_14c82b500 + 0x78))(DAT_14c82b500,iVar3,1);
          }
        }
        else if (iVar3 <= (int)(~uVar2 + iVar5)) {
          do {
            iVar4 = iVar4 + -1;
            (**(code **)(*DAT_14c82b500 + 0x78))(DAT_14c82b500,iVar4,0);
          } while ((int)(iVar5 - DAT_14c82b9a8) < iVar4);
        }
      }
    }
  }
  DAT_14c82b9a8 = uVar1;
  return;
}



// FUNCTION 142732935 FUN_142732935 body=69 status=ok
// SIG undefined FUN_142732935(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732935(void)

{
  _DAT_14c82b618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142732977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b620,1);
  return;
}



// FUNCTION 14273297a FUN_14273297a body=240 status=ok
// SIG undefined FUN_14273297a(void)

void FUN_14273297a(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  if (*(int *)(param_1 + 1) == 0) {
LAB_142732982:
    uVar2 = 0;
  }
  else {
    param_1 = (undefined8 *)*param_1;
    if (*(int *)(param_1 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = (undefined2 *)*param_1;
    }
    lVar5 = 0;
    while( true ) {
      uVar7 = *(ushort *)((longlong)puVar1 + lVar5);
      uVar6 = (ulonglong)uVar7;
      uVar3 = *(ushort *)((longlong)L"abovenormal" + lVar5);
      if (uVar7 != uVar3) {
        if ((uVar3 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar4 = (ulonglong)uVar3;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_1427329c4;
        }
        uVar2 = 1;
        if (uVar7 == uVar3) goto LAB_142732a04;
        if (*(int *)(param_1 + 1) == 0) {
          puVar1 = &DAT_149dfb77a;
        }
        else {
          puVar1 = (undefined2 *)*param_1;
        }
        lVar5 = 0;
        goto LAB_142732a1e;
      }
      if (uVar7 == 0) break;
LAB_1427329c4:
      lVar5 = lVar5 + 2;
    }
    uVar2 = 1;
  }
  goto LAB_142732a04;
LAB_142732a1e:
  uVar7 = *(ushort *)((longlong)puVar1 + lVar5);
  uVar6 = (ulonglong)uVar7;
  uVar3 = *(ushort *)((longlong)L"belownormal" + lVar5);
  if (uVar7 == uVar3) {
    if (uVar7 == 0) goto LAB_142732a63;
LAB_142732a33:
    lVar5 = lVar5 + 2;
    goto LAB_142732a1e;
  }
  if ((uVar3 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar4 = (ulonglong)uVar3;
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_142732a33;
  }
  if (uVar7 != uVar3) goto LAB_142732982;
LAB_142732a63:
  uVar2 = 2;
LAB_142732a04:
  FUN_1467aa8bc(DAT_14c82b500,uVar2);
  return;
}



// FUNCTION 142732a6a FUN_142732a6a body=69 status=ok
// SIG undefined FUN_142732a6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142732a6a(void)

{
  _DAT_14c82b628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142732aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c82b630,1);
  return;
}



// FUNCTION 142732ab0 FUN_142732ab0 body=3171 status=ok
// SIG undefined FUN_142732ab0(void)

longlong FUN_142732ab0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  undefined1 uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 *puVar31;
  undefined1 auStack_8f8 [40];
  ulonglong local_8d0;
  ulonglong local_8c8;
  longlong *local_8c0;
  ulonglong local_8b8;
  longlong local_8b0;
  undefined8 local_8a8;
  longlong local_8a0;
  longlong local_898;
  ulonglong uStack_890;
  longlong *local_888;
  undefined8 uStack_880;
  longlong local_878;
  ulonglong uStack_870;
  void *local_868;
  longlong lStack_860;
  undefined8 local_858;
  longlong *local_848;
  int local_840;
  undefined8 *local_838;
  longlong *local_830;
  undefined8 *local_828;
  ulonglong local_820;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined1 uStack_810;
  undefined1 uStack_80f;
  undefined1 uStack_80e;
  undefined1 uStack_80d;
  int iStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined8 uStack_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 local_7d8 [1912];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  uVar13 = FUN_1467fdf84(param_3);
  if (uVar13 == 0) {
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0x100000000;
    goto LAB_142732b0c;
  }
  uVar14 = (uVar13 + param_4) - 1;
  plVar25 = (longlong *)0x0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_4;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  uVar15 = SUB168(auVar6 / auVar5,0);
  local_8d0 = uVar13;
  local_8c8 = param_4;
  local_8c0 = param_1;
  local_8a8 = param_3;
  FUN_144b46480(local_7d8,uVar14 % param_4);
  uVar13 = uVar15 * 4;
  local_868 = (void *)0x0;
  lStack_860 = 0;
  local_858 = 0;
  local_878 = 0;
  uStack_870 = 0;
  FUN_1467a815c();
  local_888 = (longlong *)0x0;
  uStack_880 = 0;
  iVar29 = SUB164(auVar6 / auVar5,0);
  if (0 < iVar29) {
    local_8b0 = param_2;
    iVar10 = FUN_1467abd02(uVar15 & 0xffffffff);
    iVar30 = uStack_880._4_4_;
    FUN_142743e1c(local_888,uStack_880 & 0xffffffff);
    uVar14 = uStack_880 >> 0x20;
    uStack_880 = uStack_880 & 0xffffffff00000000;
    if ((iVar30 < iVar10) && ((int)uVar14 != iVar10)) {
      FUN_142743ea8(&local_888,iVar10);
    }
    local_8a0 = local_8d0 - local_8c8;
    plVar25 = (longlong *)0x0;
    iVar30 = 0;
    local_8b8 = uVar13;
    do {
      if (iVar10 == 1) {
        lVar16 = 0;
        if (uVar15 != 0) {
          if (uVar15 == 1) {
            lVar16 = (**(code **)(*local_8c0 + 0x20))(local_8c0,local_8d0);
          }
          else {
            lVar16 = (**(code **)(*local_8c0 + 0x20))(local_8c0,local_8c8);
            lVar16 = lVar16 + local_8a0;
          }
        }
        FUN_140e03604(&local_818,lVar16 + uVar13 + 0x40);
        plVar7 = (longlong *)CONCAT44(uStack_814,local_818);
        local_818 = 0;
        uStack_814 = 0;
        if (plVar25 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar25 + 3;
          lVar16 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (((uint)lVar16 & 0x3fffffff) == 1) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            plVar25[1] = 0;
            plVar25[2] = 0;
            LOCK();
            puVar2 = (ulonglong *)(plVar25 + 3);
            uVar14 = *puVar2;
            *puVar2 = *puVar2 - 0x40000000;
            UNLOCK();
            if ((uVar14 & 0xfffffffc0000000) == 0x40000000) {
              (**(code **)*plVar25)(plVar25,1);
            }
          }
          plVar25 = (longlong *)CONCAT44(uStack_814,local_818);
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar25 + 3;
            lVar16 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (((uint)lVar16 & 0x3fffffff) == 1) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              plVar25[1] = 0;
              plVar25[2] = 0;
              LOCK();
              puVar2 = (ulonglong *)(plVar25 + 3);
              uVar14 = *puVar2;
              *puVar2 = *puVar2 - 0x40000000;
              UNLOCK();
              if ((uVar14 & 0xfffffffc0000000) == 0x40000000) {
                (**(code **)*plVar25)(plVar25,1);
              }
            }
          }
        }
        if (plVar7 == (longlong *)0x0) {
          uVar14 = 0;
          lVar16 = 0;
        }
        else {
          if ((plVar7[3] & 0x4000000000000000U) == 0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
          uVar14 = plVar7[2];
          if ((plVar7[3] & 0x4000000000000000U) == 0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
          lVar16 = plVar7[1];
        }
        uVar17 = 0x40;
        if (uVar14 < 0x40) {
          uVar17 = uVar14;
        }
        uVar14 = uVar14 - uVar17;
        uVar18 = local_8b8;
        if (uVar14 < local_8b8) {
          uVar18 = uVar14;
        }
        lVar16 = lVar16 + uVar17 + uVar18;
        lVar24 = uVar14 - uVar18;
        plVar25 = plVar7;
      }
      else {
        if (iVar30 == 0) {
          FUN_140e03604(&local_818,uVar13 + 0x40);
          plVar7 = (longlong *)CONCAT44(uStack_814,local_818);
          local_818 = 0;
          uStack_814 = 0;
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar25 + 3;
            lVar16 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (((uint)lVar16 & 0x3fffffff) == 1) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              plVar25[1] = 0;
              plVar25[2] = 0;
              LOCK();
              puVar2 = (ulonglong *)(plVar25 + 3);
              uVar14 = *puVar2;
              *puVar2 = *puVar2 - 0x40000000;
              UNLOCK();
              if ((uVar14 & 0xfffffffc0000000) == 0x40000000) {
                (**(code **)*plVar25)(plVar25,1);
              }
            }
            plVar25 = (longlong *)CONCAT44(uStack_814,local_818);
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar25 + 3;
              lVar16 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (((uint)lVar16 & 0x3fffffff) == 1) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
                plVar25[1] = 0;
                plVar25[2] = 0;
                LOCK();
                puVar2 = (ulonglong *)(plVar25 + 3);
                uVar14 = *puVar2;
                *puVar2 = *puVar2 - 0x40000000;
                UNLOCK();
                if ((uVar14 & 0xfffffffc0000000) == 0x40000000) {
                  (**(code **)*plVar25)(plVar25,1);
                }
              }
            }
          }
          FUN_1467abd7a(&local_878,uVar15 & 0xffffffff);
          plVar25 = plVar7;
        }
        lVar24 = 0;
        lVar16 = 0;
      }
      uVar14 = uStack_880;
      lVar26 = (longlong)(int)uStack_880;
      uVar11 = (int)uStack_880 + 1;
      uStack_880 = CONCAT44(uStack_880._4_4_,uVar11);
      if (uStack_880._4_4_ < uVar11) {
        FUN_142743ff6(&local_888,uVar14 & 0xffffffff);
      }
      uVar8 = local_8a8;
      local_888[lVar26 * 3] = 0;
      local_888[lVar26 * 3 + 1] = lVar16;
      local_888[lVar26 * 3 + 2] = lVar24;
      iVar30 = iVar30 + 1;
    } while (iVar10 != iVar30);
    local_848 = local_888;
    local_840 = (int)uStack_880;
    local_818 = SUB84(local_8c0,0);
    uStack_814 = (undefined4)((ulonglong)local_8c0 >> 0x20);
    uStack_810 = SUB81(local_7d8,0);
    uStack_80f = (undefined1)((ulonglong)local_7d8 >> 8);
    uStack_80e = (undefined1)((ulonglong)local_7d8 >> 0x10);
    uStack_80d = (undefined1)((ulonglong)local_7d8 >> 0x18);
    iStack_80c = (int)((ulonglong)local_7d8 >> 0x20);
    uStack_808 = (undefined4)local_8a8;
    uStack_804 = (undefined4)((ulonglong)local_8a8 >> 0x20);
    uStack_800._0_4_ = (undefined4)local_8d0;
    uStack_800._4_4_ = (undefined4)(local_8d0 >> 0x20);
    local_7f8 = (undefined4)local_8c8;
    uStack_7f4 = (undefined4)(local_8c8 >> 0x20);
    uStack_7f0 = &local_878;
    uStack_7e8 = &local_868;
    iVar10 = FUN_1467abd02(uVar15 & 0xffffffff);
    param_2 = local_8b0;
    iVar30 = local_840;
    if (iVar10 < local_840) {
      iVar30 = iVar10;
    }
    if (local_840 == 0) {
      iVar30 = iVar10;
    }
    if (1 < iVar30) {
      iVar10 = iVar30 * 6;
      iVar27 = 6;
      uVar13 = 1;
      iVar28 = -6;
      uVar15 = uVar15 & 0xffffffff;
      do {
        if (iVar10 <= iVar29) {
          uVar15 = (longlong)(iVar27 * iVar30 + iVar29 + -1) / (longlong)iVar10;
          uVar13 = uVar15 & 0xffffffff;
          iVar22 = (int)uVar15;
          uVar15 = (longlong)(iVar22 + iVar29 + -1) / (longlong)iVar22;
          iVar12 = (int)uVar15;
          uVar15 = uVar15 & 0xffffffff;
          if (iVar30 <= iVar12) break;
        }
        iVar22 = (int)uVar13;
        iVar12 = (int)uVar15;
        iVar27 = iVar27 + -1;
        iVar10 = iVar10 - iVar30;
        iVar28 = iVar28 + 1;
      } while (iVar28 != 0);
      uVar11 = iVar30 - 1;
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar23 = 6;
      if ((*(byte *)(lVar16 + 0xc60) & 0x37) != 0) {
        uVar23 = 0;
      }
      FUN_144a85b52(&local_830,1);
      puVar3 = (undefined8 *)(lVar16 + 0x308);
      puVar20 = (uint *)*puVar3;
      if (puVar20 != (uint *)0x0) goto LAB_142733120;
      do {
        uVar21 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar21 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar21 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar19 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar19 = 0xffffffff;
        *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar3 = puVar19;
        FUN_140217a48(puVar3);
        puVar20 = (uint *)*puVar3;
LAB_142733120:
        uVar13 = *(longlong *)(puVar20 + 0x10) + 0x3f;
        uVar21 = puVar20[0x12];
        while( true ) {
          puVar31 = (undefined8 *)(uVar13 & 0xffffffffffffffc0);
          if (puVar31 + 0x10 <= puVar20 + 0x4000) {
            *(undefined8 **)(puVar20 + 0x10) = puVar31 + 0x10;
            puVar20[0x12] = uVar21 + 1;
            *puVar31 = &PTR_FUN_149e002e8;
            *(undefined4 *)(puVar31 + 1) = 0;
            *puVar31 = &PTR_FUN_149e00158;
            puVar31[3] = L"BlockEncoder.Compress.PF";
            *(undefined4 *)(puVar31 + 4) = 0;
            *(undefined4 *)(puVar31 + 5) = 0;
            *(int *)((longlong)puVar31 + 0x2c) = iVar29;
            *(int *)(puVar31 + 6) = iVar22;
            *(int *)((longlong)puVar31 + 0x34) = iVar12;
            puVar31[7] = &local_848;
            puVar31[8] = &local_818;
            puVar31[9] = &local_830;
            *(undefined1 *)(puVar31 + 10) = uVar23;
            puVar31[0xb] = 0;
            puVar31[0xc] = 0;
            *(int *)((longlong)puVar31 + 0x24) = iVar12;
            *(uint *)(puVar31 + 0xc) = uVar11;
            FUN_142744b70(puVar31 + 0xb);
            FUN_142744b3a(puVar31[0xb],uVar11);
            if (puVar31 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar31 + 1) = *(int *)(puVar31 + 1) + 1;
              UNLOCK();
            }
            local_838 = puVar31;
            FUN_142744512(&local_838);
            uVar13 = local_8b8;
            if (1 < (int)uStack_880) {
              FUN_1467c4ece(local_7d8,local_8a8);
            }
            local_828 = local_838;
            local_820._0_5_ = (uint5)uVar11;
            cVar9 = FUN_142744590();
            param_2 = local_8b0;
            if (cVar9 == '\0') {
              (**(code **)(*local_830 + 0x20))(local_830,0xffffffff,0);
            }
            FUN_14274493e(&local_828);
            FUN_144a75412();
            goto LAB_1427332c0;
          }
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
          LOCK();
          uVar4 = *puVar20;
          *puVar20 = *puVar20 + uVar21 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar21) != 0xffffffff) break;
          puVar20 = (uint *)*puVar3;
          *puVar20 = 0xffffffff;
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
          puVar20[0x12] = 0;
          *puVar3 = puVar20;
          uVar13 = (longlong)puVar20 + 0x97;
          uVar21 = 0;
        }
      } while( true );
    }
    if (1 < (int)uStack_880) {
      FUN_1467c4ece(local_7d8,uVar8);
    }
    uVar13 = local_8b8;
    iVar30 = 0;
    do {
      FUN_142744161(&local_818,&local_848,0,iVar30);
      iVar30 = iVar30 + 1;
    } while (iVar30 < iVar29);
  }
LAB_1427332c0:
  if (lStack_860 == 0) {
    if (local_8d0 <= uVar13) goto LAB_142733593;
    lVar24 = 0;
LAB_14273332a:
    if (plVar25 == (longlong *)0x0) {
      uVar15 = 0;
      lVar16 = 0;
    }
    else {
      if ((plVar25[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      uVar15 = plVar25[2];
      if ((plVar25[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      lVar16 = plVar25[1];
    }
    if (lStack_860 << 2 != 0) {
      uVar14 = 0x40;
      if (uVar15 < 0x40) {
        uVar14 = uVar15;
      }
      memcpy((void *)(lVar16 + uVar14),local_868,lStack_860 << 2);
    }
    plVar7 = local_8c0;
    local_818 = 0xb7756362;
    uStack_814 = 0;
    uStack_810 = 0;
    uStack_80f = 0;
    uStack_80e = 0;
    uStack_80d = 0;
    iStack_80c = 0;
    uStack_808 = 0;
    uStack_804 = 0;
    uStack_800._0_4_ = 0;
    uStack_800._4_4_ = 0;
    local_7f8 = 0;
    uStack_7f4 = 0;
    uStack_7f0._0_4_ = 0;
    uStack_7f0._4_4_ = 0;
    uStack_7e8._0_4_ = 0;
    uStack_7e8._4_4_ = 0;
    uStack_7e0 = 0;
    uStack_810 = (**(code **)(*local_8c0 + 8))(local_8c0);
    uStack_80f = (**(code **)(*plVar7 + 0x10))(plVar7);
    uStack_80e = (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar16 = 0x3f;
    if (local_8c8 != 0) {
      for (; local_8c8 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uStack_80d = (undefined1)lVar16;
    uStack_808 = (undefined4)local_8d0;
    uStack_804 = (undefined4)(local_8d0 >> 0x20);
    uStack_800 = lVar24 + 0x40 + uVar13;
    local_7f8 = 0;
    uStack_7f4 = 0;
    uStack_7f0._0_4_ = 0;
    uStack_7f0._4_4_ = 0;
    uStack_7e8._0_4_ = 0;
    uStack_7e8._4_4_ = 0;
    uStack_7e0 = 0;
    iStack_80c = iVar29;
    FUN_144b45d30(local_7d8,&local_7f8,0x20);
    if (plVar25 == (longlong *)0x0) {
      local_898 = 0;
      uStack_890 = 0;
      FUN_1467a8248(&local_818);
LAB_1427336d3:
      uVar13 = 0;
      local_828 = (undefined8 *)0x0;
    }
    else {
      if ((plVar25[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      uVar15 = plVar25[2];
      if ((plVar25[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      local_898 = plVar25[1];
      uStack_890 = uVar13 + 0x40;
      if (uVar15 < uVar13 + 0x40) {
        uStack_890 = uVar15;
      }
      FUN_1467a8248(&local_818);
      if (plVar25 == (longlong *)0x0) goto LAB_1427336d3;
      if ((plVar25[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      uVar13 = plVar25[2];
      if ((plVar25[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar25 + 8))(plVar25);
      }
      local_828 = (undefined8 *)plVar25[1];
    }
    local_820 = uStack_800;
    if (uVar13 < uStack_800) {
      local_820 = uVar13;
    }
    local_830 = plVar25;
    FUN_14276fe3e(&local_848);
    FUN_1467a837e(param_2,&local_848,&local_878);
    plVar25 = local_848;
    if (local_848 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_848 + 3;
      lVar16 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (((uint)lVar16 & 0x3fffffff) == 1) {
        (**(code **)(*local_848 + 0x10))(local_848);
        plVar25[1] = 0;
        plVar25[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar25 + 3);
        uVar13 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar13 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar25)(plVar25,1);
        }
      }
    }
    plVar25 = local_830;
    if (local_830 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_830 + 3;
      lVar16 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (((uint)lVar16 & 0x3fffffff) == 1) {
        (**(code **)(*local_830 + 0x10))(local_830);
        plVar25[1] = 0;
        plVar25[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar25 + 3);
        uVar13 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar13 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar25)(plVar25,1);
        }
      }
    }
    plVar25 = (longlong *)0x0;
  }
  else {
    lVar16 = 0;
    lVar24 = 0;
    do {
      if ((ulonglong)*(uint *)((longlong)local_868 + lVar16) == 0) goto LAB_142733593;
      lVar24 = lVar24 + (ulonglong)*(uint *)((longlong)local_868 + lVar16);
      lVar16 = lVar16 + 4;
    } while (lStack_860 << 2 != lVar16);
    if (lVar24 + uVar13 < local_8d0) {
      lVar16 = 0;
      do {
        uVar11 = *(uint *)((longlong)local_868 + lVar16);
        *(uint *)((longlong)local_868 + lVar16) =
             uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
        lVar16 = lVar16 + 4;
      } while (lStack_860 << 2 != lVar16);
      goto LAB_14273332a;
    }
LAB_142733593:
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0x100000000;
  }
  FUN_142743e1c(local_888,uStack_880 & 0xffffffff);
  if (local_888 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1458cf656(local_878,uStack_870 & 0xffffffff);
  if (local_878 != 0) {
    FUN_1400020a8();
  }
  if (local_868 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar25 + 3;
    lVar16 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (((uint)lVar16 & 0x3fffffff) == 1) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      plVar25[1] = 0;
      plVar25[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar25 + 3);
      uVar13 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar13 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar25)(plVar25,1);
      }
    }
  }
LAB_142732b0c:
  if ((local_60 ^ (ulonglong)auStack_8f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142733714 FUN_142733714 body=631 status=ok
// SIG undefined FUN_142733714(void)

void FUN_142733714(longlong *param_1,ulonglong *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  char local_40;
  undefined7 uStack_3f;
  undefined2 *local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_40 = '\0';
    uVar4 = *param_2;
    if (uVar4 == 0) {
      local_40 = '\x01';
    }
    else {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (uVar4 == DAT_14c892f54) {
        local_40 = '\x02';
      }
      else {
        uVar4 = *param_2;
        if (uVar4 == DAT_14c892f44) {
          local_40 = '\x03';
        }
        else if (uVar4 == DAT_14c892f48) {
          local_40 = '\x04';
        }
        else if (uVar4 == DAT_14c892f4c) {
          local_40 = '\x05';
        }
      }
    }
    puVar3 = (ulonglong *)param_1[1];
    pcVar2 = (char *)*puVar3 + 1;
    if ((char *)puVar3[1] < pcVar2) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_40,1);
    }
    else {
      local_40 = *(char *)*puVar3;
      *puVar3 = (ulonglong)pcVar2;
    }
    if (local_40 != '\0') goto LAB_14273396d;
    FUN_1400021e4(param_2,&local_38);
    FUN_14021219d(param_1,&local_38);
LAB_142733963:
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (ulonglong *)param_1[1];
    puVar1 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_21,1);
    }
    else {
      local_21 = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    switch(local_21) {
    case 0:
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      FUN_14021219d(param_1,&local_38);
      puVar5 = local_38;
      if ((int)uStack_30 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar5,1);
      *param_2 = CONCAT71(uStack_3f,local_40);
      goto LAB_142733963;
    default:
      *param_2 = 0;
      goto LAB_14273396d;
    case 2:
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar4 = (ulonglong)DAT_14c892f54;
      break;
    case 3:
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar4 = (ulonglong)DAT_14c892f44;
      break;
    case 4:
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar4 = (ulonglong)DAT_14c892f48;
      break;
    case 5:
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar4 = (ulonglong)DAT_14c892f4c;
    }
    *param_2 = uVar4;
  }
LAB_14273396d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14273398c FUN_14273398c body=62 status=ok
// SIG undefined FUN_14273398c(void)

void FUN_14273398c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40028) != 0) {
    FUN_14273a6cd();
    return;
  }
  FUN_1427340cb();
  return;
}



// FUNCTION 1427339ca FUN_1427339ca body=169 status=ok
// SIG undefined FUN_1427339ca(void)

void FUN_1427339ca(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  LOCK();
  DAT_14c82b990 = DAT_14c82b990 + -1;
  UNLOCK();
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2e0);
  if (lVar2 == 0) {
    *(undefined1 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2e8) = 1;
  }
  else {
    *(undefined8 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2e0) = 0;
    LOCK();
    piVar1 = (int *)(lVar2 + 0x1c);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_142733a74();
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar3 = *(longlong *)(lVar2 + 0x2e0);
    *(undefined1 *)(lVar2 + 0x2e8) = 1;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x1c);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_142733a74();
        return;
      }
    }
  }
  return;
}



// FUNCTION 142733a74 FUN_142733a74 body=114 status=ok
// SIG undefined FUN_142733a74(void)

void FUN_142733a74(undefined8 *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_14c82b9a0 == 0;
  if (bVar2) {
    DAT_14c82b9a0 = 1;
  }
  UNLOCK();
  if (!bVar2) {
    FUN_1400c0ca8(&DAT_14c82b9a0);
  }
  *param_1 = DAT_14c82b998;
  uVar1 = DAT_14c82b9a0;
  DAT_14c82b998 = param_1;
  LOCK();
  DAT_14c82b9a0 = DAT_14c82b9a0 - 1;
  UNLOCK();
  if ((char)(((uint)uVar1 & 2) >> 1) == '\0' && 3 < uVar1) {
    FUN_1400c0e08(&DAT_14c82b9a0);
    return;
  }
  return;
}



// FUNCTION 142733ae6 FUN_142733ae6 body=167 status=ok
// SIG undefined FUN_142733ae6(void)

uint FUN_142733ae6(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  pvVar3 = TlsGetValue(*(DWORD *)(param_1 + 0x18));
  if (pvVar3 == (LPVOID)0x0) {
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar1 == 0) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = *(uint *)(&DAT_149dffbd0 +
                       (ulonglong)((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b) & 7) * 4
                       ) |
              *(uint *)(&DAT_149dffbf0 +
                       (ulonglong)((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b) & 7) * 4
                       ) | 0xff;
    }
  }
  else {
    uVar4 = (int)((ulonglong)((longlong)pvVar3 - *(longlong *)(param_1 + 0x30)) >> 3) * -0x55555555;
    uVar2 = 0xff;
    if ((int)uVar4 < *(int *)(param_1 + 0x1c)) {
      uVar2 = uVar4;
    }
  }
  if ((param_2 != '\0') && ((int)(uVar2 & 0xff) < *(int *)(param_1 + 0x1c))) {
    uVar2 = uVar2 | 0x100;
  }
  return uVar2;
}



// FUNCTION 142733c18 FUN_142733c18 body=178 status=ok
// SIG undefined FUN_142733c18(void)

void FUN_142733c18(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  void *_Memory;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x40) = lVar2 + 0x10000;
    puVar3 = (uint *)*param_1;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + puVar3[0x12] + 1;
    UNLOCK();
    if ((uVar1 ^ puVar3[0x12]) == 0xffffffff) {
      lVar2 = *param_1;
      uVar1 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar1 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar1 | 1;
        __tlregdtor(&LAB_142733bf0);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(void **)(lVar4 + 0x310);
      *(longlong *)(lVar4 + 0x310) = lVar2;
      if (_Memory != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142733c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        _aligned_free(_Memory);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142733cea FUN_142733cea body=282 status=ok
// SIG undefined FUN_142733cea(void)

undefined8 * FUN_142733cea(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142733bf0);
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



// FUNCTION 142733e04 FUN_142733e04 body=364 status=ok
// SIG undefined FUN_142733e04(void)

undefined8 * FUN_142733e04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,1>
             ::vftable;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142733ec0;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_142733bf0);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_1467aa772(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142733ec0:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        puVar7[1] = param_2[1];
        param_2[1] = 0;
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 142733f70 FUN_142733f70 body=196 status=ok
// SIG undefined FUN_142733f70(void)

void FUN_142733f70(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *_Memory;
  int *piVar5;
  
  uVar2 = *param_2;
  puVar3 = *(undefined8 **)(uVar2 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(puVar3 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (uVar2 != 0) {
    piVar5 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar4 + 0x310);
        *(int **)(lVar4 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142733ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142734062 FUN_142734062 body=12 status=ok
// SIG undefined FUN_142734062(void)

void FUN_142734062(void)

{
  FUN_1458cf622(&DAT_14c82b9e0);
  return;
}



// FUNCTION 14273406e FUN_14273406e body=12 status=ok
// SIG undefined FUN_14273406e(void)

void FUN_14273406e(void)

{
  FUN_1458cf622(&DAT_14c82b9c8);
  return;
}



// FUNCTION 14273407a FUN_14273407a body=81 status=ok
// SIG undefined FUN_14273407a(void)

undefined8 FUN_14273407a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  
  uVar2 = (*param_3 + (ulonglong)(*param_3 == 0)) - 1;
  if (uVar2 == 0) {
    bVar4 = 0;
  }
  else {
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar4 = (byte)lVar1 ^ 0x3f;
  }
  uVar3 = 1L << (-bVar4 & 0x3f);
  uVar2 = 0x1000;
  if (0x1000 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_140e03604(param_1,uVar2);
  return param_1;
}



// FUNCTION 1427340cb FUN_1427340cb body=26113 status=ok
// SIG undefined FUN_1427340cb(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1427340cb(longlong param_1,ulonglong *param_2,ulonglong *param_3,uint *param_4,int param_5,
                 uint param_6,int param_7)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  short *psVar21;
  ulonglong *puVar22;
  int iVar23;
  int iVar24;
  ulonglong *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  ulonglong uVar35;
  uint uVar36;
  int iVar37;
  ulonglong *puVar38;
  ulonglong uVar39;
  uint uVar40;
  ulonglong uVar41;
  ulonglong *puVar42;
  uint uVar43;
  longlong lVar44;
  short *_Dst;
  ulonglong *puVar45;
  char *pcVar46;
  ulonglong *puVar47;
  ulonglong *puVar48;
  int iVar49;
  char *pcVar50;
  ulonglong uVar51;
  uint uVar52;
  uint uVar53;
  ulonglong *puVar54;
  short *psVar55;
  uint uVar56;
  uint *puVar57;
  ulonglong *puVar58;
  uint uVar59;
  ulonglong *puVar60;
  bool bVar61;
  bool bVar62;
  undefined1 auStack_228 [40];
  longlong local_200;
  int local_1f4;
  ulonglong *local_1f0;
  ulonglong *local_1e8;
  ulonglong *local_1e0;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  ulonglong *local_1c8;
  ulonglong *local_1c0;
  ulonglong *local_1b8;
  ulonglong *local_1b0;
  ulonglong *local_1a8;
  ulonglong *local_1a0;
  ulonglong *local_198;
  ulonglong *local_190;
  ulonglong *local_188;
  ulonglong *local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  ulonglong *local_168;
  ulonglong *local_160;
  ulonglong *local_158;
  ulonglong *local_150;
  ulonglong *local_148;
  ulonglong *local_140;
  ulonglong *local_138;
  ulonglong *local_130;
  ulonglong *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ulonglong *local_110;
  char *local_108;
  ulonglong *local_100;
  ulonglong *local_f8;
  uint *local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  char *local_d0;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  ulonglong *local_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  char *local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  char *local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  uint *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  iVar49 = 0;
  local_200 = param_1;
  local_78 = param_3;
  local_58 = param_4;
  if (0x7e000000 < (ulonglong)*param_4) goto LAB_14273a69c;
  *(longlong *)(param_1 + 0x40000) = *(longlong *)(param_1 + 0x40000) + (ulonglong)*param_4;
  uVar13 = 0xc;
  if (param_6 < 0xc) {
    uVar13 = param_6;
  }
  local_80 = (ulonglong *)&DAT_00000009;
  if (0 < (int)param_6) {
    local_80 = (ulonglong *)(ulonglong)uVar13;
  }
  uVar9 = (longlong)local_80 * 3 & 0xffffffff;
  local_1f4 = *(int *)(&DAT_149dffe64 + uVar9 * 4);
  if (*(int *)(&DAT_149dffe60 + uVar9 * 4) == 0) {
    uVar13 = *param_4;
    lVar8 = (longlong)(int)uVar13;
    local_70 = (char *)((longlong)param_2 + lVar8);
    puVar7 = (ulonglong *)((longlong)param_2 + lVar8 + -0xc);
    local_108 = (char *)((longlong)param_5 + (longlong)param_3);
    *param_4 = 0;
    local_88 = (char *)CONCAT44(local_88._4_4_,uVar13);
    if (param_2 <= puVar7 && 0xc < (int)uVar13) {
      local_1e8 = (ulonglong *)((longlong)param_2 + lVar8 + -5);
      local_b8 = (ulonglong *)(local_70 + -8);
      local_c0 = (ulonglong *)(local_70 + -6);
      local_b0 = (ulonglong *)0x0;
      local_d8 = (ulonglong *)0x0;
      local_180 = (ulonglong *)0x0;
      puVar45 = (ulonglong *)0x0;
      puVar25 = (ulonglong *)0x0;
      local_190 = puVar7;
      local_168 = param_3;
LAB_142737362:
      local_150 = *(ulonglong **)(&DAT_00040008 + local_200);
      local_1b8 = *(ulonglong **)(local_200 + 0x40010);
      uVar13 = *(uint *)(local_200 + 0x40018);
      local_148 = (ulonglong *)(ulonglong)uVar13;
      uVar6 = *(uint *)(local_200 + 0x4001c);
      local_1f0 = (ulonglong *)(ulonglong)uVar6;
      local_158 = (ulonglong *)((longlong)local_148 - (longlong)local_1f0);
      local_1e0 = (ulonglong *)((longlong)local_158 + (longlong)local_1b8);
      local_198 = (ulonglong *)((longlong)local_150 - (longlong)local_148);
      local_1a0 = (ulonglong *)CONCAT44(local_1a0._4_4_,uVar13 - 4);
      local_118 = (ulonglong *)((longlong)local_1b8 - (longlong)local_1f0);
      uVar14 = (uVar13 + (int)param_2) - (int)local_150;
      local_1c8 = (ulonglong *)(ulonglong)(-(int)param_2 - 4);
      local_c8 = CONCAT44(local_c8._4_4_,uVar6 + 0x10000);
      puVar48 = param_2;
      uVar36 = *(uint *)(local_200 + 0x40020);
      local_1d0 = puVar45;
      local_140 = param_2;
LAB_142737420:
      local_1a8 = (ulonglong *)((longlong)puVar48 - (longlong)local_150);
      uVar32 = uVar13 + (int)local_1a8;
      uVar59 = (uVar13 - 0xffff) + (int)local_1a8;
      if (uVar32 < uVar6 + 0x10000) {
        uVar59 = uVar6;
      }
      local_178 = (ulonglong *)CONCAT44(local_178._4_4_,uVar59);
      puVar45 = (ulonglong *)(ulonglong)uVar14;
      uVar53 = (uint)*puVar48;
      if (uVar36 < uVar32) {
        puVar54 = (ulonglong *)(ulonglong)uVar36;
        do {
          uVar9 = (ulonglong)
                  ((uint)(*(int *)((longlong)local_198 + (longlong)puVar54) * -0x61c8864f) >> 0x11);
          uVar36 = (uint)puVar54;
          uVar43 = uVar36 - *(int *)(local_200 + uVar9 * 4);
          if (0xfffe < uVar43) {
            uVar43 = 0xffff;
          }
          *(short *)(local_200 + 0x20000 + (ulonglong)(uVar36 & 0xffff) * 2) = (short)uVar43;
          *(uint *)(local_200 + uVar9 * 4) = uVar36;
          puVar54 = (ulonglong *)((longlong)puVar54 + 1);
        } while (puVar45 != puVar54);
      }
      *(uint *)(local_200 + 0x40020) = uVar32;
      uVar36 = *(uint *)(local_200 + (ulonglong)((uint)*puVar48 * -0x61c8864f >> 0x11) * 4);
      local_120 = (ulonglong *)CONCAT44(local_120._4_4_,uVar32);
      iVar49 = (int)local_1c8;
      local_128 = param_2;
      local_170 = puVar25;
      if ((uVar59 <= uVar36) && (0 < local_1f4)) {
        local_1a8 = (ulonglong *)((longlong)local_1a8 + (longlong)local_148);
        local_188 = (ulonglong *)((longlong)puVar48 + 4);
        bVar62 = uVar53 >> 0x18 == (uVar53 & 0xff);
        bVar3 = uVar53 >> 0x10 == (uVar53 & 0xffff);
        local_1d8 = (ulonglong *)CONCAT71(local_1d8._1_7_,bVar62 && bVar3);
        uVar35 = (ulonglong)uVar53 * 0x100000001;
        iVar30 = 0;
        uVar43 = 3;
        uVar9 = 0;
        iVar37 = local_1f4;
        do {
          uVar15 = uVar13 - uVar36;
          if (uVar13 < uVar36 || uVar15 == 0) {
            puVar54 = (ulonglong *)((ulonglong)uVar36 + (longlong)local_198);
            if ((*(short *)((longlong)puVar48 + (longlong)(int)uVar43 + -1) ==
                 *(short *)((longlong)(int)uVar43 + -1 + (longlong)puVar54)) &&
               ((uint)*puVar54 == uVar53)) {
              puVar22 = (ulonglong *)((longlong)puVar54 + 4);
              puVar17 = local_188;
              if (local_188 < puVar7) {
                uVar51 = *local_188 ^ *puVar22;
                if (uVar51 == 0) {
                  uVar15 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar51 != 0) {
                    for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar15 = (uint)lVar8;
                }
                if (*puVar22 == *local_188) {
                  puVar17 = (ulonglong *)((longlong)puVar48 + 0xc);
                  puVar22 = (ulonglong *)((longlong)puVar54 + 0xc);
                  goto LAB_14273786e;
                }
                uVar15 = uVar15 >> 3;
              }
              else {
LAB_14273786e:
                if (puVar17 < puVar7) {
                  iVar27 = iVar49 + (int)puVar17;
LAB_14273787a:
                  if (*puVar22 == *puVar17) goto code_r0x000142737885;
                  uVar51 = *puVar17 ^ *puVar22;
                  if (uVar51 == 0) {
                    uVar15 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar51 != 0) {
                      for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar15 = (uint)lVar8;
                  }
                  uVar15 = (uVar15 >> 3) + iVar27;
                  goto LAB_142737aad;
                }
LAB_142737895:
                if ((puVar17 < local_b8) && ((uint)*puVar22 == (uint)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 4);
                  puVar22 = (ulonglong *)((longlong)puVar22 + 4);
                }
                if ((puVar17 < local_c0) && ((short)*puVar22 == (short)*puVar17)) {
                  puVar17 = (ulonglong *)((longlong)puVar17 + 2);
                  puVar22 = (ulonglong *)((longlong)puVar22 + 2);
                }
                if (puVar17 < local_1e8) {
                  puVar17 = (ulonglong *)
                            ((longlong)puVar17 + (ulonglong)((char)*puVar22 == (char)*puVar17));
                }
                uVar15 = (int)puVar17 - (int)local_188;
              }
LAB_142737aad:
              if ((int)uVar43 < (int)(uVar15 + 4)) {
                uVar43 = uVar15 + 4;
                local_1d0 = puVar54;
              }
            }
          }
          else {
            if ((uVar13 - 4 < uVar36) ||
               (puVar57 = (uint *)((ulonglong)(uVar36 - uVar6) + (longlong)local_1b8),
               *puVar57 != uVar53)) goto LAB_1427375ff;
            puVar7 = (ulonglong *)((longlong)puVar48 + (ulonglong)uVar15);
            if (local_1e8 < puVar7) {
              puVar7 = local_1e8;
            }
            puVar17 = (ulonglong *)(puVar57 + 1);
            puVar54 = (ulonglong *)((longlong)puVar7 + -7);
            puVar22 = local_188;
            if (local_188 < puVar54) {
              uVar51 = *local_188 ^ *puVar17;
              if (uVar51 == 0) {
                uVar16 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar51 != 0) {
                  for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar16 = (uint)lVar8;
              }
              if (*puVar17 == *local_188) {
                puVar22 = (ulonglong *)((longlong)puVar48 + 0xc);
                puVar17 = (ulonglong *)(puVar57 + 3);
                goto LAB_1427377c5;
              }
              uVar16 = uVar16 >> 3;
            }
            else {
LAB_1427377c5:
              if (puVar22 < puVar54) {
                iVar27 = iVar49 + (int)puVar22;
LAB_1427377d2:
                if (*puVar17 == *puVar22) goto code_r0x0001427377dd;
                uVar51 = *puVar22 ^ *puVar17;
                if (uVar51 == 0) {
                  uVar16 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar51 != 0) {
                    for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar16 = (uint)lVar8;
                }
                uVar16 = (uVar16 >> 3) + iVar27;
                goto LAB_1427378f0;
              }
LAB_1427377ed:
              if ((puVar22 < (ulonglong *)((longlong)puVar7 + -3)) &&
                 ((uint)*puVar17 == (uint)*puVar22)) {
                puVar22 = (ulonglong *)((longlong)puVar22 + 4);
                puVar17 = (ulonglong *)((longlong)puVar17 + 4);
              }
              if ((puVar22 < (ulonglong *)((longlong)puVar7 + -1)) &&
                 ((short)*puVar17 == (short)*puVar22)) {
                puVar22 = (ulonglong *)((longlong)puVar22 + 2);
                puVar17 = (ulonglong *)((longlong)puVar17 + 2);
              }
              if (puVar22 < puVar7) {
                puVar22 = (ulonglong *)
                          ((longlong)puVar22 + (ulonglong)((char)*puVar17 == (char)*puVar22));
              }
              uVar16 = (int)puVar22 - (int)local_188;
            }
LAB_1427378f0:
            uVar4 = uVar16 + 4;
            if (puVar7 < local_1e8) {
              puVar54 = (ulonglong *)((longlong)puVar48 + (longlong)(int)uVar16 + 4);
              if (puVar54 == puVar7) {
                puVar22 = local_150;
                if (puVar7 < local_190) {
                  uVar51 = *puVar54 ^ *local_150;
                  if (uVar51 == 0) {
                    uVar52 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar51 != 0) {
                      for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar52 = (uint)lVar8;
                  }
                  if (*local_150 == *puVar54) {
                    puVar54 = (ulonglong *)((longlong)puVar48 + (longlong)(int)uVar16 + 0xc);
                    puVar22 = local_150 + 1;
                    goto LAB_14273796a;
                  }
                  uVar52 = uVar52 >> 3;
                }
                else {
LAB_14273796a:
                  if (puVar54 < local_190) {
                    puVar17 = (ulonglong *)((ulonglong)uVar15 + (longlong)local_140);
                    if (local_1e8 < puVar17) {
                      puVar17 = local_1e8;
                    }
                    iVar27 = (int)puVar54 - (int)puVar17;
LAB_142737996:
                    if (*puVar22 == *puVar54) goto code_r0x0001427379a1;
                    uVar51 = *puVar54 ^ *puVar22;
                    if (uVar51 == 0) {
                      uVar15 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar51 != 0) {
                        for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar15 = (uint)lVar8;
                    }
                    uVar52 = (uVar15 >> 3) + iVar27;
                    goto LAB_142737ae2;
                  }
LAB_142737d9f:
                  if ((puVar54 < local_b8) && ((uint)*puVar22 == (uint)*puVar54)) {
                    puVar54 = (ulonglong *)((longlong)puVar54 + 4);
                    puVar22 = (ulonglong *)((longlong)puVar22 + 4);
                  }
                  if ((puVar54 < local_c0) && ((short)*puVar22 == (short)*puVar54)) {
                    puVar54 = (ulonglong *)((longlong)puVar54 + 2);
                    puVar22 = (ulonglong *)((longlong)puVar22 + 2);
                  }
                  if (puVar54 < local_1e8) {
                    puVar54 = (ulonglong *)
                              ((longlong)puVar54 + (ulonglong)((char)*puVar22 == (char)*puVar54));
                  }
                  uVar52 = (int)puVar54 - (int)puVar7;
                }
LAB_142737ae2:
                uVar4 = uVar4 + uVar52;
              }
            }
            puVar7 = local_190;
            if ((int)uVar43 < (int)uVar4) {
              uVar43 = uVar4;
              local_1d0 = (ulonglong *)((ulonglong)uVar36 + (longlong)local_198);
            }
          }
LAB_1427375ff:
          uVar1 = *(ushort *)(local_200 + 0x20000 + (ulonglong)(uVar36 & 0xffff) * 2);
          if ((local_1f4 < 0x81) || (uVar1 != 1)) {
LAB_142737768:
            uVar15 = (uint)uVar1;
LAB_14273776b:
            uVar15 = uVar36 - uVar15;
          }
          else {
            if (iVar30 == 0) {
              iVar30 = 1;
              if (!bVar62 || !bVar3) goto LAB_142737768;
              uVar9 = uVar35;
              puVar54 = local_188;
              if (local_188 < puVar7) {
LAB_14273772f:
                if (*puVar54 == uVar35) goto code_r0x00014273773b;
                uVar9 = *puVar54 ^ uVar35;
                if (uVar9 == 0) {
                  uVar15 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar9 != 0) {
                    for (; (uVar9 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar15 = (uint)lVar8;
                }
                puVar54 = (ulonglong *)((longlong)puVar54 + (ulonglong)(uVar15 >> 3));
                goto LAB_142737a87;
              }
LAB_142737747:
              for (; (puVar54 < local_1e8 && ((char)*puVar54 == (char)uVar9));
                  puVar54 = (ulonglong *)((longlong)puVar54 + 1)) {
                uVar9 = uVar9 >> 8;
              }
LAB_142737a87:
              uVar9 = (ulonglong)(uint)((int)puVar54 - (int)local_188) + 4;
              iVar30 = 2;
            }
            uVar15 = uVar36 - 1;
            if (((0xfffffffc < uVar15 - uVar13) || (iVar30 != 2)) || (uVar15 < uVar59))
            goto LAB_142737768;
            local_1c0 = (ulonglong *)CONCAT44(local_1c0._4_4_,uVar43);
            puVar54 = local_118;
            if (uVar13 <= uVar15) {
              puVar54 = local_198;
            }
            uVar51 = (ulonglong)uVar15;
            iVar30 = 2;
            if (*(uint *)((longlong)puVar54 + uVar51) != uVar53) goto LAB_142737768;
            puVar22 = (ulonglong *)((longlong)puVar54 + uVar51);
            puVar17 = local_1e0;
            if (uVar13 <= uVar15) {
              puVar17 = local_1e8;
            }
            puVar18 = (ulonglong *)((longlong)puVar22 + 4);
            puVar34 = puVar18;
            if (puVar18 < (ulonglong *)((longlong)puVar17 + -7)) {
              pcVar46 = (char *)((longlong)puVar54 + uVar51 + 4);
LAB_1427376b5:
              if (*puVar34 == uVar35) goto code_r0x0001427376c1;
              uVar51 = *puVar34 ^ uVar35;
              if (uVar51 == 0) {
                uVar36 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar51 != 0) {
                  for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar36 = (uint)lVar8;
              }
              puVar54 = (ulonglong *)(pcVar46 + (uVar36 >> 3));
              goto LAB_1427379ff;
            }
LAB_1427376ce:
            puVar54 = puVar34;
            if (puVar34 < puVar17) {
              lVar8 = (longlong)puVar17 - (longlong)puVar34;
              uVar51 = uVar35;
              do {
                puVar54 = puVar34;
                if ((char)*puVar34 != (char)uVar51) break;
                puVar34 = (ulonglong *)((longlong)puVar34 + 1);
                uVar51 = uVar51 >> 8;
                lVar8 = lVar8 + -1;
                puVar54 = puVar17;
              } while (lVar8 != 0);
            }
LAB_1427379ff:
            uVar51 = (longlong)puVar54 - (longlong)puVar18;
            uVar33 = (uVar51 & 0xffffffff) + 4;
            puVar54 = local_150;
            if ((uVar15 < uVar13) &&
               (puVar54 = local_1b8, (ulonglong *)(uVar33 + (longlong)puVar22) == local_1e0)) {
              bVar2 = (char)uVar51 * '\b' & 0x1f;
              uVar36 = uVar53 << bVar2 | uVar53 >> 0x20 - bVar2;
              if ((uVar51 & 3) == 0) {
                uVar36 = uVar53;
              }
              uVar51 = (ulonglong)uVar36 * 0x100000001;
              puVar17 = local_150;
              if (local_150 < puVar7) {
LAB_142737a62:
                if (*puVar17 == uVar51) goto code_r0x000142737a6e;
                uVar51 = *puVar17 ^ uVar51;
                if (uVar51 == 0) {
                  uVar36 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar51 != 0) {
                    for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar36 = (uint)lVar8;
                }
                puVar17 = (ulonglong *)((longlong)puVar17 + (ulonglong)(uVar36 >> 3));
                goto LAB_142737b18;
              }
LAB_142737c2a:
              for (; (puVar17 < local_1e8 && ((char)*puVar17 == (char)uVar51));
                  puVar17 = (ulonglong *)((longlong)puVar17 + 1)) {
                uVar51 = uVar51 >> 8;
              }
LAB_142737b18:
              uVar33 = uVar33 + (uint)((int)puVar17 - (int)local_150);
            }
            puVar17 = puVar22;
            do {
              puVar18 = puVar17;
              if (puVar18 < (ulonglong *)((longlong)puVar54 + 4)) break;
              puVar17 = (ulonglong *)((longlong)puVar18 + -4);
            } while (*(uint *)((longlong)puVar18 + -4) == uVar53);
            puVar17 = puVar18;
            if (puVar54 < puVar18) {
              lVar8 = 0;
              do {
                if (*(char *)((longlong)puVar18 + lVar8 + -1) !=
                    *(char *)((longlong)&local_4c + lVar8 + 3)) {
                  puVar17 = (ulonglong *)((longlong)puVar18 + lVar8);
                  break;
                }
                lVar44 = lVar8 + -1;
                lVar8 = lVar8 + -1;
                puVar17 = puVar54;
              } while (puVar54 < (ulonglong *)((longlong)puVar18 + lVar44));
            }
            uVar51 = (longlong)puVar22 - (longlong)puVar17;
            iVar30 = (int)uVar51;
            local_4c = uVar53;
            if ((uVar6 < uVar13 && uVar13 <= uVar15) &&
                (ulonglong *)((longlong)puVar22 - (uVar51 & 0xffffffff)) == local_150) {
              bVar2 = (char)uVar51 * -8 & 0x1f;
              puVar54 = local_1e0;
              puVar22 = local_158;
              local_4c = uVar53 << bVar2 | uVar53 >> 0x20 - bVar2;
              if ((-iVar30 & 3U) == 0) {
                local_4c = uVar53;
              }
              do {
                puVar17 = puVar54;
                if ((longlong)puVar22 < 4) {
                  if ((longlong)puVar22 < 1) goto LAB_142737c92;
                  break;
                }
                puVar54 = (ulonglong *)((longlong)puVar17 + -4);
                puVar22 = (ulonglong *)((longlong)puVar22 + -4);
              } while (*(uint *)((longlong)puVar17 + -4) == local_4c);
              pcVar46 = (char *)((longlong)&local_4c + 3);
              do {
                if (*(char *)((longlong)puVar17 + -1) != *pcVar46) break;
                puVar17 = (ulonglong *)((longlong)puVar17 + -1);
                pcVar46 = pcVar46 + -1;
              } while (local_1b8 < puVar17);
LAB_142737c92:
              iVar30 = ((int)local_1e0 - (int)puVar17) + iVar30;
            }
            uVar36 = uVar15 - iVar30;
            if (uVar15 - iVar30 <= uVar59) {
              uVar36 = uVar59;
            }
            uVar51 = (uVar15 - uVar36) + uVar33;
            if ((uVar9 < uVar33) || (uVar51 < uVar9)) {
              iVar30 = 2;
              uVar15 = uVar13;
              if (0xfffffffc < uVar36 - uVar13) goto LAB_14273776d;
              if (uVar9 <= uVar51) {
                uVar51 = uVar9;
              }
              if ((ulonglong)(longlong)(int)uVar43 < uVar51) {
                if (0xffff < (longlong)local_1a8 - (ulonglong)uVar36) goto LAB_142737e0e;
                local_1d0 = (ulonglong *)((ulonglong)uVar36 + (longlong)local_198);
                uVar43 = (uint)uVar51;
              }
              uVar15 = (uint)*(ushort *)(local_200 + 0x20000 + (ulonglong)(uVar36 & 0xffff) * 2);
              if (uVar15 <= uVar36) goto LAB_14273776b;
              goto LAB_142737e0e;
            }
            uVar15 = (uVar15 - (int)uVar9) + (int)uVar33;
            if (0xfffffffc < uVar15 - uVar13) {
              uVar15 = uVar13;
            }
            iVar30 = 2;
          }
LAB_14273776d:
          uVar36 = uVar15;
          if ((uVar36 < uVar59) || (bVar61 = iVar37 < 2, iVar37 = iVar37 + -1, bVar61))
          goto LAB_142737e0e;
        } while( true );
      }
      goto LAB_142737e41;
    }
LAB_14273a553:
    uVar9 = (longlong)local_70 - (longlong)param_2;
    if ((param_7 == 0) ||
       (iVar49 = 0, (char *)((longlong)param_3 + uVar9 + (uVar9 + 0xf0) / 0xff + 1) <= local_108)) {
      pcVar46 = (char *)((longlong)param_3 + 1);
      uVar13 = (uint)local_88;
      if (uVar9 < 0xf) {
        *(char *)param_3 = (char)uVar9 << 4;
      }
      else {
        uVar35 = uVar9 - 0xf;
        *(char *)param_3 = -0x10;
        pcVar50 = pcVar46;
        if (0xfe < uVar35) {
          uVar35 = (uVar9 - 0x10e) / 0xff;
          memset(pcVar46,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
          pcVar50 = (char *)((longlong)param_3 + uVar35 + 2);
          param_3 = (ulonglong *)((longlong)param_3 + uVar35 + 1);
          uVar35 = (uVar9 + uVar35 * -0xff) - 0x10e;
        }
        pcVar46 = (char *)((longlong)param_3 + 2);
        *pcVar50 = (char)uVar35;
      }
      memcpy(pcVar46,param_2,uVar9);
      *local_58 = uVar13;
      iVar49 = ((int)pcVar46 + (int)uVar9) - (int)local_78;
      goto LAB_14273a688;
    }
  }
  else {
    iVar49 = 0;
    local_148 = (ulonglong *)CONCAT71(local_148._1_7_,*(char *)(param_1 + 0x40026));
    local_a0 = (ulonglong *)CONCAT44(local_a0._4_4_,-(uint)(*(char *)(param_1 + 0x40026) != '\0'));
    uVar13 = *(uint *)(&DAT_149dffe68 + uVar9 * 4);
    puVar7 = malloc(0x10030);
    local_160 = puVar7;
    if (puVar7 != (ulonglong *)0x0) {
      local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,*local_58);
      lVar8 = (longlong)(int)*local_58;
      local_b0 = (ulonglong *)((longlong)param_2 + lVar8);
      puVar25 = (ulonglong *)((longlong)param_2 + lVar8 + -0xc);
      local_168 = (ulonglong *)((longlong)param_5 + (longlong)local_78);
      *local_58 = 0;
      uVar6 = 0xfff;
      if (uVar13 < 0xfff) {
        uVar6 = uVar13;
      }
      local_e8 = (ulonglong *)(ulonglong)uVar6;
      puVar45 = local_78;
      if (param_2 <= puVar25) {
        local_1f0 = (ulonglong *)((longlong)param_2 + lVar8 + -5);
        local_f8 = local_b0 + -1;
        local_e0 = (ulonglong *)((longlong)local_b0 + -6);
        local_c0 = (ulonglong *)((longlong)puVar7 + 0xc);
        local_a8 = (ulonglong *)((longlong)puVar7 + 0x4c);
        local_d8 = (ulonglong *)((longlong)puVar7 + 0x1c);
        local_60 = puVar7 + 4;
        local_68 = puVar7 + 10;
        puVar48 = param_2;
        local_1c0 = puVar25;
LAB_1427343de:
        local_1a0 = *(ulonglong **)(&DAT_00040008 + param_1);
        uVar13 = *(uint *)(param_1 + 0x40018);
        puVar54 = (ulonglong *)(ulonglong)uVar13;
        local_158 = (ulonglong *)((longlong)puVar48 - (longlong)local_1a0);
        uVar59 = uVar13 + (int)local_158;
        uVar6 = *(uint *)(param_1 + 0x4001c);
        local_188 = (ulonglong *)(ulonglong)uVar6;
        uVar14 = uVar6 + 0x10000;
        local_d0 = (char *)CONCAT44(local_d0._4_4_,uVar14);
        uVar36 = (uVar13 - 0xffff) + (int)local_158;
        if (uVar59 < uVar14) {
          uVar36 = uVar6;
        }
        uVar32 = (uint)*puVar48;
        puVar22 = (ulonglong *)(ulonglong)uVar32;
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x40020);
        local_178 = (ulonglong *)-(longlong)puVar54;
        if (*(uint *)(param_1 + 0x40020) < uVar59) {
          do {
            uVar35 = (ulonglong)
                     ((uint)(*(int *)((char *)((longlong)local_1a0 + (longlong)local_178) + uVar9) *
                            -0x61c8864f) >> 0x11);
            uVar53 = (uint)uVar9;
            uVar43 = uVar53 - *(int *)(param_1 + uVar35 * 4);
            if (0xfffe < uVar43) {
              uVar43 = 0xffff;
            }
            *(short *)(param_1 + 0x20000 + (ulonglong)(uVar53 & 0xffff) * 2) = (short)uVar43;
            *(uint *)(param_1 + uVar35 * 4) = uVar53;
            uVar9 = uVar9 + 1;
          } while (uVar59 != uVar9);
        }
        local_190 = *(ulonglong **)(param_1 + 0x40010);
        *(uint *)(param_1 + 0x40020) = uVar59;
        uVar53 = *(uint *)(param_1 + (ulonglong)((uint)*puVar48 * -0x61c8864f >> 0x11) * 4);
        bVar62 = uVar32 >> 0x18 == (uVar32 & 0xff);
        bVar3 = uVar32 >> 0x10 == (uVar32 & 0xffff);
        local_1a8 = (ulonglong *)CONCAT71(local_1a8._1_7_,bVar62 && bVar3);
        local_128 = param_2;
        local_1b8 = puVar48;
        local_130 = puVar45;
        if ((uVar36 <= uVar53) && (0 < local_1f4)) {
          puVar17 = (ulonglong *)((longlong)puVar48 - (longlong)param_2);
          local_70 = (char *)((longlong)puVar54 - (longlong)local_188);
          local_118 = (ulonglong *)((longlong)local_190 + (longlong)local_70);
          local_158 = (ulonglong *)((longlong)local_158 + (longlong)puVar54);
          local_178 = (ulonglong *)((longlong)local_178 + (longlong)local_1a0);
          local_1d8 = (ulonglong *)((longlong)puVar48 + 4);
          uVar15 = uVar13 - 4;
          local_150 = (ulonglong *)CONCAT44(local_150._4_4_,uVar15);
          uVar9 = (longlong)puVar22 * 0x100000001;
          local_140 = (ulonglong *)((longlong)local_190 - (longlong)local_188);
          iVar30 = (int)puVar48;
          uVar16 = -iVar30 - 4;
          local_138 = (ulonglong *)(ulonglong)uVar16;
          iVar49 = 0;
          uVar51 = 3;
          uVar43 = 3;
          local_198 = (ulonglong *)((ulonglong)local_198 & 0xffffffff00000000);
          uVar35 = 0;
          local_120 = (ulonglong *)0x0;
          local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,uVar59);
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,uVar36);
          iVar37 = local_1f4;
LAB_1427345f3:
          if (((char)local_148 == '\0') || (7 < uVar59 - uVar53)) {
            if (uVar13 < uVar53 || uVar13 - uVar53 == 0) {
              puVar7 = (ulonglong *)((ulonglong)uVar53 + (longlong)local_178);
              if (*(short *)((longlong)puVar48 + (longlong)(int)uVar43 + -1) !=
                  *(short *)((longlong)(int)uVar43 + -1 + (longlong)puVar7)) goto LAB_14273460f;
              if ((uint)*puVar7 != uVar32) {
                uVar4 = 0;
                goto LAB_142734617;
              }
              puVar18 = (ulonglong *)((longlong)puVar7 + 4);
              puVar34 = local_1d8;
              if (local_1d8 < puVar25) {
                uVar33 = *local_1d8 ^ *puVar18;
                if (uVar33 == 0) {
                  uVar4 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar4 = (uint)lVar8;
                }
                if (*puVar18 == *local_1d8) {
                  puVar34 = (ulonglong *)((longlong)puVar48 + 0xc);
                  puVar18 = (ulonglong *)((longlong)puVar7 + 0xc);
                  goto LAB_142734b12;
                }
                uVar4 = uVar4 >> 3;
              }
              else {
LAB_142734b12:
                if (puVar34 < puVar25) {
                  iVar27 = uVar16 + (int)puVar34;
LAB_142734b22:
                  if (*puVar18 == *puVar34) goto code_r0x000142734b2d;
                  uVar33 = *puVar34 ^ *puVar18;
                  if (uVar33 == 0) {
                    uVar4 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar4 = (uint)lVar8;
                  }
                  uVar4 = (uVar4 >> 3) + iVar27;
                  goto LAB_142734cbb;
                }
LAB_142734b3d:
                if ((puVar34 < local_f8) && ((uint)*puVar18 == (uint)*puVar34)) {
                  puVar34 = (ulonglong *)((longlong)puVar34 + 4);
                  puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                }
                if ((puVar34 < local_e0) && ((short)*puVar18 == (short)*puVar34)) {
                  puVar34 = (ulonglong *)((longlong)puVar34 + 2);
                  puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                }
                if (puVar34 < local_1f0) {
                  puVar34 = (ulonglong *)
                            ((longlong)puVar34 + (ulonglong)((char)*puVar18 == (char)*puVar34));
                }
                uVar4 = (int)puVar34 - (int)local_1d8;
              }
LAB_142734cbb:
              uVar4 = uVar4 + 4;
              bVar61 = (int)uVar43 < (int)uVar4;
              uVar43 = (uint)uVar51;
              if (bVar61) {
                uVar51 = (ulonglong)uVar4;
                uVar43 = uVar4;
                local_120 = puVar7;
              }
            }
            else {
              if ((uVar15 < uVar53) ||
                 (puVar57 = (uint *)((ulonglong)(uVar53 - uVar6) + (longlong)local_190),
                 *puVar57 != uVar32)) goto LAB_14273460f;
              puVar25 = (ulonglong *)((ulonglong)(uVar13 - uVar53) + (longlong)puVar48);
              puVar7 = puVar25;
              if (local_1f0 < puVar25) {
                puVar7 = local_1f0;
              }
              puVar19 = (ulonglong *)(puVar57 + 1);
              puVar18 = (ulonglong *)((longlong)puVar7 + -7);
              puVar34 = local_1d8;
              if (local_1d8 < puVar18) {
                uVar33 = *local_1d8 ^ *puVar19;
                if (uVar33 == 0) {
                  uVar52 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar52 = (uint)lVar8;
                }
                if (*puVar19 == *local_1d8) {
                  puVar34 = (ulonglong *)((longlong)puVar48 + 0xc);
                  puVar19 = (ulonglong *)(puVar57 + 3);
                  goto LAB_1427349bd;
                }
                uVar52 = uVar52 >> 3;
              }
              else {
LAB_1427349bd:
                if (puVar34 < puVar18) {
                  iVar27 = uVar16 + (int)puVar34;
LAB_1427349cd:
                  if (*puVar19 == *puVar34) goto code_r0x0001427349d8;
                  uVar33 = *puVar34 ^ *puVar19;
                  if (uVar33 == 0) {
                    uVar4 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar4 = (uint)lVar8;
                  }
                  uVar52 = (uVar4 >> 3) + iVar27;
                  goto LAB_142734ba8;
                }
LAB_1427349e8:
                if ((puVar34 < (ulonglong *)((longlong)puVar7 + -3)) &&
                   ((uint)*puVar19 == (uint)*puVar34)) {
                  puVar34 = (ulonglong *)((longlong)puVar34 + 4);
                  puVar19 = (ulonglong *)((longlong)puVar19 + 4);
                }
                if ((puVar34 < (ulonglong *)((longlong)puVar7 + -1)) &&
                   ((short)*puVar19 == (short)*puVar34)) {
                  puVar34 = (ulonglong *)((longlong)puVar34 + 2);
                  puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                }
                if (puVar34 < puVar7) {
                  puVar34 = (ulonglong *)
                            ((longlong)puVar34 + (ulonglong)((char)*puVar19 == (char)*puVar34));
                }
                uVar52 = (int)puVar34 - (int)local_1d8;
              }
LAB_142734ba8:
              uVar4 = uVar52 + 4;
              if ((puVar7 < local_1f0) &&
                 ((ulonglong *)((longlong)puVar48 + (longlong)(int)uVar52 + 4) == puVar7)) {
                puVar34 = local_1a0;
                puVar18 = puVar7;
                if (puVar7 < local_1c0) {
                  uVar33 = *puVar7 ^ *local_1a0;
                  if (uVar33 == 0) {
                    uVar52 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar52 = (uint)lVar8;
                  }
                  if (*local_1a0 == *puVar7) {
                    puVar18 = puVar7 + 1;
                    puVar34 = local_1a0 + 1;
                    goto LAB_142734c1b;
                  }
                  uVar52 = uVar52 >> 3;
                }
                else {
LAB_142734c1b:
                  if (puVar18 < local_1c0) {
                    if (local_1f0 < puVar25) {
                      puVar25 = local_1f0;
                    }
                    iVar27 = (int)puVar18 - (int)puVar25;
LAB_142734c32:
                    if (*puVar34 == *puVar18) goto code_r0x000142734c3d;
                    uVar33 = *puVar18 ^ *puVar34;
                    if (uVar33 == 0) {
                      uVar52 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar52 = (uint)lVar8;
                    }
                    uVar52 = (uVar52 >> 3) + iVar27;
                    goto LAB_142734cfa;
                  }
LAB_142734c4d:
                  if ((puVar18 < local_f8) && ((uint)*puVar34 == (uint)*puVar18)) {
                    puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                    puVar34 = (ulonglong *)((longlong)puVar34 + 4);
                  }
                  if ((puVar18 < local_e0) && ((short)*puVar34 == (short)*puVar18)) {
                    puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                    puVar34 = (ulonglong *)((longlong)puVar34 + 2);
                  }
                  if (puVar18 < local_1f0) {
                    puVar18 = (ulonglong *)
                              ((longlong)puVar18 + (ulonglong)((char)*puVar34 == (char)*puVar18));
                  }
                  uVar52 = (int)puVar18 - (int)puVar7;
                }
LAB_142734cfa:
                uVar4 = uVar4 + uVar52;
              }
              puVar25 = local_1c0;
              if ((int)uVar43 < (int)uVar4) {
                uVar51 = (ulonglong)uVar4;
                uVar43 = uVar4;
                local_120 = (ulonglong *)((ulonglong)uVar53 + (longlong)local_178);
              }
            }
          }
          else {
LAB_14273460f:
            uVar4 = 0;
          }
LAB_142734617:
          iVar27 = (int)local_118;
          uVar52 = uVar53;
          if (((uVar4 == uVar43) && (uVar43 + uVar53 <= uVar59)) && (3 < (int)uVar4)) {
            iVar23 = 0;
            iVar29 = 0x10;
            uVar40 = 1;
            do {
              uVar1 = *(ushort *)
                       (local_200 + 0x20000 + (ulonglong)(ushort)((short)iVar23 + (short)uVar53) * 2
                       );
              iVar26 = iVar29 >> 4;
              uVar52 = (uint)uVar1;
              bVar61 = uVar40 < uVar52;
              iVar29 = iVar29 + 1;
              if (bVar61) {
                iVar29 = 0x10;
              }
              uVar5 = (uint)uVar1;
              if (uVar52 < uVar40) {
                uVar5 = uVar40;
              }
              uVar40 = uVar5;
              if (bVar61) {
                iVar49 = iVar23;
              }
              iVar23 = iVar26 + iVar23;
            } while (iVar23 < (int)(uVar4 - 3));
            uVar52 = uVar40;
            if (uVar53 < uVar40) {
              uVar52 = 0;
            }
            if (uVar40 < 2) {
              uVar52 = 0;
            }
            uVar52 = uVar53 - uVar52;
            puVar25 = local_1c0;
            if (uVar40 < 2) goto LAB_1427346cd;
            uVar51 = (ulonglong)uVar4;
            bVar61 = uVar53 < uVar40;
            uVar43 = uVar4;
            uVar53 = uVar52;
            if (bVar61) goto LAB_142735017;
          }
          else {
LAB_1427346cd:
            if ((*(short *)(local_200 + 0x20000 + (ulonglong)(uVar52 & 0xffff) * 2) == 1) &&
               (iVar49 == 0)) {
              if ((int)local_198 == 0) {
                local_198 = (ulonglong *)CONCAT44(local_198._4_4_,1);
                if (!bVar62 || !bVar3) goto LAB_142734939;
                uVar35 = uVar9;
                puVar7 = local_1d8;
                if (local_1d8 < puVar25) {
LAB_1427348d6:
                  if (*puVar7 == uVar9) goto code_r0x0001427348e2;
                  uVar35 = *puVar7 ^ uVar9;
                  if (uVar35 == 0) {
                    uVar53 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar35 != 0) {
                      for (; (uVar35 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar53 = (uint)lVar8;
                  }
                  puVar7 = (ulonglong *)((longlong)puVar7 + (ulonglong)(uVar53 >> 3));
                  goto LAB_142734ad5;
                }
LAB_1427348ee:
                for (; (puVar7 < local_1f0 && ((char)*puVar7 == (char)uVar35));
                    puVar7 = (ulonglong *)((longlong)puVar7 + 1)) {
                  uVar35 = uVar35 >> 8;
                }
LAB_142734ad5:
                uVar35 = (ulonglong)(uint)((int)puVar7 - (int)local_1d8) + 4;
                local_198 = (ulonglong *)CONCAT44(local_198._4_4_,2);
              }
              uVar53 = uVar52 - 1;
              if (((uVar53 - uVar13 < 0xfffffffd) && ((int)local_198 == 2)) && (uVar36 <= uVar53)) {
                puVar7 = local_140;
                if (uVar13 <= uVar53) {
                  puVar7 = local_178;
                }
                uVar33 = (ulonglong)uVar53;
                local_198 = (ulonglong *)CONCAT44(local_198._4_4_,2);
                if (*(uint *)((longlong)puVar7 + uVar33) == uVar32) {
                  puVar18 = (ulonglong *)((longlong)puVar7 + uVar33);
                  puVar34 = local_118;
                  if (uVar13 <= uVar53) {
                    puVar34 = local_1f0;
                  }
                  puVar19 = (ulonglong *)((longlong)puVar18 + 4);
                  puVar38 = puVar19;
                  if (puVar19 < (ulonglong *)((longlong)puVar34 + -7)) {
                    pcVar46 = (char *)((longlong)puVar7 + uVar33 + 4);
LAB_142734782:
                    if (*puVar38 == uVar9) goto code_r0x00014273478e;
                    uVar33 = *puVar38 ^ uVar9;
                    if (uVar33 == 0) {
                      uVar4 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar4 = (uint)lVar8;
                    }
                    puVar7 = (ulonglong *)(pcVar46 + (uVar4 >> 3));
                    goto LAB_142734a4a;
                  }
LAB_14273479b:
                  puVar7 = puVar38;
                  if (puVar38 < puVar34) {
                    lVar8 = (longlong)puVar34 - (longlong)puVar38;
                    uVar33 = uVar9;
                    do {
                      puVar7 = puVar38;
                      if ((char)*puVar38 != (char)uVar33) break;
                      puVar38 = (ulonglong *)((longlong)puVar38 + 1);
                      uVar33 = uVar33 >> 8;
                      lVar8 = lVar8 + -1;
                      puVar7 = puVar34;
                    } while (lVar8 != 0);
                  }
LAB_142734a4a:
                  uVar39 = (longlong)puVar7 - (longlong)puVar19;
                  uVar33 = (uVar39 & 0xffffffff) + 4;
                  puVar7 = local_1a0;
                  if ((uVar53 < uVar13) &&
                     (puVar7 = local_190, (ulonglong *)((longlong)puVar18 + uVar33) == local_118)) {
                    bVar2 = (char)uVar39 * '\b' & 0x1f;
                    puVar34 = (ulonglong *)(ulonglong)(uVar32 << bVar2 | uVar32 >> 0x20 - bVar2);
                    if ((uVar39 & 3) == 0) {
                      puVar34 = puVar22;
                    }
                    uVar39 = (longlong)puVar34 * 0x100000001;
                    puVar34 = local_1a0;
                    if (local_1a0 < puVar25) {
LAB_142734ab0:
                      if (*puVar34 == uVar39) goto code_r0x000142734abc;
                      uVar39 = *puVar34 ^ uVar39;
                      if (uVar39 == 0) {
                        uVar4 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar39 != 0) {
                          for (; (uVar39 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar4 = (uint)lVar8;
                      }
                      puVar34 = (ulonglong *)((longlong)puVar34 + (ulonglong)(uVar4 >> 3));
                      goto LAB_142734d2d;
                    }
LAB_142734e44:
                    for (; (puVar34 < local_1f0 && ((char)*puVar34 == (char)uVar39));
                        puVar34 = (ulonglong *)((longlong)puVar34 + 1)) {
                      uVar39 = uVar39 >> 8;
                    }
LAB_142734d2d:
                    uVar33 = uVar33 + (uint)((int)puVar34 - (int)local_1a0);
                  }
                  puVar34 = puVar18;
                  do {
                    puVar19 = puVar34;
                    if (puVar19 < (ulonglong *)((longlong)puVar7 + 4)) break;
                    puVar34 = (ulonglong *)((longlong)puVar19 + -4);
                  } while (*(uint *)((longlong)puVar19 + -4) == uVar32);
                  puVar34 = puVar19;
                  if (puVar7 < puVar19) {
                    lVar8 = 0;
                    do {
                      if (*(char *)((longlong)puVar19 + lVar8 + -1) !=
                          *(char *)((longlong)&local_4c + lVar8 + 3)) {
                        puVar34 = (ulonglong *)((longlong)puVar19 + lVar8);
                        break;
                      }
                      lVar44 = lVar8 + -1;
                      lVar8 = lVar8 + -1;
                      puVar34 = puVar7;
                    } while (puVar7 < (ulonglong *)((longlong)puVar19 + lVar44));
                  }
                  uVar39 = (longlong)puVar18 - (longlong)puVar34;
                  iVar49 = (int)uVar39;
                  local_4c = uVar32;
                  if ((uVar6 < uVar13 && uVar13 <= uVar53) &&
                      (ulonglong *)((longlong)puVar18 - (uVar39 & 0xffffffff)) == local_1a0) {
                    bVar2 = (char)uVar39 * -8 & 0x1f;
                    puVar7 = local_118;
                    pcVar46 = local_70;
                    local_4c = uVar32 << bVar2 | uVar32 >> 0x20 - bVar2;
                    if ((-iVar49 & 3U) == 0) {
                      local_4c = uVar32;
                    }
                    do {
                      puVar18 = puVar7;
                      if ((longlong)pcVar46 < 4) {
                        if ((longlong)pcVar46 < 1) goto LAB_142734e62;
                        break;
                      }
                      puVar7 = (ulonglong *)((longlong)puVar18 + -4);
                      pcVar46 = pcVar46 + -4;
                    } while (*(uint *)((longlong)puVar18 + -4) == local_4c);
                    pcVar46 = (char *)((longlong)&local_4c + 3);
                    do {
                      if (*(char *)((longlong)puVar18 + -1) != *pcVar46) break;
                      puVar18 = (ulonglong *)((longlong)puVar18 + -1);
                      pcVar46 = pcVar46 + -1;
                    } while (local_190 < puVar18);
LAB_142734e62:
                    iVar49 = (iVar27 - (int)puVar18) + iVar49;
                  }
                  uVar52 = uVar53 - iVar49;
                  if (uVar53 - iVar49 <= uVar36) {
                    uVar52 = uVar36;
                  }
                  uVar41 = (ulonglong)uVar52;
                  uVar39 = (uVar53 - uVar52) + uVar33;
                  if ((uVar33 <= uVar35) && (uVar35 <= uVar39)) {
                    uVar53 = (uVar53 - (int)uVar35) + (int)uVar33;
                    if (0xfffffffc < uVar53 - uVar13) {
                      uVar53 = uVar13;
                    }
                    iVar49 = 0;
                    local_198 = (ulonglong *)CONCAT44(local_198._4_4_,2);
                    goto LAB_14273494d;
                  }
                  iVar49 = 0;
                  local_198 = (ulonglong *)CONCAT44(local_198._4_4_,2);
                  uVar53 = uVar13;
                  if (uVar52 - uVar13 < 0xfffffffd) {
                    if (uVar35 <= uVar39) {
                      uVar39 = uVar35;
                    }
                    if ((ulonglong)(longlong)(int)uVar43 < uVar39) {
                      uVar4 = uVar43;
                      if (0xffff < (longlong)local_158 - uVar41) goto LAB_142735017;
                      local_120 = (ulonglong *)(uVar41 + (longlong)local_178);
                      uVar43 = (uint)uVar39;
                      uVar51 = uVar39 & 0xffffffff;
                    }
                    iVar49 = 0;
                    uVar53 = (uint)*(ushort *)(local_200 + 0x20000 + (uVar41 & 0xffff) * 2);
                    uVar4 = uVar43;
                    if (uVar52 < uVar53) goto LAB_142735017;
                    uVar53 = uVar52 - uVar53;
                  }
                  goto LAB_14273494d;
                }
              }
            }
LAB_142734939:
            uVar53 = uVar52 - *(ushort *)
                               (local_200 + 0x20000 +
                               (ulonglong)(ushort)((short)iVar49 + (short)uVar52) * 2);
          }
LAB_14273494d:
          uVar4 = uVar43;
          if ((uVar53 < uVar36) || (bVar61 = iVar37 < 2, iVar37 = iVar37 + -1, bVar61))
          goto LAB_142735017;
          goto LAB_1427345f3;
        }
        goto LAB_14273514b;
      }
LAB_142734225:
      puVar25 = local_78;
      uVar9 = (longlong)local_b0 - (longlong)param_2;
      if ((param_7 == 0) ||
         (iVar49 = 0,
         (ulonglong *)((longlong)puVar45 + uVar9 + (uVar9 + 0xf0) / 0xff + 1) <= local_168)) {
        pcVar46 = (char *)((longlong)puVar45 + 1);
        if (uVar9 < 0xf) {
          *(char *)puVar45 = (char)uVar9 << 4;
        }
        else {
          uVar35 = uVar9 - 0xf;
          *(char *)puVar45 = -0x10;
          pcVar50 = pcVar46;
          if (0xfe < uVar35) {
            uVar35 = (uVar9 - 0x10e) / 0xff;
            memset(pcVar46,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
            pcVar50 = (char *)((longlong)puVar45 + uVar35 + 2);
            puVar45 = (ulonglong *)((longlong)puVar45 + uVar35 + 1);
            uVar35 = (uVar9 + uVar35 * -0xff) - 0x10e;
            puVar7 = local_160;
          }
          pcVar46 = (char *)((longlong)puVar45 + 2);
          *pcVar50 = (char)uVar35;
        }
        memcpy(pcVar46,param_2,uVar9);
        *local_58 = (uint)local_b8;
        iVar49 = ((int)pcVar46 + (int)uVar9) - (int)puVar25;
      }
    }
LAB_14273a67f:
    free(puVar7);
LAB_14273a688:
    if (0 < iVar49) goto LAB_14273a69c;
  }
LAB_14273a690:
  *(undefined1 *)(local_200 + 0x40027) = 1;
LAB_14273a69c:
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar49;
code_r0x0001427377dd:
  puVar22 = puVar22 + 1;
  puVar17 = puVar17 + 1;
  iVar27 = iVar27 + 8;
  if (puVar54 <= puVar22) goto LAB_1427377ed;
  goto LAB_1427377d2;
code_r0x0001427379a1:
  puVar54 = puVar54 + 1;
  puVar22 = puVar22 + 1;
  iVar27 = iVar27 + 8;
  if (local_190 <= puVar54) goto LAB_142737d9f;
  goto LAB_142737996;
code_r0x000142737885:
  puVar17 = puVar17 + 1;
  puVar22 = puVar22 + 1;
  iVar27 = iVar27 + 8;
  if (puVar7 <= puVar17) goto LAB_142737895;
  goto LAB_14273787a;
code_r0x00014273773b:
  puVar54 = puVar54 + 1;
  if (puVar7 <= puVar54) goto LAB_142737747;
  goto LAB_14273772f;
code_r0x0001427376c1:
  puVar34 = puVar34 + 1;
  pcVar46 = pcVar46 + 8;
  if ((ulonglong *)((longlong)puVar17 + -7) <= puVar34) goto LAB_1427376ce;
  goto LAB_1427376b5;
code_r0x000142737a6e:
  puVar17 = puVar17 + 1;
  if (puVar7 <= puVar17) goto LAB_142737c2a;
  goto LAB_142737a62;
LAB_142737e0e:
  local_1b0 = puVar48;
  local_138 = puVar45;
  if (3 < (int)uVar43) goto LAB_142737e6f;
LAB_142737e41:
  puVar48 = (ulonglong *)((longlong)puVar48 + 1);
  uVar14 = uVar14 + 1;
  local_1c8 = (ulonglong *)(ulonglong)(iVar49 - 1);
  local_140 = (ulonglong *)((longlong)local_140 + 1);
  param_3 = local_168;
  uVar36 = uVar32;
  if (puVar7 < puVar48) goto LAB_14273a553;
  goto LAB_142737420;
LAB_142737e6f:
  local_a8 = local_1d0;
  puVar45 = (ulonglong *)(ulonglong)uVar43;
  local_160 = puVar48;
LAB_142737e8e:
  puVar48 = local_168;
  local_130 = (ulonglong *)(longlong)(int)puVar45;
  uVar13 = uVar43;
LAB_142737eaf:
  local_140 = local_1b0;
  local_110 = local_1d0;
  local_d0 = (char *)(longlong)(int)uVar13;
  param_2 = (ulonglong *)((longlong)local_1b0 + (longlong)local_d0);
  puVar54 = local_1b0;
  if (param_2 <= puVar7) {
    puVar22 = (ulonglong *)(ulonglong)uVar13;
    local_150 = (ulonglong *)((longlong)param_2 + -2);
    local_1e0 = *(ulonglong **)(&DAT_00040008 + local_200);
    uVar6 = *(uint *)(local_200 + 0x40018);
    local_1f0 = (ulonglong *)(ulonglong)uVar6;
    local_98 = (ulonglong *)((longlong)local_150 - (longlong)local_1e0);
    uVar59 = uVar6 + (int)local_98;
    uVar36 = *(uint *)(local_200 + 0x4001c);
    local_1c8 = (ulonglong *)(ulonglong)uVar36;
    uVar14 = (uVar6 - 0xffff) + (int)local_98;
    if (uVar59 < uVar36 + 0x10000) {
      uVar14 = uVar36;
    }
    local_198 = (ulonglong *)CONCAT44(local_198._4_4_,uVar14);
    uVar32 = *(uint *)((longlong)param_2 + -2);
    uVar9 = (ulonglong)*(uint *)(local_200 + 0x40020);
    if (*(uint *)(local_200 + 0x40020) < uVar59) {
      do {
        uVar35 = (ulonglong)
                 ((uint)(*(int *)((longlong)local_1e0 + (uVar9 - (longlong)local_1f0)) * -0x61c8864f
                        ) >> 0x11);
        uVar53 = (uint)uVar9;
        uVar43 = uVar53 - *(int *)(local_200 + uVar35 * 4);
        if (0xfffe < uVar43) {
          uVar43 = 0xffff;
        }
        *(short *)(local_200 + 0x20000 + (ulonglong)(uVar53 & 0xffff) * 2) = (short)uVar43;
        *(uint *)(local_200 + uVar35 * 4) = uVar53;
        uVar9 = uVar9 + 1;
      } while (uVar59 != uVar9);
    }
    puVar17 = *(ulonglong **)(local_200 + 0x40010);
    *(uint *)(local_200 + 0x40020) = uVar59;
    uVar59 = *(uint *)(local_200 + (ulonglong)(*(uint *)local_150 * -0x61c8864f >> 0x11) * 4);
    puVar54 = puVar25;
    if (uVar14 <= uVar59) {
      local_f0 = (uint *)((longlong)local_1f0 - (longlong)local_1c8);
      local_1a8 = (ulonglong *)((longlong)puVar17 + (longlong)local_f0);
      local_120 = (ulonglong *)((longlong)local_150 - (longlong)local_1b0);
      local_98 = (ulonglong *)((longlong)local_98 + (longlong)local_1f0);
      local_1b8 = (ulonglong *)((longlong)local_1e0 - (longlong)local_1f0);
      iVar37 = (int)local_120;
      local_118 = (ulonglong *)-(longlong)iVar37;
      local_138 = (ulonglong *)((longlong)local_1b0 - (longlong)local_150);
      local_1a0 = (ulonglong *)((longlong)param_2 + 2);
      local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,uVar6 - 4);
      bVar62 = uVar32 >> 0x18 == (uVar32 & 0xff);
      bVar3 = uVar32 >> 0x10 == (uVar32 & 0xffff);
      local_c8 = CONCAT71(local_c8._1_7_,bVar62 && bVar3);
      uVar9 = (ulonglong)uVar32 * 0x100000001;
      local_158 = (ulonglong *)((longlong)puVar17 - (longlong)local_1c8);
      local_100 = (ulonglong *)((longlong)local_1b8 + -1);
      uVar53 = (-2 - uVar13) - (int)local_1b0;
      local_170 = (ulonglong *)(ulonglong)uVar53;
      local_178 = (ulonglong *)((char *)((longlong)local_1b0 + (longlong)local_d0) + -3);
      local_1d0 = local_180;
      local_90 = (ulonglong *)((char *)((longlong)local_1b0 + -2) + (longlong)local_d0);
      local_188 = (ulonglong *)0x0;
      uVar35 = 0;
      uVar43 = uVar13;
      iVar49 = local_1f4;
      local_1b0 = puVar25;
      do {
        uVar15 = uVar6 - uVar59;
        if (uVar6 < uVar59 || uVar15 == 0) {
          puVar57 = (uint *)((longlong)local_1b8 + (ulonglong)uVar59);
          puVar7 = local_190;
          if ((*(short *)((longlong)local_140 + (longlong)(int)uVar43 + -1) !=
               *(short *)((char *)((longlong)local_118 + (longlong)puVar57) +
                         (longlong)(int)uVar43 + -1)) || (*puVar57 != uVar32)) goto LAB_14273864b;
          if (iVar37 == 0) {
            uVar15 = 0;
          }
          else {
            puVar25 = (ulonglong *)((longlong)local_1e0 - (longlong)puVar57);
            if ((longlong)local_1e0 - (longlong)puVar57 < (longlong)local_138) {
              puVar25 = local_138;
            }
            uVar16 = (uint)puVar25;
            uVar4 = 1;
            lVar8 = 0;
            do {
              uVar15 = (int)uVar16 >> 0x1f & uVar16;
              if (lVar8 <= (int)uVar16) break;
              pcVar46 = (char *)((longlong)local_178 + lVar8);
              uVar4 = uVar4 - 1;
              lVar44 = lVar8 + (ulonglong)uVar59;
              lVar8 = lVar8 + -1;
              uVar15 = uVar4;
            } while (*pcVar46 == *(char *)((longlong)local_100 + lVar44));
          }
          puVar25 = (ulonglong *)(puVar57 + 1);
          puVar54 = local_1a0;
          if (local_1a0 < local_190) {
            uVar51 = *local_1a0 ^ *puVar25;
            if (uVar51 == 0) {
              uVar16 = 0x40;
            }
            else {
              lVar8 = 0;
              if (uVar51 != 0) {
                for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                }
              }
              uVar16 = (uint)lVar8;
            }
            if (*puVar25 == *local_1a0) {
              puVar25 = (ulonglong *)(puVar57 + 3);
              puVar54 = (ulonglong *)((longlong)param_2 + 10);
              goto LAB_142738497;
            }
            uVar16 = uVar16 >> 3;
          }
          else {
LAB_142738497:
            if (puVar54 < local_190) {
              iVar30 = uVar53 + (int)puVar54;
LAB_1427384a8:
              if (*puVar25 == *puVar54) goto code_r0x0001427384b7;
              uVar51 = *puVar54 ^ *puVar25;
              if (uVar51 == 0) {
                uVar16 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar51 != 0) {
                  for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar16 = (uint)lVar8;
              }
              uVar16 = (uVar16 >> 3) + iVar30;
              goto LAB_142738564;
            }
LAB_1427384c8:
            if ((puVar54 < local_b8) && ((uint)*puVar25 == (uint)*puVar54)) {
              puVar54 = (ulonglong *)((longlong)puVar54 + 4);
              puVar25 = (ulonglong *)((longlong)puVar25 + 4);
            }
            if ((puVar54 < local_c0) && ((short)*puVar25 == (short)*puVar54)) {
              puVar54 = (ulonglong *)((longlong)puVar54 + 2);
              puVar25 = (ulonglong *)((longlong)puVar25 + 2);
            }
            if (puVar54 < local_1e8) {
              puVar54 = (ulonglong *)
                        ((longlong)puVar54 + (ulonglong)((char)*puVar25 == (char)*puVar54));
            }
            uVar16 = (int)puVar54 - (int)local_1a0;
          }
LAB_142738564:
          uVar16 = (uVar16 - uVar15) + 4;
          if ((int)uVar43 < (int)uVar16) {
            local_1d0 = (ulonglong *)((longlong)puVar57 + (longlong)(int)uVar15);
            local_1b0 = (ulonglong *)((longlong)(int)uVar15 + (longlong)local_150);
            uVar43 = uVar16;
          }
        }
        else if (uVar59 <= uVar6 - 4) {
          uVar51 = (ulonglong)(uVar59 - uVar36);
          puVar57 = (uint *)((longlong)puVar17 + uVar51);
          if (*puVar57 == uVar32) {
            puVar25 = (ulonglong *)((longlong)local_150 + (ulonglong)uVar15);
            if (local_1e8 < puVar25) {
              puVar25 = local_1e8;
            }
            puVar34 = (ulonglong *)(puVar57 + 1);
            puVar54 = (ulonglong *)((longlong)puVar25 + -7);
            local_1c0 = (ulonglong *)CONCAT44(local_1c0._4_4_,uVar43);
            puVar18 = local_1a0;
            if (local_1a0 < puVar54) {
              uVar33 = *local_1a0 ^ *puVar34;
              if (uVar33 == 0) {
                uVar16 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar16 = (uint)lVar8;
              }
              if (*puVar34 == *local_1a0) {
                puVar18 = (ulonglong *)((longlong)param_2 + 10);
                puVar34 = (ulonglong *)(puVar57 + 3);
                goto LAB_14273826b;
              }
              uVar16 = uVar16 >> 3;
            }
            else {
LAB_14273826b:
              if (puVar18 < puVar54) {
                iVar30 = uVar53 + (int)puVar18;
LAB_14273827c:
                if (*puVar34 == *puVar18) goto code_r0x000142738288;
                uVar33 = *puVar18 ^ *puVar34;
                if (uVar33 == 0) {
                  uVar16 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar16 = (uint)lVar8;
                }
                uVar16 = (uVar16 >> 3) + iVar30;
                goto LAB_142738313;
              }
LAB_142738298:
              if ((puVar18 < (ulonglong *)((longlong)puVar25 + -3)) &&
                 ((uint)*puVar34 == (uint)*puVar18)) {
                puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                puVar34 = (ulonglong *)((longlong)puVar34 + 4);
              }
              if ((puVar18 < (ulonglong *)((longlong)puVar25 + -1)) &&
                 ((short)*puVar34 == (short)*puVar18)) {
                puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                puVar34 = (ulonglong *)((longlong)puVar34 + 2);
              }
              if (puVar18 < puVar25) {
                puVar18 = (ulonglong *)
                          ((longlong)puVar18 + (ulonglong)((char)*puVar34 == (char)*puVar18));
              }
              uVar16 = (int)puVar18 - (int)local_1a0;
            }
LAB_142738313:
            iVar30 = uVar16 + 4;
            if (puVar25 < local_1e8) {
              puVar54 = (ulonglong *)((longlong)local_150 + (longlong)(int)uVar16 + 4);
              if (puVar54 == puVar25) {
                puVar18 = local_1e0;
                if (puVar25 < puVar7) {
                  uVar33 = *puVar54 ^ *local_1e0;
                  if (uVar33 == 0) {
                    uVar4 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar4 = (uint)lVar8;
                  }
                  if (*local_1e0 == *puVar54) {
                    puVar54 = (ulonglong *)((longlong)local_150 + (longlong)(int)uVar16 + 0xc);
                    puVar18 = local_1e0 + 1;
                    goto LAB_142738384;
                  }
                  uVar4 = uVar4 >> 3;
                }
                else {
LAB_142738384:
                  if (puVar54 < puVar7) {
                    puVar34 = (ulonglong *)((ulonglong)uVar15 + (longlong)local_90);
                    if (local_1e8 <= puVar34) {
                      puVar34 = local_1e8;
                    }
                    iVar27 = (int)puVar54 - (int)puVar34;
LAB_1427383a3:
                    if (*puVar18 == *puVar54) goto code_r0x0001427383ae;
                    uVar33 = *puVar54 ^ *puVar18;
                    if (uVar33 == 0) {
                      uVar15 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar15 = (uint)lVar8;
                    }
                    uVar4 = (uVar15 >> 3) + iVar27;
                    goto LAB_1427385a1;
                  }
LAB_1427383be:
                  if ((puVar54 < local_b8) && ((uint)*puVar18 == (uint)*puVar54)) {
                    puVar54 = (ulonglong *)((longlong)puVar54 + 4);
                    puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                  }
                  if ((puVar54 < local_c0) && ((short)*puVar18 == (short)*puVar54)) {
                    puVar54 = (ulonglong *)((longlong)puVar54 + 2);
                    puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                  }
                  if (puVar54 < local_1e8) {
                    puVar54 = (ulonglong *)
                              ((longlong)puVar54 + (ulonglong)((char)*puVar18 == (char)*puVar54));
                  }
                  uVar4 = (int)puVar54 - (int)puVar25;
                }
LAB_1427385a1:
                iVar30 = iVar30 + uVar4;
              }
            }
            if (iVar37 == 0) {
              uVar15 = 0;
            }
            else {
              puVar25 = (ulonglong *)-uVar51;
              if ((longlong)-uVar51 < (longlong)local_138) {
                puVar25 = local_138;
              }
              uVar4 = (uint)puVar25;
              uVar16 = 1;
              lVar8 = 0;
              do {
                uVar15 = (int)uVar4 >> 0x1f & uVar4;
                if (lVar8 <= (int)uVar4) break;
                pcVar46 = (char *)((longlong)local_178 + lVar8);
                uVar16 = uVar16 - 1;
                lVar44 = lVar8 + (uVar51 - 1);
                lVar8 = lVar8 + -1;
                uVar15 = uVar16;
              } while (*pcVar46 == *(char *)((longlong)puVar17 + lVar44));
            }
            if ((int)uVar43 < (int)(iVar30 - uVar15)) {
              local_1d0 = (ulonglong *)
                          ((longlong)local_1b8 + (longlong)(int)uVar15 + (ulonglong)uVar59);
              local_1b0 = (ulonglong *)((longlong)(int)uVar15 + (longlong)local_150);
              uVar43 = iVar30 - uVar15;
            }
          }
        }
LAB_14273864b:
        uVar1 = *(ushort *)(local_200 + 0x20000 + (ulonglong)(uVar59 & 0xffff) * 2);
        if ((local_1f4 < 0x81) || (uVar1 != 1)) {
LAB_1427387bb:
          uVar59 = uVar59 - uVar1;
        }
        else {
          if ((int)local_188 == 0) {
            local_188 = (ulonglong *)&DAT_00000001;
            if (!bVar62 || !bVar3) goto LAB_1427387bb;
            puVar25 = local_1a0;
            uVar35 = uVar9;
            if (local_1a0 < puVar7) {
LAB_142738781:
              if (*puVar25 == uVar9) goto code_r0x000142738789;
              uVar35 = *puVar25 ^ uVar9;
              if (uVar35 == 0) {
                uVar15 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar15 = (uint)lVar8;
              }
              puVar25 = (ulonglong *)((longlong)puVar25 + (ulonglong)(uVar15 >> 3));
              goto LAB_142738895;
            }
LAB_142738795:
            for (; (puVar25 < local_1e8 && ((char)*puVar25 == (char)uVar35));
                puVar25 = (ulonglong *)((longlong)puVar25 + 1)) {
              uVar35 = uVar35 >> 8;
            }
LAB_142738895:
            uVar35 = (ulonglong)(uint)((int)puVar25 - (int)local_1a0) + 4;
            local_188 = (ulonglong *)0x2;
          }
          uVar15 = uVar59 - 1;
          if (((0xfffffffc < uVar15 - uVar6) || ((int)local_188 != 2)) || (uVar15 < uVar14))
          goto LAB_1427387bb;
          local_1c0 = (ulonglong *)CONCAT44(local_1c0._4_4_,uVar43);
          puVar25 = local_158;
          if (uVar6 <= uVar15) {
            puVar25 = local_1b8;
          }
          uVar51 = (ulonglong)uVar15;
          local_188 = (ulonglong *)0x2;
          if (*(uint *)((longlong)puVar25 + uVar51) != uVar32) goto LAB_1427387bb;
          puVar54 = (ulonglong *)((longlong)puVar25 + uVar51);
          puVar18 = local_1a8;
          if (uVar6 <= uVar15) {
            puVar18 = local_1e8;
          }
          puVar34 = (ulonglong *)((longlong)puVar54 + 4);
          puVar19 = puVar34;
          if (puVar34 < (ulonglong *)((longlong)puVar18 + -7)) {
            pcVar46 = (char *)((longlong)puVar25 + uVar51 + 4);
LAB_14273870d:
            if (*puVar19 == uVar9) goto code_r0x000142738719;
            uVar51 = *puVar19 ^ uVar9;
            if (uVar51 == 0) {
              uVar59 = 0x40;
            }
            else {
              lVar8 = 0;
              if (uVar51 != 0) {
                for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                }
              }
              uVar59 = (uint)lVar8;
            }
            puVar25 = (ulonglong *)(pcVar46 + (uVar59 >> 3));
            goto LAB_142738810;
          }
LAB_142738726:
          puVar25 = puVar19;
          if (puVar19 < puVar18) {
            lVar8 = (longlong)puVar18 - (longlong)puVar19;
            uVar51 = uVar9;
            do {
              puVar25 = puVar19;
              if ((char)*puVar19 != (char)uVar51) break;
              puVar19 = (ulonglong *)((longlong)puVar19 + 1);
              uVar51 = uVar51 >> 8;
              lVar8 = lVar8 + -1;
              puVar25 = puVar18;
            } while (lVar8 != 0);
          }
LAB_142738810:
          uVar51 = (longlong)puVar25 - (longlong)puVar34;
          uVar33 = (uVar51 & 0xffffffff) + 4;
          puVar25 = local_1e0;
          if ((uVar15 < uVar6) &&
             (puVar25 = puVar17, (ulonglong *)((longlong)puVar54 + uVar33) == local_1a8)) {
            bVar2 = (char)uVar51 * '\b' & 0x1f;
            uVar59 = uVar32 << bVar2 | uVar32 >> 0x20 - bVar2;
            if ((uVar51 & 3) == 0) {
              uVar59 = uVar32;
            }
            uVar51 = (ulonglong)uVar59 * 0x100000001;
            puVar18 = local_1e0;
            if (local_1e0 < puVar7) {
LAB_142738874:
              if (*puVar18 == uVar51) goto code_r0x00014273887c;
              uVar51 = *puVar18 ^ uVar51;
              if (uVar51 == 0) {
                uVar59 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar51 != 0) {
                  for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar59 = (uint)lVar8;
              }
              puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)(uVar59 >> 3));
              goto LAB_1427388c8;
            }
LAB_1427389f8:
            for (; (puVar18 < local_1e8 && ((char)*puVar18 == (char)uVar51));
                puVar18 = (ulonglong *)((longlong)puVar18 + 1)) {
              uVar51 = uVar51 >> 8;
            }
LAB_1427388c8:
            uVar33 = uVar33 + ((int)puVar18 - (uint)local_1e0);
          }
          puVar18 = puVar54;
          do {
            puVar34 = puVar18;
            if (puVar34 < (ulonglong *)((longlong)puVar25 + 4)) break;
            puVar18 = (ulonglong *)((longlong)puVar34 + -4);
          } while (*(uint *)((longlong)puVar34 + -4) == uVar32);
          puVar18 = puVar34;
          if (puVar25 < puVar34) {
            lVar8 = 0;
            do {
              if (*(char *)((longlong)puVar34 + lVar8 + -1) !=
                  *(char *)((longlong)&local_4c + lVar8 + 3)) {
                puVar18 = (ulonglong *)((longlong)puVar34 + lVar8);
                break;
              }
              lVar44 = lVar8 + -1;
              lVar8 = lVar8 + -1;
              puVar18 = puVar25;
            } while (puVar25 < (ulonglong *)((longlong)puVar34 + lVar44));
          }
          uVar51 = (longlong)puVar54 - (longlong)puVar18;
          iVar30 = (int)uVar51;
          local_4c = uVar32;
          if ((uVar36 < uVar6 && uVar6 <= uVar15) &&
              (ulonglong *)((longlong)puVar54 - (uVar51 & 0xffffffff)) == local_1e0) {
            bVar2 = (char)uVar51 * -8 & 0x1f;
            puVar25 = local_1a8;
            puVar57 = local_f0;
            local_4c = uVar32 << bVar2 | uVar32 >> 0x20 - bVar2;
            if ((-iVar30 & 3U) == 0) {
              local_4c = uVar32;
            }
            do {
              puVar54 = puVar25;
              if ((longlong)puVar57 < 4) {
                if ((longlong)puVar57 < 1) goto LAB_142738a16;
                break;
              }
              puVar25 = (ulonglong *)((longlong)puVar54 + -4);
              puVar57 = puVar57 + -1;
            } while (*(uint *)((longlong)puVar54 + -4) == local_4c);
            pcVar46 = (char *)((longlong)&local_4c + 3);
            do {
              if (*(char *)((longlong)puVar54 + -1) != *pcVar46) break;
              puVar54 = (ulonglong *)((longlong)puVar54 + -1);
              pcVar46 = pcVar46 + -1;
            } while (puVar17 < puVar54);
LAB_142738a16:
            iVar30 = ((int)local_1a8 - (int)puVar54) + iVar30;
          }
          uVar16 = uVar15 - iVar30;
          if (uVar15 - iVar30 <= uVar14) {
            uVar16 = uVar14;
          }
          uVar51 = (uVar15 - uVar16) + uVar33;
          if ((uVar35 < uVar33) || (uVar51 < uVar35)) {
            local_188 = (ulonglong *)0x2;
            uVar59 = uVar6;
            if ((uVar16 - uVar6 < 0xfffffffd) && (uVar59 = uVar16, iVar37 == 0)) {
              if (uVar35 <= uVar51) {
                uVar51 = uVar35;
              }
              if ((ulonglong)(longlong)(int)uVar43 < uVar51) {
                if (0xffff < (longlong)local_98 - (ulonglong)uVar16) goto LAB_142738b27;
                local_1d0 = (ulonglong *)((ulonglong)uVar16 + (longlong)local_1b8);
                uVar43 = (uint)uVar51;
                local_1b0 = local_150;
              }
              uVar59 = (uint)*(ushort *)(local_200 + 0x20000 + (ulonglong)(uVar16 & 0xffff) * 2);
              if (uVar16 < uVar59) goto LAB_142738b27;
              uVar59 = uVar16 - uVar59;
            }
          }
          else {
            uVar59 = (uVar15 - (int)uVar35) + (int)uVar33;
            if (0xfffffffc < uVar59 - uVar6) {
              uVar59 = uVar6;
            }
            local_188 = (ulonglong *)0x2;
          }
        }
        if ((uVar59 < uVar14) || (bVar61 = iVar49 < 2, iVar49 = iVar49 + -1, bVar61))
        goto LAB_142738b27;
      } while( true );
    }
  }
  goto LAB_142739f06;
code_r0x0001427384b7:
  puVar54 = puVar54 + 1;
  puVar25 = puVar25 + 1;
  iVar30 = iVar30 + 8;
  if (local_190 <= puVar54) goto LAB_1427384c8;
  goto LAB_1427384a8;
code_r0x000142738288:
  puVar18 = puVar18 + 1;
  puVar34 = puVar34 + 1;
  iVar30 = iVar30 + 8;
  if (puVar54 <= puVar18) goto LAB_142738298;
  goto LAB_14273827c;
code_r0x0001427383ae:
  puVar54 = puVar54 + 1;
  puVar18 = puVar18 + 1;
  iVar27 = iVar27 + 8;
  if (puVar7 <= puVar54) goto LAB_1427383be;
  goto LAB_1427383a3;
code_r0x000142738789:
  puVar25 = puVar25 + 1;
  if (puVar7 <= puVar25) goto LAB_142738795;
  goto LAB_142738781;
code_r0x000142738719:
  puVar19 = puVar19 + 1;
  pcVar46 = pcVar46 + 8;
  if ((ulonglong *)((longlong)puVar18 + -7) <= puVar19) goto LAB_142738726;
  goto LAB_14273870d;
code_r0x00014273887c:
  puVar18 = puVar18 + 1;
  if (puVar7 <= puVar18) goto LAB_1427389f8;
  goto LAB_142738874;
LAB_142738b27:
  puVar25 = local_1b0;
  local_148 = puVar17;
  local_a0 = param_2;
  local_80 = puVar22;
  if (uVar43 != uVar13) {
    bVar62 = local_1b0 < (ulonglong *)((longlong)local_130 + (longlong)local_140);
    puVar54 = local_140;
    if (bVar62 && local_160 < local_140) {
      puVar54 = local_160;
    }
    local_180 = local_1d0;
    uVar13 = uVar43;
    if (2 < (longlong)local_1b0 - (longlong)puVar54) goto code_r0x000142738b8c;
    goto LAB_142737eaf;
  }
  local_180 = local_1d0;
  puVar54 = local_1b0;
LAB_142739f06:
  local_1b0 = puVar54;
  uVar9 = (longlong)local_140 - (longlong)local_128;
  iVar49 = 0;
  local_e8 = puVar45;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)local_168 + uVar9 + uVar9 / 0xff + 9)))
  goto LAB_14273a690;
  puVar45 = (ulonglong *)((longlong)local_168 + 1);
  if (uVar9 < 0xf) {
    *(char *)local_168 = (char)uVar9 << 4;
  }
  else {
    uVar35 = uVar9 - 0xf;
    *(char *)local_168 = -0x10;
    if (0xfe < uVar35) {
      uVar35 = (uVar9 - 0x10e) / 0xff;
      memset(puVar45,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
      puVar45 = (ulonglong *)((longlong)puVar48 + uVar35 + 2);
      uVar35 = (uVar35 * -0xff + uVar9) - 0x10e;
    }
    *(char *)puVar45 = (char)uVar35;
    puVar45 = (ulonglong *)((longlong)puVar45 + 1);
  }
  pcVar50 = local_d0;
  puVar48 = local_128;
  param_3 = (ulonglong *)(uVar9 + (longlong)puVar45);
  puVar54 = local_128;
  puVar22 = puVar45;
  do {
    *puVar22 = *puVar54;
    puVar22 = puVar22 + 1;
    puVar54 = puVar54 + 1;
  } while (puVar22 < param_3);
  pcVar46 = local_d0 + -4;
  *(short *)param_3 = (short)local_140 - (short)local_110;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)param_3 + (ulonglong)pcVar46 / 0xff + 8)))
  goto LAB_14273a690;
  param_3 = (ulonglong *)((longlong)param_3 + 2);
  if (pcVar46 < &DAT_0000000f) {
    *(char *)local_168 = (char)*local_168 + (char)pcVar46;
    goto LAB_14273a121;
  }
  *(char *)local_168 = (char)*local_168 + '\x0f';
  pcVar46 = local_d0 + -0x13;
  if ((char *)0x1fd < pcVar46) {
    uVar9 = (ulonglong)(local_d0 + -0x211) / 0x1fe;
    memset(param_3,(int)CONCAT71((int7)((ulonglong)(local_d0 + -0x211) / 0x1fe),0xff),uVar9 * 2 + 2)
    ;
    param_3 = (ulonglong *)
              ((longlong)local_140 +
              (longlong)((longlong)puVar45 + ((uVar9 * 2 + 4) - (longlong)puVar48)));
    pcVar46 = pcVar50 + uVar9 * -0x1fe + -0x211;
  }
  goto LAB_14273a0f8;
code_r0x000142738b8c:
  local_f8 = local_128;
  if (bVar62 && local_160 < local_140) {
    puVar22 = (ulonglong *)((ulonglong)puVar45 & 0xffffffff);
    local_110 = local_a8;
  }
LAB_142738bbc:
  puVar45 = local_168;
  uVar6 = (uint)puVar22;
  uVar13 = 0x12;
  if ((int)uVar6 < 0x12) {
    uVar13 = uVar6;
  }
  local_60 = (ulonglong *)CONCAT44(local_60._4_4_,uVar13);
  local_68 = (ulonglong *)((longlong)(int)uVar13 + (longlong)puVar54);
  puVar48 = (ulonglong *)(longlong)(int)uVar6;
  local_128 = (ulonglong *)((longlong)puVar54 + (longlong)puVar48);
  local_a8 = (ulonglong *)((char *)((longlong)puVar48 + (longlong)puVar54) + 3);
LAB_142738c11:
  iVar49 = (int)puVar54;
  puVar25 = local_1b0;
  uVar36 = uVar43;
  local_180 = local_1d0;
  if ((longlong)local_1b0 - (longlong)puVar54 < 0x12) {
    uVar14 = (int)((longlong)local_1b0 - (longlong)puVar54) + -4 + uVar43;
    if (local_68 <= (ulonglong *)((longlong)local_1b0 + (longlong)(int)uVar43 + -4)) {
      uVar14 = uVar13;
    }
    uVar14 = (iVar49 - (int)local_1b0) + uVar14;
    if (0 < (int)uVar14) {
      puVar25 = (ulonglong *)((longlong)local_1b0 + (ulonglong)uVar14);
      local_180 = (ulonglong *)((longlong)local_1d0 + (ulonglong)uVar14);
      uVar36 = uVar43 - uVar14;
    }
  }
  local_e8 = (ulonglong *)(ulonglong)uVar36;
  puVar17 = (ulonglong *)(longlong)(int)uVar36;
  local_a0 = (ulonglong *)((longlong)puVar25 + (longlong)puVar17);
  iVar37 = (int)puVar25;
  local_160 = puVar17;
  local_130 = puVar54;
  local_e0 = puVar48;
  local_80 = puVar22;
  if (local_a0 <= puVar7) {
    puVar18 = (ulonglong *)((longlong)local_a0 + -3);
    local_1e0 = *(ulonglong **)(&DAT_00040008 + local_200);
    uVar14 = *(uint *)(local_200 + 0x40018);
    local_1f0 = (ulonglong *)(ulonglong)uVar14;
    local_d0 = (char *)((longlong)puVar18 - (longlong)local_1e0);
    uVar53 = uVar14 + (int)local_d0;
    uVar59 = *(uint *)(local_200 + 0x4001c);
    local_150 = (ulonglong *)(ulonglong)uVar59;
    uVar32 = (uVar14 - 0xffff) + (int)local_d0;
    if (uVar53 < uVar59 + 0x10000) {
      uVar32 = uVar59;
    }
    local_198 = (ulonglong *)CONCAT44(local_198._4_4_,uVar32);
    uVar15 = *(uint *)((longlong)local_a0 + -3);
    uVar9 = (ulonglong)*(uint *)(local_200 + 0x40020);
    if (*(uint *)(local_200 + 0x40020) < uVar53) {
      do {
        uVar35 = (ulonglong)
                 ((uint)(*(int *)((longlong)local_1e0 + (uVar9 - (longlong)local_1f0)) * -0x61c8864f
                        ) >> 0x11);
        uVar16 = (uint)uVar9;
        uVar43 = uVar16 - *(int *)(local_200 + uVar35 * 4);
        if (0xfffe < uVar43) {
          uVar43 = 0xffff;
        }
        *(short *)(local_200 + 0x20000 + (ulonglong)(uVar16 & 0xffff) * 2) = (short)uVar43;
        *(uint *)(local_200 + uVar35 * 4) = uVar16;
        uVar9 = uVar9 + 1;
      } while (uVar53 != uVar9);
    }
    puVar34 = *(ulonglong **)(local_200 + 0x40010);
    *(uint *)(local_200 + 0x40020) = uVar53;
    uVar53 = *(uint *)(local_200 + (ulonglong)(*(uint *)puVar18 * -0x61c8864f >> 0x11) * 4);
    if (uVar32 <= uVar53) {
      local_98 = (ulonglong *)((longlong)local_1f0 - (longlong)local_150);
      local_120 = (ulonglong *)((longlong)puVar34 + (longlong)local_98);
      local_140 = (ulonglong *)((longlong)puVar18 - (longlong)puVar25);
      local_d0 = local_d0 + (longlong)local_1f0;
      local_1b8 = (ulonglong *)((longlong)local_1e0 - (longlong)local_1f0);
      iVar27 = (int)local_140;
      local_118 = (ulonglong *)-(longlong)iVar27;
      local_1a8 = (ulonglong *)((longlong)puVar25 - (longlong)puVar18);
      local_1a0 = (ulonglong *)((longlong)local_a0 + 1);
      local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,uVar14 - 4);
      bVar62 = uVar15 >> 0x18 == (uVar15 & 0xff);
      bVar3 = uVar15 >> 0x10 == (uVar15 & 0xffff);
      local_c8 = CONCAT71(local_c8._1_7_,bVar62 && bVar3);
      uVar9 = (ulonglong)uVar15 * 0x100000001;
      local_138 = (ulonglong *)((longlong)puVar34 - (longlong)local_150);
      local_90 = (ulonglong *)((longlong)local_1b8 + -1);
      uVar16 = ~(uVar36 + iVar37);
      local_158 = (ulonglong *)(ulonglong)uVar16;
      local_1d0 = local_b0;
      local_1b0 = local_d8;
      local_178 = (ulonglong *)((longlong)((longlong)puVar25 + -4) + (longlong)puVar17);
      local_f0 = (uint *)((char *)((longlong)puVar25 + -3) + (longlong)puVar17);
      local_100 = (ulonglong *)((longlong)puVar34 + -1);
      local_188 = (ulonglong *)0x0;
      uVar35 = 0;
      uVar43 = uVar36;
      iVar30 = local_1f4;
      do {
        uVar4 = uVar14 - uVar53;
        if (uVar14 < uVar53 || uVar4 == 0) {
          puVar57 = (uint *)((longlong)local_1b8 + (ulonglong)uVar53);
          puVar7 = local_190;
          if ((*(short *)((longlong)puVar25 + (longlong)(int)uVar43 + -1) !=
               *(short *)((char *)((longlong)local_118 + (longlong)puVar57) +
                         (longlong)(int)uVar43 + -1)) || (*puVar57 != uVar15)) goto LAB_1427393df;
          if (iVar27 == 0) {
            uVar4 = 0;
          }
          else {
            puVar19 = (ulonglong *)((longlong)local_1e0 - (longlong)puVar57);
            if ((longlong)local_1e0 - (longlong)puVar57 < (longlong)local_1a8) {
              puVar19 = local_1a8;
            }
            uVar52 = (uint)puVar19;
            uVar40 = 1;
            lVar8 = 0;
            do {
              uVar4 = (int)uVar52 >> 0x1f & uVar52;
              if (lVar8 <= (int)uVar52) break;
              pcVar46 = (char *)((longlong)local_178 + lVar8);
              uVar40 = uVar40 - 1;
              lVar44 = lVar8 + (ulonglong)uVar53;
              lVar8 = lVar8 + -1;
              uVar4 = uVar40;
            } while (*pcVar46 == *(char *)((longlong)local_90 + lVar44));
          }
          puVar19 = (ulonglong *)(puVar57 + 1);
          puVar38 = local_1a0;
          if (local_1a0 < local_190) {
            uVar51 = *local_1a0 ^ *puVar19;
            if (uVar51 == 0) {
              uVar52 = 0x40;
            }
            else {
              lVar8 = 0;
              if (uVar51 != 0) {
                for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                }
              }
              uVar52 = (uint)lVar8;
            }
            if (*puVar19 == *local_1a0) {
              puVar19 = (ulonglong *)(puVar57 + 3);
              puVar38 = (ulonglong *)((longlong)local_a0 + 9);
              goto LAB_14273925e;
            }
            uVar52 = uVar52 >> 3;
          }
          else {
LAB_14273925e:
            if (puVar38 < local_190) {
              iVar29 = uVar16 + (int)puVar38;
LAB_14273926f:
              if (*puVar19 == *puVar38) goto code_r0x00014273927a;
              uVar51 = *puVar38 ^ *puVar19;
              if (uVar51 == 0) {
                uVar52 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar51 != 0) {
                  for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar52 = (uint)lVar8;
              }
              uVar52 = (uVar52 >> 3) + iVar29;
              goto LAB_1427392f9;
            }
LAB_14273928b:
            if ((puVar38 < local_b8) && ((uint)*puVar19 == (uint)*puVar38)) {
              puVar38 = (ulonglong *)((longlong)puVar38 + 4);
              puVar19 = (ulonglong *)((longlong)puVar19 + 4);
            }
            if ((puVar38 < local_c0) && ((short)*puVar19 == (short)*puVar38)) {
              puVar38 = (ulonglong *)((longlong)puVar38 + 2);
              puVar19 = (ulonglong *)((longlong)puVar19 + 2);
            }
            if (puVar38 < local_1e8) {
              puVar38 = (ulonglong *)
                        ((longlong)puVar38 + (ulonglong)((char)*puVar19 == (char)*puVar38));
            }
            uVar52 = (int)puVar38 - (int)local_1a0;
          }
LAB_1427392f9:
          uVar52 = (uVar52 - uVar4) + 4;
          if ((int)uVar43 < (int)uVar52) {
            local_1d0 = (ulonglong *)((longlong)puVar57 + (longlong)(int)uVar4);
            local_1b0 = (ulonglong *)((longlong)(int)uVar4 + (longlong)puVar18);
            uVar43 = uVar52;
          }
        }
        else if (uVar53 <= uVar14 - 4) {
          uVar51 = (ulonglong)(uVar53 - uVar59);
          puVar57 = (uint *)((longlong)puVar34 + uVar51);
          if (*puVar57 == uVar15) {
            puVar19 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar4);
            if (local_1e8 < puVar19) {
              puVar19 = local_1e8;
            }
            puVar10 = (ulonglong *)(puVar57 + 1);
            puVar38 = (ulonglong *)((longlong)puVar19 + -7);
            local_1c0 = (ulonglong *)CONCAT44(local_1c0._4_4_,uVar43);
            puVar60 = local_1a0;
            if (local_1a0 < puVar38) {
              uVar33 = *local_1a0 ^ *puVar10;
              if (uVar33 == 0) {
                uVar52 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar33 != 0) {
                  for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar52 = (uint)lVar8;
              }
              if (*puVar10 == *local_1a0) {
                puVar60 = (ulonglong *)((longlong)local_a0 + 9);
                puVar10 = (ulonglong *)(puVar57 + 3);
                goto LAB_142739039;
              }
              uVar52 = uVar52 >> 3;
            }
            else {
LAB_142739039:
              if (puVar60 < puVar38) {
                iVar29 = uVar16 + (int)puVar60;
LAB_14273904a:
                if (*puVar10 == *puVar60) goto code_r0x000142739056;
                uVar33 = *puVar60 ^ *puVar10;
                if (uVar33 == 0) {
                  uVar52 = 0x40;
                }
                else {
                  lVar8 = 0;
                  if (uVar33 != 0) {
                    for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                    }
                  }
                  uVar52 = (uint)lVar8;
                }
                uVar52 = (uVar52 >> 3) + iVar29;
                goto LAB_1427390e1;
              }
LAB_142739066:
              if ((puVar60 < (ulonglong *)((longlong)puVar19 + -3)) &&
                 ((uint)*puVar10 == (uint)*puVar60)) {
                puVar60 = (ulonglong *)((longlong)puVar60 + 4);
                puVar10 = (ulonglong *)((longlong)puVar10 + 4);
              }
              if ((puVar60 < (ulonglong *)((longlong)puVar19 + -1)) &&
                 ((short)*puVar10 == (short)*puVar60)) {
                puVar60 = (ulonglong *)((longlong)puVar60 + 2);
                puVar10 = (ulonglong *)((longlong)puVar10 + 2);
              }
              if (puVar60 < puVar19) {
                puVar60 = (ulonglong *)
                          ((longlong)puVar60 + (ulonglong)((char)*puVar10 == (char)*puVar60));
              }
              uVar52 = (int)puVar60 - (int)local_1a0;
            }
LAB_1427390e1:
            iVar29 = uVar52 + 4;
            if (puVar19 < local_1e8) {
              puVar38 = (ulonglong *)((longlong)puVar18 + (longlong)(int)uVar52 + 4);
              if (puVar38 == puVar19) {
                puVar60 = local_1e0;
                if (puVar19 < puVar7) {
                  uVar33 = *puVar38 ^ *local_1e0;
                  if (uVar33 == 0) {
                    uVar40 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar40 = (uint)lVar8;
                  }
                  if (*local_1e0 == *puVar38) {
                    puVar38 = (ulonglong *)((longlong)puVar18 + (longlong)(int)uVar52 + 0xc);
                    puVar60 = local_1e0 + 1;
                    goto LAB_14273914f;
                  }
                  uVar40 = uVar40 >> 3;
                }
                else {
LAB_14273914f:
                  if (puVar38 < puVar7) {
                    puVar10 = (ulonglong *)((ulonglong)uVar4 + (longlong)local_f0);
                    if (local_1e8 <= puVar10) {
                      puVar10 = local_1e8;
                    }
                    iVar23 = (int)puVar38 - (int)puVar10;
LAB_14273916e:
                    if (*puVar60 == *puVar38) goto code_r0x000142739179;
                    uVar33 = *puVar38 ^ *puVar60;
                    if (uVar33 == 0) {
                      uVar4 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar4 = (uint)lVar8;
                    }
                    uVar40 = (uVar4 >> 3) + iVar23;
                    goto LAB_142739333;
                  }
LAB_142739189:
                  if ((puVar38 < local_b8) && ((uint)*puVar60 == (uint)*puVar38)) {
                    puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                    puVar60 = (ulonglong *)((longlong)puVar60 + 4);
                  }
                  if ((puVar38 < local_c0) && ((short)*puVar60 == (short)*puVar38)) {
                    puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                    puVar60 = (ulonglong *)((longlong)puVar60 + 2);
                  }
                  if (puVar38 < local_1e8) {
                    puVar38 = (ulonglong *)
                              ((longlong)puVar38 + (ulonglong)((char)*puVar60 == (char)*puVar38));
                  }
                  uVar40 = (int)puVar38 - (int)puVar19;
                }
LAB_142739333:
                iVar29 = iVar29 + uVar40;
              }
            }
            if (iVar27 == 0) {
              uVar4 = 0;
            }
            else {
              puVar19 = (ulonglong *)-uVar51;
              if ((longlong)-uVar51 < (longlong)local_1a8) {
                puVar19 = local_1a8;
              }
              uVar40 = (uint)puVar19;
              uVar52 = 1;
              lVar8 = 0;
              do {
                uVar4 = (int)uVar40 >> 0x1f & uVar40;
                if (lVar8 <= (int)uVar40) break;
                pcVar46 = (char *)((longlong)local_178 + lVar8);
                uVar52 = uVar52 - 1;
                lVar44 = lVar8 + uVar51;
                lVar8 = lVar8 + -1;
                uVar4 = uVar52;
              } while (*pcVar46 == *(char *)((longlong)local_100 + lVar44));
            }
            if ((int)uVar43 < (int)(iVar29 - uVar4)) {
              local_1d0 = (ulonglong *)
                          ((longlong)local_1b8 + (longlong)(int)uVar4 + (ulonglong)uVar53);
              local_1b0 = (ulonglong *)((longlong)(int)uVar4 + (longlong)puVar18);
              uVar43 = iVar29 - uVar4;
            }
          }
        }
LAB_1427393df:
        uVar1 = *(ushort *)(local_200 + 0x20000 + (ulonglong)(uVar53 & 0xffff) * 2);
        if ((local_1f4 < 0x81) || (uVar1 != 1)) {
LAB_14273954e:
          uVar53 = uVar53 - uVar1;
        }
        else {
          if ((int)local_188 == 0) {
            local_188 = (ulonglong *)&DAT_00000001;
            if (!bVar62 || !bVar3) goto LAB_14273954e;
            puVar19 = local_1a0;
            uVar35 = uVar9;
            if (local_1a0 < puVar7) {
LAB_142739514:
              if (*puVar19 == uVar9) goto code_r0x00014273951c;
              uVar35 = *puVar19 ^ uVar9;
              if (uVar35 == 0) {
                uVar4 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar4 = (uint)lVar8;
              }
              puVar19 = (ulonglong *)((longlong)puVar19 + (ulonglong)(uVar4 >> 3));
              goto LAB_142739624;
            }
LAB_142739528:
            for (; (puVar19 < local_1e8 && ((char)*puVar19 == (char)uVar35));
                puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
              uVar35 = uVar35 >> 8;
            }
LAB_142739624:
            uVar35 = (ulonglong)(uint)((int)puVar19 - (int)local_1a0) + 4;
            local_188 = (ulonglong *)0x2;
          }
          uVar4 = uVar53 - 1;
          if (((0xfffffffc < uVar4 - uVar14) || ((int)local_188 != 2)) || (uVar4 < uVar32))
          goto LAB_14273954e;
          local_1c0 = (ulonglong *)CONCAT44(local_1c0._4_4_,uVar43);
          puVar19 = local_138;
          if (uVar14 <= uVar4) {
            puVar19 = local_1b8;
          }
          uVar51 = (ulonglong)uVar4;
          local_188 = (ulonglong *)0x2;
          if (*(uint *)((longlong)puVar19 + uVar51) != uVar15) goto LAB_14273954e;
          puVar38 = (ulonglong *)((longlong)puVar19 + uVar51);
          puVar60 = local_120;
          if (uVar14 <= uVar4) {
            puVar60 = local_1e8;
          }
          puVar10 = (ulonglong *)((longlong)puVar38 + 4);
          puVar11 = puVar10;
          if (puVar10 < (ulonglong *)((longlong)puVar60 + -7)) {
            pcVar46 = (char *)((longlong)puVar19 + uVar51 + 4);
LAB_1427394a0:
            if (*puVar11 == uVar9) goto code_r0x0001427394ac;
            uVar51 = *puVar11 ^ uVar9;
            if (uVar51 == 0) {
              uVar53 = 0x40;
            }
            else {
              lVar8 = 0;
              if (uVar51 != 0) {
                for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                }
              }
              uVar53 = (uint)lVar8;
            }
            puVar19 = (ulonglong *)(pcVar46 + (uVar53 >> 3));
            goto LAB_1427395a3;
          }
LAB_1427394b9:
          puVar19 = puVar11;
          if (puVar11 < puVar60) {
            lVar8 = (longlong)puVar60 - (longlong)puVar11;
            uVar51 = uVar9;
            do {
              puVar19 = puVar11;
              if ((char)*puVar11 != (char)uVar51) break;
              puVar11 = (ulonglong *)((longlong)puVar11 + 1);
              uVar51 = uVar51 >> 8;
              lVar8 = lVar8 + -1;
              puVar19 = puVar60;
            } while (lVar8 != 0);
          }
LAB_1427395a3:
          uVar51 = (longlong)puVar19 - (longlong)puVar10;
          uVar33 = (uVar51 & 0xffffffff) + 4;
          puVar19 = local_1e0;
          if ((uVar4 < uVar14) &&
             (puVar19 = puVar34, (ulonglong *)((longlong)puVar38 + uVar33) == local_120)) {
            bVar2 = (char)uVar51 * '\b' & 0x1f;
            uVar53 = uVar15 << bVar2 | uVar15 >> 0x20 - bVar2;
            if ((uVar51 & 3) == 0) {
              uVar53 = uVar15;
            }
            uVar51 = (ulonglong)uVar53 * 0x100000001;
            puVar60 = local_1e0;
            if (local_1e0 < puVar7) {
LAB_142739603:
              if (*puVar60 == uVar51) goto code_r0x00014273960b;
              uVar51 = *puVar60 ^ uVar51;
              if (uVar51 == 0) {
                uVar53 = 0x40;
              }
              else {
                lVar8 = 0;
                if (uVar51 != 0) {
                  for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                  }
                }
                uVar53 = (uint)lVar8;
              }
              puVar60 = (ulonglong *)((longlong)puVar60 + (ulonglong)(uVar53 >> 3));
              goto LAB_142739657;
            }
LAB_142739789:
            for (; (puVar60 < local_1e8 && ((char)*puVar60 == (char)uVar51));
                puVar60 = (ulonglong *)((longlong)puVar60 + 1)) {
              uVar51 = uVar51 >> 8;
            }
LAB_142739657:
            uVar33 = uVar33 + ((int)puVar60 - (uint)local_1e0);
          }
          puVar60 = puVar38;
          do {
            puVar10 = puVar60;
            if (puVar10 < (ulonglong *)((longlong)puVar19 + 4)) break;
            puVar60 = (ulonglong *)((longlong)puVar10 + -4);
          } while (*(uint *)((longlong)puVar10 + -4) == uVar15);
          puVar60 = puVar10;
          if (puVar19 < puVar10) {
            lVar8 = 0;
            do {
              if (*(char *)((longlong)puVar10 + lVar8 + -1) !=
                  *(char *)((longlong)&local_4c + lVar8 + 3)) {
                puVar60 = (ulonglong *)((longlong)puVar10 + lVar8);
                break;
              }
              lVar44 = lVar8 + -1;
              lVar8 = lVar8 + -1;
              puVar60 = puVar19;
            } while (puVar19 < (ulonglong *)((longlong)puVar10 + lVar44));
          }
          uVar51 = (longlong)puVar38 - (longlong)puVar60;
          iVar29 = (int)uVar51;
          local_4c = uVar15;
          if ((uVar59 < uVar14 && uVar14 <= uVar4) &&
              (ulonglong *)((longlong)puVar38 - (uVar51 & 0xffffffff)) == local_1e0) {
            bVar2 = (char)uVar51 * -8 & 0x1f;
            puVar19 = local_120;
            puVar38 = local_98;
            local_4c = uVar15 << bVar2 | uVar15 >> 0x20 - bVar2;
            if ((-iVar29 & 3U) == 0) {
              local_4c = uVar15;
            }
            do {
              puVar60 = puVar19;
              if ((longlong)puVar38 < 4) {
                if ((longlong)puVar38 < 1) goto LAB_1427397a7;
                break;
              }
              puVar19 = (ulonglong *)((longlong)puVar60 + -4);
              puVar38 = (ulonglong *)((longlong)puVar38 + -4);
            } while (*(uint *)((longlong)puVar60 + -4) == local_4c);
            pcVar46 = (char *)((longlong)&local_4c + 3);
            do {
              if (*(char *)((longlong)puVar60 + -1) != *pcVar46) break;
              puVar60 = (ulonglong *)((longlong)puVar60 + -1);
              pcVar46 = pcVar46 + -1;
            } while (puVar34 < puVar60);
LAB_1427397a7:
            iVar29 = ((int)local_120 - (int)puVar60) + iVar29;
          }
          uVar52 = uVar4 - iVar29;
          if (uVar4 - iVar29 <= uVar32) {
            uVar52 = uVar32;
          }
          uVar51 = (uVar4 - uVar52) + uVar33;
          if ((uVar35 < uVar33) || (uVar51 < uVar35)) {
            local_188 = (ulonglong *)0x2;
            uVar53 = uVar14;
            if ((uVar52 - uVar14 < 0xfffffffd) && (uVar53 = uVar52, iVar27 == 0)) {
              if (uVar35 <= uVar51) {
                uVar51 = uVar35;
              }
              if ((ulonglong)(longlong)(int)uVar43 < uVar51) {
                if (0xffff < (longlong)local_d0 - (ulonglong)uVar52) goto LAB_14273990e;
                local_1d0 = (ulonglong *)((ulonglong)uVar52 + (longlong)local_1b8);
                uVar43 = (uint)uVar51;
                local_1b0 = puVar18;
              }
              uVar53 = (uint)*(ushort *)(local_200 + 0x20000 + (ulonglong)(uVar52 & 0xffff) * 2);
              if (uVar52 < uVar53) goto LAB_14273990e;
              uVar53 = uVar52 - uVar53;
            }
          }
          else {
            uVar53 = (uVar4 - (int)uVar35) + (int)uVar33;
            if (0xfffffffc < uVar53 - uVar14) {
              uVar53 = uVar14;
            }
            local_188 = (ulonglong *)0x2;
          }
        }
        if ((uVar53 < uVar32) || (bVar61 = iVar30 < 2, iVar30 = iVar30 + -1, bVar61))
        goto LAB_14273990e;
      } while( true );
    }
  }
  goto LAB_14273a180;
code_r0x00014273927a:
  puVar38 = puVar38 + 1;
  puVar19 = puVar19 + 1;
  iVar29 = iVar29 + 8;
  if (local_190 <= puVar38) goto LAB_14273928b;
  goto LAB_14273926f;
code_r0x000142739056:
  puVar60 = puVar60 + 1;
  puVar10 = puVar10 + 1;
  iVar29 = iVar29 + 8;
  if (puVar38 <= puVar60) goto LAB_142739066;
  goto LAB_14273904a;
code_r0x000142739179:
  puVar38 = puVar38 + 1;
  puVar60 = puVar60 + 1;
  iVar23 = iVar23 + 8;
  if (puVar7 <= puVar38) goto LAB_142739189;
  goto LAB_14273916e;
code_r0x00014273951c:
  puVar19 = puVar19 + 1;
  if (puVar7 <= puVar19) goto LAB_142739528;
  goto LAB_142739514;
code_r0x0001427394ac:
  puVar11 = puVar11 + 1;
  pcVar46 = pcVar46 + 8;
  if ((ulonglong *)((longlong)puVar60 + -7) <= puVar11) goto LAB_1427394b9;
  goto LAB_1427394a0;
code_r0x00014273960b:
  puVar60 = puVar60 + 1;
  if (puVar7 <= puVar60) goto LAB_142739789;
  goto LAB_142739603;
LAB_14273990e:
  local_1c8 = puVar18;
  local_170 = puVar25;
  local_148 = puVar34;
  if (uVar43 != uVar36) {
    if (local_a8 <= local_1b0) goto LAB_14273996d;
    local_d8 = local_1b0;
    local_b0 = local_1d0;
    if (local_1b0 < local_128) goto LAB_142738c11;
    if (puVar25 < local_128) {
      iVar37 = (int)local_128 - iVar37;
      local_e8 = (ulonglong *)(ulonglong)(uVar36 - iVar37);
      if ((int)(uVar36 - iVar37) < 4) {
        local_180 = local_1d0;
        local_e8 = (ulonglong *)(ulonglong)uVar43;
        puVar25 = local_1b0;
      }
      else {
        local_180 = (ulonglong *)((longlong)local_180 + (longlong)iVar37);
        puVar25 = (ulonglong *)((longlong)puVar25 + (longlong)iVar37);
      }
    }
    uVar9 = (longlong)puVar54 - (longlong)local_f8;
    if ((param_7 != 0) &&
       (iVar49 = 0, local_108 < (char *)((longlong)local_168 + uVar9 + uVar9 / 0xff + 9)))
    goto LAB_14273a690;
    puVar54 = (ulonglong *)((longlong)local_168 + 1);
    if (uVar9 < 0xf) {
      *(char *)local_168 = (char)uVar9 << 4;
    }
    else {
      uVar35 = uVar9 - 0xf;
      *(char *)local_168 = -0x10;
      if (0xfe < uVar35) {
        uVar35 = (uVar9 - 0x10e) / 0xff;
        memset(puVar54,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
        puVar54 = (ulonglong *)((longlong)puVar45 + uVar35 + 2);
        uVar35 = uVar35 * -0xff + -0x10e + uVar9;
      }
      *(char *)puVar54 = (char)uVar35;
      puVar54 = (ulonglong *)((longlong)puVar54 + 1);
    }
    puVar45 = local_e8;
    puVar17 = (ulonglong *)(uVar9 + (longlong)puVar54);
    puVar22 = local_f8;
    do {
      *puVar54 = *puVar22;
      puVar54 = puVar54 + 1;
      puVar22 = puVar22 + 1;
    } while (puVar54 < puVar17);
    puVar57 = (uint *)((longlong)puVar48 + -4);
    *(short *)puVar17 = (short)local_130 - (short)local_110;
    if ((param_7 != 0) &&
       (iVar49 = 0, local_108 < (char *)((longlong)puVar17 + (ulonglong)puVar57 / 0xff + 8)))
    goto LAB_14273a690;
    puVar54 = (ulonglong *)((longlong)puVar17 + 2);
    if (puVar57 < &DAT_0000000f) {
      *(char *)local_168 = (char)*local_168 + (char)puVar57;
      local_b0 = local_1d0;
      local_a8 = local_180;
      local_168 = puVar54;
      local_160 = puVar25;
      local_d8 = local_1b0;
    }
    else {
      *(char *)local_168 = (char)*local_168 + '\x0f';
      pcVar46 = (char *)((longlong)puVar48 + -0x13);
      if ((char *)0x1fd < pcVar46) {
        uVar9 = (ulonglong)((longlong)puVar48 + -0x211) / 0x1fe;
        memset(puVar54,(int)CONCAT71((int7)((ulonglong)((longlong)puVar48 + -0x211) / 0x1fe),0xff),
               uVar9 * 2 + 2);
        puVar54 = (ulonglong *)(uVar9 * 2 + 4 + (longlong)puVar17);
        pcVar46 = (char *)((longlong)puVar48 + uVar9 * -0x1fe + -0x211);
      }
      if ((char *)0xfe < pcVar46) {
        pcVar46 = pcVar46 + -0xff;
        *(char *)puVar54 = -1;
        puVar54 = (ulonglong *)((longlong)puVar54 + 1);
      }
      *(char *)puVar54 = (char)pcVar46;
      local_b0 = local_1d0;
      local_a8 = local_180;
      local_168 = (ulonglong *)((longlong)puVar54 + 1);
      local_160 = puVar25;
      local_d8 = local_1b0;
    }
    goto LAB_142737e8e;
  }
  local_b0 = local_1d0;
  local_d8 = local_1b0;
LAB_14273a180:
  if (puVar25 < local_128) {
    uVar6 = iVar37 - iVar49;
  }
  uVar9 = (longlong)puVar54 - (longlong)local_f8;
  iVar49 = 0;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)local_168 + uVar9 + uVar9 / 0xff + 9)))
  goto LAB_14273a690;
  puVar45 = (ulonglong *)((longlong)local_168 + 1);
  if (uVar9 < 0xf) {
    *(char *)local_168 = (char)uVar9 << 4;
  }
  else {
    uVar35 = uVar9 - 0xf;
    *(char *)local_168 = -0x10;
    if (0xfe < uVar35) {
      uVar35 = (uVar9 - 0x10e) / 0xff;
      memset(puVar45,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
      puVar45 = (ulonglong *)((longlong)local_168 + uVar35 + 2);
      uVar35 = uVar35 * -0xff + -0x10e + uVar9;
    }
    *(char *)puVar45 = (char)uVar35;
    puVar45 = (ulonglong *)((longlong)puVar45 + 1);
  }
  puVar22 = (ulonglong *)((longlong)puVar45 + uVar9);
  puVar48 = puVar45;
  puVar54 = local_f8;
  do {
    *puVar48 = *puVar54;
    puVar48 = puVar48 + 1;
    puVar54 = puVar54 + 1;
  } while (puVar48 < puVar22);
  lVar8 = (longlong)(int)uVar6;
  uVar35 = lVar8 - 4;
  *(short *)puVar22 = (short)local_130 - (short)local_110;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)puVar22 + uVar35 / 0xff + 8)))
  goto LAB_14273a690;
  pcVar46 = (char *)((longlong)puVar22 + 2);
  if (uVar35 < 0xf) {
    *(char *)local_168 = (char)*local_168 + (char)uVar35;
  }
  else {
    *(char *)local_168 = (char)*local_168 + '\x0f';
    uVar35 = lVar8 - 0x13;
    if (0x1fd < uVar35) {
      uVar35 = (lVar8 - 0x211U) / 0x1fe;
      memset(pcVar46,(int)CONCAT71((int7)((lVar8 - 0x211U) / 0x1fe),0xff),uVar35 * 2 + 2);
      pcVar46 = (char *)((longlong)puVar45 + uVar9 + uVar35 * 2 + 4);
      uVar35 = (uVar35 * -0x1fe + lVar8) - 0x211;
      puVar17 = local_160;
    }
    if (0xfe < uVar35) {
      uVar35 = uVar35 - 0xff;
      *pcVar46 = -1;
      pcVar46 = pcVar46 + 1;
    }
    *pcVar46 = (char)uVar35;
    pcVar46 = pcVar46 + 1;
  }
  param_2 = local_a0;
  pcVar50 = (char *)((longlong)local_130 + lVar8);
  uVar9 = (longlong)puVar25 - (longlong)pcVar50;
  if ((param_7 != 0) && (local_108 < pcVar46 + uVar9 + uVar9 / 0xff + 9)) goto LAB_14273a690;
  _Dst = (short *)(pcVar46 + 1);
  if (uVar9 < 0xf) {
    *pcVar46 = (char)uVar9 << 4;
  }
  else {
    uVar35 = uVar9 - 0xf;
    *pcVar46 = -0x10;
    if (0xfe < uVar35) {
      uVar35 = (uVar9 - 0x10e) / 0xff;
      memset(_Dst,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
      _Dst = (short *)(pcVar46 + uVar35 + 2);
      uVar35 = (uVar35 * -0xff + uVar9) - 0x10e;
      puVar17 = local_160;
    }
    *(char *)_Dst = (char)uVar35;
    _Dst = (short *)((longlong)_Dst + 1);
  }
  psVar55 = (short *)(uVar9 + (longlong)_Dst);
  pcVar12 = pcVar50;
  psVar21 = _Dst;
  do {
    *(undefined8 *)psVar21 = *(undefined8 *)pcVar12;
    psVar21 = psVar21 + 4;
    pcVar12 = pcVar12 + 8;
  } while (psVar21 < psVar55);
  puVar57 = (uint *)((longlong)puVar17 + -4);
  *psVar55 = (short)puVar25 - (short)local_180;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)psVar55 + (ulonglong)puVar57 / 0xff + 8)))
  goto LAB_14273a690;
  param_3 = (ulonglong *)(psVar55 + 1);
  if (puVar57 < &DAT_0000000f) {
    *pcVar46 = *pcVar46 + (char)puVar57;
    goto LAB_14273a121;
  }
  *pcVar46 = *pcVar46 + '\x0f';
  pcVar46 = (char *)((longlong)puVar17 + -0x13);
  if ((char *)0x1fd < pcVar46) {
    uVar9 = ((longlong)puVar17 - 0x211U) / 0x1fe;
    memset(param_3,(int)CONCAT71((int7)((ulonglong)((longlong)puVar17 - 0x211U) / 0x1fe),0xff),
           uVar9 * 2 + 2);
    param_3 = (ulonglong *)
              ((longlong)puVar25 + (longlong)((longlong)_Dst + (uVar9 * 2 - (longlong)pcVar50) + 4))
    ;
    pcVar46 = (char *)((longlong)puVar17 + uVar9 * -0x1fe + -0x211);
  }
LAB_14273a0f8:
  if ((char *)0xfe < pcVar46) {
    pcVar46 = pcVar46 + -0xff;
    *(char *)param_3 = -1;
    param_3 = (ulonglong *)((longlong)param_3 + 1);
  }
  *(char *)param_3 = (char)pcVar46;
  param_3 = (ulonglong *)((longlong)param_3 + 1);
LAB_14273a121:
  puVar45 = local_110;
  local_168 = param_3;
  if (puVar7 < param_2) goto LAB_14273a553;
  goto LAB_142737362;
LAB_14273996d:
  puVar45 = puVar22;
  puVar22 = local_e8;
  if (puVar25 < local_128) {
    uVar9 = (longlong)puVar25 - (longlong)puVar54;
    if ((longlong)uVar9 < 0x12) {
      if ((ulonglong *)((longlong)local_a0 + -4) < local_68) {
        uVar13 = (uVar36 - 4) + (int)uVar9;
      }
      uVar6 = (iVar49 - iVar37) + uVar13;
      puVar45 = (ulonglong *)(ulonglong)uVar13;
      if (0 < (int)uVar6) {
        local_180 = (ulonglong *)((longlong)local_180 + (ulonglong)uVar6);
        puVar22 = (ulonglong *)(ulonglong)(uVar36 - uVar6);
        puVar25 = (ulonglong *)((longlong)puVar25 + (ulonglong)uVar6);
      }
    }
    else {
      puVar45 = (ulonglong *)(uVar9 & 0xffffffff);
    }
  }
  uVar9 = (longlong)puVar54 - (longlong)local_f8;
  iVar49 = 0;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)local_168 + uVar9 + uVar9 / 0xff + 9)))
  goto LAB_14273a690;
  puVar48 = (ulonglong *)((longlong)local_168 + 1);
  if (uVar9 < 0xf) {
    *(char *)local_168 = (char)uVar9 << 4;
  }
  else {
    uVar35 = uVar9 - 0xf;
    *(char *)local_168 = -0x10;
    if (0xfe < uVar35) {
      uVar35 = (uVar9 - 0x10e) / 0xff;
      memset(puVar48,(int)CONCAT71((int7)((uVar9 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
      puVar48 = (ulonglong *)((longlong)local_168 + uVar35 + 2);
      uVar35 = (uVar35 * -0xff + uVar9) - 0x10e;
    }
    *(char *)puVar48 = (char)uVar35;
    puVar48 = (ulonglong *)((longlong)puVar48 + 1);
  }
  puVar17 = (ulonglong *)(uVar9 + (longlong)puVar48);
  puVar54 = local_f8;
  do {
    *puVar48 = *puVar54;
    puVar48 = puVar48 + 1;
    puVar54 = puVar54 + 1;
  } while (puVar48 < puVar17);
  lVar8 = (longlong)(int)puVar45;
  uVar9 = lVar8 - 4;
  *(short *)puVar17 = (short)local_130 - (short)local_110;
  if ((param_7 != 0) && (local_108 < (char *)((longlong)puVar17 + uVar9 / 0xff + 8)))
  goto LAB_14273a690;
  puVar45 = (ulonglong *)((longlong)puVar17 + 2);
  if (uVar9 < 0xf) {
    *(char *)local_168 = (char)*local_168 + (char)uVar9;
  }
  else {
    *(char *)local_168 = (char)*local_168 + '\x0f';
    uVar9 = lVar8 - 0x13;
    if (0x1fd < uVar9) {
      uVar9 = (lVar8 - 0x211U) / 0x1fe;
      memset(puVar45,(int)CONCAT71((int7)((lVar8 - 0x211U) / 0x1fe),0xff),uVar9 * 2 + 2);
      puVar45 = (ulonglong *)(uVar9 * 2 + 4 + (longlong)puVar17);
      uVar9 = (uVar9 * -0x1fe + lVar8) - 0x211;
    }
    if (0xfe < uVar9) {
      uVar9 = uVar9 - 0xff;
      *(char *)puVar45 = -1;
      puVar45 = (ulonglong *)((longlong)puVar45 + 1);
    }
    *(char *)puVar45 = (char)uVar9;
    puVar45 = (ulonglong *)((longlong)puVar45 + 1);
  }
  local_f8 = (ulonglong *)((longlong)local_130 + lVar8);
  local_110 = local_180;
  local_b0 = local_1d0;
  puVar54 = puVar25;
  local_168 = puVar45;
  local_d8 = local_1b0;
  goto LAB_142738bbc;
code_r0x000142734b2d:
  puVar34 = puVar34 + 1;
  puVar18 = puVar18 + 1;
  iVar27 = iVar27 + 8;
  if (puVar25 <= puVar34) goto LAB_142734b3d;
  goto LAB_142734b22;
code_r0x0001427349d8:
  puVar34 = puVar34 + 1;
  puVar19 = puVar19 + 1;
  iVar27 = iVar27 + 8;
  if (puVar18 <= puVar34) goto LAB_1427349e8;
  goto LAB_1427349cd;
code_r0x000142734c3d:
  puVar18 = puVar18 + 1;
  puVar34 = puVar34 + 1;
  iVar27 = iVar27 + 8;
  if (local_1c0 <= puVar18) goto LAB_142734c4d;
  goto LAB_142734c32;
code_r0x0001427348e2:
  puVar7 = puVar7 + 1;
  if (puVar25 <= puVar7) goto LAB_1427348ee;
  goto LAB_1427348d6;
code_r0x00014273478e:
  puVar38 = puVar38 + 1;
  pcVar46 = pcVar46 + 8;
  if ((ulonglong *)((longlong)puVar34 + -7) <= puVar38) goto LAB_14273479b;
  goto LAB_142734782;
code_r0x000142734abc:
  puVar34 = puVar34 + 1;
  if (puVar25 <= puVar34) goto LAB_142734e44;
  goto LAB_142734ab0;
LAB_142735017:
  puVar7 = local_160;
  param_1 = local_200;
  local_1e8 = puVar22;
  local_1e0 = puVar17;
  local_1b0 = puVar54;
  if ((int)uVar4 < 4) {
LAB_14273514b:
    puVar48 = (ulonglong *)((longlong)puVar48 + 1);
  }
  else {
    lVar8 = (longlong)puVar48 - (longlong)local_120;
    puVar22 = (ulonglong *)(ulonglong)uVar4;
    if (uVar4 - 0x13 < 0x12) {
      puVar22 = (ulonglong *)&DAT_00000012;
    }
    if ((char)local_148 == '\0') {
      puVar22 = (ulonglong *)(ulonglong)uVar4;
    }
    if (puVar22 <= local_e8) {
      local_1e0._0_4_ = (uint)puVar17;
      iVar49 = iVar30 - (int)param_2;
      uVar36 = iVar49 - 0xf;
      lVar44 = 0;
      puVar17 = local_c0;
      do {
        uVar59 = (uint)local_1e0;
        if (0xe < (int)(uint)local_1e0 + lVar44) {
          uVar59 = uVar36 / 0xff + iVar49 + 1;
        }
        puVar17[-1] = 0x100000000;
        *(int *)puVar17 = iVar49 + (int)lVar44;
        *(uint *)((longlong)puVar17 + -0xc) = uVar59 + (int)lVar44;
        lVar44 = lVar44 + 1;
        puVar17 = puVar17 + 2;
        uVar36 = uVar36 + 1;
      } while (lVar44 != 4);
      uVar36 = (uint)local_1e0 + 1 + ((uint)local_1e0 - 0xf) / 0xff;
      if ((int)(uint)local_1e0 < 0xf) {
        uVar36 = (uint)local_1e0;
      }
      uVar9 = 0xfffffff1;
      puVar17 = (ulonglong *)&DAT_00000004;
      puVar18 = local_a8;
      do {
        uVar59 = uVar36 + 3;
        if (&DAT_00000012 < puVar17) {
          uVar59 = (int)(uVar9 / 0xff) + uVar36 + 4;
        }
        *(uint *)((longlong)puVar18 + -4) = (uint)puVar17;
        *(uint *)(puVar18 + -1) = (uint)lVar8;
        *(uint *)puVar18 = (uint)local_1e0;
        *(uint *)((longlong)puVar18 + -0xc) = uVar59;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        puVar18 = puVar18 + 2;
        bVar62 = puVar17 != puVar22;
        puVar17 = (ulonglong *)((longlong)puVar17 + 1);
      } while (bVar62);
      uVar9 = local_160[(longlong)puVar22 * 2];
      iVar49 = 1;
      lVar8 = 0;
      do {
        pcVar46 = (char *)((longlong)local_d8 + lVar8 + (longlong)puVar22 * 0x10 + -8);
        pcVar46[0] = '\0';
        pcVar46[1] = '\0';
        pcVar46[2] = '\0';
        pcVar46[3] = '\0';
        pcVar46[4] = '\x01';
        pcVar46[5] = '\0';
        pcVar46[6] = '\0';
        pcVar46[7] = '\0';
        *(int *)((longlong)local_d8 + lVar8 + (longlong)puVar22 * 0x10) = iVar49;
        *(uint *)((longlong)local_d8 + lVar8 + (longlong)puVar22 * 0x10 + -0xc) =
             (uint)uVar9 + iVar49;
        lVar8 = lVar8 + 0x10;
        iVar49 = iVar49 + 1;
      } while (lVar8 != 0x30);
      uVar59 = (uVar13 + iVar30) - (int)local_1a0;
      uVar36 = -iVar30 - 5;
      puVar34 = (ulonglong *)&DAT_00000001;
      local_120 = (ulonglong *)0x5;
      local_98 = local_60;
      puVar18 = local_68;
      puVar17 = puVar48;
LAB_1427352ff:
      puVar19 = local_138;
      uVar59 = uVar59 + 1;
      puVar60 = (ulonglong *)(ulonglong)uVar59;
      puVar38 = (ulonglong *)(ulonglong)uVar36;
      puVar17 = (ulonglong *)((longlong)puVar17 + 1);
      local_198 = (ulonglong *)((longlong)puVar48 + (longlong)puVar34);
      if (local_198 <= puVar25) {
        local_90 = local_160 + (longlong)puVar34 * 2;
        uVar32 = (uint)local_160[(longlong)puVar34 * 2];
        uVar9 = (ulonglong)uVar32;
        local_138._0_4_ = (int)puVar34;
        if ((int)local_80 == 0xc) {
          if (((int)uVar32 < (int)(uint)local_160[(longlong)puVar34 * 2 + 2]) ||
             ((int)(uVar32 + 3) <= (int)(uint)local_90[8])) {
            iVar49 = (int)((longlong)local_198 - (longlong)local_1a0);
            uVar43 = uVar13 + iVar49;
            uVar53 = (uVar13 - 0xffff) + iVar49;
            if (uVar43 < uVar14) {
              uVar53 = uVar6;
            }
            local_1e8 = (ulonglong *)CONCAT44(local_1e8._4_4_,uVar53);
            uVar16 = (uint)*local_198;
            puVar11 = (ulonglong *)(ulonglong)uVar16;
            puVar10 = (ulonglong *)(ulonglong)*(uint *)(local_200 + 0x40020);
            if (*(uint *)(local_200 + 0x40020) < uVar43) {
              do {
                uVar35 = (ulonglong)
                         ((uint)(*(int *)((longlong)local_178 + (longlong)puVar10) * -0x61c8864f) >>
                         0x11);
                uVar4 = (uint)puVar10;
                uVar52 = uVar4 - *(int *)(local_200 + uVar35 * 4);
                if (0xfffe < uVar52) {
                  uVar52 = 0xffff;
                }
                *(short *)(local_200 + 0x20000 + (ulonglong)(uVar4 & 0xffff) * 2) = (short)uVar52;
                *(uint *)(local_200 + uVar35 * 4) = uVar4;
                puVar10 = (ulonglong *)((longlong)puVar10 + 1);
              } while (puVar60 != puVar10);
            }
            *(uint *)(local_200 + 0x40020) = uVar43;
            uVar4 = *(uint *)(local_200 + (ulonglong)((uint)*local_198 * -0x61c8864f >> 0x11) * 4);
            bVar62 = uVar16 >> 0x18 == (uVar16 & 0xff);
            bVar3 = uVar16 >> 0x10 == (uVar16 & 0xffff);
            local_110 = (ulonglong *)CONCAT71(local_110._1_7_,bVar62 && bVar3);
            local_180 = puVar17;
            local_158 = puVar38;
            local_100 = puVar18;
            local_c8 = uVar9;
            if ((uVar53 <= uVar4) && (0 < local_1f4)) {
              local_88 = (char *)(((longlong)local_198 - (longlong)local_1a0) + (longlong)puVar54);
              local_1a8 = (ulonglong *)((longlong)local_198 + 4);
              local_108 = (char *)((longlong)puVar11 * 0x100000001);
              iVar37 = 0;
              puVar10 = (ulonglong *)&DAT_00000003;
              iVar30 = 0;
              uVar35 = 0;
              local_f0 = (uint *)0x0;
              local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,uVar43);
              iVar49 = local_1f4;
LAB_1427354d3:
              uVar51 = (ulonglong)uVar4;
              puVar19 = puVar10;
              if (((char)local_148 == '\0') || (7 < uVar43 - uVar4)) {
                uVar40 = uVar13 - uVar4;
                uVar52 = (uint)puVar10;
                if (uVar13 < uVar4 || uVar40 == 0) {
                  puVar57 = (uint *)(uVar51 + (longlong)local_178);
                  if ((*(short *)((longlong)local_198 + (longlong)(int)uVar52 + -1) !=
                       *(short *)((longlong)(int)uVar52 + -1 + (longlong)puVar57)) ||
                     (*puVar57 != uVar16)) goto LAB_1427354ef;
                  puVar19 = (ulonglong *)(puVar57 + 1);
                  puVar47 = local_1a8;
                  if (local_1a8 < puVar25) {
                    uVar33 = *local_1a8 ^ *puVar19;
                    if (uVar33 == 0) {
                      uVar40 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar40 = (uint)lVar8;
                    }
                    if (*puVar19 == *local_1a8) {
                      puVar47 = (ulonglong *)((longlong)local_198 + 0xc);
                      puVar19 = (ulonglong *)(puVar57 + 3);
                      goto LAB_142735ad9;
                    }
                    uVar40 = uVar40 >> 3;
                  }
                  else {
LAB_142735ad9:
                    if (puVar47 < puVar25) {
                      iVar29 = uVar36 + (int)puVar47;
LAB_142735aee:
                      if (*puVar19 == *puVar47) goto code_r0x000142735af9;
                      uVar33 = *puVar47 ^ *puVar19;
                      if (uVar33 == 0) {
                        uVar40 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar33 != 0) {
                          for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar40 = (uint)lVar8;
                      }
                      uVar40 = (uVar40 >> 3) + iVar29;
                      local_1e0 = puVar10;
                      goto LAB_142735d38;
                    }
LAB_142735b0a:
                    if ((puVar47 < local_f8) && ((uint)*puVar19 == (uint)*puVar47)) {
                      puVar47 = (ulonglong *)((longlong)puVar47 + 4);
                      puVar19 = (ulonglong *)((longlong)puVar19 + 4);
                    }
                    if ((puVar47 < local_e0) && ((short)*puVar19 == (short)*puVar47)) {
                      puVar47 = (ulonglong *)((longlong)puVar47 + 2);
                      puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                    }
                    if (puVar47 < local_1f0) {
                      puVar47 = (ulonglong *)
                                ((longlong)puVar47 + (ulonglong)((char)*puVar19 == (char)*puVar47));
                    }
                    uVar40 = (int)puVar47 - (int)local_1a8;
                    local_1e0 = puVar10;
                  }
LAB_142735d38:
                  uVar40 = uVar40 + 4;
                  if ((int)uVar52 < (int)uVar40) {
                    uVar52 = uVar40;
                    local_f0 = puVar57;
                  }
                  puVar19 = (ulonglong *)(ulonglong)uVar52;
                  puVar47 = (ulonglong *)(ulonglong)uVar40;
                }
                else {
                  if ((uVar15 < uVar4) ||
                     (puVar57 = (uint *)((ulonglong)(uVar4 - uVar6) + (longlong)local_190),
                     *puVar57 != uVar16)) goto LAB_1427354ef;
                  puVar25 = (ulonglong *)((longlong)local_198 + (ulonglong)uVar40);
                  if (local_1f0 < puVar25) {
                    puVar25 = local_1f0;
                  }
                  puVar58 = (ulonglong *)(puVar57 + 1);
                  puVar47 = (ulonglong *)((longlong)puVar25 + -7);
                  puVar20 = local_1a8;
                  if (local_1a8 < puVar47) {
                    uVar33 = *local_1a8 ^ *puVar58;
                    if (uVar33 == 0) {
                      uVar5 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar5 = (uint)lVar8;
                    }
                    if (*puVar58 == *local_1a8) {
                      puVar20 = (ulonglong *)((longlong)local_198 + 0xc);
                      puVar58 = (ulonglong *)(puVar57 + 3);
                      goto LAB_14273589f;
                    }
                    uVar5 = uVar5 >> 3;
                  }
                  else {
LAB_14273589f:
                    if (puVar20 < puVar47) {
                      iVar29 = uVar36 + (int)puVar20;
LAB_1427358ae:
                      if (*puVar58 == *puVar20) goto code_r0x0001427358b9;
                      uVar33 = *puVar20 ^ *puVar58;
                      if (uVar33 == 0) {
                        uVar5 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar33 != 0) {
                          for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar5 = (uint)lVar8;
                      }
                      uVar5 = (uVar5 >> 3) + iVar29;
                      goto LAB_142735b7a;
                    }
LAB_1427358c9:
                    if ((puVar20 < (ulonglong *)((longlong)puVar25 + -3)) &&
                       ((uint)*puVar58 == (uint)*puVar20)) {
                      puVar20 = (ulonglong *)((longlong)puVar20 + 4);
                      puVar58 = (ulonglong *)((longlong)puVar58 + 4);
                    }
                    if ((puVar20 < (ulonglong *)((longlong)puVar25 + -1)) &&
                       ((short)*puVar58 == (short)*puVar20)) {
                      puVar20 = (ulonglong *)((longlong)puVar20 + 2);
                      puVar58 = (ulonglong *)((longlong)puVar58 + 2);
                    }
                    if (puVar20 < puVar25) {
                      puVar20 = (ulonglong *)
                                ((longlong)puVar20 + (ulonglong)((char)*puVar58 == (char)*puVar20));
                    }
                    uVar5 = (int)puVar20 - (int)local_1a8;
                  }
LAB_142735b7a:
                  uVar56 = uVar5 + 4;
                  if ((puVar25 < local_1f0) &&
                     ((ulonglong *)((longlong)local_198 + (longlong)(int)uVar5 + 4) == puVar25)) {
                    puVar47 = puVar25;
                    puVar20 = local_1a0;
                    if (puVar25 < local_1c0) {
                      uVar33 = *puVar25 ^ *local_1a0;
                      if (uVar33 == 0) {
                        uVar5 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar33 != 0) {
                          for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar5 = (uint)lVar8;
                      }
                      if (*local_1a0 == *puVar25) {
                        puVar47 = puVar25 + 1;
                        puVar20 = local_1a0 + 1;
                        goto LAB_142735bf4;
                      }
                      uVar5 = uVar5 >> 3;
                    }
                    else {
LAB_142735bf4:
                      if (puVar47 < local_1c0) {
                        puVar58 = (ulonglong *)((ulonglong)uVar40 + (longlong)puVar17);
                        if (local_1f0 < puVar58) {
                          puVar58 = local_1f0;
                        }
                        iVar29 = (int)puVar47 - (int)puVar58;
LAB_142735c12:
                        if (*puVar20 == *puVar47) goto code_r0x000142735c22;
                        uVar33 = *puVar47 ^ *puVar20;
                        if (uVar33 == 0) {
                          uVar40 = 0x40;
                        }
                        else {
                          lVar8 = 0;
                          if (uVar33 != 0) {
                            for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                            }
                          }
                          uVar40 = (uint)lVar8;
                        }
                        uVar5 = (uVar40 >> 3) + iVar29;
                        goto LAB_142735d75;
                      }
LAB_142735c32:
                      if ((puVar47 < local_f8) && ((uint)*puVar20 == (uint)*puVar47)) {
                        puVar47 = (ulonglong *)((longlong)puVar47 + 4);
                        puVar20 = (ulonglong *)((longlong)puVar20 + 4);
                      }
                      if ((puVar47 < local_e0) && ((short)*puVar20 == (short)*puVar47)) {
                        puVar47 = (ulonglong *)((longlong)puVar47 + 2);
                        puVar20 = (ulonglong *)((longlong)puVar20 + 2);
                      }
                      if (puVar47 < local_1f0) {
                        puVar47 = (ulonglong *)
                                  ((longlong)puVar47 + (ulonglong)((char)*puVar20 == (char)*puVar47)
                                  );
                      }
                      uVar5 = (int)puVar47 - (int)puVar25;
                    }
LAB_142735d75:
                    uVar56 = uVar56 + uVar5;
                  }
                  puVar47 = (ulonglong *)(ulonglong)uVar56;
                  puVar25 = local_1c0;
                  local_1e0 = puVar10;
                  if ((int)uVar52 < (int)uVar56) {
                    local_f0 = (uint *)(uVar51 + (longlong)local_178);
                    puVar19 = puVar47;
                  }
                }
              }
              else {
LAB_1427354ef:
                puVar47 = (ulonglong *)0x0;
              }
              puVar10 = puVar47;
              iVar23 = (int)puVar10;
              iVar29 = (int)puVar19;
              if (((iVar23 == iVar29) && (iVar29 + uVar4 <= uVar43)) && (3 < iVar23)) {
                iVar24 = 0;
                iVar26 = 0x10;
                uVar52 = 1;
                do {
                  uVar1 = *(ushort *)
                           (local_200 + 0x20000 + (ulonglong)(iVar24 + uVar4 & 0xffff) * 2);
                  iVar28 = iVar26 >> 4;
                  bVar61 = uVar52 < uVar1;
                  iVar26 = iVar26 + 1;
                  if (bVar61) {
                    iVar26 = 0x10;
                  }
                  uVar40 = (uint)uVar1;
                  if (!bVar61 && uVar52 != uVar1) {
                    uVar40 = uVar52;
                  }
                  uVar52 = uVar40;
                  if (bVar61) {
                    iVar37 = iVar24;
                  }
                  iVar24 = iVar28 + iVar24;
                } while (iVar24 < iVar23 + -3);
                uVar40 = uVar52;
                if (uVar4 < uVar52) {
                  uVar40 = 0;
                }
                if (uVar52 < 2) {
                  uVar40 = 0;
                }
                if (uVar52 < 2) {
                  uVar51 = (ulonglong)(uVar4 - uVar40);
                  puVar25 = local_1c0;
                  goto LAB_1427355ae;
                }
                bVar61 = uVar4 < uVar52;
                puVar25 = local_1c0;
                uVar4 = uVar4 - uVar40;
                if (bVar61) goto LAB_142736b3b;
              }
              else {
LAB_1427355ae:
                iVar23 = (int)uVar51;
                puVar10 = puVar19;
                if ((*(short *)(local_200 + 0x20000 + (uVar51 & 0xffff) * 2) == 1) && (iVar37 == 0))
                {
                  if (iVar30 == 0) {
                    iVar30 = 1;
                    if (!bVar62 || !bVar3) goto LAB_142735823;
                    pcVar46 = local_108;
                    puVar47 = local_1a8;
                    if (local_1a8 < puVar25) {
LAB_1427357bf:
                      if ((char *)*puVar47 == local_108) goto code_r0x0001427357cb;
                      uVar35 = *puVar47 ^ (ulonglong)local_108;
                      if (uVar35 == 0) {
                        uVar4 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar35 != 0) {
                          for (; (uVar35 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar4 = (uint)lVar8;
                      }
                      puVar47 = (ulonglong *)((longlong)puVar47 + (ulonglong)(uVar4 >> 3));
                      goto LAB_142735a8f;
                    }
LAB_1427357d7:
                    for (; (puVar47 < local_1f0 && ((char)*puVar47 == (char)pcVar46));
                        puVar47 = (ulonglong *)((longlong)puVar47 + 1)) {
                      pcVar46 = (char *)((ulonglong)pcVar46 >> 8);
                    }
LAB_142735a8f:
                    uVar35 = (ulonglong)(uint)((int)puVar47 - (int)local_1a8) + 4;
                    iVar30 = 2;
                  }
                  uVar4 = iVar23 - 1;
                  if (((uVar4 - uVar13 < 0xfffffffd) && (iVar30 == 2)) && (uVar53 <= uVar4)) {
                    puVar47 = local_140;
                    if (uVar13 <= uVar4) {
                      puVar47 = local_178;
                    }
                    uVar51 = (ulonglong)uVar4;
                    iVar30 = 2;
                    local_1e0 = puVar19;
                    if (*(uint *)((longlong)puVar47 + uVar51) == uVar16) {
                      puVar19 = (ulonglong *)((longlong)puVar47 + uVar51);
                      puVar20 = local_118;
                      if (uVar13 <= uVar4) {
                        puVar20 = local_1f0;
                      }
                      puVar58 = (ulonglong *)((longlong)puVar19 + 4);
                      puVar42 = puVar58;
                      if (puVar58 < (ulonglong *)((longlong)puVar20 + -7)) {
                        pcVar46 = (char *)((longlong)puVar47 + uVar51 + 4);
LAB_142735663:
                        if ((char *)*puVar42 == local_108) goto code_r0x00014273566f;
                        uVar51 = *puVar42 ^ (ulonglong)local_108;
                        if (uVar51 == 0) {
                          uVar52 = 0x40;
                        }
                        else {
                          lVar8 = 0;
                          if (uVar51 != 0) {
                            for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                            }
                          }
                          uVar52 = (uint)lVar8;
                        }
                        puVar47 = (ulonglong *)(pcVar46 + (uVar52 >> 3));
                        goto LAB_142735933;
                      }
LAB_14273567c:
                      puVar47 = puVar42;
                      if (puVar42 < puVar20) {
                        lVar8 = (longlong)puVar20 - (longlong)puVar42;
                        pcVar46 = local_108;
                        do {
                          puVar47 = puVar42;
                          if ((char)*puVar42 != (char)pcVar46) break;
                          puVar42 = (ulonglong *)((longlong)puVar42 + 1);
                          pcVar46 = (char *)((ulonglong)pcVar46 >> 8);
                          lVar8 = lVar8 + -1;
                          puVar47 = puVar20;
                        } while (lVar8 != 0);
                      }
LAB_142735933:
                      uVar33 = (longlong)puVar47 - (longlong)puVar58;
                      uVar51 = (uVar33 & 0xffffffff) + 4;
                      puVar47 = local_1a0;
                      if ((uVar4 < uVar13) &&
                         (puVar47 = local_190,
                         (ulonglong *)((longlong)puVar19 + uVar51) == local_118)) {
                        bVar2 = (char)uVar33 * '\b' & 0x1f;
                        puVar20 = (ulonglong *)(ulonglong)(uVar16 << bVar2 | uVar16 >> 0x20 - bVar2)
                        ;
                        if ((uVar33 & 3) == 0) {
                          puVar20 = puVar11;
                        }
                        uVar33 = (longlong)puVar20 * 0x100000001;
                        puVar20 = local_1a0;
                        if (local_1a0 < puVar25) {
LAB_142735cf9:
                          if (*puVar20 == uVar33) goto code_r0x000142735d01;
                          uVar33 = *puVar20 ^ uVar33;
                          if (uVar33 == 0) {
                            uVar52 = 0x40;
                          }
                          else {
                            lVar8 = 0;
                            if (uVar33 != 0) {
                              for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                              }
                            }
                            uVar52 = (uint)lVar8;
                          }
                          puVar20 = (ulonglong *)((longlong)puVar20 + (ulonglong)(uVar52 >> 3));
                          goto LAB_142735da8;
                        }
LAB_142735dc6:
                        for (; (puVar20 < local_1f0 && ((char)*puVar20 == (char)uVar33));
                            puVar20 = (ulonglong *)((longlong)puVar20 + 1)) {
                          uVar33 = uVar33 >> 8;
                        }
LAB_142735da8:
                        uVar51 = uVar51 + (uint)((int)puVar20 - (int)local_1a0);
                      }
                      puVar25 = puVar19;
                      do {
                        puVar20 = puVar25;
                        if (puVar20 < (ulonglong *)((longlong)puVar47 + 4)) break;
                        puVar25 = (ulonglong *)((longlong)puVar20 + -4);
                      } while (*(uint *)((longlong)puVar20 + -4) == uVar16);
                      puVar25 = puVar20;
                      if (puVar47 < puVar20) {
                        lVar8 = 0;
                        do {
                          if (*(char *)((longlong)puVar20 + lVar8 + -1) !=
                              *(char *)((longlong)&local_4c + lVar8 + 3)) {
                            puVar25 = (ulonglong *)((longlong)puVar20 + lVar8);
                            break;
                          }
                          lVar44 = lVar8 + -1;
                          lVar8 = lVar8 + -1;
                          puVar25 = puVar47;
                        } while (puVar47 < (ulonglong *)((longlong)puVar20 + lVar44));
                      }
                      uVar33 = (longlong)puVar19 - (longlong)puVar25;
                      iVar37 = (int)uVar33;
                      local_4c = uVar16;
                      if ((uVar6 < uVar13 && uVar13 <= uVar4) &&
                          (ulonglong *)((longlong)puVar19 - (uVar33 & 0xffffffff)) == local_1a0) {
                        bVar2 = (char)uVar33 * -8 & 0x1f;
                        puVar25 = local_118;
                        pcVar46 = local_70;
                        local_4c = uVar16 << bVar2 | uVar16 >> 0x20 - bVar2;
                        if ((-iVar37 & 3U) == 0) {
                          local_4c = uVar16;
                        }
                        do {
                          puVar19 = puVar25;
                          if ((longlong)pcVar46 < 4) {
                            if ((longlong)pcVar46 < 1) goto LAB_142735ddd;
                            break;
                          }
                          puVar25 = (ulonglong *)((longlong)puVar19 + -4);
                          pcVar46 = pcVar46 + -4;
                        } while (*(uint *)((longlong)puVar19 + -4) == local_4c);
                        pcVar46 = (char *)((longlong)&local_4c + 3);
                        do {
                          if (*(char *)((longlong)puVar19 + -1) != *pcVar46) break;
                          puVar19 = (ulonglong *)((longlong)puVar19 + -1);
                          pcVar46 = pcVar46 + -1;
                        } while (local_190 < puVar19);
LAB_142735ddd:
                        iVar37 = (iVar27 - (int)puVar19) + iVar37;
                      }
                      uVar52 = uVar4 - iVar37;
                      if (uVar4 - iVar37 <= uVar53) {
                        uVar52 = uVar53;
                      }
                      uVar33 = (uVar4 - uVar52) + uVar51;
                      if ((uVar51 <= uVar35) && (uVar35 <= uVar33)) {
                        uVar4 = (uVar4 - (int)uVar35) + (int)uVar51;
                        if (0xfffffffc < uVar4 - uVar13) {
                          uVar4 = uVar13;
                        }
                        iVar37 = 0;
                        iVar30 = 2;
                        puVar25 = local_1c0;
                        goto LAB_142735836;
                      }
                      iVar37 = 0;
                      iVar30 = 2;
                      puVar25 = local_1c0;
                      uVar4 = uVar13;
                      if (uVar52 - uVar13 < 0xfffffffd) {
                        if (uVar35 <= uVar33) {
                          uVar33 = uVar35;
                        }
                        if ((ulonglong)(longlong)iVar29 < uVar33) {
                          if (0xffff < (longlong)local_88 - (ulonglong)uVar52) goto LAB_142736b3b;
                          local_f0 = (uint *)((ulonglong)uVar52 + (longlong)local_178);
                          puVar10 = (ulonglong *)(uVar33 & 0xffffffff);
                        }
                        iVar37 = 0;
                        uVar4 = (uint)*(ushort *)
                                       (local_200 + 0x20000 + ((ulonglong)uVar52 & 0xffff) * 2);
                        if (uVar52 < uVar4) goto LAB_142736b3b;
                        uVar4 = uVar52 - uVar4;
                      }
                      goto LAB_142735836;
                    }
                  }
                }
LAB_142735823:
                uVar4 = iVar23 - (uint)*(ushort *)
                                        (local_200 + 0x20000 +
                                        (ulonglong)(iVar37 + iVar23 & 0xffff) * 2);
              }
LAB_142735836:
              if ((uVar4 < uVar53) || (bVar61 = iVar49 < 2, iVar49 = iVar49 + -1, bVar61))
              goto LAB_142736b3b;
              goto LAB_1427354d3;
            }
          }
        }
        else if ((int)uVar32 < (int)(uint)local_160[(longlong)puVar34 * 2 + 2]) {
          iVar49 = (int)((longlong)local_198 - (longlong)local_1a0);
          uVar43 = uVar13 + iVar49;
          uVar53 = (uVar13 - 0xffff) + iVar49;
          if (uVar43 < uVar14) {
            uVar53 = uVar6;
          }
          uVar16 = (uint)*local_198;
          puVar19 = (ulonglong *)(ulonglong)*(uint *)(local_200 + 0x40020);
          if (*(uint *)(local_200 + 0x40020) < uVar43) {
            do {
              uVar35 = (ulonglong)
                       ((uint)(*(int *)((longlong)local_178 + (longlong)puVar19) * -0x61c8864f) >>
                       0x11);
              uVar4 = (uint)puVar19;
              uVar52 = uVar4 - *(int *)(local_200 + uVar35 * 4);
              if (0xfffe < uVar52) {
                uVar52 = 0xffff;
              }
              *(short *)(local_200 + 0x20000 + (ulonglong)(uVar4 & 0xffff) * 2) = (short)uVar52;
              *(uint *)(local_200 + uVar35 * 4) = uVar4;
              puVar19 = (ulonglong *)((longlong)puVar19 + 1);
            } while (puVar60 != puVar19);
          }
          *(uint *)(local_200 + 0x40020) = uVar43;
          uVar4 = *(uint *)(local_200 + (ulonglong)((uint)*local_198 * -0x61c8864f >> 0x11) * 4);
          bVar62 = uVar16 >> 0x18 == (uVar16 & 0xff);
          bVar3 = uVar16 >> 0x10 == (uVar16 & 0xffff);
          local_110 = (ulonglong *)CONCAT71(local_110._1_7_,bVar62 && bVar3);
          local_1d0 = puVar60;
          local_180 = puVar17;
          local_158 = puVar38;
          puVar19 = puVar34;
          local_100 = puVar18;
          local_c8 = uVar9;
          if ((uVar53 <= uVar4) && (0 < local_1f4)) {
            uVar52 = (int)puVar22 - (int)local_138;
            local_88 = (char *)(((longlong)local_198 - (longlong)local_1a0) + (longlong)puVar54);
            local_170 = (ulonglong *)((longlong)local_198 + 4);
            uVar35 = (ulonglong)uVar16 * 0x100000001;
            iVar37 = 0;
            local_108 = (char *)CONCAT44(local_108._4_4_,uVar52);
            local_1e8 = (ulonglong *)(ulonglong)uVar52;
            local_1e0 = (ulonglong *)((ulonglong)local_1e0 & 0xffffffff00000000);
            puVar19 = (ulonglong *)0x0;
            local_f0 = (uint *)0x0;
            local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,uVar43);
            local_1a8 = (ulonglong *)CONCAT44(local_1a8._4_4_,uVar53);
            iVar49 = local_1f4;
LAB_1427360cd:
            uVar51 = (ulonglong)uVar4;
            puVar10 = local_1e8;
            if (((char)local_148 == '\0') || (7 < uVar43 - uVar4)) {
              uVar40 = uVar13 - uVar4;
              if (uVar13 < uVar4 || uVar40 == 0) {
                puVar57 = (uint *)(uVar51 + (longlong)local_178);
                if ((*(short *)((longlong)local_198 + (longlong)(int)local_1e8 + -1) !=
                     *(short *)((longlong)(int)local_1e8 + -1 + (longlong)puVar57)) ||
                   (*puVar57 != uVar16)) goto LAB_1427360e9;
                puVar10 = (ulonglong *)(puVar57 + 1);
                puVar11 = local_170;
                if (local_170 < puVar25) {
                  uVar33 = *local_170 ^ *puVar10;
                  if (uVar33 == 0) {
                    uVar40 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar40 = (uint)lVar8;
                  }
                  if (*puVar10 == *local_170) {
                    puVar11 = (ulonglong *)((longlong)local_198 + 0xc);
                    puVar10 = (ulonglong *)(puVar57 + 3);
                    goto LAB_1427366a9;
                  }
                  uVar40 = uVar40 >> 3;
                }
                else {
LAB_1427366a9:
                  if (puVar11 < puVar25) {
                    iVar30 = uVar36 + (int)puVar11;
LAB_1427366b9:
                    if (*puVar10 == *puVar11) goto code_r0x0001427366c4;
                    uVar33 = *puVar11 ^ *puVar10;
                    if (uVar33 == 0) {
                      uVar40 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar40 = (uint)lVar8;
                    }
                    uVar40 = (uVar40 >> 3) + iVar30;
                    goto LAB_1427368fc;
                  }
LAB_1427366d5:
                  if ((puVar11 < local_f8) && ((uint)*puVar10 == (uint)*puVar11)) {
                    puVar11 = (ulonglong *)((longlong)puVar11 + 4);
                    puVar10 = (ulonglong *)((longlong)puVar10 + 4);
                  }
                  if ((puVar11 < local_e0) && ((short)*puVar10 == (short)*puVar11)) {
                    puVar11 = (ulonglong *)((longlong)puVar11 + 2);
                    puVar10 = (ulonglong *)((longlong)puVar10 + 2);
                  }
                  if (puVar11 < local_1f0) {
                    puVar11 = (ulonglong *)
                              ((longlong)puVar11 + (ulonglong)((char)*puVar10 == (char)*puVar11));
                  }
                  uVar40 = (int)puVar11 - (int)local_170;
                }
LAB_1427368fc:
                uVar40 = uVar40 + 4;
                puVar11 = (ulonglong *)(ulonglong)uVar40;
                if ((int)local_1e8 < (int)uVar40) {
                  local_f0 = puVar57;
                }
                puVar10 = (ulonglong *)((ulonglong)local_1e8 & 0xffffffff);
                if ((int)local_1e8 < (int)uVar40) {
                  puVar10 = (ulonglong *)(ulonglong)uVar40;
                }
              }
              else {
                if ((uVar15 < uVar4) ||
                   (puVar57 = (uint *)((ulonglong)(uVar4 - uVar6) + (longlong)local_190),
                   *puVar57 != uVar16)) goto LAB_1427360e9;
                puVar25 = (ulonglong *)((longlong)local_198 + (ulonglong)uVar40);
                if (local_1f0 < puVar25) {
                  puVar25 = local_1f0;
                }
                puVar20 = (ulonglong *)(puVar57 + 1);
                puVar11 = (ulonglong *)((longlong)puVar25 + -7);
                puVar47 = local_170;
                if (local_170 < puVar11) {
                  uVar33 = *local_170 ^ *puVar20;
                  if (uVar33 == 0) {
                    uVar5 = 0x40;
                  }
                  else {
                    lVar8 = 0;
                    if (uVar33 != 0) {
                      for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                      }
                    }
                    uVar5 = (uint)lVar8;
                  }
                  if (*puVar20 == *local_170) {
                    puVar47 = (ulonglong *)((longlong)local_198 + 0xc);
                    puVar20 = (ulonglong *)(puVar57 + 3);
                    goto LAB_14273647e;
                  }
                  uVar5 = uVar5 >> 3;
                }
                else {
LAB_14273647e:
                  if (puVar47 < puVar11) {
                    iVar30 = uVar36 + (int)puVar47;
LAB_14273648d:
                    if (*puVar20 == *puVar47) goto code_r0x000142736498;
                    uVar33 = *puVar47 ^ *puVar20;
                    if (uVar33 == 0) {
                      uVar5 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar5 = (uint)lVar8;
                    }
                    uVar5 = (uVar5 >> 3) + iVar30;
                    goto LAB_142736747;
                  }
LAB_1427364a8:
                  if ((puVar47 < (ulonglong *)((longlong)puVar25 + -3)) &&
                     ((uint)*puVar20 == (uint)*puVar47)) {
                    puVar47 = (ulonglong *)((longlong)puVar47 + 4);
                    puVar20 = (ulonglong *)((longlong)puVar20 + 4);
                  }
                  if ((puVar47 < (ulonglong *)((longlong)puVar25 + -1)) &&
                     ((short)*puVar20 == (short)*puVar47)) {
                    puVar47 = (ulonglong *)((longlong)puVar47 + 2);
                    puVar20 = (ulonglong *)((longlong)puVar20 + 2);
                  }
                  if (puVar47 < puVar25) {
                    puVar47 = (ulonglong *)
                              ((longlong)puVar47 + (ulonglong)((char)*puVar20 == (char)*puVar47));
                  }
                  uVar5 = (int)puVar47 - (int)local_170;
                }
LAB_142736747:
                uVar56 = uVar5 + 4;
                if ((puVar25 < local_1f0) &&
                   ((ulonglong *)((longlong)local_198 + (longlong)(int)uVar5 + 4) == puVar25)) {
                  puVar11 = puVar25;
                  puVar47 = local_1a0;
                  if (puVar25 < local_1c0) {
                    uVar33 = *puVar25 ^ *local_1a0;
                    if (uVar33 == 0) {
                      uVar5 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar33 != 0) {
                        for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar5 = (uint)lVar8;
                    }
                    if (*local_1a0 == *puVar25) {
                      puVar11 = puVar25 + 1;
                      puVar47 = local_1a0 + 1;
                      goto LAB_1427367b3;
                    }
                    uVar5 = uVar5 >> 3;
                  }
                  else {
LAB_1427367b3:
                    if (puVar11 < local_1c0) {
                      puVar20 = (ulonglong *)((ulonglong)uVar40 + (longlong)puVar17);
                      if (local_1f0 < puVar20) {
                        puVar20 = local_1f0;
                      }
                      iVar30 = (int)puVar11 - (int)puVar20;
LAB_1427367d1:
                      if (*puVar47 == *puVar11) goto code_r0x0001427367e1;
                      uVar33 = *puVar11 ^ *puVar47;
                      if (uVar33 == 0) {
                        uVar40 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar33 != 0) {
                          for (; (uVar33 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar40 = (uint)lVar8;
                      }
                      uVar5 = (uVar40 >> 3) + iVar30;
                      goto LAB_142736943;
                    }
LAB_1427367f1:
                    if ((puVar11 < local_f8) && ((uint)*puVar47 == (uint)*puVar11)) {
                      puVar11 = (ulonglong *)((longlong)puVar11 + 4);
                      puVar47 = (ulonglong *)((longlong)puVar47 + 4);
                    }
                    if ((puVar11 < local_e0) && ((short)*puVar47 == (short)*puVar11)) {
                      puVar11 = (ulonglong *)((longlong)puVar11 + 2);
                      puVar47 = (ulonglong *)((longlong)puVar47 + 2);
                    }
                    if (puVar11 < local_1f0) {
                      puVar11 = (ulonglong *)
                                ((longlong)puVar11 + (ulonglong)((char)*puVar47 == (char)*puVar11));
                    }
                    uVar5 = (int)puVar11 - (int)puVar25;
                  }
LAB_142736943:
                  uVar56 = uVar56 + uVar5;
                }
                puVar11 = (ulonglong *)(ulonglong)uVar56;
                puVar25 = local_1c0;
                if ((int)local_1e8 < (int)uVar56) {
                  local_f0 = (uint *)(uVar51 + (longlong)local_178);
                  puVar10 = puVar11;
                }
              }
            }
            else {
LAB_1427360e9:
              puVar11 = (ulonglong *)0x0;
            }
            iVar29 = (int)puVar11;
            iVar30 = (int)puVar10;
            if (((iVar29 == iVar30) && (iVar30 + uVar4 <= uVar43)) && (3 < iVar29)) {
              iVar26 = 0;
              iVar23 = 0x10;
              uVar40 = 1;
              do {
                uVar1 = *(ushort *)(local_200 + 0x20000 + (ulonglong)(iVar26 + uVar4 & 0xffff) * 2);
                iVar24 = iVar23 >> 4;
                uVar5 = (uint)uVar1;
                bVar61 = uVar40 < uVar5;
                iVar23 = iVar23 + 1;
                if (bVar61) {
                  iVar23 = 0x10;
                }
                uVar56 = (uint)uVar1;
                if (uVar5 < uVar40) {
                  uVar56 = uVar40;
                }
                uVar40 = uVar56;
                if (bVar61) {
                  iVar37 = iVar26;
                }
                iVar26 = iVar24 + iVar26;
              } while (iVar26 < iVar29 + -3);
              uVar5 = uVar40;
              if (uVar4 < uVar40) {
                uVar5 = 0;
              }
              if (uVar40 < 2) {
                uVar5 = 0;
              }
              if (uVar40 < 2) {
                uVar51 = (ulonglong)(uVar4 - uVar5);
                puVar25 = local_1c0;
                goto LAB_1427361a1;
              }
              bVar61 = uVar4 < uVar40;
              puVar25 = local_1c0;
              uVar4 = uVar4 - uVar5;
              local_1e8 = puVar11;
              if (bVar61) goto LAB_142736bb0;
            }
            else {
LAB_1427361a1:
              iVar29 = (int)uVar51;
              local_1e8 = puVar10;
              if ((*(short *)(local_200 + 0x20000 + (uVar51 & 0xffff) * 2) == 1) && (iVar37 == 0)) {
                if ((uint)local_1e0 == 0) {
                  local_1e0 = (ulonglong *)CONCAT44(local_1e0._4_4_,1);
                  if (!bVar62 || !bVar3) goto LAB_142736401;
                  uVar51 = uVar35;
                  puVar19 = local_170;
                  if (local_170 < puVar25) {
LAB_14273639b:
                    if (*puVar19 == uVar35) goto code_r0x0001427363a7;
                    uVar51 = *puVar19 ^ uVar35;
                    if (uVar51 == 0) {
                      uVar4 = 0x40;
                    }
                    else {
                      lVar8 = 0;
                      if (uVar51 != 0) {
                        for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                        }
                      }
                      uVar4 = (uint)lVar8;
                    }
                    puVar19 = (ulonglong *)((longlong)puVar19 + (ulonglong)(uVar4 >> 3));
                    goto LAB_142736668;
                  }
LAB_1427363b3:
                  for (; (puVar19 < local_1f0 && ((char)*puVar19 == (char)uVar51));
                      puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                    uVar51 = uVar51 >> 8;
                  }
LAB_142736668:
                  puVar19 = (ulonglong *)((ulonglong)(uint)((int)puVar19 - (int)local_170) + 4);
                  local_1e0 = (ulonglong *)CONCAT44(local_1e0._4_4_,2);
                }
                uVar4 = iVar29 - 1;
                if (((uVar4 - uVar13 < 0xfffffffd) && ((uint)local_1e0 == 2)) && (uVar53 <= uVar4))
                {
                  puVar10 = local_140;
                  if (uVar13 <= uVar4) {
                    puVar10 = local_178;
                  }
                  uVar51 = (ulonglong)uVar4;
                  local_1e0 = (ulonglong *)CONCAT44(local_1e0._4_4_,2);
                  if (*(uint *)((longlong)puVar10 + uVar51) == uVar16) {
                    puVar11 = (ulonglong *)((longlong)puVar10 + uVar51);
                    puVar47 = local_118;
                    if (uVar13 <= uVar4) {
                      puVar47 = local_1f0;
                    }
                    puVar20 = (ulonglong *)((longlong)puVar11 + 4);
                    puVar58 = puVar20;
                    if (puVar20 < (ulonglong *)((longlong)puVar47 + -7)) {
                      pcVar46 = (char *)((longlong)puVar10 + uVar51 + 4);
LAB_14273624a:
                      if (*puVar58 == uVar35) goto code_r0x000142736256;
                      uVar51 = *puVar58 ^ uVar35;
                      if (uVar51 == 0) {
                        uVar40 = 0x40;
                      }
                      else {
                        lVar8 = 0;
                        if (uVar51 != 0) {
                          for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                          }
                        }
                        uVar40 = (uint)lVar8;
                      }
                      puVar10 = (ulonglong *)(pcVar46 + (uVar40 >> 3));
                      goto LAB_142736515;
                    }
LAB_142736263:
                    puVar10 = puVar58;
                    if (puVar58 < puVar47) {
                      lVar8 = (longlong)puVar47 - (longlong)puVar58;
                      uVar51 = uVar35;
                      do {
                        puVar10 = puVar58;
                        if ((char)*puVar58 != (char)uVar51) break;
                        puVar58 = (ulonglong *)((longlong)puVar58 + 1);
                        uVar51 = uVar51 >> 8;
                        lVar8 = lVar8 + -1;
                        puVar10 = puVar47;
                      } while (lVar8 != 0);
                    }
LAB_142736515:
                    uVar51 = (longlong)puVar10 - (longlong)puVar20;
                    puVar47 = (ulonglong *)((uVar51 & 0xffffffff) + 4);
                    puVar10 = local_1a0;
                    if ((uVar4 < uVar13) &&
                       (puVar10 = local_190,
                       (ulonglong *)((longlong)puVar11 + (longlong)puVar47) == local_118)) {
                      bVar2 = (char)uVar51 * '\b' & 0x1f;
                      uVar40 = uVar16 << bVar2 | uVar16 >> 0x20 - bVar2;
                      if ((uVar51 & 3) == 0) {
                        uVar40 = uVar16;
                      }
                      uVar51 = (ulonglong)uVar40 * 0x100000001;
                      puVar20 = local_1a0;
                      if (local_1a0 < puVar25) {
LAB_1427368bb:
                        if (*puVar20 == uVar51) goto code_r0x0001427368c3;
                        uVar51 = *puVar20 ^ uVar51;
                        if (uVar51 == 0) {
                          uVar40 = 0x40;
                        }
                        else {
                          lVar8 = 0;
                          if (uVar51 != 0) {
                            for (; (uVar51 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
                            }
                          }
                          uVar40 = (uint)lVar8;
                        }
                        puVar20 = (ulonglong *)((longlong)puVar20 + (ulonglong)(uVar40 >> 3));
                        goto LAB_14273697c;
                      }
LAB_142736996:
                      for (; (puVar20 < local_1f0 && ((char)*puVar20 == (char)uVar51));
                          puVar20 = (ulonglong *)((longlong)puVar20 + 1)) {
                        uVar51 = uVar51 >> 8;
                      }
LAB_14273697c:
                      puVar47 = (ulonglong *)
                                ((longlong)puVar47 +
                                (ulonglong)(uint)((int)puVar20 - (int)local_1a0));
                    }
                    puVar25 = puVar11;
                    do {
                      puVar20 = puVar25;
                      if (puVar20 < (ulonglong *)((longlong)puVar10 + 4)) break;
                      puVar25 = (ulonglong *)((longlong)puVar20 + -4);
                    } while (*(uint *)((longlong)puVar20 + -4) == uVar16);
                    puVar25 = puVar20;
                    if (puVar10 < puVar20) {
                      lVar8 = 0;
                      do {
                        if (*(char *)((longlong)puVar20 + lVar8 + -1) !=
                            *(char *)((longlong)&local_4c + lVar8 + 3)) {
                          puVar25 = (ulonglong *)((longlong)puVar20 + lVar8);
                          break;
                        }
                        lVar44 = lVar8 + -1;
                        lVar8 = lVar8 + -1;
                        puVar25 = puVar10;
                      } while (puVar10 < (ulonglong *)((longlong)puVar20 + lVar44));
                    }
                    uVar51 = (longlong)puVar11 - (longlong)puVar25;
                    iVar37 = (int)uVar51;
                    local_4c = uVar16;
                    if ((uVar6 < uVar13 && uVar13 <= uVar4) &&
                        (ulonglong *)((longlong)puVar11 - (uVar51 & 0xffffffff)) == local_1a0) {
                      bVar2 = (char)uVar51 * -8 & 0x1f;
                      puVar25 = local_118;
                      pcVar46 = local_70;
                      local_4c = uVar16 << bVar2 | uVar16 >> 0x20 - bVar2;
                      if ((-iVar37 & 3U) == 0) {
                        local_4c = uVar16;
                      }
                      do {
                        puVar10 = puVar25;
                        if ((longlong)pcVar46 < 4) {
                          if ((longlong)pcVar46 < 1) goto LAB_1427369ad;
                          break;
                        }
                        puVar25 = (ulonglong *)((longlong)puVar10 + -4);
                        pcVar46 = pcVar46 + -4;
                      } while (*(uint *)((longlong)puVar10 + -4) == local_4c);
                      pcVar46 = (char *)((longlong)&local_4c + 3);
                      do {
                        if (*(char *)((longlong)puVar10 + -1) != *pcVar46) break;
                        puVar10 = (ulonglong *)((longlong)puVar10 + -1);
                        pcVar46 = pcVar46 + -1;
                      } while (local_190 < puVar10);
LAB_1427369ad:
                      iVar37 = (iVar27 - (int)puVar10) + iVar37;
                    }
                    uVar40 = uVar4 - iVar37;
                    if (uVar4 - iVar37 <= uVar53) {
                      uVar40 = uVar53;
                    }
                    puVar10 = (ulonglong *)((ulonglong)(uVar4 - uVar40) + (longlong)puVar47);
                    if ((puVar47 <= puVar19) && (puVar19 <= puVar10)) {
                      uVar4 = (uVar4 - (int)puVar19) + (int)puVar47;
                      if (0xfffffffc < uVar4 - uVar13) {
                        uVar4 = uVar13;
                      }
                      iVar37 = 0;
                      local_1e0 = (ulonglong *)CONCAT44(local_1e0._4_4_,2);
                      puVar25 = local_1c0;
                      goto LAB_142736417;
                    }
                    iVar37 = 0;
                    local_1e0 = (ulonglong *)CONCAT44(local_1e0._4_4_,2);
                    puVar25 = local_1c0;
                    uVar4 = uVar13;
                    if (uVar40 - uVar13 < 0xfffffffd) {
                      if (puVar19 <= puVar10) {
                        puVar10 = puVar19;
                      }
                      if ((ulonglong *)(longlong)iVar30 < puVar10) {
                        if (0xffff < (longlong)local_88 - (ulonglong)uVar40) goto LAB_142736bb0;
                        local_f0 = (uint *)((ulonglong)uVar40 + (longlong)local_178);
                        local_1e8 = puVar10;
                      }
                      iVar37 = 0;
                      uVar4 = (uint)*(ushort *)
                                     (local_200 + 0x20000 + (ulonglong)(uVar40 & 0xffff) * 2);
                      if (uVar40 < uVar4) goto LAB_142736bb0;
                      uVar4 = uVar40 - uVar4;
                    }
                    goto LAB_142736417;
                  }
                }
              }
LAB_142736401:
              uVar4 = iVar29 - (uint)*(ushort *)
                                      (local_200 + 0x20000 +
                                      (ulonglong)(iVar37 + iVar29 & 0xffff) * 2);
            }
LAB_142736417:
            if ((uVar4 < uVar53) || (bVar61 = iVar49 < 2, iVar49 = iVar49 + -1, bVar61))
            goto LAB_142736bb0;
            goto LAB_1427360cd;
          }
        }
        goto LAB_142736f0f;
      }
      goto LAB_142737043;
    }
    iVar49 = 0;
    if ((param_7 != 0) &&
       (local_168 < (char *)((longlong)puVar45 + (ulonglong)puVar17 / 0xff) + (longlong)puVar17 + 9)
       ) goto LAB_14273a67f;
    puVar7 = (ulonglong *)((longlong)puVar45 + 1);
    if (puVar17 < &DAT_0000000f) {
      *(char *)puVar45 = (char)puVar17 << 4;
    }
    else {
      pcVar46 = (char *)((longlong)puVar17 + -0xf);
      *(char *)puVar45 = -0x10;
      if ((char *)0xfe < pcVar46) {
        uVar9 = (ulonglong)((longlong)puVar17 + -0x10e) / 0xff;
        memset(puVar7,(int)CONCAT71((int7)((ulonglong)((longlong)puVar17 + -0x10e) / 0x1fe),0xff),
               uVar9 + 1);
        puVar7 = (ulonglong *)((longlong)local_130 + uVar9 + 2);
        pcVar46 = (char *)((longlong)puVar17 + uVar9 * -0xff + -0x10e);
      }
      *(char *)puVar7 = (char)pcVar46;
      puVar7 = (ulonglong *)((longlong)puVar7 + 1);
    }
    puVar17 = (ulonglong *)((longlong)puVar17 + (longlong)puVar7);
    puVar45 = local_128;
    do {
      *puVar7 = *puVar45;
      puVar7 = puVar7 + 1;
      puVar45 = puVar45 + 1;
    } while (puVar7 < puVar17);
    puVar57 = (uint *)((longlong)puVar22 + -4);
    *(short *)puVar17 = (short)lVar8;
    if ((param_7 != 0) &&
       (puVar7 = local_160,
       local_168 < (ulonglong *)((longlong)puVar17 + (ulonglong)puVar57 / 0xff + 8)))
    goto LAB_14273a67f;
    puVar45 = (ulonglong *)((longlong)puVar17 + 2);
    if (puVar57 < &DAT_0000000f) {
      *(char *)local_130 = (char)*local_130 + (char)puVar57;
    }
    else {
      *(char *)local_130 = (char)*local_130 + '\x0f';
      pcVar46 = (char *)((longlong)puVar22 - 0x13);
      if ((char *)0x1fd < pcVar46) {
        uVar9 = ((longlong)puVar22 - 0x211U) / 0x1fe;
        memset(puVar45,(int)CONCAT71((int7)((ulonglong)((longlong)puVar22 - 0x211U) / 0x1fe),0xff),
               uVar9 * 2 + 2);
        puVar45 = (ulonglong *)((longlong)puVar17 + uVar9 * 2 + 4);
        pcVar46 = (char *)((longlong)puVar22 + uVar9 * -0x1fe + -0x211);
      }
      if ((char *)0xfe < pcVar46) {
        pcVar46 = pcVar46 + -0xff;
        *(char *)puVar45 = -1;
        puVar45 = (ulonglong *)((longlong)puVar45 + 1);
      }
      *(char *)puVar45 = (char)pcVar46;
      puVar45 = (ulonglong *)((longlong)puVar45 + 1);
    }
    param_2 = (ulonglong *)((longlong)local_1b8 + (longlong)puVar22);
    puVar7 = local_160;
    puVar48 = param_2;
    param_1 = local_200;
  }
LAB_14273515e:
  if (puVar25 < puVar48) goto LAB_142734225;
  goto LAB_1427343de;
code_r0x0001427366c4:
  puVar11 = puVar11 + 1;
  puVar10 = puVar10 + 1;
  iVar30 = iVar30 + 8;
  if (puVar25 <= puVar11) goto LAB_1427366d5;
  goto LAB_1427366b9;
code_r0x000142736498:
  puVar47 = puVar47 + 1;
  puVar20 = puVar20 + 1;
  iVar30 = iVar30 + 8;
  if (puVar11 <= puVar47) goto LAB_1427364a8;
  goto LAB_14273648d;
code_r0x0001427367e1:
  puVar11 = puVar11 + 1;
  puVar47 = puVar47 + 1;
  iVar30 = iVar30 + 8;
  if (local_1c0 <= puVar11) goto LAB_1427367f1;
  goto LAB_1427367d1;
code_r0x0001427363a7:
  puVar19 = puVar19 + 1;
  if (puVar25 <= puVar19) goto LAB_1427363b3;
  goto LAB_14273639b;
code_r0x000142736256:
  puVar58 = puVar58 + 1;
  pcVar46 = pcVar46 + 8;
  if ((ulonglong *)((longlong)puVar47 + -7) <= puVar58) goto LAB_142736263;
  goto LAB_14273624a;
code_r0x0001427368c3:
  puVar20 = puVar20 + 1;
  if (puVar25 <= puVar20) goto LAB_142736996;
  goto LAB_1427368bb;
LAB_142736bb0:
  puVar19 = puVar34;
  if ((int)local_1e8 <= (int)uVar52) goto LAB_142736f0f;
  uVar35 = (longlong)local_1e8 << 0x20;
  if ((int)local_1e8 - 0x13U < 0x12) {
    uVar35 = 0x1200000000;
  }
  if ((char)local_148 == '\0') {
    uVar35 = (longlong)local_1e8 << 0x20;
  }
  if (uVar35 == 0) goto LAB_142736f0f;
  goto LAB_142736c31;
code_r0x000142735af9:
  puVar47 = puVar47 + 1;
  puVar19 = puVar19 + 1;
  iVar29 = iVar29 + 8;
  if (puVar25 <= puVar47) goto LAB_142735b0a;
  goto LAB_142735aee;
code_r0x0001427358b9:
  puVar20 = puVar20 + 1;
  puVar58 = puVar58 + 1;
  iVar29 = iVar29 + 8;
  if (puVar47 <= puVar20) goto LAB_1427358c9;
  goto LAB_1427358ae;
code_r0x000142735c22:
  puVar47 = puVar47 + 1;
  puVar20 = puVar20 + 1;
  iVar29 = iVar29 + 8;
  if (local_1c0 <= puVar47) goto LAB_142735c32;
  goto LAB_142735c12;
code_r0x0001427357cb:
  puVar47 = puVar47 + 1;
  if (puVar25 <= puVar47) goto LAB_1427357d7;
  goto LAB_1427357bf;
code_r0x00014273566f:
  puVar42 = puVar42 + 1;
  pcVar46 = pcVar46 + 8;
  if ((ulonglong *)((longlong)puVar20 + -7) <= puVar42) goto LAB_14273567c;
  goto LAB_142735663;
code_r0x000142735d01:
  puVar20 = puVar20 + 1;
  if (puVar25 <= puVar20) goto LAB_142735dc6;
  goto LAB_142735cf9;
LAB_142736b3b:
  local_1d0 = puVar60;
  local_170 = puVar11;
  puVar19 = puVar34;
  if ((int)puVar10 < 4) goto LAB_142736f0f;
  uVar35 = (longlong)puVar10 << 0x20;
  if ((int)puVar10 - 0x13U < 0x12) {
    uVar35 = 0x1200000000;
  }
  if ((char)local_148 == '\0') {
    uVar35 = (longlong)puVar10 << 0x20;
  }
LAB_142736c31:
  puVar10 = (ulonglong *)((longlong)local_198 - (longlong)local_f0);
  uVar51 = uVar35 >> 0x20;
  if ((local_e8 < (ulonglong *)((longlong)uVar35 >> 0x20)) ||
     (iVar49 = (int)(uVar35 >> 0x20), 0xfff < (int)local_138 + iVar49)) {
    local_1c8 = (ulonglong *)(ulonglong)((int)local_138 + 1);
    local_1d0 = puVar60;
    local_180 = puVar17;
    local_158 = puVar38;
    local_138 = puVar34;
    local_100 = puVar18;
    local_c8 = uVar9;
    goto LAB_14273705a;
  }
  uVar53 = *(uint *)((longlong)local_90 + 0xc);
  lVar8 = (longlong)(int)uVar53;
  uVar43 = uVar53 + 1 + (uVar53 - 0xf) / 0xff;
  if (lVar8 < 0xf) {
    uVar43 = uVar53;
  }
  uVar16 = uVar53 - 0xe;
  iVar37 = 1;
  lVar44 = 0;
  puVar19 = local_98;
  do {
    if (lVar8 + 1 + lVar44 < 0xf) {
      iVar30 = iVar37 + uVar53;
    }
    else {
      iVar30 = uVar16 / 0xff + uVar53 + 2 + (int)lVar44;
    }
    uVar4 = iVar30 + (uVar32 - uVar43);
    if ((int)uVar4 < (int)(uint)*puVar19) {
      ((uint *)((longlong)puVar19 + 4))[0] = 0;
      ((uint *)((longlong)puVar19 + 4))[1] = 1;
      *(uint *)((longlong)puVar19 + 0xc) = uVar53 + (int)lVar44 + 1;
      *(uint *)puVar19 = uVar4;
    }
    iVar37 = iVar37 + 1;
    lVar44 = lVar44 + 1;
    puVar19 = puVar19 + 2;
    uVar16 = uVar16 + 1;
  } while (lVar44 != 3);
  if (3 < iVar49) {
    uVar35 = local_90[1];
    iVar49 = uVar43 + 3;
    uVar43 = uVar43 + 4;
    puVar19 = puVar18;
    uVar33 = 4;
    do {
      uVar16 = (uint)uVar33;
      if ((uint)uVar35 == 1) {
        uVar4 = 0;
        if (lVar8 < (longlong)puVar34) {
          uVar4 = (uint)local_160[(longlong)(int)((int)local_138 - uVar53) * 2];
        }
        iVar37 = iVar49;
        if (0x12 < uVar33) {
          iVar37 = (uVar16 - 0x13) / 0xff + uVar43;
        }
        uVar4 = iVar37 + uVar4;
        uVar52 = uVar53;
      }
      else {
        iVar37 = 3;
        if (0x12 < uVar33) {
          iVar37 = (uVar16 - 0x13) / 0xff + 4;
        }
        uVar4 = iVar37 + uVar32;
        uVar52 = 0;
      }
      puVar25 = (ulonglong *)((longlong)local_120 + (uVar33 - 4));
      iVar37 = (int)puVar25;
      if (((int)puVar22 + 3 < iVar37) || ((int)uVar4 <= (int)((uint)*puVar19 + (int)local_a0))) {
        if (iVar37 < (int)puVar22) {
          puVar25 = puVar22;
        }
        if (uVar33 != uVar51) {
          puVar25 = puVar22;
        }
        puVar22 = (ulonglong *)((ulonglong)puVar25 & 0xffffffff);
        *(uint *)(puVar19 + 1) = uVar16;
        *(uint *)((longlong)puVar19 + 4) = (uint)puVar10;
        *(uint *)((longlong)puVar19 + 0xc) = uVar52;
        *(uint *)puVar19 = uVar4;
      }
      puVar19 = puVar19 + 2;
      bVar62 = uVar33 != uVar51;
      puVar25 = local_1c0;
      uVar33 = uVar33 + 1;
    } while (bVar62);
  }
  local_1e8 = (ulonglong *)(ulonglong)uVar43;
  iVar49 = 1;
  lVar8 = 0;
  do {
    pcVar46 = (char *)((longlong)local_d8 + lVar8 + (longlong)puVar22 * 0x10 + -8);
    pcVar46[0] = '\0';
    pcVar46[1] = '\0';
    pcVar46[2] = '\0';
    pcVar46[3] = '\0';
    pcVar46[4] = '\x01';
    pcVar46[5] = '\0';
    pcVar46[6] = '\0';
    pcVar46[7] = '\0';
    *(int *)((longlong)local_d8 + lVar8 + (longlong)puVar22 * 0x10) = iVar49;
    *(uint *)((longlong)local_d8 + lVar8 + (longlong)puVar22 * 0x10 + -0xc) =
         (uint)local_160[(longlong)puVar22 * 2] + iVar49;
    lVar8 = lVar8 + 0x10;
    iVar49 = iVar49 + 1;
    local_1d0 = puVar60;
    local_198 = puVar10;
    local_180 = puVar17;
    local_158 = puVar38;
    puVar19 = puVar34;
    local_100 = puVar18;
    local_c8 = uVar9;
  } while (lVar8 != 0x30);
LAB_142736f0f:
  local_138 = puVar19;
  puVar34 = (ulonglong *)((longlong)puVar34 + 1);
  uVar36 = uVar36 - 1;
  local_98 = local_98 + 2;
  puVar18 = puVar18 + 2;
  local_120 = (ulonglong *)((longlong)local_120 + 1);
  if (puVar22 <= puVar34) goto LAB_142737043;
  goto LAB_1427352ff;
LAB_142737043:
  puVar10 = (ulonglong *)(ulonglong)*(uint *)((longlong)local_160 + (longlong)puVar22 * 0x10 + 4);
  uVar51 = (ulonglong)(uint)local_160[(longlong)puVar22 * 2 + 1];
  puVar34 = (ulonglong *)(ulonglong)((int)puVar22 - (uint)local_160[(longlong)puVar22 * 2 + 1]);
  local_1c8 = puVar22;
LAB_14273705a:
  do {
    iVar49 = (int)puVar34;
    lVar8 = (longlong)iVar49;
    uVar13 = (uint)local_160[lVar8 * 2 + 1];
    uVar6 = uVar13;
    if (iVar49 < (int)uVar13) {
      uVar6 = 0;
    }
    uVar36 = *(uint *)((longlong)local_160 + lVar8 * 0x10 + 4);
    puVar34 = (ulonglong *)(ulonglong)(iVar49 - uVar6);
    *(uint *)(local_160 + lVar8 * 2 + 1) = (uint)uVar51;
    *(int *)((longlong)local_160 + lVar8 * 0x10 + 4) = (int)puVar10;
    uVar51 = (ulonglong)uVar13;
    puVar10 = (ulonglong *)(ulonglong)uVar36;
  } while ((int)uVar13 <= iVar49);
  if (0 < (int)local_1c8) {
    iVar37 = 0;
    puVar54 = local_1c8;
    puVar22 = puVar45;
    do {
      uVar9 = puVar7[(longlong)iVar37 * 2 + 1];
      lVar8 = (longlong)(int)(uint)uVar9;
      if (lVar8 == 1) {
        iVar37 = iVar37 + 1;
        puVar48 = (ulonglong *)((longlong)puVar48 + 1);
        puVar45 = puVar22;
      }
      else {
        uVar35 = (longlong)puVar48 - (longlong)param_2;
        iVar49 = 0;
        uVar31 = *(undefined4 *)((longlong)puVar7 + (longlong)iVar37 * 0x10 + 4);
        if ((param_7 != 0) &&
           (local_168 < (ulonglong *)((longlong)puVar22 + uVar35 + uVar35 / 0xff + 9)))
        goto LAB_14273a67f;
        puVar45 = (ulonglong *)((longlong)puVar22 + 1);
        if (uVar35 < 0xf) {
          *(char *)puVar22 = (char)uVar35 << 4;
        }
        else {
          uVar51 = uVar35 - 0xf;
          *(char *)puVar22 = -0x10;
          if (0xfe < uVar51) {
            uVar51 = (uVar35 - 0x10e) / 0xff;
            local_190 = (ulonglong *)CONCAT44(local_190._4_4_,uVar31);
            memset(puVar45,(int)CONCAT71((int7)((uVar35 - 0x10e) / 0x1fe),0xff),uVar51 + 1);
            puVar45 = (ulonglong *)((longlong)puVar22 + uVar51 + 2);
            uVar51 = (uVar51 * -0xff + uVar35) - 0x10e;
            puVar7 = local_160;
            uVar31 = local_190._0_4_;
          }
          *(char *)puVar45 = (char)uVar51;
          puVar45 = (ulonglong *)((longlong)puVar45 + 1);
        }
        iVar49 = 0;
        iVar37 = iVar37 + (uint)uVar9;
        puVar54 = (ulonglong *)(uVar35 + (longlong)puVar45);
        do {
          *puVar45 = *param_2;
          puVar45 = puVar45 + 1;
          param_2 = param_2 + 1;
        } while (puVar45 < puVar54);
        uVar9 = lVar8 - 4;
        *(short *)puVar54 = (short)uVar31;
        if ((param_7 != 0) && (local_168 < (ulonglong *)((longlong)puVar54 + uVar9 / 0xff + 8)))
        goto LAB_14273a67f;
        puVar45 = (ulonglong *)((longlong)puVar54 + 2);
        if (uVar9 < 0xf) {
          *(char *)puVar22 = (char)*puVar22 + (char)uVar9;
        }
        else {
          *(char *)puVar22 = (char)*puVar22 + '\x0f';
          uVar9 = lVar8 - 0x13;
          if (0x1fd < uVar9) {
            uVar9 = (lVar8 - 0x211U) / 0x1fe;
            memset(puVar45,(int)CONCAT71((int7)((lVar8 - 0x211U) / 0x1fe),0xff),uVar9 * 2 + 2);
            puVar45 = (ulonglong *)(uVar9 * 2 + 4 + (longlong)puVar54);
            uVar9 = (uVar9 * -0x1fe + lVar8) - 0x211;
            puVar7 = local_160;
          }
          if (0xfe < uVar9) {
            uVar9 = uVar9 - 0xff;
            *(char *)puVar45 = -1;
            puVar45 = (ulonglong *)((longlong)puVar45 + 1);
          }
          *(char *)puVar45 = (char)uVar9;
          puVar45 = (ulonglong *)((longlong)puVar45 + 1);
        }
        param_2 = (ulonglong *)((longlong)puVar48 + lVar8);
        puVar54 = local_1c8;
        puVar48 = param_2;
        param_1 = local_200;
      }
      puVar22 = puVar45;
    } while (iVar37 < (int)puVar54);
  }
  goto LAB_14273515e;
}



// FUNCTION 14273a6cd FUN_14273a6cd body=31363 status=ok
// SIG undefined FUN_14273a6cd(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14273a6cd(void *param_1,ulonglong *param_2,ulonglong *param_3,uint *param_4,
                       int param_5,uint param_6,int param_7)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  uint uVar25;
  int iVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong *puVar31;
  short *psVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong *puVar36;
  uint uVar37;
  ulonglong *puVar38;
  short sVar39;
  uint *puVar40;
  short *_Dst;
  uint uVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  undefined4 uVar45;
  uint uVar46;
  int iVar47;
  ulonglong *puVar48;
  ulonglong uVar49;
  ulonglong *puVar50;
  ulonglong *puVar51;
  int iVar52;
  void *pvVar53;
  uint uVar54;
  int iVar55;
  ulonglong *puVar56;
  ulonglong uVar57;
  uint *puVar58;
  uint uVar59;
  ulonglong uVar60;
  bool bVar61;
  bool bVar62;
  undefined1 auStack_258 [32];
  int local_238;
  uint local_230;
  int local_228;
  ulonglong *local_220;
  ulonglong *local_218;
  ulonglong *local_210;
  ulonglong *local_208;
  ulonglong *local_200;
  ulonglong *local_1f8;
  ulonglong *local_1f0;
  ulonglong *local_1e8;
  void *local_1e0;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  ulonglong *local_1c8;
  ulonglong *local_1c0;
  ulonglong *local_1b8;
  ulonglong *local_1b0;
  ulonglong *local_1a8;
  ulonglong *local_1a0;
  uint local_194;
  ulonglong *local_190;
  ulonglong *local_188;
  int local_17c;
  ulonglong *local_178;
  uint *local_170;
  ulonglong *local_168;
  char *local_160;
  ulonglong *local_158;
  ulonglong *local_150;
  ulonglong *local_148;
  ulonglong *local_140;
  ulonglong local_138;
  ulonglong *local_130;
  ulonglong *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong *local_100;
  char *local_f8;
  longlong local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  uint *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  char *local_b8;
  uint *local_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  uint local_94;
  ulonglong *local_90;
  ulonglong *local_88;
  ulonglong *local_80;
  char *local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  uint *local_60;
  uint *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar18 = (ulonglong)
           (uint)(*(int *)((longlong)param_1 + 0x40018) - *(int *)((longlong)param_1 + 0x4001c)) +
           (*(longlong *)((longlong)param_1 + 0x40000) - *(longlong *)((longlong)param_1 + 0x40008))
  ;
  if (0xffff < uVar18) {
    *(undefined8 *)((longlong)param_1 + 0x40028) = 0;
    local_228 = param_7;
    local_230 = param_6;
    local_238 = param_5;
    FUN_1427340cb(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  local_17c = param_7;
  uVar12 = *param_4;
  local_70 = param_3;
  if (0x1000 < (int)uVar12 && uVar18 == 0) {
    memcpy(param_1,*(void **)((longlong)param_1 + 0x40028),0x40030);
    lVar14 = *(longlong *)((longlong)param_1 + 0x40008);
    iVar7 = (int)*(ulonglong *)((longlong)param_1 + 0x40000);
    if (*(ulonglong *)((longlong)param_1 + 0x40000) < lVar14 + 4U) {
      uVar12 = *(uint *)((longlong)param_1 + 0x40018);
    }
    else {
      uVar12 = *(uint *)((longlong)param_1 + 0x40018);
      uVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x40020);
      uVar41 = ((iVar7 - (int)lVar14) + uVar12) - 3;
      if (*(uint *)((longlong)param_1 + 0x40020) < uVar41) {
        do {
          uVar35 = (ulonglong)
                   ((uint)(*(int *)((lVar14 - (ulonglong)uVar12) + uVar18) * -0x61c8864f) >> 0x11);
          uVar17 = (uint)uVar18;
          uVar33 = uVar17 - *(int *)((longlong)param_1 + uVar35 * 4);
          if (0xfffe < uVar33) {
            uVar33 = 0xffff;
          }
          *(short *)((longlong)param_1 + (ulonglong)(uVar17 & 0xffff) * 2 + 0x20000) = (short)uVar33
          ;
          *(uint *)((longlong)param_1 + uVar35 * 4) = uVar17;
          uVar18 = uVar18 + 1;
        } while (uVar41 != uVar18);
      }
    }
    *(uint *)((longlong)param_1 + 0x4001c) = uVar12;
    *(longlong *)((longlong)param_1 + 0x40010) = lVar14;
    iVar7 = (iVar7 - (int)lVar14) + uVar12;
    *(int *)((longlong)param_1 + 0x40018) = iVar7;
    *(ulonglong **)((longlong)param_1 + 0x40008) = param_2;
    *(ulonglong **)((longlong)param_1 + 0x40000) = param_2;
    *(int *)((longlong)param_1 + 0x40020) = iVar7;
    *(undefined8 *)((longlong)param_1 + 0x40028) = 0;
    *(short *)((longlong)param_1 + 0x40024) = (short)param_6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  puVar13 = (ulonglong *)0x0;
  local_58 = param_4;
  if (0x7e000000 < uVar12) goto LAB_142742155;
  *(ulonglong *)((longlong)param_1 + 0x40000) =
       *(longlong *)((longlong)param_1 + 0x40000) + (ulonglong)uVar12;
  uVar12 = 0xc;
  if (param_6 < 0xc) {
    uVar12 = param_6;
  }
  local_e0 = (ulonglong *)&DAT_00000009;
  if (0 < (int)param_6) {
    local_e0 = (ulonglong *)(ulonglong)uVar12;
  }
  uVar18 = (longlong)local_e0 * 3 & 0xffffffff;
  local_194 = *(uint *)(&DAT_149dffe64 + uVar18 * 4);
  local_1e0 = param_1;
  if (*(int *)(&DAT_149dffe60 + uVar18 * 4) == 0) {
    uVar12 = *param_4;
    lVar14 = (longlong)(int)uVar12;
    puVar58 = (uint *)((longlong)param_2 + lVar14);
    puVar48 = (ulonglong *)((longlong)param_2 + lVar14 + -0xc);
    local_f8 = (char *)((longlong)param_5 + (longlong)param_3);
    *param_4 = 0;
    local_60 = (uint *)CONCAT44(local_60._4_4_,uVar12);
    if (param_2 <= puVar48 && 0xc < (int)uVar12) {
      local_1c8 = (ulonglong *)((longlong)param_2 + lVar14 + -5);
      local_c0 = (ulonglong *)(puVar58 + -2);
      local_c8 = (ulonglong *)((longlong)puVar58 + -6);
      local_110 = (ulonglong *)0x0;
      local_118 = (ulonglong *)0x0;
      local_150 = (ulonglong *)0x0;
      local_1d8 = (ulonglong *)0x0;
      puVar13 = (ulonglong *)0x0;
      local_210 = puVar48;
      local_d0 = puVar58;
LAB_14273e463:
      local_138 = *(ulonglong *)((longlong)param_1 + 0x40028);
      local_1f8 = *(ulonglong **)((longlong)param_1 + 0x40008);
      local_1a8 = *(ulonglong **)((longlong)param_1 + 0x40010);
      uVar12 = *(uint *)((longlong)param_1 + 0x40018);
      local_200 = (ulonglong *)(ulonglong)uVar12;
      uVar41 = *(uint *)((longlong)param_1 + 0x4001c);
      local_1e8 = (ulonglong *)(ulonglong)uVar41;
      local_170 = (uint *)CONCAT44(local_170._4_4_,uVar41 + 0x10000);
      local_140 = (ulonglong *)((longlong)local_200 - (longlong)local_1e8);
      local_178 = (ulonglong *)((longlong)local_140 + (longlong)local_1a8);
      local_1b8 = (ulonglong *)((longlong)local_1f8 - (longlong)local_200);
      local_1a0 = (ulonglong *)CONCAT44(local_1a0._4_4_,uVar12 - 4);
      local_190 = (ulonglong *)((longlong)local_1a8 - (longlong)local_1e8);
      uVar17 = (uVar12 + (int)param_2) - (int)local_1f8;
      local_1f0 = (ulonglong *)(ulonglong)(-(int)param_2 - 4);
      puVar31 = param_2;
      uVar33 = *(uint *)((longlong)param_1 + 0x40020);
      local_208 = puVar13;
      local_1d0 = param_2;
      do {
        puVar30 = puVar31;
        iVar7 = (int)((longlong)puVar30 - (longlong)local_1f8);
        uVar46 = uVar12 + iVar7;
        uVar25 = (uVar12 - 0xffff) + iVar7;
        if (uVar46 < uVar41 + 0x10000) {
          uVar25 = uVar41;
        }
        local_160 = (char *)(ulonglong)uVar17;
        uVar59 = (uint)*puVar30;
        if (uVar33 < uVar46) {
          pcVar24 = (char *)(ulonglong)uVar33;
          do {
            uVar18 = (ulonglong)
                     ((uint)(*(int *)((longlong)local_1b8 + (longlong)pcVar24) * -0x61c8864f) >>
                     0x11);
            uVar33 = (uint)pcVar24;
            uVar42 = uVar33 - *(int *)((longlong)param_1 + uVar18 * 4);
            if (0xfffe < uVar42) {
              uVar42 = 0xffff;
            }
            *(short *)((longlong)param_1 + (ulonglong)(uVar33 & 0xffff) * 2 + 0x20000) =
                 (short)uVar42;
            *(uint *)((longlong)param_1 + uVar18 * 4) = uVar33;
            pcVar24 = pcVar24 + 1;
          } while (local_160 != pcVar24);
        }
        *(uint *)((longlong)param_1 + 0x40020) = uVar46;
        uVar42 = *(uint *)((longlong)param_1 + (ulonglong)((uint)*puVar30 * -0x61c8864f >> 0x11) * 4
                          );
        local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,3);
        local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar46);
        iVar7 = (int)local_1f0;
        uVar33 = local_194;
        if ((uVar25 <= uVar42) && (0 < (int)local_194)) {
          local_158 = (ulonglong *)(((longlong)puVar30 - (longlong)local_1f8) + (longlong)local_200)
          ;
          local_218 = (ulonglong *)((longlong)puVar30 + 4);
          bVar62 = uVar59 >> 0x18 == (uVar59 & 0xff);
          bVar5 = uVar59 >> 0x10 == (uVar59 & 0xffff);
          local_f0 = CONCAT71(local_f0._1_7_,bVar62 && bVar5);
          uVar18 = (ulonglong)uVar59 * 0x100000001;
          iVar34 = 0;
          local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,3);
          uVar35 = 0;
          uVar8 = local_194;
          do {
            uVar33 = uVar12 - uVar42;
            if (uVar12 < uVar42 || uVar33 == 0) {
              puVar13 = (ulonglong *)((ulonglong)uVar42 + (longlong)local_1b8);
              if ((*(short *)((longlong)puVar30 + (longlong)(int)(uint)local_1b0 + -1) !=
                   *(short *)((longlong)(int)(uint)local_1b0 + -1 + (longlong)puVar13)) ||
                 ((uint)*puVar13 != uVar59)) goto LAB_14273ea29;
              puVar31 = (ulonglong *)((longlong)puVar13 + 4);
              puVar27 = local_218;
              if (local_218 < puVar48) {
                uVar49 = *local_218 ^ *puVar31;
                if (uVar49 == 0) {
                  uVar33 = 0x40;
                }
                else {
                  lVar14 = 0;
                  if (uVar49 != 0) {
                    for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                    }
                  }
                  uVar33 = (uint)lVar14;
                }
                if (*puVar31 == *local_218) {
                  puVar27 = (ulonglong *)((longlong)puVar30 + 0xc);
                  puVar31 = (ulonglong *)((longlong)puVar13 + 0xc);
                  goto LAB_14273e7c4;
                }
                uVar33 = uVar33 >> 3;
              }
              else {
LAB_14273e7c4:
                if (puVar27 < puVar48) {
                  iVar23 = iVar7 + (int)puVar27;
LAB_14273e7d1:
                  if (*puVar31 == *puVar27) goto code_r0x00014273e7dc;
                  uVar49 = *puVar27 ^ *puVar31;
                  if (uVar49 == 0) {
                    uVar33 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar49 != 0) {
                      for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar33 = (uint)lVar14;
                  }
                  uVar33 = (uVar33 >> 3) + iVar23;
                  goto LAB_14273e9c4;
                }
LAB_14273e7ed:
                if ((puVar27 < local_c0) && ((uint)*puVar31 == (uint)*puVar27)) {
                  puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                  puVar31 = (ulonglong *)((longlong)puVar31 + 4);
                }
                if ((puVar27 < local_c8) && ((short)*puVar31 == (short)*puVar27)) {
                  puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                  puVar31 = (ulonglong *)((longlong)puVar31 + 2);
                }
                if (puVar27 < local_1c8) {
                  puVar27 = (ulonglong *)
                            ((longlong)puVar27 + (ulonglong)((char)*puVar31 == (char)*puVar27));
                }
                uVar33 = (int)puVar27 - (int)local_218;
              }
LAB_14273e9c4:
              if ((int)(uint)local_1b0 < (int)(uVar33 + 4)) {
                local_1b0._0_4_ = uVar33 + 4;
                local_208 = puVar13;
              }
            }
            else if ((uVar42 <= uVar12 - 4) &&
                    (puVar58 = (uint *)((ulonglong)(uVar42 - uVar41) + (longlong)local_1a8),
                    *puVar58 == uVar59)) {
              puVar13 = (ulonglong *)((longlong)puVar30 + (ulonglong)uVar33);
              if (local_1c8 < puVar13) {
                puVar13 = local_1c8;
              }
              puVar27 = (ulonglong *)(puVar58 + 1);
              puVar48 = (ulonglong *)((longlong)puVar13 + -7);
              puVar31 = local_218;
              if (local_218 < puVar48) {
                uVar49 = *local_218 ^ *puVar27;
                if (uVar49 == 0) {
                  uVar22 = 0x40;
                }
                else {
                  lVar14 = 0;
                  if (uVar49 != 0) {
                    for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                    }
                  }
                  uVar22 = (uint)lVar14;
                }
                if (*puVar27 == *local_218) {
                  puVar31 = (ulonglong *)((longlong)puVar30 + 0xc);
                  puVar27 = (ulonglong *)(puVar58 + 3);
                  goto LAB_14273e722;
                }
                uVar22 = uVar22 >> 3;
              }
              else {
LAB_14273e722:
                if (puVar31 < puVar48) {
                  iVar23 = iVar7 + (int)puVar31;
LAB_14273e72f:
                  if (*puVar27 == *puVar31) goto code_r0x00014273e73a;
                  uVar49 = *puVar31 ^ *puVar27;
                  if (uVar49 == 0) {
                    uVar22 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar49 != 0) {
                      for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar22 = (uint)lVar14;
                  }
                  uVar22 = (uVar22 >> 3) + iVar23;
                  goto LAB_14273e884;
                }
LAB_14273e74b:
                if ((puVar31 < (ulonglong *)((longlong)puVar13 + -3)) &&
                   ((uint)*puVar27 == (uint)*puVar31)) {
                  puVar31 = (ulonglong *)((longlong)puVar31 + 4);
                  puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                }
                if ((puVar31 < (ulonglong *)((longlong)puVar13 + -1)) &&
                   ((short)*puVar27 == (short)*puVar31)) {
                  puVar31 = (ulonglong *)((longlong)puVar31 + 2);
                  puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                }
                if (puVar31 < puVar13) {
                  puVar31 = (ulonglong *)
                            ((longlong)puVar31 + (ulonglong)((char)*puVar27 == (char)*puVar31));
                }
                uVar22 = (int)puVar31 - (int)local_218;
              }
LAB_14273e884:
              iVar23 = uVar22 + 4;
              if ((puVar13 < local_1c8) &&
                 (puVar48 = (ulonglong *)((longlong)puVar30 + (longlong)(int)uVar22 + 4),
                 puVar48 == puVar13)) {
                puVar31 = local_1f8;
                if (puVar13 < local_210) {
                  uVar49 = *puVar48 ^ *local_1f8;
                  if (uVar49 == 0) {
                    uVar9 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar49 != 0) {
                      for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar9 = (uint)lVar14;
                  }
                  if (*local_1f8 == *puVar48) {
                    puVar48 = (ulonglong *)((longlong)puVar30 + (longlong)(int)uVar22 + 0xc);
                    puVar31 = local_1f8 + 1;
                    goto LAB_14273e8f3;
                  }
                  uVar9 = uVar9 >> 3;
                }
                else {
LAB_14273e8f3:
                  if (puVar48 < local_210) {
                    puVar27 = (ulonglong *)((ulonglong)uVar33 + (longlong)local_1d0);
                    if (local_1c8 < puVar27) {
                      puVar27 = local_1c8;
                    }
                    iVar44 = (int)puVar48 - (int)puVar27;
LAB_14273e915:
                    if (*puVar31 == *puVar48) goto code_r0x00014273e924;
                    uVar49 = *puVar48 ^ *puVar31;
                    if (uVar49 == 0) {
                      uVar33 = 0x40;
                    }
                    else {
                      lVar14 = 0;
                      if (uVar49 != 0) {
                        for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                        }
                      }
                      uVar33 = (uint)lVar14;
                    }
                    uVar9 = (uVar33 >> 3) + iVar44;
                    goto LAB_14273ea08;
                  }
LAB_14273e935:
                  if ((puVar48 < local_c0) && ((uint)*puVar31 == (uint)*puVar48)) {
                    puVar48 = (ulonglong *)((longlong)puVar48 + 4);
                    puVar31 = (ulonglong *)((longlong)puVar31 + 4);
                  }
                  if ((puVar48 < local_c8) && ((short)*puVar31 == (short)*puVar48)) {
                    puVar48 = (ulonglong *)((longlong)puVar48 + 2);
                    puVar31 = (ulonglong *)((longlong)puVar31 + 2);
                  }
                  if (puVar48 < local_1c8) {
                    puVar48 = (ulonglong *)
                              ((longlong)puVar48 + (ulonglong)((char)*puVar31 == (char)*puVar48));
                  }
                  uVar9 = (int)puVar48 - (int)puVar13;
                }
LAB_14273ea08:
                iVar23 = iVar23 + uVar9;
              }
              puVar48 = local_210;
              if ((int)(uint)local_1b0 < iVar23) {
                local_208 = (ulonglong *)((ulonglong)uVar42 + (longlong)local_1b8);
                local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,iVar23);
              }
            }
LAB_14273ea29:
            uVar33 = uVar8 - 1;
            uVar2 = *(ushort *)((longlong)local_1e0 + (ulonglong)(uVar42 & 0xffff) * 2 + 0x20000);
            if (((int)local_194 < 0x81) || (uVar2 != 1)) {
LAB_14273eb86:
              uVar22 = (uint)uVar2;
LAB_14273eb89:
              uVar22 = uVar42 - uVar22;
            }
            else {
              if (iVar34 == 0) {
                iVar34 = 1;
                if (!bVar62 || !bVar5) goto LAB_14273eb86;
                uVar35 = uVar18;
                puVar13 = local_218;
                if (local_218 < puVar48) {
LAB_14273eb4a:
                  if (*puVar13 == uVar18) goto code_r0x00014273eb52;
                  uVar35 = *puVar13 ^ uVar18;
                  if (uVar35 == 0) {
                    uVar22 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar35 != 0) {
                      for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar22 = (uint)lVar14;
                  }
                  puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)(uVar22 >> 3));
                  goto LAB_14273ec50;
                }
LAB_14273eb5e:
                for (; (puVar13 < local_1c8 && ((char)*puVar13 == (char)uVar35));
                    puVar13 = (ulonglong *)((longlong)puVar13 + 1)) {
                  uVar35 = uVar35 >> 8;
                }
LAB_14273ec50:
                uVar35 = (ulonglong)(uint)((int)puVar13 - (int)local_218) + 4;
                iVar34 = 2;
              }
              uVar22 = uVar42 - 1;
              if (((0xfffffffc < uVar22 - uVar12) || (iVar34 != 2)) || (uVar22 < uVar25))
              goto LAB_14273eb86;
              puVar13 = local_190;
              if (uVar12 <= uVar22) {
                puVar13 = local_1b8;
              }
              uVar49 = (ulonglong)uVar22;
              iVar34 = 2;
              if (*(uint *)((longlong)puVar13 + uVar49) != uVar59) goto LAB_14273eb86;
              puVar31 = (ulonglong *)((longlong)puVar13 + uVar49);
              puVar27 = local_178;
              if (uVar12 <= uVar22) {
                puVar27 = local_1c8;
              }
              puVar19 = (ulonglong *)((longlong)puVar31 + 4);
              puVar36 = puVar19;
              if (puVar19 < (ulonglong *)((longlong)puVar27 + -7)) {
                pcVar24 = (char *)((longlong)puVar13 + uVar49 + 4);
LAB_14273eae0:
                if (*puVar36 == uVar18) goto code_r0x00014273eaec;
                uVar49 = *puVar36 ^ uVar18;
                if (uVar49 == 0) {
                  uVar42 = 0x40;
                }
                else {
                  lVar14 = 0;
                  if (uVar49 != 0) {
                    for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                    }
                  }
                  uVar42 = (uint)lVar14;
                }
                puVar13 = (ulonglong *)(pcVar24 + (uVar42 >> 3));
                goto LAB_14273ebd2;
              }
LAB_14273eaf9:
              puVar13 = puVar36;
              if (puVar36 < puVar27) {
                lVar14 = (longlong)puVar27 - (longlong)puVar36;
                uVar49 = uVar18;
                do {
                  puVar13 = puVar36;
                  if ((char)*puVar36 != (char)uVar49) break;
                  puVar36 = (ulonglong *)((longlong)puVar36 + 1);
                  uVar49 = uVar49 >> 8;
                  lVar14 = lVar14 + -1;
                  puVar13 = puVar27;
                } while (lVar14 != 0);
              }
LAB_14273ebd2:
              uVar49 = (longlong)puVar13 - (longlong)puVar19;
              uVar57 = (uVar49 & 0xffffffff) + 4;
              puVar13 = local_1f8;
              if ((uVar22 < uVar12) &&
                 (puVar13 = local_1a8, (ulonglong *)((longlong)puVar31 + uVar57) == local_178)) {
                bVar4 = (char)uVar49 * '\b' & 0x1f;
                uVar60 = (ulonglong)(uVar59 << bVar4 | uVar59 >> 0x20 - bVar4);
                if ((uVar49 & 3) == 0) {
                  uVar60 = (ulonglong)uVar59;
                }
                uVar60 = uVar60 * 0x100000001;
                puVar27 = local_1f8;
                if (local_1f8 < puVar48) {
LAB_14273ec2f:
                  if (*puVar27 == uVar60) goto code_r0x00014273ec37;
                  uVar60 = *puVar27 ^ uVar60;
                  if (uVar60 == 0) {
                    uVar42 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar60 != 0) {
                      for (; (uVar60 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar42 = (uint)lVar14;
                  }
                  puVar27 = (ulonglong *)((longlong)puVar27 + (ulonglong)(uVar42 >> 3));
                  goto LAB_14273ec7a;
                }
LAB_14273ed90:
                for (; (puVar27 < local_1c8 && ((char)*puVar27 == (char)uVar60));
                    puVar27 = (ulonglong *)((longlong)puVar27 + 1)) {
                  uVar60 = uVar60 >> 8;
                }
LAB_14273ec7a:
                uVar57 = uVar57 + (uint)((int)puVar27 - (int)local_1f8);
              }
              puVar27 = puVar31;
              do {
                puVar19 = puVar27;
                if (puVar19 < (ulonglong *)((longlong)puVar13 + 4)) break;
                puVar27 = (ulonglong *)((longlong)puVar19 + -4);
              } while (*(uint *)((longlong)puVar19 + -4) == uVar59);
              puVar27 = puVar19;
              if (puVar13 < puVar19) {
                lVar14 = 0;
                do {
                  if (*(char *)((longlong)puVar19 + lVar14 + -1) !=
                      *(char *)((longlong)&local_4c + lVar14 + 3)) {
                    puVar27 = (ulonglong *)((longlong)puVar19 + lVar14);
                    break;
                  }
                  lVar20 = lVar14 + -1;
                  lVar14 = lVar14 + -1;
                  puVar27 = puVar13;
                } while (puVar13 < (ulonglong *)((longlong)puVar19 + lVar20));
              }
              uVar49 = (longlong)puVar31 - (longlong)puVar27;
              iVar34 = (int)uVar49;
              local_4c = uVar59;
              if ((uVar41 < uVar12 && uVar12 <= uVar22) &&
                  (ulonglong *)((longlong)puVar31 - (uVar49 & 0xffffffff)) == local_1f8) {
                bVar4 = (char)uVar49 * -8 & 0x1f;
                puVar13 = local_178;
                puVar31 = local_140;
                local_4c = uVar59 << bVar4 | uVar59 >> 0x20 - bVar4;
                if ((-iVar34 & 3U) == 0) {
                  local_4c = uVar59;
                }
                do {
                  puVar27 = puVar13;
                  if ((longlong)puVar31 < 4) {
                    if ((longlong)puVar31 < 1) goto LAB_14273ee05;
                    break;
                  }
                  puVar13 = (ulonglong *)((longlong)puVar27 + -4);
                  puVar31 = (ulonglong *)((longlong)puVar31 + -4);
                } while (*(uint *)((longlong)puVar27 + -4) == local_4c);
                pcVar24 = (char *)((longlong)&local_4c + 3);
                do {
                  if (*(char *)((longlong)puVar27 + -1) != *pcVar24) break;
                  puVar27 = (ulonglong *)((longlong)puVar27 + -1);
                  pcVar24 = pcVar24 + -1;
                } while (local_1a8 < puVar27);
LAB_14273ee05:
                iVar34 = ((int)local_178 - (int)puVar27) + iVar34;
              }
              uVar42 = uVar22 - iVar34;
              if (uVar22 - iVar34 <= uVar25) {
                uVar42 = uVar25;
              }
              uVar49 = (uVar22 - uVar42) + uVar57;
              if ((uVar35 < uVar57) || (uVar49 < uVar35)) {
                iVar34 = 2;
                uVar22 = uVar12;
                if (0xfffffffc < uVar42 - uVar12) goto LAB_14273eb8b;
                if (uVar35 <= uVar49) {
                  uVar49 = uVar35;
                }
                if ((ulonglong)(longlong)(int)(uint)local_1b0 < uVar49) {
                  if (0xffff < (longlong)local_158 - (ulonglong)uVar42) break;
                  local_208 = (ulonglong *)((ulonglong)uVar42 + (longlong)local_1b8);
                  local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,(int)uVar49);
                }
                uVar22 = (uint)*(ushort *)
                                ((longlong)local_1e0 + (ulonglong)(uVar42 & 0xffff) * 2 + 0x20000);
                if (uVar22 <= uVar42) goto LAB_14273eb89;
                break;
              }
              uVar22 = (uVar22 - (int)uVar35) + (int)uVar57;
              if (0xfffffffc < uVar22 - uVar12) {
                uVar22 = uVar12;
              }
              iVar34 = 2;
            }
LAB_14273eb8b:
            uVar42 = uVar22;
            if ((uVar42 < uVar25) || (bVar61 = (int)uVar8 < 2, uVar8 = uVar33, bVar61)) break;
          } while( true );
        }
        if ((0 < (int)uVar33) && (uVar46 - uVar25 < 0xffff)) {
          lVar14 = (*(longlong *)(local_138 + 0x40000) - *(longlong *)(&DAT_00040008 + local_138)) +
                   (ulonglong)*(uint *)(local_138 + 0x40018);
          uVar42 = *(uint *)(local_138 + (ulonglong)((uint)*puVar30 * -0x61c8864f >> 0x11) * 4);
          uVar25 = (uVar25 + uVar42) - (int)lVar14;
          if (uVar46 - uVar25 < 0x10000) {
            lVar20 = *(longlong *)(&DAT_00040008 + local_138) -
                     (ulonglong)*(uint *)(local_138 + 0x40018);
            puVar13 = (ulonglong *)((longlong)puVar30 + 4);
            do {
              bVar62 = uVar33 == 0;
              uVar33 = uVar33 - 1;
              if (bVar62) break;
              uVar18 = (ulonglong)uVar42;
              if (*(uint *)(lVar20 + uVar18) == uVar59) {
                puVar48 = (ulonglong *)((lVar14 - uVar18) + (longlong)puVar30);
                if (local_1c8 < puVar48) {
                  puVar48 = local_1c8;
                }
                lVar1 = lVar20 + uVar18;
                puVar19 = (ulonglong *)(lVar1 + 4);
                puVar31 = (ulonglong *)((longlong)puVar48 + -7);
                puVar27 = puVar13;
                if (puVar13 < puVar31) {
                  uVar18 = *puVar13 ^ *puVar19;
                  if (uVar18 == 0) {
                    uVar8 = 0x40;
                  }
                  else {
                    lVar3 = 0;
                    if (uVar18 != 0) {
                      for (; (uVar18 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
                      }
                    }
                    uVar8 = (uint)lVar3;
                  }
                  if (*puVar19 == *puVar13) {
                    puVar19 = (ulonglong *)(lVar1 + 0xc);
                    puVar27 = (ulonglong *)((longlong)puVar30 + 0xc);
                    goto LAB_14273efc5;
                  }
                  uVar8 = uVar8 >> 3;
                }
                else {
LAB_14273efc5:
                  if (puVar27 < puVar31) {
                    iVar34 = iVar7 + (int)puVar27;
LAB_14273efd2:
                    if (*puVar19 == *puVar27) goto code_r0x00014273efdd;
                    uVar18 = *puVar27 ^ *puVar19;
                    if (uVar18 == 0) {
                      uVar8 = 0x40;
                    }
                    else {
                      lVar1 = 0;
                      if (uVar18 != 0) {
                        for (; (uVar18 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                        }
                      }
                      uVar8 = (uint)lVar1;
                    }
                    uVar8 = (uVar8 >> 3) + iVar34;
                    goto LAB_14273f062;
                  }
LAB_14273efee:
                  if ((puVar27 < (ulonglong *)((longlong)puVar48 + -3)) &&
                     ((uint)*puVar19 == (uint)*puVar27)) {
                    puVar27 = (ulonglong *)((longlong)puVar27 + 4);
                    puVar19 = (ulonglong *)((longlong)puVar19 + 4);
                  }
                  if ((puVar27 < (ulonglong *)((longlong)puVar48 + -1)) &&
                     ((short)*puVar19 == (short)*puVar27)) {
                    puVar27 = (ulonglong *)((longlong)puVar27 + 2);
                    puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                  }
                  if (puVar27 < puVar48) {
                    puVar27 = (ulonglong *)
                              ((longlong)puVar27 + (ulonglong)((char)*puVar19 == (char)*puVar27));
                  }
                  uVar8 = (int)puVar27 - (int)puVar13;
                }
LAB_14273f062:
                puVar48 = local_210;
                if ((int)(uint)local_1b0 < (int)(uVar8 + 4)) {
                  local_208 = (ulonglong *)((ulonglong)uVar25 + (longlong)local_1b8);
                  local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,uVar8 + 4);
                }
              }
              uVar8 = (uint)*(ushort *)(local_138 + 0x20000 + (ulonglong)(uVar42 & 0xffff) * 2);
              uVar42 = uVar42 - uVar8;
              uVar25 = uVar25 - uVar8;
            } while (uVar46 - uVar25 < 0x10000);
          }
        }
        local_220 = puVar30;
        if (3 < (int)(uint)local_1b0) goto LAB_14273f162;
        uVar17 = uVar17 + 1;
        local_1f0 = (ulonglong *)(ulonglong)(iVar7 - 1);
        local_1d0 = (ulonglong *)((longlong)local_1d0 + 1);
        puVar58 = local_d0;
        puVar31 = (ulonglong *)((longlong)puVar30 + 1);
        param_1 = local_1e0;
        uVar33 = uVar46;
        local_1c0 = param_2;
        local_148 = param_3;
        if (puVar48 < (ulonglong *)((longlong)puVar30 + 1)) break;
      } while( true );
    }
LAB_142742012:
    uVar18 = (longlong)puVar58 - (longlong)param_2;
    if ((local_17c == 0) ||
       (puVar13 = (ulonglong *)0x0,
       (char *)((longlong)param_3 + uVar18 + (uVar18 + 0xf0) / 0xff + 1) <= local_f8)) {
      pcVar24 = (char *)((longlong)param_3 + 1);
      if (uVar18 < 0xf) {
        *(char *)param_3 = (char)uVar18 << 4;
      }
      else {
        uVar35 = uVar18 - 0xf;
        *(char *)param_3 = -0x10;
        pcVar15 = pcVar24;
        if (0xfe < uVar35) {
          uVar35 = (uVar18 - 0x10e) / 0xff;
          memset(pcVar24,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
          pcVar15 = (char *)((longlong)param_3 + uVar35 + 2);
          param_3 = (ulonglong *)((longlong)param_3 + uVar35 + 1);
          uVar35 = (uVar18 + uVar35 * -0xff) - 0x10e;
        }
        pcVar24 = (char *)((longlong)param_3 + 2);
        *pcVar15 = (char)uVar35;
      }
      memcpy(pcVar24,param_2,uVar18);
      *local_58 = (uint)local_60;
      puVar13 = (ulonglong *)(ulonglong)(uint)(((int)pcVar24 + (int)uVar18) - (int)local_70);
      goto LAB_142742148;
    }
  }
  else {
    local_1b0 = (ulonglong *)CONCAT71(local_1b0._1_7_,*(char *)((longlong)param_1 + 0x40026));
    local_78 = (char *)CONCAT44(local_78._4_4_,
                                -(uint)(*(char *)((longlong)param_1 + 0x40026) != '\0'));
    uVar12 = *(uint *)(&DAT_149dffe68 + uVar18 * 4);
    puVar13 = malloc(0x10030);
    if (puVar13 == (ulonglong *)0x0) {
LAB_14273e3e9:
      local_1a8 = (ulonglong *)0x0;
    }
    else {
      local_94 = *local_58;
      lVar14 = (longlong)(int)local_94;
      local_c0 = (ulonglong *)((longlong)param_2 + lVar14);
      puVar48 = (ulonglong *)((longlong)param_2 + lVar14 + -0xc);
      local_120 = (ulonglong *)((longlong)param_5 + (longlong)local_70);
      *local_58 = 0;
      uVar41 = 0xfff;
      if (uVar12 < 0xfff) {
        uVar41 = uVar12;
      }
      local_148 = (ulonglong *)(ulonglong)uVar41;
      local_1a0 = puVar13;
      if (puVar48 < param_2) {
        local_108 = local_70;
      }
      else {
        local_1e8 = (ulonglong *)((longlong)param_2 + lVar14 + -5);
        local_88 = local_c0 + -1;
        local_90 = (ulonglong *)((longlong)local_c0 + -6);
        local_c8 = (ulonglong *)((longlong)puVar13 + 0xc);
        local_d0 = (uint *)((longlong)puVar13 + 0x4c);
        local_60 = (uint *)((longlong)puVar13 + 0x1c);
        local_100 = puVar13 + 4;
        local_68 = puVar13 + 10;
        local_108 = local_70;
        puVar31 = param_2;
        local_210 = puVar48;
        do {
          puVar30 = local_108;
          local_190 = *(ulonglong **)((longlong)param_1 + 0x40008);
          uVar12 = *(uint *)((longlong)param_1 + 0x40018);
          local_1b8 = (ulonglong *)(ulonglong)uVar12;
          pcVar24 = (char *)((longlong)puVar31 - (longlong)local_190);
          uVar25 = uVar12 + (int)pcVar24;
          uVar41 = *(uint *)((longlong)param_1 + 0x4001c);
          local_138 = (ulonglong)uVar41;
          uVar17 = uVar41 + 0x10000;
          local_80 = (ulonglong *)CONCAT44(local_80._4_4_,uVar17);
          uVar33 = (uVar12 - 0xffff) + (int)pcVar24;
          if (uVar25 < uVar17) {
            uVar33 = uVar41;
          }
          uVar46 = (uint)*puVar31;
          local_208 = (ulonglong *)(ulonglong)uVar46;
          uVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x40020);
          if (*(uint *)((longlong)param_1 + 0x40020) < uVar25) {
            do {
              uVar35 = (ulonglong)
                       ((uint)(*(int *)((longlong)local_190 + uVar18 + -(longlong)local_1b8) *
                              -0x61c8864f) >> 0x11);
              uVar59 = (uint)uVar18;
              uVar42 = uVar59 - *(int *)((longlong)param_1 + uVar35 * 4);
              if (0xfffe < uVar42) {
                uVar42 = 0xffff;
              }
              *(short *)((longlong)param_1 + (ulonglong)(uVar59 & 0xffff) * 2 + 0x20000) =
                   (short)uVar42;
              *(uint *)((longlong)param_1 + uVar35 * 4) = uVar59;
              uVar18 = uVar18 + 1;
            } while (uVar25 != uVar18);
          }
          local_f0 = *(longlong *)((longlong)param_1 + 0x40028);
          local_1a8 = *(ulonglong **)((longlong)param_1 + 0x40010);
          local_130 = (ulonglong *)((longlong)local_1b8 - local_138);
          local_140 = (ulonglong *)((longlong)local_1a8 + (longlong)local_130);
          *(uint *)((longlong)param_1 + 0x40020) = uVar25;
          uVar42 = *(uint *)((longlong)param_1 +
                            (ulonglong)((uint)*puVar31 * -0x61c8864f >> 0x11) * 4);
          local_200 = (ulonglong *)(-(longlong)local_1b8 + (longlong)local_190);
          local_1f8 = (ulonglong *)((longlong)puVar31 + 4);
          bVar62 = uVar46 >> 0x18 == (uVar46 & 0xff);
          bVar5 = uVar46 >> 0x10 == (uVar46 & 0xffff);
          uVar8 = uVar12 - 4;
          local_150 = (ulonglong *)CONCAT44(local_150._4_4_,uVar8);
          local_1d0 = (ulonglong *)CONCAT71(local_1d0._1_7_,bVar62 && bVar5);
          local_a0 = (ulonglong *)((longlong)local_1a8 - local_138);
          local_218 = (ulonglong *)CONCAT44(local_218._4_4_,uVar25);
          local_188._0_4_ = (int)puVar31;
          iVar7 = (int)local_140;
          puVar13 = (ulonglong *)&DAT_00000003;
          uVar59 = local_194;
          if (uVar42 < uVar33) {
            local_178 = (ulonglong *)0x0;
          }
          else {
            local_178 = (ulonglong *)0x0;
            local_160 = pcVar24;
            if (0 < (int)local_194) {
              local_160 = pcVar24 + (longlong)local_1b8;
              uVar18 = (longlong)local_208 * 0x100000001;
              uVar9 = -(int)local_188 - 4;
              local_170 = (uint *)(ulonglong)uVar9;
              iVar34 = 0;
              puVar13 = (ulonglong *)&DAT_00000003;
              local_1c8 = (ulonglong *)((ulonglong)local_1c8 & 0xffffffff00000000);
              uVar35 = 0;
              local_178 = (ulonglong *)0x0;
              local_220 = (ulonglong *)CONCAT44(local_220._4_4_,uVar33);
              uVar22 = local_194;
              do {
                uVar49 = (ulonglong)uVar42;
                puVar27 = puVar13;
                if (((char)local_1b0 == '\0') || (7 < uVar25 - uVar42)) {
                  iVar23 = (int)puVar13;
                  if (uVar12 < uVar42 || uVar12 - uVar42 == 0) {
                    puVar13 = (ulonglong *)(uVar49 + (longlong)local_200);
                    if ((*(short *)((longlong)puVar31 + (longlong)iVar23 + -1) !=
                         *(short *)((longlong)iVar23 + -1 + (longlong)puVar13)) ||
                       ((uint)*puVar13 != uVar46)) {
                      puVar19 = (ulonglong *)0x0;
                      goto LAB_14273b1e9;
                    }
                    puVar19 = (ulonglong *)((longlong)puVar13 + 4);
                    puVar36 = local_1f8;
                    if (local_1f8 < puVar48) {
                      uVar57 = *local_1f8 ^ *puVar19;
                      if (uVar57 == 0) {
                        uVar59 = 0x40;
                      }
                      else {
                        lVar14 = 0;
                        if (uVar57 != 0) {
                          for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                          }
                        }
                        uVar59 = (uint)lVar14;
                      }
                      if (*puVar19 == *local_1f8) {
                        puVar36 = (ulonglong *)((longlong)puVar31 + 0xc);
                        puVar19 = (ulonglong *)((longlong)puVar13 + 0xc);
                        goto LAB_14273af9f;
                      }
                      uVar59 = uVar59 >> 3;
                    }
                    else {
LAB_14273af9f:
                      if (puVar36 < puVar48) {
                        iVar44 = uVar9 + (int)puVar36;
LAB_14273afb0:
                        if (*puVar19 == *puVar36) goto code_r0x00014273afbb;
                        uVar57 = *puVar36 ^ *puVar19;
                        if (uVar57 == 0) {
                          uVar59 = 0x40;
                        }
                        else {
                          lVar14 = 0;
                          if (uVar57 != 0) {
                            for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                            }
                          }
                          uVar59 = (uint)lVar14;
                        }
                        uVar59 = (uVar59 >> 3) + iVar44;
                        goto LAB_14273b191;
                      }
LAB_14273afcb:
                      if ((puVar36 < local_88) && ((uint)*puVar19 == (uint)*puVar36)) {
                        puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                        puVar19 = (ulonglong *)((longlong)puVar19 + 4);
                      }
                      if ((puVar36 < local_90) && ((short)*puVar19 == (short)*puVar36)) {
                        puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                        puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                      }
                      if (puVar36 < local_1e8) {
                        puVar36 = (ulonglong *)
                                  ((longlong)puVar36 + (ulonglong)((char)*puVar19 == (char)*puVar36)
                                  );
                      }
                      uVar59 = (int)puVar36 - (int)local_1f8;
                    }
LAB_14273b191:
                    uVar59 = uVar59 + 4;
                    puVar19 = (ulonglong *)(ulonglong)uVar59;
                    if (iVar23 < (int)uVar59) {
                      puVar27 = (ulonglong *)(ulonglong)uVar59;
                      local_178 = puVar13;
                    }
                  }
                  else {
                    if ((uVar8 < uVar42) ||
                       (puVar58 = (uint *)((ulonglong)(uVar42 - uVar41) + (longlong)local_1a8),
                       *puVar58 != uVar46)) goto LAB_14273adec;
                    puVar19 = (ulonglong *)((ulonglong)(uVar12 - uVar42) + (longlong)puVar31);
                    puVar48 = puVar19;
                    if (local_1e8 < puVar19) {
                      puVar48 = local_1e8;
                    }
                    puVar38 = (ulonglong *)(puVar58 + 1);
                    puVar36 = (ulonglong *)((longlong)puVar48 + -7);
                    puVar56 = local_1f8;
                    if (local_1f8 < puVar36) {
                      uVar57 = *local_1f8 ^ *puVar38;
                      if (uVar57 == 0) {
                        uVar59 = 0x40;
                      }
                      else {
                        lVar14 = 0;
                        if (uVar57 != 0) {
                          for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                          }
                        }
                        uVar59 = (uint)lVar14;
                      }
                      if (*puVar38 == *local_1f8) {
                        puVar56 = (ulonglong *)((longlong)puVar31 + 0xc);
                        puVar38 = (ulonglong *)(puVar58 + 3);
                        goto LAB_14273aefc;
                      }
                      uVar59 = uVar59 >> 3;
                    }
                    else {
LAB_14273aefc:
                      if (puVar56 < puVar36) {
                        iVar44 = uVar9 + (int)puVar56;
LAB_14273af0d:
                        if (*puVar38 == *puVar56) goto code_r0x00014273af19;
                        uVar57 = *puVar56 ^ *puVar38;
                        if (uVar57 == 0) {
                          uVar59 = 0x40;
                        }
                        else {
                          lVar14 = 0;
                          if (uVar57 != 0) {
                            for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                            }
                          }
                          uVar59 = (uint)lVar14;
                        }
                        uVar59 = (uVar59 >> 3) + iVar44;
                        goto LAB_14273b03e;
                      }
LAB_14273af29:
                      if ((puVar56 < (ulonglong *)((longlong)puVar48 + -3)) &&
                         ((uint)*puVar38 == (uint)*puVar56)) {
                        puVar56 = (ulonglong *)((longlong)puVar56 + 4);
                        puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                      }
                      if ((puVar56 < (ulonglong *)((longlong)puVar48 + -1)) &&
                         ((short)*puVar38 == (short)*puVar56)) {
                        puVar56 = (ulonglong *)((longlong)puVar56 + 2);
                        puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                      }
                      if (puVar56 < puVar48) {
                        puVar56 = (ulonglong *)
                                  ((longlong)puVar56 + (ulonglong)((char)*puVar38 == (char)*puVar56)
                                  );
                      }
                      uVar59 = (int)puVar56 - (int)local_1f8;
                    }
LAB_14273b03e:
                    uVar37 = uVar59 + 4;
                    if ((puVar48 < local_1e8) &&
                       ((ulonglong *)((longlong)puVar31 + (longlong)(int)uVar59 + 4) == puVar48)) {
                      puVar56 = local_190;
                      puVar36 = puVar48;
                      if (puVar48 < local_210) {
                        uVar57 = *puVar48 ^ *local_190;
                        if (uVar57 == 0) {
                          uVar59 = 0x40;
                        }
                        else {
                          lVar14 = 0;
                          if (uVar57 != 0) {
                            for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                            }
                          }
                          uVar59 = (uint)lVar14;
                        }
                        if (*local_190 == *puVar48) {
                          puVar36 = puVar48 + 1;
                          puVar56 = local_190 + 1;
                          goto LAB_14273b0ba;
                        }
                        uVar59 = uVar59 >> 3;
                      }
                      else {
LAB_14273b0ba:
                        if (puVar36 < local_210) {
                          if (local_1e8 < puVar19) {
                            puVar19 = local_1e8;
                          }
                          iVar44 = (int)puVar36 - (int)puVar19;
LAB_14273b0d3:
                          if (*puVar56 == *puVar36) goto code_r0x00014273b0e3;
                          uVar57 = *puVar36 ^ *puVar56;
                          if (uVar57 == 0) {
                            uVar59 = 0x40;
                          }
                          else {
                            lVar14 = 0;
                            if (uVar57 != 0) {
                              for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                              }
                            }
                            uVar59 = (uint)lVar14;
                          }
                          uVar59 = (uVar59 >> 3) + iVar44;
                          goto LAB_14273b1c9;
                        }
LAB_14273b0f5:
                        if ((puVar36 < local_88) && ((uint)*puVar56 == (uint)*puVar36)) {
                          puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                          puVar56 = (ulonglong *)((longlong)puVar56 + 4);
                        }
                        if ((puVar36 < local_90) && ((short)*puVar56 == (short)*puVar36)) {
                          puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                          puVar56 = (ulonglong *)((longlong)puVar56 + 2);
                        }
                        if (puVar36 < local_1e8) {
                          puVar36 = (ulonglong *)
                                    ((longlong)puVar36 +
                                    (ulonglong)((char)*puVar56 == (char)*puVar36));
                        }
                        uVar59 = (int)puVar36 - (int)puVar48;
                      }
LAB_14273b1c9:
                      uVar37 = uVar37 + uVar59;
                    }
                    puVar19 = (ulonglong *)(ulonglong)uVar37;
                    puVar48 = local_210;
                    param_1 = local_1e0;
                    local_1f0 = puVar13;
                    if (iVar23 < (int)uVar37) {
                      puVar27 = puVar19;
                      local_178 = (ulonglong *)(uVar49 + (longlong)local_200);
                    }
                  }
                }
                else {
LAB_14273adec:
                  puVar19 = (ulonglong *)0x0;
                }
LAB_14273b1e9:
                puVar13 = puVar19;
                uVar59 = uVar22 - 1;
                iVar44 = (int)puVar13;
                iVar23 = (int)puVar27;
                if (((iVar44 == iVar23) && (iVar23 + uVar42 <= uVar25)) && (3 < iVar44)) {
                  iVar26 = 0;
                  iVar55 = 0x10;
                  uVar37 = 1;
                  do {
                    uVar2 = *(ushort *)
                             ((longlong)param_1 +
                             (ulonglong)(iVar26 + uVar42 & 0xffff) * 2 + 0x20000);
                    iVar47 = iVar55 >> 4;
                    bVar61 = uVar37 < uVar2;
                    iVar55 = iVar55 + 1;
                    if (bVar61) {
                      iVar55 = 0x10;
                    }
                    uVar10 = (uint)uVar2;
                    if (!bVar61 && uVar37 != uVar2) {
                      uVar10 = uVar37;
                    }
                    uVar37 = uVar10;
                    if (bVar61) {
                      iVar34 = iVar26;
                    }
                    iVar26 = iVar47 + iVar26;
                    param_1 = local_1e0;
                  } while (iVar26 < iVar44 + -3);
                  uVar10 = uVar37;
                  if (uVar42 < uVar37) {
                    uVar10 = 0;
                  }
                  if (uVar37 < 2) {
                    uVar10 = 0;
                  }
                  uVar10 = uVar42 - uVar10;
                  if (uVar37 < 2) {
                    uVar49 = (ulonglong)uVar10;
                    puVar48 = local_210;
                    goto LAB_14273b299;
                  }
                  puVar48 = local_210;
                  if (uVar42 < uVar37) break;
                }
                else {
LAB_14273b299:
                  iVar44 = (int)uVar49;
                  puVar13 = puVar27;
                  if ((*(short *)((longlong)param_1 + (uVar49 & 0xffff) * 2 + 0x20000) == 1) &&
                     (iVar34 == 0)) {
                    if ((int)local_1c8 == 0) {
                      local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,1);
                      if (!bVar62 || !bVar5) goto LAB_14273b42a;
                      uVar35 = uVar18;
                      puVar19 = local_1f8;
                      if (local_1f8 < puVar48) {
LAB_14273b3c8:
                        if (*puVar19 == uVar18) goto code_r0x00014273b3d4;
                        uVar35 = *puVar19 ^ uVar18;
                        if (uVar35 == 0) {
                          uVar42 = 0x40;
                        }
                        else {
                          lVar14 = 0;
                          if (uVar35 != 0) {
                            for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                            }
                          }
                          uVar42 = (uint)lVar14;
                        }
                        puVar19 = (ulonglong *)((longlong)puVar19 + (ulonglong)(uVar42 >> 3));
                        goto LAB_14273b4ca;
                      }
LAB_14273b3e0:
                      for (; (puVar19 < local_1e8 && ((char)*puVar19 == (char)uVar35));
                          puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                        uVar35 = uVar35 >> 8;
                      }
LAB_14273b4ca:
                      uVar35 = (ulonglong)(uint)((int)puVar19 - (int)local_1f8) + 4;
                      local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,2);
                    }
                    uVar42 = iVar44 - 1;
                    if (((uVar42 - uVar12 < 0xfffffffd) && ((int)local_1c8 == 2)) &&
                       (uVar33 <= uVar42)) {
                      puVar19 = local_a0;
                      if (uVar12 <= uVar42) {
                        puVar19 = local_200;
                      }
                      uVar49 = (ulonglong)uVar42;
                      local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,2);
                      local_1f0 = puVar27;
                      if (*(uint *)((longlong)puVar19 + uVar49) == uVar46) {
                        puVar48 = (ulonglong *)((longlong)puVar19 + uVar49);
                        puVar27 = local_140;
                        if (uVar12 <= uVar42) {
                          puVar27 = local_1e8;
                        }
                        puVar36 = (ulonglong *)((longlong)puVar48 + 4);
                        puVar56 = puVar36;
                        if (puVar36 < (ulonglong *)((longlong)puVar27 + -7)) {
                          pcVar24 = (char *)((longlong)puVar19 + uVar49 + 4);
LAB_14273b358:
                          if (*puVar56 == uVar18) goto code_r0x00014273b364;
                          uVar49 = *puVar56 ^ uVar18;
                          if (uVar49 == 0) {
                            uVar37 = 0x40;
                          }
                          else {
                            lVar14 = 0;
                            if (uVar49 != 0) {
                              for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                              }
                            }
                            uVar37 = (uint)lVar14;
                          }
                          puVar19 = (ulonglong *)(pcVar24 + (uVar37 >> 3));
                          goto LAB_14273b484;
                        }
LAB_14273b371:
                        puVar19 = puVar56;
                        if (puVar56 < puVar27) {
                          lVar14 = (longlong)puVar27 - (longlong)puVar56;
                          uVar49 = uVar18;
                          do {
                            puVar19 = puVar56;
                            if ((char)*puVar56 != (char)uVar49) break;
                            puVar56 = (ulonglong *)((longlong)puVar56 + 1);
                            uVar49 = uVar49 >> 8;
                            lVar14 = lVar14 + -1;
                            puVar19 = puVar27;
                          } while (lVar14 != 0);
                        }
LAB_14273b484:
                        uVar57 = (longlong)puVar19 - (longlong)puVar36;
                        uVar49 = (uVar57 & 0xffffffff) + 4;
                        puVar27 = local_190;
                        if ((uVar42 < uVar12) &&
                           (puVar27 = local_1a8,
                           (ulonglong *)((longlong)puVar48 + uVar49) == local_140)) {
                          bVar4 = (char)uVar57 * '\b' & 0x1f;
                          puVar19 = (ulonglong *)
                                    (ulonglong)(uVar46 << bVar4 | uVar46 >> 0x20 - bVar4);
                          if ((uVar57 & 3) == 0) {
                            puVar19 = local_208;
                          }
                          uVar57 = (longlong)puVar19 * 0x100000001;
                          puVar19 = local_190;
                          if (local_190 < local_210) {
LAB_14273b521:
                            if (*puVar19 == uVar57) goto code_r0x00014273b529;
                            uVar57 = *puVar19 ^ uVar57;
                            if (uVar57 == 0) {
                              uVar37 = 0x40;
                            }
                            else {
                              lVar14 = 0;
                              if (uVar57 != 0) {
                                for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                }
                              }
                              uVar37 = (uint)lVar14;
                            }
                            puVar19 = (ulonglong *)((longlong)puVar19 + (ulonglong)(uVar37 >> 3));
                            goto LAB_14273b54f;
                          }
LAB_14273b662:
                          for (; (puVar19 < local_1e8 && ((char)*puVar19 == (char)uVar57));
                              puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
                            uVar57 = uVar57 >> 8;
                          }
LAB_14273b54f:
                          uVar49 = uVar49 + (uint)((int)puVar19 - (int)local_190);
                        }
                        puVar19 = puVar48;
                        do {
                          puVar36 = puVar19;
                          if (puVar36 < (ulonglong *)((longlong)puVar27 + 4)) break;
                          puVar19 = (ulonglong *)((longlong)puVar36 + -4);
                        } while (*(uint *)((longlong)puVar36 + -4) == uVar46);
                        puVar19 = puVar36;
                        if (puVar27 < puVar36) {
                          lVar14 = 0;
                          do {
                            if (*(char *)((longlong)puVar36 + lVar14 + -1) !=
                                *(char *)((longlong)&local_4c + lVar14 + 3)) {
                              puVar19 = (ulonglong *)((longlong)puVar36 + lVar14);
                              break;
                            }
                            lVar20 = lVar14 + -1;
                            lVar14 = lVar14 + -1;
                            puVar19 = puVar27;
                          } while (puVar27 < (ulonglong *)((longlong)puVar36 + lVar20));
                        }
                        uVar57 = (longlong)puVar48 - (longlong)puVar19;
                        iVar34 = (int)uVar57;
                        local_4c = uVar46;
                        if ((uVar41 < uVar12 && uVar12 <= uVar42) &&
                            (ulonglong *)((longlong)puVar48 - (uVar57 & 0xffffffff)) == local_190) {
                          bVar4 = (char)uVar57 * -8 & 0x1f;
                          puVar48 = local_140;
                          puVar27 = local_130;
                          local_4c = uVar46 << bVar4 | uVar46 >> 0x20 - bVar4;
                          if ((-iVar34 & 3U) == 0) {
                            local_4c = uVar46;
                          }
                          do {
                            puVar19 = puVar48;
                            if ((longlong)puVar27 < 4) {
                              if ((longlong)puVar27 < 1) goto LAB_14273b67c;
                              break;
                            }
                            puVar48 = (ulonglong *)((longlong)puVar19 + -4);
                            puVar27 = (ulonglong *)((longlong)puVar27 + -4);
                          } while (*(uint *)((longlong)puVar19 + -4) == local_4c);
                          pcVar24 = (char *)((longlong)&local_4c + 3);
                          do {
                            if (*(char *)((longlong)puVar19 + -1) != *pcVar24) break;
                            puVar19 = (ulonglong *)((longlong)puVar19 + -1);
                            pcVar24 = pcVar24 + -1;
                          } while (local_1a8 < puVar19);
LAB_14273b67c:
                          iVar34 = (iVar7 - (int)puVar19) + iVar34;
                        }
                        uVar37 = uVar42 - iVar34;
                        if (uVar42 - iVar34 <= uVar33) {
                          uVar37 = uVar33;
                        }
                        uVar57 = (uVar42 - uVar37) + uVar49;
                        if ((uVar35 < uVar49) || (uVar57 < uVar35)) {
                          local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,2);
                          uVar10 = uVar12;
                          if (uVar37 - uVar12 < 0xfffffffd) {
                            if (uVar35 <= uVar57) {
                              uVar57 = uVar35;
                            }
                            if ((ulonglong)(longlong)iVar23 < uVar57) {
                              puVar48 = local_210;
                              if (0xffff < (longlong)local_160 - (ulonglong)uVar37) break;
                              local_178 = (ulonglong *)((ulonglong)uVar37 + (longlong)local_200);
                              puVar13 = (ulonglong *)(uVar57 & 0xffffffff);
                            }
                            uVar42 = (uint)*(ushort *)
                                            ((longlong)param_1 +
                                            ((ulonglong)uVar37 & 0xffff) * 2 + 0x20000);
                            puVar48 = local_210;
                            if (uVar37 < uVar42) break;
                            uVar10 = uVar37 - uVar42;
                          }
                        }
                        else {
                          uVar10 = (uVar42 - (int)uVar35) + (int)uVar49;
                          if (0xfffffffc < uVar10 - uVar12) {
                            uVar10 = uVar12;
                          }
                        }
                        local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,2);
                        iVar34 = 0;
                        puVar48 = local_210;
                        goto LAB_14273b440;
                      }
                    }
                  }
LAB_14273b42a:
                  uVar10 = iVar44 - (uint)*(ushort *)
                                           ((longlong)param_1 +
                                           (ulonglong)(iVar34 + iVar44 & 0xffff) * 2 + 0x20000);
                }
LAB_14273b440:
                if ((uVar10 < uVar33) ||
                   (bVar61 = (int)uVar22 < 2, uVar22 = uVar59, uVar42 = uVar10, bVar61)) break;
              } while( true );
            }
          }
          uVar42 = (uint)puVar13;
          if ((0 < (int)uVar59) && (uVar25 - uVar33 < 0xffff)) {
            lVar14 = (*(longlong *)(local_f0 + 0x40000) - *(longlong *)(&DAT_00040008 + local_f0)) +
                     (ulonglong)*(uint *)(local_f0 + 0x40018);
            uVar22 = *(uint *)(local_f0 + (ulonglong)((uint)*puVar31 * -0x61c8864f >> 0x11) * 4);
            uVar33 = (uVar33 + uVar22) - (int)lVar14;
            if (uVar25 - uVar33 < 0x10000) {
              lVar20 = *(longlong *)(&DAT_00040008 + local_f0) -
                       (ulonglong)*(uint *)(local_f0 + 0x40018);
              do {
                uVar42 = (uint)puVar13;
                bVar62 = uVar59 == 0;
                uVar59 = uVar59 - 1;
                if (bVar62) break;
                uVar18 = (ulonglong)uVar22;
                if (*(uint *)(lVar20 + uVar18) == uVar46) {
                  puVar48 = (ulonglong *)((lVar14 - uVar18) + (longlong)puVar31);
                  if (local_1e8 < puVar48) {
                    puVar48 = local_1e8;
                  }
                  lVar1 = lVar20 + uVar18;
                  puVar36 = (ulonglong *)(lVar1 + 4);
                  puVar27 = (ulonglong *)((longlong)puVar48 + -7);
                  puVar19 = local_1f8;
                  if (local_1f8 < puVar27) {
                    uVar18 = *local_1f8 ^ *puVar36;
                    if (uVar18 == 0) {
                      uVar9 = 0x40;
                    }
                    else {
                      lVar3 = 0;
                      if (uVar18 != 0) {
                        for (; (uVar18 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
                        }
                      }
                      uVar9 = (uint)lVar3;
                    }
                    if (*puVar36 == *local_1f8) {
                      puVar19 = (ulonglong *)((longlong)puVar31 + 0xc);
                      puVar36 = (ulonglong *)(lVar1 + 0xc);
                      goto LAB_14273b91b;
                    }
                    uVar9 = uVar9 >> 3;
                  }
                  else {
LAB_14273b91b:
                    if (puVar19 < puVar27) {
                      iVar34 = (-4 - (int)local_188) + (int)puVar19;
LAB_14273b924:
                      if (*puVar36 == *puVar19) goto code_r0x00014273b92f;
                      uVar18 = *puVar19 ^ *puVar36;
                      if (uVar18 == 0) {
                        uVar9 = 0x40;
                      }
                      else {
                        lVar1 = 0;
                        if (uVar18 != 0) {
                          for (; (uVar18 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                          }
                        }
                        uVar9 = (uint)lVar1;
                      }
                      uVar9 = (uVar9 >> 3) + iVar34;
                      goto LAB_14273b9b9;
                    }
LAB_14273b93f:
                    if ((puVar19 < (ulonglong *)((longlong)puVar48 + -3)) &&
                       ((uint)*puVar36 == (uint)*puVar19)) {
                      puVar19 = (ulonglong *)((longlong)puVar19 + 4);
                      puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                    }
                    if ((puVar19 < (ulonglong *)((longlong)puVar48 + -1)) &&
                       ((short)*puVar36 == (short)*puVar19)) {
                      puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                      puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                    }
                    if (puVar19 < puVar48) {
                      puVar19 = (ulonglong *)
                                ((longlong)puVar19 + (ulonglong)((char)*puVar36 == (char)*puVar19));
                    }
                    uVar9 = (int)puVar19 - (int)local_1f8;
                  }
LAB_14273b9b9:
                  puVar48 = local_210;
                  if ((int)uVar42 < (int)(uVar9 + 4)) {
                    local_178 = (ulonglong *)((ulonglong)uVar33 + (longlong)local_200);
                    puVar13 = (ulonglong *)(ulonglong)(uVar9 + 4);
                  }
                }
                uVar42 = (uint)puVar13;
                uVar9 = (uint)*(ushort *)(local_f0 + 0x20000 + (ulonglong)(uVar22 & 0xffff) * 2);
                uVar22 = uVar22 - uVar9;
                uVar33 = uVar33 - uVar9;
              } while (uVar25 - uVar33 < 0x10000);
            }
          }
          puVar13 = local_1a0;
          local_1c0 = param_2;
          local_188 = puVar31;
          if ((int)uVar42 < 4) {
            puVar31 = (ulonglong *)((longlong)puVar31 + 1);
          }
          else {
            uVar18 = (longlong)puVar31 - (longlong)param_2;
            lVar14 = (longlong)puVar31 - (longlong)local_178;
            puVar27 = (ulonglong *)(ulonglong)uVar42;
            if (uVar42 - 0x13 < 0x12) {
              puVar27 = (ulonglong *)&DAT_00000012;
            }
            if ((char)local_1b0 == '\0') {
              puVar27 = (ulonglong *)(ulonglong)uVar42;
            }
            uVar33 = (uint)uVar18;
            if (local_148 < puVar27) {
              if ((local_17c != 0) &&
                 (local_120 < (ulonglong *)((longlong)local_108 + uVar18 + uVar18 / 0xff + 9)))
              goto LAB_14273e3e9;
              puVar13 = (ulonglong *)((longlong)local_108 + 1);
              if (uVar18 < 0xf) {
                *(char *)local_108 = (char)uVar18 << 4;
              }
              else {
                uVar35 = uVar18 - 0xf;
                *(char *)local_108 = -0x10;
                if (0xfe < uVar35) {
                  uVar35 = (uVar18 - 0x10e) / 0xff;
                  memset(puVar13,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
                  puVar13 = (ulonglong *)((longlong)puVar30 + uVar35 + 2);
                  uVar35 = (uVar35 * -0xff + uVar18) - 0x10e;
                }
                *(char *)puVar13 = (char)uVar35;
                puVar13 = (ulonglong *)((longlong)puVar13 + 1);
              }
              local_1a8 = (ulonglong *)0x0;
              puVar30 = (ulonglong *)(uVar18 + (longlong)puVar13);
              puVar31 = local_1c0;
              do {
                *puVar13 = *puVar31;
                puVar13 = puVar13 + 1;
                puVar31 = puVar31 + 1;
              } while (puVar13 < puVar30);
              puVar58 = (uint *)((longlong)puVar27 + -4);
              *(short *)puVar30 = (short)lVar14;
              if ((local_17c != 0) &&
                 (puVar13 = local_1a0,
                 local_120 < (ulonglong *)((longlong)puVar30 + (ulonglong)puVar58 / 0xff + 8)))
              goto LAB_142742137;
              puVar19 = (ulonglong *)((longlong)puVar30 + 2);
              if (puVar58 < &DAT_0000000f) {
                *(char *)local_108 = (char)*local_108 + (char)puVar58;
              }
              else {
                *(char *)local_108 = (char)*local_108 + '\x0f';
                pcVar24 = (char *)((longlong)puVar27 + -0x13);
                if ((char *)0x1fd < pcVar24) {
                  uVar18 = (ulonglong)((longlong)puVar27 + -0x211) / 0x1fe;
                  memset(puVar19,(int)CONCAT71((int7)((ulonglong)((longlong)puVar27 + -0x211) /
                                                     0x1fe),0xff),uVar18 * 2 + 2);
                  puVar19 = (ulonglong *)(uVar18 * 2 + 4 + (longlong)puVar30);
                  pcVar24 = (char *)((longlong)puVar27 + uVar18 * -0x1fe + -0x211);
                }
                if ((char *)0xfe < pcVar24) {
                  pcVar24 = pcVar24 + -0xff;
                  *(char *)puVar19 = -1;
                  puVar19 = (ulonglong *)((longlong)puVar19 + 1);
                }
                *(char *)puVar19 = (char)pcVar24;
                puVar19 = (ulonglong *)((longlong)puVar19 + 1);
              }
              param_2 = (ulonglong *)((longlong)local_188 + (longlong)puVar27);
              puVar31 = param_2;
              puVar13 = local_1a0;
              local_108 = puVar19;
            }
            else {
              iVar34 = (int)local_188 - (int)param_2;
              uVar25 = iVar34 - 0xf;
              lVar20 = 0;
              puVar30 = local_c8;
              do {
                uVar46 = uVar33;
                if (0xe < (int)uVar33 + lVar20) {
                  uVar46 = uVar25 / 0xff + iVar34 + 1;
                }
                puVar30[-1] = 0x100000000;
                *(int *)puVar30 = iVar34 + (int)lVar20;
                *(uint *)((longlong)puVar30 + -0xc) = uVar46 + (int)lVar20;
                lVar20 = lVar20 + 1;
                puVar30 = puVar30 + 2;
                uVar25 = uVar25 + 1;
              } while (lVar20 != 4);
              uVar25 = uVar33 + 1 + (uVar33 - 0xf) / 0xff;
              if ((int)uVar33 < 0xf) {
                uVar25 = uVar33;
              }
              uVar18 = 0xfffffff1;
              puVar30 = (ulonglong *)&DAT_00000004;
              puVar58 = local_d0;
              do {
                uVar46 = uVar25 + 3;
                if (&DAT_00000012 < puVar30) {
                  uVar46 = (int)(uVar18 / 0xff) + uVar25 + 4;
                }
                puVar58[-1] = (uint)puVar30;
                puVar58[-2] = (uint)lVar14;
                *puVar58 = uVar33;
                puVar58[-3] = uVar46;
                uVar18 = (ulonglong)((int)uVar18 + 1);
                puVar58 = puVar58 + 4;
                bVar62 = puVar30 != puVar27;
                puVar30 = (ulonglong *)((longlong)puVar30 + 1);
              } while (bVar62);
              uVar18 = local_1a0[(longlong)puVar27 * 2];
              iVar34 = 1;
              lVar14 = 0;
              do {
                pcVar24 = (char *)((longlong)local_60 + lVar14 + (longlong)puVar27 * 0x10 + -8);
                pcVar24[0] = '\0';
                pcVar24[1] = '\0';
                pcVar24[2] = '\0';
                pcVar24[3] = '\0';
                pcVar24[4] = '\x01';
                pcVar24[5] = '\0';
                pcVar24[6] = '\0';
                pcVar24[7] = '\0';
                *(int *)((longlong)local_60 + lVar14 + (longlong)puVar27 * 0x10) = iVar34;
                *(uint *)((longlong)local_60 + lVar14 + (longlong)puVar27 * 0x10 + -0xc) =
                     (uint)uVar18 + iVar34;
                lVar14 = lVar14 + 0x10;
                iVar34 = iVar34 + 1;
              } while (lVar14 != 0x30);
              uVar33 = ((int)local_188 + uVar12) - (int)local_190;
              local_160 = (char *)(ulonglong)(-(int)local_188 - 5);
              local_118 = (ulonglong *)((longlong)puVar31 + 1);
              local_178 = (ulonglong *)0x5;
              local_a8 = local_68;
              local_110 = local_100;
              puVar30 = (ulonglong *)&DAT_00000001;
              local_1c8 = puVar27;
              do {
                puVar19 = puVar30;
                uVar33 = uVar33 + 1;
                puVar27 = (ulonglong *)(ulonglong)uVar33;
                puVar30 = (ulonglong *)((longlong)puVar31 + (longlong)puVar19);
                if (puVar48 < puVar30) break;
                local_d8 = local_1a0 + (longlong)puVar19 * 2;
                uVar25 = (uint)local_1a0[(longlong)puVar19 * 2];
                pcVar24 = (char *)(ulonglong)uVar25;
                iVar34 = (int)local_160;
                iVar23 = (int)puVar19;
                local_220 = puVar30;
                local_1f0 = puVar19;
                local_158 = puVar27;
                if ((int)local_e0 == 0xc) {
                  if (((int)uVar25 < (int)(uint)local_1a0[(longlong)puVar19 * 2 + 2]) ||
                     ((int)(uVar25 + 3) <= (int)(uint)local_d8[8])) {
                    local_e8 = (ulonglong *)((longlong)puVar30 - (longlong)local_190);
                    uVar59 = uVar12 + (int)local_e8;
                    uVar46 = (uVar12 - 0xffff) + (int)local_e8;
                    if (uVar59 < uVar17) {
                      uVar46 = uVar41;
                    }
                    uVar42 = (uint)*puVar30;
                    local_1f8 = (ulonglong *)(ulonglong)uVar42;
                    puVar36 = (ulonglong *)(ulonglong)*(uint *)((longlong)param_1 + 0x40020);
                    if (*(uint *)((longlong)param_1 + 0x40020) < uVar59) {
                      do {
                        uVar18 = (ulonglong)
                                 ((uint)(*(int *)((longlong)local_200 + (longlong)puVar36) *
                                        -0x61c8864f) >> 0x11);
                        uVar22 = (uint)puVar36;
                        uVar9 = uVar22 - *(int *)((longlong)param_1 + uVar18 * 4);
                        if (0xfffe < uVar9) {
                          uVar9 = 0xffff;
                        }
                        *(short *)((longlong)param_1 + (ulonglong)(uVar22 & 0xffff) * 2 + 0x20000) =
                             (short)uVar9;
                        *(uint *)((longlong)param_1 + uVar18 * 4) = uVar22;
                        puVar36 = (ulonglong *)((longlong)puVar36 + 1);
                      } while (puVar27 != puVar36);
                    }
                    *(uint *)((longlong)param_1 + 0x40020) = uVar59;
                    uVar9 = *(uint *)((longlong)param_1 +
                                     (ulonglong)((uint)*puVar30 * -0x61c8864f >> 0x11) * 4);
                    puVar27 = (ulonglong *)((longlong)puVar30 + 4);
                    bVar62 = uVar42 >> 0x18 == (uVar42 & 0xff);
                    bVar5 = uVar42 >> 0x10 == (uVar42 & 0xffff);
                    local_128 = (ulonglong *)CONCAT71(local_128._1_7_,bVar62 && bVar5);
                    local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,uVar59);
                    local_170._0_4_ = (int)puVar27;
                    local_218 = (ulonglong *)&DAT_00000003;
                    uVar22 = local_194;
                    if (uVar9 < uVar46) {
                      local_168 = (ulonglong *)0x0;
                    }
                    else {
                      local_168 = (ulonglong *)0x0;
                      if (0 < (int)local_194) {
                        local_e8 = (ulonglong *)((longlong)local_e8 + (longlong)local_1b8);
                        uVar35 = (longlong)local_1f8 * 0x100000001;
                        iVar44 = 0;
                        local_218 = (ulonglong *)&DAT_00000003;
                        local_208 = (ulonglong *)((ulonglong)local_208 & 0xffffffff00000000);
                        uVar18 = 0;
                        local_168 = (ulonglong *)0x0;
                        local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,uVar46);
                        uVar37 = local_194;
                        do {
                          uVar49 = (ulonglong)uVar9;
                          if (((char)local_1b0 == '\0') || (7 < uVar59 - uVar9)) {
                            uVar10 = uVar12 - uVar9;
                            uVar22 = (uint)local_218;
                            if (uVar12 < uVar9 || uVar10 == 0) {
                              puVar56 = (ulonglong *)(uVar49 + (longlong)local_200);
                              if ((*(short *)((longlong)puVar30 + (longlong)(int)uVar22 + -1) !=
                                   *(short *)((longlong)(int)uVar22 + -1 + (longlong)puVar56)) ||
                                 ((uint)*puVar56 != uVar42)) goto LAB_14273bf1c;
                              puVar36 = (ulonglong *)((longlong)puVar56 + 4);
                              puVar38 = puVar27;
                              if (puVar27 < puVar48) {
                                uVar57 = *puVar27 ^ *puVar36;
                                if (uVar57 == 0) {
                                  uVar10 = 0x40;
                                }
                                else {
                                  lVar14 = 0;
                                  if (uVar57 != 0) {
                                    for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                    }
                                  }
                                  uVar10 = (uint)lVar14;
                                }
                                if (*puVar36 == *puVar27) {
                                  puVar38 = (ulonglong *)((longlong)puVar30 + 0xc);
                                  puVar36 = (ulonglong *)((longlong)puVar56 + 0xc);
                                  puVar48 = local_210;
                                  goto LAB_14273c406;
                                }
                                uVar10 = uVar10 >> 3;
                                puVar48 = local_210;
                              }
                              else {
LAB_14273c406:
                                if (puVar38 < puVar48) {
                                  iVar55 = iVar34 + (int)puVar38;
LAB_14273c420:
                                  if (*puVar36 == *puVar38) goto code_r0x00014273c42b;
                                  uVar57 = *puVar38 ^ *puVar36;
                                  if (uVar57 == 0) {
                                    uVar10 = 0x40;
                                  }
                                  else {
                                    lVar14 = 0;
                                    if (uVar57 != 0) {
                                      for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                      }
                                    }
                                    uVar10 = (uint)lVar14;
                                  }
                                  uVar10 = (uVar10 >> 3) + iVar55;
                                  goto LAB_14273c633;
                                }
LAB_14273c95c:
                                if ((puVar38 < local_88) && ((uint)*puVar36 == (uint)*puVar38)) {
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                                  puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                                }
                                if ((puVar38 < local_90) && ((short)*puVar36 == (short)*puVar38)) {
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                                  puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                                }
                                if (puVar38 < local_1e8) {
                                  puVar38 = (ulonglong *)
                                            ((longlong)puVar38 +
                                            (ulonglong)((char)*puVar36 == (char)*puVar38));
                                }
                                uVar10 = (int)puVar38 - (int)local_170;
                              }
LAB_14273c633:
                              uVar10 = uVar10 + 4;
                              puVar36 = (ulonglong *)(ulonglong)uVar10;
                              if ((int)uVar22 < (int)uVar10) {
                                uVar22 = uVar10;
                                local_168 = puVar56;
                              }
                              local_218 = (ulonglong *)(ulonglong)uVar22;
                              param_1 = local_1e0;
                            }
                            else {
                              if ((uVar8 < uVar9) ||
                                 (puVar58 = (uint *)((ulonglong)(uVar9 - uVar41) +
                                                    (longlong)local_1a8), *puVar58 != uVar42))
                              goto LAB_14273bf1c;
                              puVar48 = (ulonglong *)((longlong)puVar30 + (ulonglong)uVar10);
                              if (local_1e8 < puVar48) {
                                puVar48 = local_1e8;
                              }
                              puVar38 = (ulonglong *)(puVar58 + 1);
                              puVar36 = (ulonglong *)((longlong)puVar48 + -7);
                              puVar56 = puVar27;
                              if (puVar27 < puVar36) {
                                uVar57 = *puVar27 ^ *puVar38;
                                if (uVar57 == 0) {
                                  uVar11 = 0x40;
                                }
                                else {
                                  lVar14 = 0;
                                  if (uVar57 != 0) {
                                    for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                    }
                                  }
                                  uVar11 = (uint)lVar14;
                                }
                                if (*puVar38 == *puVar27) {
                                  puVar56 = (ulonglong *)((longlong)puVar30 + 0xc);
                                  puVar38 = (ulonglong *)(puVar58 + 3);
                                  goto LAB_14273c2d9;
                                }
                                uVar11 = uVar11 >> 3;
                              }
                              else {
LAB_14273c2d9:
                                if (puVar56 < puVar36) {
                                  iVar55 = iVar34 + (int)puVar56;
LAB_14273c2ea:
                                  if (*puVar38 == *puVar56) goto code_r0x00014273c2f5;
                                  uVar57 = *puVar56 ^ *puVar38;
                                  if (uVar57 == 0) {
                                    uVar11 = 0x40;
                                  }
                                  else {
                                    lVar14 = 0;
                                    if (uVar57 != 0) {
                                      for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                      }
                                    }
                                    uVar11 = (uint)lVar14;
                                  }
                                  uVar11 = (uVar11 >> 3) + iVar55;
                                  goto LAB_14273c494;
                                }
LAB_14273c306:
                                if ((puVar56 < (ulonglong *)((longlong)puVar48 + -3)) &&
                                   ((uint)*puVar38 == (uint)*puVar56)) {
                                  puVar56 = (ulonglong *)((longlong)puVar56 + 4);
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                                }
                                if ((puVar56 < (ulonglong *)((longlong)puVar48 + -1)) &&
                                   ((short)*puVar38 == (short)*puVar56)) {
                                  puVar56 = (ulonglong *)((longlong)puVar56 + 2);
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                                }
                                if (puVar56 < puVar48) {
                                  puVar56 = (ulonglong *)
                                            ((longlong)puVar56 +
                                            (ulonglong)((char)*puVar38 == (char)*puVar56));
                                }
                                uVar11 = (int)puVar56 - (int)local_170;
                              }
LAB_14273c494:
                              uVar54 = uVar11 + 4;
                              if ((puVar48 < local_1e8) &&
                                 ((ulonglong *)((longlong)puVar30 + (longlong)(int)uVar11 + 4) ==
                                  puVar48)) {
                                puVar36 = puVar48;
                                puVar56 = local_190;
                                if (puVar48 < local_210) {
                                  uVar57 = *puVar48 ^ *local_190;
                                  if (uVar57 == 0) {
                                    uVar11 = 0x40;
                                  }
                                  else {
                                    lVar14 = 0;
                                    if (uVar57 != 0) {
                                      for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                      }
                                    }
                                    uVar11 = (uint)lVar14;
                                  }
                                  if (*local_190 == *puVar48) {
                                    puVar36 = puVar48 + 1;
                                    puVar56 = local_190 + 1;
                                    goto LAB_14273c511;
                                  }
                                  uVar11 = uVar11 >> 3;
                                }
                                else {
LAB_14273c511:
                                  if (puVar36 < local_210) {
                                    puVar38 = (ulonglong *)((ulonglong)uVar10 + (longlong)local_118)
                                    ;
                                    if (local_1e8 < puVar38) {
                                      puVar38 = local_1e8;
                                    }
                                    iVar55 = (int)puVar36 - (int)puVar38;
LAB_14273c532:
                                    if (*puVar56 == *puVar36) goto code_r0x00014273c53e;
                                    uVar57 = *puVar36 ^ *puVar56;
                                    if (uVar57 == 0) {
                                      uVar10 = 0x40;
                                    }
                                    else {
                                      lVar14 = 0;
                                      if (uVar57 != 0) {
                                        for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                        }
                                      }
                                      uVar10 = (uint)lVar14;
                                    }
                                    uVar11 = (uVar10 >> 3) + iVar55;
                                    goto LAB_14273c676;
                                  }
LAB_14273c551:
                                  if ((puVar36 < local_88) && ((uint)*puVar56 == (uint)*puVar36)) {
                                    puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                                    puVar56 = (ulonglong *)((longlong)puVar56 + 4);
                                  }
                                  if ((puVar36 < local_90) && ((short)*puVar56 == (short)*puVar36))
                                  {
                                    puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                                    puVar56 = (ulonglong *)((longlong)puVar56 + 2);
                                  }
                                  if (puVar36 < local_1e8) {
                                    puVar36 = (ulonglong *)
                                              ((longlong)puVar36 +
                                              (ulonglong)((char)*puVar56 == (char)*puVar36));
                                  }
                                  uVar11 = (int)puVar36 - (int)puVar48;
                                }
LAB_14273c676:
                                uVar54 = uVar54 + uVar11;
                              }
                              puVar36 = (ulonglong *)(ulonglong)uVar54;
                              puVar48 = local_210;
                              param_1 = local_1e0;
                              if ((int)uVar22 < (int)uVar54) {
                                local_168 = (ulonglong *)(uVar49 + (longlong)local_200);
                                local_218 = puVar36;
                              }
                            }
                          }
                          else {
LAB_14273bf1c:
                            puVar36 = (ulonglong *)0x0;
                          }
                          uVar22 = uVar37 - 1;
                          iVar26 = (int)puVar36;
                          iVar55 = (int)local_218;
                          if (((iVar26 == iVar55) && (iVar55 + uVar9 <= uVar59)) && (3 < iVar26)) {
                            iVar43 = 0;
                            iVar47 = 0x10;
                            uVar10 = 1;
                            do {
                              uVar2 = *(ushort *)
                                       ((longlong)param_1 +
                                       (ulonglong)(iVar43 + uVar9 & 0xffff) * 2 + 0x20000);
                              iVar52 = iVar47 >> 4;
                              uVar11 = (uint)uVar2;
                              bVar61 = uVar10 < uVar11;
                              iVar47 = iVar47 + 1;
                              if (bVar61) {
                                iVar47 = 0x10;
                              }
                              uVar54 = (uint)uVar2;
                              if (uVar11 < uVar10) {
                                uVar54 = uVar10;
                              }
                              uVar10 = uVar54;
                              if (bVar61) {
                                iVar44 = iVar43;
                              }
                              iVar43 = iVar52 + iVar43;
                            } while (iVar43 < iVar26 + -3);
                            uVar11 = uVar10;
                            if (uVar9 < uVar10) {
                              uVar11 = 0;
                            }
                            if (uVar10 < 2) {
                              uVar11 = 0;
                            }
                            uVar11 = uVar9 - uVar11;
                            if (uVar10 < 2) {
                              uVar49 = (ulonglong)uVar11;
                              puVar48 = local_210;
                              param_1 = local_1e0;
                              goto LAB_14273bfe8;
                            }
                            local_218 = puVar36;
                            puVar48 = local_210;
                            param_1 = local_1e0;
                            if (uVar9 < uVar10) break;
                          }
                          else {
LAB_14273bfe8:
                            iVar26 = (int)uVar49;
                            if ((*(short *)((longlong)param_1 + (uVar49 & 0xffff) * 2 + 0x20000) ==
                                 1) && (iVar44 == 0)) {
                              if ((int)local_208 == 0) {
                                local_208 = (ulonglong *)CONCAT44(local_208._4_4_,1);
                                if (!bVar62 || !bVar5) goto LAB_14273c25d;
                                uVar18 = uVar35;
                                puVar36 = puVar27;
                                if (puVar27 < puVar48) {
LAB_14273c1f2:
                                  if (*puVar36 == uVar35) goto code_r0x00014273c1fe;
                                  uVar18 = *puVar36 ^ uVar35;
                                  if (uVar18 == 0) {
                                    uVar9 = 0x40;
                                  }
                                  else {
                                    lVar14 = 0;
                                    if (uVar18 != 0) {
                                      for (; (uVar18 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                      }
                                    }
                                    uVar9 = (uint)lVar14;
                                  }
                                  puVar36 = (ulonglong *)
                                            ((longlong)puVar36 + (ulonglong)(uVar9 >> 3));
                                  goto LAB_14273c3c1;
                                }
LAB_14273c20a:
                                for (; (puVar36 < local_1e8 && ((char)*puVar36 == (char)uVar18));
                                    puVar36 = (ulonglong *)((longlong)puVar36 + 1)) {
                                  uVar18 = uVar18 >> 8;
                                }
LAB_14273c3c1:
                                uVar18 = (ulonglong)(uint)((int)puVar36 - (int)local_170) + 4;
                                local_208 = (ulonglong *)CONCAT44(local_208._4_4_,2);
                              }
                              uVar9 = iVar26 - 1;
                              if (((uVar9 - uVar12 < 0xfffffffd) && ((int)local_208 == 2)) &&
                                 (uVar46 <= uVar9)) {
                                puVar36 = local_a0;
                                if (uVar12 <= uVar9) {
                                  puVar36 = local_200;
                                }
                                uVar49 = (ulonglong)uVar9;
                                local_208 = (ulonglong *)CONCAT44(local_208._4_4_,2);
                                param_1 = local_1e0;
                                if (*(uint *)((longlong)puVar36 + uVar49) == uVar42) {
                                  puVar48 = (ulonglong *)(uVar49 + (longlong)puVar36);
                                  puVar56 = local_140;
                                  if (uVar12 <= uVar9) {
                                    puVar56 = local_1e8;
                                  }
                                  puVar38 = (ulonglong *)((longlong)puVar48 + 4);
                                  puVar50 = puVar38;
                                  if (puVar38 < (ulonglong *)((longlong)puVar56 + -7)) {
                                    pcVar15 = (char *)((longlong)puVar36 + uVar49 + 4);
LAB_14273c095:
                                    if (*puVar50 == uVar35) goto code_r0x00014273c0a2;
                                    uVar49 = *puVar50 ^ uVar35;
                                    if (uVar49 == 0) {
                                      uVar10 = 0x40;
                                    }
                                    else {
                                      lVar14 = 0;
                                      if (uVar49 != 0) {
                                        for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                        }
                                      }
                                      uVar10 = (uint)lVar14;
                                    }
                                    puVar36 = (ulonglong *)(pcVar15 + (uVar10 >> 3));
                                    goto LAB_14273c376;
                                  }
LAB_14273c0af:
                                  puVar36 = puVar50;
                                  if (puVar50 < puVar56) {
                                    lVar14 = (longlong)puVar56 - (longlong)puVar50;
                                    uVar49 = uVar35;
                                    do {
                                      puVar36 = puVar50;
                                      if ((char)*puVar50 != (char)uVar49) break;
                                      puVar50 = (ulonglong *)((longlong)puVar50 + 1);
                                      uVar49 = uVar49 >> 8;
                                      lVar14 = lVar14 + -1;
                                      puVar36 = puVar56;
                                    } while (lVar14 != 0);
                                  }
LAB_14273c376:
                                  uVar57 = (longlong)puVar36 - (longlong)puVar38;
                                  uVar49 = (uVar57 & 0xffffffff) + 4;
                                  puVar36 = local_190;
                                  if ((uVar9 < uVar12) &&
                                     (puVar36 = local_1a8,
                                     (ulonglong *)((longlong)puVar48 + uVar49) == local_140)) {
                                    bVar4 = (char)uVar57 * '\b' & 0x1f;
                                    puVar56 = (ulonglong *)
                                              (ulonglong)(uVar42 << bVar4 | uVar42 >> 0x20 - bVar4);
                                    if ((uVar57 & 3) == 0) {
                                      puVar56 = local_1f8;
                                    }
                                    uVar57 = (longlong)puVar56 * 0x100000001;
                                    puVar56 = local_190;
                                    if (local_190 < local_210) {
LAB_14273c5ea:
                                      if (*puVar56 == uVar57) goto code_r0x00014273c5f2;
                                      uVar57 = *puVar56 ^ uVar57;
                                      if (uVar57 == 0) {
                                        uVar10 = 0x40;
                                      }
                                      else {
                                        lVar14 = 0;
                                        if (uVar57 != 0) {
                                          for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                          }
                                        }
                                        uVar10 = (uint)lVar14;
                                      }
                                      puVar56 = (ulonglong *)
                                                ((longlong)puVar56 + (ulonglong)(uVar10 >> 3));
                                      goto LAB_14273c6a7;
                                    }
LAB_14273c7c3:
                                    for (; (puVar56 < local_1e8 && ((char)*puVar56 == (char)uVar57))
                                        ; puVar56 = (ulonglong *)((longlong)puVar56 + 1)) {
                                      uVar57 = uVar57 >> 8;
                                    }
LAB_14273c6a7:
                                    uVar49 = uVar49 + (uint)((int)puVar56 - (int)local_190);
                                  }
                                  puVar56 = puVar48;
                                  do {
                                    puVar38 = puVar56;
                                    if (puVar38 < (ulonglong *)((longlong)puVar36 + 4)) break;
                                    puVar56 = (ulonglong *)((longlong)puVar38 + -4);
                                  } while (*(uint *)((longlong)puVar38 + -4) == uVar42);
                                  puVar56 = puVar38;
                                  if (puVar36 < puVar38) {
                                    lVar14 = 0;
                                    do {
                                      if (*(char *)((longlong)puVar38 + lVar14 + -1) !=
                                          *(char *)((longlong)&local_4c + lVar14 + 3)) {
                                        puVar56 = (ulonglong *)((longlong)puVar38 + lVar14);
                                        break;
                                      }
                                      lVar20 = lVar14 + -1;
                                      lVar14 = lVar14 + -1;
                                      puVar56 = puVar36;
                                    } while (puVar36 < (ulonglong *)((longlong)puVar38 + lVar20));
                                  }
                                  uVar57 = (longlong)puVar48 - (longlong)puVar56;
                                  iVar44 = (int)uVar57;
                                  local_4c = uVar42;
                                  if ((uVar41 < uVar12 && uVar12 <= uVar9) &&
                                      (ulonglong *)((longlong)puVar48 - (uVar57 & 0xffffffff)) ==
                                      local_190) {
                                    bVar4 = (char)uVar57 * -8 & 0x1f;
                                    puVar48 = local_140;
                                    puVar36 = local_130;
                                    local_4c = uVar42 << bVar4 | uVar42 >> 0x20 - bVar4;
                                    if ((-iVar44 & 3U) == 0) {
                                      local_4c = uVar42;
                                    }
                                    do {
                                      puVar56 = puVar48;
                                      if ((longlong)puVar36 < 4) {
                                        if ((longlong)puVar36 < 1) goto LAB_14273c7e2;
                                        break;
                                      }
                                      puVar48 = (ulonglong *)((longlong)puVar56 + -4);
                                      puVar36 = (ulonglong *)((longlong)puVar36 + -4);
                                    } while (*(uint *)((longlong)puVar56 + -4) == local_4c);
                                    pcVar15 = (char *)((longlong)&local_4c + 3);
                                    do {
                                      if (*(char *)((longlong)puVar56 + -1) != *pcVar15) break;
                                      puVar56 = (ulonglong *)((longlong)puVar56 + -1);
                                      pcVar15 = pcVar15 + -1;
                                    } while (local_1a8 < puVar56);
LAB_14273c7e2:
                                    iVar44 = (iVar7 - (int)puVar56) + iVar44;
                                  }
                                  uVar10 = uVar9 - iVar44;
                                  if (uVar9 - iVar44 <= uVar46) {
                                    uVar10 = uVar46;
                                  }
                                  uVar57 = (uVar9 - uVar10) + uVar49;
                                  if ((uVar18 < uVar49) || (uVar57 < uVar18)) {
                                    local_208 = (ulonglong *)CONCAT44(local_208._4_4_,2);
                                    uVar11 = uVar12;
                                    if (uVar10 - uVar12 < 0xfffffffd) {
                                      if (uVar18 <= uVar57) {
                                        uVar57 = uVar18;
                                      }
                                      if ((ulonglong)(longlong)iVar55 < uVar57) {
                                        puVar48 = local_210;
                                        if (0xffff < (longlong)local_e8 - (ulonglong)uVar10) break;
                                        local_168 = (ulonglong *)
                                                    ((ulonglong)uVar10 + (longlong)local_200);
                                        local_218 = (ulonglong *)(uVar57 & 0xffffffff);
                                      }
                                      uVar9 = (uint)*(ushort *)
                                                     ((longlong)local_1e0 +
                                                     ((ulonglong)uVar10 & 0xffff) * 2 + 0x20000);
                                      puVar48 = local_210;
                                      if (uVar10 < uVar9) break;
                                      uVar11 = uVar10 - uVar9;
                                    }
                                  }
                                  else {
                                    uVar11 = (uVar9 - (int)uVar18) + (int)uVar49;
                                    if (0xfffffffc < uVar11 - uVar12) {
                                      uVar11 = uVar12;
                                    }
                                  }
                                  local_208 = (ulonglong *)CONCAT44(local_208._4_4_,2);
                                  iVar44 = 0;
                                  puVar48 = local_210;
                                  goto LAB_14273c273;
                                }
                              }
                            }
LAB_14273c25d:
                            uVar11 = iVar26 - (uint)*(ushort *)
                                                     ((longlong)param_1 +
                                                     (ulonglong)(iVar44 + iVar26 & 0xffff) * 2 +
                                                     0x20000);
                          }
LAB_14273c273:
                          if ((uVar11 < uVar46) ||
                             (bVar61 = (int)uVar37 < 2, uVar37 = uVar22, uVar9 = uVar11, bVar61))
                          break;
                        } while( true );
                      }
                    }
                    if ((0 < (int)uVar22) && (uVar59 - uVar46 < 0xffff)) {
                      local_208 = (ulonglong *)
                                  ((*(longlong *)(local_f0 + 0x40000) -
                                   *(longlong *)(&DAT_00040008 + local_f0)) +
                                  (ulonglong)*(uint *)(local_f0 + 0x40018));
                      uVar9 = *(uint *)(local_f0 +
                                       (ulonglong)((uint)*puVar30 * -0x61c8864f >> 0x11) * 4);
                      uVar46 = (uVar46 + uVar9) - (int)local_208;
                      if (uVar59 - uVar46 < 0x10000) {
                        lVar14 = *(longlong *)(&DAT_00040008 + local_f0) -
                                 (ulonglong)*(uint *)(local_f0 + 0x40018);
                        do {
                          bVar62 = uVar22 == 0;
                          uVar22 = uVar22 - 1;
                          if (bVar62) break;
                          uVar18 = (ulonglong)uVar9;
                          if (*(uint *)(lVar14 + uVar18) == uVar42) {
                            puVar36 = (ulonglong *)
                                      (((longlong)local_208 - uVar18) + (longlong)puVar30);
                            if (local_1e8 < puVar36) {
                              puVar36 = local_1e8;
                            }
                            lVar20 = lVar14 + uVar18;
                            puVar50 = (ulonglong *)(lVar20 + 4);
                            puVar56 = (ulonglong *)((longlong)puVar36 + -7);
                            puVar38 = puVar27;
                            if (puVar27 < puVar56) {
                              uVar18 = *puVar27 ^ *puVar50;
                              if (uVar18 == 0) {
                                uVar37 = 0x40;
                              }
                              else {
                                lVar1 = 0;
                                if (uVar18 != 0) {
                                  for (; (uVar18 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
                                  }
                                }
                                uVar37 = (uint)lVar1;
                              }
                              if (*puVar50 == *puVar27) {
                                puVar50 = (ulonglong *)(lVar20 + 0xc);
                                puVar38 = (ulonglong *)((longlong)puVar30 + 0xc);
                                puVar48 = local_210;
                                goto LAB_14273d760;
                              }
                              uVar37 = uVar37 >> 3;
                              puVar48 = local_210;
                            }
                            else {
LAB_14273d760:
                              if (puVar38 < puVar56) {
                                iVar44 = iVar34 + (int)puVar38;
LAB_14273d774:
                                if (*puVar50 == *puVar38) goto code_r0x00014273d77f;
                                uVar18 = *puVar38 ^ *puVar50;
                                if (uVar18 == 0) {
                                  uVar37 = 0x40;
                                }
                                else {
                                  lVar20 = 0;
                                  if (uVar18 != 0) {
                                    for (; (uVar18 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                                    }
                                  }
                                  uVar37 = (uint)lVar20;
                                }
                                uVar37 = (uVar37 >> 3) + iVar44;
                                goto LAB_14273d815;
                              }
LAB_14273d78f:
                              if ((puVar38 < (ulonglong *)((longlong)puVar36 + -3)) &&
                                 ((uint)*puVar50 == (uint)*puVar38)) {
                                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                                puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                              }
                              if ((puVar38 < (ulonglong *)((longlong)puVar36 + -1)) &&
                                 ((short)*puVar50 == (short)*puVar38)) {
                                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                                puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                              }
                              if (puVar38 < puVar36) {
                                puVar38 = (ulonglong *)
                                          ((longlong)puVar38 +
                                          (ulonglong)((char)*puVar50 == (char)*puVar38));
                              }
                              uVar37 = (int)puVar38 - (int)local_170;
                            }
LAB_14273d815:
                            bVar62 = (int)local_218 < (int)(uVar37 + 4);
                            if (bVar62) {
                              local_168 = (ulonglong *)((ulonglong)uVar46 + (longlong)local_200);
                              local_218 = (ulonglong *)(ulonglong)(uVar37 + 4);
                            }
                          }
                          uVar37 = (uint)*(ushort *)
                                          (local_f0 + 0x20000 + (ulonglong)(uVar9 & 0xffff) * 2);
                          uVar9 = uVar9 - uVar37;
                          uVar46 = uVar46 - uVar37;
                        } while (uVar59 - uVar46 < 0x10000);
                      }
                    }
                    if ((int)local_218 < 4) goto LAB_14273dd72;
                    uVar18 = (longlong)local_218 << 0x20;
                    if ((int)local_218 - 0x13U < 0x12) {
                      uVar18 = 0x1200000000;
                    }
                    puVar27 = local_168;
                    if ((char)local_1b0 == '\0') {
                      uVar18 = (longlong)local_218 << 0x20;
                    }
LAB_14273dc71:
                    puVar27 = (ulonglong *)((longlong)puVar30 - (longlong)puVar27);
                    local_170 = (uint *)((longlong)puVar30 + 4);
                    uVar35 = uVar18 >> 0x20;
                    if ((local_148 < (ulonglong *)((longlong)uVar18 >> 0x20)) ||
                       (iVar44 = (int)(uVar18 >> 0x20), 0xfff < iVar23 + iVar44)) {
                      iVar23 = iVar23 + 1;
                      local_b8 = pcVar24;
                      goto LAB_14273e103;
                    }
                    uVar46 = *(uint *)((longlong)local_d8 + 0xc);
                    lVar14 = (longlong)(int)uVar46;
                    uVar59 = uVar46 + 1 + (uVar46 - 0xf) / 0xff;
                    if (lVar14 < 0xf) {
                      uVar59 = uVar46;
                    }
                    uVar42 = uVar46 - 0xe;
                    iVar55 = 1;
                    lVar20 = 0;
                    puVar48 = local_110;
                    do {
                      if (lVar14 + 1 + lVar20 < 0xf) {
                        iVar26 = iVar55 + uVar46;
                      }
                      else {
                        iVar26 = uVar42 / 0xff + uVar46 + 2 + (int)lVar20;
                      }
                      uVar22 = iVar26 + (uVar25 - uVar59);
                      if ((int)uVar22 < (int)(uint)*puVar48) {
                        ((uint *)((longlong)puVar48 + 4))[0] = 0;
                        ((uint *)((longlong)puVar48 + 4))[1] = 1;
                        *(uint *)((longlong)puVar48 + 0xc) = uVar46 + (int)lVar20 + 1;
                        *(uint *)puVar48 = uVar22;
                      }
                      iVar55 = iVar55 + 1;
                      lVar20 = lVar20 + 1;
                      puVar48 = puVar48 + 2;
                      uVar42 = uVar42 + 1;
                    } while (lVar20 != 3);
                    if (3 < iVar44) {
                      uVar18 = local_d8[1];
                      iVar44 = uVar59 + 3;
                      uVar59 = uVar59 + 4;
                      puVar48 = local_a8;
                      uVar49 = 4;
                      do {
                        uVar42 = (uint)uVar49;
                        if ((uint)uVar18 == 1) {
                          uVar22 = 0;
                          if (lVar14 < (longlong)puVar19) {
                            uVar22 = (uint)local_1a0[(longlong)(int)(iVar23 - uVar46) * 2];
                          }
                          iVar55 = iVar44;
                          if (0x12 < uVar49) {
                            iVar55 = (uVar42 - 0x13) / 0xff + uVar59;
                          }
                          uVar22 = iVar55 + uVar22;
                          uVar9 = uVar46;
                        }
                        else {
                          iVar55 = 3;
                          if (0x12 < uVar49) {
                            iVar55 = (uVar42 - 0x13) / 0xff + 4;
                          }
                          uVar22 = iVar55 + uVar25;
                          uVar9 = 0;
                        }
                        puVar30 = (ulonglong *)((longlong)local_178 + (uVar49 - 4));
                        iVar55 = (int)puVar30;
                        if (((int)local_1c8 + 3 < iVar55) ||
                           ((int)uVar22 <= (int)((uint)*puVar48 + (int)local_78))) {
                          if (iVar55 < (int)local_1c8) {
                            puVar30 = local_1c8;
                          }
                          if (uVar49 != uVar35) {
                            puVar30 = local_1c8;
                          }
                          local_1c8 = (ulonglong *)((ulonglong)puVar30 & 0xffffffff);
                          *(uint *)(puVar48 + 1) = uVar42;
                          *(uint *)((longlong)puVar48 + 4) = (uint)puVar27;
                          *(uint *)((longlong)puVar48 + 0xc) = uVar9;
                          *(uint *)puVar48 = uVar22;
                        }
                        puVar48 = puVar48 + 2;
                        bVar62 = uVar49 != uVar35;
                        uVar49 = uVar49 + 1;
                      } while (bVar62);
                    }
                    local_218 = (ulonglong *)(ulonglong)uVar59;
                    iVar23 = 1;
                    lVar14 = 0;
                    do {
                      pcVar15 = (char *)((longlong)local_60 +
                                        lVar14 + (longlong)local_1c8 * 0x10 + -8);
                      pcVar15[0] = '\0';
                      pcVar15[1] = '\0';
                      pcVar15[2] = '\0';
                      pcVar15[3] = '\0';
                      pcVar15[4] = '\x01';
                      pcVar15[5] = '\0';
                      pcVar15[6] = '\0';
                      pcVar15[7] = '\0';
                      *(int *)((longlong)local_60 + lVar14 + (longlong)local_1c8 * 0x10) = iVar23;
                      *(uint *)((longlong)local_60 + lVar14 + (longlong)local_1c8 * 0x10 + -0xc) =
                           (uint)local_1a0[(longlong)local_1c8 * 2] + iVar23;
                      lVar14 = lVar14 + 0x10;
                      iVar23 = iVar23 + 1;
                      puVar48 = local_210;
                      local_220 = puVar27;
                      local_b8 = pcVar24;
                    } while (lVar14 != 0x30);
                  }
                }
                else if ((int)uVar25 < (int)(uint)local_1a0[(longlong)puVar19 * 2 + 2]) {
                  local_f8 = (char *)((longlong)puVar30 - (longlong)local_190);
                  uVar59 = uVar12 + (int)local_f8;
                  uVar46 = (uVar12 - 0xffff) + (int)local_f8;
                  if (uVar59 < uVar17) {
                    uVar46 = uVar41;
                  }
                  local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,uVar46);
                  uVar42 = (uint)*puVar30;
                  local_208 = (ulonglong *)(ulonglong)uVar42;
                  puVar36 = (ulonglong *)(ulonglong)*(uint *)((longlong)param_1 + 0x40020);
                  if (*(uint *)((longlong)param_1 + 0x40020) < uVar59) {
                    do {
                      uVar18 = (ulonglong)
                               ((uint)(*(int *)((longlong)local_200 + (longlong)puVar36) *
                                      -0x61c8864f) >> 0x11);
                      uVar22 = (uint)puVar36;
                      uVar9 = uVar22 - *(int *)((longlong)param_1 + uVar18 * 4);
                      if (0xfffe < uVar9) {
                        uVar9 = 0xffff;
                      }
                      *(short *)((longlong)param_1 + (ulonglong)(uVar22 & 0xffff) * 2 + 0x20000) =
                           (short)uVar9;
                      *(uint *)((longlong)param_1 + uVar18 * 4) = uVar22;
                      puVar36 = (ulonglong *)((longlong)puVar36 + 1);
                    } while (puVar27 != puVar36);
                  }
                  uVar37 = (int)local_1c8 - iVar23;
                  *(uint *)((longlong)param_1 + 0x40020) = uVar59;
                  uVar22 = *(uint *)((longlong)param_1 +
                                    (ulonglong)((uint)*puVar30 * -0x61c8864f >> 0x11) * 4);
                  puVar27 = (ulonglong *)((longlong)puVar30 + 4);
                  bVar62 = uVar42 >> 0x18 == (uVar42 & 0xff);
                  bVar5 = uVar42 >> 0x10 == (uVar42 & 0xffff);
                  local_e8 = (ulonglong *)CONCAT71(local_e8._1_7_,bVar62 && bVar5);
                  local_1d8 = (ulonglong *)CONCAT44(local_1d8._4_4_,uVar59);
                  local_b0 = (uint *)CONCAT44(local_b0._4_4_,uVar37);
                  local_170._0_4_ = (int)puVar27;
                  puVar36 = (ulonglong *)(ulonglong)uVar37;
                  uVar9 = local_194;
                  if (uVar22 < uVar46) {
                    local_128 = (ulonglong *)0x0;
                  }
                  else {
                    local_128 = (ulonglong *)0x0;
                    if (0 < (int)local_194) {
                      local_f8 = local_f8 + (longlong)local_1b8;
                      uVar35 = (longlong)local_208 * 0x100000001;
                      iVar44 = 0;
                      puVar36 = (ulonglong *)(ulonglong)uVar37;
                      local_218 = (ulonglong *)((ulonglong)local_218 & 0xffffffff00000000);
                      uVar18 = 0;
                      local_128 = (ulonglong *)0x0;
                      uVar10 = local_194;
                      do {
                        uVar49 = (ulonglong)uVar22;
                        puVar38 = (ulonglong *)(ulonglong)uVar10;
                        puVar56 = puVar36;
                        if (((char)local_1b0 == '\0') || (7 < uVar59 - uVar22)) {
                          uVar9 = uVar12 - uVar22;
                          iVar55 = (int)puVar36;
                          if (uVar12 < uVar22 || uVar9 == 0) {
                            puVar36 = (ulonglong *)(uVar49 + (longlong)local_200);
                            local_168 = puVar38;
                            if ((*(short *)((longlong)puVar30 + (longlong)iVar55 + -1) !=
                                 *(short *)((longlong)iVar55 + -1 + (longlong)puVar36)) ||
                               ((uint)*puVar36 != uVar42)) {
                              puVar38 = (ulonglong *)0x0;
                              goto LAB_14273cf04;
                            }
                            puVar38 = (ulonglong *)((longlong)puVar36 + 4);
                            puVar50 = puVar27;
                            if (puVar27 < puVar48) {
                              uVar57 = *puVar27 ^ *puVar38;
                              if (uVar57 == 0) {
                                uVar9 = 0x40;
                              }
                              else {
                                lVar14 = 0;
                                if (uVar57 != 0) {
                                  for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                  }
                                }
                                uVar9 = (uint)lVar14;
                              }
                              if (*puVar38 == *puVar27) {
                                puVar50 = (ulonglong *)((longlong)puVar30 + 0xc);
                                puVar38 = (ulonglong *)((longlong)puVar36 + 0xc);
                                puVar48 = local_210;
                                goto LAB_14273cd2f;
                              }
                              uVar9 = uVar9 >> 3;
                              puVar48 = local_210;
                            }
                            else {
LAB_14273cd2f:
                              if (puVar50 < puVar48) {
                                iVar26 = iVar34 + (int)puVar50;
LAB_14273cd49:
                                if (*puVar38 == *puVar50) goto code_r0x00014273cd54;
                                uVar57 = *puVar50 ^ *puVar38;
                                if (uVar57 == 0) {
                                  uVar9 = 0x40;
                                }
                                else {
                                  lVar14 = 0;
                                  if (uVar57 != 0) {
                                    for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                    }
                                  }
                                  uVar9 = (uint)lVar14;
                                }
                                uVar9 = (uVar9 >> 3) + iVar26;
                                goto LAB_14273cedf;
                              }
LAB_14273d545:
                              if ((puVar50 < local_88) && ((uint)*puVar38 == (uint)*puVar50)) {
                                puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                              }
                              if ((puVar50 < local_90) && ((short)*puVar38 == (short)*puVar50)) {
                                puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                              }
                              if (puVar50 < local_1e8) {
                                puVar50 = (ulonglong *)
                                          ((longlong)puVar50 +
                                          (ulonglong)((char)*puVar38 == (char)*puVar50));
                              }
                              uVar9 = (int)puVar50 - (int)local_170;
                            }
LAB_14273cedf:
                            uVar9 = uVar9 + 4;
                            param_1 = local_1e0;
                            puVar38 = (ulonglong *)(ulonglong)uVar9;
                            if (iVar55 < (int)uVar9) {
                              puVar56 = (ulonglong *)(ulonglong)uVar9;
                              local_128 = puVar36;
                            }
                          }
                          else {
                            if ((uVar8 < uVar22) ||
                               (puVar58 = (uint *)((ulonglong)(uVar22 - uVar41) +
                                                  (longlong)local_1a8), *puVar58 != uVar42))
                            goto LAB_14273cb5c;
                            puVar48 = (ulonglong *)((longlong)puVar30 + (ulonglong)uVar9);
                            if (local_1e8 < puVar48) {
                              puVar48 = local_1e8;
                            }
                            puVar28 = (ulonglong *)(puVar58 + 1);
                            puVar38 = (ulonglong *)((longlong)puVar48 + -7);
                            puVar50 = puVar27;
                            if (puVar27 < puVar38) {
                              uVar57 = *puVar27 ^ *puVar28;
                              if (uVar57 == 0) {
                                uVar11 = 0x40;
                              }
                              else {
                                lVar14 = 0;
                                if (uVar57 != 0) {
                                  for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                  }
                                }
                                uVar11 = (uint)lVar14;
                              }
                              if (*puVar28 == *puVar27) {
                                puVar50 = (ulonglong *)((longlong)puVar30 + 0xc);
                                puVar28 = (ulonglong *)(puVar58 + 3);
                                goto LAB_14273cc73;
                              }
                              uVar11 = uVar11 >> 3;
                            }
                            else {
LAB_14273cc73:
                              if (puVar50 < puVar38) {
                                iVar26 = iVar34 + (int)puVar50;
LAB_14273cc84:
                                if (*puVar28 == *puVar50) goto code_r0x00014273cc90;
                                uVar57 = *puVar50 ^ *puVar28;
                                if (uVar57 == 0) {
                                  uVar11 = 0x40;
                                }
                                else {
                                  lVar14 = 0;
                                  if (uVar57 != 0) {
                                    for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                    }
                                  }
                                  uVar11 = (uint)lVar14;
                                }
                                uVar11 = (uVar11 >> 3) + iVar26;
                                goto LAB_14273cdbd;
                              }
LAB_14273cca1:
                              if ((puVar50 < (ulonglong *)((longlong)puVar48 + -3)) &&
                                 ((uint)*puVar28 == (uint)*puVar50)) {
                                puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                              }
                              if ((puVar50 < (ulonglong *)((longlong)puVar48 + -1)) &&
                                 ((short)*puVar28 == (short)*puVar50)) {
                                puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                              }
                              if (puVar50 < puVar48) {
                                puVar50 = (ulonglong *)
                                          ((longlong)puVar50 +
                                          (ulonglong)((char)*puVar28 == (char)*puVar50));
                              }
                              uVar11 = (int)puVar50 - (int)local_170;
                            }
LAB_14273cdbd:
                            uVar54 = uVar11 + 4;
                            if ((puVar48 < local_1e8) &&
                               ((ulonglong *)((longlong)puVar30 + (longlong)(int)uVar11 + 4) ==
                                puVar48)) {
                              puVar50 = local_190;
                              puVar38 = puVar48;
                              if (puVar48 < local_210) {
                                uVar57 = *puVar48 ^ *local_190;
                                if (uVar57 == 0) {
                                  uVar11 = 0x40;
                                }
                                else {
                                  lVar14 = 0;
                                  if (uVar57 != 0) {
                                    for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                    }
                                  }
                                  uVar11 = (uint)lVar14;
                                }
                                if (*local_190 == *puVar48) {
                                  puVar38 = puVar48 + 1;
                                  puVar50 = local_190 + 1;
                                  goto LAB_14273ce3a;
                                }
                                uVar11 = uVar11 >> 3;
                              }
                              else {
LAB_14273ce3a:
                                if (puVar38 < local_210) {
                                  puVar28 = (ulonglong *)((ulonglong)uVar9 + (longlong)local_118);
                                  if (local_1e8 < puVar28) {
                                    puVar28 = local_1e8;
                                  }
                                  iVar26 = (int)puVar38 - (int)puVar28;
LAB_14273ce64:
                                  if (*puVar50 == *puVar38) goto code_r0x00014273ce71;
                                  uVar57 = *puVar38 ^ *puVar50;
                                  if (uVar57 == 0) {
                                    uVar9 = 0x40;
                                  }
                                  else {
                                    lVar14 = 0;
                                    if (uVar57 != 0) {
                                      for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                      }
                                    }
                                    uVar9 = (uint)lVar14;
                                  }
                                  uVar11 = (uVar9 >> 3) + iVar26;
                                  goto LAB_14273d293;
                                }
LAB_14273d5ca:
                                if ((puVar38 < local_88) && ((uint)*puVar50 == (uint)*puVar38)) {
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                                  puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                                }
                                if ((puVar38 < local_90) && ((short)*puVar50 == (short)*puVar38)) {
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                                  puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                                }
                                if (puVar38 < local_1e8) {
                                  puVar38 = (ulonglong *)
                                            ((longlong)puVar38 +
                                            (ulonglong)((char)*puVar50 == (char)*puVar38));
                                }
                                uVar11 = (int)puVar38 - (int)puVar48;
                              }
LAB_14273d293:
                              uVar54 = uVar54 + uVar11;
                            }
                            puVar38 = (ulonglong *)(ulonglong)uVar54;
                            puVar48 = local_210;
                            param_1 = local_1e0;
                            local_1f8 = puVar36;
                            if (iVar55 < (int)uVar54) {
                              puVar56 = puVar38;
                              local_128 = (ulonglong *)(uVar49 + (longlong)local_200);
                            }
                          }
                        }
                        else {
LAB_14273cb5c:
                          puVar38 = (ulonglong *)0x0;
                        }
LAB_14273cf04:
                        puVar36 = puVar38;
                        uVar9 = uVar10 - 1;
                        iVar26 = (int)puVar36;
                        iVar55 = (int)puVar56;
                        if (((iVar26 == iVar55) && (iVar55 + uVar22 <= uVar59)) && (3 < iVar26)) {
                          iVar43 = 0;
                          iVar47 = 0x10;
                          uVar11 = 1;
                          do {
                            uVar2 = *(ushort *)
                                     ((longlong)param_1 +
                                     (ulonglong)(iVar43 + uVar22 & 0xffff) * 2 + 0x20000);
                            iVar52 = iVar47 >> 4;
                            uVar54 = (uint)uVar2;
                            bVar61 = uVar11 < uVar54;
                            iVar47 = iVar47 + 1;
                            if (bVar61) {
                              iVar47 = 0x10;
                            }
                            uVar6 = (uint)uVar2;
                            if (uVar54 < uVar11) {
                              uVar6 = uVar11;
                            }
                            uVar11 = uVar6;
                            if (bVar61) {
                              iVar44 = iVar43;
                            }
                            iVar43 = iVar52 + iVar43;
                          } while (iVar43 < iVar26 + -3);
                          uVar54 = uVar11;
                          if (uVar22 < uVar11) {
                            uVar54 = 0;
                          }
                          if (uVar11 < 2) {
                            uVar54 = 0;
                          }
                          uVar54 = uVar22 - uVar54;
                          if (uVar11 < 2) {
                            uVar49 = (ulonglong)uVar54;
                            puVar48 = local_210;
                            param_1 = local_1e0;
                            local_1f8 = puVar56;
                            goto LAB_14273cfcf;
                          }
                          puVar48 = local_210;
                          param_1 = local_1e0;
                          local_1f8 = puVar56;
                          if (uVar22 < uVar11) break;
                        }
                        else {
LAB_14273cfcf:
                          iVar26 = (int)uVar49;
                          puVar36 = puVar56;
                          if ((*(short *)((longlong)param_1 + (uVar49 & 0xffff) * 2 + 0x20000) == 1)
                             && (iVar44 == 0)) {
                            if ((int)local_218 == 0) {
                              local_218 = (ulonglong *)CONCAT44(local_218._4_4_,1);
                              if (!bVar62 || !bVar5) goto LAB_14273d164;
                              uVar18 = uVar35;
                              puVar38 = puVar27;
                              if (puVar27 < puVar48) {
LAB_14273d0f2:
                                if (*puVar38 == uVar35) goto code_r0x00014273d0fe;
                                uVar18 = *puVar38 ^ uVar35;
                                if (uVar18 == 0) {
                                  uVar22 = 0x40;
                                }
                                else {
                                  lVar14 = 0;
                                  if (uVar18 != 0) {
                                    for (; (uVar18 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                    }
                                  }
                                  uVar22 = (uint)lVar14;
                                }
                                puVar38 = (ulonglong *)
                                          ((longlong)puVar38 + (ulonglong)(uVar22 >> 3));
                                goto LAB_14273d205;
                              }
LAB_14273d10a:
                              for (; (puVar38 < local_1e8 && ((char)*puVar38 == (char)uVar18));
                                  puVar38 = (ulonglong *)((longlong)puVar38 + 1)) {
                                uVar18 = uVar18 >> 8;
                              }
LAB_14273d205:
                              uVar18 = (ulonglong)(uint)((int)puVar38 - (int)local_170) + 4;
                              local_218 = (ulonglong *)CONCAT44(local_218._4_4_,2);
                            }
                            uVar22 = iVar26 - 1;
                            if (((uVar22 - uVar12 < 0xfffffffd) && ((int)local_218 == 2)) &&
                               (uVar46 <= uVar22)) {
                              puVar38 = local_a0;
                              if (uVar12 <= uVar22) {
                                puVar38 = local_200;
                              }
                              uVar49 = (ulonglong)uVar22;
                              local_218 = (ulonglong *)CONCAT44(local_218._4_4_,2);
                              param_1 = local_1e0;
                              local_1f8 = puVar56;
                              if (*(uint *)((longlong)puVar38 + uVar49) == uVar42) {
                                puVar48 = (ulonglong *)(uVar49 + (longlong)puVar38);
                                puVar50 = local_140;
                                if (uVar12 <= uVar22) {
                                  puVar50 = local_1e8;
                                }
                                puVar28 = (ulonglong *)((longlong)puVar48 + 4);
                                puVar51 = puVar28;
                                if (puVar28 < (ulonglong *)((longlong)puVar50 + -7)) {
                                  pcVar15 = (char *)((longlong)puVar38 + uVar49 + 4);
LAB_14273d07c:
                                  if (*puVar51 == uVar35) goto code_r0x00014273d089;
                                  uVar49 = *puVar51 ^ uVar35;
                                  if (uVar49 == 0) {
                                    uVar11 = 0x40;
                                  }
                                  else {
                                    lVar14 = 0;
                                    if (uVar49 != 0) {
                                      for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                      }
                                    }
                                    uVar11 = (uint)lVar14;
                                  }
                                  puVar38 = (ulonglong *)(pcVar15 + (uVar11 >> 3));
                                  goto LAB_14273d1be;
                                }
LAB_14273d096:
                                puVar38 = puVar51;
                                if (puVar51 < puVar50) {
                                  lVar14 = (longlong)puVar50 - (longlong)puVar51;
                                  uVar49 = uVar35;
                                  do {
                                    puVar38 = puVar51;
                                    if ((char)*puVar51 != (char)uVar49) break;
                                    puVar51 = (ulonglong *)((longlong)puVar51 + 1);
                                    uVar49 = uVar49 >> 8;
                                    lVar14 = lVar14 + -1;
                                    puVar38 = puVar50;
                                  } while (lVar14 != 0);
                                }
LAB_14273d1be:
                                uVar57 = (longlong)puVar38 - (longlong)puVar28;
                                uVar49 = (uVar57 & 0xffffffff) + 4;
                                puVar38 = local_190;
                                if ((uVar22 < uVar12) &&
                                   (puVar38 = local_1a8,
                                   (ulonglong *)((longlong)puVar48 + uVar49) == local_140)) {
                                  bVar4 = (char)uVar57 * '\b' & 0x1f;
                                  puVar50 = (ulonglong *)
                                            (ulonglong)(uVar42 << bVar4 | uVar42 >> 0x20 - bVar4);
                                  if ((uVar57 & 3) == 0) {
                                    puVar50 = local_208;
                                  }
                                  uVar57 = (longlong)puVar50 * 0x100000001;
                                  puVar50 = local_190;
                                  if (local_190 < local_210) {
LAB_14273d259:
                                    if (*puVar50 == uVar57) goto code_r0x00014273d261;
                                    uVar57 = *puVar50 ^ uVar57;
                                    if (uVar57 == 0) {
                                      uVar11 = 0x40;
                                    }
                                    else {
                                      lVar14 = 0;
                                      if (uVar57 != 0) {
                                        for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                        }
                                      }
                                      uVar11 = (uint)lVar14;
                                    }
                                    puVar50 = (ulonglong *)
                                              ((longlong)puVar50 + (ulonglong)(uVar11 >> 3));
                                    goto LAB_14273d2c9;
                                  }
LAB_14273d3ec:
                                  for (; (puVar50 < local_1e8 && ((char)*puVar50 == (char)uVar57));
                                      puVar50 = (ulonglong *)((longlong)puVar50 + 1)) {
                                    uVar57 = uVar57 >> 8;
                                  }
LAB_14273d2c9:
                                  uVar49 = uVar49 + (uint)((int)puVar50 - (int)local_190);
                                }
                                puVar50 = puVar48;
                                do {
                                  puVar28 = puVar50;
                                  if (puVar28 < (ulonglong *)((longlong)puVar38 + 4)) break;
                                  puVar50 = (ulonglong *)((longlong)puVar28 + -4);
                                } while (*(uint *)((longlong)puVar28 + -4) == uVar42);
                                puVar50 = puVar28;
                                if (puVar38 < puVar28) {
                                  lVar14 = 0;
                                  do {
                                    if (*(char *)((longlong)puVar28 + lVar14 + -1) !=
                                        *(char *)((longlong)&local_4c + lVar14 + 3)) {
                                      puVar50 = (ulonglong *)((longlong)puVar28 + lVar14);
                                      break;
                                    }
                                    lVar20 = lVar14 + -1;
                                    lVar14 = lVar14 + -1;
                                    puVar50 = puVar38;
                                  } while (puVar38 < (ulonglong *)((longlong)puVar28 + lVar20));
                                }
                                uVar57 = (longlong)puVar48 - (longlong)puVar50;
                                iVar44 = (int)uVar57;
                                local_4c = uVar42;
                                if ((uVar41 < uVar12 && uVar12 <= uVar22) &&
                                    (ulonglong *)((longlong)puVar48 - (uVar57 & 0xffffffff)) ==
                                    local_190) {
                                  bVar4 = (char)uVar57 * -8 & 0x1f;
                                  puVar48 = local_140;
                                  puVar38 = local_130;
                                  local_4c = uVar42 << bVar4 | uVar42 >> 0x20 - bVar4;
                                  if ((-iVar44 & 3U) == 0) {
                                    local_4c = uVar42;
                                  }
                                  do {
                                    puVar50 = puVar48;
                                    if ((longlong)puVar38 < 4) {
                                      if ((longlong)puVar38 < 1) goto LAB_14273d40d;
                                      break;
                                    }
                                    puVar48 = (ulonglong *)((longlong)puVar50 + -4);
                                    puVar38 = (ulonglong *)((longlong)puVar38 + -4);
                                  } while (*(uint *)((longlong)puVar50 + -4) == local_4c);
                                  pcVar15 = (char *)((longlong)&local_4c + 3);
                                  do {
                                    if (*(char *)((longlong)puVar50 + -1) != *pcVar15) break;
                                    puVar50 = (ulonglong *)((longlong)puVar50 + -1);
                                    pcVar15 = pcVar15 + -1;
                                  } while (local_1a8 < puVar50);
LAB_14273d40d:
                                  iVar44 = (iVar7 - (int)puVar50) + iVar44;
                                }
                                uVar11 = uVar22 - iVar44;
                                if (uVar22 - iVar44 <= uVar46) {
                                  uVar11 = uVar46;
                                }
                                uVar57 = (uVar22 - uVar11) + uVar49;
                                if ((uVar18 < uVar49) || (uVar57 < uVar18)) {
                                  local_218 = (ulonglong *)CONCAT44(local_218._4_4_,2);
                                  uVar54 = uVar12;
                                  if (uVar11 - uVar12 < 0xfffffffd) {
                                    if (uVar18 <= uVar57) {
                                      uVar57 = uVar18;
                                    }
                                    if ((ulonglong)(longlong)iVar55 < uVar57) {
                                      puVar48 = local_210;
                                      if (0xffff < (longlong)local_f8 - (ulonglong)uVar11) break;
                                      local_128 = (ulonglong *)
                                                  ((ulonglong)uVar11 + (longlong)local_200);
                                      puVar36 = (ulonglong *)(uVar57 & 0xffffffff);
                                    }
                                    uVar22 = (uint)*(ushort *)
                                                    ((longlong)local_1e0 +
                                                    (ulonglong)(uVar11 & 0xffff) * 2 + 0x20000);
                                    puVar48 = local_210;
                                    if (uVar11 < uVar22) break;
                                    uVar54 = uVar11 - uVar22;
                                  }
                                }
                                else {
                                  uVar54 = (uVar22 - (int)uVar18) + (int)uVar49;
                                  if (0xfffffffc < uVar54 - uVar12) {
                                    uVar54 = uVar12;
                                  }
                                }
                                local_218 = (ulonglong *)CONCAT44(local_218._4_4_,2);
                                iVar44 = 0;
                                puVar48 = local_210;
                                goto LAB_14273d17a;
                              }
                            }
                          }
LAB_14273d164:
                          uVar54 = iVar26 - (uint)*(ushort *)
                                                   ((longlong)param_1 +
                                                   (ulonglong)(iVar44 + iVar26 & 0xffff) * 2 +
                                                   0x20000);
                        }
LAB_14273d17a:
                        if ((uVar54 < uVar46) ||
                           (bVar61 = (int)uVar10 < 2, uVar10 = uVar9, uVar22 = uVar54, bVar61))
                        break;
                      } while( true );
                    }
                  }
                  if ((0 < (int)uVar9) && (uVar59 - uVar46 < 0xffff)) {
                    local_218 = (ulonglong *)
                                ((*(longlong *)(local_f0 + 0x40000) -
                                 *(longlong *)(&DAT_00040008 + local_f0)) +
                                (ulonglong)*(uint *)(local_f0 + 0x40018));
                    uVar22 = *(uint *)(local_f0 +
                                      (ulonglong)((uint)*puVar30 * -0x61c8864f >> 0x11) * 4);
                    uVar46 = (uVar46 + uVar22) - (int)local_218;
                    if (uVar59 - uVar46 < 0x10000) {
                      local_1f8 = (ulonglong *)
                                  (*(longlong *)(&DAT_00040008 + local_f0) -
                                  (ulonglong)*(uint *)(local_f0 + 0x40018));
                      do {
                        bVar62 = uVar9 == 0;
                        uVar9 = uVar9 - 1;
                        if (bVar62) break;
                        uVar18 = (ulonglong)uVar22;
                        if (*(uint *)((longlong)local_1f8 + uVar18) == uVar42) {
                          puVar56 = (ulonglong *)
                                    (((longlong)local_218 - uVar18) + (longlong)puVar30);
                          if (local_1e8 < puVar56) {
                            puVar56 = local_1e8;
                          }
                          puVar28 = (ulonglong *)((longlong)local_1f8 + uVar18 + 4);
                          puVar38 = (ulonglong *)((longlong)puVar56 + -7);
                          puVar50 = puVar27;
                          if (puVar27 < puVar38) {
                            uVar35 = *puVar27 ^ *puVar28;
                            if (uVar35 == 0) {
                              uVar10 = 0x40;
                            }
                            else {
                              lVar14 = 0;
                              if (uVar35 != 0) {
                                for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                }
                              }
                              uVar10 = (uint)lVar14;
                            }
                            if (*puVar28 == *puVar27) {
                              puVar50 = (ulonglong *)((longlong)puVar30 + 0xc);
                              puVar28 = (ulonglong *)((longlong)local_1f8 + uVar18 + 0xc);
                              puVar48 = local_210;
                              goto LAB_14273da6e;
                            }
                            uVar10 = uVar10 >> 3;
                            puVar48 = local_210;
                          }
                          else {
LAB_14273da6e:
                            if (puVar50 < puVar38) {
                              iVar44 = iVar34 + (int)puVar50;
LAB_14273da86:
                              if (*puVar28 == *puVar50) goto code_r0x00014273da91;
                              uVar18 = *puVar50 ^ *puVar28;
                              if (uVar18 == 0) {
                                uVar10 = 0x40;
                              }
                              else {
                                lVar14 = 0;
                                if (uVar18 != 0) {
                                  for (; (uVar18 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                                  }
                                }
                                uVar10 = (uint)lVar14;
                              }
                              uVar10 = (uVar10 >> 3) + iVar44;
                              goto LAB_14273db01;
                            }
LAB_14273db64:
                            if ((puVar50 < (ulonglong *)((longlong)puVar56 + -3)) &&
                               ((uint)*puVar28 == (uint)*puVar50)) {
                              puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                              puVar28 = (ulonglong *)((longlong)puVar28 + 4);
                            }
                            if ((puVar50 < (ulonglong *)((longlong)puVar56 + -1)) &&
                               ((short)*puVar28 == (short)*puVar50)) {
                              puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                              puVar28 = (ulonglong *)((longlong)puVar28 + 2);
                            }
                            if (puVar50 < puVar56) {
                              puVar50 = (ulonglong *)
                                        ((longlong)puVar50 +
                                        (ulonglong)((char)*puVar28 == (char)*puVar50));
                            }
                            uVar10 = (int)puVar50 - (int)local_170;
                          }
LAB_14273db01:
                          if ((int)puVar36 < (int)(uVar10 + 4)) {
                            local_128 = (ulonglong *)((ulonglong)uVar46 + (longlong)local_200);
                            puVar36 = (ulonglong *)(ulonglong)(uVar10 + 4);
                          }
                        }
                        uVar10 = (uint)*(ushort *)
                                        (local_f0 + 0x20000 + (ulonglong)(uVar22 & 0xffff) * 2);
                        uVar22 = uVar22 - uVar10;
                        uVar46 = uVar46 - uVar10;
                      } while (uVar59 - uVar46 < 0x10000);
                    }
                  }
                  if ((int)uVar37 < (int)puVar36) {
                    uVar18 = (longlong)puVar36 << 0x20;
                    if ((int)puVar36 - 0x13U < 0x12) {
                      uVar18 = 0x1200000000;
                    }
                    if ((char)local_1b0 == '\0') {
                      uVar18 = (longlong)puVar36 << 0x20;
                    }
                    puVar27 = local_128;
                    if (uVar18 != 0) goto LAB_14273dc71;
                  }
LAB_14273dd72:
                  local_170 = (uint *)((longlong)puVar30 + 4);
                  local_b8 = pcVar24;
                }
                local_160 = (char *)(ulonglong)(iVar34 - 1);
                local_118 = (ulonglong *)((longlong)local_118 + 1);
                local_110 = local_110 + 2;
                local_a8 = local_a8 + 2;
                local_178 = (ulonglong *)((longlong)local_178 + 1);
                puVar30 = (ulonglong *)((longlong)puVar19 + 1);
              } while ((ulonglong *)((longlong)puVar19 + 1) < local_1c8);
              puVar27 = (ulonglong *)
                        (ulonglong)*(uint *)((longlong)local_1a0 + (longlong)local_1c8 * 0x10 + 4);
              uVar35 = (ulonglong)(uint)local_1a0[(longlong)local_1c8 * 2 + 1];
              iVar23 = (int)local_1c8;
              puVar19 = (ulonglong *)
                        (ulonglong)(iVar23 - (uint)local_1a0[(longlong)local_1c8 * 2 + 1]);
LAB_14273e103:
              do {
                iVar7 = (int)puVar19;
                lVar14 = (longlong)iVar7;
                uVar12 = (uint)local_1a0[lVar14 * 2 + 1];
                uVar41 = uVar12;
                if (iVar7 < (int)uVar12) {
                  uVar41 = 0;
                }
                uVar33 = *(uint *)((longlong)local_1a0 + lVar14 * 0x10 + 4);
                puVar19 = (ulonglong *)(ulonglong)(iVar7 - uVar41);
                *(uint *)(local_1a0 + lVar14 * 2 + 1) = (uint)uVar35;
                *(int *)((longlong)local_1a0 + lVar14 * 0x10 + 4) = (int)puVar27;
                uVar35 = (ulonglong)uVar12;
                puVar27 = (ulonglong *)(ulonglong)uVar33;
              } while ((int)uVar12 <= iVar7);
              if (0 < iVar23) {
                iVar34 = 0;
                iVar7 = local_17c;
                do {
                  puVar30 = local_108;
                  uVar18 = puVar13[(longlong)iVar34 * 2 + 1];
                  lVar14 = (longlong)(int)(uint)uVar18;
                  if (lVar14 == 1) {
                    puVar31 = (ulonglong *)((longlong)puVar31 + 1);
                    iVar34 = iVar34 + 1;
                  }
                  else {
                    uVar35 = (longlong)puVar31 - (longlong)param_2;
                    local_1a8 = (ulonglong *)0x0;
                    uVar45 = *(undefined4 *)((longlong)puVar13 + (longlong)iVar34 * 0x10 + 4);
                    local_188 = puVar31;
                    if ((iVar7 != 0) &&
                       (local_120 < (ulonglong *)((longlong)local_108 + uVar35 + uVar35 / 0xff + 9))
                       ) goto LAB_142742137;
                    puVar31 = (ulonglong *)((longlong)local_108 + 1);
                    if (uVar35 < 0xf) {
                      *(char *)local_108 = (char)uVar35 << 4;
                    }
                    else {
                      uVar49 = uVar35 - 0xf;
                      *(char *)local_108 = -0x10;
                      if (0xfe < uVar49) {
                        uVar49 = (uVar35 - 0x10e) / 0xff;
                        local_1b8 = (ulonglong *)CONCAT44(local_1b8._4_4_,uVar45);
                        local_1c0 = param_2;
                        memset(puVar31,(int)CONCAT71((int7)((uVar35 - 0x10e) / 0x1fe),0xff),
                               uVar49 + 1);
                        puVar31 = (ulonglong *)((longlong)puVar30 + uVar49 + 2);
                        uVar49 = (uVar49 * -0xff + uVar35) - 0x10e;
                        puVar13 = local_1a0;
                        param_2 = local_1c0;
                        uVar45 = local_1b8._0_4_;
                      }
                      *(char *)puVar31 = (char)uVar49;
                      puVar31 = (ulonglong *)((longlong)puVar31 + 1);
                    }
                    iVar34 = iVar34 + (uint)uVar18;
                    puVar30 = (ulonglong *)(uVar35 + (longlong)puVar31);
                    do {
                      *puVar31 = *param_2;
                      puVar31 = puVar31 + 1;
                      param_2 = param_2 + 1;
                    } while (puVar31 < puVar30);
                    uVar18 = lVar14 - 4;
                    *(short *)puVar30 = (short)uVar45;
                    if ((local_17c != 0) &&
                       (local_120 < (ulonglong *)((longlong)puVar30 + uVar18 / 0xff + 8)))
                    goto LAB_142742137;
                    puVar27 = (ulonglong *)((longlong)puVar30 + 2);
                    if (uVar18 < 0xf) {
                      *(char *)local_108 = (char)*local_108 + (char)uVar18;
                    }
                    else {
                      *(char *)local_108 = (char)*local_108 + '\x0f';
                      uVar18 = lVar14 - 0x13;
                      if (0x1fd < uVar18) {
                        uVar18 = (lVar14 - 0x211U) / 0x1fe;
                        memset(puVar27,(int)CONCAT71((int7)((lVar14 - 0x211U) / 0x1fe),0xff),
                               uVar18 * 2 + 2);
                        puVar27 = (ulonglong *)(uVar18 * 2 + 4 + (longlong)puVar30);
                        uVar18 = (uVar18 * -0x1fe + lVar14) - 0x211;
                        puVar13 = local_1a0;
                      }
                      if (0xfe < uVar18) {
                        uVar18 = uVar18 - 0xff;
                        *(char *)puVar27 = -1;
                        puVar27 = (ulonglong *)((longlong)puVar27 + 1);
                      }
                      *(char *)puVar27 = (char)uVar18;
                      puVar27 = (ulonglong *)((longlong)puVar27 + 1);
                    }
                    puVar31 = (ulonglong *)((longlong)local_188 + lVar14);
                    param_2 = puVar31;
                    iVar7 = local_17c;
                    local_108 = puVar27;
                  }
                } while (iVar34 < iVar23);
              }
            }
          }
        } while (puVar31 <= puVar48);
      }
      puVar58 = local_58;
      puVar48 = local_108;
      uVar18 = (longlong)local_c0 - (longlong)param_2;
      if ((local_17c == 0) ||
         (local_1a8 = (ulonglong *)0x0,
         (ulonglong *)((longlong)local_108 + uVar18 + (uVar18 + 0xf0) / 0xff + 1) <= local_120)) {
        pcVar24 = (char *)((longlong)local_108 + 1);
        if (uVar18 < 0xf) {
          *(char *)local_108 = (char)uVar18 << 4;
        }
        else {
          uVar35 = uVar18 - 0xf;
          *(char *)local_108 = -0x10;
          pcVar15 = pcVar24;
          if (0xfe < uVar35) {
            uVar35 = (uVar18 - 0x10e) / 0xff;
            memset(pcVar24,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
            pcVar15 = (char *)((longlong)puVar48 + uVar35 + 2);
            puVar48 = (ulonglong *)((longlong)puVar48 + uVar35 + 1);
            uVar35 = (uVar18 + uVar35 * -0xff) - 0x10e;
          }
          pcVar24 = (char *)((longlong)puVar48 + 2);
          *pcVar15 = (char)uVar35;
        }
        uVar12 = local_94;
        memcpy(pcVar24,param_2,uVar18);
        *puVar58 = uVar12;
        local_1a8 = (ulonglong *)(ulonglong)(uint)(((int)pcVar24 + (int)uVar18) - (int)local_70);
        puVar13 = local_1a0;
      }
    }
LAB_142742137:
    free(puVar13);
    puVar13 = local_1a8;
LAB_142742148:
    if (0 < (int)puVar13) goto LAB_142742155;
  }
LAB_14274214d:
  *(undefined1 *)((longlong)param_1 + 0x40027) = 1;
LAB_142742155:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar13 & 0xffffffff;
code_r0x00014273e7dc:
  puVar27 = puVar27 + 1;
  puVar31 = puVar31 + 1;
  iVar23 = iVar23 + 8;
  if (puVar48 <= puVar27) goto LAB_14273e7ed;
  goto LAB_14273e7d1;
code_r0x00014273e73a:
  puVar31 = puVar31 + 1;
  puVar27 = puVar27 + 1;
  iVar23 = iVar23 + 8;
  if (puVar48 <= puVar31) goto LAB_14273e74b;
  goto LAB_14273e72f;
code_r0x00014273e924:
  puVar48 = puVar48 + 1;
  puVar31 = puVar31 + 1;
  iVar44 = iVar44 + 8;
  if (local_210 <= puVar48) goto LAB_14273e935;
  goto LAB_14273e915;
code_r0x00014273eb52:
  puVar13 = puVar13 + 1;
  if (puVar48 <= puVar13) goto LAB_14273eb5e;
  goto LAB_14273eb4a;
code_r0x00014273eaec:
  puVar36 = puVar36 + 1;
  pcVar24 = pcVar24 + 8;
  if ((ulonglong *)((longlong)puVar27 + -7) <= puVar36) goto LAB_14273eaf9;
  goto LAB_14273eae0;
code_r0x00014273ec37:
  puVar27 = puVar27 + 1;
  if (puVar48 <= puVar27) goto LAB_14273ed90;
  goto LAB_14273ec2f;
code_r0x00014273efdd:
  puVar27 = puVar27 + 1;
  puVar19 = puVar19 + 1;
  iVar34 = iVar34 + 8;
  if (puVar31 <= puVar27) goto LAB_14273efee;
  goto LAB_14273efd2;
LAB_14273f162:
  local_100 = local_208;
  local_120 = (ulonglong *)((ulonglong)local_1b0 & 0xffffffff);
  pvVar53 = local_1e0;
  uVar12 = (uint)local_1b0;
  local_148 = param_3;
  local_e8 = puVar30;
LAB_14273f181:
  puVar31 = local_148;
  local_b0 = (uint *)(longlong)(int)local_120;
  param_1 = pvVar53;
  uVar41 = uVar12;
  while( true ) {
    puVar27 = puVar30;
    local_130 = local_208;
    puVar13 = (ulonglong *)(ulonglong)uVar41;
    puVar30 = (ulonglong *)(longlong)(int)uVar41;
    local_128 = (ulonglong *)((longlong)puVar27 + (longlong)puVar30);
    if (puVar48 < local_128) break;
    local_1a0 = (ulonglong *)((longlong)local_128 + -2);
    local_178 = *(ulonglong **)((longlong)param_1 + 0x40008);
    uVar33 = *(uint *)((longlong)param_1 + 0x40018);
    local_218 = (ulonglong *)(ulonglong)uVar33;
    puVar19 = (ulonglong *)((longlong)local_1a0 - (longlong)local_178);
    uVar46 = uVar33 + (int)puVar19;
    uVar17 = *(uint *)((longlong)param_1 + 0x4001c);
    local_138 = (ulonglong)uVar17;
    uVar25 = (uVar33 - 0xffff) + (int)puVar19;
    if (uVar46 < uVar17 + 0x10000) {
      uVar25 = uVar17;
    }
    uVar59 = *(uint *)((longlong)local_128 + -2);
    local_1a8 = (ulonglong *)(ulonglong)uVar59;
    uVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x40020);
    local_160 = (char *)CONCAT44(local_160._4_4_,uVar46);
    if (*(uint *)((longlong)param_1 + 0x40020) < uVar46) {
      do {
        uVar35 = (ulonglong)
                 ((uint)(*(int *)((longlong)local_178 + (uVar18 - (longlong)local_218)) *
                        -0x61c8864f) >> 0x11);
        uVar12 = (uint)uVar18;
        uVar42 = uVar12 - *(int *)((longlong)param_1 + uVar35 * 4);
        if (0xfffe < uVar42) {
          uVar42 = 0xffff;
        }
        *(short *)((longlong)param_1 + (ulonglong)(uVar12 & 0xffff) * 2 + 0x20000) = (short)uVar42;
        *(uint *)((longlong)param_1 + uVar35 * 4) = uVar12;
        uVar18 = uVar18 + 1;
      } while (uVar46 != uVar18);
    }
    local_170 = *(uint **)((longlong)param_1 + 0x40028);
    local_200 = *(ulonglong **)((longlong)param_1 + 0x40010);
    *(uint *)((longlong)param_1 + 0x40020) = uVar46;
    local_190 = (ulonglong *)((longlong)local_1a0 - (longlong)puVar27);
    uVar8 = *(uint *)((longlong)param_1 + (ulonglong)(*(uint *)local_1a0 * -0x61c8864f >> 0x11) * 4)
    ;
    puVar36 = (ulonglong *)(ulonglong)uVar8;
    uVar12 = uVar41;
    uVar42 = local_194;
    local_220 = local_1d8;
    if ((uVar25 <= uVar8) && (local_e0 = puVar19, 0 < (int)local_194)) {
      local_80 = (ulonglong *)((longlong)local_218 - local_138);
      local_140 = (ulonglong *)((longlong)local_200 + (longlong)local_80);
      local_e0 = (ulonglong *)((longlong)puVar19 + (longlong)local_218);
      local_1f8 = (ulonglong *)((longlong)local_178 - (longlong)local_218);
      local_f0 = -(longlong)(int)local_190;
      lVar14 = (longlong)puVar27 - (longlong)local_1a0;
      local_1f0 = (ulonglong *)((longlong)local_128 + 2);
      local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,uVar33 - 4);
      bVar62 = uVar59 >> 0x18 == (uVar59 & 0xff);
      bVar5 = uVar59 >> 0x10 == (uVar59 & 0xffff);
      local_a0 = (ulonglong *)CONCAT71(local_a0._1_7_,bVar62 && bVar5);
      uVar18 = (longlong)local_1a8 * 0x100000001;
      local_158 = (ulonglong *)((longlong)local_200 - local_138);
      local_108 = (ulonglong *)((longlong)local_1f8 + -1);
      local_1b8 = (ulonglong *)((char *)((longlong)puVar27 + -3) + (longlong)puVar30);
      uVar22 = (-2 - uVar41) - (int)puVar27;
      local_b8 = (char *)(ulonglong)uVar22;
      local_a8 = (ulonglong *)((char *)((longlong)puVar30 + (longlong)puVar27) + -2);
      local_78 = (char *)((longlong)local_200 + -1);
      local_1e8 = (ulonglong *)0x0;
      uVar35 = 0;
      uVar8 = local_194;
      do {
        uVar9 = (uint)puVar36;
        uVar42 = uVar33 - uVar9;
        if (uVar33 < uVar9 || uVar42 == 0) {
          puVar58 = (uint *)((longlong)local_1f8 + (longlong)puVar36);
          if ((*(short *)((longlong)puVar27 + (longlong)(int)uVar12 + -1) !=
               *(short *)((longlong)puVar58 + (longlong)(int)uVar12 + -1 + local_f0)) ||
             (*puVar58 != uVar59)) goto LAB_14273f94e;
          local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,uVar12);
          if ((int)local_190 == 0) {
            uVar42 = 0;
          }
          else {
            lVar20 = (longlong)local_178 - (longlong)puVar58;
            if ((longlong)local_178 - (longlong)puVar58 < lVar14) {
              lVar20 = lVar14;
            }
            uVar10 = (uint)lVar20;
            uVar37 = 1;
            lVar20 = 0;
            do {
              uVar42 = (int)uVar10 >> 0x1f & uVar10;
              if (lVar20 <= (int)uVar10) break;
              pcVar24 = (char *)((longlong)local_1b8 + lVar20);
              uVar37 = uVar37 - 1;
              pcVar15 = (char *)((longlong)puVar36 + (longlong)local_108) + lVar20;
              lVar20 = lVar20 + -1;
              puVar48 = local_210;
              uVar42 = uVar37;
            } while (*pcVar24 == *pcVar15);
          }
          puVar19 = (ulonglong *)(puVar58 + 1);
          puVar56 = local_1f0;
          if (local_1f0 < puVar48) {
            uVar49 = *local_1f0 ^ *puVar19;
            if (uVar49 == 0) {
              uVar37 = 0x40;
            }
            else {
              lVar20 = 0;
              if (uVar49 != 0) {
                for (; (uVar49 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                }
              }
              uVar37 = (uint)lVar20;
            }
            if (*puVar19 == *local_1f0) {
              puVar56 = (ulonglong *)((longlong)local_128 + 10);
              puVar19 = (ulonglong *)(puVar58 + 3);
              puVar48 = local_210;
              goto LAB_14273f7e4;
            }
            uVar37 = uVar37 >> 3;
            puVar48 = local_210;
          }
          else {
LAB_14273f7e4:
            if (puVar56 < puVar48) {
              iVar7 = uVar22 + (int)puVar56;
LAB_14273f7f5:
              if (*puVar19 == *puVar56) goto code_r0x00014273f800;
              uVar49 = *puVar56 ^ *puVar19;
              if (uVar49 == 0) {
                uVar37 = 0x40;
              }
              else {
                lVar20 = 0;
                if (uVar49 != 0) {
                  for (; (uVar49 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                  }
                }
                uVar37 = (uint)lVar20;
              }
              uVar37 = (uVar37 >> 3) + iVar7;
              goto LAB_14273f868;
            }
LAB_14273f810:
            if ((puVar56 < local_c0) && ((uint)*puVar19 == (uint)*puVar56)) {
              puVar56 = (ulonglong *)((longlong)puVar56 + 4);
              puVar19 = (ulonglong *)((longlong)puVar19 + 4);
            }
            if ((puVar56 < local_c8) && ((short)*puVar19 == (short)*puVar56)) {
              puVar56 = (ulonglong *)((longlong)puVar56 + 2);
              puVar19 = (ulonglong *)((longlong)puVar19 + 2);
            }
            if (puVar56 < local_1c8) {
              puVar56 = (ulonglong *)
                        ((longlong)puVar56 + (ulonglong)((char)*puVar19 == (char)*puVar56));
            }
            uVar37 = (int)puVar56 - (int)local_1f0;
          }
LAB_14273f868:
          uVar37 = (uVar37 - uVar42) + 4;
          if ((int)uVar12 < (int)uVar37) {
            local_150 = (ulonglong *)((longlong)puVar58 + (longlong)(int)uVar42);
            local_220 = (ulonglong *)((longlong)(int)uVar42 + (longlong)local_1a0);
            uVar12 = uVar37;
          }
        }
        else if (uVar9 <= uVar33 - 4) {
          uVar49 = (ulonglong)(uVar9 - uVar17);
          puVar58 = (uint *)((longlong)local_200 + uVar49);
          if (*puVar58 == uVar59) {
            puVar48 = (ulonglong *)((longlong)local_1a0 + (ulonglong)uVar42);
            if (local_1c8 < puVar48) {
              puVar48 = local_1c8;
            }
            puVar38 = (ulonglong *)(puVar58 + 1);
            puVar19 = (ulonglong *)((longlong)puVar48 + -7);
            local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,uVar12);
            puVar56 = local_1f0;
            if (local_1f0 < puVar19) {
              uVar57 = *local_1f0 ^ *puVar38;
              if (uVar57 == 0) {
                uVar37 = 0x40;
              }
              else {
                lVar20 = 0;
                if (uVar57 != 0) {
                  for (; (uVar57 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                  }
                }
                uVar37 = (uint)lVar20;
              }
              if (*puVar38 == *local_1f0) {
                puVar56 = (ulonglong *)((longlong)local_128 + 10);
                puVar38 = (ulonglong *)(puVar58 + 3);
                goto LAB_14273f5b9;
              }
              uVar37 = uVar37 >> 3;
            }
            else {
LAB_14273f5b9:
              if (puVar56 < puVar19) {
                iVar7 = uVar22 + (int)puVar56;
LAB_14273f5ca:
                if (*puVar38 == *puVar56) goto code_r0x00014273f5d5;
                uVar57 = *puVar56 ^ *puVar38;
                if (uVar57 == 0) {
                  uVar37 = 0x40;
                }
                else {
                  lVar20 = 0;
                  if (uVar57 != 0) {
                    for (; (uVar57 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                    }
                  }
                  uVar37 = (uint)lVar20;
                }
                uVar37 = (uVar37 >> 3) + iVar7;
                goto LAB_14273f649;
              }
LAB_14273f5e5:
              if ((puVar56 < (ulonglong *)((longlong)puVar48 + -3)) &&
                 ((uint)*puVar38 == (uint)*puVar56)) {
                puVar56 = (ulonglong *)((longlong)puVar56 + 4);
                puVar38 = (ulonglong *)((longlong)puVar38 + 4);
              }
              if ((puVar56 < (ulonglong *)((longlong)puVar48 + -1)) &&
                 ((short)*puVar38 == (short)*puVar56)) {
                puVar56 = (ulonglong *)((longlong)puVar56 + 2);
                puVar38 = (ulonglong *)((longlong)puVar38 + 2);
              }
              if (puVar56 < puVar48) {
                puVar56 = (ulonglong *)
                          ((longlong)puVar56 + (ulonglong)((char)*puVar38 == (char)*puVar56));
              }
              uVar37 = (int)puVar56 - (int)local_1f0;
            }
LAB_14273f649:
            iVar7 = uVar37 + 4;
            if ((puVar48 < local_1c8) &&
               (puVar19 = (ulonglong *)((longlong)local_1a0 + (longlong)(int)uVar37 + 4),
               puVar19 == puVar48)) {
              puVar56 = local_178;
              if (puVar48 < local_210) {
                uVar57 = *puVar19 ^ *local_178;
                if (uVar57 == 0) {
                  uVar10 = 0x40;
                }
                else {
                  lVar20 = 0;
                  if (uVar57 != 0) {
                    for (; (uVar57 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                    }
                  }
                  uVar10 = (uint)lVar20;
                }
                if (*local_178 == *puVar19) {
                  puVar19 = (ulonglong *)((longlong)local_1a0 + (longlong)(int)uVar37 + 0xc);
                  puVar56 = local_178 + 1;
                  goto LAB_14273f6c7;
                }
                uVar10 = uVar10 >> 3;
              }
              else {
LAB_14273f6c7:
                if (puVar19 < local_210) {
                  puVar38 = (ulonglong *)((ulonglong)uVar42 + (longlong)local_a8);
                  if (local_1c8 <= puVar38) {
                    puVar38 = local_1c8;
                  }
                  iVar34 = (int)puVar19 - (int)puVar38;
LAB_14273f6e9:
                  if (*puVar56 == *puVar19) goto code_r0x00014273f6f9;
                  uVar57 = *puVar19 ^ *puVar56;
                  if (uVar57 == 0) {
                    uVar42 = 0x40;
                  }
                  else {
                    lVar20 = 0;
                    if (uVar57 != 0) {
                      for (; (uVar57 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                      }
                    }
                    uVar42 = (uint)lVar20;
                  }
                  uVar10 = (uVar42 >> 3) + iVar34;
                  goto LAB_14273f8ad;
                }
LAB_14273f709:
                if ((puVar19 < local_c0) && ((uint)*puVar56 == (uint)*puVar19)) {
                  puVar19 = (ulonglong *)((longlong)puVar19 + 4);
                  puVar56 = (ulonglong *)((longlong)puVar56 + 4);
                }
                if ((puVar19 < local_c8) && ((short)*puVar56 == (short)*puVar19)) {
                  puVar19 = (ulonglong *)((longlong)puVar19 + 2);
                  puVar56 = (ulonglong *)((longlong)puVar56 + 2);
                }
                if (puVar19 < local_1c8) {
                  puVar19 = (ulonglong *)
                            ((longlong)puVar19 + (ulonglong)((char)*puVar56 == (char)*puVar19));
                }
                uVar10 = (int)puVar19 - (int)puVar48;
              }
LAB_14273f8ad:
              iVar7 = iVar7 + uVar10;
            }
            if ((int)local_190 == 0) {
              uVar42 = 0;
            }
            else {
              lVar20 = -uVar49;
              if ((longlong)-uVar49 < lVar14) {
                lVar20 = lVar14;
              }
              uVar37 = (uint)lVar20;
              uVar10 = 1;
              lVar20 = 0;
              do {
                uVar42 = (int)uVar37 >> 0x1f & uVar37;
                if (lVar20 <= (int)uVar37) break;
                pcVar24 = (char *)((longlong)local_1b8 + lVar20);
                uVar10 = uVar10 - 1;
                lVar1 = lVar20 + uVar49;
                lVar20 = lVar20 + -1;
                uVar42 = uVar10;
              } while (*pcVar24 == local_78[lVar1]);
            }
            puVar48 = local_210;
            param_1 = local_1e0;
            if ((int)uVar12 < (int)(iVar7 - uVar42)) {
              local_150 = (ulonglong *)
                          ((char *)((longlong)puVar36 + (longlong)local_1f8) + (int)uVar42);
              local_220 = (ulonglong *)((longlong)(int)uVar42 + (longlong)local_1a0);
              uVar12 = iVar7 - uVar42;
            }
          }
        }
LAB_14273f94e:
        uVar42 = uVar8 - 1;
        uVar2 = *(ushort *)((longlong)param_1 + ((ulonglong)puVar36 & 0xffff) * 2 + 0x20000);
        if (((int)local_194 < 0x81) || (uVar2 != 1)) {
LAB_14273fb01:
          uVar37 = (uint)uVar2;
LAB_14273fb05:
          puVar36 = (ulonglong *)(ulonglong)(uVar9 - uVar37);
        }
        else {
          if ((int)local_1e8 == 0) {
            local_1e8 = (ulonglong *)&DAT_00000001;
            if (!bVar62 || !bVar5) goto LAB_14273fb01;
            puVar19 = local_1f0;
            uVar35 = uVar18;
            if (local_1f0 < puVar48) {
LAB_14273fab6:
              if (*puVar19 == uVar18) goto code_r0x00014273fabe;
              uVar35 = *puVar19 ^ uVar18;
              if (uVar35 == 0) {
                uVar37 = 0x40;
              }
              else {
                lVar20 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                  }
                }
                uVar37 = (uint)lVar20;
              }
              puVar19 = (ulonglong *)((longlong)puVar19 + (ulonglong)(uVar37 >> 3));
              goto LAB_14273fb9d;
            }
LAB_14273faca:
            for (; (puVar19 < local_1c8 && ((char)*puVar19 == (char)uVar35));
                puVar19 = (ulonglong *)((longlong)puVar19 + 1)) {
              uVar35 = uVar35 >> 8;
            }
LAB_14273fb9d:
            uVar35 = (ulonglong)(uint)((int)puVar19 - (int)local_1f0) + 4;
            local_1e8 = (ulonglong *)0x2;
          }
          uVar37 = uVar9 - 1;
          if (((0xfffffffc < uVar37 - uVar33) || ((int)local_1e8 != 2)) || (uVar37 < uVar25))
          goto LAB_14273fb01;
          puVar19 = local_158;
          if (uVar33 <= uVar37) {
            puVar19 = local_1f8;
          }
          uVar49 = (ulonglong)uVar37;
          local_1e8 = (ulonglong *)0x2;
          param_1 = local_1e0;
          local_1b0 = puVar36;
          if (*(uint *)((longlong)puVar19 + uVar49) != uVar59) goto LAB_14273fb01;
          local_1b0 = (ulonglong *)(ulonglong)uVar12;
          puVar36 = (ulonglong *)(uVar49 + (longlong)puVar19);
          puVar56 = local_140;
          if (uVar33 <= uVar37) {
            puVar56 = local_1c8;
          }
          puVar38 = (ulonglong *)((longlong)puVar36 + 4);
          puVar50 = puVar38;
          if (puVar38 < (ulonglong *)((longlong)puVar56 + -7)) {
            pcVar24 = (char *)((longlong)puVar19 + uVar49 + 4);
LAB_14273fa43:
            if (*puVar50 == uVar18) goto code_r0x00014273fa4f;
            uVar49 = *puVar50 ^ uVar18;
            if (uVar49 == 0) {
              uVar9 = 0x40;
            }
            else {
              lVar20 = 0;
              if (uVar49 != 0) {
                for (; (uVar49 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                }
              }
              uVar9 = (uint)lVar20;
            }
            puVar19 = (ulonglong *)(pcVar24 + (uVar9 >> 3));
            goto LAB_14273fb4e;
          }
LAB_14273fa5c:
          puVar19 = puVar50;
          if (puVar50 < puVar56) {
            lVar20 = (longlong)puVar56 - (longlong)puVar50;
            uVar49 = uVar18;
            do {
              puVar19 = puVar50;
              if ((char)*puVar50 != (char)uVar49) break;
              puVar50 = (ulonglong *)((longlong)puVar50 + 1);
              uVar49 = uVar49 >> 8;
              lVar20 = lVar20 + -1;
              puVar19 = puVar56;
            } while (lVar20 != 0);
          }
LAB_14273fb4e:
          uVar57 = (longlong)puVar19 - (longlong)puVar38;
          uVar49 = (uVar57 & 0xffffffff) + 4;
          puVar19 = local_178;
          if ((uVar37 < uVar33) &&
             (puVar19 = local_200, (ulonglong *)((longlong)puVar36 + uVar49) == local_140)) {
            bVar4 = (char)uVar57 * '\b' & 0x1f;
            puVar56 = (ulonglong *)(ulonglong)(uVar59 << bVar4 | uVar59 >> 0x20 - bVar4);
            if ((uVar57 & 3) == 0) {
              puVar56 = local_1a8;
            }
            uVar57 = (longlong)puVar56 * 0x100000001;
            puVar56 = local_178;
            if (local_178 < puVar48) {
LAB_14273fbf4:
              if (*puVar56 == uVar57) goto code_r0x00014273fbfc;
              uVar57 = *puVar56 ^ uVar57;
              if (uVar57 == 0) {
                uVar9 = 0x40;
              }
              else {
                lVar20 = 0;
                if (uVar57 != 0) {
                  for (; (uVar57 >> lVar20 & 1) == 0; lVar20 = lVar20 + 1) {
                  }
                }
                uVar9 = (uint)lVar20;
              }
              puVar56 = (ulonglong *)((longlong)puVar56 + (ulonglong)(uVar9 >> 3));
              goto LAB_14273fc20;
            }
LAB_14273fd73:
            for (; (puVar56 < local_1c8 && ((char)*puVar56 == (char)uVar57));
                puVar56 = (ulonglong *)((longlong)puVar56 + 1)) {
              uVar57 = uVar57 >> 8;
            }
LAB_14273fc20:
            uVar49 = uVar49 + (uint)((int)puVar56 - (int)local_178);
          }
          puVar48 = puVar36;
          do {
            puVar56 = puVar48;
            if (puVar56 < (ulonglong *)((longlong)puVar19 + 4)) break;
            puVar48 = (ulonglong *)((longlong)puVar56 + -4);
          } while (*(uint *)((longlong)puVar56 + -4) == uVar59);
          puVar48 = puVar56;
          if (puVar19 < puVar56) {
            lVar20 = 0;
            do {
              if (*(char *)((longlong)puVar56 + lVar20 + -1) !=
                  *(char *)((longlong)&local_4c + lVar20 + 3)) {
                puVar48 = (ulonglong *)((longlong)puVar56 + lVar20);
                break;
              }
              lVar1 = lVar20 + -1;
              lVar20 = lVar20 + -1;
              puVar48 = puVar19;
            } while (puVar19 < (ulonglong *)((longlong)puVar56 + lVar1));
          }
          uVar57 = (longlong)puVar36 - (longlong)puVar48;
          iVar7 = (int)uVar57;
          local_4c = uVar59;
          if ((uVar17 < uVar33 && uVar33 <= uVar37) &&
              (ulonglong *)((longlong)puVar36 - (uVar57 & 0xffffffff)) == local_178) {
            bVar4 = (char)uVar57 * -8 & 0x1f;
            puVar48 = local_140;
            puVar19 = local_80;
            local_4c = uVar59 << bVar4 | uVar59 >> 0x20 - bVar4;
            if ((-iVar7 & 3U) == 0) {
              local_4c = uVar59;
            }
            do {
              puVar36 = puVar48;
              if ((longlong)puVar19 < 4) {
                if ((longlong)puVar19 < 1) goto LAB_14273fddf;
                break;
              }
              puVar48 = (ulonglong *)((longlong)puVar36 + -4);
              puVar19 = (ulonglong *)((longlong)puVar19 + -4);
            } while (*(uint *)((longlong)puVar36 + -4) == local_4c);
            pcVar24 = (char *)((longlong)&local_4c + 3);
            do {
              if (*(char *)((longlong)puVar36 + -1) != *pcVar24) break;
              puVar36 = (ulonglong *)((longlong)puVar36 + -1);
              pcVar24 = pcVar24 + -1;
            } while (local_200 < puVar36);
LAB_14273fddf:
            iVar7 = ((int)local_140 - (int)puVar36) + iVar7;
          }
          uVar9 = uVar37 - iVar7;
          if (uVar37 - iVar7 <= uVar25) {
            uVar9 = uVar25;
          }
          uVar57 = (uVar37 - uVar9) + uVar49;
          if ((uVar35 < uVar49) || (uVar57 < uVar35)) {
            local_1e8 = (ulonglong *)0x2;
            puVar36 = local_218;
            if ((0xfffffffc < uVar9 - uVar33) ||
               (puVar36 = (ulonglong *)(ulonglong)uVar9, (int)local_190 != 0)) goto LAB_14273fe5e;
            if (uVar35 <= uVar57) {
              uVar57 = uVar35;
            }
            if ((ulonglong)(longlong)(int)uVar12 < uVar57) {
              puVar48 = local_210;
              if (0xffff < (longlong)local_e0 - (ulonglong)uVar9) break;
              local_150 = (ulonglong *)((ulonglong)uVar9 + (longlong)local_1f8);
              uVar12 = (uint)uVar57;
              local_220 = local_1a0;
            }
            uVar37 = (uint)*(ushort *)((longlong)local_1e0 + (ulonglong)(ushort)uVar9 * 2 + 0x20000)
            ;
            puVar48 = local_210;
            if (uVar37 <= uVar9) goto LAB_14273fb05;
            break;
          }
          uVar9 = (uVar37 - (int)uVar35) + (int)uVar49;
          puVar36 = (ulonglong *)(ulonglong)uVar9;
          if (0xfffffffc < uVar9 - uVar33) {
            puVar36 = local_218;
          }
LAB_14273fe5e:
          local_1e8 = (ulonglong *)0x2;
          puVar48 = local_210;
        }
        if (((uint)puVar36 < uVar25) || (bVar61 = (int)uVar8 < 2, uVar8 = uVar42, bVar61)) break;
      } while( true );
    }
    local_1d8 = local_220;
    if ((int)uVar42 < 1) {
      local_208 = local_150;
    }
    else {
      if (uVar46 - uVar25 < 0xffff) {
        puVar19 = *(ulonglong **)(local_170 + 0x10002);
        local_1b8 = (ulonglong *)
                    ((*(longlong *)(local_170 + 0x10000) - (longlong)puVar19) +
                    (ulonglong)local_170[0x10006]);
        uVar33 = local_170[*(uint *)local_1a0 * -0x61c8864f >> 0x11];
        uVar17 = (uVar25 + uVar33) - (int)local_1b8;
        if (uVar46 - uVar17 < 0x10000) {
          local_200 = (ulonglong *)((longlong)puVar19 - (ulonglong)local_170[0x10006]);
          local_1b0 = (ulonglong *)((longlong)local_128 + 2);
          local_1f8 = (ulonglong *)((longlong)puVar27 - (longlong)local_1a0);
          local_178 = (ulonglong *)((longlong)local_178 - (longlong)local_218);
          uVar25 = -(uVar41 + (int)puVar27) - 2;
          local_1f0 = (ulonglong *)(ulonglong)uVar25;
          local_218 = (ulonglong *)((longlong)local_200 + -1);
          local_208 = local_150;
          do {
            bVar62 = uVar42 == 0;
            uVar42 = uVar42 - 1;
            local_1e8 = puVar19;
            if (bVar62) break;
            uVar18 = (ulonglong)uVar33;
            if (*(uint *)((longlong)local_200 + uVar18) == uVar59) {
              puVar48 = (ulonglong *)(((longlong)local_1b8 - uVar18) + (longlong)local_1a0);
              if (local_1c8 < puVar48) {
                puVar48 = local_1c8;
              }
              pcVar24 = (char *)((longlong)local_200 + uVar18);
              puVar36 = (ulonglong *)(pcVar24 + 4);
              puVar56 = (ulonglong *)((longlong)puVar48 + -7);
              puVar38 = local_1b0;
              if (local_1b0 < puVar56) {
                uVar35 = *local_1b0 ^ *puVar36;
                if (uVar35 == 0) {
                  uVar8 = 0x40;
                }
                else {
                  lVar14 = 0;
                  if (uVar35 != 0) {
                    for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                    }
                  }
                  uVar8 = (uint)lVar14;
                }
                if (*puVar36 == *local_1b0) {
                  puVar36 = (ulonglong *)(pcVar24 + 0xc);
                  puVar38 = (ulonglong *)((longlong)local_128 + 10);
                  goto LAB_1427400e3;
                }
                uVar8 = uVar8 >> 3;
              }
              else {
LAB_1427400e3:
                if (puVar38 < puVar56) {
                  iVar7 = uVar25 + (int)puVar38;
LAB_1427400f1:
                  if (*puVar36 == *puVar38) goto code_r0x0001427400fc;
                  uVar35 = *puVar38 ^ *puVar36;
                  if (uVar35 == 0) {
                    uVar8 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar35 != 0) {
                      for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar8 = (uint)lVar14;
                  }
                  uVar8 = (uVar8 >> 3) + iVar7;
                  goto LAB_142740163;
                }
LAB_14274010c:
                if ((puVar38 < (ulonglong *)((longlong)puVar48 + -3)) &&
                   ((uint)*puVar36 == (uint)*puVar38)) {
                  puVar38 = (ulonglong *)((longlong)puVar38 + 4);
                  puVar36 = (ulonglong *)((longlong)puVar36 + 4);
                }
                if ((puVar38 < (ulonglong *)((longlong)puVar48 + -1)) &&
                   ((short)*puVar36 == (short)*puVar38)) {
                  puVar38 = (ulonglong *)((longlong)puVar38 + 2);
                  puVar36 = (ulonglong *)((longlong)puVar36 + 2);
                }
                if (puVar38 < puVar48) {
                  puVar38 = (ulonglong *)
                            ((longlong)puVar38 + (ulonglong)((char)*puVar36 == (char)*puVar38));
                }
                uVar8 = (int)puVar38 - (uint)local_1b0;
              }
LAB_142740163:
              if ((int)local_190 == 0) {
                uVar22 = 0;
              }
              else {
                puVar48 = (ulonglong *)((longlong)puVar19 - (longlong)pcVar24);
                if ((longlong)puVar19 - (longlong)pcVar24 < (longlong)local_1f8) {
                  puVar48 = local_1f8;
                }
                uVar9 = (uint)puVar48;
                uVar37 = 1;
                lVar14 = 0;
                do {
                  uVar22 = (int)uVar9 >> 0x1f & uVar9;
                  if (lVar14 <= (int)uVar9) break;
                  pcVar24 = (char *)((longlong)puVar27 + -3) + (longlong)puVar30 + lVar14;
                  uVar37 = uVar37 - 1;
                  lVar20 = lVar14 + uVar18;
                  lVar14 = lVar14 + -1;
                  uVar22 = uVar37;
                } while (*pcVar24 == *(char *)((longlong)local_218 + lVar20));
              }
              uVar8 = (uVar8 + 4) - uVar22;
              puVar48 = local_210;
              if ((int)uVar12 < (int)uVar8) {
                local_208 = (ulonglong *)
                            ((longlong)local_178 + (longlong)(int)uVar22 + (ulonglong)uVar17);
                local_1d8 = (ulonglong *)((longlong)(int)uVar22 + (longlong)local_1a0);
                uVar12 = uVar8;
              }
            }
            uVar8 = (uint)*(ushort *)
                           ((longlong)local_170 + (ulonglong)(uVar33 & 0xffff) * 2 + 0x20000);
            uVar33 = uVar33 - uVar8;
            uVar17 = uVar17 - uVar8;
            param_1 = local_1e0;
          } while (uVar46 - uVar17 < 0x10000);
          goto LAB_1427402aa;
        }
      }
      local_208 = local_150;
    }
LAB_1427402aa:
    local_188 = puVar27;
    local_168 = puVar13;
    local_d8 = puVar30;
    if (uVar12 == uVar41) {
      local_150 = local_208;
      break;
    }
    bVar62 = local_1d8 < (ulonglong *)((longlong)local_b0 + (longlong)puVar27);
    puVar19 = puVar27;
    if (bVar62 && local_e8 < puVar27) {
      puVar19 = local_e8;
    }
    local_150 = local_208;
    puVar30 = local_1d8;
    uVar41 = uVar12;
    if (2 < (longlong)local_1d8 - (longlong)puVar19) goto LAB_142740318;
  }
  uVar18 = (longlong)puVar27 - (longlong)param_2;
  puVar13 = (ulonglong *)0x0;
  local_1c0 = param_2;
  if ((local_17c != 0) && (local_f8 < (char *)((longlong)local_148 + uVar18 + uVar18 / 0xff + 9)))
  goto LAB_14274214d;
  puVar19 = (ulonglong *)((longlong)local_148 + 1);
  if (uVar18 < 0xf) {
    *(char *)local_148 = (char)uVar18 << 4;
  }
  else {
    uVar35 = uVar18 - 0xf;
    *(char *)local_148 = -0x10;
    if (0xfe < uVar35) {
      uVar35 = (uVar18 - 0x10e) / 0xff;
      memset(puVar19,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
      puVar19 = (ulonglong *)((longlong)puVar31 + uVar35 + 2);
      uVar35 = (uVar35 * -0xff + uVar18) - 0x10e;
    }
    *(char *)puVar19 = (char)uVar35;
    puVar19 = (ulonglong *)((longlong)puVar19 + 1);
  }
  puVar31 = local_1c0;
  param_3 = (ulonglong *)(uVar18 + (longlong)puVar19);
  puVar36 = local_1c0;
  puVar56 = puVar19;
  do {
    *puVar56 = *puVar36;
    puVar56 = puVar56 + 1;
    puVar36 = puVar36 + 1;
  } while (puVar56 < param_3);
  puVar58 = (uint *)((longlong)puVar30 + -4);
  *(short *)param_3 = (short)puVar27 - (short)local_130;
  if ((local_17c != 0) && (local_f8 < (char *)((longlong)param_3 + (ulonglong)puVar58 / 0xff + 8)))
  goto LAB_14274214d;
  param_3 = (ulonglong *)((longlong)param_3 + 2);
  if (puVar58 < &DAT_0000000f) {
    *(char *)local_148 = (char)*local_148 + (char)puVar58;
  }
  else {
    *(char *)local_148 = (char)*local_148 + '\x0f';
    pcVar24 = (char *)((longlong)puVar30 + -0x13);
    if ((char *)0x1fd < pcVar24) {
      uVar18 = (ulonglong)((longlong)puVar30 + -0x211) / 0x1fe;
      memset(param_3,(int)CONCAT71((int7)((ulonglong)((longlong)puVar30 + -0x211) / 0x1fe),0xff),
             uVar18 * 2 + 2);
      param_3 = (ulonglong *)
                ((longlong)puVar27 +
                (longlong)((longlong)puVar19 + (uVar18 * 2 - (longlong)puVar31) + 4));
      pcVar24 = (char *)((longlong)puVar30 + uVar18 * -0x1fe + -0x211);
    }
joined_r0x000142741fc3:
    if ((char *)0xfe < pcVar24) {
      pcVar24 = pcVar24 + -0xff;
      *(char *)param_3 = -1;
      param_3 = (ulonglong *)((longlong)param_3 + 1);
    }
    *(char *)param_3 = (char)pcVar24;
    param_3 = (ulonglong *)((longlong)param_3 + 1);
  }
LAB_142741fe1:
  puVar13 = local_130;
  param_2 = local_128;
  puVar58 = local_d0;
  if (puVar48 < local_128) goto LAB_142742012;
  goto LAB_14273e463;
code_r0x00014273f800:
  puVar56 = puVar56 + 1;
  puVar19 = puVar19 + 1;
  iVar7 = iVar7 + 8;
  if (puVar48 <= puVar56) goto LAB_14273f810;
  goto LAB_14273f7f5;
code_r0x00014273f5d5:
  puVar56 = puVar56 + 1;
  puVar38 = puVar38 + 1;
  iVar7 = iVar7 + 8;
  if (puVar19 <= puVar56) goto LAB_14273f5e5;
  goto LAB_14273f5ca;
code_r0x00014273f6f9:
  puVar19 = puVar19 + 1;
  puVar56 = puVar56 + 1;
  iVar34 = iVar34 + 8;
  if (local_210 <= puVar19) goto LAB_14273f709;
  goto LAB_14273f6e9;
code_r0x00014273fabe:
  puVar19 = puVar19 + 1;
  if (puVar48 <= puVar19) goto LAB_14273faca;
  goto LAB_14273fab6;
code_r0x00014273fa4f:
  puVar50 = puVar50 + 1;
  pcVar24 = pcVar24 + 8;
  if ((ulonglong *)((longlong)puVar56 + -7) <= puVar50) goto LAB_14273fa5c;
  goto LAB_14273fa43;
code_r0x00014273fbfc:
  puVar56 = puVar56 + 1;
  if (puVar48 <= puVar56) goto LAB_14273fd73;
  goto LAB_14273fbf4;
code_r0x0001427400fc:
  puVar38 = puVar38 + 1;
  puVar36 = puVar36 + 1;
  iVar7 = iVar7 + 8;
  if (puVar56 <= puVar38) goto LAB_14274010c;
  goto LAB_1427400f1;
LAB_142740318:
  puVar31 = param_2;
  if (bVar62 && local_e8 < puVar27) {
    puVar13 = (ulonglong *)((ulonglong)local_120 & 0xffffffff);
    local_130 = local_100;
    puVar31 = param_2;
  }
  do {
    local_100 = puVar31;
    puVar31 = local_148;
    pvVar53 = local_1e0;
    iVar7 = (int)puVar13;
    iVar34 = 0x12;
    if (iVar7 < 0x12) {
      iVar34 = iVar7;
    }
    local_e8 = (ulonglong *)CONCAT44(local_e8._4_4_,iVar34);
    local_b0 = (uint *)((longlong)iVar34 + (longlong)puVar19);
    local_68 = (ulonglong *)(longlong)iVar7;
    local_1c0 = (ulonglong *)((longlong)puVar19 + (longlong)local_68);
    local_80 = (ulonglong *)((char *)((longlong)local_68 + (longlong)puVar19) + 3);
    puVar30 = local_1d8;
LAB_1427403a0:
    local_1d8 = puVar30;
    iVar23 = (int)puVar19;
    if ((longlong)local_1d8 - (longlong)puVar19 < 0x12) {
      iVar44 = (int)((longlong)local_1d8 - (longlong)puVar19) + -4 + uVar12;
      if (local_b0 <= (uint *)((longlong)local_1d8 + (longlong)(int)uVar12 + -4)) {
        iVar44 = iVar34;
      }
      uVar41 = (iVar23 - (int)local_1d8) + iVar44;
      if ((int)uVar41 < 1) goto LAB_1427403f2;
      local_1d8 = (ulonglong *)((longlong)local_1d8 + (ulonglong)uVar41);
      local_150 = (ulonglong *)((longlong)local_208 + (ulonglong)uVar41);
      uVar41 = uVar12 - uVar41;
    }
    else {
LAB_1427403f2:
      local_150 = local_208;
      uVar41 = uVar12;
    }
    puVar27 = (ulonglong *)(ulonglong)uVar41;
    puVar36 = (ulonglong *)(longlong)(int)uVar41;
    local_128 = (ulonglong *)((longlong)local_1d8 + (longlong)puVar36);
    iVar44 = (int)local_1d8;
    sVar39 = (short)local_130;
    local_168 = puVar13;
    local_e0 = puVar19;
    if (puVar48 < local_128) {
LAB_142741c2d:
      if (local_1d8 < local_1c0) {
        iVar7 = iVar44 - iVar23;
      }
      uVar18 = (longlong)puVar19 - (longlong)local_100;
      if ((local_17c == 0) ||
         ((char *)((longlong)local_148 + uVar18 + uVar18 / 0xff + 9) <= local_f8)) {
        puVar13 = (ulonglong *)((longlong)local_148 + 1);
        if (uVar18 < 0xf) {
          *(char *)local_148 = (char)uVar18 << 4;
        }
        else {
          uVar35 = uVar18 - 0xf;
          *(char *)local_148 = -0x10;
          if (0xfe < uVar35) {
            uVar35 = (uVar18 - 0x10e) / 0xff;
            memset(puVar13,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
            puVar13 = (ulonglong *)((longlong)local_148 + uVar35 + 2);
            uVar35 = (uVar18 + uVar35 * -0xff) - 0x10e;
          }
          sVar39 = (short)local_130;
          *(char *)puVar13 = (char)uVar35;
          puVar13 = (ulonglong *)((longlong)puVar13 + 1);
        }
        puVar31 = (ulonglong *)((longlong)puVar13 + uVar18);
        puVar30 = puVar13;
        puVar27 = local_100;
        do {
          *puVar30 = *puVar27;
          puVar30 = puVar30 + 1;
          puVar27 = puVar27 + 1;
        } while (puVar30 < puVar31);
        lVar14 = (longlong)iVar7;
        uVar35 = lVar14 - 4;
        *(short *)puVar31 = (short)local_e0 - sVar39;
        if ((local_17c == 0) || ((char *)((longlong)puVar31 + uVar35 / 0xff + 8) <= local_f8)) {
          pcVar24 = (char *)((longlong)puVar31 + 2);
          if (uVar35 < 0xf) {
            *(char *)local_148 = (char)*local_148 + (char)uVar35;
          }
          else {
            *(char *)local_148 = (char)*local_148 + '\x0f';
            uVar35 = lVar14 - 0x13;
            if (0x1fd < uVar35) {
              uVar35 = (lVar14 - 0x211U) / 0x1fe;
              memset(pcVar24,(int)CONCAT71((int7)((lVar14 - 0x211U) / 0x1fe),0xff),uVar35 * 2 + 2);
              pcVar24 = (char *)((longlong)puVar13 + uVar18 + uVar35 * 2 + 4);
              uVar35 = (uVar35 * -0x1fe + lVar14) - 0x211;
            }
            if (0xfe < uVar35) {
              uVar35 = uVar35 - 0xff;
              *pcVar24 = -1;
              pcVar24 = pcVar24 + 1;
            }
            *pcVar24 = (char)uVar35;
            pcVar24 = pcVar24 + 1;
          }
          pcVar15 = (char *)((longlong)local_e0 + lVar14);
          uVar18 = (longlong)local_1d8 - (longlong)pcVar15;
          if ((local_17c != 0) && (local_f8 < pcVar24 + uVar18 + uVar18 / 0xff + 9))
          goto LAB_142742177;
          _Dst = (short *)(pcVar24 + 1);
          puVar13 = (ulonglong *)0x0;
          if (uVar18 < 0xf) {
            *pcVar24 = (char)uVar18 << 4;
          }
          else {
            uVar35 = uVar18 - 0xf;
            *pcVar24 = -0x10;
            if (0xfe < uVar35) {
              uVar35 = (uVar18 - 0x10e) / 0xff;
              memset(_Dst,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
              _Dst = (short *)(pcVar24 + uVar35 + 2);
              uVar35 = (uVar35 * -0xff + uVar18) - 0x10e;
            }
            *(char *)_Dst = (char)uVar35;
            _Dst = (short *)((longlong)_Dst + 1);
          }
          psVar32 = (short *)(uVar18 + (longlong)_Dst);
          pcVar16 = pcVar15;
          psVar21 = _Dst;
          do {
            *(undefined8 *)psVar21 = *(undefined8 *)pcVar16;
            psVar21 = psVar21 + 4;
            pcVar16 = pcVar16 + 8;
          } while (psVar21 < psVar32);
          puVar58 = (uint *)((longlong)puVar36 + -4);
          *psVar32 = (short)local_1d8 - (short)local_150;
          if ((local_17c != 0) &&
             (local_f8 < (char *)((longlong)psVar32 + (ulonglong)puVar58 / 0xff + 8)))
          goto LAB_14274214d;
          param_3 = (ulonglong *)(psVar32 + 1);
          if (&DAT_0000000f <= puVar58) {
            *pcVar24 = *pcVar24 + '\x0f';
            pcVar24 = (char *)((longlong)puVar36 + -0x13);
            if ((char *)0x1fd < pcVar24) {
              uVar18 = (ulonglong)((longlong)puVar36 + -0x211) / 0x1fe;
              memset(param_3,(int)CONCAT71((int7)((ulonglong)((longlong)puVar36 + -0x211) / 0x1fe),
                                           0xff),uVar18 * 2 + 2);
              param_3 = (ulonglong *)
                        ((longlong)local_1d8 +
                        (longlong)((longlong)_Dst + (uVar18 * 2 - (longlong)pcVar15) + 4));
              pcVar24 = (char *)((longlong)puVar36 + uVar18 * -0x1fe + -0x211);
            }
            goto joined_r0x000142741fc3;
          }
          *pcVar24 = *pcVar24 + (char)puVar58;
          goto LAB_142741fe1;
        }
      }
LAB_142742177:
      puVar13 = (ulonglong *)0x0;
      goto LAB_14274214d;
    }
    local_1e8 = (ulonglong *)((longlong)local_128 + -3);
    local_1f0 = *(ulonglong **)((longlong)param_1 + 0x40008);
    uVar33 = *(uint *)((longlong)param_1 + 0x40018);
    puVar56 = (ulonglong *)(ulonglong)uVar33;
    local_78 = (char *)((longlong)local_1e8 - (longlong)local_1f0);
    uVar46 = uVar33 + (int)local_78;
    uVar17 = *(uint *)((longlong)param_1 + 0x4001c);
    local_1f8 = (ulonglong *)(ulonglong)uVar17;
    uVar25 = (uVar33 - 0xffff) + (int)local_78;
    if (uVar46 < uVar17 + 0x10000) {
      uVar25 = uVar17;
    }
    local_220 = (ulonglong *)CONCAT44(local_220._4_4_,uVar25);
    uVar59 = *(uint *)((longlong)local_128 + -3);
    uVar18 = (ulonglong)*(uint *)((longlong)param_1 + 0x40020);
    local_190 = (ulonglong *)CONCAT44(local_190._4_4_,uVar46);
    if (*(uint *)((longlong)param_1 + 0x40020) < uVar46) {
      do {
        uVar35 = (ulonglong)
                 ((uint)(*(int *)((longlong)local_1f0 + (uVar18 - (longlong)puVar56)) * -0x61c8864f)
                 >> 0x11);
        uVar12 = (uint)uVar18;
        uVar42 = uVar12 - *(int *)((longlong)param_1 + uVar35 * 4);
        if (0xfffe < uVar42) {
          uVar42 = 0xffff;
        }
        *(short *)((longlong)param_1 + (ulonglong)(uVar12 & 0xffff) * 2 + 0x20000) = (short)uVar42;
        *(uint *)((longlong)param_1 + uVar35 * 4) = uVar12;
        uVar18 = uVar18 + 1;
      } while (uVar46 != uVar18);
    }
    local_f0 = *(longlong *)((longlong)param_1 + 0x40028);
    puVar38 = *(ulonglong **)((longlong)param_1 + 0x40010);
    *(uint *)((longlong)param_1 + 0x40020) = uVar46;
    local_138 = (longlong)local_1e8 - (longlong)local_1d8;
    uVar8 = *(uint *)((longlong)param_1 + (ulonglong)(*(uint *)local_1e8 * -0x61c8864f >> 0x11) * 4)
    ;
    uVar12 = uVar41;
    uVar42 = local_194;
    if ((uVar25 <= uVar8) && (0 < (int)local_194)) {
      local_108 = (ulonglong *)((longlong)puVar56 - (longlong)local_1f8);
      local_1d0 = (ulonglong *)((longlong)puVar38 + (longlong)local_108);
      local_78 = local_78 + (longlong)puVar56;
      puVar58 = (uint *)((longlong)local_1f0 - (longlong)puVar56);
      local_178 = (ulonglong *)-(longlong)(int)local_138;
      local_160 = (char *)((longlong)local_1d8 - (longlong)local_1e8);
      local_1a0 = (ulonglong *)((longlong)local_128 + 1);
      local_188 = (ulonglong *)CONCAT44(local_188._4_4_,uVar33 - 4);
      bVar62 = uVar59 >> 0x18 == (uVar59 & 0xff);
      bVar5 = uVar59 >> 0x10 == (uVar59 & 0xffff);
      local_158 = (ulonglong *)CONCAT71(local_158._1_7_,bVar62 && bVar5);
      uVar18 = (ulonglong)uVar59 * 0x100000001;
      local_170 = (uint *)((longlong)puVar38 - (longlong)local_1f8);
      local_a0 = (ulonglong *)((longlong)puVar58 + -1);
      local_1a8 = (ulonglong *)((longlong)((longlong)local_1d8 + -4) + (longlong)puVar36);
      uVar9 = ~(uVar41 + iVar44);
      local_140 = (ulonglong *)(ulonglong)uVar9;
      local_d8 = (ulonglong *)((char *)((longlong)local_1d8 + -3) + (longlong)puVar36);
      local_b8 = (char *)((longlong)puVar38 + -1);
      local_218 = (ulonglong *)0x0;
      uVar35 = 0;
      uVar22 = local_194;
      do {
        uVar42 = uVar33 - uVar8;
        if (uVar33 < uVar8 || uVar42 == 0) {
          puVar40 = (uint *)((longlong)puVar58 + (ulonglong)uVar8);
          if ((*(short *)((longlong)local_1d8 + (longlong)(int)uVar12 + -1) !=
               *(short *)((char *)((longlong)local_178 + (longlong)puVar40) +
                         (longlong)(int)uVar12 + -1)) || (*puVar40 != uVar59)) goto LAB_142740b65;
          if ((int)local_138 == 0) {
            uVar42 = 0;
          }
          else {
            pcVar24 = (char *)((longlong)local_1f0 - (longlong)puVar40);
            if ((longlong)local_1f0 - (longlong)puVar40 < (longlong)local_160) {
              pcVar24 = local_160;
            }
            uVar10 = (uint)pcVar24;
            uVar37 = 1;
            lVar14 = 0;
            do {
              uVar42 = (int)uVar10 >> 0x1f & uVar10;
              if (lVar14 <= (int)uVar10) break;
              pcVar24 = (char *)((longlong)local_1a8 + lVar14);
              uVar37 = uVar37 - 1;
              lVar20 = lVar14 + (ulonglong)uVar8;
              lVar14 = lVar14 + -1;
              uVar42 = uVar37;
            } while (*pcVar24 == *(char *)((longlong)local_a0 + lVar20));
          }
          puVar30 = (ulonglong *)(puVar40 + 1);
          puVar50 = local_1a0;
          if (local_1a0 < puVar48) {
            uVar49 = *local_1a0 ^ *puVar30;
            if (uVar49 == 0) {
              uVar37 = 0x40;
            }
            else {
              lVar14 = 0;
              if (uVar49 != 0) {
                for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                }
              }
              uVar37 = (uint)lVar14;
            }
            if (*puVar30 == *local_1a0) {
              puVar30 = (ulonglong *)(puVar40 + 3);
              puVar50 = (ulonglong *)((longlong)local_128 + 9);
              goto LAB_1427409dc;
            }
            uVar37 = uVar37 >> 3;
          }
          else {
LAB_1427409dc:
            if (puVar50 < puVar48) {
              iVar55 = uVar9 + (int)puVar50;
LAB_1427409ec:
              if (*puVar30 == *puVar50) goto code_r0x0001427409f7;
              uVar49 = *puVar50 ^ *puVar30;
              if (uVar49 == 0) {
                uVar37 = 0x40;
              }
              else {
                lVar14 = 0;
                if (uVar49 != 0) {
                  for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                  }
                }
                uVar37 = (uint)lVar14;
              }
              uVar37 = (uVar37 >> 3) + iVar55;
              goto LAB_142740a87;
            }
LAB_142740a08:
            if ((puVar50 < local_c0) && ((uint)*puVar30 == (uint)*puVar50)) {
              puVar50 = (ulonglong *)((longlong)puVar50 + 4);
              puVar30 = (ulonglong *)((longlong)puVar30 + 4);
            }
            if ((puVar50 < local_c8) && ((short)*puVar30 == (short)*puVar50)) {
              puVar50 = (ulonglong *)((longlong)puVar50 + 2);
              puVar30 = (ulonglong *)((longlong)puVar30 + 2);
            }
            if (puVar50 < local_1c8) {
              puVar50 = (ulonglong *)
                        ((longlong)puVar50 + (ulonglong)((char)*puVar30 == (char)*puVar50));
            }
            uVar37 = (int)puVar50 - (int)local_1a0;
          }
LAB_142740a87:
          uVar37 = (uVar37 - uVar42) + 4;
          if ((int)uVar12 < (int)uVar37) {
            local_110 = (ulonglong *)((longlong)puVar40 + (longlong)(int)uVar42);
            local_118 = (ulonglong *)((longlong)(int)uVar42 + (longlong)local_1e8);
            uVar12 = uVar37;
          }
        }
        else if (uVar8 <= uVar33 - 4) {
          uVar49 = (ulonglong)(uVar8 - uVar17);
          puVar40 = (uint *)((longlong)puVar38 + uVar49);
          if (*puVar40 == uVar59) {
            puVar48 = (ulonglong *)((longlong)local_1e8 + (ulonglong)uVar42);
            if (local_1c8 < puVar48) {
              puVar48 = local_1c8;
            }
            puVar28 = (ulonglong *)(puVar40 + 1);
            puVar30 = (ulonglong *)((longlong)puVar48 + -7);
            local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,uVar12);
            puVar50 = local_1a0;
            if (local_1a0 < puVar30) {
              uVar57 = *local_1a0 ^ *puVar28;
              if (uVar57 == 0) {
                uVar37 = 0x40;
              }
              else {
                lVar14 = 0;
                if (uVar57 != 0) {
                  for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                  }
                }
                uVar37 = (uint)lVar14;
              }
              if (*puVar28 == *local_1a0) {
                puVar28 = (ulonglong *)(puVar40 + 3);
                puVar50 = (ulonglong *)((longlong)local_128 + 9);
                goto LAB_1427407c5;
              }
              uVar37 = uVar37 >> 3;
            }
            else {
LAB_1427407c5:
              if (puVar50 < puVar30) {
                iVar55 = uVar9 + (int)puVar50;
LAB_1427407d5:
                if (*puVar28 == *puVar50) goto code_r0x0001427407e1;
                uVar57 = *puVar50 ^ *puVar28;
                if (uVar57 == 0) {
                  uVar37 = 0x40;
                }
                else {
                  lVar14 = 0;
                  if (uVar57 != 0) {
                    for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                    }
                  }
                  uVar37 = (uint)lVar14;
                }
                uVar37 = (uVar37 >> 3) + iVar55;
                goto LAB_14274084a;
              }
LAB_1427407f2:
              if ((puVar50 < (ulonglong *)((longlong)puVar48 + -3)) &&
                 ((uint)*puVar28 == (uint)*puVar50)) {
                puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                puVar28 = (ulonglong *)((longlong)puVar28 + 4);
              }
              if ((puVar50 < (ulonglong *)((longlong)puVar48 + -1)) &&
                 ((short)*puVar28 == (short)*puVar50)) {
                puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                puVar28 = (ulonglong *)((longlong)puVar28 + 2);
              }
              if (puVar50 < puVar48) {
                puVar50 = (ulonglong *)
                          ((longlong)puVar50 + (ulonglong)((char)*puVar28 == (char)*puVar50));
              }
              uVar37 = (int)puVar50 - (int)local_1a0;
            }
LAB_14274084a:
            iVar55 = uVar37 + 4;
            if ((puVar48 < local_1c8) &&
               (puVar30 = (ulonglong *)((longlong)local_1e8 + (longlong)(int)uVar37 + 4),
               puVar30 == puVar48)) {
              puVar50 = local_1f0;
              if (puVar48 < local_210) {
                uVar57 = *puVar30 ^ *local_1f0;
                if (uVar57 == 0) {
                  uVar60 = 0x40;
                }
                else {
                  uVar60 = 0;
                  if (uVar57 != 0) {
                    for (; (uVar57 >> uVar60 & 1) == 0; uVar60 = uVar60 + 1) {
                    }
                  }
                }
                if (*local_1f0 == *puVar30) {
                  puVar30 = (ulonglong *)((longlong)local_1e8 + (longlong)(int)uVar37 + 0xc);
                  puVar50 = local_1f0 + 1;
                  goto LAB_1427408c1;
                }
                uVar42 = (uint)(uVar60 >> 3) & 0x1fffffff;
              }
              else {
LAB_1427408c1:
                if (puVar30 < local_210) {
                  puVar28 = (ulonglong *)((ulonglong)uVar42 + (longlong)local_d8);
                  if (local_1c8 <= puVar28) {
                    puVar28 = local_1c8;
                  }
                  iVar26 = (int)puVar30 - (int)puVar28;
LAB_1427408e3:
                  if (*puVar50 == *puVar30) goto code_r0x0001427408ef;
                  uVar57 = *puVar30 ^ *puVar50;
                  if (uVar57 == 0) {
                    uVar42 = 0x40;
                  }
                  else {
                    lVar14 = 0;
                    if (uVar57 != 0) {
                      for (; (uVar57 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                      }
                    }
                    uVar42 = (uint)lVar14;
                  }
                  uVar42 = (uVar42 >> 3) + iVar26;
                  goto LAB_142740ac1;
                }
LAB_142740900:
                if ((puVar30 < local_c0) && ((uint)*puVar50 == (uint)*puVar30)) {
                  puVar30 = (ulonglong *)((longlong)puVar30 + 4);
                  puVar50 = (ulonglong *)((longlong)puVar50 + 4);
                }
                if ((puVar30 < local_c8) && ((short)*puVar50 == (short)*puVar30)) {
                  puVar30 = (ulonglong *)((longlong)puVar30 + 2);
                  puVar50 = (ulonglong *)((longlong)puVar50 + 2);
                }
                if (puVar30 < local_1c8) {
                  puVar30 = (ulonglong *)
                            ((longlong)puVar30 + (ulonglong)((char)*puVar50 == (char)*puVar30));
                }
                uVar42 = (int)puVar30 - (int)puVar48;
              }
LAB_142740ac1:
              iVar55 = iVar55 + uVar42;
            }
            if ((int)local_138 == 0) {
              uVar42 = 0;
            }
            else {
              pcVar24 = (char *)-uVar49;
              if ((longlong)-uVar49 < (longlong)local_160) {
                pcVar24 = local_160;
              }
              uVar37 = (uint)pcVar24;
              uVar10 = 1;
              lVar14 = 0;
              do {
                uVar42 = (int)uVar37 >> 0x1f & uVar37;
                if (lVar14 <= (int)uVar37) break;
                pcVar24 = (char *)((longlong)local_1a8 + lVar14);
                uVar10 = uVar10 - 1;
                lVar20 = lVar14 + uVar49;
                lVar14 = lVar14 + -1;
                uVar42 = uVar10;
              } while (*pcVar24 == local_b8[lVar20]);
            }
            puVar48 = local_210;
            if ((int)uVar12 < (int)(iVar55 - uVar42)) {
              local_110 = (ulonglong *)
                          ((longlong)puVar58 + (longlong)(int)uVar42 + (ulonglong)uVar8);
              local_118 = (ulonglong *)((longlong)(int)uVar42 + (longlong)local_1e8);
              uVar12 = iVar55 - uVar42;
            }
          }
        }
LAB_142740b65:
        uVar42 = uVar22 - 1;
        uVar2 = *(ushort *)((longlong)local_1e0 + (ulonglong)(uVar8 & 0xffff) * 2 + 0x20000);
        if (((int)local_194 < 0x81) || (uVar2 != 1)) {
LAB_142740d07:
          uVar8 = uVar8 - uVar2;
        }
        else {
          if ((int)local_218 == 0) {
            local_218 = (ulonglong *)&DAT_00000001;
            if (!bVar62 || !bVar5) goto LAB_142740d07;
            puVar30 = local_1a0;
            uVar35 = uVar18;
            if (local_1a0 < puVar48) {
LAB_142740cc7:
              if (*puVar30 == uVar18) goto code_r0x000142740ccf;
              uVar35 = *puVar30 ^ uVar18;
              if (uVar35 == 0) {
                uVar37 = 0x40;
              }
              else {
                lVar14 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                  }
                }
                uVar37 = (uint)lVar14;
              }
              puVar30 = (ulonglong *)((longlong)puVar30 + (ulonglong)(uVar37 >> 3));
              goto LAB_142740dd2;
            }
LAB_142740cdb:
            for (; (puVar30 < local_1c8 && ((char)*puVar30 == (char)uVar35));
                puVar30 = (ulonglong *)((longlong)puVar30 + 1)) {
              uVar35 = uVar35 >> 8;
            }
LAB_142740dd2:
            uVar35 = (ulonglong)(uint)((int)puVar30 - (int)local_1a0) + 4;
            local_218 = (ulonglong *)0x2;
          }
          uVar37 = uVar8 - 1;
          if (((0xfffffffc < uVar37 - uVar33) || ((int)local_218 != 2)) || (uVar37 < uVar25))
          goto LAB_142740d07;
          puVar40 = local_170;
          if (uVar33 <= uVar37) {
            puVar40 = puVar58;
          }
          uVar49 = (ulonglong)uVar37;
          local_218 = (ulonglong *)0x2;
          if (*(uint *)((longlong)puVar40 + uVar49) != uVar59) goto LAB_142740d07;
          local_1b0 = (ulonglong *)CONCAT44(local_1b0._4_4_,uVar12);
          puVar30 = (ulonglong *)((longlong)puVar40 + uVar49);
          puVar50 = local_1d0;
          if (uVar33 <= uVar37) {
            puVar50 = local_1c8;
          }
          puVar28 = (ulonglong *)((longlong)puVar30 + 4);
          puVar51 = puVar28;
          if (puVar28 < (ulonglong *)((longlong)puVar50 + -7)) {
            pcVar24 = (char *)((longlong)puVar40 + uVar49 + 4);
LAB_142740c39:
            if (*puVar51 == uVar18) goto code_r0x000142740c45;
            uVar49 = *puVar51 ^ uVar18;
            if (uVar49 == 0) {
              uVar8 = 0x40;
            }
            else {
              lVar14 = 0;
              if (uVar49 != 0) {
                for (; (uVar49 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                }
              }
              uVar8 = (uint)lVar14;
            }
            puVar29 = (ulonglong *)(pcVar24 + (uVar8 >> 3));
            goto LAB_142740d50;
          }
LAB_142740c52:
          puVar29 = puVar51;
          if (puVar51 < puVar50) {
            lVar14 = (longlong)puVar50 - (longlong)puVar51;
            uVar49 = uVar18;
            do {
              puVar29 = puVar51;
              if ((char)*puVar51 != (char)uVar49) break;
              puVar51 = (ulonglong *)((longlong)puVar51 + 1);
              uVar49 = uVar49 >> 8;
              lVar14 = lVar14 + -1;
              puVar29 = puVar50;
            } while (lVar14 != 0);
          }
LAB_142740d50:
          uVar49 = (longlong)puVar29 - (longlong)puVar28;
          uVar57 = (uVar49 & 0xffffffff) + 4;
          puVar50 = local_1f0;
          if ((uVar37 < uVar33) &&
             (puVar50 = puVar38, (ulonglong *)((longlong)puVar30 + uVar57) == local_1d0)) {
            bVar4 = (char)uVar49 * '\b' & 0x1f;
            uVar60 = (ulonglong)(uVar59 << bVar4 | uVar59 >> 0x20 - bVar4);
            if ((uVar49 & 3) == 0) {
              uVar60 = (ulonglong)uVar59;
            }
            uVar60 = uVar60 * 0x100000001;
            puVar28 = local_1f0;
            if (local_1f0 < puVar48) {
LAB_142740daf:
              if (*puVar28 == uVar60) goto code_r0x000142740db7;
              uVar60 = *puVar28 ^ uVar60;
              if (uVar60 == 0) {
                uVar8 = 0x40;
              }
              else {
                lVar14 = 0;
                if (uVar60 != 0) {
                  for (; (uVar60 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                  }
                }
                uVar8 = (uint)lVar14;
              }
              puVar28 = (ulonglong *)((longlong)puVar28 + (ulonglong)(uVar8 >> 3));
              goto LAB_142740e05;
            }
LAB_142740f25:
            for (; (puVar28 < local_1c8 && ((char)*puVar28 == (char)uVar60));
                puVar28 = (ulonglong *)((longlong)puVar28 + 1)) {
              uVar60 = uVar60 >> 8;
            }
LAB_142740e05:
            uVar57 = uVar57 + (uint)((int)puVar28 - (int)local_1f0);
          }
          puVar28 = puVar30;
          do {
            puVar51 = puVar28;
            if (puVar51 < (ulonglong *)((longlong)puVar50 + 4)) break;
            puVar28 = (ulonglong *)((longlong)puVar51 + -4);
          } while (*(uint *)((longlong)puVar51 + -4) == uVar59);
          puVar28 = puVar51;
          if (puVar50 < puVar51) {
            lVar14 = 0;
            do {
              if (*(char *)((longlong)puVar51 + lVar14 + -1) !=
                  *(char *)((longlong)&local_4c + lVar14 + 3)) {
                puVar28 = (ulonglong *)((longlong)puVar51 + lVar14);
                break;
              }
              lVar20 = lVar14 + -1;
              lVar14 = lVar14 + -1;
              puVar28 = puVar50;
            } while (puVar50 < (ulonglong *)((longlong)puVar51 + lVar20));
          }
          uVar49 = (longlong)puVar30 - (longlong)puVar28;
          iVar55 = (int)uVar49;
          local_4c = uVar59;
          if ((uVar17 < uVar33 && uVar33 <= uVar37) &&
              (ulonglong *)((longlong)puVar30 - (uVar49 & 0xffffffff)) == local_1f0) {
            bVar4 = (char)uVar49 * -8 & 0x1f;
            puVar30 = local_1d0;
            puVar50 = local_108;
            local_4c = uVar59 << bVar4 | uVar59 >> 0x20 - bVar4;
            if ((-iVar55 & 3U) == 0) {
              local_4c = uVar59;
            }
            do {
              puVar28 = puVar30;
              if ((longlong)puVar50 < 4) {
                if ((longlong)puVar50 < 1) goto LAB_142740f8d;
                break;
              }
              puVar30 = (ulonglong *)((longlong)puVar28 + -4);
              puVar50 = (ulonglong *)((longlong)puVar50 + -4);
            } while (*(uint *)((longlong)puVar28 + -4) == local_4c);
            pcVar24 = (char *)((longlong)&local_4c + 3);
            do {
              if (*(char *)((longlong)puVar28 + -1) != *pcVar24) break;
              puVar28 = (ulonglong *)((longlong)puVar28 + -1);
              pcVar24 = pcVar24 + -1;
            } while (puVar38 < puVar28);
LAB_142740f8d:
            iVar55 = ((int)local_1d0 - (int)puVar28) + iVar55;
          }
          uVar8 = uVar37 - iVar55;
          if (uVar37 - iVar55 <= uVar25) {
            uVar8 = uVar25;
          }
          uVar49 = (uVar37 - uVar8) + uVar57;
          if ((uVar35 < uVar57) || (uVar49 < uVar35)) {
            local_218 = (ulonglong *)0x2;
            uVar37 = uVar33;
            if (0xfffffffc < uVar8 - uVar33) goto LAB_142740fff;
            if ((int)local_138 == 0) {
              if (uVar35 <= uVar49) {
                uVar49 = uVar35;
              }
              if ((ulonglong)(longlong)(int)uVar12 < uVar49) {
                if (0xffff < (longlong)local_78 - (ulonglong)uVar8) break;
                local_110 = (ulonglong *)((ulonglong)uVar8 + (longlong)puVar58);
                uVar12 = (uint)uVar49;
                local_118 = local_1e8;
              }
              uVar37 = (uint)*(ushort *)
                              ((longlong)local_1e0 + (ulonglong)(uVar8 & 0xffff) * 2 + 0x20000);
              if (uVar8 < uVar37) break;
              uVar8 = uVar8 - uVar37;
            }
          }
          else {
            uVar37 = (uVar37 - (int)uVar35) + (int)uVar57;
            if (0xfffffffc < uVar37 - uVar33) {
              uVar37 = uVar33;
            }
LAB_142740fff:
            uVar8 = uVar37;
            local_218 = (ulonglong *)0x2;
          }
        }
        if ((uVar8 < uVar25) || (bVar61 = (int)uVar22 < 2, uVar22 = uVar42, bVar61)) break;
      } while( true );
    }
    puVar30 = local_118;
    if (((int)uVar42 < 1) || (0xfffe < uVar46 - uVar25)) {
LAB_142741416:
      local_208 = local_110;
      local_200 = puVar56;
      local_1b8 = puVar38;
    }
    else {
      local_1b8 = *(ulonglong **)(&DAT_00040008 + local_f0);
      local_1b0 = (ulonglong *)
                  ((*(longlong *)(local_f0 + 0x40000) - (longlong)local_1b8) +
                  (ulonglong)*(uint *)(local_f0 + 0x40018));
      uVar33 = *(uint *)(local_f0 + (ulonglong)(*(uint *)local_1e8 * -0x61c8864f >> 0x11) * 4);
      uVar17 = (uVar25 + uVar33) - (int)local_1b0;
      if (0xffff < uVar46 - uVar17) goto LAB_142741416;
      local_200 = (ulonglong *)((longlong)local_1b8 - (ulonglong)*(uint *)(local_f0 + 0x40018));
      local_1a8 = (ulonglong *)((longlong)local_128 + 1);
      local_218 = (ulonglong *)((longlong)local_1d8 - (longlong)local_1e8);
      local_1f0 = (ulonglong *)((longlong)local_1f0 - (longlong)puVar56);
      local_1f8 = (ulonglong *)(ulonglong)~(uVar41 + iVar44);
      local_1a0 = (ulonglong *)((longlong)local_200 + -1);
      local_208 = local_110;
      do {
        bVar62 = uVar42 == 0;
        uVar42 = uVar42 - 1;
        if (bVar62) break;
        uVar18 = (ulonglong)uVar33;
        if (*(uint *)((longlong)local_200 + uVar18) == uVar59) {
          local_220 = (ulonglong *)CONCAT44(local_220._4_4_,uVar17);
          puVar48 = (ulonglong *)(((longlong)local_1b0 - uVar18) + (longlong)local_1e8);
          if (local_1c8 < puVar48) {
            puVar48 = local_1c8;
          }
          pcVar24 = (char *)((longlong)local_200 + uVar18);
          puVar56 = (ulonglong *)(pcVar24 + 4);
          puVar38 = (ulonglong *)((longlong)puVar48 + -7);
          puVar50 = local_1a8;
          if (local_1a8 < puVar38) {
            uVar35 = *local_1a8 ^ *puVar56;
            if (uVar35 == 0) {
              uVar25 = 0x40;
            }
            else {
              lVar14 = 0;
              if (uVar35 != 0) {
                for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                }
              }
              uVar25 = (uint)lVar14;
            }
            if (*puVar56 == *local_1a8) {
              puVar50 = (ulonglong *)((longlong)local_128 + 9);
              puVar56 = (ulonglong *)(pcVar24 + 0xc);
              goto LAB_142741277;
            }
            uVar25 = uVar25 >> 3;
          }
          else {
LAB_142741277:
            if (puVar50 < puVar38) {
              iVar55 = ~(uVar41 + iVar44) + (int)puVar50;
LAB_142741284:
              if (*puVar56 == *puVar50) goto code_r0x00014274128f;
              uVar35 = *puVar50 ^ *puVar56;
              if (uVar35 == 0) {
                uVar25 = 0x40;
              }
              else {
                lVar14 = 0;
                if (uVar35 != 0) {
                  for (; (uVar35 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                  }
                }
                uVar25 = (uint)lVar14;
              }
              uVar25 = (uVar25 >> 3) + iVar55;
              goto LAB_142741303;
            }
LAB_1427412a0:
            if ((puVar50 < (ulonglong *)((longlong)puVar48 + -3)) &&
               ((uint)*puVar56 == (uint)*puVar50)) {
              puVar50 = (ulonglong *)((longlong)puVar50 + 4);
              puVar56 = (ulonglong *)((longlong)puVar56 + 4);
            }
            if ((puVar50 < (ulonglong *)((longlong)puVar48 + -1)) &&
               ((short)*puVar56 == (short)*puVar50)) {
              puVar50 = (ulonglong *)((longlong)puVar50 + 2);
              puVar56 = (ulonglong *)((longlong)puVar56 + 2);
            }
            if (puVar50 < puVar48) {
              puVar50 = (ulonglong *)
                        ((longlong)puVar50 + (ulonglong)((char)*puVar56 == (char)*puVar50));
            }
            uVar25 = (int)puVar50 - (int)local_1a8;
          }
LAB_142741303:
          if ((int)local_138 == 0) {
            uVar8 = 0;
          }
          else {
            puVar48 = (ulonglong *)((longlong)local_1b8 - (longlong)pcVar24);
            if ((longlong)local_1b8 - (longlong)pcVar24 < (longlong)local_218) {
              puVar48 = local_218;
            }
            uVar22 = (uint)puVar48;
            uVar9 = 1;
            lVar14 = 0;
            do {
              uVar8 = (int)uVar22 >> 0x1f & uVar22;
              if (lVar14 <= (int)uVar22) break;
              pcVar24 = (char *)((longlong)((longlong)local_1d8 + -4) + (longlong)puVar36) + lVar14;
              uVar9 = uVar9 - 1;
              lVar20 = lVar14 + uVar18;
              lVar14 = lVar14 + -1;
              uVar8 = uVar9;
            } while (*pcVar24 == *(char *)((longlong)local_1a0 + lVar20));
          }
          uVar25 = (uVar25 + 4) - uVar8;
          puVar48 = local_210;
          if ((int)uVar12 < (int)uVar25) {
            local_208 = (ulonglong *)
                        ((longlong)local_1f0 + (longlong)(int)uVar8 + (ulonglong)uVar17);
            puVar30 = (ulonglong *)((longlong)(int)uVar8 + (longlong)local_1e8);
            uVar12 = uVar25;
          }
        }
        uVar25 = (uint)*(ushort *)(local_f0 + 0x20000 + (ulonglong)(uVar33 & 0xffff) * 2);
        uVar33 = uVar33 - uVar25;
        uVar17 = uVar17 - uVar25;
      } while (uVar46 - uVar17 < 0x10000);
    }
    param_1 = local_1e0;
    local_120 = puVar27;
    local_a8 = puVar36;
    if (uVar12 == uVar41) {
      local_110 = local_208;
      local_118 = puVar30;
      goto LAB_142741c2d;
    }
    if (puVar30 < local_80) goto code_r0x00014274144f;
    if ((local_1d8 < local_1c0) &&
       (iVar7 = (int)((longlong)local_1d8 - (longlong)puVar19),
       (longlong)local_1d8 - (longlong)puVar19 < 0x12)) {
      iVar55 = (uVar41 - 4) + iVar7;
      iVar7 = iVar34;
      if ((uint *)((longlong)local_128 + -4) < local_b0) {
        iVar7 = iVar55;
      }
      uVar33 = (iVar23 - iVar44) + iVar7;
      if (0 < (int)uVar33) {
        local_1d8 = (ulonglong *)((longlong)local_1d8 + (ulonglong)uVar33);
        local_150 = (ulonglong *)((longlong)local_150 + (ulonglong)uVar33);
        local_120 = (ulonglong *)(ulonglong)(uVar41 - uVar33);
      }
    }
    uVar18 = (longlong)puVar19 - (longlong)local_100;
    puVar13 = (ulonglong *)0x0;
    local_220 = puVar30;
    if ((local_17c != 0) && (local_f8 < (char *)((longlong)local_148 + uVar18 + uVar18 / 0xff + 9)))
    goto LAB_14274214d;
    puVar31 = (ulonglong *)((longlong)local_148 + 1);
    if (uVar18 < 0xf) {
      *(char *)local_148 = (char)uVar18 << 4;
    }
    else {
      uVar35 = uVar18 - 0xf;
      *(char *)local_148 = -0x10;
      if (0xfe < uVar35) {
        uVar35 = (uVar18 - 0x10e) / 0xff;
        memset(puVar31,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
        sVar39 = (short)local_130;
        puVar31 = (ulonglong *)((longlong)local_148 + uVar35 + 2);
        uVar35 = (uVar18 + uVar35 * -0xff) - 0x10e;
      }
      *(char *)puVar31 = (char)uVar35;
      puVar31 = (ulonglong *)((longlong)puVar31 + 1);
    }
    puVar27 = (ulonglong *)(uVar18 + (longlong)puVar31);
    puVar30 = local_100;
    do {
      *puVar31 = *puVar30;
      puVar31 = puVar31 + 1;
      puVar30 = puVar30 + 1;
    } while (puVar31 < puVar27);
    lVar14 = (longlong)iVar7;
    uVar18 = lVar14 - 4;
    *(short *)puVar27 = (short)puVar19 - sVar39;
    if ((local_17c != 0) && (local_f8 < (char *)((longlong)puVar27 + uVar18 / 0xff + 8)))
    goto LAB_14274214d;
    puVar31 = (ulonglong *)((longlong)puVar27 + 2);
    if (uVar18 < 0xf) {
      *(char *)local_148 = (char)*local_148 + (char)uVar18;
    }
    else {
      *(char *)local_148 = (char)*local_148 + '\x0f';
      uVar18 = lVar14 - 0x13;
      if (0x1fd < uVar18) {
        uVar18 = (lVar14 - 0x211U) / 0x1fe;
        memset(puVar31,(int)CONCAT71((int7)((lVar14 - 0x211U) / 0x1fe),0xff),uVar18 * 2 + 2);
        puVar31 = (ulonglong *)((longlong)puVar27 + uVar18 * 2 + 4);
        uVar18 = (uVar18 * -0x1fe + lVar14) - 0x211;
      }
      if (0xfe < uVar18) {
        uVar18 = uVar18 - 0xff;
        *(char *)puVar31 = -1;
        puVar31 = (ulonglong *)((longlong)puVar31 + 1);
      }
      *(char *)puVar31 = (char)uVar18;
      puVar31 = (ulonglong *)((longlong)puVar31 + 1);
    }
    local_130 = local_150;
    puVar13 = local_120;
    puVar19 = local_1d8;
    local_1d8 = local_220;
    local_148 = puVar31;
    local_118 = local_220;
    local_110 = local_208;
    puVar31 = (ulonglong *)((longlong)local_e0 + lVar14);
  } while( true );
code_r0x0001427409f7:
  puVar50 = puVar50 + 1;
  puVar30 = puVar30 + 1;
  iVar55 = iVar55 + 8;
  if (puVar48 <= puVar50) goto LAB_142740a08;
  goto LAB_1427409ec;
code_r0x0001427407e1:
  puVar50 = puVar50 + 1;
  puVar28 = puVar28 + 1;
  iVar55 = iVar55 + 8;
  if (puVar30 <= puVar50) goto LAB_1427407f2;
  goto LAB_1427407d5;
code_r0x0001427408ef:
  puVar30 = puVar30 + 1;
  puVar50 = puVar50 + 1;
  iVar26 = iVar26 + 8;
  if (local_210 <= puVar30) goto LAB_142740900;
  goto LAB_1427408e3;
code_r0x000142740ccf:
  puVar30 = puVar30 + 1;
  if (puVar48 <= puVar30) goto LAB_142740cdb;
  goto LAB_142740cc7;
code_r0x000142740c45:
  puVar51 = puVar51 + 1;
  pcVar24 = pcVar24 + 8;
  if ((ulonglong *)((longlong)puVar50 + -7) <= puVar51) goto LAB_142740c52;
  goto LAB_142740c39;
code_r0x000142740db7:
  puVar28 = puVar28 + 1;
  if (puVar48 <= puVar28) goto LAB_142740f25;
  goto LAB_142740daf;
code_r0x00014274128f:
  puVar50 = puVar50 + 1;
  puVar56 = puVar56 + 1;
  iVar55 = iVar55 + 8;
  if (puVar38 <= puVar50) goto LAB_1427412a0;
  goto LAB_142741284;
code_r0x00014274144f:
  local_110 = local_208;
  local_118 = puVar30;
  if (puVar30 < local_1c0) goto LAB_1427403a0;
  if (local_1d8 < local_1c0) {
    iVar44 = (int)local_1c0 - iVar44;
    local_120 = (ulonglong *)(ulonglong)(uVar41 - iVar44);
    if ((int)(uVar41 - iVar44) < 4) {
      local_150 = local_208;
      local_120 = (ulonglong *)(ulonglong)uVar12;
      local_1d8 = puVar30;
    }
    else {
      local_1d8 = (ulonglong *)((longlong)local_1d8 + (longlong)iVar44);
      local_150 = (ulonglong *)((longlong)local_150 + (longlong)iVar44);
    }
  }
  uVar18 = (longlong)puVar19 - (longlong)local_100;
  puVar13 = (ulonglong *)0x0;
  if ((local_17c != 0) && (local_f8 < (char *)((longlong)local_148 + uVar18 + uVar18 / 0xff + 9)))
  goto LAB_14274214d;
  puVar27 = (ulonglong *)((longlong)local_148 + 1);
  if (uVar18 < 0xf) {
    *(char *)local_148 = (char)uVar18 << 4;
  }
  else {
    uVar35 = uVar18 - 0xf;
    *(char *)local_148 = -0x10;
    if (0xfe < uVar35) {
      uVar35 = (uVar18 - 0x10e) / 0xff;
      memset(puVar27,(int)CONCAT71((int7)((uVar18 - 0x10e) / 0x1fe),0xff),uVar35 + 1);
      puVar27 = (ulonglong *)((longlong)puVar31 + uVar35 + 2);
      uVar35 = (uVar18 + uVar35 * -0xff) - 0x10e;
    }
    *(char *)puVar27 = (char)uVar35;
    puVar27 = (ulonglong *)((longlong)puVar27 + 1);
  }
  puVar31 = local_68;
  puVar36 = (ulonglong *)(uVar18 + (longlong)puVar27);
  puVar19 = local_100;
  do {
    *puVar27 = *puVar19;
    puVar27 = puVar27 + 1;
    puVar19 = puVar19 + 1;
  } while (puVar27 < puVar36);
  puVar58 = (uint *)((longlong)local_68 + -4);
  *(short *)puVar36 = (short)local_e0 - (short)local_130;
  if ((local_17c != 0) && (local_f8 < (char *)((longlong)puVar36 + (ulonglong)puVar58 / 0xff + 8)))
  goto LAB_14274214d;
  puVar13 = (ulonglong *)((longlong)puVar36 + 2);
  if (puVar58 < &DAT_0000000f) {
    *(char *)local_148 = (char)*local_148 + (char)puVar58;
  }
  else {
    *(char *)local_148 = (char)*local_148 + '\x0f';
    pcVar24 = (char *)((longlong)local_68 + -0x13);
    if ((char *)0x1fd < pcVar24) {
      uVar18 = (ulonglong)((longlong)local_68 + -0x211) / 0x1fe;
      memset(puVar13,(int)CONCAT71((int7)((ulonglong)((longlong)local_68 + -0x211) / 0x1fe),0xff),
             uVar18 * 2 + 2);
      puVar13 = (ulonglong *)((longlong)puVar36 + uVar18 * 2 + 4);
      pcVar24 = (char *)((longlong)puVar31 + uVar18 * -0x1fe + -0x211);
    }
    if ((char *)0xfe < pcVar24) {
      pcVar24 = pcVar24 + -0xff;
      *(char *)puVar13 = -1;
      puVar13 = (ulonglong *)((longlong)puVar13 + 1);
    }
    *(char *)puVar13 = (char)pcVar24;
    puVar13 = (ulonglong *)((longlong)puVar13 + 1);
  }
  local_110 = local_208;
  local_100 = local_150;
  local_e8 = local_1d8;
  param_2 = local_1c0;
  local_148 = puVar13;
  local_118 = puVar30;
  goto LAB_14273f181;
code_r0x00014273afbb:
  puVar36 = puVar36 + 1;
  puVar19 = puVar19 + 1;
  iVar44 = iVar44 + 8;
  if (puVar48 <= puVar36) goto LAB_14273afcb;
  goto LAB_14273afb0;
code_r0x00014273af19:
  puVar56 = puVar56 + 1;
  puVar38 = puVar38 + 1;
  iVar44 = iVar44 + 8;
  if (puVar36 <= puVar56) goto LAB_14273af29;
  goto LAB_14273af0d;
code_r0x00014273b0e3:
  puVar36 = puVar36 + 1;
  puVar56 = puVar56 + 1;
  iVar44 = iVar44 + 8;
  if (local_210 <= puVar36) goto LAB_14273b0f5;
  goto LAB_14273b0d3;
code_r0x00014273b3d4:
  puVar19 = puVar19 + 1;
  if (puVar48 <= puVar19) goto LAB_14273b3e0;
  goto LAB_14273b3c8;
code_r0x00014273b364:
  puVar56 = puVar56 + 1;
  pcVar24 = pcVar24 + 8;
  if ((ulonglong *)((longlong)puVar27 + -7) <= puVar56) goto LAB_14273b371;
  goto LAB_14273b358;
code_r0x00014273b529:
  puVar19 = puVar19 + 1;
  if (local_210 <= puVar19) goto LAB_14273b662;
  goto LAB_14273b521;
code_r0x00014273b92f:
  puVar19 = puVar19 + 1;
  puVar36 = puVar36 + 1;
  iVar34 = iVar34 + 8;
  if (puVar27 <= puVar19) goto LAB_14273b93f;
  goto LAB_14273b924;
code_r0x00014273cd54:
  puVar50 = puVar50 + 1;
  puVar38 = puVar38 + 1;
  iVar26 = iVar26 + 8;
  if (puVar48 <= puVar50) goto LAB_14273d545;
  goto LAB_14273cd49;
code_r0x00014273cc90:
  puVar50 = puVar50 + 1;
  puVar28 = puVar28 + 1;
  iVar26 = iVar26 + 8;
  if (puVar38 <= puVar50) goto LAB_14273cca1;
  goto LAB_14273cc84;
code_r0x00014273ce71:
  puVar38 = puVar38 + 1;
  puVar50 = puVar50 + 1;
  iVar26 = iVar26 + 8;
  if (local_210 <= puVar38) goto LAB_14273d5ca;
  goto LAB_14273ce64;
code_r0x00014273d0fe:
  puVar38 = puVar38 + 1;
  if (puVar48 <= puVar38) goto LAB_14273d10a;
  goto LAB_14273d0f2;
code_r0x00014273d089:
  puVar51 = puVar51 + 1;
  pcVar15 = pcVar15 + 8;
  if ((ulonglong *)((longlong)puVar50 + -7) <= puVar51) goto LAB_14273d096;
  goto LAB_14273d07c;
code_r0x00014273d261:
  puVar50 = puVar50 + 1;
  if (local_210 <= puVar50) goto LAB_14273d3ec;
  goto LAB_14273d259;
code_r0x00014273da91:
  puVar50 = puVar50 + 1;
  puVar28 = puVar28 + 1;
  iVar44 = iVar44 + 8;
  if (puVar38 <= puVar50) goto LAB_14273db64;
  goto LAB_14273da86;
code_r0x00014273c2f5:
  puVar56 = puVar56 + 1;
  puVar38 = puVar38 + 1;
  iVar55 = iVar55 + 8;
  if (puVar36 <= puVar56) goto LAB_14273c306;
  goto LAB_14273c2ea;
code_r0x00014273c53e:
  puVar36 = puVar36 + 1;
  puVar56 = puVar56 + 1;
  iVar55 = iVar55 + 8;
  if (local_210 <= puVar36) goto LAB_14273c551;
  goto LAB_14273c532;
code_r0x00014273c42b:
  puVar38 = puVar38 + 1;
  puVar36 = puVar36 + 1;
  iVar55 = iVar55 + 8;
  if (puVar48 <= puVar38) goto LAB_14273c95c;
  goto LAB_14273c420;
code_r0x00014273c1fe:
  puVar36 = puVar36 + 1;
  if (puVar48 <= puVar36) goto LAB_14273c20a;
  goto LAB_14273c1f2;
code_r0x00014273c0a2:
  puVar50 = puVar50 + 1;
  pcVar15 = pcVar15 + 8;
  if ((ulonglong *)((longlong)puVar56 + -7) <= puVar50) goto LAB_14273c0af;
  goto LAB_14273c095;
code_r0x00014273c5f2:
  puVar56 = puVar56 + 1;
  if (local_210 <= puVar56) goto LAB_14273c7c3;
  goto LAB_14273c5ea;
code_r0x00014273d77f:
  puVar38 = puVar38 + 1;
  puVar50 = puVar50 + 1;
  iVar44 = iVar44 + 8;
  if (puVar56 <= puVar38) goto LAB_14273d78f;
  goto LAB_14273d774;
}



// FUNCTION 14274217c FUN_14274217c body=282 status=ok
// SIG undefined FUN_14274217c(void)

undefined8 * FUN_14274217c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142733bf0);
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



// FUNCTION 142742296 FUN_142742296 body=134 status=ok
// SIG undefined FUN_142742296(void)

void FUN_142742296(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x18];
  plVar4 = (longlong *)param_1[0x1a];
  if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1c;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3);
  if (param_1[0x18] != 0) {
    plVar4 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142742319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14274231c FUN_14274231c body=3340 status=ok
// SIG undefined FUN_14274231c(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14274231c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  int *piVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  char *pcVar24;
  code *pcVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  
  lVar11 = *param_1;
  puVar12 = (ulonglong *)param_1[1];
  bVar8 = *(byte *)((longlong)param_1 + 0x1c);
  lVar26 = param_1[3];
  lVar13 = param_1[2];
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar30 = *piVar1;
  if (iVar30 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar30 = *piVar1;
  }
  *piVar1 = 0x60000000;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(longlong *)(lVar14 + 0x2c0) = lVar11;
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  plVar2 = (longlong *)(lVar14 + 0x2c0);
  (**(code **)(*DAT_14c872d28 + 0x78))();
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = (int *)(lVar14 + 0x2c8);
  *piVar3 = 2 - (uint)bVar8;
  uVar27 = puVar12[4];
  *(char *)(lVar14 + 0x2cc) = (char)uVar27;
  *(longlong *)(lVar14 + 0x2b0) = lVar13;
  puVar4 = (undefined1 *)(lVar14 + 0x304);
  uVar9 = *puVar4;
  *puVar4 = 1;
  if ((char)uVar27 == '\x01') {
    plVar5 = (longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    piVar6 = (int *)(lVar11 + (ulonglong)bVar8 * 0x80);
    bVar33 = false;
    do {
      bVar34 = true;
      do {
        while (lVar26 = FUN_144a0dba0(lVar13,bVar8), lVar26 != 0) {
          while( true ) {
            lVar20 = *plVar5;
            *plVar5 = lVar26;
            if (((((*(ulonglong *)(lVar26 + 0x38) & 0x3000000000000000) == 0) || (lVar20 != 0)) ||
                (DAT_14c758590 != '\x01')) ||
               (((*piVar3 == 0 || (*plVar2 != lVar11)) || ((*(ulonglong *)(lVar26 + 0x38) & 5) != 0)
                ))) {
              lVar26 = FUN_14470ba62(lVar26);
            }
            else {
              puVar22 = TlsGetValue(DAT_14c844254);
              (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bfc));
              lVar26 = FUN_14470ba62(lVar26);
              (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bf8));
            }
            *plVar5 = lVar20;
            if (lVar26 == 0) break;
            LOCK();
            *(ulonglong *)(lVar26 + 0x38) = *(ulonglong *)(lVar26 + 0x38) | 2;
            UNLOCK();
          }
LAB_142742c00:
          bVar33 = false;
          bVar34 = false;
          if ((*(byte *)(piVar6 + 0x1c) & 1) == 0) {
            uVar18 = (uint)(*(ulonglong *)(piVar6 + 0x18) >> 0xe);
            uVar28 = piVar6[0x14] + *piVar6;
            uVar27 = *(ulonglong *)(piVar6 + 0x18);
            while( true ) {
              bVar33 = false;
              bVar34 = false;
              if ((uVar18 & 0x3fff) <= uVar28) break;
              lVar26 = **(longlong **)(piVar6 + 0x1a);
              LOCK();
              *puVar12 = (ulonglong)((uint)uVar27 & 0x3fff);
              UNLOCK();
              (**(code **)(*(longlong *)puVar12[3] + 0x18))();
              LOCK();
              uVar23 = *(ulonglong *)(piVar6 + 0x18);
              bVar33 = uVar27 == uVar23;
              if (bVar33) {
                *(ulonglong *)(piVar6 + 0x18) =
                     (longlong)puVar12 - lVar26 >> 6 |
                     (uVar27 & 0xfffffc0000000000) + 0x40000000000 |
                     (ulonglong)((uint)uVar27 & 0xfffc000) - 0x4000;
                uVar23 = uVar27;
              }
              UNLOCK();
              if (bVar33) {
                uVar10 = *puVar4;
                *puVar4 = 0;
                if (DAT_14c872d28 != (longlong *)0x0) {
                  pcVar25 = *(code **)(*DAT_14c872d28 + 0x88);
                  if ((pcVar25 == FUN_1467c247e) &&
                     (pcVar25 = *(code **)(*(longlong *)DAT_14c872d28[0xf] + 0x88),
                     pcVar25 == FUN_1467c2c66)) {
                    FUN_14002cacc();
                    pcVar24 = TlsGetValue(DAT_14c758740);
                    if (pcVar24 != (char *)0x0) {
                      pcVar24[0x670] = '\0';
                      LOCK();
                      cVar7 = *pcVar24;
                      if (cVar7 == '\x01') {
                        *pcVar24 = '\0';
                      }
                      UNLOCK();
                      if (cVar7 != '\x01') {
                        FUN_14008cdb0();
                      }
                    }
                  }
                  else {
                    (*pcVar25)();
                  }
                }
                (**(code **)(*(longlong *)puVar12[3] + 0x20))((longlong *)puVar12[3],0xffffffff,0);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  pcVar25 = *(code **)(*DAT_14c872d28 + 0x80);
                  if ((pcVar25 == FUN_1467c2422) &&
                     (pcVar25 = *(code **)(*(longlong *)DAT_14c872d28[0xf] + 0x80),
                     pcVar25 == FUN_1467c2c2c)) {
                    pcVar24 = TlsGetValue(DAT_14c758740);
                    if (pcVar24 != (char *)0x0) {
                      LOCK();
                      cVar7 = *pcVar24;
                      if (cVar7 == '\0') {
                        *pcVar24 = '\x01';
                      }
                      UNLOCK();
                      if (cVar7 != '\0') {
                        FUN_1447d2058(pcVar24);
                      }
                      pcVar24[0x670] = '\x01';
                    }
                  }
                  else {
                    (*pcVar25)();
                  }
                }
                *puVar4 = uVar10;
              }
              uVar18 = (uint)(uVar23 >> 0xe) & 0x3ffff;
              uVar28 = piVar6[0x14] + *piVar6;
              uVar27 = uVar23;
            }
          }
        }
        lVar26 = FUN_144afd00c(lVar13,bVar8);
        if (lVar26 != 0) {
          while( true ) {
            lVar20 = *plVar5;
            *plVar5 = lVar26;
            if ((((((*(ulonglong *)(lVar26 + 0x38) & 0x3000000000000000) == 0) || (lVar20 != 0)) ||
                 (DAT_14c758590 != '\x01')) || ((*piVar3 == 0 || (*plVar2 != lVar11)))) ||
               ((*(ulonglong *)(lVar26 + 0x38) & 5) != 0)) {
              lVar26 = FUN_14470ba62(lVar26);
            }
            else {
              puVar22 = TlsGetValue(DAT_14c844254);
              (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bfc));
              lVar26 = FUN_14470ba62(lVar26);
              (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bf8));
            }
            *plVar5 = lVar20;
            if (lVar26 == 0) break;
            LOCK();
            *(ulonglong *)(lVar26 + 0x38) = *(ulonglong *)(lVar26 + 0x38) | 2;
            UNLOCK();
          }
          goto LAB_142742c00;
        }
        if (*(int *)(lVar11 + 0x7bd8) == 0) goto LAB_142742f9e;
        bVar35 = !bVar34;
        bVar34 = true;
      } while (bVar35);
      if (bVar33) {
        uVar23 = puVar12[1];
        lVar26 = **(longlong **)(piVar6 + 0x1a);
        LOCK();
        *puVar12 = (ulonglong)((uint)uVar23 & 0x3fff);
        UNLOCK();
        (**(code **)(*(longlong *)puVar12[3] + 0x18))();
        LOCK();
        uVar27 = *(ulonglong *)(piVar6 + 0x18);
        bVar33 = uVar23 == uVar27;
        if (bVar33) {
          *(ulonglong *)(piVar6 + 0x18) =
               (longlong)puVar12 - lVar26 >> 6 |
               (uVar23 & 0xfffffc0000000000) + 0x40000000000 |
               (ulonglong)((uint)uVar23 & 0xfffc000) - 0x4000;
          uVar27 = uVar23;
        }
        UNLOCK();
        if (bVar33) {
          uVar10 = *puVar4;
          *puVar4 = 0;
          if (DAT_14c872d28 != (longlong *)0x0) {
            pcVar25 = *(code **)(*DAT_14c872d28 + 0x88);
            if ((pcVar25 == FUN_1467c247e) &&
               (pcVar25 = *(code **)(*(longlong *)DAT_14c872d28[0xf] + 0x88),
               pcVar25 == FUN_1467c2c66)) {
              FUN_14002cacc();
              pcVar24 = TlsGetValue(DAT_14c758740);
              if (pcVar24 != (char *)0x0) {
                pcVar24[0x670] = '\0';
                LOCK();
                cVar7 = *pcVar24;
                if (cVar7 == '\x01') {
                  *pcVar24 = '\0';
                }
                UNLOCK();
                if (cVar7 != '\x01') {
                  FUN_14008cdb0();
                }
              }
            }
            else {
              (*pcVar25)();
            }
          }
          (**(code **)(*(longlong *)puVar12[3] + 0x20))((longlong *)puVar12[3],0xffffffff);
          if (DAT_14c872d28 != (longlong *)0x0) {
            pcVar25 = *(code **)(*DAT_14c872d28 + 0x80);
            if ((pcVar25 == FUN_1467c2422) &&
               (pcVar25 = *(code **)(*(longlong *)DAT_14c872d28[0xf] + 0x80),
               pcVar25 == FUN_1467c2c2c)) {
              pcVar24 = TlsGetValue(DAT_14c758740);
              if (pcVar24 != (char *)0x0) {
                LOCK();
                cVar7 = *pcVar24;
                if (cVar7 == '\0') {
                  *pcVar24 = '\x01';
                }
                UNLOCK();
                if (cVar7 != '\0') {
                  FUN_1447d2058(pcVar24);
                }
                pcVar24[0x670] = '\x01';
              }
            }
            else {
              (*pcVar25)();
            }
          }
          *puVar4 = uVar10;
        }
        else {
          puVar12[1] = uVar27;
        }
        bVar33 = !bVar33;
      }
      else {
        puVar12[1] = *(ulonglong *)((ulonglong)bVar8 * 0x80 + lVar11 + 0x60);
        bVar33 = true;
      }
    } while( true );
  }
  puVar19 = (ulonglong *)(lVar11 + (ulonglong)bVar8 * 0x80 + 0x58);
  lVar31 = (ulonglong)bVar8 * 0x80 + lVar11;
  lVar20 = (ulonglong)(bVar8 ^ 1) * 0x80 + lVar11;
  plVar5 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  bVar33 = false;
  bVar34 = false;
  bVar35 = true;
LAB_1427424a7:
  do {
    lVar21 = FUN_144a0dba0(lVar13,bVar8);
    if (lVar21 != 0) {
      do {
        if (bVar33) {
          uVar27 = *(ulonglong *)(lVar31 + 0x58);
          do {
            uVar29 = uVar27 >> 0x1c ^ uVar27 >> 0xe;
            LOCK();
            uVar23 = *(ulonglong *)(lVar31 + 0x58);
            bVar33 = uVar27 == uVar23;
            if (bVar33) {
              *(ulonglong *)(lVar31 + 0x58) =
                   ((ulonglong)((uint)((uVar29 & 0x3fff) != 0) << 0x1c) | 0xffffffffefffc000) +
                   uVar27;
              uVar23 = uVar27;
            }
            UNLOCK();
            uVar27 = uVar23;
          } while (!bVar33);
          if ((uVar29 & 0x3fff) == 0) {
            iVar17 = FUN_140031ea8(lVar31,1);
            bVar33 = false;
            if ((iVar17 != 0) || (*piVar3 == 1)) goto LAB_14274253c;
            FUN_140031ea8(lVar20,1);
          }
          bVar33 = false;
        }
LAB_14274253c:
        lVar15 = *plVar5;
        *plVar5 = lVar21;
        if (((((*(ulonglong *)(lVar21 + 0x38) & 0x3000000000000000) == 0) || (lVar15 != 0)) ||
            (DAT_14c758590 != '\x01')) ||
           (((*piVar3 == 0 || (*plVar2 != lVar11)) || ((*(ulonglong *)(lVar21 + 0x38) & 5) != 0))))
        {
          lVar21 = FUN_14470ba62(lVar21);
        }
        else {
          puVar22 = TlsGetValue(DAT_14c844254);
          (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bfc));
          lVar21 = FUN_14470ba62(lVar21);
          (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bf8));
        }
        *plVar5 = lVar15;
        if (lVar21 == 0) goto LAB_142742722;
        LOCK();
        *(ulonglong *)(lVar21 + 0x38) = *(ulonglong *)(lVar21 + 0x38) | 2;
        UNLOCK();
      } while( true );
    }
    lVar21 = FUN_144afd00c(lVar13,bVar8);
    if (lVar21 != 0) {
      do {
        if (bVar33) {
          uVar27 = *(ulonglong *)(lVar31 + 0x58);
          do {
            uVar29 = uVar27 >> 0x1c ^ uVar27 >> 0xe;
            LOCK();
            uVar23 = *(ulonglong *)(lVar31 + 0x58);
            bVar33 = uVar27 == uVar23;
            if (bVar33) {
              *(ulonglong *)(lVar31 + 0x58) =
                   ((ulonglong)((uint)((uVar29 & 0x3fff) != 0) << 0x1c) | 0xffffffffefffc000) +
                   uVar27;
              uVar23 = uVar27;
            }
            UNLOCK();
            uVar27 = uVar23;
          } while (!bVar33);
          if ((uVar29 & 0x3fff) == 0) {
            iVar17 = FUN_140031ea8(lVar31,1);
            bVar33 = false;
            if ((iVar17 != 0) || (*piVar3 == 1)) goto LAB_142742676;
            FUN_140031ea8(lVar20,1);
          }
          bVar33 = false;
        }
LAB_142742676:
        lVar15 = *plVar5;
        *plVar5 = lVar21;
        if ((((((*(ulonglong *)(lVar21 + 0x38) & 0x3000000000000000) == 0) || (lVar15 != 0)) ||
             (DAT_14c758590 != '\x01')) || ((*piVar3 == 0 || (*plVar2 != lVar11)))) ||
           ((*(ulonglong *)(lVar21 + 0x38) & 5) != 0)) {
          lVar21 = FUN_14470ba62(lVar21);
        }
        else {
          puVar22 = TlsGetValue(DAT_14c844254);
          (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bfc));
          lVar21 = FUN_14470ba62(lVar21);
          (**(code **)*puVar22)(puVar22,*(undefined4 *)(lVar11 + 0x7bf8));
        }
        *plVar5 = lVar15;
        if (lVar21 == 0) goto LAB_142742722;
        LOCK();
        *(ulonglong *)(lVar21 + 0x38) = *(ulonglong *)(lVar21 + 0x38) | 2;
        UNLOCK();
      } while( true );
    }
    iVar17 = *(int *)(lVar11 + 0x7bd8);
    if (iVar17 == 0) {
      if (!bVar33) break;
      uVar27 = *puVar19;
      do {
        LOCK();
        uVar23 = *puVar19;
        bVar33 = uVar27 == uVar23;
        if (bVar33) {
          *puVar19 = ((ulonglong)
                      ((uint)((((uint)(uVar27 >> 0x1c) ^ (uint)(uVar27 >> 0xe) & 0x3ffff) & 0x3fff)
                             != 0) << 0x1c) | 0xffffffffefffc000) + uVar27;
          uVar23 = uVar27;
        }
        UNLOCK();
        uVar27 = uVar23;
      } while (!bVar33);
      bVar33 = false;
    }
    else if (bVar35) {
      if (bVar34) {
        *(undefined4 *)(puVar12 + 2) = 0;
        uVar27 = *(ulonglong *)(lVar31 + 0x58);
        if ((uVar27 & 0x3fff0000000) == 0) {
          lVar21 = **(longlong **)(lVar31 + 0x68);
          *puVar12 = (ulonglong)((uint)uVar27 & 0x3fff);
          LOCK();
          uVar23 = *(ulonglong *)(lVar31 + 0x58);
          bVar34 = uVar27 == uVar23;
          if (bVar34) {
            *(ulonglong *)(lVar31 + 0x58) =
                 (longlong)puVar12 - lVar21 >> 6 | (uVar27 & 0xfffffc000fffc000) + 0x3ffffffc000;
            uVar23 = uVar27;
          }
          UNLOCK();
          if (bVar34) {
            iVar32 = 0;
            do {
              if ((int)puVar12[2] != 0) goto LAB_142742799;
              uVar27 = rdtsc();
              uVar23 = CONCAT44((int)(uVar23 >> 0x20),(int)uVar27);
              uVar29 = uVar27 & 0xffffffff00000000 | uVar23;
              uVar27 = (longlong)(int)lVar26;
              if (uVar29 == 0) {
                uVar27 = 0;
              }
              if (DAT_14c8c27c9 != '\0') {
                rdtsc();
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              do {
                uVar16 = rdtsc();
                uVar23 = CONCAT44((int)(uVar23 >> 0x20),(int)uVar16);
              } while ((uVar16 & 0xffffffff00000000 | uVar23) - uVar29 < uVar27);
              iVar32 = iVar32 + 1;
            } while (iVar32 != 0x35);
            (**(code **)(*(longlong *)puVar12[3] + 0x18))();
            bVar34 = false;
            if (bVar33) {
              bVar33 = bVar34;
            }
            LOCK();
            bVar35 = (int)puVar12[2] == 0;
            if (bVar35) {
              *(int *)(puVar12 + 2) = 1;
            }
            UNLOCK();
            if (!bVar35) goto LAB_14274281e;
            uVar10 = *puVar4;
            *puVar4 = 0;
            if (DAT_14c872d28 != (longlong *)0x0) {
              pcVar25 = *(code **)(*DAT_14c872d28 + 0x88);
              if (pcVar25 == FUN_1467c247e) {
                pcVar25 = *(code **)(*(longlong *)DAT_14c872d28[0xf] + 0x88);
                if (pcVar25 == FUN_1467c2c66) {
                  FUN_14002cacc((longlong *)DAT_14c872d28[0xf],0x1467c2c01);
                  pcVar24 = TlsGetValue(DAT_14c758740);
                  if (pcVar24 != (char *)0x0) {
                    pcVar24[0x670] = '\0';
                    LOCK();
                    cVar7 = *pcVar24;
                    if (cVar7 == '\x01') {
                      *pcVar24 = '\0';
                    }
                    UNLOCK();
                    if (cVar7 != '\x01') {
                      FUN_14008cdb0();
                    }
                  }
                  goto LAB_142742983;
                }
              }
              (*pcVar25)();
            }
LAB_142742983:
            (**(code **)(*(longlong *)puVar12[3] + 0x20))((longlong *)puVar12[3],0xffffffff,0);
            if (DAT_14c872d28 != (longlong *)0x0) {
              pcVar25 = *(code **)(*DAT_14c872d28 + 0x80);
              if ((pcVar25 == FUN_1467c2422) &&
                 (pcVar25 = *(code **)(*(longlong *)DAT_14c872d28[0xf] + 0x80),
                 pcVar25 == FUN_1467c2c2c)) {
                pcVar24 = TlsGetValue(DAT_14c758740);
                if (pcVar24 != (char *)0x0) {
                  LOCK();
                  cVar7 = *pcVar24;
                  if (cVar7 == '\0') {
                    *pcVar24 = '\x01';
                  }
                  UNLOCK();
                  if (cVar7 != '\0') {
                    FUN_1447d2058(pcVar24);
                  }
                  pcVar24[0x670] = '\x01';
                }
              }
              else {
                (*pcVar25)();
              }
            }
            *puVar4 = uVar10;
            bVar34 = false;
            goto LAB_14274281e;
          }
        }
        else {
          LOCK();
          bVar34 = uVar27 == *(ulonglong *)(lVar31 + 0x58);
          if (bVar34) {
            *(ulonglong *)(lVar31 + 0x58) = uVar27 + 0x3ffefffc000;
          }
          UNLOCK();
          if (bVar34) {
LAB_142742799:
            bVar34 = false;
            if (bVar33) {
              bVar33 = bVar34;
            }
            goto LAB_14274281e;
          }
        }
      }
      else {
        if (!bVar33) {
          bVar33 = true;
        }
        LOCK();
        *puVar19 = *puVar19 + 0x4000;
        UNLOCK();
      }
      bVar34 = true;
    }
LAB_14274281e:
    bVar35 = true;
  } while (iVar17 != 0);
LAB_142742f9e:
  *puVar4 = uVar9;
  *(longlong *)(lVar14 + 0x2b0) = 0;
  *plVar2 = 0;
  *(char *)(lVar14 + 0x2cc) = '\0';
  *piVar3 = 0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872d28 + 0x90))();
  }
  *piVar1 = iVar30;
  return;
LAB_142742722:
  bVar34 = false;
  bVar35 = false;
  goto LAB_1427424a7;
}



// FUNCTION 142743038 FUN_142743038 body=29 status=ok
// SIG undefined FUN_142743038(void)

void FUN_142743038(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142743056 FUN_142743056 body=29 status=ok
// SIG undefined FUN_142743056(void)

undefined8 FUN_142743056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142743074 FUN_142743074 body=118 status=ok
// SIG undefined FUN_142743074(void)

void FUN_142743074(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x7b80));
  FUN_142743172(param_1 + 1,1,L"Foreground",lVar1 + 0x7be0,(int)param_1[3],
                *(undefined4 *)(lVar1 + 0x7bf8),*(undefined8 *)(lVar1 + 0x7be8));
  if ((LPCRITICAL_SECTION)(lVar1 + 0x7b80) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001427430db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x7b80));
    return;
  }
  return;
}



// FUNCTION 1427430ea FUN_1427430ea body=70 status=ok
// SIG undefined FUN_1427430ea(void)

undefined8 * FUN_1427430ea(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149dfff30;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142743130 FUN_142743130 body=5 status=ok
// SIG undefined FUN_142743130(void)

longlong FUN_142743130(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142743136 FUN_142743136 body=29 status=ok
// SIG undefined FUN_142743136(void)

void FUN_142743136(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142743154 FUN_142743154 body=29 status=ok
// SIG undefined FUN_142743154(void)

undefined8 FUN_142743154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142743172 FUN_142743172 body=1348 status=ok
// SIG undefined FUN_142743172(void)

void FUN_142743172(longlong *param_1,int param_2,undefined8 param_3,int *param_4,int param_5,
                  undefined4 param_6,ulonglong param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  ulonglong uVar15;
  code *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  ulonglong *local_d0;
  undefined4 local_c8;
  undefined1 local_be;
  undefined1 local_bd;
  int local_bc;
  longlong *local_b8;
  code *local_b0;
  int local_a4;
  undefined1 *local_a0;
  ulonglong local_98;
  undefined2 local_90;
  code *local_88;
  int local_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *param_1;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_bd = *(undefined1 *)(lVar7 + 0x304);
  *(undefined1 *)(lVar7 + 0x304) = 0;
  LOCK();
  iVar2 = *param_4;
  *param_4 = *param_4 + 1;
  UNLOCK();
  if (iVar2 < param_5) {
    pwVar13 = L"%s Worker #%d";
  }
  else {
    pwVar13 = L"%s Worker (Standby #%d)";
  }
  local_b8 = param_1;
  FUN_140002266(&local_88,pwVar13);
  local_bc = local_80;
  local_be = param_5 <= iVar2;
  LOCK();
  puVar1 = (uint *)(lVar6 + 0x7bdc);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  iVar2 = *(int *)(lVar6 + 0x7bc0);
  *(uint *)(lVar6 + 0x7bc0) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0x7bc4) < iVar2 + 1U) {
    FUN_1467ab3e4((longlong *)(lVar6 + 0x7bb8),iVar2);
  }
  local_a0 = (undefined1 *)(lVar7 + 0x304);
  lVar11 = *(longlong *)(lVar6 + 0x7bb8);
  lVar7 = lVar11 + (longlong)iVar2 * 0xa0580;
  lVar11 = lVar11 + (longlong)iVar2 * 0xa0580 + 0x100;
  lVar14 = 0;
  do {
    *(undefined4 *)(lVar7 + lVar14) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0x80 + lVar14) = 0;
    lVar18 = 0;
    do {
      *(undefined8 *)(lVar11 + lVar18) = 0;
      lVar18 = lVar18 + 0x80;
    } while (lVar18 != 0x20000);
    lVar14 = lVar14 + 0x20100;
    lVar11 = lVar11 + 0x20100;
  } while (lVar14 != 0xa0500);
  *(undefined8 *)(lVar7 + 0xa0540) = 0;
  *(undefined8 *)(lVar7 + 0xa0548) = 0;
  *(undefined8 *)(lVar7 + 0xa0530) = 0;
  *(undefined8 *)(lVar7 + 0xa0538) = 0;
  *(undefined8 *)(lVar7 + 0xa0520) = 0;
  *(undefined8 *)(lVar7 + 0xa0528) = 0;
  *(undefined8 *)(lVar7 + 0xa0510) = 0;
  *(undefined8 *)(lVar7 + 0xa0518) = 0;
  *(undefined8 *)(lVar7 + 0xa0500) = 0;
  *(undefined8 *)(lVar7 + 0xa0508) = 0;
  *(longlong *)(lVar7 + 0xa0550) = lVar6 + 0x100;
  *(undefined8 *)(lVar7 + 0xa0558) = 0xffffffff;
  *(int *)(lVar7 + 0xa0560) = param_2;
  LOCK();
  puVar1 = (uint *)(lVar6 + 0x7b00);
  uVar21 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (0x3ff < uVar21) {
    FUN_140033559("Runtime\\Core\\Public\\Async/Fundamental\\LocalQueue.h",0x115,
                  L"Attempting to add more than the maximum allowed number of queues (%d)");
  }
  *(longlong *)(lVar6 + 0x5b00 + (ulonglong)uVar21 * 8) = lVar7;
  puVar1 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2f4);
  lVar11 = 0;
  local_b0 = local_88;
  local_a4 = param_2;
  do {
    lVar14 = *(longlong *)(lVar7 + 0xa0550);
    uVar21 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2f8);
    if ((uVar21 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2f8) = uVar21 | 1;
      LOCK();
      UNLOCK();
      uVar21 = (DAT_14c82b9c0 >> 0x10 ^ DAT_14c82b9c0) * 0x45d9f3b;
      uVar21 = (uVar21 >> 0x10 ^ uVar21) * 0x45d9f3b;
      DAT_14c82b9c0 = DAT_14c82b9c0 + 1;
      *puVar1 = uVar21 >> 0x10 ^ uVar21;
    }
    lVar18 = lVar14 + lVar11 * 0x1200;
    for (lVar12 = *(longlong *)(&DAT_00001100 + lVar18); lVar12 != 0;
        lVar12 = *(longlong *)(lVar12 + 0x1000)) {
      lVar19 = 0;
      do {
        uVar15 = (ulonglong)((*puVar1 + (int)lVar19 & 0x1f) << 7);
        plVar9 = (longlong *)(lVar12 + uVar15);
        LOCK();
        bVar22 = *plVar9 == -1;
        if (bVar22) {
          *plVar9 = 0;
        }
        UNLOCK();
        if (bVar22) {
          lVar12 = lVar12 + uVar15;
          goto LAB_1427433c7;
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x20);
    }
    lVar12 = FUN_1414cf29e(lVar14 + lVar11 * 0x1200 + 0x100);
    local_88 = local_b0;
LAB_1427433c7:
    puVar8 = *(undefined8 **)(lVar7 + 0xa0508 + lVar11 * 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0xffffffffffffffff;
    }
    plVar9 = (longlong *)(lVar11 * 0x10 + lVar7 + 0xa0500);
    *plVar9 = lVar18;
    plVar9[1] = lVar12;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 5);
  lVar14 = (longlong)(int)uVar3 * 0x40;
  *(undefined1 *)(*(longlong *)(lVar6 + 0x7bc8) + 0x20 + lVar14) = local_be;
  lVar7 = *(longlong *)(lVar6 + 0x7bb8);
  lVar11 = *(longlong *)(lVar6 + 0x7bc8);
  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)local_b8[1]);
  pcVar16 = (code *)&DAT_149dfb77a;
  if (local_bc != 0) {
    pcVar16 = local_88;
  }
  uVar5 = *(undefined4 *)(&DAT_149dfe170 + (ulonglong)(uVar3 & 7) * 4);
  uVar21 = 0;
  param_7 = -(ulonglong)(param_7 == 0) | param_7;
  lVar18 = FUN_14157faac();
  uVar4 = *(ushort *)(lVar18 + 0x80);
  if ((ulonglong)uVar4 != 0) {
    uVar20 = (ulonglong)(uVar3 + 2);
    uVar21 = uVar4 - 1;
    uVar15 = 0;
    do {
      uVar17 = POPCOUNT(*(undefined8 *)(lVar18 + uVar15 * 8));
      bVar22 = uVar20 < uVar17;
      uVar20 = uVar20 - uVar17;
      if (bVar22) {
        param_7 = param_7 | -(ulonglong)(uVar15 != 0);
        uVar21 = (uint)uVar15;
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar4 != uVar15);
  }
  uVar15 = *(ulonglong *)(lVar18 + (ulonglong)(uVar21 & 0xffff) * 8);
  uVar10 = FUN_14001cc68(0x10,0x10);
  local_90 = (undefined2)uVar21;
  local_88 = (code *)0x0;
  local_98 = param_7 & uVar15;
  local_78 = (longlong *)FUN_14001cc68(0x28,8);
  *local_78 = (longlong)&PTR_LAB_149dfff10;
  *(bool *)((longlong)local_78 + 0x24) = local_a4 == 0;
  local_78[1] = lVar6;
  local_78[2] = lVar14 + lVar11;
  local_78[3] = (longlong)(int)uVar3 * 0xa0580 + lVar7;
  *(undefined4 *)(local_78 + 4) = uVar5;
  if (local_78 + 1 != (longlong *)0x0) {
    local_88 = FUN_14274231c;
  }
  local_c8 = local_b8._0_4_;
  local_d0 = &local_98;
  local_d8 = param_6;
  FUN_1411b0d90(uVar10,pcVar16,&local_88,0);
  if (local_88 != (code *)0x0) {
    plVar9 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar9 = local_68;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  iVar2 = *(int *)(lVar6 + 0x7bb0);
  *(uint *)(lVar6 + 0x7bb0) = iVar2 + 1U;
  if (*(uint *)(lVar6 + 0x7bb4) < iVar2 + 1U) {
    FUN_1467ab23a((longlong *)(lVar6 + 0x7ba8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(lVar6 + 0x7ba8) + (longlong)iVar2 * 8) = uVar10;
  if (local_b0 != (code *)0x0) {
    FUN_1400020a8();
  }
  *local_a0 = local_bd;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427436b8 FUN_1427436b8 body=111 status=ok
// SIG undefined FUN_1427436b8(void)

void FUN_1427436b8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x7b80));
  FUN_142743172(param_1 + 1,0,L"Background",lVar1 + 0x7be4,(int)param_1[3],(int)param_1[4],
                *(undefined8 *)(lVar1 + 0x7bf0));
  if ((LPCRITICAL_SECTION)(lVar1 + 0x7b80) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142743718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x7b80));
    return;
  }
  return;
}



// FUNCTION 142743728 FUN_142743728 body=78 status=ok
// SIG undefined FUN_142743728(void)

undefined8 * FUN_142743728(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149e00080;
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



// FUNCTION 142743776 FUN_142743776 body=5 status=ok
// SIG undefined FUN_142743776(void)

longlong FUN_142743776(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14274377c FUN_14274377c body=29 status=ok
// SIG undefined FUN_14274377c(void)

void FUN_14274377c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14274379a FUN_14274379a body=29 status=ok
// SIG undefined FUN_14274379a(void)

undefined8 FUN_14274379a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427437e6 FUN_1427437e6 body=31 status=ok
// SIG undefined FUN_1427437e6(void)

undefined8 FUN_1427437e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142743806 FUN_142743806 body=282 status=ok
// SIG undefined FUN_142743806(void)

undefined8 * FUN_142743806(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142733bf0);
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



// FUNCTION 142743920 FUN_142743920 body=274 status=ok
// SIG undefined FUN_142743920(void)

void FUN_142743920(undefined8 *param_1)

{
  DWORD DVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  DVar1 = *(DWORD *)(param_1 + 0x1e);
  QueryPerformanceCounter(&local_30);
  pcVar2 = (code *)param_1[0x16];
  plVar5 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar5 = param_1 + 0x1a;
  }
  local_30.s.LowPart = DVar1;
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(uVar4,&local_30);
  QueryPerformanceCounter(&local_30);
  piVar3 = (int *)param_1[0x1f];
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
    }
    else {
      plVar5 = (longlong *)param_1[0x20];
      if (plVar5 == (longlong *)0x0) goto LAB_1427439bb;
      (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
    }
    QueryPerformanceCounter(&local_30);
  }
LAB_1427439bb:
  if (param_1[0x16] != 0) {
    plVar5 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(param_1 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142743a34 FUN_142743a34 body=986 status=ok
// SIG undefined FUN_142743a34(void)

void FUN_142743a34(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [16];
  byte *local_80;
  byte local_78;
  undefined1 local_69;
  byte *local_68;
  byte **local_60;
  code *local_58;
  byte **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar7 = (undefined8 *)FUN_1467ab86e();
  FUN_1467ab942(puVar7,param_2);
  *puVar7 = &PTR_FUN_149e00138;
  lVar5 = *param_3;
  if (lVar5 != 0) {
    LOCK();
    *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) + 1;
    UNLOCK();
    if ((*(byte *)(lVar5 + 0xa0) & 1) == 0) {
      pbVar2 = (byte *)(lVar5 + 0xa1);
      uVar10 = 0;
      LOCK();
      bVar12 = *(char *)(lVar5 + 0xa1) == '\0';
      if (bVar12) {
        *(char *)(lVar5 + 0xa1) = '\x01';
      }
      UNLOCK();
      if (!bVar12) {
LAB_142743c1f:
        do {
          bVar6 = *pbVar2;
          while ((bVar6 & 1) != 0) {
            bVar8 = bVar6;
            if ((bVar6 & 2) == 0) {
              if (uVar10 < 0x28) {
                SwitchToThread();
                uVar10 = uVar10 + 1;
                goto LAB_142743c1f;
              }
              bVar8 = bVar6 | 2;
              LOCK();
              bVar3 = *pbVar2;
              if (bVar6 == bVar3) {
                *pbVar2 = bVar8;
              }
              UNLOCK();
              if (bVar6 != bVar3) goto LAB_142743c1f;
            }
            local_50 = (byte **)&local_69;
            local_58 = (code *)&DAT_1427437b8;
            local_60 = &local_80;
            local_68 = &LAB_1427437ba;
            local_98 = 0x7ff0000000000000;
            local_80 = pbVar2;
            local_78 = bVar8;
            FUN_1456d3e9c(local_90,pbVar2,&local_68,&local_58);
            bVar6 = *pbVar2;
          }
          LOCK();
          bVar8 = *pbVar2;
          if (bVar6 == bVar8) {
            *pbVar2 = bVar6 | 1;
          }
          UNLOCK();
        } while (bVar6 != bVar8);
      }
      bVar6 = *(byte *)(lVar5 + 0xa0);
      if ((bVar6 & 1) == 0) {
        iVar4 = *(int *)(lVar5 + 0x98);
        *(uint *)(lVar5 + 0x98) = iVar4 + 1U;
        if (*(uint *)(lVar5 + 0x9c) < iVar4 + 1U) {
          FUN_144724bd8(lVar5 + 0x88,iVar4);
        }
        lVar11 = lVar5 + 0x88;
        if (*(longlong *)(lVar5 + 0x90) != 0) {
          lVar11 = *(longlong *)(lVar5 + 0x90);
        }
        *(undefined8 **)(lVar11 + (longlong)iVar4 * 8) = puVar7;
      }
      LOCK();
      bVar8 = *pbVar2;
      if (bVar8 == 1) {
        *pbVar2 = 0;
      }
      UNLOCK();
      if (bVar8 != 1) {
        bVar8 = *pbVar2;
        do {
          if (bVar8 != 1) {
            local_50 = &local_68;
            local_58 = FUN_1400e502e;
            local_68 = pbVar2;
            FUN_14008cf08(pbVar2);
            break;
          }
          LOCK();
          bVar8 = *pbVar2;
          bVar12 = bVar8 == 1;
          if (bVar12) {
            *pbVar2 = 0;
            bVar8 = 1;
          }
          UNLOCK();
        } while (!bVar12);
      }
      if ((bVar6 & 1) == 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        pbVar2 = (byte *)(puVar7 + 8);
        uVar10 = 0;
        LOCK();
        bVar12 = *(char *)(puVar7 + 8) == '\0';
        if (bVar12) {
          *(char *)(puVar7 + 8) = '\x01';
        }
        UNLOCK();
        if (!bVar12) {
LAB_142743d5c:
          do {
            bVar6 = *pbVar2;
            while ((bVar6 & 1) != 0) {
              bVar8 = bVar6;
              if ((bVar6 & 2) == 0) {
                if (uVar10 < 0x28) {
                  SwitchToThread();
                  uVar10 = uVar10 + 1;
                  goto LAB_142743d5c;
                }
                bVar8 = bVar6 | 2;
                LOCK();
                bVar3 = *pbVar2;
                if (bVar6 == bVar3) {
                  *pbVar2 = bVar8;
                }
                UNLOCK();
                if (bVar6 != bVar3) goto LAB_142743d5c;
              }
              local_50 = (byte **)&local_69;
              local_58 = (code *)&DAT_1427437b8;
              local_60 = &local_80;
              local_68 = &LAB_1427437ba;
              local_98 = 0x7ff0000000000000;
              local_80 = pbVar2;
              local_78 = bVar8;
              FUN_1456d3e9c(local_90,pbVar2,&local_68,&local_58);
              bVar6 = *pbVar2;
            }
            LOCK();
            bVar8 = *pbVar2;
            if (bVar6 == bVar8) {
              *pbVar2 = bVar6 | 1;
            }
            UNLOCK();
          } while (bVar6 != bVar8);
        }
        iVar4 = *(int *)(puVar7 + 7);
        *(uint *)(puVar7 + 7) = iVar4 + 1U;
        if (*(uint *)((longlong)puVar7 + 0x3c) < iVar4 + 1U) {
          FUN_144724bd8(puVar7 + 5,iVar4);
        }
        puVar9 = puVar7 + 5;
        if ((undefined8 *)puVar7[6] != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)puVar7[6];
        }
        puVar9[iVar4] = lVar5;
        LOCK();
        bVar12 = *(char *)(puVar7 + 8) == '\x01';
        if (bVar12) {
          *(char *)(puVar7 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar12) {
          bVar6 = *pbVar2;
          do {
            if (bVar6 != 1) {
              local_50 = &local_68;
              local_58 = FUN_1400e502e;
              local_68 = pbVar2;
              FUN_14008cf08(pbVar2);
              break;
            }
            LOCK();
            bVar6 = *pbVar2;
            bVar12 = bVar6 == 1;
            if (bVar12) {
              *pbVar2 = 0;
              bVar6 = 1;
            }
            UNLOCK();
          } while (!bVar12);
        }
        goto LAB_142743b60;
      }
    }
    LOCK();
    *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) + -1;
    UNLOCK();
  }
LAB_142743b60:
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar9 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  *param_1 = (longlong)puVar7;
  local_58 = (code *)CONCAT71(local_58._1_7_,1);
  FUN_1447439e4(puVar7);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142743e1c FUN_142743e1c body=140 status=ok
// SIG undefined FUN_142743e1c(void)

void FUN_142743e1c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    plVar5 = (longlong *)*param_1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar5[1] = 0;
        plVar5[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar5 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 142743ea8 FUN_142743ea8 body=333 status=ok
// SIG undefined FUN_142743ea8(void)

void FUN_142743ea8(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_142743f11;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_142743f11:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 142743ff6 FUN_142743ff6 body=363 status=ok
// SIG undefined FUN_142743ff6(void)

void FUN_142743ff6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14274408c;
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
LAB_14274408c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 142744161 FUN_142744161 body=943 status=ok
// SIG undefined FUN_142744161(void)

void FUN_142744161(undefined8 *param_1,longlong *param_2,int param_3,int param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2 + (longlong)param_3 * 0x18;
  plVar3 = (longlong *)*param_1;
  lVar10 = (longlong)param_4;
  uVar9 = param_1[4];
  uVar8 = param_1[3] - uVar9 * lVar10;
  if (uVar9 <= uVar8) {
    uVar8 = uVar9;
  }
  local_a8 = lVar2;
  FUN_1467fe474(param_1[2],&local_68,uVar9 * lVar10,uVar8);
  local_78 = *(longlong **)(lVar2 + 8);
  uStack_70 = *(ulonglong *)(lVar2 + 0x10);
  if (uStack_70 == 0) {
    uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar8);
    FUN_140e03604(&local_58,uVar5);
    plVar7 = local_58;
    if (local_58 == (longlong *)0x0) {
      uStack_70 = 0;
      local_78 = (longlong *)0x0;
    }
    else {
      if (((ulonglong)local_58[3] >> 0x3e & 1) == 0) {
        (**(code **)(*local_58 + 8))(local_58);
      }
      uVar9 = plVar7[2];
      if ((plVar7[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      local_78 = (longlong *)plVar7[1];
      uStack_70 = uVar9;
    }
  }
  else {
    FUN_144b47410(param_1[1],CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
    plVar7 = (longlong *)0x0;
  }
  local_88 = local_68;
  uStack_84 = uStack_64;
  uStack_80 = uStack_60;
  uStack_7c = uStack_5c;
  cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,&local_78);
  if (cVar4 == '\0') {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 3;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (((uint)lVar2 & 0x3fffffff) == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar7[1] = 0;
        plVar7[2] = 0;
        LOCK();
        puVar1 = (ulonglong *)(plVar7 + 3);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 0x40000000;
        UNLOCK();
        if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
  }
  else {
    uVar9 = uStack_70;
    if (uVar8 <= uStack_70) {
      if (CONCAT44(uStack_5c,uStack_60) != 0) {
        memcpy(local_78,(void *)CONCAT44(uStack_64,local_68),CONCAT44(uStack_5c,uStack_60));
      }
      uVar9 = uVar8;
      if (uVar8 <= uStack_70) {
        uStack_70 = uVar8;
      }
    }
    if (plVar7 == (longlong *)0x0) {
      uVar8 = *(ulonglong *)(lVar2 + 0x10);
      uVar6 = uVar9;
      if (uVar8 < uVar9) {
        uVar6 = uVar8;
      }
      *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + uVar6;
      *(ulonglong *)(lVar2 + 0x10) = uVar8 - uVar6;
    }
    else {
      local_58 = local_78;
      local_98 = plVar7;
      local_50 = uStack_70;
      FUN_14276fe3e(&local_90);
      plVar7 = local_90;
      plVar3 = *(longlong **)(*(longlong *)param_1[5] + lVar10 * 8);
      local_90 = (longlong *)0x0;
      *(longlong **)(*(longlong *)param_1[5] + lVar10 * 8) = plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 3;
        lVar2 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (((uint)lVar2 & 0x3fffffff) == 1) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar3[1] = 0;
          plVar3[2] = 0;
          LOCK();
          puVar1 = (ulonglong *)(plVar3 + 3);
          uVar8 = *puVar1;
          *puVar1 = *puVar1 - 0x40000000;
          UNLOCK();
          if ((uVar8 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar3)(plVar3,1);
          }
        }
        plVar3 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_90 + 3;
          lVar2 = *plVar7;
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (((uint)lVar2 & 0x3fffffff) == 1) {
            (**(code **)(*local_90 + 0x10))(local_90);
            plVar3[1] = 0;
            plVar3[2] = 0;
            LOCK();
            puVar1 = (ulonglong *)(plVar3 + 3);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 - 0x40000000;
            UNLOCK();
            if ((uVar8 & 0xfffffffc0000000) == 0x40000000) {
              (**(code **)*plVar3)(plVar3,1);
            }
          }
        }
      }
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_98 + 3;
        lVar2 = *plVar7;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (((uint)lVar2 & 0x3fffffff) == 1) {
          (**(code **)(*local_98 + 0x10))(local_98);
          plVar3[1] = 0;
          plVar3[2] = 0;
          LOCK();
          puVar1 = (ulonglong *)(plVar3 + 3);
          uVar8 = *puVar1;
          *puVar1 = *puVar1 - 0x40000000;
          UNLOCK();
          if ((uVar8 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar3)(plVar3,1);
          }
        }
      }
    }
    *(int *)(*(longlong *)param_1[6] + lVar10 * 4) = (int)uVar9;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142744512 FUN_142744512 body=125 status=ok
// SIG undefined FUN_142744512(void)

void FUN_142744512(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_142744e3c(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142744590 FUN_142744590 body=940 status=ok
// SIG undefined FUN_142744590(void)

ulonglong FUN_142744590(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_142744512(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_142744716;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_142744716:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_142744862;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_142744161(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_142744864;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_142744862:
        uVar11 = 0;
LAB_142744864:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_142744862;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 14274493e FUN_14274493e body=73 status=ok
// SIG undefined FUN_14274493e(void)

void FUN_14274493e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142744e3c(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014274497d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142744988 FUN_142744988 body=434 status=ok
// SIG undefined FUN_142744988(void)

undefined8 * FUN_142744988(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_149e00158;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_142744e0c(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_142744a52;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142744a52:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 142744b3a FUN_142744b3a body=53 status=ok
// SIG undefined FUN_142744b3a(void)

void FUN_142744b3a(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142744b70 FUN_142744b70 body=667 status=ok
// SIG undefined FUN_142744b70(void)

void FUN_142744b70(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142744c6b;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_142733bf0);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142744c6b:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_142744ce5;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142744ce5:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142744d8c;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142733bf0);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142744d8c;
    }
    _aligned_free(_Memory);
  }
LAB_142744d8c:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142744e0c FUN_142744e0c body=47 status=ok
// SIG undefined FUN_142744e0c(void)

void FUN_142744e0c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142744e3c FUN_142744e3c body=369 status=ok
// SIG undefined FUN_142744e3c(void)

void FUN_142744e3c(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_149e00160;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_14274493e(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_14274493e(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142744fcc FUN_142744fcc body=450 status=ok
// SIG undefined FUN_142744fcc(void)

void FUN_142744fcc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149e00160;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_149e001a0;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1427450a9;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142733bf0);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1427450a9:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142745123;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142745123:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 14274518e FUN_14274518e body=26 status=ok
// SIG undefined FUN_14274518e(void)

undefined8 FUN_14274518e(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142744590(param_2,0);
  }
  return 0;
}



// FUNCTION 1427451a8 FUN_1427451a8 body=72 status=ok
// SIG undefined FUN_1427451a8(void)

undefined8
FUN_1427451a8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142744590(param_3,0);
  }
  FUN_142744fcc(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142745222 FUN_142745222 body=26 status=ok
// SIG undefined FUN_142745222(void)

undefined8 FUN_142745222(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142744590(*param_2,0);
  }
  return 0;
}



// FUNCTION 14274523c FUN_14274523c body=70 status=ok
// SIG undefined FUN_14274523c(void)

undefined8
FUN_14274523c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142744590(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149e001a0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142745282 FUN_142745282 body=179 status=ok
// SIG undefined FUN_142745282(void)

void FUN_142745282(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_14274493e(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142733bf0);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001427452fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142745344 FUN_142745344 body=1985 status=ok
// SIG undefined FUN_142745344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142745344(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 *local_c8;
  int local_c0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  DAT_14c82b3d0 = 0xffffffff;
  DAT_14c82b3d8 = &DAT_14c82b3e0;
  DAT_14c82b3e0 = 0;
  _DAT_14c82b3e8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c82b3f0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c82b3f0,4000);
  DAT_14c82b418 = 0;
  _DAT_14c82b420 = 0;
  _DAT_14c82b428 = 0;
  atexit((_func_5014 *)&LAB_142732284);
  FUN_145c3a88a();
  atexit((_func_5014 *)&LAB_142732289);
  local_d8 = 0;
  FUN_141471170(&DAT_14c82b430,L"Async.ParallelFor.YieldingTimeout",&DAT_14c7585cc,
                L"The timeout (in ms) when background priority parallel for task will yield execution to give higher priority tasks the chance to run."
               );
  atexit(FUN_142732449);
  local_d8 = 0;
  FUN_141471170(&DAT_14c82b448,L"TaskGraph.IgnoreThreadToDoGatherOn",&DAT_14c82b458,
                L"DEPRECATED! If 1, then we ignore the hint provided with SetGatherThreadForDontCompleteUntil and just run it on AnyHiPriThreadHiPriTask."
               );
  atexit(FUN_14273248e);
  local_d8 = 0;
  FUN_141471170(&DAT_14c82b460,L"TaskGraph.TestDontCompleteUntilForAlreadyComplete",&DAT_14c75859c,
                L"If 1, then we before spawning a gather task, we just check if all of the subtasks are complete, and in that case we can skip the gather."
               );
  atexit(FUN_1427324d3);
  local_d8 = 0;
  FUN_14153156c(&DAT_14c82b470,L"TaskGraph.EnableForkedMultithreading",&DAT_14c7585a0,
                L"When false will prevent the task graph from running multithreaded on forked processes."
               );
  atexit(FUN_142732518);
  local_d8 = 0;
  FUN_141471170(&DAT_14c82b480,L"TaskGraph.ForkedProcessMaxWorkerThreads",&DAT_14c7585a4,
                L"Configures the number of worker threads a forked process should spawn if it allows multithreading."
               );
  atexit(FUN_14273255d);
  local_d8 = 4;
  FUN_14153156c(&DAT_14c82b490,L"TaskGraph.UseDynamicPrioritization",&DAT_14c758590,
                L"Adjust thread priority per-task so that higher priority tasks running on background threads can\'t be preempted as easily. Helps a lot under high load."
               );
  atexit(FUN_1427325a2);
  local_d8 = 4;
  FUN_1415c789c(&DAT_14c82b4a0,L"TaskGraph.OversubscriptionRatio",&DAT_14c758594,
                L"Ratio used to compute the maximum numbers of workers allowed during oversubscription.\nYou might need to increase that value depending on how many recursive waits the scheduled tasks may contain.\nThe optimal scenario to strive for is using prerequisites to setup dependencies instead of waiting.\nOnce none of the scheduled tasks contains waiting logic anymore, this can be set to 1.0f, which effectively deactivate the feature."
               );
  atexit(FUN_1427325e7);
  local_d8 = 4;
  FUN_14153156c(&DAT_14c82b4b0,L"TaskGraph.UseDynamicThreadCreation",&DAT_14c758591,
                L"Allow threads to be created only when needed instead of at engine initialization."
               );
  atexit(FUN_14273262c);
  local_d8 = 0;
  FUN_141471170(&DAT_14c82b4c0,L"TaskGraph.NumForegroundWorkers",&DAT_14c7585a8,
                L"Configures the number of foreground worker threads. Requires the scheduler to be restarted to have an affect"
               );
  atexit(FUN_142732671);
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_1446efa72(&local_c8,0,2,0x10);
  local_c0 = 2;
  *local_c8 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_c8[2] = lVar2;
  *local_c8 = &PTR_FUN_149e00260;
  local_c8[3] = FUN_1427326b6;
  local_d8 = 0;
  FUN_1415c7246(&DAT_14c82b4d0,L"TaskGraph.ABTestThreads",
                L"Takes two 0/1 arguments. Equivalent to setting TaskGraph.UseHiPriThreads and TaskGraph.UseBackgroundThreads, respectively. Packages as one command for use with the abtest command."
                ,&local_c8);
  if (local_c0 == 0) {
LAB_142745660:
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c8 != (undefined8 *)0x0) {
    (**(code **)*local_c8)(local_c8,0);
    FUN_1446efa72(&local_c8,0,0,0x10);
    local_c0 = 0;
    goto LAB_142745660;
  }
  atexit(FUN_142732718);
  local_d8 = 1;
  FUN_141471170(&DAT_14c82b4e0,L"TaskGraph.UseBackgroundThreads",&DAT_14c7585dc,
                L"If > 0, then use background threads, otherwise run background tasks on normal priority task threads. Used for performance tuning."
               );
  atexit(FUN_14273275d);
  local_d8 = 1;
  FUN_141471170(&DAT_14c82b4f0,L"TaskGraph.UseHiPriThreads",&DAT_14c7585d8,
                L"If > 0, then use hi priority task threads, otherwise run background tasks on normal priority task threads. Used for performance tuning."
               );
  atexit(FUN_1427327a2);
  local_d8 = 0;
  FUN_141471170(&DAT_14c82b608,L"TaskGraph.PrintBroadcastWarnings",&DAT_14c7585ac,
                L"If > 0 taskgraph will emit warnings when waiting on broadcasts");
  atexit(FUN_142732842);
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_1446efa72(&local_c8,0,2,0x10);
  local_c0 = 2;
  *local_c8 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_c8[2] = lVar2;
  *local_c8 = &PTR_FUN_149e00260;
  local_c8[3] = FUN_142732887;
  local_d8 = 0;
  FUN_1415c7246(&DAT_14c82b618,L"TaskGraph.NumWorkerThreadsToIgnore",
                L"Used to tune the number of task threads. Generally once you have found the right value, PlatformMisc::NumberOfWorkerThreadsToSpawn() should be hardcoded."
                ,&local_c8);
  if (local_c0 == 0) {
LAB_1427457d4:
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_c8 != (undefined8 *)0x0) {
    (**(code **)*local_c8)(local_c8,0);
    FUN_1446efa72(&local_c8,0,0,0x10);
    local_c0 = 0;
    goto LAB_1427457d4;
  }
  atexit(FUN_142732935);
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_1446efa72(&local_c8,0,2,0x10);
  local_c0 = 2;
  *local_c8 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_c8[2] = lVar2;
  *local_c8 = &PTR_FUN_149e00260;
  local_c8[3] = FUN_14273297a;
  local_d8 = 0;
  FUN_1415c7246(&DAT_14c82b628,L"TaskGraph.TaskThreadPriority",
                L"Sets the priority of the task threads. Argument is one of belownormal, normal or abovenormal."
                ,&local_c8);
  if (local_c0 != 0) {
    if (local_c8 == (undefined8 *)0x0) goto LAB_1427458c0;
    (**(code **)*local_c8)(local_c8,0);
    FUN_1446efa72(&local_c8,0,0,0x10);
    local_c0 = 0;
  }
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1427458c0:
  atexit(FUN_142732a6a);
  _DAT_14c82b640 = 0x3fe47ae147ae147b;
  _DAT_14c82b648 = 0x3fd51eb851eb851f;
  _DAT_14c82b650 = 0x3fd3333333333333;
  _DAT_14c82b658 = 0x3fe3333333333333;
  _DAT_14c82b660 = 0x3fc3333333333333;
  _DAT_14c82b668 = 0x3faeb851eb851eb8;
  _DAT_14c82b670 = 0x3fd40346dc5d6388;
  _DAT_14c82b678 = 0x3fd50e5604189375;
  DAT_14c82b780 = 1;
  FUN_14603eb60(&DAT_14c82b640,&local_c8);
  ppuVar3 = &local_c8;
  puVar4 = &DAT_14c82b680;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((((((9.99999993922529e-09 < ABS(DAT_14c82b680)) || (9.99999993922529e-09 < ABS(DAT_14c82b688))
         ) || (9.99999993922529e-09 < ABS(DAT_14c82b690))) ||
       ((9.99999993922529e-09 < ABS(DAT_14c82b6a0) || (9.99999993922529e-09 < ABS(DAT_14c82b6a8)))))
      || ((9.99999993922529e-09 < ABS(DAT_14c82b6b0) ||
          ((9.99999993922529e-09 < ABS(DAT_14c82b6c0) || (9.99999993922529e-09 < ABS(DAT_14c82b6c8))
           ))))) || (9.99999993922529e-09 < ABS(DAT_14c82b6d0))) {
    FUN_14007522e(&local_c8,&DAT_14c82b680);
  }
  else {
    puVar4 = &DAT_14c846400;
    ppuVar3 = &local_c8;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *ppuVar3 = (undefined8 *)*puVar4;
      puVar4 = puVar4 + 1;
      ppuVar3 = ppuVar3 + 1;
    }
  }
  ppuVar3 = &local_c8;
  puVar4 = &DAT_14c82b700;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142745b30 FUN_142745b30 body=314 status=ok
// SIG undefined FUN_142745b30(void)

undefined8 * FUN_142745b30(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar2 = &PTR_FUN_149e013e0;
  puVar3 = puVar2 + 1;
  puVar2[1] = 0x200000009;
  _Src = (void *)FUN_144b52940(9,2);
  memcpy(puVar2 + 2,_Src,0x54);
  *(undefined4 *)(puVar2 + 5) = 0x100;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[0xd] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  local_28 = "CompressionFormat";
  local_20 = 0x11;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  (**(code **)(DAT_14c8337f0 + 0x28))(&DAT_14c8337f0,uVar1,puVar3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142745c6c FUN_142745c6c body=528 status=ok
// SIG undefined FUN_142745c6c(void)

undefined8
FUN_142745c6c(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,char param_5,
             char param_6,char param_7,longlong param_8)

{
  undefined4 uVar1;
  BOOL BVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined1 *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_9c [8];
  undefined8 local_94;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((byte)(param_5 - 1U) < 4) && (iVar6 = (int)param_6, 0xf1 < (byte)(param_6 - 10U))) {
    uVar1 = *(undefined4 *)(&DAT_149e02118 + (ulonglong)(byte)(param_5 - 1U) * 4);
    lVar3 = FUN_144b52c40(uVar1,param_4);
    if (lVar3 <= param_2) {
      _Src = (void *)FUN_144b52940(uVar1,iVar6);
      memcpy(local_9c,_Src,0x54);
      if (param_7 != '\0') {
        local_94 = 0x4000000000001;
      }
      local_a8 = param_3 - param_8;
      if (0 < DAT_14c8338d0) {
        lVar7 = 0;
        lVar3 = 0;
        do {
          BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c8338d8 + lVar7));
          if (BVar2 != 0) {
            lVar3 = *(longlong *)(DAT_14c8338d8 + 0x28 + lVar7);
            if (lVar3 == 0) {
              uVar4 = 0;
              uVar5 = FUN_14001cc68(DAT_14c8338c8,0);
              *(undefined8 *)(DAT_14c8338d8 + 0x28 + lVar7) = uVar5;
              lVar3 = *(longlong *)(DAT_14c8338d8 + 0x28 + lVar7);
              if (lVar3 == 0) goto LAB_142745ce6;
            }
            local_b0 = DAT_14c8338c8;
            local_c8 = local_a8;
            local_d0 = local_9c;
            local_c0 = 0;
            local_d8 = iVar6;
            lStack_b8 = lVar3;
            uVar4 = FUN_144b50c80(uVar1,param_3,param_4,param_1);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + DAT_14c8338d8));
            goto LAB_142745ce6;
          }
          lVar3 = lVar3 + 1;
          lVar7 = lVar7 + 0x40;
        } while (lVar3 < DAT_14c8338d0);
      }
      local_c0 = 0;
      lStack_b8 = 0;
      local_c8 = local_a8;
      local_d0 = local_9c;
      local_b0 = 0;
      local_d8 = iVar6;
      uVar4 = FUN_144b50c80(uVar1,param_3,param_4,param_1);
      goto LAB_142745ce6;
    }
  }
  uVar4 = 0;
LAB_142745ce6:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 142745e87 FUN_142745e87 body=136 status=ok
// SIG undefined FUN_142745e87(void)

void FUN_142745e87(void)

{
  undefined8 in_R9;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  ulonglong *local_120;
  char local_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = local_110;
  local_118 = '\0';
  local_120 = &local_10;
  local_138 = &stack0x00000028;
  local_128 = local_130;
  FUN_14089ca02(&local_130,in_R9);
  if (local_118 == '\x01') {
    FUN_1400020a8(local_130);
  }
  if ((local_10 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142745f10 FUN_142745f10 body=199 status=ok
// SIG undefined FUN_142745f10(void)

longlong * FUN_142745f10(longlong *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  bool bVar3;
  int extraout_EAX;
  ulonglong uVar5;
  uint uVar6;
  bool bVar8;
  size_t sVar4;
  ulonglong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar4 = wcslen(param_2);
    extraout_EAX = (int)sVar4;
    uVar6 = extraout_EAX + 1;
    uVar7 = (ulonglong)uVar6;
    if (extraout_EAX < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar7);
    }
    if (extraout_EAX < 0) {
      *(uint *)(param_1 + 1) = uVar6;
    }
    else {
      FUN_141701710(param_1,uVar7);
      lVar2 = param_1[1];
      *(uint *)(param_1 + 1) = (int)lVar2 + uVar6;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) < uVar6) {
        FUN_144761492(param_1);
      }
      lVar2 = *param_1;
      uVar5 = 0;
      bVar3 = false;
      do {
        bVar8 = bVar3;
        wVar1 = param_2[uVar5];
        *(char *)(lVar2 + uVar5) = (char)wVar1;
        uVar5 = uVar5 + 1;
        bVar3 = (bool)(bVar8 | 0x7f < (ushort)wVar1);
      } while (uVar7 != uVar5);
      if (bVar8 || 0x7f < (ushort)wVar1) {
        uVar5 = 0;
        do {
          if (0x7f < (ushort)param_2[uVar5]) {
            *(undefined1 *)(lVar2 + uVar5) = 0x3f;
          }
          uVar5 = uVar5 + 1;
        } while (uVar7 != uVar5);
        FUN_140e0237d(param_2,uVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 142745fd8 FUN_142745fd8 body=165 status=ok
// SIG undefined FUN_142745fd8(void)

longlong * FUN_142745fd8(longlong *param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_3) {
    FUN_141701710(param_1,param_3 + 1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + param_3 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) <= param_3) {
      FUN_144761492();
    }
    lVar3 = *param_1;
    uVar6 = (ulonglong)param_3;
    uVar5 = 0;
    bVar4 = 0;
    do {
      bVar2 = bVar4;
      uVar1 = *(ushort *)(param_2 + uVar5 * 2);
      *(char *)(lVar3 + uVar5) = (char)uVar1;
      uVar5 = uVar5 + 1;
      bVar4 = bVar2 | 0x7f < uVar1;
    } while (uVar6 != uVar5);
    if ((bool)(bVar2 | 0x7f < uVar1)) {
      uVar5 = 0;
      do {
        if (0x7f < *(ushort *)(param_2 + uVar5 * 2)) {
          *(undefined1 *)(lVar3 + uVar5) = 0x3f;
        }
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
      FUN_140e0237d(param_2,param_3);
    }
    *(undefined1 *)(lVar3 + uVar6) = 0;
  }
  return param_1;
}



// FUNCTION 14274607e FUN_14274607e body=125 status=ok
// SIG undefined FUN_14274607e(void)

longlong * FUN_14274607e(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_1467b8760(0);
  if (0 < (int)uVar2) {
    FUN_141701710(param_1,uVar2 + 1);
    lVar1 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar1 + uVar2 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar1) <= uVar2) {
      FUN_144761492(param_1);
    }
    lVar1 = *param_1;
    FUN_1467b8924(lVar1,uVar2,param_2,param_3);
    *(undefined1 *)(lVar1 + (ulonglong)uVar2) = 0;
  }
  return param_1;
}



// FUNCTION 1427460fc FUN_1427460fc body=301 status=ok
// SIG undefined FUN_1427460fc(void)

void FUN_1427460fc(longlong *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_141701710(param_1,0);
      return;
    }
  }
  else {
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < param_3) {
      uVar5 = param_3 + 1;
      if (param_3 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar5);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      iVar4 = 0;
      uVar2 = uVar5;
      if (*(uint *)((longlong)param_1 + 0xc) != uVar5) {
        FUN_141701710(param_1,uVar5);
        iVar4 = (int)param_1[1];
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = iVar4 + uVar5;
      if (uVar2 - iVar4 < uVar5) {
        FUN_144761492(param_1);
      }
      pvVar1 = (void *)*param_1;
      memcpy(pvVar1,param_2,(longlong)param_3);
      *(undefined1 *)((longlong)pvVar1 + (longlong)param_3) = 0;
    }
    else {
      pvVar1 = (void *)*param_1;
      _Size = (size_t)param_3;
      memmove(pvVar1,param_2,_Size);
      *(undefined1 *)((longlong)pvVar1 + _Size) = 0;
      param_3 = iVar4 - param_3;
      if (param_3 != 0) {
        iVar3 = (int)param_1[1];
        iVar4 = iVar3 - (iVar4 + 1);
        if (iVar4 != 0) {
          memmove((void *)(*param_1 + _Size + 1),(void *)(*param_1 + _Size + (longlong)param_3 + 1),
                  (longlong)iVar4);
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 - param_3;
        FUN_145804ca2(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14274622a FUN_14274622a body=145 status=ok
// SIG undefined FUN_14274622a(void)

void FUN_14274622a(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  size_t _Size;
  longlong lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    uVar2 = param_3 + (uint)(iVar1 == 0);
    *(uint *)(param_1 + 1) = uVar2 + iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_144761492(param_1,iVar1);
    }
    lVar3 = (longlong)(int)(iVar1 + -1 + (uint)(iVar1 == 0));
    pvVar4 = (void *)(*param_1 + lVar3);
    _Size = (size_t)param_3;
    memcpy(pvVar4,param_2,_Size);
    puVar5 = (undefined1 *)((longlong)pvVar4 + _Size);
    if (puVar5 == (undefined1 *)0x0) {
      pvVar4 = (void *)(lVar3 + *param_1);
      memcpy(pvVar4,param_2,_Size);
      puVar5 = (undefined1 *)((longlong)pvVar4 + _Size);
    }
    *puVar5 = 0;
  }
  return;
}



// FUNCTION 1427462c0 FUN_1427462c0 body=22 status=ok
// SIG undefined FUN_1427462c0(void)

double * FUN_1427462c0(double *param_1)

{
  *param_1 = *param_1 + 0.0;
  return param_1;
}



// FUNCTION 1427462d6 FUN_1427462d6 body=350 status=ok
// SIG undefined FUN_1427462d6(void)

undefined8
FUN_1427462d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 *local_260;
  undefined8 *local_250;
  undefined1 local_248 [520];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_res18 = param_3;
  local_res20 = param_4;
  local_250 = &local_res18;
  puVar3 = (ulonglong *)FUN_144737586();
  local_268 = 0;
  local_260 = &local_res18;
  uVar1 = __stdio_common_vsprintf(*puVar3 | 2,local_248,0x200,param_2);
  uVar2 = 0xffffffff;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  iVar5 = 0x200;
  if (0x1ff < (int)uVar1) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 < 0x200 && uVar2 != 0xffffffff) {
    local_248[uVar2] = 0;
    FUN_140117a62(param_1,local_248);
  }
  else {
    lVar4 = 0;
    do {
      iVar5 = iVar5 * 2;
      lVar4 = FUN_14001fdce(lVar4,(longlong)iVar5,0);
      local_250 = &local_res18;
      puVar3 = (ulonglong *)FUN_144737586();
      local_268 = 0;
      local_260 = &local_res18;
      uVar2 = __stdio_common_vsprintf(*puVar3 | 2,lVar4,(longlong)iVar5,param_2);
      if ((int)uVar2 < 0) {
        uVar2 = 0xffffffff;
      }
      if (iVar5 <= (int)uVar2) {
        uVar2 = 0xffffffff;
      }
    } while (uVar2 == 0xffffffff || iVar5 <= (int)uVar2);
    *(undefined1 *)(lVar4 + (ulonglong)uVar2) = 0;
    FUN_140117a62(param_1,lVar4);
    FUN_1400020a8(lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274643a FUN_14274643a body=13 status=ok
// SIG undefined FUN_14274643a(void)

void FUN_14274643a(void)

{
  FUN_14000f986(0x3a83126f);
  return;
}



// FUNCTION 142746448 FUN_142746448 body=438 status=ok
// SIG undefined FUN_142746448(void)

undefined8 * FUN_142746448(undefined8 *param_1,ulonglong *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (ulonglong *)0x0) && ((char)*param_2 != '\0')) {
    sVar6 = strlen((char *)param_2);
    uVar8 = (int)sVar6 + 1;
    local_4c = uVar8;
    local_58 = param_2;
    if ((int)sVar6 < 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0x7fffffff;
      uVar3 = uVar8;
      do {
        if (uVar9 == 0) {
          uVar10 = 0xffffffff;
          goto LAB_1427465f7;
        }
        uVar2 = uVar10;
        if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar3, 7 < uVar3)) &&
           (uVar4 = uVar9, 7 < (int)uVar9)) {
          while (uVar3 = local_4c, uVar9 = uVar4, uVar2 = uVar10,
                (*local_58 & 0x8080808080808080) == 0) {
            local_58 = local_58 + 1;
            uVar10 = uVar10 + 8;
            uVar3 = local_4c - 8;
            uVar9 = uVar4 - 8;
            bVar1 = (int)local_4c < 0x10;
            local_4c = uVar3;
            uVar2 = uVar10;
            if ((bVar1) || (bVar1 = uVar4 < 0x10, uVar4 = uVar9, bVar1)) break;
          }
        }
LAB_142746514:
        do {
          uVar10 = uVar2;
          if (((int)uVar3 < 1) || ((int)uVar9 < 1)) break;
          uVar4 = FUN_14003e942(&local_58);
          uVar3 = local_4c;
          if (uVar4 < 0x10000) {
            uVar9 = uVar9 - 1;
            uVar2 = uVar10 + 1;
            if (0x7f < uVar4) goto LAB_142746514;
          }
          else {
            if (1 < uVar9) {
              uVar9 = uVar9 - 2;
              uVar2 = uVar10 + 2;
              goto LAB_142746514;
            }
            uVar9 = 0;
          }
          uVar10 = uVar10 + 1;
          uVar2 = uVar10;
        } while (((ulonglong)local_58 & 7) != 0);
      } while (0 < (int)uVar3);
      if ((int)uVar10 < 0) {
LAB_1427465f7:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar10);
      }
      if (uVar10 == 0) {
        uVar10 = 0;
        iVar7 = 0;
        iVar5 = 0;
      }
      else {
        FUN_1446f8c06(param_1,uVar10);
        iVar7 = *(int *)(param_1 + 1);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = iVar7 + uVar10;
      if ((uint)(iVar5 - iVar7) < uVar10) {
        FUN_144a2dbb8(param_1);
      }
    }
    FUN_1446e71a3(*param_1,uVar10,param_2,uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142746600 FUN_142746600 body=128 status=ok
// SIG undefined FUN_142746600(void)

undefined8 * FUN_142746600(undefined8 *param_1,wchar_t *param_2)

{
  int extraout_EAX;
  int iVar1;
  int iVar3;
  uint uVar4;
  size_t sVar2;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar2 = wcslen(param_2);
    extraout_EAX = (int)sVar2;
    uVar4 = extraout_EAX + 1;
    uVar5 = (ulonglong)uVar4;
    if (extraout_EAX < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    if (extraout_EAX < 0) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446f8c06(param_1,uVar5);
      iVar3 = *(int *)(param_1 + 1);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar3 + uVar4;
    if ((uint)(iVar1 - iVar3) < uVar4) {
      FUN_144a2dbb8(param_1);
    }
    memcpy((void *)*param_1,param_2,uVar5 * 2);
  }
  return param_1;
}



// FUNCTION 142746682 FUN_142746682 body=156 status=ok
// SIG undefined FUN_142746682(void)

undefined8 * FUN_142746682(undefined8 *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    if (0 < param_3) {
      FUN_1446f8c06(param_1,param_3 + 1);
    }
  }
  else {
    sVar2 = wcslen(param_2);
    uVar4 = (int)sVar2 + 1;
    param_3 = param_3 + uVar4;
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_3);
    }
    if (param_3 == 0) {
      iVar1 = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446f8c06(param_1,param_3);
      iVar3 = *(int *)(param_1 + 1);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar3 + uVar4;
    if ((uint)(iVar1 - iVar3) < uVar4) {
      FUN_144a2dbb8(param_1);
    }
    memcpy((void *)*param_1,param_2,(longlong)(int)uVar4 * 2);
  }
  return param_1;
}



// FUNCTION 142746720 FUN_142746720 body=108 status=ok
// SIG undefined FUN_142746720(void)

longlong * FUN_142746720(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_3) {
    FUN_1446f8c06(param_1,param_3 + 1);
    lVar1 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar1 + param_3 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar1) <= param_3) {
      FUN_144a2dbb8(param_1);
    }
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      *(short *)(lVar1 + uVar2 * 2) = (short)*(char *)(param_2 + uVar2);
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
    *(undefined2 *)(lVar1 + (ulonglong)param_3 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 14274678c FUN_14274678c body=390 status=ok
// SIG undefined FUN_14274678c(void)

longlong * FUN_14274678c(longlong *param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = param_2;
  local_4c = param_3;
  if (0 < (int)param_3) {
    uVar7 = 0;
    uVar6 = 0x7fffffff;
    uVar5 = param_3;
    do {
      if (uVar6 == 0) goto LAB_1427468e8;
      uVar3 = uVar7;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar5, 7 < uVar5)) &&
         (uVar4 = uVar6, 7 < (int)uVar6)) {
        while (uVar6 = uVar4, uVar3 = uVar7, uVar5 = local_4c, (*local_58 & 0x8080808080808080) == 0
              ) {
          local_58 = local_58 + 1;
          uVar7 = uVar7 + 8;
          uVar5 = local_4c - 8;
          uVar6 = uVar4 - 8;
          bVar1 = (int)local_4c < 0x10;
          uVar3 = uVar7;
          local_4c = uVar5;
          if ((bVar1) || (bVar1 = uVar4 < 0x10, uVar4 = uVar6, bVar1)) break;
        }
      }
LAB_142746841:
      do {
        uVar7 = uVar3;
        if (((int)uVar5 < 1) || ((int)uVar6 < 1)) break;
        uVar4 = FUN_14003e942(&local_58,&local_4c);
        uVar5 = local_4c;
        if (uVar4 < 0x10000) {
          uVar6 = uVar6 - 1;
          uVar3 = uVar7 + 1;
          if (0x7f < uVar4) goto LAB_142746841;
        }
        else {
          if (1 < uVar6) {
            uVar6 = uVar6 - 2;
            uVar3 = uVar7 + 2;
            goto LAB_142746841;
          }
          uVar6 = 0;
        }
        uVar7 = uVar7 + 1;
        uVar3 = uVar7;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar5);
    if (0 < (int)uVar7) {
      FUN_1446f8c06(param_1,uVar7 + 1);
      lVar2 = param_1[1];
      *(uint *)(param_1 + 1) = (int)lVar2 + uVar7 + 1;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) <= uVar7) {
        FUN_144a2dbb8(param_1);
      }
      lVar2 = *param_1;
      FUN_1446e71a3(lVar2,uVar7,param_2,param_3);
      *(undefined2 *)(lVar2 + (ulonglong)uVar7 * 2) = 0;
    }
  }
LAB_1427468e8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142746913 FUN_142746913 body=156 status=ok
// SIG undefined FUN_142746913(void)

void FUN_142746913(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    uVar3 = param_3 + (uint)(iVar1 == 0);
    *(uint *)(param_1 + 1) = uVar3 + iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_144a2dbb8(param_1,iVar1);
    }
    lVar2 = (longlong)(int)(iVar1 + -1 + (uint)(iVar1 == 0)) * 2;
    pvVar4 = (void *)(*param_1 + lVar2);
    _Size = (longlong)param_3 * 2;
    memcpy(pvVar4,param_2,_Size);
    puVar5 = (undefined2 *)((longlong)pvVar4 + _Size);
    if (puVar5 == (undefined2 *)0x0) {
      pvVar4 = (void *)(lVar2 + *param_1);
      memcpy(pvVar4,param_2,_Size);
      puVar5 = (undefined2 *)((longlong)pvVar4 + (longlong)param_3 * 2);
    }
    *puVar5 = 0;
  }
  return;
}



// FUNCTION 1427469b0 FUN_1427469b0 body=67 status=ok
// SIG undefined FUN_1427469b0(void)

void FUN_1427469b0(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar3 = 0;
  }
  if (0 < (int)uVar3) {
    lVar2 = *param_1;
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar4 * 2);
      *(ushort *)(lVar2 + uVar4 * 2) = uVar1 + (ushort)(0x19 < uVar1 - 0x61) * 0x20 + -0x20;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return;
}



// FUNCTION 1427469f4 FUN_1427469f4 body=225 status=ok
// SIG undefined FUN_1427469f4(void)

undefined8 * FUN_1427469f4(undefined8 *param_1,void *param_2,int param_3,undefined8 *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    *param_1 = *param_4;
    *param_4 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
  }
  else {
    iVar2 = 0;
    iVar4 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      iVar4 = 0;
    }
    uVar5 = iVar4 + param_3 + 1;
    *param_1 = 0;
    param_1[1] = 0;
    if (iVar4 + param_3 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    iVar3 = 0;
    if (-1 < iVar4 + param_3) {
      FUN_1446f8c06(param_1,uVar5);
      iVar3 = *(int *)(param_1 + 1);
      iVar2 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar3 + uVar5;
    if ((uint)(iVar2 - iVar3) < uVar5) {
      FUN_144a2dbb8(param_1);
    }
    pvVar1 = (void *)*param_1;
    memcpy(pvVar1,param_2,(longlong)param_3 * 2);
    pvVar1 = (void *)((longlong)pvVar1 + (longlong)param_3 * 2);
    memcpy(pvVar1,(void *)*param_4,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar4 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 142746ad6 FUN_142746ad6 body=193 status=ok
// SIG undefined FUN_142746ad6(void)

undefined8 * FUN_142746ad6(undefined8 *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)(param_3 * 3)) {
    FUN_1446f8c06(param_1,param_3 * 3 + 1);
  }
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      FUN_140002266(&local_50,L"%03d",*(undefined1 *)(param_2 + uVar2));
      iVar1 = local_48 + -1;
      if (local_48 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_1,local_50,iVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142746b98 FUN_142746b98 body=194 status=ok
// SIG undefined FUN_142746b98(void)

undefined8 * FUN_142746b98(undefined8 *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)(param_3 * 2)) {
    FUN_1446f8c06(param_1,param_3 * 2 | 1);
  }
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      FUN_140002266(&local_50,L"%02X",*(undefined1 *)(param_2 + uVar2));
      iVar1 = local_48 + -1;
      if (local_48 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_1,local_50,iVar1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142746c5b FUN_142746c5b body=282 status=ok
// SIG undefined FUN_142746c5b(void)

bool FUN_142746c5b(longlong param_1,int param_2,longlong param_3,int param_4)

{
  short sVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar7 = param_2;
  if (param_4 != 0) {
    iVar7 = param_2 - param_4;
    lVar9 = 0;
    lVar5 = 0;
    do {
      sVar1 = *(short *)(param_3 + lVar5 * 2);
      if ((sVar1 == 0x2a) || (sVar1 == 0x3f)) {
        iVar7 = param_4 - (int)lVar5;
        uVar8 = param_2 - (int)lVar5;
        lVar10 = -1;
        goto LAB_142746ce3;
      }
      if (*(short *)(param_1 + lVar5 * 2) != sVar1) goto LAB_142746d65;
      lVar5 = lVar5 + 1;
      lVar9 = lVar9 + -2;
    } while (param_4 != (int)lVar5);
  }
  return iVar7 == 0;
LAB_142746ce3:
  do {
    sVar2 = *(short *)((param_3 - lVar9) + (param_4 - lVar5) * 2 + lVar10 * 2);
    if ((sVar2 == 0x2a) || (sVar2 == 0x3f)) goto LAB_142746d09;
    if (*(short *)((param_1 - lVar9) + (param_2 - lVar5) * 2 + lVar10 * 2) != sVar2) {
      return false;
    }
    iVar7 = iVar7 + -1;
    lVar10 = lVar10 + -1;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  uVar8 = 0;
  iVar7 = param_4 - param_2;
LAB_142746d09:
  if ((iVar7 != 1) || ((bVar4 = true, sVar1 != 0x2a && (1 < (int)uVar8)))) {
    uVar6 = 1;
    if ((int)uVar8 < 1) {
      uVar6 = (ulonglong)uVar8;
    }
    if (sVar1 != 0x3f) {
      uVar6 = (ulonglong)uVar8;
    }
    if ((int)uVar6 < 0) {
LAB_142746d65:
      bVar4 = false;
    }
    else {
      lVar5 = 0;
      do {
        cVar3 = FUN_142746c5b((param_1 - lVar9) + lVar5,uVar8,(param_3 - lVar9) + 2,iVar7 + -1);
        if (cVar3 != '\0') {
          return (bool)cVar3;
        }
        uVar8 = uVar8 - 1;
        bVar11 = uVar6 * 2 != lVar5;
        bVar4 = false;
        lVar5 = lVar5 + 2;
      } while (bVar11);
    }
  }
  return bVar4;
}



// FUNCTION 142746d75 FUN_142746d75 body=1 status=ok
// SIG undefined FUN_142746d75(void)

void FUN_142746d75(void)

{
  return;
}



// FUNCTION 142746d76 FUN_142746d76 body=55 status=ok
// SIG undefined FUN_142746d76(void)

void FUN_142746d76(void)

{
  FUN_14498658e(DAT_14c833760,DAT_14c833768);
  if (DAT_14c833760 != 0) {
    FUN_1400020a8();
  }
  FUN_1462683c2(&DAT_14c833748);
  return;
}



// FUNCTION 142746dae FUN_142746dae body=1146 status=ok
// SIG undefined FUN_142746dae(void)

void FUN_142746dae(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  double *pdVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  char cVar10;
  DWORD DVar11;
  uint uVar12;
  int iVar13;
  size_t sVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  wchar_t *_Str;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  int iStack_80;
  int iStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  DVar11 = GetCurrentThreadId();
  lVar20 = **(longlong **)(param_1 + 8);
  if (lVar20 != 0) {
    do {
      lVar19 = *(longlong *)(lVar20 + 8);
      plVar3 = *(longlong **)(lVar20 + 0x10);
      *(undefined8 *)(lVar20 + 8) = 0;
      *(undefined8 *)(lVar20 + 0x10) = 0;
      FUN_1400020a8(*(undefined8 *)(param_1 + 8));
      *(longlong *)(param_1 + 8) = lVar20;
      if (lVar19 == -1) break;
      if (*(longlong *)(lVar19 + 0x58) == 0) {
        iVar17 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar17 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar17 + 1U) {
          FUN_141701862((longlong *)(param_1 + 0x18),iVar17);
        }
        lVar20 = *(longlong *)(param_1 + 0x18);
        *(longlong *)(lVar20 + (longlong)iVar17 * 0x10) = lVar19;
        *(longlong **)(lVar20 + 8 + (longlong)iVar17 * 0x10) = plVar3;
      }
      else if (plVar3 != (longlong *)0x0) {
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
      lVar20 = **(longlong **)(param_1 + 8);
    } while (lVar20 != 0);
  }
  iVar17 = *(int *)(param_1 + 0x20);
  if (iVar17 != 0) {
    local_b0 = (ulonglong)DVar11 << 0x20;
    plVar3 = (longlong *)(param_1 + 0x18);
    *(double *)(param_1 + 0x10) = (double)param_2 + *(double *)(param_1 + 0x10);
    local_b8 = -local_b0;
    local_98 = 0;
    uStack_90 = 0;
    lVar20 = 0;
    do {
      if ((int)lVar20 < iVar17) {
        lVar20 = (longlong)(int)lVar20;
        lVar22 = lVar20 << 4;
        lVar19 = local_b0;
        do {
          uVar9 = uStack_90;
          lVar4 = *plVar3;
          LOCK();
          plVar2 = (longlong *)(*(longlong *)(lVar4 + lVar22) + 0x58);
          lVar21 = *plVar2;
          *plVar2 = *plVar2 + lVar19;
          UNLOCK();
          pdVar5 = *(double **)(lVar4 + lVar22);
          if (lVar21 == 1) {
            LOCK();
            pdVar5[0xb] = (double)((longlong)pdVar5[0xb] + local_b8);
            UNLOCK();
          }
          else {
            plVar2 = (longlong *)(lVar22 + lVar4);
            if (*pdVar5 < *(double *)(param_1 + 0x10) || *pdVar5 == *(double *)(param_1 + 0x10)) {
              _Str = (wchar_t *)pdVar5[10];
              if (_Str == (wchar_t *)0x0) {
                _Str = L"Unknown";
              }
              FUN_1400b22c2(&local_a8);
              sVar14 = wcslen(_Str);
              iVar17 = (int)uStack_a0;
              iVar8 = uStack_a0._4_4_;
              if ((int)sVar14 == 0) {
                iStack_80 = (int)uStack_a0;
                iStack_7c = uStack_a0._4_4_;
                local_88 = local_a8;
                local_a8 = 0;
              }
              else {
                iVar13 = (int)sVar14 + (uint)((int)uStack_a0 == 0);
                local_88 = local_a8;
                local_a8 = 0;
                iStack_80 = (int)uStack_a0;
                iStack_7c = uStack_a0._4_4_;
                uStack_a0 = 0;
                iVar18 = iVar13 + iVar17;
                if (iVar18 < iVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4((longlong)iVar13);
                }
                if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar18);
                }
                if (iVar8 < iVar18) {
                  FUN_1446f8c06(&local_88);
                }
                FUN_1400020e8(&local_88,_Str,sVar14 & 0xffffffff);
                if (local_a8 != 0) {
                  FUN_1400020a8();
                }
              }
              lVar19 = *plVar2;
              local_a8 = CONCAT44(local_a8._4_4_,param_2);
              pcVar6 = *(code **)(lVar19 + 0x10);
              plVar16 = (longlong *)(lVar19 + 0x30);
              if (*(longlong **)(lVar19 + 0x20) != (longlong *)0x0) {
                plVar16 = *(longlong **)(lVar19 + 0x20);
              }
              uVar15 = (**(code **)(*plVar16 + 8))();
              cVar10 = (*pcVar6)(uVar15,&local_a8);
              uVar9 = uStack_90;
              lVar19 = local_b0;
              LOCK();
              plVar16 = (longlong *)(*plVar2 + 0x58);
              lVar21 = *plVar16;
              *plVar16 = *plVar16 + local_b8;
              UNLOCK();
              if ((cVar10 != '\0') && (((uint)lVar21 & 0xff) != 1)) {
                *(double *)*plVar2 =
                     (double)*(float *)((double *)*plVar2 + 1) + *(double *)(param_1 + 0x10);
                lVar21 = (longlong)(int)uStack_90;
                uVar12 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar12);
                if (uStack_90._4_4_ < uVar12) {
                  FUN_141701862(&local_98,uVar9 & 0xffffffff);
                }
                *(undefined8 *)(local_98 + lVar21 * 0x10) = *(undefined8 *)(lVar4 + lVar22);
                *(undefined8 *)(local_98 + 8 + lVar21 * 0x10) = *(undefined8 *)(lVar4 + 8 + lVar22);
                *plVar2 = 0;
                plVar2[1] = 0;
              }
              if (local_88 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              LOCK();
              pdVar5[0xb] = (double)((longlong)pdVar5[0xb] + local_b8);
              UNLOCK();
              lVar21 = (longlong)(int)uStack_90;
              uVar12 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar12);
              if (uStack_90._4_4_ < uVar12) {
                FUN_141701862(&local_98,uVar9 & 0xffffffff);
              }
              *(undefined8 *)(local_98 + lVar21 * 0x10) = *(undefined8 *)(lVar4 + lVar22);
              *(undefined8 *)(local_98 + 8 + lVar21 * 0x10) = *(undefined8 *)(lVar4 + 8 + lVar22);
              *plVar2 = 0;
              plVar2[1] = 0;
            }
          }
          lVar20 = lVar20 + 1;
          lVar22 = lVar22 + 0x10;
        } while (lVar20 < *(int *)(param_1 + 0x20));
      }
      while (lVar19 = **(longlong **)(param_1 + 8), lVar19 != 0) {
        lVar22 = *(longlong *)(lVar19 + 8);
        plVar2 = *(longlong **)(lVar19 + 0x10);
        *(undefined8 *)(lVar19 + 8) = 0;
        *(undefined8 *)(lVar19 + 0x10) = 0;
        FUN_1400020a8(*(undefined8 *)(param_1 + 8));
        *(longlong *)(param_1 + 8) = lVar19;
        if (lVar22 == -1) break;
        if (*(longlong *)(lVar22 + 0x58) == 0) {
          iVar17 = *(int *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = iVar17 + 1U;
          if (*(uint *)(param_1 + 0x24) < iVar17 + 1U) {
            FUN_141701862(plVar3,iVar17);
          }
          lVar19 = *plVar3;
          *(longlong *)(lVar19 + (longlong)iVar17 * 0x10) = lVar22;
          *(longlong **)(lVar19 + 8 + (longlong)iVar17 * 0x10) = plVar2;
        }
        else if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar2 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
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
      }
      iVar17 = *(int *)(param_1 + 0x20);
    } while ((int)lVar20 < iVar17);
    iVar17 = *(int *)(param_1 + 0x24);
    FUN_14498658e(*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((iVar17 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
      FUN_1467af1fe(plVar3);
    }
    local_88 = local_98;
    iStack_80 = (int)uStack_90;
    iStack_7c = uStack_90._4_4_;
    lVar20 = *plVar3;
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)plVar3 = (undefined4)local_98;
    *(undefined4 *)(param_1 + 0x1c) = local_98._4_4_;
    *(int *)(param_1 + 0x20) = (int)uStack_90;
    *(uint *)(param_1 + 0x24) = uStack_90._4_4_;
    local_98 = lVar20;
    uStack_90 = uVar15;
    FUN_14498658e(lVar20,uVar7);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274722a FUN_14274722a body=496 status=ok
// SIG undefined FUN_14274722a(void)

undefined8 * FUN_14274722a(undefined8 *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    sVar4 = wcslen(param_2);
    iVar7 = (int)sVar4 + 1;
    local_44 = 0;
    local_50 = CONCAT44(local_50._4_4_,0x7fffffff);
    pwVar9 = param_2;
    iVar6 = iVar7;
    do {
      if (iVar6 < 1) {
LAB_14274731f:
        uVar5 = local_44;
        if ((int)local_44 < 0) goto LAB_142747317;
        iVar6 = 0;
        iVar8 = 0;
        if (local_44 != 0) {
          FUN_1467af346(param_1,local_44);
          iVar6 = *(int *)(param_1 + 1);
          iVar8 = *(int *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = iVar6 + uVar5;
        if ((uint)(iVar8 - iVar6) < uVar5) {
          FUN_140067470(param_1);
        }
        local_50 = *param_1;
        local_44 = uVar5;
        goto LAB_142747362;
      }
      wVar1 = *pwVar9;
      uVar5 = (uint)(ushort)wVar1;
      pwVar2 = pwVar9 + 1;
      iVar8 = iVar6 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar6 == 1) {
          cVar3 = FUN_140024707(uVar5,&local_44,&local_50);
          if (cVar3 != '\0') goto LAB_14274731f;
          break;
        }
        if (((ushort)*pwVar2 & 0xfc00) == 0xdc00) {
          uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar2 + 0xfca02400;
          iVar8 = iVar6 + -2;
          pwVar2 = pwVar9 + 2;
        }
      }
      pwVar9 = pwVar2;
      cVar3 = FUN_140024707(uVar5,&local_44,&local_50);
      iVar6 = iVar8;
    } while (cVar3 != '\0');
    uVar5 = 0xffffffff;
LAB_142747317:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar5);
  }
  goto LAB_1427473f2;
  while( true ) {
    wVar1 = *param_2;
    uVar5 = (uint)(ushort)wVar1;
    pwVar9 = param_2 + 1;
    iVar6 = iVar7 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar7 == 1) {
        FUN_1400247af(uVar5,&local_50,&local_44);
        break;
      }
      if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
        uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
        pwVar9 = param_2 + 2;
        iVar6 = iVar7 + -2;
      }
    }
    iVar7 = iVar6;
    param_2 = pwVar9;
    cVar3 = FUN_1400247af(uVar5,&local_50,&local_44);
    if (cVar3 == '\0') break;
LAB_142747362:
    if (iVar7 < 1) break;
  }
LAB_1427473f2:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14274741c FUN_14274741c body=126 status=ok
// SIG undefined FUN_14274741c(void)

undefined8 * FUN_14274741c(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    sVar2 = strlen(param_2);
    iVar1 = (int)sVar2;
    uVar5 = iVar1 + 1;
    if (iVar1 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    iVar3 = 0;
    iVar4 = 0;
    if (-1 < iVar1) {
      FUN_1467af346(param_1,uVar5);
      iVar4 = *(int *)(param_1 + 1);
      iVar3 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar4 + uVar5;
    if ((uint)(iVar3 - iVar4) < uVar5) {
      FUN_140067470(param_1);
    }
    memcpy((void *)*param_1,param_2,(ulonglong)uVar5);
  }
  return param_1;
}



// FUNCTION 14274749c FUN_14274749c body=107 status=ok
// SIG undefined FUN_14274749c(void)

undefined8 * FUN_14274749c(undefined8 *param_1,void *param_2,uint param_3)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_3) {
    FUN_1467af346(param_1,param_3 + 1);
    iVar1 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar1 + param_3 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) <= param_3) {
      FUN_140067470(param_1);
    }
    _Dst = (void *)*param_1;
    memcpy(_Dst,param_2,(ulonglong)param_3);
    *(undefined1 *)((longlong)_Dst + (ulonglong)param_3) = 0;
  }
  return param_1;
}



// FUNCTION 142747508 FUN_142747508 body=454 status=ok
// SIG undefined FUN_142747508(void)

longlong * FUN_142747508(longlong *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  local_4c = 0;
  local_58 = CONCAT44(local_58._4_4_,0x7fffffff);
  puVar8 = param_2;
  iVar4 = param_3;
  do {
    if (iVar4 < 1) {
LAB_1427475d0:
      uVar6 = local_4c;
      lVar9 = (longlong)(int)local_4c;
      if (0 < lVar9) {
        FUN_1467af346(param_1,local_4c + 1);
        lVar2 = param_1[1];
        *(uint *)(param_1 + 1) = (int)lVar2 + uVar6 + 1;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) <= uVar6) {
          FUN_140067470(param_1);
        }
        local_60 = *param_1;
        local_58 = local_60;
        local_4c = uVar6;
        goto LAB_142747648;
      }
      break;
    }
    uVar1 = *puVar8;
    uVar6 = (uint)uVar1;
    puVar3 = puVar8 + 1;
    iVar7 = iVar4 + -1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      if (iVar4 == 1) {
        cVar5 = FUN_140024707(uVar6,&local_4c,&local_58);
        if (cVar5 != '\0') goto LAB_1427475d0;
        break;
      }
      if ((*puVar3 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar3 + 0xfca02400;
        iVar7 = iVar4 + -2;
        puVar3 = puVar8 + 2;
      }
    }
    puVar8 = puVar3;
    cVar5 = FUN_140024707(uVar6,&local_4c,&local_58);
    iVar4 = iVar7;
  } while (cVar5 != '\0');
  goto LAB_1427475da;
  while( true ) {
    uVar1 = *param_2;
    uVar6 = (uint)uVar1;
    puVar8 = param_2 + 1;
    iVar4 = param_3 + -1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      if (param_3 == 1) {
        FUN_1400247af(uVar6,&local_58,&local_4c);
        break;
      }
      if ((*puVar8 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar8 + 0xfca02400;
        puVar8 = param_2 + 2;
        iVar4 = param_3 + -2;
      }
    }
    param_3 = iVar4;
    param_2 = puVar8;
    cVar5 = FUN_1400247af(uVar6,&local_58,&local_4c);
    if (cVar5 == '\0') break;
LAB_142747648:
    if (param_3 < 1) break;
  }
  *(undefined1 *)(local_60 + lVar9) = 0;
LAB_1427475da:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427476d0 FUN_1427476d0 body=306 status=ok
// SIG undefined FUN_1427476d0(void)

void FUN_1427476d0(longlong *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1467af346(param_1,0);
      return;
    }
  }
  else {
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < param_3) {
      uVar5 = param_3 + 1;
      if (param_3 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar5);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      iVar4 = 0;
      uVar2 = uVar5;
      if (*(uint *)((longlong)param_1 + 0xc) != uVar5) {
        FUN_1467af346(param_1,uVar5);
        iVar4 = (int)param_1[1];
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = iVar4 + uVar5;
      if (uVar2 - iVar4 < uVar5) {
        FUN_140067470(param_1);
      }
      pvVar1 = (void *)*param_1;
      memcpy(pvVar1,param_2,(longlong)param_3);
      *(undefined1 *)((longlong)pvVar1 + (longlong)param_3) = 0;
    }
    else {
      pvVar1 = (void *)*param_1;
      _Size = (size_t)param_3;
      memmove(pvVar1,param_2,_Size);
      *(undefined1 *)((longlong)pvVar1 + _Size) = 0;
      param_3 = iVar4 - param_3;
      if (param_3 != 0) {
        iVar3 = (int)param_1[1];
        iVar4 = iVar3 - (iVar4 + 1);
        if (iVar4 != 0) {
          memmove((void *)(*param_1 + _Size + 1),(void *)(*param_1 + _Size + (longlong)param_3 + 1),
                  (longlong)iVar4);
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 - param_3;
        FUN_1467af39e(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142747803 FUN_142747803 body=145 status=ok
// SIG undefined FUN_142747803(void)

void FUN_142747803(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  size_t _Size;
  longlong lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    uVar2 = param_3 + (uint)(iVar1 == 0);
    *(uint *)(param_1 + 1) = uVar2 + iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_140067470(param_1,iVar1);
    }
    lVar3 = (longlong)(int)(iVar1 + -1 + (uint)(iVar1 == 0));
    pvVar4 = (void *)(*param_1 + lVar3);
    _Size = (size_t)param_3;
    memcpy(pvVar4,param_2,_Size);
    puVar5 = (undefined1 *)((longlong)pvVar4 + _Size);
    if (puVar5 == (undefined1 *)0x0) {
      pvVar4 = (void *)(lVar3 + *param_1);
      memcpy(pvVar4,param_2,_Size);
      puVar5 = (undefined1 *)((longlong)pvVar4 + _Size);
    }
    *puVar5 = 0;
  }
  return;
}



// FUNCTION 142747894 FUN_142747894 body=350 status=ok
// SIG undefined FUN_142747894(void)

undefined8
FUN_142747894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 *local_260;
  undefined8 *local_250;
  undefined1 local_248 [520];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_res18 = param_3;
  local_res20 = param_4;
  local_250 = &local_res18;
  puVar3 = (ulonglong *)FUN_144737586();
  local_268 = 0;
  local_260 = &local_res18;
  uVar1 = __stdio_common_vsprintf(*puVar3 | 2,local_248,0x200,param_2);
  uVar2 = 0xffffffff;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  iVar5 = 0x200;
  if (0x1ff < (int)uVar1) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 < 0x200 && uVar2 != 0xffffffff) {
    local_248[uVar2] = 0;
    FUN_14274741c(param_1,local_248);
  }
  else {
    lVar4 = 0;
    do {
      iVar5 = iVar5 * 2;
      lVar4 = FUN_14001fdce(lVar4,(longlong)iVar5,0);
      local_250 = &local_res18;
      puVar3 = (ulonglong *)FUN_144737586();
      local_268 = 0;
      local_260 = &local_res18;
      uVar2 = __stdio_common_vsprintf(*puVar3 | 2,lVar4,(longlong)iVar5,param_2);
      if ((int)uVar2 < 0) {
        uVar2 = 0xffffffff;
      }
      if (iVar5 <= (int)uVar2) {
        uVar2 = 0xffffffff;
      }
    } while (uVar2 == 0xffffffff || iVar5 <= (int)uVar2);
    *(undefined1 *)(lVar4 + (ulonglong)uVar2) = 0;
    FUN_14274741c(param_1,lVar4);
    FUN_1400020a8(lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427479f3 FUN_1427479f3 body=492 status=ok
// SIG undefined FUN_1427479f3(void)

longlong * FUN_1427479f3(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char *_Str;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  size_t sVar6;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    (**(code **)(*param_1 + 0x10))
              (param_1,(longlong)(int)param_2[1],(longlong)*(int *)((longlong)param_2 + 0xc));
    local_1c = (int)param_2[1] - 1;
    if ((int)param_2[1] == 0) {
      local_1c = 0;
    }
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_1c != 0) {
      _Str = (char *)*param_2;
      uVar4 = local_1c;
      if (local_1c == 0xffffffff) {
        sVar6 = strlen(_Str);
        uVar4 = (uint)sVar6;
      }
      (**(code **)(*param_1 + 0x170))(param_1,_Str,(longlong)(int)uVar4);
    }
  }
  else {
    local_1c = 0;
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      local_1c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (((int)local_1c < 0) || ((0 < param_1[7] && (param_1[7] < (longlong)(ulonglong)local_1c)))) {
      FUN_1468216ba(param_1);
    }
    else if (local_1c == 0) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1467af346(param_2,0);
      }
    }
    else {
      uVar4 = local_1c + 1;
      *(undefined4 *)(param_2 + 1) = 0;
      iVar7 = 0;
      uVar5 = uVar4;
      if (*(uint *)((longlong)param_2 + 0xc) != uVar4) {
        FUN_1467af346(param_2,uVar4);
        iVar7 = (int)param_2[1];
        uVar4 = *(uint *)((longlong)param_2 + 0xc);
        uVar5 = local_1c + 1;
      }
      *(uint *)(param_2 + 1) = iVar7 + uVar5;
      if (uVar4 - iVar7 < uVar5) {
        FUN_140067470(param_2);
      }
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x170))(param_1,lVar3,(longlong)(int)local_1c);
      *(undefined1 *)(lVar3 + (int)local_1c) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142747bf4 FUN_142747bf4 body=2278 status=ok
// SIG undefined FUN_142747bf4(void)

undefined8 * FUN_142747bf4(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  wint_t _C;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined8 *local_170;
  uint *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong *local_140 [2];
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8 [2];
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar5 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar5 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    plVar4 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
    goto LAB_142748024;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  if (*(int *)((longlong)param_2 + 0x34) <= (int)param_2[1]) {
    FUN_1446f8c06(&local_c8,iVar5 * 2 + 1);
  }
  iVar5 = (int)param_2[5];
  if (iVar5 == 0) {
    uVar12 = 1;
    uVar11 = 0;
    iVar16 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_2 + 2);
    }
    uVar17 = *puVar7;
    if (uVar17 == 0) {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      uVar11 = 0;
      uVar12 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar12 = uVar11;
      }
      iVar16 = 0;
      do {
        if (uVar12 == uVar11) goto LAB_142748055;
        iVar16 = iVar16 + 0x20;
        uVar17 = puVar7[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar11 = 0;
      iVar16 = 0;
    }
    uVar12 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 == iVar5) {
LAB_142748055:
    FUN_145aa9352(local_140,&local_c8);
    local_150 = (longlong *)*param_3;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))();
    }
    local_148 = (undefined4)param_3[1];
    local_88 = L"ForbiddenChars";
    local_80[0] = 0xe;
    FUN_1446e940c(local_10c,&local_88);
    local_88 = L"VersePath";
    local_80[0] = 9;
    FUN_1446e940c(local_110,&local_88);
    local_88 = L"{0} cannot contain the following characters: {1}";
    local_80[0] = 0x30;
    FUN_140208c1e(local_108,local_110,local_10c,&local_88);
    FUN_14023409e(&local_160,local_108,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,&local_150);
    local_68[0] = 4;
    FUN_14023423e(local_58,local_140);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_160;
    local_b0 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar14 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_80 + lVar14 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar14 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar14) = 0;
      }
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != -0x10);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_158 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  else {
    uVar17 = 0xffffffff;
    local_178 = param_3;
    local_170 = param_1;
    local_168 = (uint *)(param_2 + 2);
    bVar18 = false;
    do {
      _C = *(wint_t *)(*param_2 + (longlong)iVar6 * 0xc);
      iVar6 = iswspace(_C);
      bVar8 = true;
      if (iVar6 == 0) {
        if (1 < (int)uStack_c0) {
          FUN_140002184(&local_c8,0x20);
        }
        FUN_140002184(&local_c8,_C);
        bVar8 = bVar18;
      }
      param_1 = local_170;
      plVar4 = local_178;
      uVar17 = uVar17 & ~(uint)uVar12;
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = local_168;
      }
      iVar3 = (int)param_2[5];
      iVar6 = (int)uVar11;
      lVar14 = (longlong)iVar6;
      uVar13 = puVar7[lVar14] & uVar17;
      if (uVar13 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar6) {
          iVar10 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar15 = 0;
          do {
            uVar13 = puVar7[lVar14 + lVar15 + 1];
            if (uVar13 != 0) {
              uVar11 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar17 = 0xffffffff;
              goto LAB_142747e02;
            }
            iVar16 = iVar16 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar17 = 0xffffffff;
          lVar14 = (longlong)iVar10;
        }
        uVar11 = lVar14 + 1U & 0xffffffff;
        iVar6 = iVar3;
      }
      else {
LAB_142747e02:
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar2 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
      bVar18 = bVar8;
    } while (iVar6 != iVar5);
    param_3 = local_178;
    if (!bVar8) goto LAB_142748055;
    if ((int)uStack_c0 < 2) {
      local_120 = (longlong *)*local_178;
      if (local_120 != (longlong *)0x0) {
        (**(code **)(*local_120 + 8))();
      }
      local_118 = (undefined4)plVar4[1];
      local_88 = L"ForbiddenWhitescape";
      local_80[0] = 0x13;
      FUN_1446e940c(local_10c,&local_88);
      local_88 = L"VersePath";
      local_80[0] = 9;
      FUN_1446e940c(local_110,&local_88);
      local_88 = L"{0} cannot contain whitespace characters";
      local_80[0] = 0x28;
      FUN_140208c1e(local_108,local_110,local_10c,&local_88);
      FUN_14023409e(&local_130,local_108,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,&local_120);
      local_a0 = (ulonglong *)local_68;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_130;
      local_b0 = local_128;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_128 + 1) = (int)local_128[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(param_1,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      local_140[0] = local_120;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_128 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_140[0] = local_120;
          if (*piVar1 == 0) {
            (**(code **)(*local_128 + 0x10))(local_128);
            local_140[0] = local_120;
          }
        }
      }
    }
    else {
      FUN_145aa9352(local_d8,&local_c8);
      local_e8 = (longlong *)*plVar4;
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 8))();
      }
      local_e0 = (undefined4)plVar4[1];
      local_88 = L"ForbiddenWhitescapeAndChars";
      local_80[0] = 0x1b;
      FUN_1446e940c(local_10c,&local_88);
      local_88 = L"VersePath";
      local_80[0] = 9;
      FUN_1446e940c(local_110,&local_88);
      local_88 = L"{0} cannot contain whitespace characters or the following characters: {1}";
      local_80[0] = 0x49;
      FUN_140208c1e(local_108,local_110,local_10c,&local_88);
      FUN_14023409e(&local_f8,local_108,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,&local_e8);
      local_68[0] = 4;
      FUN_14023423e(local_58,local_d8);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_f8;
      local_b0 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(param_1,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar14 = 0x30;
      do {
        plVar4 = *(longlong **)((longlong)local_80 + lVar14 + -8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))();
          *(undefined8 *)((longlong)local_80 + lVar14 + -8) = 0;
          *(undefined4 *)((longlong)local_80 + lVar14) = 0;
        }
        lVar14 = lVar14 + -0x20;
      } while (lVar14 != -0x10);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_f0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_f0 + 0x10))(local_f0);
          }
        }
      }
      local_140[0] = local_d8[0];
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
        local_140[0] = local_d8[0];
      }
    }
  }
  if (local_140[0] != (longlong *)0x0) {
    (**(code **)(*local_140[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_142748024:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427484db FUN_1427484db body=860 status=ok
// SIG undefined FUN_1427484db(void)

void FUN_1427484db(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar13 + 0x3a8) = 0;
  if (*(longlong *)(lVar13 + 0x3a0) != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x388);
  if (iVar1 == 0) {
    uVar9 = 0;
    uVar7 = 1;
    iVar10 = 0;
    iVar3 = 0;
  }
  else {
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(uint **)(lVar13 + 0x380);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)(lVar13 + 0x370);
    }
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar9 = 0;
      uVar5 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar5 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar5 == uVar9) goto LAB_142748548;
        iVar10 = iVar10 + 0x20;
        uVar8 = puVar4[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar7 = (ulonglong)(-uVar8 & uVar8);
    uVar5 = uVar7 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 < iVar1) {
    uVar8 = 0xffffffff;
    do {
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x360);
      lVar14 = (longlong)iVar3 * 0x20;
      FUN_14274a6a8(*(undefined8 *)(lVar13 + 8 + lVar14),*(undefined4 *)(lVar13 + 0x10 + lVar14));
      if (*(longlong *)(lVar13 + 8 + lVar14) != 0) {
        FUN_1400020a8();
      }
      uVar8 = uVar8 & ~(uint)uVar7;
      lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar14 = *(longlong *)(lVar13 + 0x380);
      if (*(longlong *)(lVar13 + 0x380) == 0) {
        lVar14 = lVar13 + 0x370;
      }
      iVar1 = *(int *)(lVar13 + 0x388);
      iVar3 = (int)uVar9;
      lVar13 = (longlong)iVar3;
      uVar2 = *(uint *)(lVar14 + lVar13 * 4) & uVar8;
      if (uVar2 == 0) {
        iVar11 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar11 = iVar1 + -1;
        }
        iVar12 = iVar11 >> 5;
        if (iVar11 >> 5 < iVar3) {
          iVar12 = iVar3;
        }
        lVar6 = 0;
        do {
          if (iVar12 - lVar13 == lVar6) goto LAB_142748548;
          iVar10 = iVar10 + 0x20;
          uVar2 = *(uint *)(lVar14 + lVar13 * 4 + 4 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (uVar2 == 0);
        uVar9 = (ulonglong)(uint)(iVar3 + (int)lVar6);
        uVar8 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar2 & uVar2);
      uVar5 = uVar7 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar1);
  }
LAB_142748548:
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar13 + 0x368) = 0;
  if (*(int *)(lVar13 + 0x36c) != 0) {
    FUN_1446f4a44(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x360,0);
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar13 + 0x390) = 0xffffffff;
  *(undefined4 *)(lVar13 + 0x388) = 0;
  if (0x80 < *(uint *)(lVar13 + 0x38c)) {
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined4 *)(lVar13 + 0x38c) = 0x80;
    FUN_1446efbd8(lVar13 + 0x370,0);
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x380) != 0
     ) {
    FUN_1400020a8();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x360) != 0
     ) {
    FUN_1400020a8();
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  FUN_14274a6a8(*(undefined8 *)(lVar13 + 0x350),*(undefined4 *)(lVar13 + 0x358));
  if (*(longlong *)(lVar13 + 0x350) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142748843 FUN_142748843 body=69 status=ok
// SIG undefined FUN_142748843(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142748843(void)

{
  _DAT_14c8338a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142748885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8338b0,1);
  return;
}



// FUNCTION 142748888 FUN_142748888 body=69 status=ok
// SIG undefined FUN_142748888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142748888(void)

{
  _DAT_14c8338b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427488ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8338c0,1);
  return;
}



// FUNCTION 1427488ce FUN_1427488ce body=979 status=ok
// SIG undefined FUN_1427488ce(void)

LPCRITICAL_SECTION FUN_1427488ce(LPCRITICAL_SECTION param_1,int param_2)

{
  HANDLE *ppvVar1;
  int iVar2;
  HANDLE pvVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  ULONG_PTR UVar7;
  int iVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  FUN_146268330(&local_48,param_1);
  local_58 = 0;
  FUN_14152bcb8(param_1 + 1,L"r.VT.EvictFileCache",L"Evict all the file caches in the VT system.",
                &local_48);
  if (local_40 == 0) {
LAB_14274896c:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_14274896c;
  }
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[3].LockCount = 0;
  ppvVar1 = &param_1[3].OwningThread;
  param_1[3].OwningThread = (HANDLE)0x0;
  param_1[3].LockSemaphore = (HANDLE)0x0;
  p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)DAT_14c758610 * (longlong)param_2 * 0x400);
  param_1[4].DebugInfo = p_Var9;
  param_1[4].LockCount = param_2;
  param_1[4].RecursionCount = param_2;
  UVar7 = FUN_14001cc68(p_Var9,0);
  param_1[3].SpinCount = UVar7;
  iVar8 = *(int *)&param_1[3].LockSemaphore;
  iVar2 = *(int *)((longlong)&param_1[3].LockSemaphore + 4);
  *(int *)&param_1[3].LockSemaphore = iVar8 + param_2 + 1;
  if ((uint)(iVar2 - iVar8) < param_2 + 1U) {
    FUN_1462685e6(ppvVar1);
  }
  if (-1 < param_2) {
    iVar8 = -1;
    lVar10 = 0;
    do {
      pvVar3 = *ppvVar1;
      *(undefined8 *)((longlong)pvVar3 + lVar10) = 0;
      *(undefined4 *)((longlong)pvVar3 + lVar10 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)pvVar3 + lVar10 + 0x14) = 0;
      *(int *)((longlong)pvVar3 + lVar10 + 0xc) = iVar8 + 2;
      *(int *)((longlong)pvVar3 + lVar10 + 0x10) = iVar8;
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((ulonglong)(param_2 + 1U) * 0x18 != lVar10);
  }
  *(int *)((longlong)*ppvVar1 + 0x10) = param_2;
  *(undefined4 *)((longlong)*ppvVar1 + (longlong)param_2 * 0x18 + 0xc) = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_48[2] = lVar11;
  *local_48 = (longlong)&PTR_FUN_149e01c80;
  local_48[3] = (longlong)param_1;
  if ((local_48 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*local_48 + 0x30))(), uVar5 = DAT_14c86a920, cVar6 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142748c0f;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_142748bfd;
    }
  }
  else {
    if ((DAT_14c86a92c < 1) &&
       (DAT_14c86a928 = DAT_14c86a928 + -1, DAT_14c86a928 <= (int)DAT_14c86a920)) {
      if (0 < (int)DAT_14c86a920) {
        iVar8 = 0;
        do {
          if (((*(int *)(DAT_14c86a918 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(DAT_14c86a918 + (longlong)iVar8 * 0x10),
              plVar4 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(&DAT_14c86a918,iVar8);
            FUN_14005b248(&DAT_14c86a918);
          }
          else {
            iVar8 = iVar8 + 1;
          }
        } while (iVar8 < (int)DAT_14c86a920);
      }
      DAT_14c86a928 = 2;
      if (2 < (int)(DAT_14c86a920 * 2)) {
        DAT_14c86a928 = DAT_14c86a920 * 2;
      }
      if ((DAT_14c86a928 < (int)uVar5) && (DAT_14c86a924 != DAT_14c86a920)) {
        FUN_14045812c();
      }
    }
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_38);
    }
    uVar5 = DAT_14c86a920;
    lVar10 = (longlong)(int)DAT_14c86a920;
    DAT_14c86a920 = DAT_14c86a920 + 1;
    if (DAT_14c86a924 < DAT_14c86a920) {
      FUN_1447a71f6(&DAT_14c86a918,uVar5);
    }
    lVar11 = DAT_14c86a918;
    lVar10 = lVar10 * 0x10;
    *(undefined8 *)(DAT_14c86a918 + lVar10) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar10) = 0;
    *(longlong **)(lVar11 + lVar10) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar11 + 8 + lVar10) = local_40;
LAB_142748bfd:
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_142748c0f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142748ca2 FUN_142748ca2 body=311 status=ok
// SIG undefined FUN_142748ca2(void)

void FUN_142748ca2(longlong param_1,int param_2,int param_3,undefined4 param_4,longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  undefined1 auStack_a8 [32];
  code **local_88;
  longlong local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = (longlong)DAT_14c758610 * 0x400;
  lVar3 = *(longlong *)(param_1 + 0x60) - param_3 * lVar2;
  if (lVar2 < lVar3) {
    lVar3 = lVar2;
  }
  lVar4 = param_2 * lVar2 + DAT_14c833a58;
  local_50 = (undefined8 *)*param_5;
  if (local_50 == (undefined8 *)0x0) {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_149e01d50;
    local_50 = (undefined8 *)0x0;
    local_78[0] = FUN_14274ae72;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
    UNLOCK();
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_149e01d50;
    LOCK();
    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
    UNLOCK();
    local_78[0] = FUN_14274ae72;
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
  local_88 = local_78;
  local_80 = lVar4;
  (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))
            (*(longlong **)(param_1 + 0x68),param_3 * lVar2,lVar3,param_4);
  if (local_78[0] != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar5 = local_68;
    }
    (*(code *)(*pppuVar5)[2])(pppuVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142748dda FUN_142748dda body=990 status=ok
// SIG undefined FUN_142748dda(void)

int * FUN_142748dda(longlong param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  uint **local_b8;
  undefined8 *local_a8;
  uint local_9c;
  uint *local_98;
  int local_8c;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  DAT_14c833a68 = DAT_14c833a68 + -1;
  iVar12 = DAT_14c833a68;
  if (DAT_14c833a6c < DAT_14c833a68) {
    iVar12 = DAT_14c833a6c;
  }
  iVar3 = *(int *)(DAT_14c833a48 + 0xc);
  lVar13 = (longlong)iVar3;
  plVar2 = (longlong *)(DAT_14c833a48 + lVar13 * 0x18);
  DAT_14c833a6c = iVar12;
  if (*plVar2 != 0) {
    FUN_14014108a(*plVar2,(int)plVar2[1]);
  }
  *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
  *plVar2 = param_1;
  *(uint *)(plVar2 + 1) = param_3;
  lVar6 = DAT_14c833a48;
  iVar12 = *(int *)(DAT_14c833a48 + 0xc + lVar13 * 0x18);
  iVar4 = *(int *)(DAT_14c833a48 + 0x10 + lVar13 * 0x18);
  *(int *)(DAT_14c833a48 + 0xc + (longlong)iVar4 * 0x18) = iVar12;
  *(int *)(DAT_14c833a48 + 0x10 + (longlong)iVar12 * 0x18) = iVar4;
  *(int *)(lVar6 + 0x10 + lVar13 * 0x18) = iVar3;
  *(int *)(lVar6 + 0xc + lVar13 * 0x18) = iVar3;
  *param_2 = iVar3 + -1;
  plVar2 = (longlong *)(param_1 + 8);
  local_9c = param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar13 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    iVar12 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_3) * 4);
    if (iVar12 != -1) {
      do {
        lVar13 = *plVar2 + (longlong)iVar12 * 0x20;
        if (*(uint *)(*plVar2 + (longlong)iVar12 * 0x20) == param_3) {
          if (lVar13 != 0) goto LAB_142748f26;
          break;
        }
        iVar12 = *(int *)(lVar13 + 0x18);
      } while (iVar12 != -1);
    }
  }
  local_98 = &local_9c;
  FUN_14170196a(plVar2,&local_8c,param_3);
  lVar13 = *plVar2 + (longlong)local_8c * 0x20;
LAB_142748f26:
  lVar6 = FUN_140021065();
  puVar7 = (uint *)FUN_140021018(lVar6);
  puVar10 = *(uint **)(puVar7 + 2);
  if (puVar10 != (uint *)0x0) {
    uVar5 = puVar7[4] - 1;
    goto LAB_142748f4d;
  }
  puVar10 = *(uint **)puVar7;
  if (puVar10 == (uint *)0x0) {
    puVar10 = (uint *)FUN_14154c170(lVar6 + 0x40);
    *(uint **)(puVar7 + 2) = puVar10;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)FUN_14001cc68(0x10000,0);
      *(uint **)(puVar7 + 2) = puVar10;
      iVar12 = 0x185;
      puVar11 = puVar10;
      do {
        puVar9 = puVar11 + 0x2a;
        *(uint **)puVar11 = puVar9;
        iVar12 = iVar12 + -1;
        puVar11 = puVar9;
      } while (iVar12 != 0);
      goto LAB_14274914a;
    }
  }
  else {
    *(uint **)(puVar7 + 2) = puVar10;
    puVar9 = puVar7;
LAB_14274914a:
    puVar9[0] = 0;
    puVar9[1] = 0;
  }
  puVar7[4] = 0x186;
  uVar5 = 0x185;
LAB_142748f4d:
  *(undefined8 *)(puVar7 + 2) = *(undefined8 *)puVar10;
  puVar7[4] = uVar5;
  FUN_1447247dc(puVar10,0);
  *(undefined ***)puVar10 = &PTR_FUN_149e00300;
  if (*(code **)(*(longlong *)(puVar10 + 0x1c) + 0x18) != FUN_144713626) {
    (**(code **)(*(longlong *)(puVar10 + 0x1c) + 0x18))(puVar10 + 0x1c,puVar10 + 0x12);
  }
  *(undefined ***)(puVar10 + 0x1c) =
       LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
       ::vftable;
  *(uint **)(puVar10 + 0x12) = puVar10;
  *(uint **)(puVar10 + 0x14) = puVar10;
  lVar6 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
  }
  *(undefined8 *)(puVar10 + 0x1e) = uVar8;
  puVar10[0x20] = 0x7800c400;
  puVar10[0x21] = 0xc8000052;
  puVar10[7] = 2;
  puVar7 = *(uint **)(lVar13 + 0x10);
  local_98 = puVar10;
  if (puVar7 != puVar10) {
    *(uint **)(lVar13 + 0x10) = puVar10;
    if (puVar10 != (uint *)0x0) {
      LOCK();
      puVar10[2] = puVar10[2] + 1;
      UNLOCK();
    }
    if (puVar7 != (uint *)0x0) {
      LOCK();
      puVar10 = puVar7 + 2;
      *puVar10 = *puVar10 - 1;
      UNLOCK();
      if (*puVar10 == 0) {
        (*(code *)**(undefined8 **)puVar7)(puVar7,1);
      }
    }
  }
  puVar10 = local_98;
  if (*(longlong *)(param_1 + 0x60) < 0) {
    iVar12 = *param_2;
    if (local_98 != (uint *)0x0) {
      LOCK();
      local_98[2] = local_98[2] + 1;
      UNLOCK();
    }
    local_88[0] = (code *)0x0;
    local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_78 = &PTR_LAB_149e01d70;
    local_78[1] = param_1;
    *(int *)(local_78 + 2) = iVar12;
    *(uint *)((longlong)local_78 + 0x14) = param_3;
    *(undefined4 *)(local_78 + 3) = param_4;
    local_78[4] = puVar10;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88[0] = FUN_14274af7a;
    }
    local_b8 = (uint **)CONCAT44(local_b8._4_4_,0xff);
    FUN_140e6df44(&local_a8,local_88);
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
  }
  else {
    local_b8 = &local_98;
    FUN_142748ca2(param_1,*param_2,param_3,param_4);
  }
  if (local_98 != (uint *)0x0) {
    LOCK();
    puVar10 = local_98 + 2;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if (*puVar10 == 0) {
      (*(code *)**(undefined8 **)local_98)(local_98,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1427491ba FUN_1427491ba body=1499 status=ok
// SIG undefined FUN_1427491ba(void)

undefined8 *
FUN_1427491ba(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong param_5,undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  uint local_90;
  int local_8c;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_4 = param_4 + *(longlong *)(param_1 + 0x58);
  lVar13 = (longlong)DAT_14c758610 << 10;
  lVar5 = param_5 + param_4 + -1;
  iVar19 = (int)(lVar5 / lVar13);
  iVar4 = (int)(param_4 / lVar13);
  iVar16 = (iVar19 - iVar4) + 1;
  local_a8 = param_3;
  FUN_140074620(lVar13,lVar5 % lVar13);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  if (((*(longlong *)(param_1 + 0x70) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xa0) & 1) != 0)) &&
     (puVar6 = *(undefined8 **)(param_1 + 0x70), puVar6 != (undefined8 *)0x0)) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    piVar17 = (int *)(puVar6 + 1);
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (*piVar17 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  if (iVar16 <= DAT_14c833a68) {
    local_a0 = param_2;
    puVar6 = (undefined8 *)FUN_14001cc68(iVar16 * 4 + 0x24,8);
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = &PTR__purecall_149e01dd0;
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_FUN_149e01630;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0xffffffff;
    *(int *)(puVar6 + 4) = iVar16;
    puVar6[2] = param_4 % ((longlong)DAT_14c758610 << 10);
    puVar6[3] = param_5;
    if (iVar4 <= iVar19) {
      plVar1 = (longlong *)(param_1 + 8);
      local_98 = param_1 + 0x40;
      uVar15 = (longlong)iVar4;
      do {
        local_90 = (uint)uVar15;
        if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
          lVar5 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar5 = local_98;
          }
          iVar16 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & local_90) * 4);
          if (iVar16 != -1) {
            do {
              lVar5 = *plVar1 + (longlong)iVar16 * 0x20;
              if (*(uint *)(*plVar1 + (longlong)iVar16 * 0x20) == local_90) {
                if (lVar5 != 0) goto LAB_14274937f;
                break;
              }
              iVar16 = *(int *)(lVar5 + 0x18);
            } while (iVar16 != -1);
          }
        }
        local_88[0] = (code *)&local_90;
        FUN_14170196a(plVar1,&local_8c,uVar15 & 0xffffffff,local_88);
        lVar5 = *plVar1 + (longlong)local_8c * 0x20;
LAB_14274937f:
        lVar13 = DAT_14c833a48;
        piVar17 = (int *)(lVar5 + 8);
        lVar7 = (longlong)*piVar17;
        if (lVar7 == -1) {
          FUN_142748dda(param_1,local_88,uVar15 & 0xffffffff,param_6);
          *piVar17 = (int)local_88[0];
          iVar16 = (int)local_88[0];
        }
        else {
          iVar16 = *(int *)(DAT_14c833a48 + 0x2c + lVar7 * 0x18);
          if (iVar16 == 0) {
            lVar8 = lVar7 + 1;
            DAT_14c833a68 = DAT_14c833a68 + -1;
            iVar18 = DAT_14c833a68;
            if (DAT_14c833a6c < DAT_14c833a68) {
              iVar18 = DAT_14c833a6c;
            }
            iVar2 = *(int *)(DAT_14c833a48 + 0xc + lVar8 * 0x18);
            iVar3 = *(int *)(DAT_14c833a48 + 0x10 + lVar8 * 0x18);
            DAT_14c833a6c = iVar18;
            *(int *)(DAT_14c833a48 + 0xc + (longlong)iVar3 * 0x18) = iVar2;
            *(int *)(DAT_14c833a48 + 0x10 + (longlong)iVar2 * 0x18) = iVar3;
            *(int *)(lVar13 + 0x10 + lVar8 * 0x18) = (int)lVar8;
            *(int *)(lVar13 + 0xc + lVar8 * 0x18) = (int)lVar8;
          }
          *(int *)(lVar13 + lVar7 * 0x18 + 0x2c) = iVar16 + 1;
          iVar16 = *piVar17;
        }
        *(int *)((longlong)puVar6 + (uVar15 - (longlong)iVar4) * 4 + 0x24) = iVar16;
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          if ((*(byte *)(*(longlong *)(lVar5 + 0x10) + 0xa0) & 1) == 0) {
            iVar16 = *(int *)(local_a8 + 0x28);
            *(uint *)(local_a8 + 0x28) = iVar16 + 1U;
            if (*(uint *)(local_a8 + 0x2c) < iVar16 + 1U) {
              FUN_14476a5c8(local_a8,iVar16);
            }
            lVar13 = *(longlong *)(local_a8 + 0x20);
            if (*(longlong *)(local_a8 + 0x20) == 0) {
              lVar13 = local_a8;
            }
            lVar5 = *(longlong *)(lVar5 + 0x10);
            *(longlong *)(lVar13 + (longlong)iVar16 * 8) = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
          }
          else {
            puVar9 = *(undefined8 **)(lVar5 + 0x10);
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
              LOCK();
              piVar17 = (int *)(puVar9 + 1);
              *piVar17 = *piVar17 + -1;
              UNLOCK();
              if (*piVar17 == 0) {
                (**(code **)*puVar9)(puVar9,1);
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while (iVar19 + 1 != (int)uVar15);
    }
    param_2 = local_a0;
    *local_a0 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
    goto LAB_1427494d9;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  lVar5 = FUN_140021065();
  puVar9 = (undefined8 *)FUN_140021018(lVar5);
  puVar6 = (undefined8 *)puVar9[1];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar9;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_14154c170(lVar5 + 0x40);
      puVar9[1] = puVar6;
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar9[1] = puVar6;
        iVar4 = 0x185;
        puVar12 = puVar6;
        do {
          puVar11 = puVar12 + 0x15;
          *puVar12 = puVar11;
          iVar4 = iVar4 + -1;
          puVar12 = puVar11;
        } while (iVar4 != 0);
        goto LAB_142749713;
      }
    }
    else {
      puVar9[1] = puVar6;
      puVar11 = puVar9;
LAB_142749713:
      *puVar11 = 0;
    }
    *(undefined4 *)(puVar9 + 2) = 0x186;
    iVar4 = 0x185;
  }
  else {
    iVar4 = *(int *)(puVar9 + 2) + -1;
  }
  puVar9[1] = *puVar6;
  *(int *)(puVar9 + 2) = iVar4;
  FUN_1447247dc(puVar6,0);
  *puVar6 = &PTR_FUN_149e00300;
  if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
  }
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar6[9] = puVar6;
  puVar6[10] = puVar6;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar6[0xf] = uVar10;
  puVar6[0x10] = 0xc80000527800c400;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 2;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e01d30;
  local_88[0] = FUN_14274ad7c;
  iVar4 = *(int *)(local_a8 + 0x28);
  *(uint *)(local_a8 + 0x28) = iVar4 + 1U;
  local_60 = puVar6;
  if (*(uint *)(local_a8 + 0x2c) < iVar4 + 1U) {
    FUN_14476a5c8(local_a8,iVar4);
  }
  lVar5 = *(longlong *)(local_a8 + 0x20);
  if (*(longlong *)(local_a8 + 0x20) == 0) {
    lVar5 = local_a8;
  }
  *(undefined8 **)(lVar5 + (longlong)iVar4 * 8) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  local_b0 = 0;
  local_b8 = local_88;
  uVar10 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))
                     (*(longlong **)(param_1 + 0x68),param_4,param_5,param_6);
  puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar9 = &PTR__purecall_149e01dd0;
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = &PTR_FUN_149e01600;
  puVar9[2] = 0;
  puVar9[3] = uVar10;
  puVar9[4] = param_5;
  *param_2 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
    UNLOCK();
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar14 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar14 = &local_68;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar17 = (int *)(puVar6 + 1);
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (*piVar17 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
LAB_1427494d9:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142749796 FUN_142749796 body=1735 status=ok
// SIG undefined FUN_142749796(void)

longlong *
FUN_142749796(longlong param_1,longlong *param_2,longlong param_3,uint param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Src;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong *local_b0;
  longlong local_a8;
  uint local_9c;
  void *local_98;
  undefined8 uStack_90;
  uint *local_88;
  int local_7c;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_3;
  FUN_140074620();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  if (((*(longlong *)(param_1 + 0x70) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xa0) & 1) != 0)) &&
     (puVar3 = *(undefined8 **)(param_1 + 0x70), puVar3 != (undefined8 *)0x0)) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    LOCK();
    piVar17 = (int *)(puVar3 + 1);
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (*piVar17 == 0) {
      (**(code **)*puVar3)();
    }
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  local_b0 = param_2;
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_4);
  }
  if ((param_4 != 0) && (FUN_1467b152a(&local_98), 0 < DAT_14c833a68)) {
    plVar1 = (longlong *)(param_1 + 8);
    local_b8 = (ulonglong)param_4;
    uVar18 = 0;
    uVar8 = 0;
    iVar15 = DAT_14c833a68;
    do {
      lVar10 = *(longlong *)(local_a8 + uVar18 * 0x10) + *(longlong *)(param_1 + 0x58);
      uVar4 = lVar10 / ((longlong)DAT_14c758610 << 10);
      uVar20 = (ulonglong)uVar8;
      if ((int)uVar8 < (int)uVar4) {
        uVar20 = uVar4 & 0xffffffff;
      }
      uVar8 = (uint)uVar20;
      iVar12 = (int)((*(longlong *)(local_a8 + 8 + uVar18 * 0x10) + lVar10 + -1) /
                    ((longlong)DAT_14c758610 << 10));
      if ((int)uVar8 <= iVar12) {
        do {
          uVar19 = (uint)uVar20;
          local_9c = uVar19;
          if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
            lVar10 = *(longlong *)(param_1 + 0x48);
            if (*(longlong *)(param_1 + 0x48) == 0) {
              lVar10 = param_1 + 0x40;
            }
            iVar15 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar19) * 4);
            if (iVar15 != -1) {
              do {
                lVar10 = *plVar1 + (longlong)iVar15 * 0x20;
                if (*(uint *)(*plVar1 + (longlong)iVar15 * 0x20) == uVar19) {
                  if (lVar10 != 0) goto LAB_142749a66;
                  break;
                }
                iVar15 = *(int *)(lVar10 + 0x18);
              } while (iVar15 != -1);
            }
          }
          local_88 = &local_9c;
          FUN_14170196a(plVar1,&local_7c,uVar20,&local_88);
          lVar10 = *plVar1 + (longlong)local_7c * 0x20;
LAB_142749a66:
          piVar17 = (int *)(lVar10 + 8);
          if (*piVar17 == -1) {
            FUN_142748dda(param_1,&local_88,uVar20,param_5);
            *piVar17 = (int)local_88;
            lVar14 = (longlong)(int)uStack_90;
            uVar8 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
            if (uStack_90._4_4_ < uVar8) {
              FUN_1467b1580(&local_98);
            }
            *(int *)((longlong)local_98 + lVar14 * 4) = *piVar17;
          }
          if (*(longlong *)(lVar10 + 0x10) != 0) {
            if ((*(byte *)(*(longlong *)(lVar10 + 0x10) + 0xa0) & 1) == 0) {
              lVar14 = (longlong)(int)local_50;
              uVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar8);
              if (local_50._4_4_ < uVar8) {
                FUN_14476a5c8(local_78);
              }
              puVar9 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar9 = local_78;
              }
              lVar10 = *(longlong *)(lVar10 + 0x10);
              *(longlong *)(puVar9 + lVar14 * 8) = lVar10;
              if (lVar10 != 0) {
                LOCK();
                *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                UNLOCK();
              }
            }
            else {
              puVar3 = *(undefined8 **)(lVar10 + 0x10);
              if (puVar3 != (undefined8 *)0x0) {
                *(undefined8 *)(lVar10 + 0x10) = 0;
                LOCK();
                piVar17 = (int *)(puVar3 + 1);
                *piVar17 = *piVar17 + -1;
                UNLOCK();
                if (*piVar17 == 0) {
                  (**(code **)*puVar3)();
                }
              }
            }
          }
          uVar8 = uVar19 + 1;
          iVar15 = DAT_14c833a68;
        } while (((int)uVar19 < iVar12) && (uVar20 = (ulonglong)uVar8, 0 < DAT_14c833a68));
      }
      uVar18 = uVar18 + 1;
    } while ((uVar18 < local_b8) && (0 < iVar15));
  }
  plVar1 = local_b0;
  *local_b0 = 0;
  if ((int)local_50 < 1) {
    if (0 < (longlong)(int)uStack_90) {
      lVar10 = 0;
      do {
        lVar14 = DAT_14c833a48;
        lVar16 = (longlong)*(int *)((longlong)local_98 + lVar10) + 1;
        iVar15 = *(int *)(DAT_14c833a48 + 0x14 + lVar16 * 0x18);
        if (iVar15 == 1) {
          lVar2 = DAT_14c833a48 + lVar16 * 0x18;
          *(undefined4 *)(lVar2 + 0xc) = 0;
          iVar12 = *(int *)(lVar14 + 0x10);
          *(int *)(lVar2 + 0x10) = iVar12;
          *(int *)(DAT_14c833a48 + 0xc + (longlong)iVar12 * 0x18) = (int)lVar16;
          *(int *)(lVar14 + 0x10) = (int)lVar16;
          DAT_14c833a68 = DAT_14c833a68 + 1;
        }
        *(int *)(DAT_14c833a48 + 0x14 + lVar16 * 0x18) = iVar15 + -1;
        lVar10 = lVar10 + 4;
      } while ((longlong)(int)uStack_90 * 4 != lVar10);
    }
  }
  else {
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar6 = (uint *)*puVar3;
    if (puVar6 != (uint *)0x0) goto LAB_142749c0a;
    while( true ) {
      uVar8 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar8 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar8 | 1;
        __tlregdtor(&LAB_14274a1dc);
      }
      lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar10 + 0x310);
      *(undefined8 *)(lVar10 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar3 = puVar5;
      FUN_140217a48(puVar3);
      puVar6 = (uint *)*puVar3;
LAB_142749c0a:
      puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar11 = (uint *)(puVar13 + 0x17);
      uVar8 = puVar6[0x12];
      if (puVar11 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar19 = *puVar6;
        *puVar6 = *puVar6 + uVar8 + 1;
        UNLOCK();
        if ((uVar19 ^ uVar8) != 0xffffffff) break;
        puVar6 = (uint *)*puVar3;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar3 = puVar6;
        puVar13 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
        puVar11 = (uint *)(puVar13 + 0x17);
        uVar8 = 0;
        if (puVar11 <= puVar6 + 0x4000) {
          uVar8 = 1;
          goto LAB_142749c8a;
        }
      }
    }
    uVar8 = uVar8 + 1;
LAB_142749c8a:
    *(uint **)(puVar6 + 0x10) = puVar11;
    puVar6[0x12] = uVar8;
    FUN_1447247dc(puVar13,local_78);
    _Src = local_98;
    *puVar13 = &PTR_FUN_149e01d90;
    puVar13[0x15] = 0;
    lVar10 = (longlong)(int)uStack_90;
    *(int *)(puVar13 + 0x16) = (int)uStack_90;
    if (lVar10 == 0) {
      *(undefined4 *)((longlong)puVar13 + 0xb4) = 0;
    }
    else {
      FUN_1467b16f8(puVar13 + 0x15,uStack_90 & 0xffffffff);
      memcpy((void *)puVar13[0x15],_Src,lVar10 << 2);
    }
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar10 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar10 + 0x30);
    }
    puVar13[0xf] = uVar7;
    puVar13[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
      UNLOCK();
    }
    local_88 = (uint *)CONCAT71(local_88._1_7_,1);
    FUN_1447439e4(puVar13);
    puVar3 = (undefined8 *)*plVar1;
    *plVar1 = (longlong)puVar13;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar17 = (int *)(puVar3 + 1);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar9 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar9 = local_78;
  }
  FUN_144717c65(puVar9,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 142749e5e FUN_142749e5e body=109 status=ok
// SIG undefined FUN_142749e5e(void)

undefined8 FUN_142749e5e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar4 = (longlong *)*plVar1;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar4;
  }
  lVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,param_1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14001cc68(0x78,0x10);
    FUN_14154bedc(uVar3,lVar2,param_2);
  }
  return uVar3;
}



// FUNCTION 142749ecc FUN_142749ecc body=65 status=ok
// SIG undefined FUN_142749ecc(void)

undefined8 FUN_142749ecc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14001cc68(0x78,0x10);
    FUN_14154bedc(uVar1,param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 142749f0e FUN_142749f0e body=518 status=ok
// SIG undefined FUN_142749f0e(void)

longlong * FUN_142749f0e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  undefined1 auStack_118 [32];
  int *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e1;
  int local_e0;
  undefined1 local_dc [7];
  undefined1 local_d5;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  iVar1 = FUN_144b51af0(0xffffffff,0xffffffffffffffff);
  iVar5 = 2;
  lVar2 = FUN_144b52ac0(9,2,0x10000,0);
  lVar4 = (longlong)iVar1;
  if (iVar1 < lVar2) {
    lVar4 = lVar2;
  }
  *param_1 = lVar4;
  local_e8 = 2;
  if (DAT_14c872ce0 == 0) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else {
    local_f8 = (int *)&DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"OodleDataCompressionFormat",L"PreallocatedBufferCount",&local_e8);
    iVar5 = local_e8;
    if ((local_e8 < 0) && (iVar5 = DAT_14c8c27ac, DAT_14c8c27ac < 1)) {
      memset(local_c8,0,0x82);
      local_cc = 0;
      local_d0 = 0;
      local_d4 = 0;
      FUN_140e55932(local_c8,&local_cc,&local_d0,&local_d4);
      iVar5 = local_d4;
      local_f0 = &local_e1;
      local_f8 = &local_e0;
      FUN_1457b80ec(local_d0,local_d4,&local_d5,local_dc);
      DAT_14c8c27ac = iVar5;
      if ((0 < local_e0) && (DAT_14c8c27ac = iVar5, local_e0 <= iVar5)) {
        iVar5 = local_e0;
        DAT_14c8c27ac = local_e0;
      }
    }
    *(int *)(param_1 + 1) = iVar5;
    if (iVar5 == 0) goto LAB_14274a061;
  }
  lVar2 = (longlong)iVar5;
  lVar4 = lVar2 * 0x40 + 0x40;
  lVar4 = lVar4 + (ulonglong)(lVar4 == 0);
  if (0xffffffffffffffbf < (ulonglong)(lVar2 * 0x40)) {
    lVar4 = -1;
  }
  if (iVar5 < 0) {
    lVar4 = -1;
  }
  plVar3 = (longlong *)FUN_14001cc68(lVar4,0x40);
  *plVar3 = lVar2;
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar3 + 8);
  do {
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].LockSemaphore;
  } while (lpCriticalSection != (LPCRITICAL_SECTION)(plVar3 + lVar2 * 8 + 8));
  param_1[2] = (longlong)(plVar3 + 8);
LAB_14274a061:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14274a115 FUN_14274a115 body=199 status=ok
// SIG undefined FUN_14274a115(void)

void FUN_14274a115(void)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c8338d0 != 0) {
    if (0 < DAT_14c8338d0) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c8338d8 + lVar2));
        if (BVar1 != 0) {
          FUN_1400020a8(*(undefined8 *)(DAT_14c8338d8 + 0x28 + lVar2));
          *(undefined8 *)(DAT_14c8338d8 + 0x28 + lVar2) = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_14c8338d8 + lVar2));
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x40;
      } while (lVar3 < DAT_14c8338d0);
    }
    if (DAT_14c8338d8 != 0) {
      lVar2 = DAT_14c8338d8 + -0x40;
      if (*(longlong *)(DAT_14c8338d8 + -0x40) != 0) {
        lVar3 = *(longlong *)(DAT_14c8338d8 + -0x40) << 6;
        do {
          DeleteCriticalSection((LPCRITICAL_SECTION)(lVar2 + lVar3));
          lVar3 = lVar3 + -0x40;
        } while (lVar3 != 0);
      }
      FUN_1400020a8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14274a204 FUN_14274a204 body=171 status=ok
// SIG undefined FUN_14274a204(void)

void FUN_14274a204(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_14274a1dc);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014274a277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14274a2b0 FUN_14274a2b0 body=367 status=ok
// SIG undefined FUN_14274a2b0(void)

undefined8 * FUN_14274a2b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_149e01f10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_14274a36c;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_14274a1dc);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_1467aa772(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_14274a36c:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 14274a420 FUN_14274a420 body=270 status=ok
// SIG undefined FUN_14274a420(void)

void FUN_14274a420(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *_Memory;
  int *piVar5;
  
  plVar2 = (longlong *)*param_2;
  puVar4 = (undefined8 *)*plVar2;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)((longlong)plVar2 + 0xc) == '\x01') {
      FUN_14491b968(plVar2,(int)plVar2[1],1);
      puVar4 = (undefined8 *)*plVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_14274a460;
    }
    LOCK();
    piVar5 = (int *)(puVar4 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      if (*(code **)*puVar4 == FUN_140270b2e) {
        FUN_140270b2e(puVar4,1);
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
LAB_14274a460:
  if (plVar2 != (longlong *)0x0) {
    piVar5 = (int *)((ulonglong)plVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274a1dc);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014274a4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14274a52e FUN_14274a52e body=1 status=ok
// SIG undefined FUN_14274a52e(void)

void FUN_14274a52e(void)

{
  return;
}



// FUNCTION 14274a530 FUN_14274a530 body=1 status=ok
// SIG undefined FUN_14274a530(void)

void FUN_14274a530(void)

{
  return;
}



// FUNCTION 14274a532 FUN_14274a532 body=1 status=ok
// SIG undefined FUN_14274a532(void)

void FUN_14274a532(void)

{
  return;
}



// FUNCTION 14274a534 FUN_14274a534 body=3 status=ok
// SIG undefined FUN_14274a534(void)

undefined1 FUN_14274a534(void)

{
  return 1;
}



// FUNCTION 14274a538 FUN_14274a538 body=367 status=ok
// SIG undefined FUN_14274a538(void)

bool FUN_14274a538(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong *local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_3;
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1,local_48,param_5,param_6);
  if (cVar1 == '\0') {
    bVar2 = false;
    goto LAB_14274a682;
  }
  if ((param_7 >> 8 & 1) == 0) {
    if (param_7 == 0x10) {
      uVar6 = 4;
LAB_14274a632:
      uVar5 = 3;
    }
    else if (param_7 == 0x20) {
      uVar6 = 0xfe;
      uVar5 = 2;
    }
    else {
      if (param_7 == 0x100) {
        uVar6 = 6;
        goto LAB_14274a632;
      }
      uVar5 = 3;
      uVar6 = 3;
    }
    FUN_1400416c5();
    local_70 = (longlong *)CONCAT71(local_70._1_7_,uVar6);
    local_78 = CONCAT31(local_78._1_3_,uVar5);
    local_60 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    lVar3 = FUN_142745c6c(param_2,lVar3,param_4,param_5);
  }
  else if ((code *)param_1[0xd] == (code *)0x0) {
    local_70 = param_1 + 2;
    local_78 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    local_60 = 0;
    lVar3 = FUN_144b50c80((int)param_1[1],param_4,param_5,param_2);
  }
  else {
    local_78 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_70 = (longlong *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    lVar3 = (*(code *)param_1[0xd])((int)param_1[1],param_4,param_5,param_2);
  }
  bVar2 = 0 < lVar3;
  lVar4 = -1;
  if (0 < lVar3) {
    lVar4 = lVar3;
  }
  *param_3 = lVar4;
LAB_14274a682:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274a6a8 FUN_14274a6a8 body=50 status=ok
// SIG undefined FUN_14274a6a8(void)

void FUN_14274a6a8(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14274a6e4 FUN_14274a6e4 body=48 status=ok
// SIG undefined FUN_14274a6e4(void)

undefined1 FUN_14274a6e4(longlong *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = *param_2;
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x40) == '\x01') {
    *(undefined1 *)(lVar1 + 0x40) = 0;
    if (0.016666668 <= fVar2) {
      fVar2 = 0.016666668;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  FUN_142746dae(lVar1,fVar2);
  return 1;
}



// FUNCTION 14274a71e FUN_14274a71e body=12 status=ok
// SIG undefined FUN_14274a71e(void)

void FUN_14274a71e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014274a727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14274a72a FUN_14274a72a body=29 status=ok
// SIG undefined FUN_14274a72a(void)

undefined8 FUN_14274a72a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274a748 FUN_14274a748 body=29 status=ok
// SIG undefined FUN_14274a748(void)

undefined8 FUN_14274a748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274a77a FUN_14274a77a body=93 status=ok
// SIG undefined FUN_14274a77a(void)

void FUN_14274a77a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14274a7d8 FUN_14274a7d8 body=93 status=ok
// SIG undefined FUN_14274a7d8(void)

void FUN_14274a7d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14274a836 FUN_14274a836 body=126 status=ok
// SIG undefined FUN_14274a836(void)

void FUN_14274a836(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e01680;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274a8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274a8c2 FUN_14274a8c2 body=24 status=ok
// SIG undefined FUN_14274a8c2(void)

undefined1 FUN_14274a8c2(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x40) = 1;
  FUN_142746dae();
  return 1;
}



// FUNCTION 14274a8da FUN_14274a8da body=25 status=ok
// SIG undefined FUN_14274a8da(void)

void FUN_14274a8da(void)

{
  FUN_146268212();
  FUN_14170c56a(&DAT_14c8336d8);
  return;
}



// FUNCTION 14274a912 FUN_14274a912 body=188 status=ok
// SIG undefined FUN_14274a912(void)

void FUN_14274a912(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  param_1 = (longlong *)*param_1;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_1447a1bd6(param_1,iVar4);
  }
  plVar1 = (longlong *)(*param_1 + (longlong)iVar4 * 0x10);
  puVar2 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_14006620a(&local_38,uVar5,uVar3);
  if (&local_38 == plVar1) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_38;
    *(undefined4 *)(plVar1 + 1) = local_30;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274a9d0 FUN_14274a9d0 body=98 status=ok
// SIG undefined FUN_14274a9d0(void)

undefined8 FUN_14274a9d0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((longlong *)*param_1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    uVar1 = *param_2;
    cVar2 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    if (cVar2 != '\0') {
      if ((int)param_1[1] == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        param_1 = (longlong *)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00014274aa2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14274aa48 FUN_14274aa48 body=111 status=ok
// SIG undefined FUN_14274aa48(void)

undefined8 * FUN_14274aa48(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e01710;
  plVar1 = param_1 + 1;
  if (*(int *)(param_1 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14274aa99;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14274aa99:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274aab8 FUN_14274aab8 body=31 status=ok
// SIG undefined FUN_14274aab8(void)

undefined8 FUN_14274aab8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274aadc FUN_14274aadc body=29 status=ok
// SIG undefined FUN_14274aadc(void)

undefined8 FUN_14274aadc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274ab0e FUN_14274ab0e body=93 status=ok
// SIG undefined FUN_14274ab0e(void)

void FUN_14274ab0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14274ab6c FUN_14274ab6c body=93 status=ok
// SIG undefined FUN_14274ab6c(void)

void FUN_14274ab6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01c80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14274abca FUN_14274abca body=126 status=ok
// SIG undefined FUN_14274abca(void)

void FUN_14274abca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e01c80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274ac39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274ac4e FUN_14274ac4e body=166 status=ok
// SIG undefined FUN_14274ac4e(void)

void FUN_14274ac4e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_3;
  uVar2 = 0xffffffffffffffff;
  if (*(char *)(lVar1 + 0x53) == '\0') {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  *(undefined8 *)(*param_1 + 0x60) = uVar2;
  LOCK();
  *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + 1;
  UNLOCK();
  local_11 = 1;
  FUN_1447439e4();
  FUN_140074620();
  FUN_14025230e(lVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274ad26 FUN_14274ad26 body=12 status=ok
// SIG undefined FUN_14274ad26(void)

void FUN_14274ad26(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014274ad2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14274ad32 FUN_14274ad32 body=68 status=ok
// SIG undefined FUN_14274ad32(void)

undefined8 * FUN_14274ad32(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e01cf0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274ad7c FUN_14274ad7c body=123 status=ok
// SIG undefined FUN_14274ad7c(void)

void FUN_14274ad7c(longlong *param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  UNLOCK();
  local_9 = 1;
  FUN_1447439e4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274ae22 FUN_14274ae22 body=12 status=ok
// SIG undefined FUN_14274ae22(void)

void FUN_14274ae22(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014274ae2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14274ae2e FUN_14274ae2e body=68 status=ok
// SIG undefined FUN_14274ae2e(void)

undefined8 * FUN_14274ae2e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e01d30;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274ae72 FUN_14274ae72 body=141 status=ok
// SIG undefined FUN_14274ae72(void)

void FUN_14274ae72(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_3;
  LOCK();
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  UNLOCK();
  local_11 = 1;
  FUN_1447439e4();
  FUN_140074620();
  FUN_14025230e(uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274af2a FUN_14274af2a body=12 status=ok
// SIG undefined FUN_14274af2a(void)

void FUN_14274af2a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014274af33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14274af36 FUN_14274af36 body=68 status=ok
// SIG undefined FUN_14274af36(void)

undefined8 * FUN_14274af36(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e01d50;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274af7a FUN_14274af7a body=64 status=ok
// SIG undefined FUN_14274af7a(void)

void FUN_14274af7a(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 1);
  FUN_140074620();
  FUN_142748ca2(uVar4,uVar3,uVar2,uVar1,param_1 + 3);
  return;
}



// FUNCTION 14274afc4 FUN_14274afc4 body=29 status=ok
// SIG undefined FUN_14274afc4(void)

void FUN_14274afc4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14274afe2 FUN_14274afe2 body=68 status=ok
// SIG undefined FUN_14274afe2(void)

undefined8 * FUN_14274afe2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_149e01d70;
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274b026 FUN_14274b026 body=282 status=ok
// SIG undefined FUN_14274b026(void)

undefined8 * FUN_14274b026(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14274a1dc);
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



// FUNCTION 14274b140 FUN_14274b140 body=549 status=ok
// SIG undefined FUN_14274b140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274b140(void)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  code *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  DAT_14c833ac0 = 1;
  UNLOCK();
  memset(&DAT_14c833b00,0,0x8000);
  local_58 = 0;
  local_48 = &PTR_LAB_149e01e20;
  local_40 = FUN_14274a8da;
  local_68 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c833740,6,&local_68);
  DAT_14c833780 = &DAT_149e0156e;
  _DAT_14c833788 = &DAT_149e01e06;
  DAT_14c833790 = &DAT_149dfc0af;
  DAT_14c833798 = &DAT_149e01e0c;
  _DAT_14c8337a0 = &DAT_149e006d4;
  _DAT_14c8337a8 = &DAT_149e01e0f;
  _DAT_14c8337b0 = &DAT_149e01e00;
  _DAT_14c8337b8 = &DAT_149e01e12;
  _DAT_14c8337c0 = L"\'Saturday";
  _DAT_14c8337c8 = &DAT_149e01570;
  _DAT_14c8337d0 = &DAT_149e01f5e;
  _DAT_14c8337d8 = &DAT_149e01e09;
  local_68 = (code *)0x149e00cf2;
  local_60 = 0x10;
  FUN_1446e940c(local_6c,&local_68);
  local_68 = (code *)0x149e00d14;
  local_60 = 9;
  FUN_1446e940c(local_70,&local_68);
  local_68 = (code *)0x149e00cd0;
  local_60 = 0x10;
  FUN_140208c1e(&DAT_14c8337e0,local_70,local_6c,&local_68);
  atexit((_func_5014 *)&LAB_142747be0);
  local_78 = 4;
  FUN_141471170(&DAT_14c8338a8,L"fc.BlockSize",&DAT_14c758610,
                L"Size of each block in KB in the global file cache object\nShould match packaging compression block size for optimal reading from packege"
               );
  atexit(FUN_142748843);
  local_78 = 4;
  FUN_141471170(&DAT_14c8338b8,L"fc.NumBlocks",&DAT_14c758614,
                L"Number of blocks in the global file cache object");
  atexit(FUN_142748888);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274b3d4 FUN_14274b3d4 body=91 status=ok
// SIG undefined FUN_14274b3d4(void)

void FUN_14274b3d4(void)

{
  if (DAT_14c83bb08 != 0) {
    if (DAT_14c83bb00 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83bb00)(DAT_14c83bb00,0);
    FUN_1446efa72(&DAT_14c83bb00,0,0,0x10);
    DAT_14c83bb08 = 0;
  }
  if (DAT_14c83bb00 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b42f FUN_14274b42f body=91 status=ok
// SIG undefined FUN_14274b42f(void)

void FUN_14274b42f(void)

{
  if (DAT_14c83bb18 != 0) {
    if (DAT_14c83bb10 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83bb10)(DAT_14c83bb10,0);
    FUN_1446efa72(&DAT_14c83bb10,0,0,0x10);
    DAT_14c83bb18 = 0;
  }
  if (DAT_14c83bb10 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b48a FUN_14274b48a body=91 status=ok
// SIG undefined FUN_14274b48a(void)

void FUN_14274b48a(void)

{
  if (DAT_14c83f370 != 0) {
    if (DAT_14c83f368 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f368)(DAT_14c83f368,0);
    FUN_1446efa72(&DAT_14c83f368,0,0,0x10);
    DAT_14c83f370 = 0;
  }
  if (DAT_14c83f368 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b4e5 FUN_14274b4e5 body=91 status=ok
// SIG undefined FUN_14274b4e5(void)

void FUN_14274b4e5(void)

{
  if (DAT_14c83bb28 != 0) {
    if (DAT_14c83bb20 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83bb20)(DAT_14c83bb20,0);
    FUN_1446efa72(&DAT_14c83bb20,0,0,0x10);
    DAT_14c83bb28 = 0;
  }
  if (DAT_14c83bb20 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b540 FUN_14274b540 body=91 status=ok
// SIG undefined FUN_14274b540(void)

void FUN_14274b540(void)

{
  if (DAT_14c83f380 != 0) {
    if (DAT_14c83f378 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f378)(DAT_14c83f378,0);
    FUN_1446efa72(&DAT_14c83f378,0,0,0x10);
    DAT_14c83f380 = 0;
  }
  if (DAT_14c83f378 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b59b FUN_14274b59b body=91 status=ok
// SIG undefined FUN_14274b59b(void)

void FUN_14274b59b(void)

{
  if (DAT_14c83bb38 != 0) {
    if (DAT_14c83bb30 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83bb30)(DAT_14c83bb30,0);
    FUN_1446efa72(&DAT_14c83bb30,0,0,0x10);
    DAT_14c83bb38 = 0;
  }
  if (DAT_14c83bb30 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b5f6 FUN_14274b5f6 body=49 status=ok
// SIG undefined FUN_14274b5f6(void)

void FUN_14274b5f6(void)

{
  FUN_144760e21(DAT_14c83bb40,DAT_14c83bb48);
  if (DAT_14c83bb40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274b627 FUN_14274b627 body=91 status=ok
// SIG undefined FUN_14274b627(void)

void FUN_14274b627(void)

{
  if (DAT_14c83f3d0 != 0) {
    if (DAT_14c83f3c8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f3c8)(DAT_14c83f3c8,0);
    FUN_1446efa72(&DAT_14c83f3c8,0,0,0x10);
    DAT_14c83f3d0 = 0;
  }
  if (DAT_14c83f3c8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b682 FUN_14274b682 body=91 status=ok
// SIG undefined FUN_14274b682(void)

void FUN_14274b682(void)

{
  if (DAT_14c83f3b0 != 0) {
    if (DAT_14c83f3a8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f3a8)(DAT_14c83f3a8,0);
    FUN_1446efa72(&DAT_14c83f3a8,0,0,0x10);
    DAT_14c83f3b0 = 0;
  }
  if (DAT_14c83f3a8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b6dd FUN_14274b6dd body=91 status=ok
// SIG undefined FUN_14274b6dd(void)

void FUN_14274b6dd(void)

{
  if (DAT_14c83f3c0 != 0) {
    if (DAT_14c83f3b8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f3b8)(DAT_14c83f3b8,0);
    FUN_1446efa72(&DAT_14c83f3b8,0,0,0x10);
    DAT_14c83f3c0 = 0;
  }
  if (DAT_14c83f3b8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b738 FUN_14274b738 body=49 status=ok
// SIG undefined FUN_14274b738(void)

void FUN_14274b738(void)

{
  FUN_144760e21(DAT_14c83bb58,DAT_14c83bb60);
  if (DAT_14c83bb58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274b769 FUN_14274b769 body=91 status=ok
// SIG undefined FUN_14274b769(void)

void FUN_14274b769(void)

{
  if (DAT_14c83f360 != 0) {
    if (DAT_14c83f358 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f358)(DAT_14c83f358,0);
    FUN_1446efa72(&DAT_14c83f358,0,0,0x10);
    DAT_14c83f360 = 0;
  }
  if (DAT_14c83f358 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b7c4 FUN_14274b7c4 body=91 status=ok
// SIG undefined FUN_14274b7c4(void)

void FUN_14274b7c4(void)

{
  if (DAT_14c83f350 != 0) {
    if (DAT_14c83f348 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f348)(DAT_14c83f348,0);
    FUN_1446efa72(&DAT_14c83f348,0,0,0x10);
    DAT_14c83f350 = 0;
  }
  if (DAT_14c83f348 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b81f FUN_14274b81f body=91 status=ok
// SIG undefined FUN_14274b81f(void)

void FUN_14274b81f(void)

{
  if (DAT_14c83f390 != 0) {
    if (DAT_14c83f388 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f388)(DAT_14c83f388,0);
    FUN_1446efa72(&DAT_14c83f388,0,0,0x10);
    DAT_14c83f390 = 0;
  }
  if (DAT_14c83f388 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b87a FUN_14274b87a body=91 status=ok
// SIG undefined FUN_14274b87a(void)

void FUN_14274b87a(void)

{
  if (DAT_14c83f3a0 != 0) {
    if (DAT_14c83f398 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83f398)(DAT_14c83f398,0);
    FUN_1446efa72(&DAT_14c83f398,0,0,0x10);
    DAT_14c83f3a0 = 0;
  }
  if (DAT_14c83f398 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b8d5 FUN_14274b8d5 body=91 status=ok
// SIG undefined FUN_14274b8d5(void)

void FUN_14274b8d5(void)

{
  if (DAT_14c83bb78 != 0) {
    if (DAT_14c83bb70 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83bb70)(DAT_14c83bb70,0);
    FUN_1446efa72(&DAT_14c83bb70,0,0,0x10);
    DAT_14c83bb78 = 0;
  }
  if (DAT_14c83bb70 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b930 FUN_14274b930 body=91 status=ok
// SIG undefined FUN_14274b930(void)

void FUN_14274b930(void)

{
  if (DAT_14c83bb88 != 0) {
    if (DAT_14c83bb80 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c83bb80)(DAT_14c83bb80,0);
    FUN_1446efa72(&DAT_14c83bb80,0,0,0x10);
    DAT_14c83bb88 = 0;
  }
  if (DAT_14c83bb80 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14274b99c FUN_14274b99c body=372 status=ok
// SIG undefined FUN_14274b99c(void)

void FUN_14274b99c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar1 = *(uint *)(param_2 + 1);
    if ((int)uVar1 < 2) {
      uVar3 = FUN_140b74eb8();
      FUN_140056680(&local_68,uVar3);
      local_48 = local_68;
      local_40 = local_60 + -1;
      if (local_60 == 0) {
        local_40 = 0;
      }
      local_38 = L"Gearbox/Patch";
      local_30 = 0xd;
      FUN_140bee87a(&local_58,&local_48,2);
      if ((longlong *)(param_1 + 0x10) == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x10) = local_58;
        local_58 = 0;
        *(undefined4 *)(param_1 + 0x18) = (undefined4)local_50;
        *(undefined4 *)(param_1 + 0x1c) = local_50._4_4_;
        local_50 = 0;
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else if ((undefined8 *)(param_1 + 0x10) != param_2) {
      _Src = (void *)*param_2;
      *(uint *)(param_1 + 0x18) = uVar1;
      FUN_1446dd670((undefined8 *)(param_1 + 0x10),(ulonglong)uVar1,*(undefined4 *)(param_1 + 0x1c))
      ;
      memcpy(*(void **)(param_1 + 0x10),_Src,(ulonglong)uVar1 * 2);
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"SkipLoadingReleases");
    if (cVar2 == '\0') {
      FUN_14274bb12(param_1);
      FUN_14274bbb2(param_1);
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274bb12 FUN_14274bb12 body=159 status=ok
// SIG undefined FUN_14274bb12(void)

void FUN_14274bb12(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_14274bdca();
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"ClearAllReleases");
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0xf0;
    do {
      if (cVar1 == '\0') {
        FUN_14274c500(lVar2);
      }
      lVar2 = lVar2 + 0xf0;
      lVar3 = lVar3 + -0xf0;
    } while (lVar3 != 0);
  }
  FUN_1467b1a5e(param_1);
  FUN_1467b1b46(param_1);
  return;
}



// FUNCTION 14274bbb2 FUN_14274bbb2 body=298 status=ok
// SIG undefined FUN_14274bbb2(void)

void FUN_14274bbb2(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = 0xe9;
    lVar4 = 0;
    do {
      if (*(char *)(*param_1 + lVar6) != '\0') {
        if (*param_1 != lVar4) {
          FUN_140bee914(&local_40);
          iVar1 = (int)local_38;
          iVar3 = ((int)local_38 == 0) + 1;
          local_30 = local_40;
          local_40 = 0;
          local_28 = (int)local_38;
          iVar2 = local_38._4_4_;
          local_24 = local_38._4_4_;
          local_38 = 0;
          iVar5 = iVar3 + iVar1;
          if (iVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar3);
          }
          if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar5);
          }
          if (iVar2 < iVar5) {
            FUN_1446f8c06(&local_30);
          }
          FUN_1400020e8(&local_30,&DAT_149e065c6,1);
          FUN_1467bafa4(param_1 + 9,param_1,&local_30);
          if (local_30 != 0) {
            FUN_1400020a8();
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar4 = lVar4 + -0xf0;
      lVar6 = lVar6 + 0xf0;
    } while ((longlong)(int)param_1[1] * -0xf0 - lVar4 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274bcde FUN_14274bcde body=235 status=ok
// SIG undefined FUN_14274bcde(void)

longlong * FUN_14274bcde(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 5) == '\x02') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    FUN_14681a27a(&local_34,puVar4);
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 0x14;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < 0x14) {
      FUN_1447403be(param_2,iVar2);
    }
    lVar3 = *param_2;
    *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2) = uStack_24;
    puVar1 = (undefined4 *)(lVar3 + iVar2);
    *puVar1 = local_34;
    puVar1[1] = uStack_30;
    puVar1[2] = uStack_2c;
    puVar1[3] = uStack_28;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    FUN_14681a10c(&local_34,puVar4);
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 0x10;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < 0x10) {
      FUN_1447403be(param_2,iVar2);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2);
    *puVar1 = CONCAT13((undefined1)uStack_30,local_34._1_3_);
    puVar1[1] = CONCAT13((undefined1)uStack_2c,uStack_30._1_3_);
    puVar1[2] = CONCAT13((undefined1)uStack_28,uStack_2c._1_3_);
    puVar1[3] = CONCAT13((undefined1)uStack_24,uStack_28._1_3_);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274bdca FUN_14274bdca body=1108 status=ok
// SIG undefined FUN_14274bdca(void)

bool FUN_14274bdca(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined2 *puVar9;
  void **ppvVar10;
  longlong lVar11;
  longlong lVar12;
  void **ppvVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined2 *local_188;
  int local_180;
  undefined2 *local_178;
  int local_170;
  undefined4 local_16c;
  void **local_168;
  ulonglong uStack_160;
  undefined4 local_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong local_100;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined8 uStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_168 = (void **)0x0;
  uStack_160 = 0;
  local_178 = (undefined2 *)0x0;
  local_170 = (int)param_1[3];
  lVar11 = (longlong)local_170;
  pvVar4 = (void *)param_1[2];
  if (lVar11 == 0) {
    local_16c = 0;
  }
  else {
    FUN_1446dd670(&local_178,local_170,0);
    memcpy(local_178,pvVar4,lVar11 * 2);
  }
  plVar6 = (longlong *)FUN_140e92164();
  puVar9 = local_178;
  if (local_170 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_168,puVar9,&DAT_149e0229c);
  FUN_1462686ba(&local_188);
  if ((1 < local_180) && (cVar5 = FUN_14626c1be(&local_188,&local_178), cVar5 == '\0')) {
    plVar6 = (longlong *)FUN_140e92164();
    puVar9 = local_188;
    if (local_180 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_168,puVar9,&DAT_149e0229c);
  }
  if ((longlong)(int)uStack_160 != 0) {
    ppvVar13 = local_168 + (longlong)(int)uStack_160 * 2;
    ppvVar10 = local_168;
    do {
      local_150[0] = 6;
      local_b0 = 0;
      local_a8 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = (void *)0x0;
      uStack_130 = (void *)0x0;
      local_148 = 0;
      uStack_140 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_100 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_a4 = 0xffffffff00000080;
      local_9c = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_68 = 1;
      plVar6 = (longlong *)FUN_140e92164();
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(ppvVar10 + 1) != 0) {
        puVar9 = *ppvVar10;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0xe8))(plVar6,puVar9,0);
      if ((plVar6 != (longlong *)0x0) &&
         (lVar11 = (**(code **)(*plVar6 + 0x50))(plVar6), lVar11 < 0x7ffffffe)) {
        plVar7 = (longlong *)FUN_14001cc68(0xe8,0x10);
        puVar9 = &DAT_149dfb77a;
        if (*(int *)(ppvVar10 + 1) != 0) {
          puVar9 = *ppvVar10;
        }
        local_190 = 0;
        local_198 = 0x400;
        FUN_140996eb8(plVar7,plVar6,puVar9,lVar11);
        if (plVar7 != (longlong *)0x0) {
          if (&local_138 != ppvVar10) {
            uVar2 = *(uint *)(ppvVar10 + 1);
            pvVar4 = *ppvVar10;
            uStack_130 = (void *)CONCAT44(uStack_130._4_4_,uVar2);
            if (uVar2 == 0 && uStack_130._4_4_ == 0) {
              uStack_130 = (void *)(ulonglong)uVar2;
            }
            else {
              FUN_1446dd670(&local_138,uVar2);
              if (uVar2 != 0) {
                memcpy(local_138,pvVar4,(longlong)(int)uVar2 * 2);
              }
            }
          }
          FUN_1467b1c7e(local_150,plVar7);
          (**(code **)(*plVar7 + 0x1f8))(plVar7);
          bVar1 = *(byte *)((longlong)plVar7 + 0x29);
          (**(code **)*plVar7)(plVar7,1);
          if ((bVar1 & 6) == 0) {
            if (&local_138 != ppvVar10) {
              if (local_138 != (void *)0x0) {
                FUN_1400020a8();
              }
              local_138 = *ppvVar10;
              *ppvVar10 = (void *)0x0;
              uStack_130 = ppvVar10[1];
              ppvVar10[1] = (void *)0x0;
            }
            iVar3 = (int)param_1[1];
            lVar11 = (longlong)iVar3;
            if (0 < lVar11) {
              puVar8 = (uint *)(*param_1 + 100);
              lVar12 = 0;
              do {
                bVar14 = uStack_f8 < puVar8[-3];
                bVar15 = false;
                if (uStack_f8 == puVar8[-3]) {
                  bVar14 = uStack_f4 < puVar8[-2];
                  bVar15 = uStack_f4 == puVar8[-2];
                  if (!bVar15) goto LAB_14274c0f6;
                  bVar14 = uStack_f0 < puVar8[-1];
                  bVar15 = uStack_f0 == puVar8[-1];
                  if (!bVar15) goto LAB_14274c0f6;
                  bVar14 = (uint)uStack_ec < *puVar8;
                  bVar15 = (uint)uStack_ec == *puVar8;
                  if (!bVar15) goto LAB_14274c0f6;
                  if (*(longlong *)(puVar8 + -5) < local_100) goto LAB_14274c133;
                }
                else {
LAB_14274c0f6:
                  if (!bVar14 && !bVar15) {
LAB_14274c133:
                    FUN_1467b1948(param_1,local_150);
                    goto LAB_14274c140;
                  }
                }
                lVar12 = lVar12 + 1;
                puVar8 = puVar8 + 0x3c;
              } while (lVar11 != lVar12);
            }
            *(uint *)(param_1 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
              FUN_1467bac4a(param_1,iVar3);
            }
            FUN_1467bab0e(lVar11 * 0xf0 + *param_1,local_150);
          }
        }
      }
LAB_14274c140:
      FUN_1467b19ba(local_150);
      ppvVar10 = ppvVar10 + 2;
    } while (ppvVar10 != ppvVar13);
  }
  lVar11 = param_1[1];
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_168,uStack_160 & 0xffffffff);
  if (local_168 != (void **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)lVar11;
}



// FUNCTION 14274c220 FUN_14274c220 body=734 status=ok
// SIG undefined FUN_14274c220(void)

void FUN_14274c220(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [40];
  uint local_80;
  int local_7c;
  ulonglong local_78;
  ulonglong local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1462686ba(&local_58);
  if ((local_50 < 2) || (cVar2 = FUN_140807eae(param_3 + 0x18,&local_58), cVar2 == '\0')) {
    FUN_140bee914(&local_68,param_3 + 0x18);
    cVar2 = FUN_14626c1be(&local_68,param_1 + 0x10);
    if (cVar2 == '\0') {
      puVar9 = local_68;
      if (local_60 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      lVar5 = 0x1d0;
    }
    else {
      uVar3 = *(uint *)(param_3 + 0xa8);
      uVar10 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar11 = 0;
        uVar6 = 0;
      }
      else {
        puVar4 = *(uint **)(param_3 + 0xa0);
        if (*(uint **)(param_3 + 0xa0) == (uint *)0x0) {
          puVar4 = (uint *)(param_3 + 0x90);
        }
        uVar6 = *puVar4;
        if (uVar6 == 0) {
          iVar11 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar11 = uVar3 - 1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar11 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_14274c37b;
            iVar11 = iVar11 + 0x20;
            uVar6 = puVar4[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar17 = 0;
          iVar11 = 0;
        }
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar6 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar6) {
          uVar6 = uVar3;
        }
      }
      if (uVar6 != uVar3) {
        uVar14 = 0xffffffff;
        local_78 = uVar10;
        do {
          lVar5 = (longlong)
                  *(int *)(*(longlong *)(param_3 + 0x80) + 0x10 + (longlong)(int)uVar6 * 0x20);
          if (lVar5 != 0) {
            lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x80) + 8 + (longlong)(int)uVar6 * 0x20);
            lVar12 = 0;
            local_80 = uVar14;
            local_7c = iVar11;
            local_70 = uVar17;
            do {
              puVar9 = &DAT_149dfb77a;
              if (*(int *)(lVar13 + 8 + lVar12) != 0) {
                puVar9 = *(undefined2 **)(lVar13 + lVar12);
              }
              (**(code **)(*param_2 + 0x88))(param_2,puVar9);
              lVar12 = lVar12 + 0x70;
            } while (lVar5 * 0x70 - lVar12 != 0);
            uVar3 = *(uint *)(param_3 + 0xa8);
            uVar10 = local_78;
            uVar17 = local_70;
            iVar11 = local_7c;
            uVar14 = local_80;
          }
          uVar14 = uVar14 & ~(uint)uVar15;
          puVar4 = *(uint **)(param_3 + 0xa0);
          if (*(uint **)(param_3 + 0xa0) == (uint *)0x0) {
            puVar4 = (uint *)(param_3 + 0x90);
          }
          iVar16 = (int)uVar17;
          lVar5 = (longlong)iVar16;
          uVar6 = puVar4[lVar5] & uVar14;
          if (uVar6 == 0) {
            iVar7 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar7 = uVar3 - 1;
            }
            iVar7 = iVar7 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar16) {
              iVar8 = iVar16;
            }
            if (iVar16 < iVar7) {
              lVar13 = 0;
              do {
                uVar6 = puVar4[lVar5 + lVar13 + 1];
                if (uVar6 != 0) {
                  uVar17 = (ulonglong)(iVar16 + (int)lVar13 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_14274c4b7;
                }
                iVar11 = iVar11 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar8 - lVar5 != lVar13);
              uVar14 = 0xffffffff;
              iVar16 = iVar8;
            }
            uVar17 = (ulonglong)(iVar16 + 1);
            uVar6 = uVar3;
          }
          else {
LAB_14274c4b7:
            uVar15 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar15 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar6 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar6) {
              uVar6 = uVar3;
            }
          }
        } while (uVar6 != (uint)uVar10);
      }
LAB_14274c37b:
      if (*(int *)(param_3 + 0x20) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(param_3 + 0x18);
      }
      lVar5 = 0x88;
    }
    (**(code **)(*param_2 + lVar5))(param_2,puVar9);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274c500 FUN_14274c500 body=921 status=ok
// SIG undefined FUN_14274c500(void)

ulonglong FUN_14274c500(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  undefined7 uVar14;
  longlong lVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_98 [36];
  uint local_74;
  ulonglong local_70;
  longlong local_68 [2];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0xe8) == '\x01') &&
     (*(bool *)(param_1 + 0xe9) = 1 < *(int *)(param_1 + 0x10), 1 < *(int *)(param_1 + 0x10))) {
    uVar18 = *(uint *)(param_1 + 0x68);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    bVar21 = uVar18 == (*(uint *)(DAT_14c868708 + 4) & 0x7fffffff);
    *(bool *)(param_1 + 0xe9) = bVar21;
    if (bVar21) {
      FUN_140bee914(local_68,param_1 + 0x18);
      FUN_1468180c4(&local_58);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50 == *(int *)(param_1 + 0x10)) {
        if (1 < local_50) {
          lVar15 = 0;
          while( true ) {
            uVar16 = *(ushort *)(local_58 + lVar15);
            uVar10 = (ulonglong)uVar16;
            uVar17 = *(ushort *)(*(longlong *)(param_1 + 8) + lVar15);
            if (uVar16 != uVar17) {
              if ((uVar17 | uVar16) < 0x80) {
                uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                uVar20 = (ulonglong)uVar17;
                uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar20]) goto LAB_14274c62f;
              }
              bVar21 = uVar16 == uVar17;
              goto LAB_14274c64b;
            }
            if (uVar16 == 0) break;
LAB_14274c62f:
            lVar15 = lVar15 + 2;
          }
        }
        *(undefined1 *)(param_1 + 0xe9) = 1;
LAB_14274c65b:
        iVar2 = *(int *)(param_1 + 0xa8);
        uVar14 = (undefined7)((ulonglong)local_68 >> 8);
        if (iVar2 == 0) {
          uVar19 = 1;
          uVar20 = 0;
          iVar12 = 0;
          iVar6 = 0;
        }
        else {
          puVar5 = *(uint **)(param_1 + 0xa0);
          if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
            puVar5 = (uint *)(param_1 + 0x90);
          }
          uVar18 = *puVar5;
          if (uVar18 == 0) {
            iVar6 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar6 = iVar2 + -1;
            }
            uVar20 = 0;
            uVar10 = (ulonglong)(uint)(iVar6 >> 5);
            if (iVar6 >> 5 < 1) {
              uVar10 = uVar20;
            }
            iVar12 = 0;
            do {
              if (uVar10 == uVar20) {
                uVar10 = CONCAT71(uVar14,1);
                goto LAB_14274c6f8;
              }
              iVar12 = iVar12 + 0x20;
              uVar18 = puVar5[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar18 == 0);
          }
          else {
            uVar20 = 0;
            iVar12 = 0;
          }
          uVar19 = (ulonglong)(-uVar18 & uVar18);
          uVar10 = uVar19 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar6 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar6) {
            iVar6 = iVar2;
          }
        }
        uVar10 = CONCAT71(uVar14,1);
        if (iVar6 != iVar2) {
          uVar18 = 0xffffffff;
          uVar10 = CONCAT71(uVar14,1);
          iVar3 = iVar2;
          do {
            lVar15 = (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x80) + 0x10 + (longlong)iVar6 * 0x20);
            if (lVar15 != 0) {
              lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)iVar6 * 0x20);
              lVar15 = lVar15 * 0x70;
              local_74 = uVar18;
              local_70 = uVar20;
              do {
                uVar4 = FUN_1467b2b8e(lVar11);
                bVar13 = (byte)uVar4 & *(byte *)(param_1 + 0xe9);
                uVar10 = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),bVar13);
                *(byte *)(param_1 + 0xe9) = bVar13;
                lVar11 = lVar11 + 0x70;
                lVar15 = lVar15 + -0x70;
              } while (lVar15 != 0);
              iVar3 = *(int *)(param_1 + 0xa8);
              uVar20 = local_70;
              uVar18 = local_74;
            }
            uVar18 = uVar18 & ~(uint)uVar19;
            puVar5 = *(uint **)(param_1 + 0xa0);
            if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
              puVar5 = (uint *)(param_1 + 0x90);
            }
            iVar6 = (int)uVar20;
            lVar15 = (longlong)iVar6;
            uVar7 = puVar5[lVar15] & uVar18;
            if (uVar7 == 0) {
              iVar8 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar8 = iVar3 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar9 = iVar8;
              if (iVar8 < iVar6) {
                iVar9 = iVar6;
              }
              if (iVar6 < iVar8) {
                lVar11 = 0;
                do {
                  uVar7 = puVar5[lVar15 + lVar11 + 1];
                  if (uVar7 != 0) {
                    uVar20 = (ulonglong)(iVar6 + (int)lVar11 + 1);
                    uVar18 = 0xffffffff;
                    goto LAB_14274c7fd;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar9 - lVar15 != lVar11);
                uVar18 = 0xffffffff;
                iVar6 = iVar9;
              }
              uVar20 = (ulonglong)(iVar6 + 1);
              iVar6 = iVar3;
            }
            else {
LAB_14274c7fd:
              uVar19 = (ulonglong)(-uVar7 & uVar7);
              uVar1 = uVar19 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar6 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar6) {
                iVar6 = iVar3;
              }
            }
          } while (iVar6 != iVar2);
        }
      }
      else {
        bVar21 = *(int *)(param_1 + 0x10) + local_50 == 1;
LAB_14274c64b:
        *(bool *)(param_1 + 0xe9) = bVar21;
        if (bVar21) goto LAB_14274c65b;
        uVar10 = 0;
      }
LAB_14274c6f8:
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14274c57c;
    }
  }
  uVar10 = 0;
LAB_14274c57c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffff01;
}



// FUNCTION 14274c8bc FUN_14274c8bc body=49 status=ok
// SIG undefined FUN_14274c8bc(void)

void FUN_14274c8bc(void)

{
  FUN_144760e21(DAT_14c83bc60,DAT_14c83bc68);
  if (DAT_14c83bc60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274c8ed FUN_14274c8ed body=49 status=ok
// SIG undefined FUN_14274c8ed(void)

void FUN_14274c8ed(void)

{
  FUN_144760e21(DAT_14c83bc78,DAT_14c83bc80);
  if (DAT_14c83bc78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274c91e FUN_14274c91e body=49 status=ok
// SIG undefined FUN_14274c91e(void)

void FUN_14274c91e(void)

{
  FUN_144760e21(DAT_14c83bc90,DAT_14c83bc98);
  if (DAT_14c83bc90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274c94f FUN_14274c94f body=49 status=ok
// SIG undefined FUN_14274c94f(void)

void FUN_14274c94f(void)

{
  FUN_144760e21(DAT_14c83bca8,DAT_14c83bcb0);
  if (DAT_14c83bca8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274c980 FUN_14274c980 body=49 status=ok
// SIG undefined FUN_14274c980(void)

void FUN_14274c980(void)

{
  FUN_144760e21(DAT_14c83bcc0,DAT_14c83bcc8);
  if (DAT_14c83bcc0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274c9bf FUN_14274c9bf body=49 status=ok
// SIG undefined FUN_14274c9bf(void)

void FUN_14274c9bf(void)

{
  FUN_1447a1747(DAT_14c83e148,DAT_14c83e150);
  if (DAT_14c83e148 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274c9f0 FUN_14274c9f0 body=47 status=ok
// SIG undefined FUN_14274c9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274c9f0(void)

{
  _DAT_14c83e1a0 = 0;
  if (DAT_14c83e198 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14c83e158);
  return;
}



// FUNCTION 14274ca1f FUN_14274ca1f body=47 status=ok
// SIG undefined FUN_14274ca1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274ca1f(void)

{
  _DAT_14c83e1f0 = 0;
  if (DAT_14c83e1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14c83e1a8);
  return;
}



// FUNCTION 14274ca4e FUN_14274ca4e body=39 status=ok
// SIG undefined FUN_14274ca4e(void)

void FUN_14274ca4e(void)

{
  if (DAT_14c83e268 == '\x01') {
    FUN_1467b3520(&DAT_14c83e1f8);
    DAT_14c83e268 = '\0';
  }
  return;
}



// FUNCTION 14274ca75 FUN_14274ca75 body=49 status=ok
// SIG undefined FUN_14274ca75(void)

void FUN_14274ca75(void)

{
  FUN_1447a1747(DAT_14c83e270,DAT_14c83e278);
  if (DAT_14c83e270 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14274cab8 FUN_14274cab8 body=286 status=ok
// SIG undefined FUN_14274cab8(void)

void FUN_14274cab8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (*(uint *)(param_2 + 1) < 2) {
    FUN_140b7fa98(&DAT_14c83e1a8,param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
    uVar5 = 0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar1 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_1;
      }
      lVar7 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar7]) -
                0x20;
        uVar8 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar8 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar4 != (int)lVar7);
    }
    puVar3 = (undefined8 *)FUN_140b80422(&DAT_14c83e1a8,uVar5,param_1);
    if (puVar3 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)puVar3 + 0xc) == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  FUN_140b9d292(&DAT_14c83bca8,param_1,param_2);
  return;
}



// FUNCTION 14274cbd6 FUN_14274cbd6 body=226 status=ok
// SIG undefined FUN_14274cbd6(void)

undefined8 FUN_14274cbd6(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  int local_60;
  longlong local_58 [2];
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1460119fe(local_58);
  FUN_144a06ecc(&local_68,local_58);
  local_48 = L"";
  local_38 = L"";
  if (local_60 != 0) {
    local_38 = local_68;
  }
  if (*(int *)(param_2 + 1) != 0) {
    local_48 = (wchar_t *)*param_2;
  }
  uVar2 = 0;
  local_40 = 0;
  if (local_48 != (wchar_t *)0x0) {
    sVar1 = wcslen(local_48);
    local_40 = (int)sVar1;
  }
  if (local_38 != (wchar_t *)0x0) {
    sVar1 = wcslen(local_38);
    uVar2 = (int)sVar1;
  }
  local_30 = uVar2;
  FUN_140bee87a(param_1,&local_48,2);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274ccba FUN_14274ccba body=645 status=ok
// SIG undefined FUN_14274ccba(void)

void FUN_14274ccba(undefined8 param_1,wchar_t *param_2)

{
  char cVar1;
  longlong *plVar2;
  size_t sVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14577b3ae();
  plVar2 = (longlong *)FUN_14054d1d4();
  cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,&DAT_14c83dab8);
  if (cVar1 != '\0') {
    FUN_140056680(&local_68,&DAT_14c83dab8);
    FUN_14093d9c4(&local_78,&local_68);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    pwVar5 = local_78;
    if (local_70 == 0) {
      pwVar5 = L"";
    }
    iVar6 = 0;
    local_60 = 0;
    local_68 = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_2);
      local_60 = (int)sVar3;
    }
    local_58 = pwVar5;
    if (pwVar5 != (wchar_t *)0x0) {
      sVar3 = wcslen(pwVar5);
      iVar6 = (int)sVar3;
    }
    local_50 = iVar6;
    FUN_140bee87a(&local_88,&local_68,2);
    plVar2 = (longlong *)FUN_14054d1d4();
    pwVar5 = local_88;
    if (local_80 == 0) {
      pwVar5 = L"";
    }
    local_98 = 0;
    local_a0 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a8 = 0;
    (**(code **)(*plVar2 + 0x38))(plVar2,pwVar5,&DAT_14c83dab8,1);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)DAT_14c83e278 != 0) {
    lVar8 = (longlong)DAT_14c83e278 << 4;
    puVar7 = DAT_14c83e270;
    do {
      plVar2 = (longlong *)FUN_14054d1d4();
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(puVar7 + 1) != 0) {
        puVar4 = (undefined2 *)*puVar7;
      }
      cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,puVar4);
      if (cVar1 != '\0') {
        FUN_144a06ecc(&local_88,puVar7);
        if (param_2 == (wchar_t *)0x0) {
          local_60 = 0;
          local_68 = param_2;
        }
        else {
          local_68 = param_2;
          sVar3 = wcslen(param_2);
          local_60 = (int)sVar3;
        }
        local_58 = local_88;
        local_50 = local_80 + -1;
        if (local_80 == 0) {
          local_50 = 0;
        }
        FUN_140bee87a(&local_78,&local_68,2);
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        plVar2 = (longlong *)FUN_14054d1d4();
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar7;
        }
        pwVar5 = L"";
        if (local_70 != 0) {
          pwVar5 = local_78;
        }
        local_a8 = local_a8 & 0xffffffffffffff00;
        local_b0 = 0;
        local_b8 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,pwVar5,puVar4,1);
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar7 = puVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274cf40 FUN_14274cf40 body=122 status=ok
// SIG undefined FUN_14274cf40(void)

void FUN_14274cf40(void)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_141105c00();
  EnterCriticalSection(lpCriticalSection);
  puVar1 = &DAT_14c83e2c0;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar2;
  } while (puVar1 != (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x3b0));
  *puVar2 = *(undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x3b0
             );
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274cfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 14274cfba FUN_14274cfba body=59 status=ok
// SIG undefined FUN_14274cfba(void)

void FUN_14274cfba(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c83e2b0;
  if (DAT_14c83e2b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c83e2b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014274cfea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14274cff5 FUN_14274cff5 body=78 status=ok
// SIG undefined FUN_14274cff5(void)

void FUN_14274cff5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x450)
  ;
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
                    /* WARNING: Could not recover jumptable at 0x00014274d038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14274d043 FUN_14274d043 body=69 status=ok
// SIG undefined FUN_14274d043(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274d043(void)

{
  _DAT_14c83e2c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014274d085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83e2d0,1);
  return;
}



// FUNCTION 14274d088 FUN_14274d088 body=84 status=ok
// SIG undefined FUN_14274d088(void)

void FUN_14274d088(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = 0;
  local_28 = &PTR_FUN_149e05140;
  (**(code **)(*param_1 + 0x130))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274d0de OutputDebugStringW body=7 status=ok
// SIG void OutputDebugStringW(LPCWSTR lpOutputString)

void __stdcall OutputDebugStringW(LPCWSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x00014274d0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringW(lpOutputString);
  return;
}



// FUNCTION 14274d0f4 FUN_14274d0f4 body=417 status=ok
// SIG undefined FUN_14274d0f4(void)

ulonglong FUN_14274d0f4(longlong param_1,uint param_2,uint param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 extraout_var;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  wchar_t *lpOutputString;
  uint uVar7;
  ulonglong *puVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar8;
  
  if (0x10 < param_3) {
    OutputDebugStringW(L"Alignment > 16 is not supported\n");
  }
  DVar1 = *(DWORD *)(param_1 + 0x30);
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1468308d8();
  }
  lVar6 = 0;
  puVar4 = (uint *)CONCAT44(extraout_var,DVar2);
  do {
    bVar10 = param_2 <= *(uint *)((longlong)&DAT_14c83e300 + lVar6);
    puVar5 = (uint *)((longlong)&DAT_14c83e2f0 + lVar6);
    if (!bVar10) {
      puVar5 = puVar4;
    }
    bVar11 = *(uint *)((longlong)&DAT_14c83e320 + lVar6) <=
             *(uint *)((longlong)&DAT_14c83e2f0 + lVar6);
    if (bVar11) {
      puVar5 = puVar4;
    }
    if (!bVar11 && bVar10) {
      if (puVar5 != (uint *)0x0) {
        if (puVar5[0xc] == 0) goto LAB_14274d21f;
        uVar3 = 0;
        goto LAB_14274d18e;
      }
      break;
    }
    lVar6 = lVar6 + 0x38;
    puVar4 = puVar5;
  } while (lVar6 != 0x310);
  uVar7 = *(int *)(param_1 + 0x40) + 0xfU & 0xfffffff0;
  uVar8 = (ulonglong)uVar7;
  *(uint *)(param_1 + 0x40) = uVar7;
  uVar3 = param_2 + uVar7 + 0x10;
  if (uVar3 < 0x200001) {
    *(uint *)(param_1 + 0x40) = uVar3;
    lVar6 = *(longlong *)(param_1 + 0x38);
    *(ulonglong *)(lVar6 + uVar8) = (ulonglong)param_2;
    *(ulonglong *)(lVar6 + 8 + uVar8) = *(longlong *)(param_1 + 0x38) + 0x10 + uVar8;
    FUN_145d03cb4(L"Malloc Size=%d LargeMemoryPoolOffset=%d \n",param_2,
                  *(undefined4 *)(param_1 + 0x40));
    return *(ulonglong *)(lVar6 + 8 + uVar8);
  }
  FUN_145d03cb4(L"MallocCrash run out of memory allocating %u bytes, free %u bytes\n",param_2,
                0x200000 - uVar7);
  lpOutputString = L"Please increase LARGE_MEMORYPOOL_SIZE, exiting...\n";
  goto LAB_14274d234;
  while (uVar3 = uVar3 + 1, puVar5[0xc] != uVar3) {
LAB_14274d18e:
    if (*(longlong *)(*(longlong *)(puVar5 + 6) + (longlong)(int)uVar3 * 0x10) == 0) {
      puVar9 = (ulonglong *)(*(longlong *)(puVar5 + 6) + (longlong)(int)uVar3 * 0x10);
      uVar7 = puVar5[1];
      if (puVar5[1] < uVar3) {
        uVar7 = uVar3;
      }
      puVar5[1] = uVar7;
      if (puVar9 != (ulonglong *)0x0) {
        uVar3 = puVar5[2];
        uVar7 = *puVar5 + 1;
        *puVar5 = uVar7;
        puVar5[3] = puVar5[3] + 1;
        if (uVar7 <= uVar3) {
          uVar7 = uVar3;
        }
        puVar5[2] = uVar7;
        *puVar9 = (ulonglong)param_2;
        memset((void *)puVar9[1],(int)CONCAT71((uint7)(uint3)(uVar3 >> 8),0xfe),(ulonglong)param_2);
        return puVar9[1];
      }
      break;
    }
  }
LAB_14274d21f:
  FUN_145d03cb4(L"AllocateFromPool run out of memory allocating %u bytes for %u allocations\n",
                param_2);
  lpOutputString = L"Please increase MaxNumAllocations for that pool, exiting...\n";
LAB_14274d234:
  OutputDebugStringW(lpOutputString);
  FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  return 0;
}



// FUNCTION 14274d296 FUN_14274d296 body=159 status=ok
// SIG undefined FUN_14274d296(void)

undefined8 FUN_14274d296(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_2 < *(ulonglong *)(param_1 + 0x48)) ||
     (*(ulonglong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x54) <= param_2)) {
    if (*(ulonglong *)(param_1 + 0x38) + 0x200000 <= param_2 ||
        param_2 < *(ulonglong *)(param_1 + 0x38)) {
      return 0;
    }
    puVar3 = (undefined8 *)(param_2 - 0x10);
  }
  else {
    iVar6 = 0;
    uVar5 = 0xe;
    do {
      uVar1 = (uVar5 >> 1) + iVar6;
      if (*(ulonglong *)(&DAT_14c83e318 + (ulonglong)uVar1 * 0x38) <= param_2) {
        iVar6 = uVar1 + (uVar5 & 1);
      }
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar2);
    lVar4 = (longlong)iVar6 * 0x38;
    puVar3 = (undefined8 *)
             ((longlong)
              (int)((param_2 - *(longlong *)(&DAT_14c83e2e0 + lVar4)) /
                   (ulonglong)*(uint *)(&DAT_14c83e2c8 + lVar4)) * 0x10 +
             (&DAT_14c83e2d0)[(longlong)iVar6 * 7]);
  }
  return *puVar3;
}



// FUNCTION 14274d336 FUN_14274d336 body=230 status=ok
// SIG undefined FUN_14274d336(void)

void FUN_14274d336(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  DWORD DVar2;
  longlong lVar3;
  bool bVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  
  DVar2 = *(DWORD *)(param_1 + 0x30);
  DVar5 = GetCurrentThreadId();
  if (DVar2 == DVar5) {
    if ((*(ulonglong *)(param_1 + 0x48) <= param_2) &&
       (param_2 < *(ulonglong *)(param_1 + 0x48) + (ulonglong)*(uint *)(param_1 + 0x54))) {
      iVar10 = 0;
      uVar8 = 0xe;
      do {
        uVar1 = (uVar8 >> 1) + iVar10;
        if (*(ulonglong *)(&DAT_14c83e318 + (ulonglong)uVar1 * 0x38) <= param_2) {
          iVar10 = uVar1 + (uVar8 & 1);
        }
        bVar4 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar4);
      lVar6 = (longlong)iVar10;
      lVar7 = lVar6 * 0x38;
      if (lVar7 != -0x14c83e2b8) {
        uVar11 = (ulonglong)*(uint *)(&DAT_14c83e2c8 + lVar7);
        uVar8 = (uint)((longlong)(param_2 - *(longlong *)(&DAT_14c83e2e0 + lVar7)) /
                      (longlong)uVar11);
        if (((int)uVar8 < 0) || ((int)(&DAT_14c83e2e8)[lVar6 * 0xe] <= (int)uVar8)) {
          FUN_145d03cb4(L"Failed to free PoolSize=%u, PooledPtr=0x%016llx \n",uVar11,param_2);
        }
        else {
          lVar3 = (&DAT_14c83e2d0)[lVar6 * 7];
          lVar9 = (ulonglong)(uVar8 & 0x7fffffff) * 0x10;
          memset(*(void **)(lVar3 + 8 + lVar9),
                 (int)CONCAT71((int7)((ulonglong)
                                      ((longlong)(param_2 - *(longlong *)(&DAT_14c83e2e0 + lVar7)) %
                                      (longlong)uVar11) >> 8),0xcd),*(size_t *)(lVar3 + lVar9));
          *(undefined8 *)(lVar3 + lVar9) = 0;
          (&DAT_14c83e2b8)[lVar6 * 0xe] = (&DAT_14c83e2b8)[lVar6 * 0xe] + -1;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1468308d8();
}



// FUNCTION 14274d41e FUN_14274d41e body=195 status=ok
// SIG undefined FUN_14274d41e(void)

void FUN_14274d41e(undefined8 *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = *param_2;
  *(int *)(param_1 + 2) = iVar3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = param_2[1];
  *(int *)(param_1 + 6) = iVar1;
  uVar5 = *(uint *)(param_3 + 0x60);
  uVar6 = iVar1 * 0x10 + uVar5;
  if (*(uint *)(param_3 + 100) < uVar6) {
    lVar8 = 0;
    iVar7 = iVar1;
  }
  else {
    *(uint *)(param_3 + 0x60) = uVar6;
    lVar8 = (ulonglong)uVar5 + *(longlong *)(param_3 + 0x58);
    iVar3 = *(int *)(param_1 + 2);
    iVar7 = *(int *)(param_1 + 6);
  }
  param_1[3] = lVar8;
  *(int *)(param_1 + 4) = iVar1;
  uVar5 = *(uint *)(param_3 + 0x50);
  uVar4 = iVar3 * iVar7 + uVar5;
  uVar6 = 0;
  if (*(uint *)(param_3 + 0x54) < uVar4) {
    lVar8 = 0;
  }
  else {
    *(uint *)(param_3 + 0x50) = uVar4;
    lVar8 = (ulonglong)uVar5 + *(longlong *)(param_3 + 0x48);
    iVar7 = *(int *)(param_1 + 6);
  }
  param_1[5] = lVar8;
  if (iVar7 != 0) {
    uVar5 = 0;
    do {
      lVar8 = param_1[3];
      iVar1 = *(int *)(param_1 + 2);
      lVar2 = param_1[5];
      *(undefined8 *)(lVar8 + (longlong)(int)uVar5 * 0x10) = 0;
      *(ulonglong *)(lVar8 + 8 + (longlong)(int)uVar5 * 0x10) = (ulonglong)(iVar1 * uVar5) + lVar2;
      uVar5 = uVar5 + 1;
      uVar6 = *(uint *)(param_1 + 6);
    } while (uVar5 < uVar6);
  }
  *(uint *)((longlong)param_1 + 0x34) = (*(int *)(param_1 + 2) + 0x10) * uVar6;
  return;
}



// FUNCTION 14274d4e1 FUN_14274d4e1 body=69 status=ok
// SIG undefined FUN_14274d4e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274d4e1(void)

{
  _DAT_14c83e680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014274d523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83e688,1);
  return;
}



// FUNCTION 14274d526 FUN_14274d526 body=69 status=ok
// SIG undefined FUN_14274d526(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274d526(void)

{
  _DAT_14c83e690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014274d568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83e698,1);
  return;
}



// FUNCTION 14274d56c FUN_14274d56c body=561 status=ok
// SIG undefined FUN_14274d56c(void)

void FUN_14274d56c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_2f8 [32];
  double local_2d8;
  undefined4 local_2d0;
  undefined1 *local_2c8;
  undefined1 local_2c0 [136];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  DAT_14c83e280 = *(undefined8 *)*param_1;
  DAT_14c83e288 = *(undefined4 *)param_1[1];
  DAT_14c83f1dc = 1;
  FUN_14682f6b8(local_238,0x100,0);
  FUN_1405d5a96(local_2c0);
  if (DAT_14c83e6a8 != (LPVOID)0x0) {
    VirtualFree(DAT_14c83e6a8,0,0x8000);
  }
  if (DAT_14c872be8 != 0) {
    (**(code **)(*DAT_14c872d28 + 0xb0))();
  }
  plVar6 = (longlong *)FUN_14680e8b4();
  iVar5 = *(int *)((longlong)plVar6 + 0x14);
  *(int *)((longlong)plVar6 + 0x14) = iVar5 + 1;
  uVar7 = (ulonglong)(int)plVar6[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)plVar6 + 0x14) = iVar5;
  }
  else {
    bVar9 = false;
    do {
      lVar11 = uVar7 * 0x10 + -8;
      uVar12 = uVar7;
      while (((*(int *)(*plVar6 + lVar11) != 0 &&
              (plVar1 = *(longlong **)(*plVar6 + -8 + lVar11), plVar1 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar1 + 0x60))(), cVar4 != '\0'))) {
        lVar11 = lVar11 + -0x10;
        bVar3 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar3) {
          iVar5 = *(int *)((longlong)plVar6 + 0x14) + -1;
          *(int *)((longlong)plVar6 + 0x14) = iVar5;
          if (bVar9) goto LAB_14274d67c;
          goto LAB_14274d6e8;
        }
      }
      uVar7 = uVar12 - 1;
      bVar9 = true;
    } while (1 < uVar12);
    iVar5 = *(int *)((longlong)plVar6 + 0x14) + -1;
    *(int *)((longlong)plVar6 + 0x14) = iVar5;
LAB_14274d67c:
    if (iVar5 < 1) {
      iVar5 = (int)plVar6[1];
      iVar8 = iVar5;
      if (0 < iVar5) {
        iVar10 = 0;
        do {
          if (((*(int *)(*plVar6 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(*plVar6 + (longlong)iVar10 * 0x10), plVar1 == (longlong *)0x0
              )) || (cVar4 = (**(code **)(*plVar1 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar6,iVar10);
            FUN_14005b248(plVar6);
          }
          else {
            iVar10 = iVar10 + 1;
          }
          iVar8 = (int)plVar6[1];
        } while (iVar10 < iVar8);
      }
      iVar10 = 2;
      if (2 < iVar8 * 2) {
        iVar10 = iVar8 * 2;
      }
      *(int *)(plVar6 + 2) = iVar10;
      if ((iVar10 < iVar5) && (*(int *)((longlong)plVar6 + 0xc) != iVar8)) {
        FUN_14045812c(plVar6);
      }
    }
  }
LAB_14274d6e8:
  uVar2 = *(undefined8 *)*param_1;
  auVar13._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar13._0_8_ = uVar2;
  auVar13._12_4_ = 0x45300000;
  local_2d0 = *(undefined4 *)param_1[1];
  local_2d8 = (((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
              (auVar13._8_8_ - 1.9342813113834067e+25)) * 9.5367431640625e-07;
  local_2c8 = local_238;
  FUN_140033559(".\\Runtime/Core/Private/GenericPlatform/GenericPlatformMemory.cpp",0x107,
                L"Ran out of memory allocating %llu (%.1f MiB) bytes with alignment %u. Last error msg: %s."
               );
  if ((local_38 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274d7da FUN_14274d7da body=578 status=ok
// SIG undefined FUN_14274d7da(void)

void FUN_14274d7da(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  DAT_14c83e780 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"NODEFAULTLOG");
  if (cVar2 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    lVar3 = FUN_14603a7de();
    if (lVar3 != 0) {
      FUN_14154aaea(DAT_14c872ef0,lVar3);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_146268f08(&local_58);
  lVar3 = local_58;
  lVar5 = (longlong)(int)uStack_50;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar4);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      if (lVar1 != 0) {
        FUN_14154aaea(DAT_14c872ef0,lVar1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 != lVar4);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14274da56 FUN_14274da56 body=29 status=ok
// SIG undefined FUN_14274da56(void)

undefined8 FUN_14274da56(undefined8 param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  return param_1;
}



// FUNCTION 14274da74 FUN_14274da74 body=523 status=ok
// SIG undefined FUN_14274da74(void)

void FUN_14274da74(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  float local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    local_34 = 0x1e;
  }
  else {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)*param_2;
    }
    FUN_141369f9a(puVar5,L"delay=",&local_34);
  }
  FUN_1401cb356();
  local_48 = *(undefined8 *)(param_1 + 0x30);
  local_40 = *(longlong *)(param_1 + 0x38);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_48);
  FUN_1401cb356();
  local_58 = *(undefined8 *)(param_1 + 0x40);
  local_50 = *(longlong *)(param_1 + 0x48);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_58);
  plVar2 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_34 != 0) {
    iVar4 = 300;
    if (local_34 < 300) {
      iVar4 = local_34;
    }
    local_34 = 10;
    if (10 < iVar4) {
      local_34 = iVar4;
    }
    uVar3 = FUN_1401cb356();
    local_78 = 0.0;
    FUN_1405f67fc(uVar3,&local_68,param_1 + 0x10,L"FCPUTimeDump_OnAddCPUTime");
    *(undefined8 *)(param_1 + 0x30) = local_68;
    local_68 = 0;
    plVar2 = *(longlong **)(param_1 + 0x38);
    *(longlong **)(param_1 + 0x38) = local_60;
    local_60 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
    }
    uVar3 = FUN_1401cb356();
    local_78 = (float)local_34;
    FUN_1405f67fc(uVar3,&local_68,param_1 + 0x20,L"FCPUTimeDump_OnCPUTimeDump");
    *(undefined8 *)(param_1 + 0x40) = local_68;
    local_68 = 0;
    plVar2 = *(longlong **)(param_1 + 0x48);
    *(longlong **)(param_1 + 0x48) = local_60;
    local_60 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274dc80 FUN_14274dc80 body=69 status=ok
// SIG undefined FUN_14274dc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274dc80(void)

{
  _DAT_14c83f100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014274dcc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c83f108,1);
  return;
}



// FUNCTION 14274dcc6 FUN_14274dcc6 body=117 status=ok
// SIG undefined FUN_14274dcc6(void)

void FUN_14274dcc6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar1);
    if (cVar3 != '\0') {
      LOCK();
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
      UNLOCK();
      if (*(longlong **)(lVar1 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x10))();
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      plVar2 = *(longlong **)(param_1 + 0x58);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_14009bf40(param_1);
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
  }
  return;
}



// FUNCTION 14274dd70 FUN_14274dd70 body=171 status=ok
// SIG undefined FUN_14274dd70(void)

void FUN_14274dd70(ulonglong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)(*param_1 & 0xffffffffffff0000);
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
          __tlregdtor(&LAB_14274dd49);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014274dde3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14274de1c FUN_14274de1c body=367 status=ok
// SIG undefined FUN_14274de1c(void)

undefined8 * FUN_14274de1c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_149e06220;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_14274ded8;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_14274dd49);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_1467aa772(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_14274ded8:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 14274df8c FUN_14274df8c body=274 status=ok
// SIG undefined FUN_14274df8c(void)

void FUN_14274df8c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *_Memory;
  int *piVar5;
  
  plVar2 = (longlong *)*param_2;
  puVar4 = (undefined8 *)*plVar2;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)((longlong)plVar2 + 0xc) == '\x01') {
      FUN_1448eed04(plVar2,(int)plVar2[1],1);
      puVar4 = (undefined8 *)*plVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_14274dfac;
    }
    LOCK();
    piVar5 = (int *)(puVar4 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      if (*(code **)*puVar4 == FUN_140200994) {
        FUN_140200994(puVar4,1);
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
LAB_14274dfac:
  if (plVar2 != (longlong *)0x0) {
    piVar5 = (int *)((ulonglong)plVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274dd49);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014274e017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 14274e0a2 FUN_14274e0a2 body=50 status=ok
// SIG undefined FUN_14274e0a2(void)

bool FUN_14274e0a2(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x28))();
  if (lVar2 == -1) {
    bVar1 = false;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    bVar1 = lVar3 <= lVar2;
  }
  return bVar1;
}



// FUNCTION 14274e0d8 FUN_14274e0d8 body=95 status=ok
// SIG undefined FUN_14274e0d8(void)

void FUN_14274e0d8(longlong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 + 7;
  uVar2 = param_3 + 0xe;
  if (-1 < (longlong)uVar3) {
    uVar2 = uVar3;
  }
  (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)uVar2 >> 3);
  if (((param_3 & 7) != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    if (-1 < (longlong)param_3) {
      uVar3 = param_3;
    }
    pbVar1 = (byte *)(param_2 + ((longlong)uVar3 >> 3));
    *pbVar1 = *pbVar1 & ~(-1 << ((byte)param_3 & 7));
  }
  return;
}



// FUNCTION 14274e142 FUN_14274e142 body=122 status=ok
// SIG undefined FUN_14274e142(void)

void * FUN_14274e142(longlong param_1,void *param_2,longlong param_3,size_t param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  if ((((lVar3 <= param_3) &&
       ((longlong)(param_4 + param_3) <= *(longlong *)(param_1 + 0x80) + lVar3)) &&
      (*(char *)(param_1 + 0x51) == '\x01')) && (lVar1 = *(longlong *)(param_1 + 8), lVar1 != 0)) {
    if (param_2 == (void *)0x0) {
      param_2 = (void *)FUN_14001cc68(param_4,0);
      lVar1 = *(longlong *)(param_1 + 8);
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    pvVar2 = memcpy(param_2,(void *)((lVar1 + param_3) - lVar3),param_4);
    return pvVar2;
  }
  return (void *)0x0;
}



// FUNCTION 14274e1bc FUN_14274e1bc body=292 status=ok
// SIG undefined FUN_14274e1bc(void)

longlong * FUN_14274e1bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274e2e2 FUN_14274e2e2 body=46 status=ok
// SIG undefined FUN_14274e2e2(void)

void FUN_14274e2e2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x30))();
  LOCK();
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  UNLOCK();
  if ((longlong *)param_1[3] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274e305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14274e310 FUN_14274e310 body=59 status=ok
// SIG undefined FUN_14274e310(void)

void FUN_14274e310(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  LOCK();
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  UNLOCK();
  if ((longlong *)param_1[3] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274e340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14274e350 FUN_14274e350 body=3 status=ok
// SIG undefined FUN_14274e350(void)

undefined8 FUN_14274e350(void)

{
  return 0;
}



// FUNCTION 14274e354 FUN_14274e354 body=78 status=ok
// SIG undefined FUN_14274e354(void)

void FUN_14274e354(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_9 = param_3;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),&local_18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274e3a4 FUN_14274e3a4 body=29 status=ok
// SIG undefined FUN_14274e3a4(void)

undefined8 FUN_14274e3a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274e3c2 FUN_14274e3c2 body=77 status=ok
// SIG undefined FUN_14274e3c2(void)

undefined8 FUN_14274e3c2(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1467b706a(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if ((*(byte *)(param_3 + 0x20) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014274e402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                        (*(longlong **)(param_1 + 8),param_2,param_1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14274e410 FUN_14274e410 body=29 status=ok
// SIG undefined FUN_14274e410(void)

undefined8 FUN_14274e410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274e42e FUN_14274e42e body=29 status=ok
// SIG undefined FUN_14274e42e(void)

undefined8 FUN_14274e42e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274e44c FUN_14274e44c body=337 status=ok
// SIG undefined FUN_14274e44c(void)

ulonglong FUN_14274e44c(ulonglong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_38);
  local_58 = 1;
  FUN_140807d8e(&local_38,&local_48,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20))
  ;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = local_48;
  local_30 = local_40;
  local_2c = local_3c;
  if (local_40 == 0) {
    local_48 = &DAT_149dfb77a;
  }
  lVar2 = **(longlong **)(param_1 + 0x10);
  if (param_3 == '\0') {
    cVar3 = (**(code **)(lVar2 + 0x78))(*(longlong **)(param_1 + 0x10),local_48);
    if ((cVar3 != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
      puVar4 = local_38;
      if (local_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))(*(longlong **)(param_1 + 0x10),puVar4);
    }
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar4 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    local_58 = local_58 & 0xffffff00;
    param_1 = 0;
    cVar3 = (**(code **)(*(longlong *)*puVar1 + 0x1e0))((longlong *)*puVar1,puVar4,param_2,0);
    if (cVar3 == '\0') goto LAB_14274e56d;
  }
  else {
    cVar3 = (**(code **)(lVar2 + 0x1d8))();
    if (cVar3 == '\0') {
      puVar4 = local_38;
      if (local_30 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x108))
                        (*(longlong **)(param_1 + 0x10),puVar4);
      if (cVar3 == '\0') {
        param_1 = 0;
        goto LAB_14274e56d;
      }
    }
  }
  param_1 = CONCAT71((int7)(param_1 >> 8),1);
LAB_14274e56d:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 14274e59e FUN_14274e59e body=72 status=ok
// SIG undefined FUN_14274e59e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14274e59e(wchar_t *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  wcsncpy(&DAT_14c83e780,param_1,0x3ff);
  _DAT_14c83ef7e = 0;
                    /* WARNING: Could not recover jumptable at 0x00014274e5df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  return;
}



// FUNCTION 14274e5f4 FUN_14274e5f4 body=104 status=ok
// SIG undefined FUN_14274e5f4(void)

undefined8 FUN_14274e5f4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14279de7c(&local_20);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467baa58(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14274e65e FUN_14274e65e body=31 status=ok
// SIG undefined FUN_14274e65e(void)

undefined1 FUN_14274e65e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1467baade();
  }
  return 1;
}



// FUNCTION 14274e67e FUN_14274e67e body=29 status=ok
// SIG undefined FUN_14274e67e(void)

undefined8 FUN_14274e67e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14274e6b0 FUN_14274e6b0 body=85 status=ok
// SIG undefined FUN_14274e6b0(void)

void FUN_14274e6b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05730;
  return;
}



// FUNCTION 14274e706 FUN_14274e706 body=85 status=ok
// SIG undefined FUN_14274e706(void)

void FUN_14274e706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e05730;
  return;
}



// FUNCTION 14274e75c FUN_14274e75c body=118 status=ok
// SIG undefined FUN_14274e75c(void)

void FUN_14274e75c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e05730;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274e7c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14274e7d8 FUN_14274e7d8 body=16 status=ok
// SIG undefined FUN_14274e7d8(void)

undefined1 FUN_14274e7d8(void)

{
  FUN_14274e7e8();
  return 1;
}


