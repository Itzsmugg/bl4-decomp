// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145376c60 FUN_145376c60 body=18 status=ok
// SIG undefined FUN_145376c60(void)

undefined8 FUN_145376c60(undefined8 param_1)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar6;
  undefined8 uVar5;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  undefined1 auVar27 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  uint uVar62;
  float fVar65;
  uint uVar66;
  float fVar67;
  uint uVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar69;
  uint uVar70;
  uint uVar71;
  float fVar72;
  uint uVar75;
  float fVar76;
  uint uVar77;
  float fVar78;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar79;
  float fVar80;
  float afStack_140 [16];
  undefined1 aauStack_100 [14] [16];
  
  fVar6 = (float)((ulonglong)param_1 >> 0x20);
  afStack_140[0] = (float)param_1;
  if (1 < DAT_14c707900) {
    uVar4 = 0;
    fVar25 = ABS(afStack_140[0]);
    fVar28 = ABS(fVar6);
    fVar31 = ABS(in_XMM0_Dc);
    fVar34 = ABS(in_XMM0_Dd);
    fVar12 = fVar25 * 0.31830987 + 12582912.0;
    fVar14 = fVar28 * 0.31830987 + 12582912.0;
    fVar16 = fVar31 * 0.31830987 + 12582912.0;
    fVar18 = fVar34 * 0.31830987 + 12582912.0;
    fVar13 = fVar12 - 12582912.0;
    fVar15 = fVar14 - 12582912.0;
    fVar17 = fVar16 - 12582912.0;
    fVar19 = fVar18 - 12582912.0;
    auVar7._4_4_ = -(uint)(10000.0 < fVar28);
    auVar7._0_4_ = -(uint)(10000.0 < fVar25);
    auVar7._8_4_ = -(uint)(10000.0 < fVar31);
    auVar7._12_4_ = -(uint)(10000.0 < fVar34);
    iVar1 = movmskps(in_EAX,auVar7);
    fVar37 = (((fVar25 - fVar13 * 3.140625) - fVar13 * 0.0009675026) - fVar13 * 1.5099067e-07) -
             fVar13 * 5.126688e-12;
    fVar42 = (((fVar28 - fVar15 * 3.140625) - fVar15 * 0.0009675026) - fVar15 * 1.5099067e-07) -
             fVar15 * 5.126688e-12;
    fVar45 = (((fVar31 - fVar17 * 3.140625) - fVar17 * 0.0009675026) - fVar17 * 1.5099067e-07) -
             fVar17 * 5.126688e-12;
    fVar48 = (((fVar34 - fVar19 * 3.140625) - fVar19 * 0.0009675026) - fVar19 * 1.5099067e-07) -
             fVar19 * 5.126688e-12;
    fVar13 = fVar37 * fVar37;
    fVar15 = fVar42 * fVar42;
    fVar17 = fVar45 * fVar45;
    fVar19 = fVar48 * fVar48;
    fVar37 = (float)((uint)fVar37 ^ (int)fVar12 << 0x1f);
    fVar42 = (float)((uint)fVar42 ^ (int)fVar14 << 0x1f);
    fVar45 = (float)((uint)fVar45 ^ (int)fVar16 << 0x1f);
    fVar48 = (float)((uint)fVar48 ^ (int)fVar18 << 0x1f);
    aauStack_100[0]._0_4_ =
         (uint)(fVar37 + fVar13 * (((fVar13 * 2.6057805e-06 + -0.00019809602) * fVar13 + 0.008333063
                                   ) * fVar13 + -0.1666666) * fVar37) ^
         (uint)afStack_140[0] & 0x80000000;
    aauStack_100[0]._4_4_ =
         (uint)(fVar42 + fVar15 * (((fVar15 * 2.6057805e-06 + -0.00019809602) * fVar15 + 0.008333063
                                   ) * fVar15 + -0.1666666) * fVar42) ^ (uint)fVar6 & 0x80000000;
    aauStack_100[0]._8_4_ =
         (uint)(fVar45 + fVar17 * (((fVar17 * 2.6057805e-06 + -0.00019809602) * fVar17 + 0.008333063
                                   ) * fVar17 + -0.1666666) * fVar45) ^
         (uint)in_XMM0_Dc & 0x80000000;
    aauStack_100[0]._12_4_ =
         (uint)(fVar48 + fVar19 * (((fVar19 * 2.6057805e-06 + -0.00019809602) * fVar19 + 0.008333063
                                   ) * fVar19 + -0.1666666) * fVar48) ^
         (uint)in_XMM0_Dd & 0x80000000;
    if (iVar1 != 0) {
      auVar27._4_4_ = -(uint)((float)((uint)fVar28 & 0x7f800000) == INFINITY);
      auVar27._0_4_ = -(uint)((float)((uint)fVar25 & 0x7f800000) == INFINITY);
      auVar27._8_4_ = -(uint)((float)((uint)fVar31 & 0x7f800000) == INFINITY);
      auVar27._12_4_ = -(uint)((float)((uint)fVar34 & 0x7f800000) == INFINITY);
      uVar4 = movmskps(0,auVar27);
      uVar2 = (((uint)afStack_140[0] & 0x7f800000) >> 0x17) * 0xc;
      uVar29 = (((uint)fVar6 & 0x7f800000) >> 0x17) * 0xc;
      uVar32 = (((uint)in_XMM0_Dc & 0x7f800000) >> 0x17) * 0xc;
      uVar35 = (((uint)in_XMM0_Dd & 0x7f800000) >> 0x17) * 0xc;
      auVar74._4_4_ = *(uint *)(&DAT_14d2bc108 + uVar29);
      auVar74._0_4_ = *(uint *)(&DAT_14d2bc108 + uVar2);
      auVar74._12_4_ = *(uint *)(&DAT_14d2bc108 + uVar35);
      auVar74._8_4_ = *(uint *)(&DAT_14d2bc108 + uVar32);
      auVar52._12_4_ = *(uint *)(&DAT_14d2bc104 + uVar35);
      auVar52._8_4_ = *(uint *)(&DAT_14d2bc104 + uVar32);
      auVar52._4_4_ = *(uint *)(&DAT_14d2bc104 + uVar29);
      auVar52._0_4_ = *(uint *)(&DAT_14d2bc104 + uVar2);
      auVar58._4_4_ = *(uint *)(&DAT_14d2bc100 + uVar29);
      auVar58._0_4_ = *(uint *)(&DAT_14d2bc100 + uVar2);
      auVar58._12_4_ = *(uint *)(&DAT_14d2bc100 + uVar35);
      auVar58._8_4_ = *(uint *)(&DAT_14d2bc100 + uVar32);
      auVar57._0_4_ = *(uint *)(&DAT_14d2bc108 + uVar2) >> 0x10;
      auVar57._4_4_ = *(uint *)(&DAT_14d2bc108 + uVar29) >> 0x10;
      auVar57._8_4_ = *(uint *)(&DAT_14d2bc108 + uVar32) >> 0x10;
      auVar57._12_4_ = *(uint *)(&DAT_14d2bc108 + uVar35) >> 0x10;
      auVar64._0_4_ = *(uint *)(&DAT_14d2bc104 + uVar2) >> 0x10;
      auVar64._4_4_ = *(uint *)(&DAT_14d2bc104 + uVar29) >> 0x10;
      auVar64._8_4_ = *(uint *)(&DAT_14d2bc104 + uVar32) >> 0x10;
      auVar64._12_4_ = *(uint *)(&DAT_14d2bc104 + uVar35) >> 0x10;
      auVar59._0_4_ = *(uint *)(&DAT_14d2bc100 + uVar2) >> 0x10;
      auVar59._4_4_ = *(uint *)(&DAT_14d2bc100 + uVar29) >> 0x10;
      auVar59._8_4_ = *(uint *)(&DAT_14d2bc100 + uVar32) >> 0x10;
      auVar59._12_4_ = *(uint *)(&DAT_14d2bc100 + uVar35) >> 0x10;
      auVar63._0_4_ = ((uint)afStack_140[0] & 0x7fffff) + 0x800000;
      auVar63._4_4_ = ((uint)fVar6 & 0x7fffff) + 0x800000;
      auVar63._8_4_ = ((uint)in_XMM0_Dc & 0x7fffff) + 0x800000;
      auVar63._12_4_ = ((uint)in_XMM0_Dd & 0x7fffff) + 0x800000;
      auVar8._8_4_ = 0xffff;
      auVar8._0_8_ = 0xffff0000ffff;
      auVar8._12_4_ = 0xffff;
      auVar24._0_4_ = auVar63._0_4_ >> 0x10;
      auVar24._4_4_ = auVar63._4_4_ >> 0x10;
      auVar24._8_4_ = auVar63._8_4_ >> 0x10;
      auVar24._12_4_ = auVar63._12_4_ >> 0x10;
      auVar63 = auVar63 & auVar8;
      auVar23 = pmulld(auVar63,auVar52 & auVar8);
      auVar7 = pmulld(auVar24,auVar57);
      auVar73 = pmulld(auVar57,auVar63);
      auVar57 = auVar23 & auVar8;
      auVar40 = pmulld(auVar74 & auVar8,auVar24);
      auVar27 = pmulld(auVar63,auVar64);
      auVar53 = pmulld(auVar52 & auVar8,auVar24);
      auVar41._0_4_ =
           (auVar40._0_4_ >> 0x10) + auVar57._0_4_ + auVar7._0_4_ + (auVar73._0_4_ >> 0x10);
      auVar41._4_4_ =
           (auVar40._4_4_ >> 0x10) + auVar57._4_4_ + auVar7._4_4_ + (auVar73._4_4_ >> 0x10);
      auVar41._8_4_ =
           (auVar40._8_4_ >> 0x10) + auVar57._8_4_ + auVar7._8_4_ + (auVar73._8_4_ >> 0x10);
      auVar41._12_4_ =
           (auVar40._12_4_ >> 0x10) + auVar57._12_4_ + auVar7._12_4_ + (auVar73._12_4_ >> 0x10);
      auVar74 = auVar27 & auVar8;
      auVar40 = pmulld(auVar63,auVar58 & auVar8);
      auVar7 = pmulld(auVar64,auVar24);
      uVar2 = (auVar41._0_4_ >> 0x10) + auVar74._0_4_ + auVar53._0_4_ + (auVar23._0_4_ >> 0x10);
      uVar29 = (auVar41._4_4_ >> 0x10) + auVar74._4_4_ + auVar53._4_4_ + (auVar23._4_4_ >> 0x10);
      uVar32 = (auVar41._8_4_ >> 0x10) + auVar74._8_4_ + auVar53._8_4_ + (auVar23._8_4_ >> 0x10);
      uVar35 = (auVar41._12_4_ >> 0x10) + auVar74._12_4_ + auVar53._12_4_ + (auVar23._12_4_ >> 0x10)
      ;
      auVar23 = auVar40 & auVar8;
      auVar64 = pmulld(auVar63,auVar59);
      auVar53._0_4_ = (uVar2 >> 0x10) + auVar23._0_4_ + auVar7._0_4_ + (auVar27._0_4_ >> 0x10);
      auVar53._4_4_ = (uVar29 >> 0x10) + auVar23._4_4_ + auVar7._4_4_ + (auVar27._4_4_ >> 0x10);
      auVar53._8_4_ = (uVar32 >> 0x10) + auVar23._8_4_ + auVar7._8_4_ + (auVar27._8_4_ >> 0x10);
      auVar53._12_4_ = (uVar35 >> 0x10) + auVar23._12_4_ + auVar7._12_4_ + (auVar27._12_4_ >> 0x10);
      auVar7 = pmulld(auVar24,auVar58 & auVar8);
      auVar64 = auVar64 & auVar8;
      auVar24 = auVar53 & auVar8;
      auVar41 = auVar41 & auVar8;
      uVar71 = ((auVar53._0_4_ >> 0x10) + auVar64._0_4_ + auVar7._0_4_ + (auVar40._0_4_ >> 0x10)) *
               0x10000 + auVar24._0_4_;
      uVar75 = ((auVar53._4_4_ >> 0x10) + auVar64._4_4_ + auVar7._4_4_ + (auVar40._4_4_ >> 0x10)) *
               0x10000 + auVar24._4_4_;
      uVar77 = ((auVar53._8_4_ >> 0x10) + auVar64._8_4_ + auVar7._8_4_ + (auVar40._8_4_ >> 0x10)) *
               0x10000 + auVar24._8_4_;
      uVar79 = ((auVar53._12_4_ >> 0x10) + auVar64._12_4_ + auVar7._12_4_ + (auVar40._12_4_ >> 0x10)
               ) * 0x10000 + auVar24._12_4_;
      uVar2 = uVar2 * 0x10000 + auVar41._0_4_;
      uVar29 = uVar29 * 0x10000 + auVar41._4_4_;
      uVar32 = uVar32 * 0x10000 + auVar41._8_4_;
      uVar35 = uVar35 * 0x10000 + auVar41._12_4_;
      uVar62 = (uint)afStack_140[0] & 0x80000000;
      uVar66 = (uint)fVar6 & 0x80000000;
      uVar68 = (uint)in_XMM0_Dc & 0x80000000;
      uVar70 = (uint)in_XMM0_Dd & 0x80000000;
      fVar37 = (float)(uVar71 >> 9 | uVar62 ^ 0x3f800000);
      fVar42 = (float)(uVar75 >> 9 | uVar66 ^ 0x3f800000);
      fVar45 = (float)(uVar77 >> 9 | uVar68 ^ 0x3f800000);
      fVar60 = (float)(uVar79 >> 9 | uVar70 ^ 0x3f800000);
      fVar61 = fVar37 + 49152.0;
      fVar65 = fVar42 + 49152.0;
      fVar67 = fVar45 + 49152.0;
      fVar69 = fVar60 + 49152.0;
      fVar12 = (float)((uVar71 & 0x1ff) << 0xe | uVar2 >> 0x12 | uVar62 ^ 0x34000000) -
               (float)(uVar62 ^ 0x34000000);
      fVar14 = (float)((uVar75 & 0x1ff) << 0xe | uVar29 >> 0x12 | uVar66 ^ 0x34000000) -
               (float)(uVar66 ^ 0x34000000);
      fVar16 = (float)((uVar77 & 0x1ff) << 0xe | uVar32 >> 0x12 | uVar68 ^ 0x34000000) -
               (float)(uVar68 ^ 0x34000000);
      fVar18 = (float)((uVar79 & 0x1ff) << 0xe | uVar35 >> 0x12 | uVar70 ^ 0x34000000) -
               (float)(uVar70 ^ 0x34000000);
      fVar37 = fVar37 - (fVar61 - 49152.0);
      fVar42 = fVar42 - (fVar65 - 49152.0);
      fVar45 = fVar45 - (fVar67 - 49152.0);
      fVar60 = fVar60 - (fVar69 - 49152.0);
      fVar13 = fVar37 + fVar12;
      fVar15 = fVar42 + fVar14;
      fVar17 = fVar45 + fVar16;
      fVar19 = fVar60 + fVar18;
      fVar48 = (float)((uint)fVar13 & 0xfffff000);
      fVar9 = (float)((uint)fVar15 & 0xfffff000);
      fVar10 = (float)((uint)fVar17 & 0xfffff000);
      fVar11 = (float)((uint)fVar19 & 0xfffff000);
      fVar38 = (fVar13 - fVar48) * 6.283203 + fVar48 * -1.781782e-05 +
               (((float)((uVar2 & 0x3ffff) << 5 | uVar62 ^ 0x28800000) -
                (float)(uVar62 ^ 0x28800000)) + fVar12 + (fVar37 - fVar13)) * 6.2831855 +
               (fVar13 - fVar48) * -1.781782e-05;
      fVar43 = (fVar15 - fVar9) * 6.283203 + fVar9 * -1.781782e-05 +
               (((float)((uVar29 & 0x3ffff) << 5 | uVar66 ^ 0x28800000) -
                (float)(uVar66 ^ 0x28800000)) + fVar14 + (fVar42 - fVar15)) * 6.2831855 +
               (fVar15 - fVar9) * -1.781782e-05;
      fVar46 = (fVar17 - fVar10) * 6.283203 + fVar10 * -1.781782e-05 +
               (((float)((uVar32 & 0x3ffff) << 5 | uVar68 ^ 0x28800000) -
                (float)(uVar68 ^ 0x28800000)) + fVar16 + (fVar45 - fVar17)) * 6.2831855 +
               (fVar17 - fVar10) * -1.781782e-05;
      fVar49 = (fVar19 - fVar11) * 6.283203 + fVar11 * -1.781782e-05 +
               (((float)((uVar35 & 0x3ffff) << 5 | uVar70 ^ 0x28800000) -
                (float)(uVar70 ^ 0x28800000)) + fVar18 + (fVar60 - fVar19)) * 6.2831855 +
               (fVar19 - fVar11) * -1.781782e-05;
      fVar72 = fVar38 + fVar48 * 6.283203;
      fVar76 = fVar43 + fVar9 * 6.283203;
      fVar78 = fVar46 + fVar10 * 6.283203;
      fVar80 = fVar49 + fVar11 * 6.283203;
      uVar2 = -(uint)(9.536743e-07 < ABS(afStack_140[0]));
      uVar29 = -(uint)(9.536743e-07 < ABS(fVar6));
      uVar32 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dc));
      uVar35 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dd));
      fVar26 = (float)(-(uint)(ABS(afStack_140[0]) <= 9.536743e-07) & (uint)afStack_140[0] |
                      (uint)fVar72 & uVar2);
      fVar30 = (float)(-(uint)(ABS(fVar6) <= 9.536743e-07) & (uint)fVar6 | (uint)fVar76 & uVar29);
      fVar33 = (float)(-(uint)(ABS(in_XMM0_Dc) <= 9.536743e-07) & (uint)in_XMM0_Dc |
                      (uint)fVar78 & uVar32);
      fVar36 = (float)(-(uint)(ABS(in_XMM0_Dd) <= 9.536743e-07) & (uint)in_XMM0_Dd |
                      (uint)fVar80 & uVar35);
      uVar62 = ((uint)fVar61 & 0xff) << 4;
      uVar66 = ((uint)fVar65 & 0xff) << 4;
      uVar68 = ((uint)fVar67 & 0xff) << 4;
      uVar70 = ((uint)fVar69 & 0xff) << 4;
      fVar69 = fVar26 * fVar26;
      fVar20 = fVar30 * fVar30;
      fVar21 = fVar33 * fVar33;
      fVar22 = fVar36 * fVar36;
      fVar6 = *(float *)(&DAT_14d2bcd04 + uVar62);
      fVar13 = *(float *)(&DAT_14d2bcd04 + uVar68);
      fVar15 = *(float *)(&DAT_14d2bcd04 + uVar66);
      fVar17 = *(float *)(&DAT_14d2bcd04 + uVar70);
      fVar19 = fVar26 * *(float *)(&DAT_14d2bcd0c + uVar62);
      fVar12 = fVar30 * *(float *)(&DAT_14d2bcd0c + uVar66);
      fVar14 = fVar33 * *(float *)(&DAT_14d2bcd0c + uVar68);
      fVar16 = fVar36 * *(float *)(&DAT_14d2bcd0c + uVar70);
      fVar39 = fVar6 + fVar19;
      fVar44 = fVar15 + fVar12;
      fVar47 = fVar13 + fVar14;
      fVar50 = fVar17 + fVar16;
      fVar51 = fVar26 * *(float *)(&DAT_14d2bcd00 + uVar62);
      fVar54 = fVar30 * *(float *)(&DAT_14d2bcd00 + uVar66);
      fVar55 = fVar33 * *(float *)(&DAT_14d2bcd00 + uVar68);
      fVar56 = fVar36 * *(float *)(&DAT_14d2bcd00 + uVar70);
      fVar18 = fVar39 + fVar51;
      fVar37 = fVar44 + fVar54;
      fVar42 = fVar47 + fVar55;
      fVar45 = fVar50 + fVar56;
      fVar60 = (*(float *)(&DAT_14d2bcd00 + uVar62) + *(float *)(&DAT_14d2bcd0c + uVar62)) -
               fVar26 * fVar6;
      fVar61 = (*(float *)(&DAT_14d2bcd00 + uVar66) + *(float *)(&DAT_14d2bcd0c + uVar66)) -
               fVar30 * fVar15;
      fVar65 = (*(float *)(&DAT_14d2bcd00 + uVar68) + *(float *)(&DAT_14d2bcd0c + uVar68)) -
               fVar33 * fVar13;
      fVar67 = (*(float *)(&DAT_14d2bcd00 + uVar70) + *(float *)(&DAT_14d2bcd0c + uVar70)) -
               fVar36 * fVar17;
      auVar23._0_4_ =
           fVar18 + *(float *)(&DAT_14d2bcd08 + uVar62) +
                    (float)(uVar2 & (uint)(fVar38 + (fVar48 * 6.283203 - fVar72))) * fVar60 +
                    fVar6 * fVar69 * (fVar69 * 0.041666493 + -0.5) +
                    fVar19 + (fVar6 - fVar39) + fVar51 + (fVar39 - fVar18) +
                    (fVar69 * 0.008333292 + -0.16666667) * fVar69 * fVar26 * fVar60;
      auVar23._4_4_ =
           fVar37 + *(float *)(&DAT_14d2bcd08 + uVar66) +
                    (float)(uVar29 & (uint)(fVar43 + (fVar9 * 6.283203 - fVar76))) * fVar61 +
                    fVar15 * fVar20 * (fVar20 * 0.041666493 + -0.5) +
                    fVar12 + (fVar15 - fVar44) + fVar54 + (fVar44 - fVar37) +
                    (fVar20 * 0.008333292 + -0.16666667) * fVar20 * fVar30 * fVar61;
      auVar23._8_4_ =
           fVar42 + *(float *)(&DAT_14d2bcd08 + uVar68) +
                    (float)(uVar32 & (uint)(fVar46 + (fVar10 * 6.283203 - fVar78))) * fVar65 +
                    fVar13 * fVar21 * (fVar21 * 0.041666493 + -0.5) +
                    fVar14 + (fVar13 - fVar47) + fVar55 + (fVar47 - fVar42) +
                    (fVar21 * 0.008333292 + -0.16666667) * fVar21 * fVar33 * fVar65;
      auVar23._12_4_ =
           fVar45 + *(float *)(&DAT_14d2bcd08 + uVar70) +
                    (float)(uVar35 & (uint)(fVar49 + (fVar11 * 6.283203 - fVar80))) * fVar67 +
                    fVar17 * fVar22 * (fVar22 * 0.041666493 + -0.5) +
                    fVar16 + (fVar17 - fVar50) + fVar56 + (fVar50 - fVar45) +
                    (fVar22 * 0.008333292 + -0.16666667) * fVar22 * fVar36 * fVar67;
      auVar40._4_4_ = -(uint)(10000.0 < fVar28);
      auVar40._0_4_ = -(uint)(10000.0 < fVar25);
      auVar40._8_4_ = -(uint)(10000.0 < fVar31);
      auVar40._12_4_ = -(uint)(10000.0 < fVar34);
      aauStack_100[0] = blendvps(aauStack_100[0],auVar23,auVar40);
    }
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        if ((uVar4 >> ((uint)uVar3 & 0x1f) & 1) != 0) {
          FUN_1455e5c20(afStack_140 + uVar3,aauStack_100[0] + uVar3 * 4);
        }
        uVar2 = (uint)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while ((int)uVar2 < 4);
    }
    return aauStack_100[0]._0_8_;
  }
  uVar5 = FUN_145543600();
  return uVar5;
}



// FUNCTION 145376c80 FUN_145376c80 body=67 status=ok
// SIG undefined FUN_145376c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145376c80(uint param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  
  fVar2 = (float)(param_1 & (uint)DAT_149d43240);
  if (0.00012207031 <= fVar2) {
    auVar1._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar1._0_4_ = fVar2 + 1.5707964;
    FUN_145376c60(param_1,auVar1._0_8_);
    return;
  }
  return;
}



// FUNCTION 145376cc3 FUN_145376cc3 body=13 status=ok
// SIG undefined FUN_145376cc3(void)

void FUN_145376cc3(float param_1)

{
  FUN_145376c60(param_1 + 0.0);
  return;
}



// FUNCTION 145376cd0 FUN_145376cd0 body=16 status=ok
// SIG undefined FUN_145376cd0(void)

undefined8 * FUN_145376cd0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145376ce0 FUN_145376ce0 body=95 status=ok
// SIG undefined FUN_145376ce0(void)

undefined8 * FUN_145376ce0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0x60);
    if ((uVar1 < 2) && (*(char *)(param_3 + 100) != '\0')) {
      *(uint *)(param_3 + 0x60) = uVar1 + 1;
      if ((1 < uVar1 + 1) || (*(char *)(param_3 + 100) == '\0')) {
        FUN_145355090(param_3);
        return param_1;
      }
    }
    else {
      *(uint *)(param_3 + 0x60) = uVar1 + 1;
    }
  }
  return param_1;
}



// FUNCTION 145376d40 FUN_145376d40 body=17 status=ok
// SIG undefined FUN_145376d40(void)

undefined8 * FUN_145376d40(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145376d60 FUN_145376d60 body=38 status=ok
// SIG undefined FUN_145376d60(void)

undefined8 * FUN_145376d60(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



// FUNCTION 145376d90 FUN_145376d90 body=121 status=ok
// SIG undefined FUN_145376d90(void)

void FUN_145376d90(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar1 + 0xc) < 2) && (*(char *)((longlong)puVar1 + 100) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar3 = *(uint *)(puVar1 + 0xc) - 1;
    *(uint *)(puVar1 + 0xc) = uVar3;
    if ((uVar3 == 0) || (((bVar2 && (uVar3 < 2)) && (*(char *)((longlong)puVar1 + 100) != '\0')))) {
      FUN_1453550a0(puVar1);
    }
    if (*(int *)(puVar1 + 0xc) == 0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 145376e10 FUN_145376e10 body=50 status=ok
// SIG undefined FUN_145376e10(void)

undefined8 * FUN_145376e10(undefined8 *param_1,undefined8 param_2,__uint64 param_3)

{
  CAkRegisteredObj *pCVar1;
  
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  pCVar1 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_3);
  param_1[2] = pCVar1;
  return param_1;
}



// FUNCTION 145376e50 FUN_145376e50 body=428 status=ok
// SIG undefined FUN_145376e50(void)

longlong * FUN_145376e50(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_38 [2];
  undefined8 *local_28;
  longlong local_20 [2];
  undefined8 *local_10;
  
  if ((*param_1 != 0) && (plVar6 = *(longlong **)(*param_1 + 0x80), plVar6 != (longlong *)0x0)) {
    lVar5 = (**(code **)(*plVar6 + 0x100))();
    if (lVar5 != 0) {
      local_28 = (undefined8 *)param_1[2];
      local_38[1] = 0;
      local_38[0] = lVar5;
      if (local_28 != (undefined8 *)0x0) {
        uVar4 = *(uint *)(local_28 + 0xc);
        if ((uVar4 < 2) && (*(char *)((longlong)local_28 + 100) != '\0')) {
          *(uint *)(local_28 + 0xc) = uVar4 + 1;
          if ((1 < uVar4 + 1) || (*(char *)((longlong)local_28 + 100) == '\0')) {
            FUN_145355090();
            plVar6 = local_38;
            bVar2 = true;
            bVar1 = false;
            goto LAB_145376f07;
          }
        }
        else {
          *(uint *)(local_28 + 0xc) = uVar4 + 1;
        }
      }
      plVar6 = local_38;
      bVar2 = true;
      bVar1 = false;
      goto LAB_145376f07;
    }
  }
  plVar6 = local_20;
  local_10 = (undefined8 *)0x0;
  local_20[0] = 0;
  local_20[1] = 0;
  lVar5 = 0;
  bVar2 = false;
  bVar1 = true;
LAB_145376f07:
  param_2[1] = plVar6[1];
  param_2[2] = plVar6[2];
  *param_2 = lVar5;
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  puVar3 = local_10;
  if (bVar1) {
    if (local_10 != (undefined8 *)0x0) {
      if ((*(uint *)(local_10 + 0xc) < 2) && (*(char *)((longlong)local_10 + 100) != '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar4 = *(uint *)(local_10 + 0xc) - 1;
      *(uint *)(local_10 + 0xc) = uVar4;
      if ((uVar4 == 0) ||
         (((bVar1 && (uVar4 < 2)) && (*(char *)((longlong)local_10 + 100) != '\0')))) {
        FUN_1453550a0();
      }
      if (*(int *)(puVar3 + 0xc) == 0) {
        (**(code **)*puVar3)(puVar3,0);
        AK::MemoryMgr::Free(4,puVar3);
      }
    }
  }
  puVar3 = local_28;
  if ((bVar2) && (local_28 != (undefined8 *)0x0)) {
    if ((*(uint *)(local_28 + 0xc) < 2) && (*(char *)((longlong)local_28 + 100) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar4 = *(uint *)(local_28 + 0xc) - 1;
    *(uint *)(local_28 + 0xc) = uVar4;
    if ((uVar4 == 0) || (((bVar1 && (uVar4 < 2)) && (*(char *)((longlong)local_28 + 100) != '\0'))))
    {
      FUN_1453550a0(local_28);
    }
    if (*(int *)(puVar3 + 0xc) == 0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(4,puVar3);
    }
  }
  return param_2;
}



// FUNCTION 145377000 FUN_145377000 body=13 status=ok
// SIG undefined FUN_145377000(void)

undefined4 FUN_145377000(longlong *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x20);
  }
  return 0;
}



// FUNCTION 145377010 FUN_145377010 body=22 status=ok
// SIG undefined FUN_145377010(void)

undefined8 FUN_145377010(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 145377030 FUN_145377030 body=163 status=ok
// SIG undefined FUN_145377030(void)

undefined8 * FUN_145377030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar1 + 0xc) < 2) && (*(char *)((longlong)puVar1 + 100) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar3 = *(uint *)(puVar1 + 0xc) - 1;
    *(uint *)(puVar1 + 0xc) = uVar3;
    if ((uVar3 == 0) || (((bVar2 && (uVar3 < 2)) && (*(char *)((longlong)puVar1 + 100) != '\0')))) {
      FUN_1453550a0(puVar1);
    }
    if (*(int *)(puVar1 + 0xc) == 0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(4,puVar1);
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



// FUNCTION 1453770e0 FUN_1453770e0 body=33 status=ok
// SIG undefined FUN_1453770e0(void)

uint * FUN_1453770e0(longlong *param_1,uint *param_2)

{
  if (*param_1 != 0) {
    *param_2 = *(uint *)(*param_1 + 0x114);
    return param_2;
  }
  *(undefined1 *)param_2 = 0;
  *param_2 = *param_2 & 0xff;
  return param_2;
}



// FUNCTION 145377110 FUN_145377110 body=93 status=ok
// SIG undefined FUN_145377110(void)

void FUN_145377110(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145377130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x1b0))();
    return;
  }
  plVar3 = (longlong *)*param_3;
  *param_3 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  *(undefined2 *)(param_3 + 1) = 0;
  return;
}



// FUNCTION 145377170 FUN_145377170 body=51 status=ok
// SIG undefined FUN_145377170(void)

void FUN_145377170(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x1b8))();
    return;
  }
  *param_4 = 0xffffffff;
  return;
}



// FUNCTION 1453771b0 FUN_1453771b0 body=81 status=ok
// SIG undefined FUN_1453771b0(void)

void FUN_1453771b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_14508dac0();
    return;
  }
  plVar3 = (longlong *)*param_2;
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 145377210 FUN_145377210 body=20 status=ok
// SIG undefined FUN_145377210(void)

ulonglong FUN_145377210(longlong *param_1,uint param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  ulonglong in_RAX;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    *param_3 = 0xffffffff;
    return in_RAX;
  }
  *param_3 = 0xffffffff;
  lVar6 = DAT_14c791060;
  lVar5 = *(longlong *)(lVar5 + 0xf0);
  uVar8 = 0;
  if (lVar5 != 0) {
    uVar7 = *(uint *)(lVar5 + 4);
    if (*(char *)(lVar5 + 9) == '\0') {
      do {
        while (iVar3 = *(int *)(lVar6 + 0x370), iVar3 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
          if (*(int *)(lVar6 + 0x370) < 0) goto LAB_14508de67;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
        }
        LOCK();
        bVar12 = iVar3 == *(int *)(lVar6 + 0x370);
        if (bVar12) {
          *(int *)(lVar6 + 0x370) = iVar3 + 1;
        }
        UNLOCK();
      } while (!bVar12);
LAB_14508de67:
      plVar10 = (longlong *)0x0;
      if (*(uint *)(lVar6 + 0x3b8) != 0) {
        for (plVar4 = *(longlong **)
                       (*(longlong *)(lVar6 + 0x3b0) +
                       ((ulonglong)uVar7 % (ulonglong)*(uint *)(lVar6 + 0x3b8)) * 8);
            (plVar9 = plVar10, plVar4 != (longlong *)0x0 &&
            (plVar9 = plVar4, *(uint *)(plVar4 + 2) != uVar7)); plVar4 = (longlong *)plVar4[1]) {
        }
        plVar10 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      uVar7 = *(uint *)(lVar6 + 0x370);
      while (-1 < (int)uVar7) {
        LOCK();
        uVar2 = *(uint *)(lVar6 + 0x370);
        bVar12 = uVar7 == uVar2;
        if (bVar12) {
          *(uint *)(lVar6 + 0x370) = uVar7 - 1;
          uVar2 = uVar7;
        }
        uVar8 = (ulonglong)uVar2;
        UNLOCK();
        if (bVar12) {
          if ((uVar7 - 1 == 0) &&
             (uVar8 = (ulonglong)*(uint *)(lVar6 + 0x3a0), 0 < (int)*(uint *)(lVar6 + 0x3a0))) {
            uVar7 = SetEvent(*(HANDLE *)(lVar6 + 0x3a8));
            uVar8 = (ulonglong)uVar7;
          }
          goto LAB_14508df06;
        }
        uVar7 = *(uint *)(lVar6 + 0x370);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x378);
    }
    else {
      do {
        while (iVar3 = *(int *)(lVar6 + 0x3c8), iVar3 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x3d0));
          if (*(int *)(lVar6 + 0x3c8) < 0) goto LAB_14508dd87;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x3d0));
        }
        LOCK();
        bVar12 = iVar3 == *(int *)(lVar6 + 0x3c8);
        if (bVar12) {
          *(int *)(lVar6 + 0x3c8) = iVar3 + 1;
        }
        UNLOCK();
      } while (!bVar12);
LAB_14508dd87:
      plVar10 = (longlong *)0x0;
      if (*(uint *)(lVar6 + 0x410) != 0) {
        for (plVar4 = *(longlong **)
                       (*(longlong *)(lVar6 + 0x408) +
                       ((ulonglong)uVar7 % (ulonglong)*(uint *)(lVar6 + 0x410)) * 8);
            (plVar9 = plVar10, plVar4 != (longlong *)0x0 &&
            (plVar9 = plVar4, *(uint *)(plVar4 + 2) != uVar7)); plVar4 = (longlong *)plVar4[1]) {
        }
        plVar10 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      uVar7 = *(uint *)(lVar6 + 0x3c8);
      while (-1 < (int)uVar7) {
        LOCK();
        uVar2 = *(uint *)(lVar6 + 0x3c8);
        bVar12 = uVar7 == uVar2;
        if (bVar12) {
          *(uint *)(lVar6 + 0x3c8) = uVar7 - 1;
          uVar2 = uVar7;
        }
        uVar8 = (ulonglong)uVar2;
        UNLOCK();
        if (bVar12) {
          if ((uVar7 - 1 == 0) &&
             (uVar8 = (ulonglong)*(uint *)(lVar6 + 0x3f8), 0 < (int)*(uint *)(lVar6 + 0x3f8))) {
            uVar7 = SetEvent(*(HANDLE *)(lVar6 + 0x400));
            uVar8 = (ulonglong)uVar7;
          }
          goto LAB_14508df06;
        }
        uVar7 = *(uint *)(lVar6 + 0x3c8);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x3d0);
    }
    LeaveCriticalSection(lpCriticalSection);
    uVar8 = extraout_RAX;
LAB_14508df06:
    uVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      if (param_2 < *(uint *)(plVar10 + 10)) {
        uVar11 = *(undefined4 *)(plVar10[9] + (ulonglong)param_2 * 4);
      }
      *param_3 = uVar11;
      LOCK();
      puVar1 = (uint *)((longlong)plVar10 + 0x14);
      uVar7 = *puVar1;
      uVar8 = (ulonglong)uVar7;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar7 == 1) {
        uVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  return uVar8;
}



// FUNCTION 145377230 FUN_145377230 body=32 status=ok
// SIG undefined FUN_145377230(void)

ulonglong FUN_145377230(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (((*param_1 != 0) && (uVar1 = *(ulonglong *)(*param_1 + 0xf0), uVar1 != 0)) &&
     (*(int *)(uVar1 + 4) != 0)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 145377250 FUN_145377250 body=37 status=ok
// SIG undefined FUN_145377250(void)

bool FUN_145377250(longlong *param_1)

{
  int iVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x70))();
    return iVar1 == 10;
  }
  return false;
}



// FUNCTION 145377280 FUN_145377280 body=125 status=ok
// SIG undefined FUN_145377280(void)

void FUN_145377280(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 145377300 FUN_145377300 body=253 status=ok
// SIG undefined FUN_145377300(void)

undefined8 FUN_145377300(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar8 = *(uint *)(param_2 + 0x10);
  if (*(uint *)((longlong)param_1 + 0x14) < uVar8) {
    plVar3 = (longlong *)*param_1;
    if (param_1[1] == 0) {
      lVar6 = (**(code **)(*plVar3 + 8))
                        (plVar3,(ulonglong)uVar8 * 0x18,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                         ,0xcc);
      if (lVar6 != 0) {
        if ((param_1[1] != 0) && (param_1[1] != lVar6)) {
          (**(code **)(*(longlong *)*param_1 + 0x10))();
        }
        goto LAB_14537739a;
      }
    }
    else {
      lVar6 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,param_1[1],(ulonglong)uVar8 * 0x18,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                         ,0xcd);
      if (lVar6 != 0) {
LAB_14537739a:
        param_1[1] = lVar6;
        *(uint *)((longlong)param_1 + 0x14) = uVar8;
        goto LAB_1453773a2;
      }
    }
    uVar7 = 2;
  }
  else {
LAB_1453773a2:
    *(uint *)(param_1 + 2) = uVar8;
    if (*(int *)(param_2 + 0x10) != 0) {
      do {
        lVar4 = param_1[1];
        lVar6 = uVar9 * 0x18;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        lVar5 = *(longlong *)(param_2 + 8);
        puVar1 = (undefined8 *)(lVar6 + lVar5);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + lVar6);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar4 + 0x10 + lVar6) = *(undefined8 *)(lVar6 + 0x10 + lVar5);
      } while (uVar8 < *(uint *)(param_2 + 0x10));
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 145377400 FUN_145377400 body=188 status=ok
// SIG undefined FUN_145377400(void)

undefined8 * FUN_145377400(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffff;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[7] = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4e) = 1;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0x32;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x2b;
  return param_1;
}



// FUNCTION 1453774c0 FUN_1453774c0 body=144 status=ok
// SIG undefined FUN_1453774c0(void)

void FUN_1453774c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1453552e0();
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa4) = 0x2b;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0xb8));
  }
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 145377550 FUN_145377550 body=24 status=ok
// SIG undefined FUN_145377550(void)

undefined8 * FUN_145377550(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 145377570 FUN_145377570 body=128 status=ok
// SIG undefined FUN_145377570(void)

undefined4 FUN_145377570(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar3 = 1;
  if (param_2 != 0) {
    uVar2 = 0x34;
    if ((*(uint *)(param_1 + 0xc) < param_2) &&
       (cVar1 = FUN_145378230(param_1,param_2 - *(uint *)(param_1 + 0xc)), cVar1 == '\0')) {
      return 0x34;
    }
    if (*(uint *)(param_1 + 0x1c) < 100) {
      cVar1 = FUN_145378230(param_1 + 0x10,100 - *(uint *)(param_1 + 0x1c));
      if (cVar1 != '\0') {
        uVar2 = 1;
      }
      uVar3 = 1;
      if (cVar1 == '\0') {
        uVar3 = uVar2;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1453775f0 FUN_1453775f0 body=36 status=ok
// SIG undefined FUN_1453775f0(void)

void FUN_1453775f0(longlong param_1)

{
  FUN_1453781a0();
  FUN_1453781a0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145377620 FUN_145377620 body=178 status=ok
// SIG undefined FUN_145377620(void)

ulonglong * FUN_145377620(longlong *param_1,ulonglong param_2,byte param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulonglong *puVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar2 <= uVar1) {
    iVar3 = (uVar2 >> 1) + uVar2;
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    cVar4 = FUN_145378230(param_1,iVar3);
    if (cVar4 == '\0') {
      return (ulonglong *)0x0;
    }
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
    return (ulonglong *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  puVar5 = (ulonglong *)((ulonglong)uVar1 * 0xc0 + *param_1);
  if (puVar5 != (ulonglong *)0x0) {
    FUN_145377400(puVar5);
    *(int *)(puVar5 + 0x16) = param_4;
    *puVar5 = (ulonglong)param_3 << 0x38 | param_2;
    if (param_4 == 3) {
      *(int *)(param_1 + 4) = (int)param_1[4] + 1;
      return puVar5;
    }
    return puVar5;
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1453776e0 FUN_1453776e0 body=80 status=ok
// SIG undefined FUN_1453776e0(void)

void FUN_1453776e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = (ulonglong)*(uint *)(param_1 + 1) * 0xc0 + lVar1;
  if (lVar1 != lVar2) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar1 + 0xb0) == 3) {
        *(longlong *)(lVar3 + *(longlong *)(param_2 + 8)) = lVar1 + 0x98;
        *(longlong *)(lVar3 + *(longlong *)(param_2 + 0x10)) = lVar1;
        lVar3 = lVar3 + 8;
      }
      lVar1 = lVar1 + 0xc0;
    } while (lVar1 != lVar2);
  }
  return;
}



// FUNCTION 145377730 FUN_145377730 body=431 status=ok
// SIG undefined FUN_145377730(void)

void FUN_145377730(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = *param_1;
  uVar1 = (ulonglong)(uint)param_1[1];
  if (uVar2 != uVar1 * 0xc0 + uVar2) {
    lVar5 = uVar2 + 0xa8;
    uVar3 = uVar2;
    do {
      if (*(int *)(lVar5 + -4) == 0x2d) {
        uVar3 = uVar3 + 0xc0;
        *(undefined8 *)(lVar5 + -0x10) = 0;
        *(undefined8 *)(lVar5 + -4) = 0x11;
        lVar5 = lVar5 + 0xc0;
      }
      else {
        if (*(int *)(lVar5 + 8) == 3) {
          *(int *)(param_1 + 4) = (int)param_1[4] + -1;
        }
        if (uVar3 < (uVar2 - 0xc0) + uVar1 * 0xc0) {
          FUN_1453774c0();
        }
        lVar4 = (ulonglong)(uint)param_1[1] * 0xc0 + *param_1;
        if (*(void **)(lVar4 + -8) != (void *)0x0) {
          AK::MemoryMgr::Free(0,*(void **)(lVar4 + -8));
          *(undefined8 *)(lVar4 + -8) = 0;
        }
        FUN_145355270(lVar4 + -0xc0);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      }
      uVar2 = *param_1;
      uVar1 = (ulonglong)(uint)param_1[1];
    } while (uVar3 != (ulonglong)(uint)param_1[1] * 0xc0 + uVar2);
  }
  uVar2 = param_1[2];
  uVar1 = (ulonglong)(uint)param_1[3];
  if (uVar2 != uVar1 * 0xc0 + uVar2) {
    lVar5 = uVar2 + 0xa8;
    uVar3 = uVar2;
    do {
      if (*(int *)(lVar5 + -4) == 0x2d) {
        uVar3 = uVar3 + 0xc0;
        *(undefined8 *)(lVar5 + -0x10) = 0;
        *(undefined8 *)(lVar5 + -4) = 0x11;
        lVar5 = lVar5 + 0xc0;
      }
      else {
        if (uVar3 < (uVar2 - 0xc0) + uVar1 * 0xc0) {
          FUN_1453774c0();
        }
        lVar4 = (ulonglong)(uint)param_1[3] * 0xc0 + param_1[2];
        if (*(void **)(lVar4 + -8) != (void *)0x0) {
          AK::MemoryMgr::Free(0,*(void **)(lVar4 + -8));
          *(undefined8 *)(lVar4 + -8) = 0;
        }
        FUN_145355270(lVar4 + -0xc0);
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      }
      uVar2 = param_1[2];
      uVar1 = (ulonglong)(uint)param_1[3];
    } while (uVar3 != (ulonglong)(uint)param_1[3] * 0xc0 + uVar2);
  }
  return;
}



// FUNCTION 1453778e0 FUN_1453778e0 body=568 status=ok
// SIG undefined FUN_1453778e0(void)

undefined8 *
FUN_1453778e0(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
             longlong param_5)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  uVar4 = *(uint *)(param_3 + 8);
  cVar2 = *(char *)((longlong)param_4 + 0x4c);
  uVar15 = uVar4 >> 0xc;
  uVar8 = uVar4 - (uVar15 - (uVar15 & 0xffff7) >> 3);
  uVar12 = uVar8 & 0xff;
  *param_2 = 0;
  param_2[1] = 0;
  if ((((cVar2 == '\0') || (*(float *)(param_4 + 9) <= 1.0 && *(float *)(param_4 + 9) != 1.0)) ||
      ((uVar4 & 0xf00) != 0x100)) ||
     (((uVar15 & 0xffff7) != (uVar15 & 0x637) || ((char)uVar8 == '\0')))) {
    plVar9 = (longlong *)param_1[2];
    bVar7 = false;
    plVar11 = plVar9 + (ulonglong)*(uint *)(param_1 + 3) * 0x18;
    for (; plVar9 != plVar11; plVar9 = plVar9 + 0x18) {
      bVar6 = false;
      if (*plVar9 == *param_4) goto LAB_145377a2c;
    }
    plVar9 = (longlong *)*param_1;
    plVar11 = plVar9 + (ulonglong)*(uint *)(param_1 + 1) * 0x18;
    for (; plVar9 != plVar11; plVar9 = plVar9 + 0x18) {
      bVar6 = bVar7;
      if (*plVar9 == *param_4) goto LAB_145377a2c;
    }
  }
  else {
    plVar9 = (longlong *)*param_1;
    bVar7 = true;
    uVar8 = *(uint *)(param_1 + 1);
    lVar5 = *param_4;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    plVar11 = plVar9 + (ulonglong)uVar8 * 0x18;
    for (; plVar9 != plVar11; plVar9 = plVar9 + 0x18) {
      bVar6 = true;
      if (*plVar9 == lVar5) goto LAB_145377a2c;
    }
    plVar9 = (longlong *)param_1[2];
    plVar11 = plVar9 + (ulonglong)*(uint *)(param_1 + 3) * 0x18;
    for (; plVar9 != plVar11; plVar9 = plVar9 + 0x18) {
      bVar6 = bVar7;
      if (*plVar9 == lVar5) goto LAB_145377a2c;
    }
  }
  plVar9 = (longlong *)0x0;
  bVar6 = bVar7;
LAB_145377a2c:
  uVar14 = 1;
  *param_2 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    piVar10 = (int *)param_4[0xc];
    piVar1 = piVar10 + (ulonglong)*(uint *)(param_4 + 0xd) * 6;
    for (; piVar10 != piVar1; piVar10 = piVar10 + 6) {
      if ((*piVar10 == 0x3840009) && (*(longlong *)(piVar10 + 2) != 0)) {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(*(longlong *)(piVar10 + 2) + 0xc);
      }
    }
    if ((*(char *)(param_5 + 0xc) == '\0') && (*(int *)(param_2 + 1) == 2)) {
      *(undefined4 *)(param_2 + 1) = 1;
    }
  }
  else {
    *(int *)(param_2 + 1) = (int)plVar9[0x16];
  }
  if (*(int *)(param_2 + 1) == 0) {
    uVar8 = (int)param_1[4] + uVar12;
    if ((bVar6) && (uVar8 <= *(uint *)(param_5 + 8))) {
      *(undefined4 *)(param_2 + 1) = 3;
    }
    else {
      if ((*(int *)(param_5 + 4) == 0) || ((!bVar6 || (uVar8 <= *(uint *)(param_5 + 8))))) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      cVar3 = *(char *)(param_5 + 0xc);
      *(undefined1 *)((longlong)param_2 + 0xd) = uVar13;
      if ((((cVar3 != '\0') && (!bVar6)) && (cVar2 == '\0')) &&
         (((uVar4 & 0xf00) == 0x100 && (uVar12 < 3)))) {
        uVar14 = 2;
      }
      *(undefined4 *)(param_2 + 1) = uVar14;
    }
  }
  return param_2;
}



// FUNCTION 145377b20 FUN_145377b20 body=1662 status=ok
// SIG undefined FUN_145377b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
FUN_145377b20(longlong *param_1,longlong *param_2,ulonglong *param_3,ulonglong *param_4,
             longlong param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  char cVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined4 *puVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined8 auStack_e0 [5];
  longlong alStack_b8 [2];
  undefined8 local_a8;
  undefined4 *local_a0;
  ulonglong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  
  iVar7 = (int)param_2[1];
  puVar20 = (ulonglong *)*param_2;
  uVar23 = (uint)param_3[1];
  if (iVar7 == 3) {
    if (((uVar23 & 0xff) == 1) || (*(char *)(param_5 + 0xd) != '\0')) {
      if (puVar20 != (ulonglong *)0x0) {
        uVar2 = *(undefined4 *)((longlong)param_3 + 4);
        uVar15 = param_3[1];
        uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
        *(int *)(puVar20 + 0x13) = (int)*param_3;
        *(undefined4 *)((longlong)puVar20 + 0x9c) = uVar2;
        *(int *)(puVar20 + 0x14) = (int)uVar15;
        *(undefined4 *)((longlong)puVar20 + 0xa4) = uVar3;
        puVar20[0x15] = param_3[2];
        auStack_e0[0] = 0x145378046;
        FUN_1453552e0(puVar20,param_4);
        return puVar20;
      }
      auStack_e0[0] = 0x14537805f;
      puVar20 = (ulonglong *)FUN_145377620(param_1,*param_4,0,3);
      if (puVar20 == (ulonglong *)0x0) {
        return (ulonglong *)0x0;
      }
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar15 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(int *)(puVar20 + 0x13) = (int)*param_3;
      *(undefined4 *)((longlong)puVar20 + 0x9c) = uVar2;
      *(int *)(puVar20 + 0x14) = (int)uVar15;
      *(undefined4 *)((longlong)puVar20 + 0xa4) = uVar3;
      puVar20[0x15] = param_3[2];
      auStack_e0[0] = 0x14537808f;
      FUN_1453552e0(puVar20,param_4);
      return puVar20;
    }
    uVar21 = uVar23 >> 0xc & 0x637;
    bVar13 = (byte)uVar23 - 1;
    if ((uVar23 >> 0xc & 8) == 0) {
      bVar13 = (byte)uVar23;
    }
    uVar15 = (ulonglong)bVar13 * 0x10 + 0xf;
    if (uVar15 <= (ulonglong)bVar13 * 0x10) {
      uVar15 = 0xffffffffffffff0;
    }
    auStack_e0[0] = 0x145377bd9;
    lVar10 = -(uVar15 & 0xfffffffffffffff0);
    uVar15 = (ulonglong)((uint)bVar13 * 4) + 0xf;
    puVar1 = (undefined4 *)((longlong)&local_a8 + lVar10);
    if (uVar15 <= (uint)bVar13 * 4) {
      uVar15 = 0xffffffffffffff0;
    }
    local_a8 = (ulonglong)bVar13;
    local_a0 = puVar1;
    *(undefined8 *)((longlong)auStack_e0 + lVar10) = 0x145377c03;
    local_88 = (undefined4)param_4[1];
    uStack_84 = *(undefined4 *)((longlong)param_4 + 0xc);
    uStack_80 = (undefined4)param_4[2];
    uStack_7c = *(undefined4 *)((longlong)param_4 + 0x14);
    uVar5 = *(undefined1 *)((longlong)param_4 + 0x4c);
    lVar11 = -(uVar15 & 0xfffffffffffffff0);
    auVar26 = *(undefined1 (*) [16])(param_4 + 3);
    uVar15 = param_4[5];
    uVar2 = *(undefined4 *)((longlong)param_4 + 0x2c);
    puVar24 = (undefined4 *)((longlong)&local_a8 + lVar11 + lVar10);
    *(undefined4 **)((longlong)alStack_b8 + lVar11 + lVar10 + 8) = puVar24;
    *(undefined4 **)((longlong)alStack_b8 + lVar11 + lVar10) = puVar1;
    local_78 = auVar26;
    local_68 = (int)uVar15;
    *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377c42;
    FUN_1450913f0(&local_88,uVar5,-(uint)(uVar21 != 0) & 0x100 | uVar21 << 0xc | (uint)bVar13,uVar2)
    ;
    uVar5 = (undefined1)param_4[0x12];
    fVar25 = (float)bVar13;
    auVar9._4_4_ = fVar25;
    auVar9._0_4_ = fVar25;
    auVar9._8_4_ = fVar25;
    auVar9._12_4_ = fVar25;
    auVar26 = rsqrtps(auVar26,auVar9);
    fVar25 = *(float *)(param_4 + 10) * auVar26._0_4_;
    fVar27 = *(float *)((longlong)param_4 + 0x54) * auVar26._0_4_;
    if (puVar20 != (ulonglong *)0x0) {
      uVar6 = *(undefined2 *)((longlong)param_3 + 0x12);
      uVar15 = *param_3;
      uVar2 = *puVar24;
      *(short *)(puVar20 + 0x15) = (short)param_3[2];
      *(undefined2 *)((longlong)puVar20 + 0xaa) = uVar6;
      puVar20[0x13] = uVar15;
      *(undefined4 *)(puVar20 + 0x14) = 0x4101;
      *(undefined4 *)((longlong)puVar20 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar3 = *(undefined4 *)((longlong)&local_a0 + lVar10);
      uVar4 = *puVar1;
      *(undefined4 *)((longlong)puVar20 + 0x24) = *(undefined4 *)((longlong)&local_a8 + lVar10 + 4);
      *(undefined4 *)(puVar20 + 5) = uVar3;
      *(undefined4 *)(puVar20 + 4) = uVar4;
      *(float *)(puVar20 + 10) = fVar25;
      *(float *)((longlong)puVar20 + 0x54) = fVar27;
      *(undefined1 *)(puVar20 + 0x12) = uVar5;
      *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar2;
      *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377e47;
      FUN_145377280(puVar20 + 0xb,param_4 + 0xb);
      puVar1 = local_a0;
      uVar15 = 1;
      if (bVar13 < 2) {
        return puVar20;
      }
      puVar24 = (undefined4 *)((longlong)&local_a8 + lVar11 + lVar10 + 4);
      do {
        puVar18 = (ulonglong *)*param_1;
        local_98 = uVar15 & 0xff;
        puVar19 = puVar18 + (ulonglong)*(uint *)(param_1 + 1) * 0x18;
        for (; puVar18 != puVar19; puVar18 = puVar18 + 0x18) {
          if (*puVar18 == (uVar15 << 0x38 | *param_4)) {
            if (puVar18 != (ulonglong *)0x0) {
              if ((int)puVar20[0xd] != 0) {
                puVar18[0xb] = (ulonglong)&PTR_PTR_14c72f458;
                uVar17 = puVar20[2];
                puVar18[1] = puVar20[1];
                puVar18[2] = uVar17;
                uVar17 = puVar20[4];
                puVar18[3] = puVar20[3];
                puVar18[4] = uVar17;
                uVar17 = puVar20[6];
                puVar18[5] = puVar20[5];
                puVar18[6] = uVar17;
                uVar17 = puVar20[8];
                puVar18[7] = puVar20[7];
                puVar18[8] = uVar17;
                puVar18[9] = puVar20[9];
                puVar18[10] = puVar20[10];
                *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377f0e;
                FUN_145377300(puVar18 + 0xb,puVar20 + 0xb);
                *(int *)(puVar18 + 0xe) = (int)puVar20[0xe];
                local_a0 = (undefined4 *)puVar20[0x10];
                if ((puVar18[0x10] != 0) && ((char)puVar18[0x11] != '\0')) {
                  pcVar8 = *(code **)(*(longlong *)puVar18[0xf] + 0x10);
                  *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377f3e;
                  (*pcVar8)();
                  *(undefined1 *)(puVar18 + 0x11) = 0;
                }
                puVar18[0x10] = (ulonglong)local_a0;
                puVar18[0xf] = puVar20[0xf];
                *(char *)(puVar18 + 0x12) = (char)puVar20[0x12];
              }
              uVar17 = *param_3;
              uVar12 = param_3[2];
              uVar6 = *(undefined2 *)((longlong)param_3 + 0x12);
              uVar2 = *puVar24;
              *(ushort *)(puVar18 + 0x15) = (ushort)uVar12;
              *(undefined2 *)((longlong)puVar18 + 0xaa) = uVar6;
              *(undefined4 *)(puVar18 + 0x14) = 0x4101;
              puVar18[0x13] = uVar17 + (ushort)uVar12 * local_98 * 4;
              *(undefined4 *)((longlong)puVar18 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0xc);
              local_98 = local_98 & 0xff;
              uVar3 = puVar1[local_98 * 4 + 2];
              uVar4 = puVar1[local_98 * 4 + 1];
              *(undefined4 *)(puVar18 + 4) = puVar1[local_98 * 4];
              *(undefined4 *)((longlong)puVar18 + 0x24) = uVar4;
              *(undefined4 *)(puVar18 + 5) = uVar3;
              *(undefined1 *)(puVar18 + 0x12) = uVar5;
              *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar2;
              *(float *)(puVar18 + 10) = fVar25;
              *(float *)((longlong)puVar18 + 0x54) = fVar27;
            }
            break;
          }
        }
        puVar24 = puVar24 + 1;
        uVar23 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar23;
        if ((int)local_a8 <= (int)uVar23) {
          return puVar20;
        }
      } while( true );
    }
    if (bVar13 != 0) {
      uVar15 = 0;
      do {
        uVar17 = *param_4;
        *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377ca5;
        lVar16 = FUN_145377620(param_1,uVar17,uVar15 & 0xff,3);
        if (lVar16 != 0) {
          if ((int)param_4[0xd] != 0) {
            *(undefined8 *)(lVar16 + 0x58) = &PTR_PTR_14c72f458;
            *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377cce;
            FUN_145377300((undefined8 *)(lVar16 + 0x58),param_4 + 0xb);
          }
          uVar12 = param_3[2];
          uVar6 = *(undefined2 *)((longlong)param_3 + 0x12);
          uVar2 = *puVar24;
          uVar17 = *param_3;
          *(ushort *)(lVar16 + 0xa8) = (ushort)uVar12;
          *(undefined2 *)(lVar16 + 0xaa) = uVar6;
          *(undefined4 *)(lVar16 + 0xa0) = 0x4101;
          *(ulonglong *)(lVar16 + 0x98) = uVar17 + (ulonglong)(ushort)uVar12 * (uVar15 & 0xff) * 4;
          *(undefined4 *)(lVar16 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar17 = uVar15 & 0xff;
          uVar3 = *(undefined4 *)((longlong)&local_a0 + uVar17 * 0x10 + lVar10);
          uVar4 = *(undefined4 *)((longlong)&local_a8 + uVar17 * 0x10 + lVar10 + 4);
          *(undefined4 *)(lVar16 + 0x20) = puVar1[uVar17 * 4];
          *(undefined4 *)(lVar16 + 0x24) = uVar4;
          *(undefined4 *)(lVar16 + 0x28) = uVar3;
          *(undefined1 *)(lVar16 + 0x90) = uVar5;
          *(undefined4 *)(lVar16 + 0x2c) = uVar2;
          *(float *)(lVar16 + 0x50) = fVar25;
          *(float *)(lVar16 + 0x54) = fVar27;
        }
        uVar23 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar23;
        puVar24 = puVar24 + 1;
      } while ((int)uVar23 < (int)local_a8);
    }
    puVar20 = (ulonglong *)*param_1;
    puVar18 = puVar20 + (ulonglong)*(uint *)(param_1 + 1) * 0x18;
    for (; puVar20 != puVar18; puVar20 = puVar20 + 0x18) {
      if (*puVar20 == *param_4) goto LAB_145377d98;
    }
    puVar20 = (ulonglong *)0x0;
LAB_145377d98:
    if (param_4[0xc] == 0) {
      return puVar20;
    }
    *(undefined4 *)(param_4 + 0xd) = 0;
    pcVar8 = *(code **)(*(longlong *)param_4[0xb] + 0x10);
    *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10) = 0x145377db6;
    (*pcVar8)();
    param_4[0xc] = 0;
    *(undefined4 *)((longlong)param_4 + 0x6c) = 0;
    return puVar20;
  }
  if (puVar20 != (ulonglong *)0x0) goto LAB_14537812f;
  uVar15 = *param_4;
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    uVar23 = *(uint *)(param_1 + 3);
    uVar21 = *(uint *)((longlong)param_1 + 0x1c);
    if (uVar23 < uVar21) {
LAB_1453780f0:
      if (uVar23 < *(uint *)((longlong)param_1 + 0x1c)) {
        uVar23 = *(uint *)(param_1 + 3);
        *(uint *)(param_1 + 3) = uVar23 + 1;
        puVar20 = (ulonglong *)((ulonglong)uVar23 * 0xc0 + param_1[2]);
        if (puVar20 == (ulonglong *)0x0) {
          return (ulonglong *)0x0;
        }
        auStack_e0[0] = 0x145378117;
        FUN_145377400(puVar20);
        *puVar20 = uVar15;
        *(int *)(puVar20 + 0x16) = iVar7;
        goto LAB_14537812a;
      }
    }
    else {
      iVar22 = (uVar21 >> 1) + uVar21;
      if (uVar21 == 0) {
        iVar22 = 1;
      }
      auStack_e0[0] = 0x1453780e5;
      cVar14 = FUN_145378230(param_1 + 2,iVar22);
      if (cVar14 != '\0') goto LAB_1453780f0;
    }
    puVar20 = (ulonglong *)0x0;
  }
  else {
    auStack_e0[0] = 0x1453780bb;
    puVar20 = (ulonglong *)FUN_145377620(param_1,uVar15,0,iVar7);
  }
LAB_14537812a:
  if (puVar20 == (ulonglong *)0x0) {
    return (ulonglong *)0x0;
  }
LAB_14537812f:
  uVar15 = param_3[1];
  puVar20[0x13] = *param_3;
  puVar20[0x14] = uVar15;
  puVar20[0x15] = param_3[2];
  uVar15 = param_4[2];
  puVar20[1] = param_4[1];
  puVar20[2] = uVar15;
  uVar15 = param_4[4];
  puVar20[3] = param_4[3];
  puVar20[4] = uVar15;
  uVar15 = param_4[6];
  puVar20[5] = param_4[5];
  puVar20[6] = uVar15;
  uVar15 = param_4[8];
  puVar20[7] = param_4[7];
  puVar20[8] = uVar15;
  puVar20[9] = param_4[9];
  puVar20[10] = param_4[10];
  return puVar20;
}



// FUNCTION 1453781a0 FUN_1453781a0 body=138 status=ok
// SIG undefined FUN_1453781a0(void)

void FUN_1453781a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 1) * 0xc0 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0xc0) {
      if (*(void **)(lVar1 + 0xb8) != (void *)0x0) {
        AK::MemoryMgr::Free(0,*(void **)(lVar1 + 0xb8));
        *(undefined8 *)(lVar1 + 0xb8) = 0;
      }
      FUN_145355270();
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 145378230 FUN_145378230 body=244 status=ok
// SIG undefined FUN_145378230(void)

undefined8 FUN_145378230(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar6 * 0xc0);
  if (pvVar4 != (void *)0x0) {
    if (((void *)*param_1 != (void *)0x0) && (pvVar3 = pvVar4, (void *)*param_1 != pvVar4)) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (pvVar3 != (void *)0x0) {
          FUN_145377400(pvVar3);
        }
        FUN_1453774c0(pvVar3,(longlong)pvVar3 + (*param_1 - (longlong)pvVar4));
        lVar1 = *param_1;
        pvVar2 = *(void **)((longlong)pvVar3 + (lVar1 - (longlong)pvVar4) + 0xb8);
        if (pvVar2 != (void *)0x0) {
          AK::MemoryMgr::Free(0,pvVar2);
          *(undefined8 *)((longlong)pvVar3 + (lVar1 - (longlong)pvVar4) + 0xb8) = 0;
        }
        FUN_145355270();
        pvVar3 = (void *)((longlong)pvVar3 + 0xc0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
    *param_1 = (longlong)pvVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 145378330 FUN_145378330 body=259 status=ok
// SIG undefined FUN_145378330(void)

void FUN_145378330(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar12 = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = 0;
  cVar10 = FUN_1450cc210(param_1 + 0x58,*(undefined4 *)(param_2 + 0x68));
  if ((cVar10 != '\0') && (*(int *)(param_2 + 0x68) != 0)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x60);
      lVar3 = uVar12 * 0x18;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      lVar5 = *(longlong *)(param_2 + 0x60);
      puVar1 = (undefined4 *)(lVar3 + lVar5);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(lVar3 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(undefined8 *)(lVar3 + 0x10 + lVar4) = *(undefined8 *)(lVar3 + 0x10 + lVar5);
    } while (uVar11 < *(uint *)(param_2 + 0x68));
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  if ((*(longlong *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return;
}



// FUNCTION 145378440 FUN_145378440 body=218 status=ok
// SIG undefined FUN_145378440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145378440(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *local_res8;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  undefined8 local_28;
  float *local_20;
  
  uVar1 = (ulonglong)param_4 * 4;
  uVar9 = uVar1 + 0xf;
  if (uVar9 <= uVar1) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x145378486;
  lVar2 = -(uVar9 & 0xfffffffffffffff0);
  local_28 = param_3;
  *(longlong *)((longlong)alStack_38 + lVar2) = param_1;
  pfVar7 = (float *)((longlong)&local_28 + lVar2);
  local_20 = pfVar7;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1453784ad;
  FUN_145380490(&local_28,(ulonglong)param_4,0,param_1 + 0x10);
  *(longlong *)((longlong)alStack_38 + lVar2) = param_2;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x1453784c8;
  local_res8 = pfVar7;
  FUN_145129ce0(&local_res8,param_4,0,param_2 + 0x10);
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  pfVar8 = pfVar7 + (ulonglong)(param_4 >> 2) * 4;
  do {
    fVar3 = *pfVar7;
    pfVar4 = pfVar7 + 1;
    pfVar5 = pfVar7 + 2;
    pfVar6 = pfVar7 + 3;
    pfVar7 = pfVar7 + 4;
    fVar10 = fVar3 * fVar3 + fVar10;
    fVar11 = *pfVar4 * *pfVar4 + fVar11;
    fVar12 = *pfVar5 * *pfVar5 + fVar12;
    fVar13 = *pfVar6 * *pfVar6 + fVar13;
  } while (pfVar7 < pfVar8);
  return CONCAT44(fVar12 + fVar13 + fVar10 + fVar11,fVar13 + fVar12 + fVar11 + fVar10);
}



// FUNCTION 145378520 FUN_145378520 body=446 status=ok
// SIG undefined FUN_145378520(void)

void FUN_145378520(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((float *)(param_1 + 0x10) != (float *)0x0) {
    param_5 = -param_5;
    param_6 = -param_6;
    *(float *)(param_1 + 0x10) = param_2;
    *(float *)(param_1 + 0x14) = param_2;
    *(float *)(param_1 + 0x18) = param_2;
    *(float *)(param_1 + 0x1c) = param_2;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(float *)(param_1 + 0x60) = param_4;
    fVar4 = param_5 * param_6;
    *(undefined4 *)(param_1 + 0x40) = 0;
    fVar1 = param_5 * param_2 + param_3;
    *(float *)(param_1 + 0x50) = param_3;
    *(float *)(param_1 + 0x70) = param_5;
    *(float *)(param_1 + 0x2c) = fVar1;
    *(float *)(param_1 + 0x38) = fVar1;
    *(float *)(param_1 + 0x44) = fVar1;
    fVar2 = param_6 * param_3;
    fVar1 = fVar1 * param_5 + param_4 + param_6 * param_2;
    *(float *)(param_1 + 0x3c) = fVar1;
    *(float *)(param_1 + 0x48) = fVar1;
    *(float *)(param_1 + 0x4c) = fVar4 * param_2 + fVar1 * param_5 + fVar2;
    fVar1 = param_5 * param_3 + param_4;
    *(float *)(param_1 + 0x54) = fVar1;
    fVar1 = fVar1 * param_5 + fVar2;
    *(float *)(param_1 + 0x58) = fVar1;
    *(float *)(param_1 + 100) = param_5 * param_4;
    fVar3 = param_5 * param_4 * param_5;
    *(float *)(param_1 + 0x5c) = (fVar1 + fVar2) * param_5 + param_6 * param_4;
    fVar1 = param_5 * param_5;
    *(float *)(param_1 + 0x68) = fVar3 + param_6 * param_4;
    *(float *)(param_1 + 0x6c) = ((param_4 + param_4) * param_6 + fVar3) * param_5;
    *(float *)(param_1 + 0x74) = fVar1 + param_6;
    *(float *)(param_1 + 0x78) = (param_6 + param_6 + fVar1) * param_5;
    *(float *)(param_1 + 0x84) = fVar4;
    *(float *)(param_1 + 0x80) = param_6;
    *(float *)(param_1 + 0x8c) = ((param_6 + param_6) * param_6 + fVar4 * param_5) * param_5;
    *(float *)(param_1 + 0x7c) = (param_6 * 3.0 + fVar1) * param_5 * param_5 + param_6 * param_6;
    *(float *)(param_1 + 0x88) = fVar4 * param_5 + param_6 * param_6;
  }
  return;
}



// FUNCTION 1453786e0 FUN_1453786e0 body=1208 status=ok
// SIG undefined FUN_1453786e0(void)

void FUN_1453786e0(float *param_1,float *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  float fVar17;
  float fVar18;
  float *pfVar19;
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
  
  if (param_1 < param_2) {
    pfVar19 = param_1 + 8;
    do {
      fVar22 = pfVar19[-8];
      fVar23 = pfVar19[-7];
      fVar24 = pfVar19[-6];
      fVar25 = pfVar19[-5];
      fVar8 = pfVar19[-4];
      fVar9 = pfVar19[-3];
      fVar10 = pfVar19[-2];
      fVar11 = pfVar19[-1];
      fVar12 = *pfVar19;
      fVar13 = pfVar19[1];
      fVar14 = pfVar19[2];
      fVar15 = pfVar19[3];
      fVar16 = pfVar19[4];
      fVar17 = pfVar19[5];
      fVar18 = pfVar19[6];
      fVar34 = fVar22 * 0.0017089844 + fVar23 * 0.010986328 + fVar24 * -0.01965332 +
               fVar25 * 0.033203125 + fVar8 * -0.059448242 + fVar9 * 0.1373291 + fVar10 * 0.97216797
               + fVar11 * -0.10229492 + fVar12 * 0.047607422 + fVar13 * -0.026611328 +
               fVar14 * 0.014892578 + fVar15 * -0.008300781;
      fVar35 = fVar22 * -0.029174805 + fVar23 * 0.029296875 + fVar24 * -0.051757812 +
               fVar25 * 0.08911133 + fVar8 * -0.1665039 + fVar9 * 0.4650879 + fVar10 * 0.77978516 +
               fVar11 * -0.20031738 + fVar12 * 0.1015625 + fVar13 * -0.05822754 +
               fVar14 * 0.033081055 + fVar15 * -0.018920898;
      fVar36 = fVar22 * -0.018920898 + fVar23 * 0.033081055 + fVar24 * -0.05822754 +
               fVar25 * 0.1015625 + fVar8 * -0.20031738 + fVar9 * 0.77978516 + fVar10 * 0.4650879 +
               fVar11 * -0.1665039 + fVar12 * 0.08911133 + fVar13 * -0.051757812 +
               fVar14 * 0.029296875 + fVar15 * -0.029174805;
      fVar37 = fVar22 * -0.008300781 + fVar23 * 0.014892578 + fVar24 * -0.026611328 +
               fVar25 * 0.047607422 + fVar8 * -0.10229492 + fVar9 * 0.97216797 + fVar10 * 0.1373291
               + fVar11 * -0.059448242 + fVar12 * 0.033203125 + fVar13 * -0.01965332 +
               fVar14 * 0.010986328 + fVar15 * 0.0017089844;
      pfVar1 = pfVar19 + -4;
      fVar30 = fVar23 * 0.0017089844 + fVar24 * 0.010986328 + fVar25 * -0.01965332 +
               fVar8 * 0.033203125 + fVar9 * -0.059448242 + fVar10 * 0.1373291 + fVar11 * 0.97216797
               + fVar12 * -0.10229492 + fVar13 * 0.047607422 + fVar14 * -0.026611328 +
               fVar15 * 0.014892578 + fVar16 * -0.008300781;
      fVar31 = fVar23 * -0.029174805 + fVar24 * 0.029296875 + fVar25 * -0.051757812 +
               fVar8 * 0.08911133 + fVar9 * -0.1665039 + fVar10 * 0.4650879 + fVar11 * 0.77978516 +
               fVar12 * -0.20031738 + fVar13 * 0.1015625 + fVar14 * -0.05822754 +
               fVar15 * 0.033081055 + fVar16 * -0.018920898;
      fVar32 = fVar23 * -0.018920898 + fVar24 * 0.033081055 + fVar25 * -0.05822754 +
               fVar8 * 0.1015625 + fVar9 * -0.20031738 + fVar10 * 0.77978516 + fVar11 * 0.4650879 +
               fVar12 * -0.1665039 + fVar13 * 0.08911133 + fVar14 * -0.051757812 +
               fVar15 * 0.029296875 + fVar16 * -0.029174805;
      fVar33 = fVar23 * -0.008300781 + fVar24 * 0.014892578 + fVar25 * -0.026611328 +
               fVar8 * 0.047607422 + fVar9 * -0.10229492 + fVar10 * 0.97216797 + fVar11 * 0.1373291
               + fVar12 * -0.059448242 + fVar13 * 0.033203125 + fVar14 * -0.01965332 +
               fVar15 * 0.010986328 + fVar16 * 0.0017089844;
      fVar26 = fVar24 * 0.0017089844 + fVar25 * 0.010986328 + fVar8 * -0.01965332 +
               fVar9 * 0.033203125 + fVar10 * -0.059448242 + fVar11 * 0.1373291 +
               fVar12 * 0.97216797 + fVar13 * -0.10229492 + fVar14 * 0.047607422 +
               fVar15 * -0.026611328 + fVar16 * 0.014892578 + fVar17 * -0.008300781;
      fVar27 = fVar24 * -0.029174805 + fVar25 * 0.029296875 + fVar8 * -0.051757812 +
               fVar9 * 0.08911133 + fVar10 * -0.1665039 + fVar11 * 0.4650879 + fVar12 * 0.77978516 +
               fVar13 * -0.20031738 + fVar14 * 0.1015625 + fVar15 * -0.05822754 +
               fVar16 * 0.033081055 + fVar17 * -0.018920898;
      fVar28 = fVar24 * -0.018920898 + fVar25 * 0.033081055 + fVar8 * -0.05822754 +
               fVar9 * 0.1015625 + fVar10 * -0.20031738 + fVar11 * 0.77978516 + fVar12 * 0.4650879 +
               fVar13 * -0.1665039 + fVar14 * 0.08911133 + fVar15 * -0.051757812 +
               fVar16 * 0.029296875 + fVar17 * -0.029174805;
      fVar29 = fVar24 * -0.008300781 + fVar25 * 0.014892578 + fVar8 * -0.026611328 +
               fVar9 * 0.047607422 + fVar10 * -0.10229492 + fVar11 * 0.97216797 + fVar12 * 0.1373291
               + fVar13 * -0.059448242 + fVar14 * 0.033203125 + fVar15 * -0.01965332 +
               fVar16 * 0.010986328 + fVar17 * 0.0017089844;
      auVar6._4_4_ = fVar35;
      auVar6._0_4_ = fVar34;
      auVar6._8_4_ = fVar36;
      auVar6._12_4_ = fVar37;
      auVar20 = minps(*param_3,auVar6);
      fVar22 = fVar25 * 0.0017089844 + fVar8 * 0.010986328 + fVar9 * -0.01965332 +
               fVar10 * 0.033203125 + fVar11 * -0.059448242 + fVar12 * 0.1373291 +
               fVar13 * 0.97216797 + fVar14 * -0.10229492 + fVar15 * 0.047607422 +
               fVar16 * -0.026611328 + fVar17 * 0.014892578 + fVar18 * -0.008300781;
      fVar23 = fVar25 * -0.029174805 + fVar8 * 0.029296875 + fVar9 * -0.051757812 +
               fVar10 * 0.08911133 + fVar11 * -0.1665039 + fVar12 * 0.4650879 + fVar13 * 0.77978516
               + fVar14 * -0.20031738 + fVar15 * 0.1015625 + fVar16 * -0.05822754 +
               fVar17 * 0.033081055 + fVar18 * -0.018920898;
      fVar24 = fVar25 * -0.018920898 + fVar8 * 0.033081055 + fVar9 * -0.05822754 +
               fVar10 * 0.1015625 + fVar11 * -0.20031738 + fVar12 * 0.77978516 + fVar13 * 0.4650879
               + fVar14 * -0.1665039 + fVar15 * 0.08911133 + fVar16 * -0.051757812 +
               fVar17 * 0.029296875 + fVar18 * -0.029174805;
      fVar25 = fVar25 * -0.008300781 + fVar8 * 0.014892578 + fVar9 * -0.026611328 +
               fVar10 * 0.047607422 + fVar11 * -0.10229492 + fVar12 * 0.97216797 +
               fVar13 * 0.1373291 + fVar14 * -0.059448242 + fVar15 * 0.033203125 +
               fVar16 * -0.01965332 + fVar17 * 0.010986328 + fVar18 * 0.0017089844;
      auVar4._4_4_ = fVar31;
      auVar4._0_4_ = fVar30;
      auVar4._8_4_ = fVar32;
      auVar4._12_4_ = fVar33;
      auVar20 = minps(auVar20,auVar4);
      auVar2._4_4_ = fVar27;
      auVar2._0_4_ = fVar26;
      auVar2._8_4_ = fVar28;
      auVar2._12_4_ = fVar29;
      auVar21 = minps(auVar20,auVar2);
      auVar20._4_4_ = fVar23;
      auVar20._0_4_ = fVar22;
      auVar20._8_4_ = fVar24;
      auVar20._12_4_ = fVar25;
      auVar20 = minps(auVar21,auVar20);
      *param_3 = auVar20;
      auVar7._4_4_ = fVar35;
      auVar7._0_4_ = fVar34;
      auVar7._8_4_ = fVar36;
      auVar7._12_4_ = fVar37;
      auVar20 = maxps(*param_4,auVar7);
      auVar5._4_4_ = fVar31;
      auVar5._0_4_ = fVar30;
      auVar5._8_4_ = fVar32;
      auVar5._12_4_ = fVar33;
      auVar20 = maxps(auVar20,auVar5);
      auVar3._4_4_ = fVar27;
      auVar3._0_4_ = fVar26;
      auVar3._8_4_ = fVar28;
      auVar3._12_4_ = fVar29;
      auVar20 = maxps(auVar20,auVar3);
      auVar21._4_4_ = fVar23;
      auVar21._0_4_ = fVar22;
      auVar21._8_4_ = fVar24;
      auVar21._12_4_ = fVar25;
      auVar20 = maxps(auVar20,auVar21);
      *param_4 = auVar20;
      pfVar19 = pfVar19 + 4;
    } while (pfVar1 < param_2);
  }
  return;
}



// FUNCTION 145378ba0 FUN_145378ba0 body=1587 status=ok
// SIG undefined FUN_145378ba0(void)

undefined8 FUN_145378ba0(undefined8 *param_1,uint param_2,byte param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  __uint64 _Size;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((param_3 & 1) != 0) {
    pvVar1 = AK::MemoryMgr::Malign(5,(ulonglong)((*(byte *)(param_1 + 4) + 7 >> 3) << 5),0x10);
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar1,0,(ulonglong)*(byte *)(param_1 + 4) << 2);
    }
  }
  if ((param_3 & 4) != 0) {
    pvVar1 = AK::MemoryMgr::Malign(5,(ulonglong)((*(byte *)(param_1 + 4) + 7 >> 3) << 5),0x10);
    param_1[2] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar1,0,(ulonglong)*(byte *)(param_1 + 4) << 2);
    }
  }
  if ((param_3 & 0x10) != 0) {
    uVar8 = 1;
    if ((*(uint *)(param_1 + 4) & 0xf00) != 0x200) {
      uVar8 = *(uint *)(param_1 + 4) & 0xff;
    }
    uVar9 = (ulonglong)uVar8;
    pvVar1 = AK::MemoryMgr::Malign(5,uVar9 * 0x90,0x10);
    param_1[7] = pvVar1;
    pvVar1 = AK::MemoryMgr::Malign(5,uVar9 * 0x90,0x10);
    param_1[8] = pvVar1;
    if (param_1[7] == 0) {
      return 2;
    }
    if (pvVar1 == (void *)0x0) {
      return 2;
    }
    uVar10 = FUN_145376c80((1.0 / (float)param_2) * 9443.0);
    fVar17 = (float)((ulonglong)uVar10 >> 0x20);
    fVar14 = (float)uVar10 * 1.5803077;
    lVar4 = 0;
    fVar12 = fVar17 * 2.2589254;
    fVar17 = fVar17 * 0.25892544;
    fVar18 = 0.25892544 - fVar12;
    fVar19 = 2.2589254 - fVar17;
    fVar17 = fVar17 + 2.2589254;
    fVar11 = 1.0 / (fVar19 + fVar14);
    lVar5 = lVar4;
    uVar6 = uVar9;
    lVar7 = lVar4;
    if (uVar8 != 0) {
      do {
        puVar2 = (undefined8 *)(param_1[8] + lVar5);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0;
          puVar2[0x11] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        FUN_145378520(param_1[8] + lVar7,(fVar17 + fVar14) * 1.2589254 * fVar11,
                      (-0.65193564 - fVar12 * 2.5178509) * fVar11,
                      (fVar17 - fVar14) * 1.2589254 * fVar11,(fVar18 + fVar18) * fVar11,
                      (fVar19 - fVar14) * fVar11);
        uVar6 = uVar6 - 1;
        lVar5 = lVar5 + 0x90;
        lVar7 = lVar7 + 0x90;
      } while (uVar6 != 0);
    }
    uVar10 = FUN_145376c80((1.0 / (float)param_2) * 238.76105);
    fVar11 = (float)((ulonglong)uVar10 >> 0x20);
    fVar17 = 1.0 / ((float)uVar10 + 1.0);
    fVar12 = (fVar11 + 1.0) * 0.5 * fVar17;
    fVar14 = -((fVar11 + 1.0) * fVar17);
    if (uVar8 != 0) {
      fVar18 = ((float)uVar10 - 1.0) * fVar17;
      fVar11 = (fVar17 + fVar17) * fVar11;
      do {
        puVar2 = (undefined8 *)(param_1[7] + lVar4);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0;
          puVar2[0x11] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        pfVar3 = (float *)(param_1[7] + 0x10 + lVar4);
        if (pfVar3 != (float *)0x0) {
          *pfVar3 = fVar12;
          pfVar3[1] = fVar12;
          pfVar3[2] = fVar12;
          pfVar3[3] = fVar12;
          pfVar3[4] = 0.0;
          pfVar3[5] = 0.0;
          pfVar3[0x10] = fVar14;
          fVar15 = fVar11 * fVar12;
          pfVar3[6] = 0.0;
          fVar13 = fVar18 * fVar12;
          pfVar3[8] = 0.0;
          pfVar3[9] = 0.0;
          fVar16 = fVar11 * fVar18;
          pfVar3[0xc] = 0.0;
          fVar19 = fVar18 * fVar14;
          fVar17 = fVar15 + fVar14;
          pfVar3[0x14] = fVar12;
          pfVar3[0x15] = fVar15;
          pfVar3[0x18] = fVar11;
          pfVar3[0x1c] = fVar18;
          pfVar3[0x1d] = fVar16;
          pfVar3[7] = fVar17;
          pfVar3[10] = fVar17;
          pfVar3[0xd] = fVar17;
          fVar17 = fVar17 * fVar11 + fVar12 + fVar13;
          pfVar3[0xb] = fVar17;
          pfVar3[0xe] = fVar17;
          pfVar3[0xf] = fVar16 * fVar12 + fVar17 * fVar11 + fVar19;
          fVar17 = fVar11 * fVar14 + fVar12;
          pfVar3[0x11] = fVar17;
          fVar17 = fVar17 * fVar11 + fVar19;
          pfVar3[0x12] = fVar17;
          pfVar3[0x13] = (fVar17 + fVar19) * fVar11 + fVar13;
          pfVar3[0x17] = ((fVar12 + fVar12) * fVar18 + fVar11 * fVar15) * fVar11;
          fVar17 = fVar11 * fVar11;
          pfVar3[0x16] = fVar11 * fVar15 + fVar13;
          pfVar3[0x19] = fVar17 + fVar18;
          pfVar3[0x1a] = (fVar18 + fVar18 + fVar17) * fVar11;
          pfVar3[0x1b] = (fVar18 * 3.0 + fVar17) * fVar11 * fVar11 + fVar18 * fVar18;
          pfVar3[0x1e] = fVar11 * fVar16 + fVar18 * fVar18;
          pfVar3[0x1f] = ((fVar18 + fVar18) * fVar18 + fVar11 * fVar16) * fVar11;
        }
        lVar4 = lVar4 + 0x90;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if ((param_3 & 2) != 0) {
    pvVar1 = AK::MemoryMgr::Malign(5,(ulonglong)((*(byte *)(param_1 + 4) + 7 >> 3) << 5),0x10);
    param_1[1] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar1,0,(ulonglong)*(byte *)(param_1 + 4) << 2);
    }
    _Size = (ulonglong)(((uint)*(byte *)(param_1 + 4) + (uint)*(byte *)(param_1 + 4) * 2) * 4) << 2;
    pvVar1 = AK::MemoryMgr::Malign(5,_Size,0x10);
    param_1[5] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 2;
    }
    memset(pvVar1,0,_Size);
  }
  if (((param_3 & 0x20) != 0) && ((*(uint *)(param_1 + 4) & 0xf00) == 0x200)) {
    pvVar1 = AK::MemoryMgr::Malign
                       (5,(ulonglong)(((*(uint *)(param_1 + 4) & 0xff) + 7 >> 3) << 5),0x10);
    param_1[6] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 2;
    }
    if (*(byte *)(param_1 + 4) != 0) {
      memset(pvVar1,0,(ulonglong)*(byte *)(param_1 + 4) << 2);
    }
  }
  *(byte *)(param_1 + 9) = param_3;
  return 1;
}



// FUNCTION 1453791e0 FUN_1453791e0 body=733 status=ok
// SIG undefined FUN_1453791e0(void)

void FUN_1453791e0(longlong param_1,float param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  float *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar6;
  
  _Dst = *(float **)(param_1 + 0x30);
  if (_Dst == (float *)0x0) {
    return;
  }
  bVar2 = *(byte *)(param_3 + 1);
  uVar15 = (uint)bVar2;
  if (param_2 <= 0.0) {
    if (uVar15 == 0) {
      return;
    }
    memset(_Dst,0,(ulonglong)bVar2 << 2);
    return;
  }
  fVar16 = -2.1474836e+09;
  uVar6 = 0;
  uVar7 = 0;
  param_2 = param_2 * 1.0009619;
  fVar21 = -2.1474836e+09;
  uVar3 = *(ushort *)(param_3 + 2);
  uVar12 = uVar6;
  if (uVar3 < 4) {
    uVar8 = uVar6;
    if (uVar3 == 0) goto LAB_145379363;
  }
  else {
    pfVar10 = (float *)(*param_3 + 8);
    uVar7 = uVar6;
    do {
      fVar17 = ABS(pfVar10[-2]);
      fVar20 = fVar16;
      if (fVar16 < fVar17) {
        fVar20 = fVar17;
        fVar21 = pfVar10[-2];
      }
      uVar4 = (uint)uVar6;
      fVar18 = ABS(pfVar10[-1]);
      uVar5 = uVar4;
      if (fVar17 <= fVar16) {
        uVar5 = (uint)uVar7;
      }
      fVar17 = fVar20;
      if (fVar20 < fVar18) {
        fVar17 = fVar18;
        fVar21 = pfVar10[-1];
      }
      fVar19 = ABS(*pfVar10);
      uVar14 = uVar4 + 1;
      if (fVar18 <= fVar20) {
        uVar14 = uVar5;
      }
      fVar20 = fVar17;
      fVar18 = fVar21;
      if (fVar17 < fVar19) {
        fVar20 = fVar19;
        fVar18 = *pfVar10;
      }
      fVar21 = pfVar10[1];
      fVar16 = ABS(fVar21);
      uVar5 = uVar4 + 2;
      if (fVar19 <= fVar17) {
        uVar5 = uVar14;
      }
      uVar14 = uVar4 + 3;
      if (fVar16 <= fVar20) {
        uVar14 = uVar5;
        fVar16 = fVar20;
        fVar21 = fVar18;
      }
      uVar7 = (ulonglong)uVar14;
      uVar12 = uVar12 + 4;
      pfVar10 = pfVar10 + 4;
      uVar4 = uVar4 + 4;
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < uVar3 - 3);
    uVar8 = uVar7;
    if (uVar3 <= uVar4) goto LAB_145379363;
  }
  pfVar10 = (float *)(*param_3 + uVar12 * 4);
  uVar7 = uVar8;
  do {
    fVar20 = ABS(*pfVar10);
    uVar12 = uVar6;
    fVar17 = *pfVar10;
    if (fVar20 <= fVar16) {
      uVar12 = uVar7;
      fVar20 = fVar16;
      fVar17 = fVar21;
    }
    fVar21 = fVar17;
    fVar16 = fVar20;
    uVar7 = uVar12;
    pfVar10 = pfVar10 + 1;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < uVar3);
LAB_145379363:
  uVar5 = 1;
  *_Dst = fVar21 * param_2;
  if (1 < bVar2) {
    lVar11 = 1;
    if (3 < bVar2 - 1) {
      lVar13 = 3;
      uVar5 = (bVar2 - 5 >> 2) + 1;
      uVar12 = (ulonglong)uVar5;
      uVar5 = uVar5 * 4 + 1;
      do {
        *(float *)(*(longlong *)(param_1 + 0x30) + lVar11 * 4) =
             param_2 * *(float *)(*param_3 +
                                 ((ulonglong)*(ushort *)(param_3 + 2) * lVar11 + uVar7) * 4);
        *(float *)(*(longlong *)(param_1 + 0x30) + 4 + lVar11 * 4) =
             param_2 * *(float *)(*param_3 +
                                 ((lVar13 + -1) * (ulonglong)*(ushort *)(param_3 + 2) + uVar7) * 4);
        lVar9 = (ulonglong)*(ushort *)(param_3 + 2) * lVar13;
        lVar1 = lVar13 + 1;
        lVar13 = lVar13 + 4;
        *(float *)(*(longlong *)(param_1 + 0x30) + 8 + lVar11 * 4) =
             param_2 * *(float *)(*param_3 + (lVar9 + uVar7) * 4);
        *(float *)(*(longlong *)(param_1 + 0x30) + 0xc + lVar11 * 4) =
             param_2 * *(float *)(*param_3 +
                                 (lVar1 * (ulonglong)*(ushort *)(param_3 + 2) + uVar7) * 4);
        lVar11 = lVar11 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (uVar15 <= uVar5) {
        return;
      }
    }
    uVar12 = (ulonglong)(uVar15 - uVar5);
    do {
      *(float *)(*(longlong *)(param_1 + 0x30) + lVar11 * 4) =
           param_2 * *(float *)(*param_3 +
                               ((ulonglong)*(ushort *)(param_3 + 2) * lVar11 + uVar7) * 4);
      lVar11 = lVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



// FUNCTION 1453794c0 FUN_1453794c0 body=417 status=ok
// SIG undefined FUN_1453794c0(void)

void FUN_1453794c0(longlong param_1,float param_2,longlong *param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  uVar9 = *(uint *)(param_3 + 1);
  uVar1 = *(ushort *)(param_3 + 2);
  fVar11 = 0.0;
  if ((uVar9 & 0xf00) == 0x100) {
    uVar6 = 1;
    uVar9 = uVar9 >> 0xc & 0xffff7;
    if (uVar9 != 0) {
      do {
        if ((uVar6 & uVar9) != 0) {
          if (uVar6 == 8) {
            uVar3 = uVar9;
            bVar2 = 0;
            do {
              bVar5 = bVar2;
              uVar3 = uVar3 & uVar3 - 1;
              bVar2 = bVar5 + 1;
            } while (uVar3 != 0);
          }
          else {
            bVar5 = 0;
            for (uVar3 = uVar6 - 1 & uVar9; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
              bVar5 = bVar5 + 1;
            }
          }
          lVar4 = (ulonglong)bVar5 * 0x90;
          fVar10 = (float)FUN_145378440(lVar4 + *(longlong *)(param_1 + 0x38),
                                        *(longlong *)(param_1 + 0x40) + lVar4,
                                        *param_3 +
                                        (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)bVar5 * 4,
                                        uVar1);
          if ((uVar6 & 0x600) != 0) {
            fVar10 = fVar10 * 1.4125375;
          }
          fVar11 = fVar11 + fVar10;
        }
        uVar6 = uVar6 * 2;
      } while (uVar6 <= uVar9);
    }
  }
  else {
    if ((uVar9 & 0xf00) == 0x200) {
      uVar7 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar9 & 0xff);
      if ((char)uVar9 == '\0') goto LAB_14537961f;
    }
    lVar8 = 0;
    lVar4 = lVar8;
    do {
      fVar10 = (float)FUN_145378440(*(longlong *)(param_1 + 0x38) + lVar4,
                                    *(longlong *)(param_1 + 0x40) + lVar4,
                                    *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * lVar8 * 4,uVar1
                                   );
      lVar8 = lVar8 + 1;
      fVar11 = fVar11 + fVar10;
      lVar4 = lVar4 + 0x90;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
LAB_14537961f:
  *(float *)(param_1 + 0x18) = (param_2 * param_2 * 1.0019248 * fVar11) / (float)uVar1;
  return;
}



// FUNCTION 145379670 FUN_145379670 body=205 status=ok
// SIG undefined FUN_145379670(void)

undefined8 * FUN_145379670(undefined8 *param_1,uint param_2)

{
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[1]);
    param_1[1] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[6]);
    param_1[6] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[5]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[7]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[8]);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145379740 FUN_145379740 body=1121 status=ok
// SIG undefined FUN_145379740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145379740(float param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float *pfVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  float *pfVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint local_res18;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  auVar12 = _DAT_149d43710;
  auVar11 = _DAT_149d43700;
  if (*(short *)((longlong)param_2 + 0x12) == 0) {
    param_1 = 0.0;
  }
  bVar2 = *(byte *)(param_3 + 9);
  local_res18 = 0;
  if ((bVar2 & 1) != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    if (param_1 <= 0.0) {
      if (bVar3 != 0) {
        memset((void *)*param_3,0,(ulonglong)bVar3 << 2);
      }
    }
    else {
      uVar14 = 0;
      do {
        pauVar15 = (undefined1 (*) [16])(*param_2 + uVar14 * *(ushort *)(param_2 + 2) * 4);
        pauVar19 = pauVar15 + (*(ushort *)(param_2 + 2) >> 2);
        auVar26 = auVar11;
        auVar27 = auVar12;
        do {
          auVar26 = minps(auVar26,*pauVar15);
          auVar27 = maxps(auVar27,*pauVar15);
          pauVar15 = pauVar15 + 1;
        } while (pauVar15 < pauVar19);
        fVar22 = auVar26._0_4_;
        if (auVar26._4_4_ <= auVar26._0_4_) {
          fVar22 = auVar26._4_4_;
        }
        fVar23 = auVar27._8_4_;
        fVar24 = auVar27._12_4_;
        uVar20 = (int)uVar14 + 1;
        if (auVar26._8_4_ <= fVar22) {
          fVar22 = auVar26._8_4_;
        }
        if (auVar26._12_4_ <= fVar22) {
          fVar22 = auVar26._12_4_;
        }
        if (auVar27._0_4_ <= auVar27._4_4_) {
          auVar27._4_12_ = auVar27._4_12_;
          auVar27._0_4_ = auVar27._4_4_;
        }
        if (auVar27._0_4_ <= fVar23) {
          auVar27._0_4_ = fVar23;
        }
        if (auVar27._0_4_ <= fVar24) {
          auVar27._0_4_ = fVar24;
        }
        fVar23 = ABS(fVar22);
        if (ABS(fVar22) <= auVar27._0_4_) {
          fVar23 = auVar27._0_4_;
        }
        *(float *)(*param_3 + uVar14 * 4) = fVar23 * param_1 * 1.0009619;
        uVar14 = (ulonglong)uVar20;
      } while (uVar20 < bVar3);
    }
  }
  if ((bVar2 & 4) != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    if (param_1 <= 0.0) {
      if (bVar3 != 0) {
        memset((void *)param_3[2],0,(ulonglong)bVar3 << 2);
      }
    }
    else {
      uVar14 = 0;
      do {
        uVar4 = *(ushort *)(param_2 + 2);
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        pfVar16 = (float *)(*param_2 + uVar4 * uVar14 * 4);
        pfVar13 = pfVar16 + (ulonglong)(uVar4 >> 2) * 4;
        do {
          fVar6 = *pfVar16;
          pfVar7 = pfVar16 + 1;
          pfVar8 = pfVar16 + 2;
          pfVar9 = pfVar16 + 3;
          pfVar16 = pfVar16 + 4;
          fVar22 = fVar6 * fVar6 + fVar22;
          fVar23 = *pfVar7 * *pfVar7 + fVar23;
          fVar24 = *pfVar8 * *pfVar8 + fVar24;
          fVar25 = *pfVar9 * *pfVar9 + fVar25;
        } while (pfVar16 < pfVar13);
        uVar20 = (int)uVar14 + 1;
        *(float *)(param_3[2] + uVar14 * 4) =
             SQRT((fVar25 + fVar24 + fVar23 + fVar22) / (float)uVar4) * param_1 * 1.0009619;
        uVar14 = (ulonglong)uVar20;
      } while (uVar20 < bVar3);
    }
  }
  if ((bVar2 & 2) != 0) {
    bVar3 = *(byte *)(param_2 + 1);
    if (param_1 <= 0.0) {
      if (bVar3 != 0) {
        memset((void *)param_3[1],0,(ulonglong)bVar3 << 2);
      }
    }
    else {
      do {
        uVar4 = *(ushort *)(param_2 + 2);
        local_108 = 0x4f0000004f000000;
        uStack_100 = 0x4f0000004f000000;
        local_f8 = 0xcf000000cf000000;
        uStack_f0 = 0xcf000000cf000000;
        puVar1 = (undefined8 *)(*param_2 + (ulonglong)local_res18 * (ulonglong)uVar4 * 4);
        uVar21 = (ulonglong)local_res18;
        lVar5 = param_3[5];
        uVar14 = (ulonglong)(local_res18 * 0xc);
        uVar18 = (ulonglong)(local_res18 * 0xc);
        puVar17 = (undefined8 *)(lVar5 + uVar14 * 4);
        local_e8 = *puVar17;
        uStack_e0 = puVar17[1];
        puVar17 = (undefined8 *)(lVar5 + 0x10 + uVar14 * 4);
        local_d8 = *puVar17;
        uStack_d0 = puVar17[1];
        puVar17 = (undefined8 *)(lVar5 + 0x20 + uVar14 * 4);
        local_c8 = *puVar17;
        uStack_c0 = puVar17[1];
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        local_a8 = *(undefined4 *)(puVar1 + 2);
        uStack_a4 = *(undefined4 *)((longlong)puVar1 + 0x14);
        uStack_a0 = *(undefined4 *)(puVar1 + 3);
        uStack_9c = *(undefined4 *)((longlong)puVar1 + 0x1c);
        local_98 = *(undefined4 *)(puVar1 + 4);
        uStack_94 = *(undefined4 *)((longlong)puVar1 + 0x24);
        uStack_90 = *(undefined4 *)(puVar1 + 5);
        uStack_8c = *(undefined4 *)((longlong)puVar1 + 0x2c);
        FUN_1453786e0(&local_e8,&local_b8,&local_108,&local_f8);
        puVar17 = puVar1 + ((ulonglong)(uVar4 >> 2) - 3) * 2;
        FUN_1453786e0(puVar1,puVar17,&local_108,&local_f8);
        uVar10 = puVar17[1];
        puVar1 = (undefined8 *)(lVar5 + uVar18 * 4);
        *puVar1 = *puVar17;
        puVar1[1] = uVar10;
        uVar10 = puVar17[3];
        puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar18 * 4);
        *puVar1 = puVar17[2];
        puVar1[1] = uVar10;
        uVar10 = puVar17[5];
        fVar22 = (float)local_108;
        if (local_108._4_4_ <= (float)local_108) {
          fVar22 = local_108._4_4_;
        }
        puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar18 * 4);
        *puVar1 = puVar17[4];
        puVar1[1] = uVar10;
        local_res18 = local_res18 + 1;
        if ((float)uStack_100 <= fVar22) {
          fVar22 = (float)uStack_100;
        }
        fVar23 = (float)local_f8;
        if ((float)local_f8 <= local_f8._4_4_) {
          fVar23 = local_f8._4_4_;
        }
        if (uStack_100._4_4_ <= fVar22) {
          fVar22 = uStack_100._4_4_;
        }
        if (fVar23 <= (float)uStack_f0) {
          fVar23 = (float)uStack_f0;
        }
        if (fVar23 <= uStack_f0._4_4_) {
          fVar23 = uStack_f0._4_4_;
        }
        fVar24 = ABS(fVar22);
        if (ABS(fVar22) <= fVar23) {
          fVar24 = fVar23;
        }
        *(float *)(param_3[1] + uVar21 * 4) = fVar24 * param_1 * 1.0009619;
      } while (local_res18 < bVar3);
    }
  }
  if ((bVar2 & 0x10) != 0) {
    FUN_1453794c0(param_3,param_1,param_2);
  }
  if ((bVar2 & 0x20) != 0) {
    FUN_1453791e0(param_3,param_1,param_2);
  }
  return;
}



// FUNCTION 145379bb0 FUN_145379bb0 body=288 status=ok
// SIG undefined FUN_145379bb0(void)

void * FUN_145379bb0(char *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    if (*param_1 == *(char *)((longlong)pvVar3 + 0x48)) {
      uVar1 = *(uint *)(param_1 + 4);
      uVar2 = *(uint *)((longlong)pvVar3 + 0x20);
      if ((((char)uVar1 == (char)uVar2) && (((uVar1 ^ uVar2) & 0xf00) == 0)) &&
         (((uVar1 ^ uVar2) & 0xfffff000) == 0)) {
        return pvVar3;
      }
    }
    FUN_145379670(pvVar3,0);
    AK::MemoryMgr::Free(0xe,pvVar3);
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  if (*param_1 != '\0') {
    puVar5 = AK::MemoryMgr::Malloc(0xe,0x50);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_1 + 4);
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      *(undefined1 *)(puVar5 + 9) = 0;
      *puVar5 = 0;
      puVar5[2] = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 3) = 0;
      *(undefined8 **)(param_1 + 8) = puVar5;
      iVar4 = FUN_145378ba0(puVar5,DAT_14c72f42c,*param_1);
      if (iVar4 == 1) goto LAB_145379cbc;
      pvVar3 = *(void **)(param_1 + 8);
      if (pvVar3 != (void *)0x0) {
        FUN_145379670(pvVar3,0);
        AK::MemoryMgr::Free(0xe,pvVar3);
      }
    }
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return (void *)0x0;
  }
LAB_145379cbc:
  return *(void **)(param_1 + 8);
}



// FUNCTION 145379cd0 FUN_145379cd0 body=68 status=ok
// SIG undefined FUN_145379cd0(void)

void FUN_145379cd0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  lVar1 = FUN_1450a1a60(param_1 + 0x70);
  if (lVar1 != 0) {
    FUN_1450a0140(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 145379d20 FUN_145379d20 body=74 status=ok
// SIG undefined FUN_145379d20(void)

undefined8 * FUN_145379d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d43360;
  FUN_145376d90(param_1 + 0xe);
  FUN_145389220(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 145379d70 FUN_145379d70 body=534 status=ok
// SIG undefined FUN_145379d70(void)

undefined8 * FUN_145379d70(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xc5800000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf9 | 1;
  *param_1 = &PTR_FUN_149d43360;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xd] = 0;
  FUN_145376cd0(param_1 + 0xe);
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0x80;
  *(byte *)((longlong)param_1 + 0x99) = *(byte *)((longlong)param_1 + 0x99) & 0xe0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *param_1 = &PTR_FUN_149d43440;
  param_1[0x14] = &PTR_LAB_149d434b8;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x1000000;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x1000000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x102) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0x1000000;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x132) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x1000000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x162) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(uint *)(param_1 + 0x2d) = *(uint *)(param_1 + 0x2d) & 0xff;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) & 0xff;
  *(byte *)((longlong)param_1 + 0x1b4) = *(byte *)((longlong)param_1 + 0x1b4) & 0xfc;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x20100ff;
  *(undefined1 *)((longlong)param_1 + 0x184) = 3;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 145379f90 FUN_145379f90 body=560 status=ok
// SIG undefined FUN_145379f90(void)

void FUN_145379f90(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_149d43440;
  param_1[0x14] = &PTR_LAB_149d434b8;
  FUN_14537ab90(param_1,0);
  *(byte *)((longlong)param_1 + 0x1b4) = *(byte *)((longlong)param_1 + 0x1b4) & 0xfc;
  FUN_14537afd0(param_1);
  puVar1 = (undefined8 *)param_1[0x33];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    AK::MemoryMgr::Free(5,puVar1);
    param_1[0x33] = 0;
  }
  FUN_14538bc00();
  pvVar2 = (void *)param_1[0x32];
  if (pvVar2 != (void *)0x0) {
    FUN_145379670(pvVar2,0);
    AK::MemoryMgr::Free(0xe,pvVar2);
    param_1[0x32] = 0;
  }
  if ((void *)param_1[0x27] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x27]);
    param_1[0x27] = 0;
    *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  }
  if (param_1[0x29] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[0x29]);
    param_1[0x29] = 0;
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  }
  if ((void *)param_1[0x21] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x21]);
    param_1[0x21] = 0;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  if (param_1[0x23] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[0x23]);
    param_1[0x23] = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  if ((void *)param_1[0x1b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x1b]);
    param_1[0x1b] = 0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  if (param_1[0x1d] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[0x1d]);
    param_1[0x1d] = 0;
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x15]);
    param_1[0x15] = 0;
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  if (param_1[0x17] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[0x17]);
    param_1[0x17] = 0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  param_1[0x14] = &PTR_FUN_149c26410;
  *param_1 = &PTR_FUN_149d43360;
  FUN_145376d90(param_1 + 0xe);
  FUN_145389220(param_1);
  return;
}



// FUNCTION 14537a1c0 FUN_14537a1c0 body=216 status=ok
// SIG undefined FUN_14537a1c0(void)

void FUN_14537a1c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)*param_1);
  }
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar1 = *(undefined2 *)((longlong)param_2 + 0x12);
  uVar2 = *(undefined2 *)(param_2 + 2);
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 2) = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(param_2 + 1) = 0;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) & 0xff;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  pvVar4 = (void *)param_1[3];
  if (pvVar4 != (void *)0x0) {
    FUN_145355270();
    AK::MemoryMgr::Free(0,pvVar4);
  }
  param_1[3] = param_2[3];
  param_2[3] = 0;
  pvVar4 = (void *)param_1[5];
  if (pvVar4 != (void *)0x0) {
    FUN_145379670(pvVar4,0);
    AK::MemoryMgr::Free(0xe,pvVar4);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}



// FUNCTION 14537a2a0 FUN_14537a2a0 body=367 status=ok
// SIG undefined FUN_14537a2a0(void)

undefined8
FUN_14537a2a0(undefined8 *param_1,undefined8 param_2,uint param_3,ushort param_4,undefined4 param_5)

{
  void *_Dst;
  undefined8 *puVar1;
  uint uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x11;
  *param_1 = 0;
  uVar2 = (param_3 & 0xff) * (uint)param_4 * 4;
  _Dst = AK::MemoryMgr::Malign(5,(ulonglong)uVar2,0x10);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,(ulonglong)uVar2);
    *param_1 = _Dst;
    *(ushort *)(param_1 + 2) = param_4;
    *(undefined2 *)((longlong)param_1 + 0x12) = 0;
    *(uint *)(param_1 + 1) = param_3;
    puVar1 = AK::MemoryMgr::Malloc(0,0x98);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0xffffffffffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
      *(undefined4 *)(puVar1 + 6) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffff;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      puVar1[1] = 0;
      puVar1[2] = 0x3f800000;
      puVar1[3] = 0x3f800000;
      puVar1[7] = 0x3f800000;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0x3f800000;
      *(undefined2 *)((longlong)puVar1 + 0x4c) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x4e) = 1;
      *(undefined4 *)(puVar1 + 10) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x54) = 0x3f800000;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0x11) = 0;
      *(undefined1 *)(puVar1 + 0x12) = 0x32;
      param_1[3] = puVar1;
      *puVar1 = param_2;
      *(undefined ***)(param_1[3] + 0x58) = &PTR_PTR_14c72f458;
      *(undefined4 *)(param_1[3] + 0x70) = param_5;
      return 1;
    }
    param_1[3] = 0;
  }
  return 0x34;
}



// FUNCTION 14537a410 FUN_14537a410 body=192 status=ok
// SIG undefined FUN_14537a410(void)

void FUN_14537a410(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  longlong lVar2;
  
  if ((param_2 & 0xffffffff) * 0x30 + *param_1 <
      (ulonglong)*(uint *)(param_1 + 1) * 0x30 + -0x30 + *param_1) {
    FUN_14537a1c0();
  }
  lVar2 = (ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1;
  if (*(void **)(lVar2 + -0x30) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(lVar2 + -0x30));
    *(undefined8 *)(lVar2 + -0x30) = 0;
    *(undefined2 *)(lVar2 + -0x1e) = 0;
  }
  pvVar1 = *(void **)(lVar2 + -0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_145355270();
    AK::MemoryMgr::Free(0,pvVar1);
  }
  pvVar1 = *(void **)(lVar2 + -8);
  if (pvVar1 != (void *)0x0) {
    FUN_145379670(pvVar1,0);
    AK::MemoryMgr::Free(0xe,pvVar1);
    *(undefined8 *)(lVar2 + -8) = 0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 14537a4d0 FUN_14537a4d0 body=189 status=ok
// SIG undefined FUN_14537a4d0(void)

void FUN_14537a4d0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 6;
  if (puVar2 == puVar3) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        AK::MemoryMgr::Free(5,(void *)*puVar2);
        *puVar2 = 0;
        *(undefined2 *)((longlong)puVar2 + 0x12) = 0;
      }
      pvVar1 = (void *)puVar2[3];
      if (pvVar1 != (void *)0x0) {
        FUN_145355270();
        AK::MemoryMgr::Free(0,pvVar1);
      }
      pvVar1 = (void *)puVar2[5];
      if (pvVar1 != (void *)0x0) {
        FUN_145379670(pvVar1,0);
        AK::MemoryMgr::Free(0xe,pvVar1);
        puVar2[5] = 0;
      }
      puVar2 = puVar2 + 6;
    } while (puVar2 != puVar3);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14537a590 FUN_14537a590 body=358 status=ok
// SIG undefined FUN_14537a590(void)

undefined8 FUN_14537a590(longlong *param_1,int param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar7 * 0x30);
  if (pvVar3 != (void *)0x0) {
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar5 != 0) {
        puVar4 = (uint *)((longlong)pvVar3 + 0x24);
        do {
          puVar1 = puVar4 + -9;
          if (puVar1 != (uint *)0x0) {
            *(undefined1 *)(puVar4 + -7) = 0;
            puVar4[-7] = puVar4[-7] & 0xff;
            *(undefined1 *)puVar4 = 0;
            *puVar4 = *puVar4 & 0xff;
            puVar1[0] = 0;
            puVar1[1] = 0;
            puVar4[-6] = 0x2b;
            puVar4[-5] = 0;
            puVar4[-3] = 0;
            puVar4[-2] = 0;
            *(undefined1 *)(puVar4 + -1) = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
          }
          FUN_14537a1c0(puVar1,(undefined1 *)
                               ((longlong)puVar4 + *param_1 + (-0x24 - (longlong)pvVar3)));
          puVar6 = (undefined8 *)((longlong)puVar4 + *param_1 + (-0x24 - (longlong)pvVar3));
          if ((void *)*puVar6 != (void *)0x0) {
            AK::MemoryMgr::Free(5,(void *)*puVar6);
            *puVar6 = 0;
            *(undefined2 *)((longlong)puVar6 + 0x12) = 0;
          }
          pvVar2 = (void *)puVar6[3];
          if (pvVar2 != (void *)0x0) {
            FUN_145355270();
            AK::MemoryMgr::Free(0,pvVar2);
          }
          pvVar2 = (void *)puVar6[5];
          if (pvVar2 != (void *)0x0) {
            FUN_145379670(pvVar2,0);
            AK::MemoryMgr::Free(0xe,pvVar2);
            puVar6[5] = 0;
          }
          puVar4 = puVar4 + 0xc;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
    *param_1 = (longlong)pvVar3;
    *(uint *)((longlong)param_1 + 0xc) = uVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14537a700 FUN_14537a700 body=717 status=ok
// SIG undefined FUN_14537a700(void)

void FUN_14537a700(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  undefined1 local_res18;
  undefined1 local_58 [24];
  
  cVar4 = FUN_1450a8250();
  if (cVar4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  }
  FUN_14537b040(param_1);
  uVar1 = *(ushort *)(param_1 + 0x1b2);
  plVar11 = (longlong *)(param_1 + 0x170);
  uVar2 = *(ushort *)(param_1 + 0x1b0);
  bVar12 = 0xff;
  bVar3 = false;
  local_res18 = (*(uint *)(param_1 + 0x168) & 0xf00) == 0x300;
  bVar9 = 0;
  do {
    if ((bVar3) || ((param_2 >> (bVar9 & 0x1f) & 1) != 0)) {
      if ((*(char *)(param_1 + 0xcf + (ulonglong)bVar9 * 0x30) == '\0') || (bVar3)) {
LAB_14537a80d:
        if (-1 < (char)bVar9) {
          FUN_14537ac90(param_1,(int)(char)bVar9,bVar12);
        }
        break;
      }
      lVar10 = (ulonglong)bVar9 * 0x30;
      FUN_14537d120(param_1 + 0xa8 + lVar10);
      lVar7 = *plVar11;
      iVar6 = 1;
      if (lVar7 != (ulonglong)*(uint *)(plVar11 + 1) * 0x30 + lVar7) {
        do {
          if (iVar6 != 1) goto LAB_14537a93c;
          iVar6 = FUN_14537c630(param_1 + 0xa8 + lVar10,lVar7,local_58,local_res18,(uint)bVar9,
                                param_1,0);
          lVar7 = lVar7 + 0x30;
        } while (lVar7 != (ulonglong)*(uint *)(plVar11 + 1) * 0x30 + *plVar11);
        if (iVar6 != 1) {
LAB_14537a93c:
          FUN_14537d120((ulonglong)bVar9 * 0x30 + 0xa8 + param_1);
        }
        if (iVar6 == 4) goto LAB_14537a80d;
      }
    }
    else {
      uVar8 = (ulonglong)bVar9;
      if ((*(char *)(param_1 + 0xcf + uVar8 * 0x30) == '\0') &&
         ((lVar7 = param_1 + uVar8 * 0x30, 0 < (short)(uVar1 ^ uVar2) ||
          (0 < (short)(*(ushort *)(param_1 + 0xd2 + uVar8 * 0x30) ^ *(ushort *)(lVar7 + 0xd4)))))) {
        lVar10 = (longlong)(char)bVar12;
        uVar5 = (uint)*(char *)(lVar10 + 0x181 + param_1);
        if ((*(short *)(lVar7 + 0xd4) == 0) && (*(short *)(param_1 + 0x1b0) == 0)) {
          if ((int)(uint)bVar9 < (int)uVar5) {
            *(byte *)(lVar10 + 0x181 + param_1) = bVar12;
          }
          if (*(char *)(param_1 + 0xcc + uVar8 * 0x30) == '\0') goto LAB_14537a80d;
        }
        else {
          if (uVar5 == bVar9) {
            *(byte *)(lVar10 + 0x181 + param_1) = bVar12;
          }
          *(byte *)((longlong)(char)bVar9 + 0x181 + param_1) = bVar9;
        }
        bVar3 = true;
      }
    }
    lVar7 = (ulonglong)bVar9 * 0x30;
    if (((*(char *)(lVar7 + 0xcf + param_1) == '\0') && (*(short *)(lVar7 + 0xd4 + param_1) == 0))
       && (*(short *)(param_1 + 0x1b0) == 0)) {
      local_res18 = *(undefined1 *)(lVar7 + 0xcd + param_1);
      plVar11 = (longlong *)(param_1 + 0xb8 + lVar7);
      bVar12 = bVar9;
    }
    bVar9 = bVar9 + 1;
  } while (bVar9 < 4);
  *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) & 0xfd | 1;
  FUN_14537b0b0(param_1);
  cVar4 = FUN_1450a8250();
  if (cVar4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  }
  return;
}



// FUNCTION 14537a9d0 FUN_14537a9d0 body=403 status=ok
// SIG undefined FUN_14537a9d0(void)

void FUN_14537a9d0(longlong param_1,uint param_2,byte param_3)

{
  ushort uVar1;
  
  if ((param_3 & 1) != 0) {
    if ((*(short *)(param_1 + 0xd4) != 0) != SUB41(param_2 & 1,0)) {
      *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
    }
    *(short *)(param_1 + 0xd4) = (short)(param_2 & 1);
    if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
    }
  }
  if ((param_3 & 2) != 0) {
    if ((*(short *)(param_1 + 0x104) != 0) != ((param_2 >> 1 & 1) != 0)) {
      *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
    }
    *(ushort *)(param_1 + 0x104) = (ushort)((param_2 >> 1 & 1) != 0);
    if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
    }
  }
  if ((param_3 & 4) != 0) {
    if ((*(short *)(param_1 + 0x134) != 0) != ((param_2 >> 2 & 1) != 0)) {
      *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
    }
    *(ushort *)(param_1 + 0x134) = (ushort)((param_2 >> 2 & 1) != 0);
    if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
    }
  }
  if ((param_3 & 8) != 0) {
    if ((*(short *)(param_1 + 0x164) != 0) != ((param_2 >> 3 & 1) != 0)) {
      *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
    }
    *(ushort *)(param_1 + 0x164) = (ushort)((param_2 >> 3 & 1) != 0);
    if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
    }
  }
  if ((param_3 & 0x10) != 0) {
    uVar1 = (ushort)(param_2 >> 4) & 1;
    if ((*(short *)(param_1 + 0x1b0) != 0) != SUB21(uVar1,0)) {
      *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
    }
    *(ushort *)(param_1 + 0x1b0) = uVar1;
    if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
    }
  }
  return;
}



// FUNCTION 14537ab70 FUN_14537ab70 body=29 status=ok
// SIG undefined FUN_14537ab70(void)

void FUN_14537ab70(longlong param_1)

{
  FUN_14537ab90(param_1,0);
  *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) & 0xfc;
  return;
}



// FUNCTION 14537ab90 FUN_14537ab90 body=253 status=ok
// SIG undefined FUN_14537ab90(void)

void FUN_14537ab90(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_2;
  uVar3 = 0;
  uVar9 = 0xff;
  if (0 < (int)param_2) {
    do {
      uVar4 = uVar3 & 0xff;
      if (((*(char *)(param_1 + 0xcf + uVar4 * 0x30) == '\0') &&
          (*(short *)(param_1 + 0xd4 + uVar4 * 0x30) == 0)) && (*(short *)(param_1 + 0x1b0) == 0)) {
        uVar9 = uVar4;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_2);
  }
  bVar6 = (byte)param_2;
  while ((char)bVar6 < '\x04') {
    bVar5 = (byte)uVar7;
    if (((*(char *)(param_1 + 0xcf + (uVar7 & 0xff) * 0x30) == '\0') &&
        (*(short *)(param_1 + 0xd4 + (uVar7 & 0xff) * 0x30) == 0)) &&
       (*(short *)(param_1 + 0x1b0) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    bVar8 = (byte)uVar9;
    *(byte *)((longlong)(char)bVar8 + 0x181 + param_1) = bVar8;
    FUN_14537d120((longlong)(char)bVar5 * 0x30 + 0xa8 + param_1);
    bVar6 = bVar5 + 1;
    uVar7 = (ulonglong)bVar6;
    if (!bVar1) {
      bVar5 = bVar8;
    }
    uVar9 = (ulonglong)bVar5;
  }
  return;
}



// FUNCTION 14537ac90 FUN_14537ac90 body=301 status=ok
// SIG undefined FUN_14537ac90(void)

void FUN_14537ac90(longlong param_1,uint param_2,char param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 uVar7;
  
  if (param_2 < 4) {
    if (param_3 == -1) {
      plVar6 = (longlong *)(param_1 + 0x170);
      uVar7 = (*(uint *)(param_1 + 0x168) & 0xf00) == 0x300;
    }
    else {
      lVar3 = (longlong)param_3 * 0x30;
      plVar6 = (longlong *)(param_1 + 0xb8 + lVar3);
      uVar7 = *(undefined1 *)(lVar3 + 0xcd + param_1);
    }
    uVar2 = (ulonglong)(char)param_2;
    *(char *)((longlong)param_3 + 0x181 + param_1) = param_3;
    if ((char)param_2 < '\x04') {
      pcVar4 = (char *)(param_1 + 0x181 + uVar2);
      puVar5 = (undefined1 *)(uVar2 * 0x30 + 0xd0 + param_1);
      do {
        *pcVar4 = (char)uVar2;
        FUN_14537d120(puVar5 + -0x28);
        bVar1 = (char)uVar2 + 1;
        uVar2 = (ulonglong)bVar1;
        *puVar5 = 0;
        pcVar4 = pcVar4 + 1;
        puVar5 = puVar5 + 0x30;
      } while ((char)bVar1 < '\x04');
    }
    lVar3 = *plVar6;
    if (lVar3 != (ulonglong)*(uint *)(plVar6 + 1) * 0x30 + lVar3) {
      do {
        FUN_14537be40(param_1,param_3,param_2 & 0xff,uVar7,lVar3);
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != (ulonglong)*(uint *)(plVar6 + 1) * 0x30 + *plVar6);
    }
  }
  return;
}



// FUNCTION 14537adc0 FUN_14537adc0 body=520 status=ok
// SIG undefined FUN_14537adc0(void)

void FUN_14537adc0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  longlong *local_18 [2];
  
  FUN_14537afd0();
  local_18[0] = (longlong *)0x0;
  FUN_1453771b0(param_1 + 0x70,local_18);
  if ((local_18[0] != (longlong *)0x0) &&
     (*(int *)(*(longlong *)(param_1 + 0x198) + 0x90) = (int)local_18[0][7], local_18[0][8] != 0)) {
    local_28[0] = 0;
    local_24 = 0;
    local_20 = 1;
    local_1c = 0x100;
    local_1a = 0;
    lVar5 = FUN_14536b850(*(undefined8 *)(param_1 + 0x198),local_18[0],
                          *(longlong *)(param_1 + 8) + 8,*(longlong *)(param_1 + 8) + 0x78,1);
    if (lVar5 != 0) {
      iVar4 = FUN_145089070(*(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x90),
                            *(longlong *)(param_1 + 0x198) + 0x88,local_28);
      if (iVar4 == 1) {
        iVar4 = FUN_1450894a0(*(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x90),6,local_28);
        if (iVar4 == 0) {
          local_34 = *(uint *)(param_1 + 0x168);
          local_38 = DAT_14c72f42c;
          local_30 = (local_34 & 0xff) << 8 | local_30 & 0xfffd0020 | 0x50020;
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88);
          lVar5 = param_1 + 0xa0;
          if (param_1 == 0) {
            lVar5 = 0;
          }
          iVar4 = (**(code **)(*plVar3 + 0x30))
                            (plVar3,&PTR_PTR_14c72f458,lVar5,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x50),&local_38);
          if ((iVar4 == 1) &&
             (iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88) + 0x10))()
             , iVar4 == 1)) goto LAB_14537af9c;
        }
        else if (iVar4 == 0x2c) {
          if (((*(uint *)(*(longlong *)(param_1 + 0x198) + 0x90) & 0xfff0) == 0x10a0) &&
             (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x198) + 0x88),
             puVar2 != (undefined8 *)0x0)) {
            (**(code **)*puVar2)(puVar2,0);
            (**(code **)(PTR_PTR_14c72f458 + 0x10))(&PTR_PTR_14c72f458,puVar2);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x88) = 0;
        }
      }
    }
    FUN_14537afd0(param_1);
  }
LAB_14537af9c:
  if (local_18[0] != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_18[0] + 0x14);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*local_18[0] + 0x18))(local_18[0]);
    }
  }
  return;
}



// FUNCTION 14537afd0 FUN_14537afd0 body=100 status=ok
// SIG undefined FUN_14537afd0(void)

void FUN_14537afd0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_14c72f458);
      *(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x88) = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x20))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x90) = 0xffffffff;
  }
  return;
}



// FUNCTION 14537b040 FUN_14537b040 body=101 status=ok
// SIG undefined FUN_14537b040(void)

void FUN_14537b040(longlong param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    sVar1 = FUN_1450d84c0(*(longlong *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80));
  }
  if ((*(short *)(param_1 + 0x1b0) != 0) != (sVar1 != 0)) {
    *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
  }
  *(short *)(param_1 + 0x1b0) = sVar1;
  if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
  }
  return;
}



// FUNCTION 14537b0b0 FUN_14537b0b0 body=179 status=ok
// SIG undefined FUN_14537b0b0(void)

void FUN_14537b0b0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  
  bVar1 = *(byte *)(param_1 + 0x98);
  plVar6 = (longlong *)(param_1 + 0x170);
  bVar2 = *(byte *)(param_1 + 0x99);
  if (*(short *)(param_1 + 0x1b0) == 0) {
    iVar5 = 3;
    psVar3 = (short *)(param_1 + 0x164);
    lVar4 = 3;
    do {
      if ((*(char *)((longlong)psVar3 + -5) == '\0') && (*psVar3 == 0)) {
        plVar6 = (longlong *)((longlong)iVar5 * 0x30 + 0xb8 + param_1);
        break;
      }
      iVar5 = iVar5 + -1;
      psVar3 = psVar3 + -0x18;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  lVar4 = *plVar6;
  if (lVar4 != (ulonglong)*(uint *)(plVar6 + 1) * 0x30 + lVar4) {
    do {
      *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar4 + 8);
      *(byte *)(lVar4 + 0x20) = (bVar1 >> 2 | bVar2) & 0x1f;
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != (ulonglong)*(uint *)(plVar6 + 1) * 0x30 + *plVar6);
  }
  return;
}



// FUNCTION 14537b210 FUN_14537b210 body=140 status=ok
// SIG undefined FUN_14537b210(void)

undefined8 FUN_14537b210(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x68);
  do {
    if (lVar3 == 0) {
LAB_14537b261:
      uVar1 = *param_2 & 0xf00;
      if ((uVar1 < 0x301) && (((char)*param_2 != '\0' || (uVar1 == 0x300)))) {
        return 1;
      }
      return 2;
    }
    if (*(int *)(lVar3 + 0x194) == 0) {
      lVar3 = FUN_145355800(lVar3);
      *param_2 = *(uint *)(lVar3 + 0x168);
      goto LAB_14537b261;
    }
    lVar2 = FUN_145355800(lVar3);
    *param_2 = *(uint *)(lVar2 + 0x168);
    lVar3 = *(longlong *)(lVar3 + 0x20);
  } while( true );
}



// FUNCTION 14537b2a0 FUN_14537b2a0 body=78 status=ok
// SIG undefined FUN_14537b2a0(void)

undefined4 FUN_14537b2a0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1450a1a60(param_1 + -0x30);
  if (lVar2 == 0) {
    return 2;
  }
  *param_2 = *(undefined4 *)(lVar2 + 0x60);
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  *param_3 = *(undefined8 *)(lVar2 + 0x90);
  param_3[1] = uVar1;
  return 1;
}



// FUNCTION 14537b2f0 FUN_14537b2f0 body=137 status=ok
// SIG undefined FUN_14537b2f0(void)

void FUN_14537b2f0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = FUN_145377010(param_1 + 0x70);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x20);
  }
  FUN_145372d70(uVar2,uVar1,*(undefined4 *)(param_1 + 200 + (param_2 & 0xffffffff) * 0x30),param_3,
                param_4);
  return;
}



// FUNCTION 14537b380 FUN_14537b380 body=439 status=ok
// SIG undefined FUN_14537b380(void)

undefined8 FUN_14537b380(longlong param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  lVar5 = (ulonglong)param_2 * 0x30 + param_1;
  if (((*(char *)(lVar5 + 0xcc) == '\0') || (*(char *)(lVar5 + 0xcd) == '\0')) ||
     (*(char *)(lVar5 + 0xcf) != '\0')) {
    return 2;
  }
  cVar2 = FUN_1450a8250();
  if (cVar2 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  }
  if (*(int *)(lVar5 + 0xc0) == 0) {
    FUN_14537ab90(param_1,param_2 + 1);
  }
  uVar7 = 0;
  iVar1 = *(int *)(lVar5 + 0xc0);
  uVar6 = 0;
  uVar9 = uVar7;
  if (*param_4 != 0) {
    do {
      uVar8 = uVar7;
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 500);
      }
      lVar3 = FUN_14537d1c0(lVar5 + 0xa8,param_3,uVar8);
      if (lVar3 == 0) {
        uVar4 = 2;
        goto LAB_14537b4ec;
      }
      if (param_2 < 3) {
        FUN_14537be40(param_1,param_2 & 0xff,param_2 + 1,1,lVar3);
      }
      uVar6 = *param_4;
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < uVar6);
  }
  if ((*(longlong *)(param_4 + 2) != 0) && (uVar9 = uVar7, uVar6 != 0)) {
    do {
      uVar10 = (int)uVar9 + 1;
      *(ulonglong *)(*(longlong *)(param_4 + 2) + uVar9 * 8) =
           (ulonglong)(uint)((int)uVar9 + iVar1) * 0x30 + *(longlong *)(lVar5 + 0xb8);
      uVar6 = *param_4;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < uVar6);
  }
  if ((*(longlong *)(param_4 + 4) != 0) && (uVar6 != 0)) {
    do {
      *(undefined8 *)(*(longlong *)(param_4 + 4) + uVar7 * 8) =
           *(undefined8 *)
            (*(longlong *)(lVar5 + 0xb8) + 0x18 + (ulonglong)(uint)((int)uVar7 + iVar1) * 0x30);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *param_4);
  }
  uVar4 = 1;
LAB_14537b4ec:
  cVar2 = FUN_1450a8250();
  if (cVar2 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  }
  return uVar4;
}



// FUNCTION 14537b5c0 FUN_14537b5c0 body=80 status=ok
// SIG undefined FUN_14537b5c0(void)

undefined8
FUN_14537b5c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  IAkGlobalPluginContext *pIVar1;
  
  pIVar1 = AK::SoundEngine::GetGlobalPluginContext();
  (**(code **)(*(longlong *)pIVar1 + 0x110))(pIVar1,param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 14537b610 FUN_14537b610 body=382 status=ok
// SIG undefined FUN_14537b610(void)

undefined8
FUN_14537b610(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
             uint param_6,undefined4 param_7,uint param_8,undefined4 param_9,void *param_10)

{
  uint uVar1;
  undefined8 uVar2;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  float local_58;
  
  if ((((param_4 < 0.0) || (param_5 < 0.0)) || (1.0 < param_4)) || (1.0 < param_5)) {
    uVar2 = 0x1f;
  }
  else {
    uVar1 = ((param_8 & 0xff) + 7 & 0xfffffff8) * (param_6 & 0xff);
    if (uVar1 != 0) {
      memset(param_10,0,(ulonglong)uVar1 << 2);
    }
    uVar2 = FUN_145376cc3(param_3,param_2);
    local_60 = (float)((ulonglong)uVar2 >> 0x20);
    local_5c = (undefined4)uVar2;
    local_58 = extraout_XMM0_Dd * local_60;
    local_60 = extraout_XMM0_Dc * local_60;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0x3f800000;
    uStack_6c = 0;
    local_68 = 0x3f800000;
    uVar2 = FUN_14537bb40(param_1 + -0xa0,&local_78,param_9,param_4,param_5,param_10,param_6,param_7
                          ,param_8);
  }
  return uVar2;
}



// FUNCTION 14537b790 FUN_14537b790 body=861 status=ok
// SIG undefined FUN_14537b790(void)

void FUN_14537b790(longlong param_1,float *param_2,float *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,uint param_9
                  ,void *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  
  fVar1 = param_2[1];
  fVar2 = param_3[4];
  fVar3 = *param_3;
  fVar4 = param_3[3];
  fVar5 = param_2[2];
  fVar6 = *param_2;
  fVar14 = param_3[2] * fVar2 - param_3[1] * param_3[5];
  fVar13 = param_3[5] * fVar3 - param_3[2] * fVar4;
  fVar9 = (float)(*(double *)(param_2 + 10) - *(double *)(param_3 + 10));
  fVar12 = param_3[1] * fVar4 - fVar2 * fVar3;
  fVar11 = (float)(*(double *)(param_2 + 6) - *(double *)(param_3 + 6));
  fVar10 = (float)(*(double *)(param_2 + 8) - *(double *)(param_3 + 8));
  local_c0 = fVar13 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9;
  fVar7 = param_3[2];
  local_bc = fVar2 * fVar10 + fVar11 * fVar4 + param_3[5] * fVar9;
  local_b8 = param_3[1] * fVar10 + fVar11 * fVar3 + fVar7 * fVar9;
  fVar9 = param_2[4];
  local_d8 = fVar1 * fVar13 + fVar6 * fVar14 + fVar5 * fVar12;
  uVar8 = ((param_9 & 0xff) + 7 & 0xfffffff8) * (param_7 & 0xff);
  fVar10 = param_2[3];
  local_d4 = fVar6 * fVar4 + fVar2 * fVar1 + param_3[5] * fVar5;
  local_d0 = fVar6 * fVar3 + param_3[1] * fVar1 + fVar7 * fVar5;
  fVar1 = param_2[5];
  local_cc = fVar9 * fVar13 + fVar10 * fVar14 + fVar1 * fVar12;
  _local_c8 = CONCAT44(fVar10 * fVar3 + param_3[1] * fVar9 + fVar7 * fVar1,
                       fVar10 * fVar4 + fVar2 * fVar9 + param_3[5] * fVar1);
  if (uVar8 != 0) {
    memset(param_10,0,(ulonglong)uVar8 << 2);
  }
  FUN_14537bb40(param_1 + -0xa0,&local_d8,param_4,param_5,param_6,param_10,param_7,param_8,param_9);
  return;
}



// FUNCTION 14537baf0 FUN_14537baf0 body=77 status=ok
// SIG undefined FUN_14537baf0(void)

void FUN_14537baf0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1450a1a60(param_1 + -0x30);
  lVar2 = lVar1 + 200;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  FUN_1450917d0(param_2,param_3,param_4,lVar2);
  return;
}



// FUNCTION 14537bb40 FUN_14537bb40 body=358 status=ok
// SIG undefined FUN_14537bb40(void)

undefined8
FUN_14537bb40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,uint param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  
  lVar3 = FUN_1450a1a60(param_1 + 0x70);
  if (lVar3 == 0) {
    return 2;
  }
  iVar1 = FUN_145090bb0(lVar3 + 200,param_9);
  if (iVar1 == 1) {
    uVar4 = param_7;
    if ((param_7 & 0xf00) == 0x100) {
      bVar5 = 0;
      uVar2 = param_7 >> 0xc & 0x637;
      for (uVar4 = uVar2; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        bVar5 = bVar5 + 1;
      }
      uVar4 = uVar2 << 0xc | (uint)bVar5 | 0x100;
    }
    if ((char)uVar4 != '\0') {
      FUN_145091a20(param_2,param_3,param_4,param_5,param_6,uVar4,param_8,param_9,lVar3 + 200);
    }
    if (((param_7 >> 0xc & 8) != 0) && ((param_9 & 0x8000) != 0)) {
      *(undefined4 *)
       (param_6 +
       ((ulonglong)(((param_9 & 0xff) + 7 & 0xfffffff8) * ((param_7 & 0xff) - 1)) +
       (ulonglong)((param_9 & 0xff) - 1)) * 4) = 0x3f800000;
    }
  }
  return 1;
}



// FUNCTION 14537bcc0 FUN_14537bcc0 body=377 status=ok
// SIG undefined FUN_14537bcc0(void)

undefined8 * FUN_14537bcc0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  
  cVar5 = FUN_1450a8250();
  if (cVar5 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x178);
  plVar1 = (longlong *)(param_1 + 0x170);
  uVar3 = *(uint *)(param_1 + 0x178);
  uVar4 = *(uint *)(param_1 + 0x17c);
  if (uVar3 < uVar4) {
LAB_14537bd3b:
    if (uVar3 < *(uint *)(param_1 + 0x17c)) {
      uVar3 = *(uint *)(param_1 + 0x178);
      *(uint *)(param_1 + 0x178) = uVar3 + 1;
      puVar8 = (undefined8 *)((ulonglong)uVar3 * 0x30 + *plVar1);
      if (puVar8 == (undefined8 *)0x0) goto LAB_14537bdfc;
      *(undefined1 *)(puVar8 + 1) = 0;
      *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0xff;
      *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
      *(uint *)((longlong)puVar8 + 0x24) = *(uint *)((longlong)puVar8 + 0x24) & 0xff;
      *puVar8 = 0;
      *(undefined8 *)((longlong)puVar8 + 0xc) = 0x2b;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[5] = 0;
      if (*(longlong *)(param_1 + 8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 500);
      }
      iVar6 = FUN_14537a2a0(puVar8,param_2,param_3,DAT_14c72f434,uVar7);
      if (iVar6 == 1) {
        FUN_14537be40(param_1,0xff,0,(*(uint *)(param_1 + 0x168) & 0xf00) == 0x300,puVar8);
        goto LAB_14537bdfc;
      }
      FUN_14537a410(plVar1,uVar2);
    }
  }
  else {
    iVar6 = (uVar4 >> 1) + uVar4;
    if (uVar4 == 0) {
      iVar6 = 1;
    }
    cVar5 = FUN_14537a590(plVar1,iVar6);
    if (cVar5 != '\0') goto LAB_14537bd3b;
  }
  puVar8 = (undefined8 *)0x0;
LAB_14537bdfc:
  cVar5 = FUN_1450a8250();
  if (cVar5 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  }
  return puVar8;
}



// FUNCTION 14537be40 FUN_14537be40 body=325 status=ok
// SIG undefined FUN_14537be40(void)

void FUN_14537be40(longlong param_1,byte param_2,byte param_3,ulonglong param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte local_res20;
  
  local_res20 = (byte)param_4;
  lVar4 = param_5;
  do {
    param_5 = 0;
    lVar3 = (longlong)(char)param_3 * 0x30 + param_1;
    cVar1 = *(char *)(lVar3 + 0xcf);
    iVar2 = FUN_14537c630(lVar3 + 0xa8,lVar4,&param_5,param_4,(int)(char)param_3,param_1,1);
    if (iVar2 == 1) {
      if (((*(char *)(param_1 + 0xcf + (ulonglong)param_3 * 0x30) == '\0') &&
          (*(short *)(param_1 + 0xd4 + (ulonglong)param_3 * 0x30) == 0)) &&
         (*(short *)(param_1 + 0x1b0) == 0)) {
        if (*(char *)(lVar3 + 0xcc) == '\0') {
          *(byte *)((longlong)(char)param_2 + 0x181 + param_1) = param_3;
        }
        local_res20 = *(byte *)(lVar3 + 0xcd);
        lVar4 = param_5;
        param_2 = param_3;
      }
    }
    else {
      FUN_14537d120(lVar3 + 0xa8);
      if (cVar1 == '\0') {
        *(byte *)((longlong)(char)param_3 + 0x181 + param_1) = param_3;
        FUN_14537ac90(param_1,(char)param_3 + 1,param_2);
        lVar4 = 0;
      }
    }
    param_4 = (ulonglong)local_res20;
    param_3 = param_3 + 1;
  } while (((char)param_3 < '\x04') && (lVar4 != 0));
  return;
}



// FUNCTION 14537bf90 FUN_14537bf90 body=96 status=ok
// SIG undefined FUN_14537bf90(void)

undefined8 FUN_14537bf90(longlong param_1,byte param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  uVar2 = (uint)*(char *)((longlong)(char)param_2 + 0x181 + param_1);
  if ((int)(uint)param_2 < (int)uVar2) {
    do {
      uVar3 = uVar2 & 0xff;
      uVar2 = (uint)*(char *)((longlong)(char)uVar2 + 0x181 + param_1);
    } while ((int)uVar3 < (int)uVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0xb8 + (ulonglong)uVar3 * 0x30);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  *(int *)(lVar1 + 0xc + (ulonglong)param_3 * 0x30) == 0x11);
}



// FUNCTION 14537c010 FUN_14537c010 body=73 status=ok
// SIG undefined FUN_14537c010(void)

undefined8 FUN_14537c010(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  lVar1 = FUN_1450a1a60(param_1 + -0x30);
  if (lVar1 != 0) {
    FUN_1450a0140(lVar1,param_2,param_3);
  }
  return 1;
}



// FUNCTION 14537c060 FUN_14537c060 body=175 status=ok
// SIG undefined FUN_14537c060(void)

void FUN_14537c060(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  piVar2 = *(int **)(param_1 + 0x100);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x108) * 10;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 10) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    local_res8[0] = -1;
    FUN_145377210(param_1 + -0x30,param_2,local_res8);
    if ((local_res8[0] == -1) ||
       (piVar3 = (int *)FUN_14538bd40((undefined8 *)(param_1 + 0x100),param_2), piVar3 == (int *)0x0
       )) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = piVar3[4];
  *param_3 = *(undefined8 *)(piVar3 + 2);
  return;
}



// FUNCTION 14537c110 FUN_14537c110 body=137 status=ok
// SIG undefined FUN_14537c110(void)

void FUN_14537c110(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (*(longlong **)(param_1 + 0xf8) == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 8))();
  }
  if (*(longlong *)(param_1 + -0x30) == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = FUN_145377010(param_1 + -0x30);
  }
  if (*(longlong *)(param_1 + -0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + -0x30) + 0x20);
  }
  FUN_145372d70(uVar3,uVar2,uVar1,param_2,param_3);
  return;
}



// FUNCTION 14537c290 FUN_14537c290 body=91 status=ok
// SIG undefined FUN_14537c290(void)

undefined8 FUN_14537c290(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1450a1a60(param_1 + -0x30);
  if (lVar1 != 0) {
    uVar2 = FUN_1450a0060(lVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 2;
}



// FUNCTION 14537c2f0 FUN_14537c2f0 body=283 status=ok
// SIG undefined FUN_14537c2f0(void)

undefined8
FUN_14537c2f0(longlong param_1,undefined1 param_2,undefined4 *param_3,undefined4 param_4,
             uint param_5,uint param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((param_5 & 0xf00) == 0x100) {
    uVar3 = param_5 >> 0xc;
    if ((((byte)(param_5 >> 0x15) ^ (byte)(param_5 >> 0x10)) & 1) != 0) {
      uVar3 = uVar3 & 0xffffffcf | 0x600;
    }
    param_5 = param_5 & 0xfff | uVar3 << 0xc;
  }
  if ((param_6 & 0xf00) == 0x100) {
    uVar3 = param_6 >> 0xc;
    if ((((byte)(param_6 >> 0x15) ^ (byte)(param_6 >> 0x10)) & 1) != 0) {
      uVar3 = uVar3 & 0xffffffcf | 0x600;
    }
    param_6 = param_6 & 0xfff | uVar3 << 0xc;
  }
  lVar1 = FUN_1450a1a60(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  else {
    FUN_145093d40(*param_3,param_3[2],param_3[2],param_4,param_2,param_5,param_6,param_7,lVar1 + 200
                 );
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14537c410 FUN_14537c410 body=96 status=ok
// SIG undefined FUN_14537c410(void)

undefined8 FUN_14537c410(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1450a1a60(param_1 + -0x30);
  if (lVar1 != 0) {
    uVar2 = FUN_1450948d0(lVar1 + 200,param_2,param_3,param_4);
    return uVar2;
  }
  return 2;
}



// FUNCTION 14537c470 FUN_14537c470 body=208 status=ok
// SIG undefined FUN_14537c470(void)

undefined8
FUN_14537c470(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_2 + 8))
                    (param_2,0x30,
                     "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkVBAP.h"
                     ,199);
  if (lVar2 == 0) {
LAB_14537c4f0:
    *param_5 = 0;
    uVar3 = 2;
  }
  else {
    lVar2 = FUN_145375330(lVar2);
    if (lVar2 != 0) {
      iVar1 = FUN_145375360(lVar2,param_2,param_4);
      if (iVar1 != 1) {
        FUN_145375350(lVar2);
        (**(code **)(*param_2 + 0x10))(param_2,lVar2);
        goto LAB_14537c4f0;
      }
    }
    if (lVar2 == 0) {
      *param_5 = 0;
      uVar3 = 2;
    }
    else {
      FUN_1453754e0(lVar2,param_3,param_4);
      uVar3 = 1;
      *param_5 = lVar2;
    }
  }
  return uVar3;
}



// FUNCTION 14537c540 FUN_14537c540 body=43 status=ok
// SIG undefined FUN_14537c540(void)

undefined8
FUN_14537c540(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  FUN_1453758c0(param_2,param_3,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 14537c570 FUN_14537c570 body=65 status=ok
// SIG undefined FUN_14537c570(void)

undefined8 FUN_14537c570(undefined8 param_1,longlong *param_2,longlong param_3)

{
  FUN_145375460(param_3);
  if (param_3 != 0) {
    FUN_145375350(param_3);
    (**(code **)(*param_2 + 0x10))(param_2,param_3);
  }
  return 1;
}



// FUNCTION 14537c5f0 FUN_14537c5f0 body=52 status=ok
// SIG undefined FUN_14537c5f0(void)

undefined8 FUN_14537c5f0(undefined8 param_1,ulonglong param_2)

{
  FUN_14509daa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14537c630 FUN_14537c630 body=1175 status=ok
// SIG undefined FUN_14537c630(void)

int FUN_14537c630(longlong *param_1,longlong param_2,longlong *param_3,char param_4,
                 undefined4 param_5,longlong param_6,char param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  uint uStack_7c;
  uint local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  longlong *local_50;
  undefined2 local_48;
  
  if ((char)param_1[5] != '\0') {
    return 2;
  }
  if (*(char *)((longlong)param_1 + 0x24) != '\0') {
    lVar9 = 0;
    if (*(char *)((longlong)param_1 + 0x27) != '\0') {
      lVar9 = param_2;
    }
    *param_3 = lVar9;
    return 1;
  }
  *param_3 = param_2;
  *(char *)((longlong)param_1 + 0x25) = param_4;
  local_50 = (longlong *)0x0;
  FUN_145377110(param_6 + 0x70,param_5,&local_50);
  if (local_50 != (longlong *)0x0) {
    *(int *)(param_1 + 4) = (int)local_50[7];
    *(undefined2 *)((longlong)param_1 + 0x2c) = local_48;
    if (local_50[8] != 0) {
      uVar3 = *(uint *)(param_1 + 1);
      if ((uVar3 < *(uint *)((longlong)param_1 + 0xc)) ||
         ((cVar4 = FUN_14537d420(param_1), cVar4 != '\0' &&
          (uVar3 < *(uint *)((longlong)param_1 + 0xc))))) {
        uVar11 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar11 + 1;
        puVar2 = (undefined8 *)(*param_1 + (ulonglong)uVar11 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          iVar7 = 2;
          local_60[0] = 0;
          local_5c = 0;
          local_58 = 1;
          local_54 = 0x100;
          local_52 = 0;
          puVar8 = AK::MemoryMgr::Malloc(5,0xa0);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[2] = 0;
            *(undefined4 *)(puVar8 + 3) = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            *(undefined1 *)(puVar8 + 5) = 0xff;
            *(undefined1 *)(puVar8 + 6) = 0xff;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[0xd] = 0;
            puVar8[0xe] = 0;
            puVar8[0xf] = 0;
            puVar8[0x10] = 0;
            *puVar8 = &PTR_FUN_149d433d0;
            puVar8[1] = &PTR_LAB_149d433f8;
            puVar8[0x11] = 0;
            puVar8[0x12] = 0;
            puVar8[0x13] = 0;
            *puVar2 = puVar8;
            lVar9 = FUN_14536b850(puVar8,local_50,*(longlong *)(param_6 + 8) + 8,
                                  *(longlong *)(param_6 + 8) + 0x78,1);
            if (lVar9 != 0) {
              pvVar10 = AK::MemoryMgr::Malloc(5,0x30);
              if (pvVar10 == (void *)0x0) {
                puVar8[0x13] = 0;
              }
              else {
                lVar9 = FUN_14538c400(pvVar10,param_6,param_5,param_6 + 0x70);
                puVar8[0x13] = lVar9;
                if (((((lVar9 != 0) &&
                      (iVar5 = FUN_145089070((int)param_1[4],puVar8 + 0x12,local_60), iVar5 == 1))
                     && (iVar6 = FUN_1450894a0((int)local_50[7],3,local_60), iVar5 = DAT_14c72f42c,
                        iVar6 == 0)) && ((char)local_54 == '\0')) &&
                   ((local_54._1_1_ != '\0' || (param_4 == '\0')))) {
                  if (((char)local_58 == '\0') && (param_7 == '\0')) {
                    iVar7 = 4;
                  }
                  else {
                    uStack_7c = *(uint *)(param_2 + 8);
                    uVar11 = (uStack_7c & 0xff) << 8 | local_78 & 0xfffd0020 | 0x50020;
                    if (local_58._3_1_ != '\0') {
                      *(undefined1 *)((longlong)param_1 + 0x26) = local_52;
                      *(undefined1 *)((longlong)param_1 + 0x24) = 1;
                      if (param_4 != '\0') {
                        uStack_7c = 0x300;
                      }
                      *(undefined1 *)((longlong)param_1 + 0x25) = 1;
                    }
                    local_70 = CONCAT44(uStack_7c,iVar5);
                    *(char *)((longlong)param_1 + 0x27) = (char)local_58;
                    local_68 = uVar11;
                    iVar6 = (**(code **)(*(longlong *)puVar8[0x12] + 0x30))
                                      ((longlong *)puVar8[0x12],&PTR_PTR_14c72f458,puVar8[0x13],
                                       puVar8[10],&local_70);
                    if (iVar6 == 1) {
                      if (((char)local_58 == '\0') ||
                         ((((iVar5 == (int)local_70 &&
                            ((char)uStack_7c == (char)((ulonglong)local_70 >> 0x20))) &&
                           ((((uStack_7c ^ local_70._4_4_) & 0xf00) == 0 &&
                            (((((uStack_7c ^ local_70._4_4_) & 0xfffff000) == 0 &&
                              (((local_68 ^ uVar11) & 0x3f) == 0)) &&
                             (((local_68 ^ uVar11) & 0xffc0) == 0)))))) &&
                          ((((local_68 ^ uVar11) & 0x30000) == 0 &&
                           (((local_68 ^ uVar11) >> 0x12 & 1) == 0)))))) {
                        if (local_58._3_1_ == '\0') {
                          puVar8[0x11] = **(undefined8 **)(param_2 + 0x18);
                          if ((char)local_58 == '\0') {
                            lVar9 = FUN_14537d1c0(param_1,local_70._4_4_,
                                                  *(undefined4 *)
                                                   (*(longlong *)(param_2 + 0x18) + 0x70));
                            if (lVar9 == 0) goto LAB_14537ca05;
LAB_14537ca44:
                            *param_3 = lVar9;
                          }
                        }
                        else if (((local_70._4_4_ & 0xf00) == 0x300) || ((int)param_1[3] != 0)) {
                          if ((char)local_58 == '\0') {
                            *param_3 = 0;
                          }
                        }
                        else {
                          *(undefined1 *)((longlong)param_1 + 0x25) = 0;
                          if ((char)local_58 == '\0') {
                            lVar9 = FUN_14537d1c0(param_1,local_70._4_4_,
                                                  *(undefined4 *)(*(longlong *)(param_6 + 8) + 500))
                            ;
                            if (lVar9 != 0) goto LAB_14537ca44;
LAB_14537ca05:
                            iVar7 = 0x34;
                            goto LAB_14537ca65;
                          }
                        }
                        iVar7 = (**(code **)(*(longlong *)puVar8[0x12] + 0x10))();
                        if (iVar7 == 1) goto LAB_14537ca8e;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_14537ca65:
          FUN_14537d330(param_1,uVar3);
          *(undefined1 *)(param_1 + 5) = 1;
          goto LAB_14537ca8e;
        }
      }
      iVar7 = 0x34;
      goto LAB_14537ca8e;
    }
  }
  iVar7 = 1;
LAB_14537ca8e:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0x14);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  return iVar7;
}



// FUNCTION 14537cad0 FUN_14537cad0 body=683 status=ok
// SIG undefined FUN_14537cad0(void)

longlong *
FUN_14537cad0(longlong *param_1,longlong param_2,byte param_3,longlong *param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *local_res8;
  
  *param_5 = 0;
  lVar10 = (ulonglong)param_3 * 0x30 + param_2;
  local_res8 = param_4;
  if (((*(char *)(lVar10 + 0xcf) == '\0') && (*(short *)(lVar10 + 0xd4) == 0)) &&
     (*(short *)(param_2 + 0x1b0) == 0)) {
    local_res8 = param_1 + 2;
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\0') {
    bVar1 = false;
    bVar2 = false;
    if (*(char *)((longlong)param_1 + 0x27) == '\0') {
      iVar8 = (int)param_1[3] + -1;
      if (iVar8 < 0) {
        return local_res8;
      }
      lVar5 = (longlong)iVar8 * 0x30;
      lVar9 = (longlong)iVar8 * 8;
      do {
        iVar7 = (int)*(char *)((longlong)(char)param_3 + 0x181 + param_2);
        if ((int)(uint)param_3 < iVar7) {
          cVar3 = FUN_14537bf90(param_2,iVar7,iVar8);
          bVar1 = bVar2;
        }
        else {
          cVar3 = *(int *)(*(longlong *)(lVar10 + 0xb8) + 0xc + lVar5) == 0x11;
        }
        if (cVar3 != '\0') {
          lVar4 = *param_4;
          lVar6 = (ulonglong)*(uint *)(param_4 + 1) * 0x30 + lVar4;
          if (lVar4 != lVar6) {
            do {
              if (**(longlong **)(lVar4 + 0x18) ==
                  *(longlong *)(*(longlong *)(lVar9 + *param_1) + 0x88)) goto LAB_14537cd1f;
              lVar4 = lVar4 + 0x30;
            } while (lVar4 != lVar6);
          }
          FUN_14537d330(param_1,iVar8);
          FUN_14537a410(param_1 + 2,iVar8);
          bVar1 = true;
          bVar2 = true;
        }
LAB_14537cd1f:
        lVar5 = lVar5 + -0x30;
        lVar9 = lVar9 + -8;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    else {
      iVar8 = (int)param_1[1] + -1;
      if (iVar8 < 0) {
        return local_res8;
      }
      lVar10 = (longlong)iVar8 * 8;
      do {
        lVar9 = *param_4;
        lVar5 = (ulonglong)*(uint *)(param_4 + 1) * 0x30 + lVar9;
        if (lVar9 != lVar5) {
          do {
            if (**(longlong **)(lVar9 + 0x18) ==
                *(longlong *)(*(longlong *)(lVar10 + *param_1) + 0x88)) goto LAB_14537cc54;
            lVar9 = lVar9 + 0x30;
          } while (lVar9 != lVar5);
        }
        FUN_14537d330(param_1,iVar8);
        bVar1 = true;
LAB_14537cc54:
        lVar10 = lVar10 + -8;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    if (!bVar1) {
      return local_res8;
    }
    if ((int)param_1[1] != 0) {
      return local_res8;
    }
    *param_5 = *(char *)((longlong)param_1 + 0x27) == '\0';
  }
  else {
    if ((*(short *)((longlong)param_1 + 0x2c) == 0) && (*(short *)(param_2 + 0x1b0) < 1)) {
      iVar8 = (int)param_1[3] + -1;
      if (-1 < iVar8) {
        lVar9 = (longlong)iVar8 * 0x30;
        do {
          iVar7 = (int)*(char *)((longlong)(char)param_3 + 0x181 + param_2);
          if ((int)(uint)param_3 < iVar7) {
            cVar3 = FUN_14537bf90(param_2,iVar7,iVar8);
          }
          else {
            cVar3 = *(int *)(*(longlong *)(lVar10 + 0xb8) + 0xc + lVar9) == 0x11;
          }
          if (cVar3 != '\0') {
            FUN_14537a410(param_1 + 2,iVar8);
          }
          lVar9 = lVar9 + -0x30;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      if ((int)param_4[1] != 0) {
        return local_res8;
      }
      iVar8 = (int)param_1[3];
    }
    else {
      iVar8 = (int)param_4[1];
    }
    if (iVar8 != 0) {
      return local_res8;
    }
  }
  FUN_14537d120(param_1);
  return local_res8;
}



// FUNCTION 14537cd80 FUN_14537cd80 body=918 status=ok
// SIG undefined FUN_14537cd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14537cd80(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  uint local_58 [2];
  longlong local_50;
  longlong lStack_48;
  uint local_40 [2];
  longlong local_38;
  longlong local_30;
  
  if ((int)param_1[1] != 0) {
    if ((*(short *)((longlong)param_1 + 0x2c) == 0) && (*(short *)(param_4 + 0x1b0) == 0)) {
      uVar9 = 0;
      if ((*(char *)((longlong)param_1 + 0x26) == '\0') &&
         (uVar8 = *(uint *)(*param_2 + 8), uVar6 = uVar9, uVar7 = uVar9, uVar8 != 0)) {
        do {
          lVar2 = *(longlong *)*param_2;
          lVar12 = *(longlong *)(lVar2 + 0x18 + uVar7);
          fVar1 = *(float *)(lVar12 + 0x54);
          if ((*(float *)(lVar12 + 0x50) != 1.0) || (fVar1 != 1.0)) {
            uStack_80 = 0x14537ce35;
            FUN_145380280(uVar6 * 0x30 + lVar2,lVar2,fVar1,1);
            lVar2 = *(longlong *)(*(longlong *)*param_2 + 0x18 + uVar7);
            *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
            *(undefined4 *)(lVar2 + 0x54) = 0x3f800000;
          }
          uVar11 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar11;
          uVar7 = uVar7 + 0x30;
        } while (uVar11 < uVar8);
      }
      if (*(char *)((longlong)param_1 + 0x24) == '\0') {
        if (*(char *)((longlong)param_1 + 0x27) == '\0') {
          plVar3 = param_1 + 2;
          if ((int)param_1[1] != 0) {
            do {
              lVar12 = uVar9 * 0x30;
              lVar13 = *(longlong *)*param_2 + lVar12;
              lVar2 = *(longlong *)(*param_1 + uVar9 * 8);
              if (**(longlong **)(lVar13 + 0x18) == *(longlong *)(lVar2 + 0x88)) {
                plVar4 = *(longlong **)(lVar2 + 0x90);
                uStack_80 = 0x14537cf05;
                (**(code **)(*plVar4 + 0x38))(plVar4,lVar13,0,*plVar3 + lVar12);
                uStack_80 = 0x14537cf17;
                FUN_145378330(*(undefined8 *)(*plVar3 + 0x18 + lVar12),
                              *(undefined8 *)(lVar13 + 0x18));
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(param_1 + 1));
          }
          *param_2 = (longlong)plVar3;
        }
        else if ((int)param_1[1] != 0) {
          do {
            plVar3 = *(longlong **)(*(longlong *)(*param_1 + uVar9 * 8) + 0x90);
            uStack_80 = 0x14537cea5;
            (**(code **)(*plVar3 + 0x38))(plVar3,uVar9 * 0x30 + *(longlong *)*param_2);
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 1));
        }
      }
      else {
        uVar8 = *(uint *)(*param_2 + 8);
        uVar7 = (ulonglong)uVar8 * 8;
        uVar6 = uVar7 + 0xf;
        if (uVar6 <= uVar7) {
          uVar6 = 0xffffffffffffff0;
        }
        uStack_80 = 0x14537cf51;
        lVar2 = -(uVar6 & 0xfffffffffffffff0);
        uVar6 = uVar7 + 0xf;
        if (uVar6 <= uVar7) {
          uVar6 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_78 + lVar2 + -8) = 0x14537cf6e;
        lVar12 = -(uVar6 & 0xfffffffffffffff0);
        puVar10 = auStack_78 + lVar12 + lVar2;
        local_38 = (longlong)local_58 + lVar12 + lVar2;
        uVar6 = uVar9;
        local_40[0] = uVar8;
        local_30 = (longlong)local_58 + lVar2;
        if (uVar8 != 0) {
          do {
            uVar8 = (int)uVar6 + 1;
            *(ulonglong *)(local_38 + uVar6 * 8) = *(longlong *)*param_2 + uVar6 * 0x30;
            *(undefined8 *)(local_30 + uVar6 * 8) =
                 *(undefined8 *)(*(longlong *)*param_2 + 0x18 + uVar6 * 0x30);
            uVar6 = (ulonglong)uVar8;
          } while (uVar8 < local_40[0]);
        }
        if (*(char *)((longlong)param_1 + 0x27) == '\0') {
          local_58[0] = *(uint *)(param_1 + 3);
          local_50 = 0;
          lStack_48 = 0;
          if (local_58[0] != 0) {
            uVar7 = (ulonglong)local_58[0] * 8;
            uVar6 = uVar7 + 0xf;
            if (uVar6 <= uVar7) {
              uVar6 = 0xffffffffffffff0;
            }
            *(undefined8 *)(auStack_78 + lVar12 + lVar2 + -8) = 0x14537d01c;
            lVar13 = -(uVar6 & 0xfffffffffffffff0);
            local_50 = (longlong)local_58 + lVar13 + lVar12 + lVar2;
            uVar6 = uVar7 + 0xf;
            if (uVar6 <= uVar7) {
              uVar6 = 0xffffffffffffff0;
            }
            *(undefined8 *)(auStack_78 + lVar13 + lVar12 + lVar2 + -8) = 0x14537d03d;
            puVar10 = auStack_78 + -(uVar6 & 0xfffffffffffffff0) + lVar13 + lVar12 + lVar2;
            lStack_48 = (longlong)local_58 + -(uVar6 & 0xfffffffffffffff0) + lVar13 + lVar12 + lVar2
            ;
            do {
              uVar8 = (int)uVar9 + 1;
              *(undefined8 *)(lStack_48 + uVar9 * 8) =
                   *(undefined8 *)(param_1[2] + 0x18 + uVar9 * 0x30);
              *(ulonglong *)(local_50 + uVar9 * 8) = param_1[2] + uVar9 * 0x30;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < local_58[0]);
          }
          plVar3 = *(longlong **)(*(longlong *)*param_1 + 0x90);
          pcVar5 = *(code **)(*plVar3 + 0x38);
          *(undefined8 *)(puVar10 + -8) = 0x14537d09f;
          (*pcVar5)(plVar3,local_40,local_58);
          *param_2 = (longlong)(param_1 + 2);
        }
        else {
          plVar3 = *(longlong **)(*(longlong *)*param_1 + 0x90);
          pcVar5 = *(code **)(*plVar3 + 0x38);
          *(undefined8 *)(auStack_78 + lVar12 + lVar2 + -8) = 0x14537cfe6;
          (*pcVar5)(plVar3,local_40);
        }
      }
    }
    else if ((*(short *)((longlong)param_1 + 0x2a) == 0) &&
            ((*(short *)(param_4 + 0x1b2) == 0 && (uVar9 = 0, (int)param_1[1] != 0)))) {
      do {
        uStack_80 = 0x14537d0e6;
        (**(code **)(**(longlong **)(*(longlong *)(*param_1 + uVar9 * 8) + 0x90) + 0x10))();
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 1));
    }
    *(undefined2 *)((longlong)param_1 + 0x2a) = *(undefined2 *)((longlong)param_1 + 0x2c);
  }
  return;
}



// FUNCTION 14537d120 FUN_14537d120 body=146 status=ok
// SIG undefined FUN_14537d120(void)

void FUN_14537d120(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 1);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    FUN_14537d330(param_1,iVar1);
  }
  FUN_14537a4d0();
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1000000;
  if (param_1[2] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14537d1c0 FUN_14537d1c0 body=355 status=ok
// SIG undefined FUN_14537d1c0(void)

undefined8 * FUN_14537d1c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar3 <= uVar2) {
    iVar6 = (uVar3 >> 1) + uVar3;
    if (uVar3 == 0) {
      iVar6 = 1;
    }
    cVar5 = FUN_14537a590(param_1 + 0x10,iVar6);
    if (cVar5 == '\0') {
      return (undefined8 *)0x0;
    }
  }
  if (uVar2 < *(uint *)(param_1 + 0x1c)) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    puVar8 = (undefined8 *)((ulonglong)uVar2 * 0x30 + *(longlong *)(param_1 + 0x10));
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar8 + 1) = 0;
      *(uint *)(puVar8 + 1) = *(uint *)(puVar8 + 1) & 0xff;
      *(undefined1 *)((longlong)puVar8 + 0x24) = 0;
      *(uint *)((longlong)puVar8 + 0x24) = *(uint *)((longlong)puVar8 + 0x24) & 0xff;
      *puVar8 = 0;
      *(undefined8 *)((longlong)puVar8 + 0xc) = 0x2b;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      puVar8[5] = 0;
      LOCK();
      UNLOCK();
      uVar1 = DAT_14c7fdcb0 + 1;
      DAT_14c7fdcb0 = DAT_14c7fdcb0 + 1;
      iVar6 = FUN_14537a2a0(puVar8,uVar1 & 0xffffffffffffff,param_2,DAT_14c72f434,param_3);
      if (iVar6 == 1) {
        return puVar8;
      }
      lVar7 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x30 + *(longlong *)(param_1 + 0x10);
      if (*(void **)(lVar7 + -0x30) != (void *)0x0) {
        AK::MemoryMgr::Free(5,*(void **)(lVar7 + -0x30));
        *(undefined8 *)(lVar7 + -0x30) = 0;
        *(undefined2 *)(lVar7 + -0x1e) = 0;
      }
      pvVar4 = *(void **)(lVar7 + -0x18);
      if (pvVar4 != (void *)0x0) {
        FUN_145355270();
        AK::MemoryMgr::Free(0,pvVar4);
      }
      pvVar4 = *(void **)(lVar7 + -8);
      if (pvVar4 != (void *)0x0) {
        FUN_145379670(pvVar4,0);
        AK::MemoryMgr::Free(0xe,pvVar4);
        *(undefined8 *)(lVar7 + -8) = 0;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14537d330 FUN_14537d330 body=232 status=ok
// SIG undefined FUN_14537d330(void)

void FUN_14537d330(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  lVar2 = (param_2 & 0xffffffff) * 8;
  plVar3 = *(longlong **)(lVar2 + *param_1);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[0x12];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,&PTR_PTR_14c72f458);
      plVar3[0x12] = 0;
    }
    puVar5 = (undefined8 *)plVar3[0x13];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      AK::MemoryMgr::Free(5,puVar5);
      plVar3[0x13] = 0;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3);
    puVar5 = *(undefined8 **)(lVar2 + *param_1);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      AK::MemoryMgr::Free(5,puVar5);
    }
  }
  puVar5 = (undefined8 *)(*param_1 + lVar2);
  puVar1 = (undefined8 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) - 1) * 8);
  if (puVar5 < puVar1) {
    *puVar5 = *puVar1;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 14537d420 FUN_14537d420 body=186 status=ok
// SIG undefined FUN_14537d420(void)

undefined8 FUN_14537d420(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14537d4bd;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14537d4bd:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14537d4e0 FUN_14537d4e0 body=52 status=ok
// SIG undefined FUN_14537d4e0(void)

undefined8 FUN_14537d4e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14509daa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14537d520 FUN_14537d520 body=52 status=ok
// SIG undefined FUN_14537d520(void)

undefined8 FUN_14537d520(undefined8 param_1,ulonglong param_2)

{
  FUN_145379f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 14537d560 FUN_14537d560 body=47 status=ok
// SIG undefined FUN_14537d560(void)

undefined8 * FUN_14537d560(undefined8 *param_1)

{
  FUN_145379d70();
  *param_1 = &PTR_FUN_149d43588;
  param_1[0x14] = &PTR_LAB_149d43600;
  return param_1;
}



// FUNCTION 14537d590 FUN_14537d590 body=192 status=ok
// SIG undefined FUN_14537d590(void)

void FUN_14537d590(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149d43588;
  param_1[0x14] = &PTR_LAB_149d43600;
  FUN_14538a0c0();
  FUN_14537ab90(param_1,0);
  plVar1 = (longlong *)param_1[1];
  *(byte *)((longlong)param_1 + 0x1b4) = *(byte *)((longlong)param_1 + 0x1b4) & 0xfc;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,0);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
      AK::MemoryMgr::Free(5,plVar1);
    }
    param_1[1] = 0;
  }
  if (param_1[0x2e] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[0x2e]);
    param_1[0x2e] = 0;
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  FUN_145379f90(param_1);
  return;
}



// FUNCTION 14537d650 FUN_14537d650 body=851 status=ok
// SIG undefined FUN_14537d650(void)

int FUN_14537d650(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  
  *(undefined8 *)(param_1 + 0x68) = param_2;
  FUN_145377030(param_1 + 0x70,param_5);
  sVar3 = 0;
  *(byte *)(param_1 + 0x1b4) =
       *(longlong *)(param_1 + 0x70) == 0 | *(byte *)(param_1 + 0x1b4) & 0xfc;
  if (*(longlong *)(param_1 + 0x70) == 0) {
LAB_14537d82b:
    *(uint *)(param_1 + 0x168) = param_3;
    *(undefined4 *)(param_1 + 0x1b8) = 4;
    if ((param_3 & 0xf00) == 0x300) {
      FUN_145377230(param_1 + 0x70);
    }
    else {
      cVar2 = FUN_145377230(param_1 + 0x70);
      if (cVar2 != '\0') {
        puVar8 = AK::MemoryMgr::Malloc(5,0x98);
        if (puVar8 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x198) = 0;
          FUN_145376d90(param_5);
          return 0x34;
        }
        puVar8[2] = 0;
        *puVar8 = &PTR_FUN_149d43408;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar8[1] = &PTR_LAB_149d43430;
        *(undefined4 *)(puVar8 + 4) = 0;
        *(undefined1 *)(puVar8 + 5) = 0xff;
        *(undefined1 *)(puVar8 + 6) = 0xff;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        *(undefined4 *)(puVar8 + 0x12) = 0xffffffff;
        *(undefined8 **)(param_1 + 0x198) = puVar8;
      }
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      sVar3 = FUN_1450d84c0(*(longlong *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x80));
    }
    if ((*(short *)(param_1 + 0x1b0) != 0) != (sVar3 != 0)) {
      *(byte *)(param_1 + 0x1b4) = *(byte *)(param_1 + 0x1b4) | 2;
    }
    *(short *)(param_1 + 0x1b0) = sVar3;
    if (((*(byte *)(param_1 + 0x1b4) & 2) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
    }
    FUN_145376d90(param_5);
    iVar5 = 1;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (lVar7 == 0) {
      FUN_145376d90(param_5);
      return 2;
    }
    pvVar6 = AK::MemoryMgr::Malloc(5,0x228);
    if (pvVar6 == (void *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar7 = FUN_14538cb30(pvVar6,lVar7,*(undefined8 *)(param_1 + 0x70));
      *(longlong *)(param_1 + 8) = lVar7;
      if (lVar7 != 0) {
        uVar4 = FUN_1450e71d0(lVar7);
        cVar2 = FUN_1450b1ba0(DAT_14c790fc8,uVar4);
        *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xfd | cVar2 * '\x02';
        uVar4 = FUN_1450e71d0(*(undefined8 *)(param_1 + 8));
        cVar2 = FUN_1450b1c20(DAT_14c790fc8,uVar4);
        *(byte *)(param_1 + 0x98) =
             (cVar2 << 2 ^ *(byte *)(param_1 + 0x98)) & 0x7c ^ *(byte *)(param_1 + 0x98);
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x218) = param_1;
        local_res8[0] = 0;
        iVar5 = FUN_1450e6620(*(undefined8 *)(param_1 + 8),0xbf800000,0,1,local_res10,0,local_res8);
        if ((iVar5 != 1) ||
           (local_3c = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(), iVar5 = local_3c,
           local_3c != 1)) {
          FUN_145376d90(param_5);
          return iVar5;
        }
        local_68 = 0;
        local_60 = 0xff00;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),&local_68,1);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1d0);
        (**(code **)(*plVar1 + 0x138))(plVar1,&local_68,*(longlong *)(param_1 + 8) + 0x78,1);
        FUN_1450e8900(*(undefined8 *)(param_1 + 8));
        goto LAB_14537d82b;
      }
    }
    FUN_145376d90(param_5);
    iVar5 = 0x34;
  }
  return iVar5;
}



// FUNCTION 14537d9b0 FUN_14537d9b0 body=107 status=ok
// SIG undefined FUN_14537d9b0(void)

void FUN_14537d9b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (((*(uint *)(param_1 + 0x168) & 0xf00) != 0x300) && (*(longlong *)(param_1 + 0x198) != 0)) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x88) == 0) &&
       (*(longlong *)(param_1 + 8) != 0)) {
      FUN_14537adc0();
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 14537da20 FUN_14537da20 body=41 status=ok
// SIG undefined FUN_14537da20(void)

void FUN_14537da20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(longlong *)(param_1 + 0x198) != 0) &&
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88), plVar1 != (longlong *)0x0))
     && (*(int *)(param_2 + 0x148) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00014537da44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))();
    return;
  }
  return;
}



// FUNCTION 14537da50 FUN_14537da50 body=175 status=ok
// SIG undefined FUN_14537da50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14537da50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 auStack_40 [5];
  longlong alStack_18 [2];
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x28) * 8;
  uVar4 = uVar3 + 0xf;
  if (uVar4 <= uVar3) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x14537da8f;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  uVar4 = 0;
  uVar3 = uVar4;
  for (lVar1 = *(longlong *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    if ((((byte)*(uint *)(lVar1 + 0x198) & 3) != 3) && ((*(uint *)(lVar1 + 0x198) >> 2 & 1) == 0)) {
      *(longlong *)(&stack0xfffffffffffffff8 + lVar2 + uVar3 * 8) = lVar1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar4 = (ulonglong)(uint)((int)uVar4 + *(int *)(lVar1 + 0x148));
    }
  }
  *(undefined1 **)((longlong)alStack_18 + lVar2) = &stack0xfffffffffffffff8 + lVar2;
  *(undefined8 *)((longlong)auStack_40 + lVar2) = 0x14537daef;
  FUN_14537efc0(param_1,param_2,uVar4);
  return param_2;
}



// FUNCTION 14537db00 FUN_14537db00 body=204 status=ok
// SIG undefined FUN_14537db00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14537db00(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 auStack_40 [5];
  longlong alStack_18 [2];
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x28) * 8;
  uVar5 = uVar3 + 0xf;
  if (uVar5 <= uVar3) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x14537db3f;
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar2 = -(uVar5 & 0xfffffffffffffff0);
  uVar6 = 0;
  uVar5 = param_2;
  uVar3 = uVar6;
  if (lVar4 != 0) {
    do {
      uVar1 = *(uint *)(lVar4 + 0x198);
      uVar5 = (ulonglong)uVar1;
      if ((((byte)uVar1 & 3) != 3) && (uVar5 = (ulonglong)(uVar1 >> 2), (uVar1 >> 2 & 1) != 0)) {
        *(longlong *)(&stack0xfffffffffffffff8 + lVar2 + uVar3 * 8) = lVar4;
        uVar3 = (ulonglong)((int)uVar3 + 1);
        uVar6 = (ulonglong)(uint)((int)uVar6 + *(int *)(lVar4 + 0x148));
      }
      lVar4 = *(longlong *)(lVar4 + 0x18);
    } while (lVar4 != 0);
    if ((int)uVar3 != 0) {
      *(undefined1 **)((longlong)alStack_18 + lVar2) = &stack0xfffffffffffffff8 + lVar2;
      *(undefined8 *)((longlong)auStack_40 + lVar2) = 0x14537dba4;
      FUN_14537efc0(param_1,param_2);
      return param_2;
    }
  }
  *(undefined8 *)((longlong)auStack_40 + lVar2) = 0x14537dbbc;
  FUN_145071a20(param_2,uVar5,uVar6);
  return param_2;
}



// FUNCTION 14537dbd0 FUN_14537dbd0 body=865 status=ok
// SIG undefined FUN_14537dbd0(void)

void FUN_14537dbd0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  short *psVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  float fVar20;
  longlong local_res10;
  undefined4 *local_res18;
  
  uVar16 = 0;
  bVar5 = *(byte *)(param_1 + 0x1b4) & 1;
  if ((bVar5 == 0) || ((*(byte *)(param_1 + 0x1b4) & 2) != 0)) {
    uVar13 = uVar16;
    if (bVar5 == 0) {
      uVar13 = 0xf;
    }
    FUN_14537a700(param_1,uVar13);
  }
  if ((*(longlong *)(param_1 + 0x198) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x88) == 0)) {
    bVar3 = false;
    bVar4 = false;
  }
  else {
    bVar3 = true;
    bVar4 = true;
    if (*(int *)(param_1 + 0x178) == 0) {
      LOCK();
      UNLOCK();
      uVar15 = DAT_14c7fdcb0 + 1;
      DAT_14c7fdcb0 = DAT_14c7fdcb0 + 1;
      lVar7 = FUN_14537bcc0(param_1,uVar15 & 0xffffffffffffff,*(undefined4 *)(param_1 + 0x168));
      if (lVar7 == 0) {
        return;
      }
    }
    plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88);
    (**(code **)(*plVar19 + 0x50))(plVar19,*(undefined8 *)(param_1 + 0x170));
  }
  local_res10 = param_1 + 0x170;
  if (*(int *)(param_1 + 0x1b8) == 1) {
    lVar7 = param_1 + 0xa8;
    do {
      FUN_14537cd80(lVar7,&local_res10,uVar16,param_1);
      uVar16 = uVar16 + 1;
      lVar7 = lVar7 + 0x30;
    } while (uVar16 < 4);
  }
  plVar19 = (longlong *)(param_1 + 0x170);
  if (*(short *)(param_1 + 0x1b0) == 0) {
    iVar14 = 3;
    psVar8 = (short *)(param_1 + 0x164);
    lVar7 = 3;
    do {
      if ((*(char *)((longlong)psVar8 + -5) == '\0') && (*psVar8 == 0)) {
        plVar19 = (longlong *)((longlong)iVar14 * 0x30 + 0xb8 + param_1);
        break;
      }
      iVar14 = iVar14 + -1;
      psVar8 = psVar8 + -0x18;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  FUN_14537e4f0(param_1,plVar19);
  if (bVar3) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88);
    (**(code **)(*plVar2 + 0x58))(plVar2,*plVar19);
  }
  puVar17 = (undefined4 *)*plVar19;
  bVar5 = *(byte *)(param_1 + 0x98) >> 2 | *(byte *)(param_1 + 0x99);
  puVar18 = puVar17 + (ulonglong)*(uint *)(plVar19 + 1) * 0xc;
  if (puVar17 != puVar18) {
    puVar12 = puVar17 + 2;
    do {
      puVar12[7] = *puVar12;
      *(byte *)(puVar12 + 6) = bVar5 & 0x1f;
      puVar1 = puVar12 + 10;
      puVar12 = puVar12 + 0xc;
    } while (puVar1 != puVar18);
  }
  *(undefined4 *)(param_1 + 0x18c) = 1;
  *(byte *)(param_1 + 0x188) = bVar5 & 0x10;
  local_res18 = puVar17;
  uVar6 = FUN_145377000(param_1 + 0x70);
  lVar9 = FUN_145377010(param_1 + 0x70);
  fVar20 = *(float *)(param_1 + 0x94);
  puVar12 = puVar17;
  lVar7 = lVar9;
  for (; local_res10 = lVar7, puVar17 != puVar18; puVar17 = puVar17 + 0xc) {
    bVar5 = *(byte *)(param_1 + 0x98);
    lVar7 = FUN_145379bb0(puVar17 + 8);
    if ((lVar7 != 0) &&
       (FUN_145379740(fVar20 * *(float *)(*(longlong *)(puVar17 + 6) + 0x54),puVar17,lVar7),
       (bVar5 & 0x7c) != 0)) {
      FUN_1450b1ae0(DAT_14c790fc8,uVar6,lVar9,lVar7,*(undefined4 *)(lVar7 + 0x20));
    }
    puVar12 = local_res18;
    lVar7 = local_res10;
  }
  lVar9 = FUN_145379bb0(param_1 + 0x188);
  if (lVar9 != 0) {
    fVar20 = 0.0;
    for (; puVar12 != puVar18; puVar12 = puVar12 + 0xc) {
      lVar10 = FUN_145379bb0(puVar12 + 8);
      if (lVar10 != 0) {
        fVar20 = fVar20 + *(float *)(lVar10 + 0x18);
      }
    }
    *(float *)(lVar9 + 0x18) = fVar20;
    if ((*(byte *)(param_1 + 0x98) & 0x7c) != 0) {
      FUN_1450b1ae0(DAT_14c790fc8,uVar6,lVar7,lVar9,*(undefined4 *)(lVar9 + 0x20));
    }
  }
  if (bVar4) {
    lVar7 = *plVar19;
    plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x198) + 0x88);
    lVar9 = *plVar19;
    uVar11 = FUN_145379bb0(lVar7 + 0x20);
    (**(code **)(lVar9 + 0x60))(plVar19,lVar7,uVar11);
  }
  return;
}



// FUNCTION 14537df40 FUN_14537df40 body=1442 status=ok
// SIG undefined FUN_14537df40(void)

void FUN_14537df40(longlong param_1)

{
  void *pvVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  char local_res8 [8];
  
  uVar8 = *(int *)(param_1 + 0x178) - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 0x30;
    do {
      bVar5 = *(byte *)(param_1 + 0x180);
      if ((char)bVar5 < '\0') {
        lVar6 = *(longlong *)(param_1 + 0x170);
LAB_14537dfc4:
        cVar2 = *(int *)(lVar6 + 0xc + lVar9) == 0x11;
      }
      else {
        iVar4 = (int)*(char *)((longlong)(char)bVar5 + 0x181 + param_1);
        if (iVar4 <= (int)(uint)bVar5) {
          lVar6 = *(longlong *)(param_1 + 0xb8 + (ulonglong)bVar5 * 0x30);
          goto LAB_14537dfc4;
        }
        cVar2 = FUN_14537bf90(param_1,iVar4,(ulonglong)uVar8);
      }
      if (cVar2 != '\0') {
        if ((ulonglong)uVar8 * 0x30 + *(longlong *)(param_1 + 0x170) <
            (ulonglong)*(uint *)(param_1 + 0x178) * 0x30 + -0x30 + *(longlong *)(param_1 + 0x170)) {
          FUN_14537a1c0();
        }
        lVar6 = (ulonglong)*(uint *)(param_1 + 0x178) * 0x30 + *(longlong *)(param_1 + 0x170);
        if (*(void **)(lVar6 + -0x30) != (void *)0x0) {
          AK::MemoryMgr::Free(5,*(void **)(lVar6 + -0x30));
          *(undefined8 *)(lVar6 + -0x30) = 0;
          *(undefined2 *)(lVar6 + -0x1e) = 0;
        }
        pvVar1 = *(void **)(lVar6 + -0x18);
        if (pvVar1 != (void *)0x0) {
          FUN_145355270();
          AK::MemoryMgr::Free(0,pvVar1);
        }
        pvVar1 = *(void **)(lVar6 + -8);
        if (pvVar1 != (void *)0x0) {
          FUN_145379670(pvVar1,0);
          AK::MemoryMgr::Free(0xe,pvVar1);
          *(undefined8 *)(lVar6 + -8) = 0;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
      }
      lVar9 = lVar9 + -0x30;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  lVar9 = param_1 + 0xa8;
  bVar5 = 0;
  plVar3 = (longlong *)(param_1 + 0x170);
  do {
    plVar3 = (longlong *)FUN_14537cad0(lVar9,param_1,bVar5,plVar3,local_res8);
    if (local_res8[0] != '\0') {
      iVar4 = -1;
      do {
        cVar2 = (char)iVar4;
        if ((int)*(char *)((longlong)cVar2 + 0x181 + param_1) == (uint)bVar5) {
          *(char *)((longlong)cVar2 + 0x181 + param_1) = cVar2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)bVar5);
    }
    bVar5 = bVar5 + 1;
    lVar9 = lVar9 + 0x30;
  } while (bVar5 < 4);
  puVar7 = *(undefined8 **)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x1b8) = 4;
  if (puVar7 != puVar7 + (ulonglong)*(uint *)(param_1 + 0x178) * 6) {
    do {
      memset((void *)*puVar7,0,
             (ulonglong)((uint)*(byte *)(puVar7 + 1) * (uint)*(ushort *)(puVar7 + 2) * 4));
      lVar9 = puVar7[3];
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x11;
      *(undefined2 *)((longlong)puVar7 + 0x12) = 0;
      if (*(longlong *)(lVar9 + 0x60) != 0) {
        *(undefined4 *)(lVar9 + 0x68) = 0;
        (**(code **)(**(longlong **)(lVar9 + 0x58) + 0x10))();
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(undefined4 *)(lVar9 + 0x6c) = 0;
      }
      if (*(char *)(lVar9 + 0x88) == '\0') {
        *(undefined8 *)(lVar9 + 0x80) = 0;
      }
      *(undefined4 *)(param_1 + 0x1b8) = 1;
      puVar7 = puVar7 + 6;
    } while (puVar7 != (undefined8 *)
                       ((ulonglong)*(uint *)(param_1 + 0x178) * 0x30 +
                       *(longlong *)(param_1 + 0x170)));
  }
  if (*(short *)(param_1 + 0x1b0) == 0) {
    if ((((*(int *)(param_1 + 0xc0) != 0) && (*(short *)(param_1 + 0xd4) == 0)) &&
        (*(undefined4 *)(param_1 + 0x1b8) = 1, *(char *)(param_1 + 0xcf) == '\0')) &&
       (lVar9 = *(longlong *)(param_1 + 0xb8),
       lVar9 != (ulonglong)*(uint *)(param_1 + 0xc0) * 0x30 + lVar9)) {
      do {
        lVar6 = *(longlong *)(lVar9 + 0x18);
        *(undefined4 *)(lVar9 + 0xc) = 0x11;
        *(undefined2 *)(lVar9 + 0x12) = 0;
        if (*(longlong *)(lVar6 + 0x60) != 0) {
          *(undefined4 *)(lVar6 + 0x68) = 0;
          (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x10))();
          *(undefined8 *)(lVar6 + 0x60) = 0;
          *(undefined4 *)(lVar6 + 0x6c) = 0;
        }
        if (*(char *)(lVar6 + 0x88) == '\0') {
          *(undefined8 *)(lVar6 + 0x80) = 0;
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != (ulonglong)*(uint *)(param_1 + 0xc0) * 0x30 + *(longlong *)(param_1 + 0xb8))
      ;
    }
    if (((*(int *)(param_1 + 0xf0) != 0) && (*(short *)(param_1 + 0x104) == 0)) &&
       ((*(undefined4 *)(param_1 + 0x1b8) = 1, *(char *)(param_1 + 0xff) == '\0' &&
        ((*(short *)(param_1 + 0x104) == 0 &&
         (lVar9 = *(longlong *)(param_1 + 0xe8),
         lVar9 != (ulonglong)*(uint *)(param_1 + 0xf0) * 0x30 + lVar9)))))) {
      do {
        *(undefined4 *)(lVar9 + 0xc) = 0x11;
        *(undefined2 *)(lVar9 + 0x12) = 0;
        lVar6 = *(longlong *)(lVar9 + 0x18);
        if (*(longlong *)(lVar6 + 0x60) != 0) {
          *(undefined4 *)(lVar6 + 0x68) = 0;
          (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x10))();
          *(undefined8 *)(lVar6 + 0x60) = 0;
          *(undefined4 *)(lVar6 + 0x6c) = 0;
        }
        if (*(char *)(lVar6 + 0x88) == '\0') {
          *(undefined8 *)(lVar6 + 0x80) = 0;
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != (ulonglong)*(uint *)(param_1 + 0xf0) * 0x30 + *(longlong *)(param_1 + 0xe8))
      ;
    }
    if ((((*(int *)(param_1 + 0x120) != 0) && (*(short *)(param_1 + 0x134) == 0)) &&
        (*(undefined4 *)(param_1 + 0x1b8) = 1, *(char *)(param_1 + 0x12f) == '\0')) &&
       ((*(short *)(param_1 + 0x134) == 0 &&
        (lVar9 = *(longlong *)(param_1 + 0x118),
        lVar9 != (ulonglong)*(uint *)(param_1 + 0x120) * 0x30 + lVar9)))) {
      do {
        *(undefined4 *)(lVar9 + 0xc) = 0x11;
        *(undefined2 *)(lVar9 + 0x12) = 0;
        lVar6 = *(longlong *)(lVar9 + 0x18);
        if (*(longlong *)(lVar6 + 0x60) != 0) {
          *(undefined4 *)(lVar6 + 0x68) = 0;
          (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x10))();
          *(undefined8 *)(lVar6 + 0x60) = 0;
          *(undefined4 *)(lVar6 + 0x6c) = 0;
        }
        if (*(char *)(lVar6 + 0x88) == '\0') {
          *(undefined8 *)(lVar6 + 0x80) = 0;
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != (ulonglong)*(uint *)(param_1 + 0x120) * 0x30 +
                        *(longlong *)(param_1 + 0x118));
    }
    if (((*(int *)(param_1 + 0x150) != 0) && (*(short *)(param_1 + 0x164) == 0)) &&
       ((*(undefined4 *)(param_1 + 0x1b8) = 1, *(char *)(param_1 + 0x15f) == '\0' &&
        ((*(short *)(param_1 + 0x164) == 0 &&
         (lVar9 = *(longlong *)(param_1 + 0x148),
         lVar9 != (ulonglong)*(uint *)(param_1 + 0x150) * 0x30 + lVar9)))))) {
      do {
        *(undefined4 *)(lVar9 + 0xc) = 0x11;
        *(undefined2 *)(lVar9 + 0x12) = 0;
        lVar6 = *(longlong *)(lVar9 + 0x18);
        if (*(longlong *)(lVar6 + 0x60) != 0) {
          *(undefined4 *)(lVar6 + 0x68) = 0;
          (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x10))();
          *(undefined8 *)(lVar6 + 0x60) = 0;
          *(undefined4 *)(lVar6 + 0x6c) = 0;
        }
        if (*(char *)(lVar6 + 0x88) == '\0') {
          *(undefined8 *)(lVar6 + 0x80) = 0;
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != (ulonglong)*(uint *)(param_1 + 0x150) * 0x30 +
                        *(longlong *)(param_1 + 0x148));
    }
  }
  FUN_14538a060(param_1);
  return;
}



// FUNCTION 14537e4f0 FUN_14537e4f0 body=2765 status=ok
// SIG undefined FUN_14537e4f0(void)

void FUN_14537e4f0(ulonglong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  uint *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong *puVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 uVar32;
  int iVar33;
  uint uVar34;
  undefined4 uVar35;
  ulonglong local_res8;
  longlong *local_res10;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 uStack_5c;
  uint uStack_4c;
  
  if (*(int *)(param_1 + 0x1b8) == 1) {
    *(undefined2 *)(param_1 + 0x1b2) = *(undefined2 *)(param_1 + 0x1b0);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    lVar17 = 0;
    if ((*(byte *)(lVar5 + 0x19c) & 0x40) != 0) {
      lVar17 = *(longlong *)(lVar5 + 0x1a0);
    }
    lVar27 = *param_2;
    uVar30 = *(uint *)(lVar5 + 0x200);
    iVar33 = (lVar17 != 0) + uVar30;
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18[0] = uVar30;
    if (lVar27 != (ulonglong)*(uint *)(param_2 + 1) * 0x30 + lVar27) {
      do {
        lVar28 = *(longlong *)(lVar27 + 0x18);
        if (lVar17 != 0) {
          piVar6 = *(int **)(lVar28 + 0x60);
          uVar29 = (ulonglong)*(uint *)(lVar28 + 0x68);
          piVar18 = piVar6;
          param_2 = local_res10;
          if (piVar6 != piVar6 + uVar29 * 6) {
            do {
              if (*piVar18 == 0x3850009) {
                if (piVar18 != piVar6 + uVar29 * 6) {
                  piVar6 = piVar6 + (uVar29 - 1) * 6;
                  if (piVar18 < piVar6) {
                    iVar10 = piVar6[1];
                    iVar11 = piVar6[2];
                    iVar12 = piVar6[3];
                    *piVar18 = *piVar6;
                    piVar18[1] = iVar10;
                    piVar18[2] = iVar11;
                    piVar18[3] = iVar12;
                    *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar6 + 4);
                  }
                  *(int *)(lVar28 + 0x68) = *(int *)(lVar28 + 0x68) + -1;
                }
                break;
              }
              piVar18 = piVar18 + 6;
            } while (piVar18 != piVar6 + uVar29 * 6);
          }
        }
        uVar16 = *(uint *)(lVar28 + 0x68);
        uVar34 = uVar16 + iVar33;
        if (iVar33 == 0) goto LAB_14537e68c;
        if ((uVar34 < uVar16) || (uVar34 <= *(uint *)(lVar28 + 0x6c))) {
LAB_14537e886:
          *(uint *)(lVar28 + 0x68) = uVar34;
          FUN_1450e8a10(lVar5,*(longlong *)(lVar28 + 0x60) + (ulonglong)uVar16 * 0x18,uVar30);
          param_2 = local_res10;
          if (lVar17 != 0) {
            lVar28 = *(longlong *)(lVar28 + 0x60);
            puVar2 = (undefined4 *)(lVar28 + (ulonglong)uVar30 * 0x18);
            *puVar2 = 0x3850009;
            puVar2[1] = uStack_5c;
            *(longlong *)(puVar2 + 2) = lVar5 + 0x68;
            *(ulonglong *)(lVar28 + 0x10 + (ulonglong)uVar30 * 0x18) = (ulonglong)uStack_4c << 0x20;
          }
        }
        else {
          plVar21 = *(longlong **)(lVar28 + 0x58);
          uVar29 = (ulonglong)uVar16;
          if (*(longlong *)(lVar28 + 0x60) == 0) {
            lVar19 = (**(code **)(*plVar21 + 8))
                               (plVar21,(ulonglong)uVar34 * 0x18,
                                "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                                ,0xcc);
            param_2 = local_res10;
            uVar30 = local_res18[0];
            if (lVar19 != 0) {
              if ((*(longlong *)(lVar28 + 0x60) != 0) && (*(longlong *)(lVar28 + 0x60) != lVar19)) {
                if (uVar16 != 0) {
                  lVar23 = 0;
                  do {
                    lVar7 = *(longlong *)(lVar28 + 0x60);
                    lVar26 = lVar23 + 0x18;
                    puVar2 = (undefined4 *)(lVar23 + lVar7);
                    uVar35 = puVar2[1];
                    uVar13 = puVar2[2];
                    uVar14 = puVar2[3];
                    puVar3 = (undefined4 *)(lVar19 + -0x18 + lVar26);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar35;
                    puVar3[2] = uVar13;
                    puVar3[3] = uVar14;
                    *(undefined8 *)(lVar19 + -8 + lVar26) = *(undefined8 *)(lVar23 + 0x10 + lVar7);
                    uVar29 = uVar29 - 1;
                    lVar23 = lVar26;
                  } while (uVar29 != 0);
                }
                (**(code **)(**(longlong **)(lVar28 + 0x58) + 0x10))
                          (*(longlong **)(lVar28 + 0x58),*(undefined8 *)(lVar28 + 0x60));
              }
              goto LAB_14537e872;
            }
          }
          else {
            lVar19 = (**(code **)(*plVar21 + 0x20))
                               (plVar21,*(longlong *)(lVar28 + 0x60),(ulonglong)uVar34 * 0x18,
                                "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                                ,0xcd);
            param_2 = local_res10;
            uVar30 = local_res18[0];
            if (lVar19 != 0) {
LAB_14537e872:
              *(longlong *)(lVar28 + 0x60) = lVar19;
              *(uint *)(lVar28 + 0x6c) = uVar34;
              uVar30 = local_res18[0];
              goto LAB_14537e886;
            }
          }
        }
LAB_14537e68c:
        lVar27 = lVar27 + 0x30;
      } while (lVar27 != (ulonglong)*(uint *)(param_2 + 1) * 0x30 + *param_2);
    }
    uVar29 = local_res8;
    for (lVar17 = *(longlong *)(local_res8 + 0x38); lVar17 != 0;
        lVar17 = *(longlong *)(lVar17 + 0x20)) {
      lVar27 = *(longlong *)(lVar17 + 0x140);
      if (lVar27 != (ulonglong)*(uint *)(lVar17 + 0x148) * 0x118 + lVar27) {
        puVar20 = (uint *)(lVar27 + 0x10c);
        do {
          *(undefined1 *)puVar20 = 0;
          *puVar20 = *puVar20 & 0xff;
          puVar1 = puVar20 + 3;
          puVar20 = puVar20 + 0x46;
        } while (puVar1 != (uint *)((ulonglong)*(uint *)(lVar17 + 0x148) * 0x118 +
                                   *(longlong *)(lVar17 + 0x140)));
      }
      local_res8 = uVar29;
      puVar20 = (uint *)FUN_1453557d0(lVar17,local_res18);
      if ((((*puVar20 & 0xf00) == 0x300) && (1 < *(uint *)(lVar5 + 0x1b0))) &&
         (*(int *)(lVar17 + 0x194) != 3)) {
        lVar27 = *(longlong *)(lVar17 + 0x170);
        lVar28 = *local_res10;
        plVar21 = local_res10;
        if (lVar28 != (ulonglong)*(uint *)(local_res10 + 1) * 0x30 + lVar28) {
          do {
            uVar32 = 1;
            plVar21 = *(longlong **)(lVar17 + 0x140);
            plVar22 = plVar21 + (ulonglong)*(uint *)(lVar17 + 0x148) * 0x23;
            for (; plVar21 != plVar22; plVar21 = plVar21 + 0x23) {
              if (**(longlong **)(lVar28 + 0x18) == *plVar21) {
                uVar30 = *(uint *)(plVar21 + 0x18) & 0xf00;
                if ((uVar30 < 0x301) &&
                   (((char)*(uint *)(plVar21 + 0x18) != '\0' || (uVar30 == 0x300)))) {
                  uVar32 = 0;
                  break;
                }
              }
            }
            uVar29 = 0;
            if (*(int *)(lVar5 + 0x1b0) != 0) {
              do {
                if (lVar27 == *(longlong *)(*(longlong *)(lVar5 + 0x1a8) + 0x70 + uVar29 * 0x90)) {
                  plVar21 = *(longlong **)(lVar17 + 0x140);
                  plVar22 = plVar21 + (ulonglong)*(uint *)(lVar17 + 0x148) * 0x23;
                  for (; (plVar21 != plVar22 &&
                         ((*plVar21 != **(longlong **)(lVar28 + 0x18) ||
                          ((int)plVar21[2] !=
                           *(int *)(*(longlong *)(lVar5 + 0x1a8) + 0x68 + uVar29 * 0x90)))));
                      plVar21 = plVar21 + 0x23) {
                  }
                  if (plVar21 ==
                      (longlong *)
                      ((ulonglong)*(uint *)(lVar17 + 0x148) * 0x118 + *(longlong *)(lVar17 + 0x140))
                     ) {
                    plVar21 = (longlong *)FUN_145355940();
                  }
                  if (plVar21 != (longlong *)0x0) {
                    *(undefined4 *)((longlong)plVar21 + 0x10c) = *(undefined4 *)(lVar28 + 8);
                    *(undefined1 *)(plVar21 + 0x22) = 0;
                    plVar21[3] = lVar28;
                    lVar19 = *(longlong *)(lVar28 + 0x18);
                    lVar23 = *(longlong *)(lVar19 + 0x10);
                    plVar21[5] = *(longlong *)(lVar19 + 8);
                    plVar21[6] = lVar23;
                    lVar23 = *(longlong *)(lVar19 + 0x20);
                    plVar21[7] = *(longlong *)(lVar19 + 0x18);
                    plVar21[8] = lVar23;
                    lVar23 = *(longlong *)(lVar19 + 0x30);
                    plVar21[9] = *(longlong *)(lVar19 + 0x28);
                    plVar21[10] = lVar23;
                    lVar23 = *(longlong *)(lVar19 + 0x40);
                    plVar21[0xb] = *(longlong *)(lVar19 + 0x38);
                    plVar21[0xc] = lVar23;
                    plVar21[0xd] = *(longlong *)(lVar19 + 0x48);
                    plVar21[0xe] = *(longlong *)(lVar19 + 0x50);
                    *(undefined4 *)(plVar21 + 0x11) = 0;
                    cVar15 = FUN_1450cc210(plVar21 + 0xf,*(undefined4 *)(lVar19 + 0x68));
                    if ((cVar15 != '\0') && (uVar31 = 0, *(int *)(lVar19 + 0x68) != 0)) {
                      do {
                        lVar23 = *(longlong *)(lVar19 + 0x60);
                        lVar26 = plVar21[0x10];
                        uVar30 = (int)uVar31 + 1;
                        puVar2 = (undefined4 *)(lVar23 + uVar31 * 0x18);
                        uVar35 = puVar2[1];
                        uVar13 = puVar2[2];
                        uVar14 = puVar2[3];
                        puVar3 = (undefined4 *)(lVar26 + uVar31 * 0x18);
                        *puVar3 = *puVar2;
                        puVar3[1] = uVar35;
                        puVar3[2] = uVar13;
                        puVar3[3] = uVar14;
                        *(undefined8 *)(lVar26 + 0x10 + uVar31 * 0x18) =
                             *(undefined8 *)(lVar23 + 0x10 + uVar31 * 0x18);
                        uVar31 = (ulonglong)uVar30;
                      } while (uVar30 < *(uint *)(lVar19 + 0x68));
                    }
                    *(undefined4 *)(plVar21 + 0x12) = *(undefined4 *)(lVar19 + 0x70);
                    lVar23 = *(longlong *)(lVar19 + 0x80);
                    if ((plVar21[0x14] != 0) && ((char)plVar21[0x15] != '\0')) {
                      (**(code **)(*(longlong *)plVar21[0x13] + 0x10))();
                      *(undefined1 *)(plVar21 + 0x15) = 0;
                    }
                    plVar21[0x14] = lVar23;
                    plVar21[0x13] = *(longlong *)(lVar19 + 0x78);
                    *(undefined1 *)(plVar21 + 0x16) = *(undefined1 *)(lVar19 + 0x90);
                    *(undefined1 *)(plVar21 + 0x21) = uVar32;
                  }
                }
                uVar30 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar30;
              } while (uVar30 < *(uint *)(lVar5 + 0x1b0));
            }
            lVar28 = lVar28 + 0x30;
            plVar21 = local_res10;
          } while (lVar28 != (ulonglong)*(uint *)(local_res10 + 1) * 0x30 + *local_res10);
        }
      }
      else {
        puVar20 = (uint *)FUN_1453557d0(lVar17,local_res20);
        plVar21 = local_res10;
        if (((*puVar20 & 0xf00) == 0x300) && (*(int *)(*(longlong *)(uVar29 + 8) + 0x1b0) != 0)) {
          iVar33 = *(int *)(*(longlong *)(*(longlong *)(uVar29 + 8) + 0x1a8) + 0x68);
        }
        else {
          iVar33 = 0;
        }
        lVar27 = *local_res10;
        if (lVar27 != (ulonglong)*(uint *)(local_res10 + 1) * 0x30 + lVar27) {
          do {
            plVar22 = *(longlong **)(lVar17 + 0x140);
            plVar25 = plVar22 + (ulonglong)*(uint *)(lVar17 + 0x148) * 0x23;
            for (; (plVar22 != plVar25 &&
                   ((*plVar22 != **(longlong **)(lVar27 + 0x18) || ((int)plVar22[2] != iVar33))));
                plVar22 = plVar22 + 0x23) {
            }
            if (plVar22 ==
                (longlong *)
                ((ulonglong)*(uint *)(lVar17 + 0x148) * 0x118 + *(longlong *)(lVar17 + 0x140))) {
              plVar22 = (longlong *)FUN_145355940(lVar17,**(longlong **)(lVar27 + 0x18),iVar33);
            }
            if (plVar22 != (longlong *)0x0) {
              *(undefined4 *)((longlong)plVar22 + 0x10c) = *(undefined4 *)(lVar27 + 8);
              *(undefined1 *)(plVar22 + 0x22) = 0;
              plVar22[3] = lVar27;
              lVar28 = *(longlong *)(lVar27 + 0x18);
              lVar19 = *(longlong *)(lVar28 + 0x10);
              plVar22[5] = *(longlong *)(lVar28 + 8);
              plVar22[6] = lVar19;
              lVar19 = *(longlong *)(lVar28 + 0x20);
              plVar22[7] = *(longlong *)(lVar28 + 0x18);
              plVar22[8] = lVar19;
              lVar19 = *(longlong *)(lVar28 + 0x30);
              plVar22[9] = *(longlong *)(lVar28 + 0x28);
              plVar22[10] = lVar19;
              lVar19 = *(longlong *)(lVar28 + 0x40);
              plVar22[0xb] = *(longlong *)(lVar28 + 0x38);
              plVar22[0xc] = lVar19;
              plVar22[0xd] = *(longlong *)(lVar28 + 0x48);
              plVar22[0xe] = *(longlong *)(lVar28 + 0x50);
              *(undefined4 *)(plVar22 + 0x11) = 0;
              cVar15 = FUN_1450cc210(plVar22 + 0xf,*(undefined4 *)(lVar28 + 0x68));
              if ((cVar15 != '\0') && (uVar29 = 0, *(int *)(lVar28 + 0x68) != 0)) {
                do {
                  lVar19 = plVar22[0x10];
                  uVar30 = (int)uVar29 + 1;
                  lVar23 = *(longlong *)(lVar28 + 0x60);
                  puVar2 = (undefined4 *)(lVar23 + uVar29 * 0x18);
                  uVar35 = puVar2[1];
                  uVar13 = puVar2[2];
                  uVar14 = puVar2[3];
                  puVar3 = (undefined4 *)(lVar19 + uVar29 * 0x18);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar35;
                  puVar3[2] = uVar13;
                  puVar3[3] = uVar14;
                  *(undefined8 *)(lVar19 + 0x10 + uVar29 * 0x18) =
                       *(undefined8 *)(lVar23 + 0x10 + uVar29 * 0x18);
                  uVar29 = (ulonglong)uVar30;
                } while (uVar30 < *(uint *)(lVar28 + 0x68));
              }
              *(undefined4 *)(plVar22 + 0x12) = *(undefined4 *)(lVar28 + 0x70);
              lVar19 = *(longlong *)(lVar28 + 0x80);
              if ((plVar22[0x14] != 0) && ((char)plVar22[0x15] != '\0')) {
                (**(code **)(*(longlong *)plVar22[0x13] + 0x10))();
                *(undefined1 *)(plVar22 + 0x15) = 0;
              }
              plVar22[0x14] = lVar19;
              plVar22[0x13] = *(longlong *)(lVar28 + 0x78);
              *(undefined1 *)(plVar22 + 0x16) = *(undefined1 *)(lVar28 + 0x90);
              *(undefined1 *)(plVar22 + 0x21) = 1;
            }
            lVar27 = lVar27 + 0x30;
          } while (lVar27 != (ulonglong)*(uint *)(plVar21 + 1) * 0x30 + *plVar21);
        }
      }
      uVar29 = (ulonglong)*(uint *)(lVar17 + 0x148);
      if (*(uint *)(lVar17 + 0x148) != 0) {
        lVar27 = uVar29 * 0x118;
        do {
          lVar19 = *(longlong *)(lVar17 + 0x140);
          lVar28 = lVar27 + -0x118;
          uVar34 = (int)uVar29 - 1;
          uVar29 = (ulonglong)uVar34;
          uVar30 = *(uint *)(lVar27 + -0xc + lVar19);
          uVar16 = uVar30 & 0xf00;
          if ((0x300 < uVar16) || (((char)uVar30 == '\0' && (uVar16 != 0x300)))) {
            if (*(char *)(lVar27 + -8 + lVar19) == '\0') {
              lVar23 = *plVar21;
              lVar26 = (ulonglong)*(uint *)(plVar21 + 1) * 0x30 + lVar23;
              if (lVar23 != lVar26) {
LAB_14537ed52:
                if (*(longlong *)(lVar28 + lVar19) != **(longlong **)(lVar23 + 0x18))
                goto code_r0x00014537ed5f;
                lVar26 = lVar28 + lVar19;
                *(undefined4 *)(lVar27 + -0xc + lVar19) = *(undefined4 *)(lVar23 + 8);
                *(undefined1 *)(lVar27 + -8 + lVar19) = 0;
                *(longlong *)(lVar27 + -0x100 + lVar19) = lVar23;
                lVar23 = *(longlong *)(lVar23 + 0x18);
                uVar9 = *(undefined8 *)(lVar23 + 0x10);
                puVar4 = (undefined8 *)(lVar27 + -0xf0 + lVar19);
                *puVar4 = *(undefined8 *)(lVar23 + 8);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(lVar23 + 0x20);
                puVar4 = (undefined8 *)(lVar27 + -0xe0 + lVar19);
                *puVar4 = *(undefined8 *)(lVar23 + 0x18);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(lVar23 + 0x30);
                puVar4 = (undefined8 *)(lVar27 + -0xd0 + lVar19);
                *puVar4 = *(undefined8 *)(lVar23 + 0x28);
                puVar4[1] = uVar9;
                uVar9 = *(undefined8 *)(lVar23 + 0x40);
                puVar4 = (undefined8 *)(lVar27 + -0xc0 + lVar19);
                *puVar4 = *(undefined8 *)(lVar23 + 0x38);
                puVar4[1] = uVar9;
                *(undefined8 *)(lVar27 + -0xb0 + lVar19) = *(undefined8 *)(lVar23 + 0x48);
                *(undefined8 *)(lVar27 + -0xa8 + lVar19) = *(undefined8 *)(lVar23 + 0x50);
                *(undefined4 *)(lVar26 + 0x88) = 0;
                cVar15 = FUN_1450cc210(lVar26 + 0x78,*(undefined4 *)(lVar23 + 0x68));
                if ((cVar15 != '\0') && (uVar31 = 0, *(int *)(lVar23 + 0x68) != 0)) {
                  do {
                    lVar7 = *(longlong *)(lVar26 + 0x80);
                    uVar30 = (int)uVar31 + 1;
                    lVar8 = *(longlong *)(lVar23 + 0x60);
                    puVar2 = (undefined4 *)(lVar8 + uVar31 * 0x18);
                    uVar35 = puVar2[1];
                    uVar13 = puVar2[2];
                    uVar14 = puVar2[3];
                    puVar3 = (undefined4 *)(lVar7 + uVar31 * 0x18);
                    *puVar3 = *puVar2;
                    puVar3[1] = uVar35;
                    puVar3[2] = uVar13;
                    puVar3[3] = uVar14;
                    *(undefined8 *)(lVar7 + 0x10 + uVar31 * 0x18) =
                         *(undefined8 *)(lVar8 + 0x10 + uVar31 * 0x18);
                    uVar31 = (ulonglong)uVar30;
                  } while (uVar30 < *(uint *)(lVar23 + 0x68));
                }
                *(undefined4 *)(lVar27 + -0x88 + lVar19) = *(undefined4 *)(lVar23 + 0x70);
                uVar9 = *(undefined8 *)(lVar23 + 0x80);
                if ((*(longlong *)(lVar27 + -0x78 + lVar19) != 0) &&
                   (*(char *)(lVar27 + -0x70 + lVar19) != '\0')) {
                  (**(code **)(**(longlong **)(lVar27 + -0x80 + lVar19) + 0x10))();
                  *(undefined1 *)(lVar27 + -0x70 + lVar19) = 0;
                }
                *(undefined8 *)(lVar27 + -0x78 + lVar19) = uVar9;
                *(undefined8 *)(lVar27 + -0x80 + lVar19) = *(undefined8 *)(lVar23 + 0x78);
                *(undefined1 *)(lVar27 + -0x68 + lVar19) = *(undefined1 *)(lVar23 + 0x90);
                *(undefined1 *)(lVar27 + -0x10 + lVar19) = 0;
                *(undefined1 *)(lVar27 + -8 + lVar19) = 1;
                goto LAB_14537edce;
              }
            }
LAB_14537ed68:
            if ((ulonglong)(lVar28 + lVar19) <
                (ulonglong)*(uint *)(lVar17 + 0x148) * 0x118 + -0x118 + lVar19) {
              FUN_145355570();
            }
            lVar27 = (ulonglong)*(uint *)(lVar17 + 0x148) * 0x118 + *(longlong *)(lVar17 + 0x140);
            FUN_14553c660(lVar27 + -0x30);
            FUN_145381df0(lVar27 + -0x58);
            FUN_145381d30(lVar27 + -0x58);
            FUN_145355270();
            *(int *)(lVar17 + 0x148) = *(int *)(lVar17 + 0x148) + -1;
          }
LAB_14537edce:
          lVar27 = lVar28;
        } while (uVar34 != 0);
      }
      uVar29 = local_res8;
    }
    local_res8 = uVar29 & 0xffffffff00000000;
    puVar24 = &local_res8;
    if ((*(byte *)(uVar29 + 0x98) & 2) == 0) {
      puVar24 = (ulonglong *)0x0;
    }
    FUN_14538a410(uVar29,lVar5,0x3f800000,0,puVar24);
    uVar35 = *(undefined4 *)(uVar29 + 0x10);
    if ((*(byte *)(uVar29 + 0x60) & 2) != 0) {
      uVar35 = *(undefined4 *)(uVar29 + 0x94);
    }
    *(undefined4 *)(uVar29 + 0x90) = uVar35;
    *(byte *)(uVar29 + 0x60) = *(byte *)(uVar29 + 0x60) | 2;
    *(undefined4 *)(uVar29 + 0x94) = *(undefined4 *)(uVar29 + 0x10);
  }
  return;
code_r0x00014537ed5f:
  lVar23 = lVar23 + 0x30;
  if (lVar23 == lVar26) goto LAB_14537ed68;
  goto LAB_14537ed52;
}



// FUNCTION 14537efc0 FUN_14537efc0 body=622 status=ok
// SIG undefined FUN_14537efc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14537efc0(longlong param_1,undefined8 param_2,ulonglong param_3,uint param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  float local_38 [8];
  
  uVar17 = (ulonglong)param_4;
  auStack_70[0] = 0x14537eff7;
  FUN_145071a20(param_2);
  if ((*(longlong *)(param_1 + 0x198) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x88) == 0)) {
    uVar14 = (param_3 & 0xffffffff) * 8;
    uVar11 = uVar14 + 0xf;
    if (uVar11 <= uVar14) {
      uVar11 = 0xffffffffffffff0;
    }
    auStack_70[0] = 0x14537f046;
    lVar9 = -(uVar11 & 0xfffffffffffffff0);
    uVar16 = 0;
    uVar11 = uVar14 + 0xf;
    lVar1 = (longlong)local_38 + lVar9;
    if (uVar11 <= uVar14) {
      uVar11 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_70 + lVar9) = 0x14537f069;
    lVar10 = -(uVar11 & 0xfffffffffffffff0);
    lVar2 = (longlong)local_38 + lVar10 + lVar9;
    if (param_4 != 0) {
      do {
        lVar15 = *param_5;
        fVar3 = *(float *)(lVar15 + 8);
        fVar4 = *(float *)(lVar15 + 0xc);
        lVar12 = *(longlong *)(lVar15 + 0x140);
        fVar5 = *(float *)(lVar15 + 0x10);
        fVar6 = *(float *)(lVar15 + 0x14);
        fVar19 = *(float *)(lVar15 + 0x180);
        if (*(float *)(lVar15 + 0x180) <= *(float *)(lVar15 + 0x178)) {
          fVar19 = *(float *)(lVar15 + 0x178);
        }
        fVar20 = *(float *)(lVar15 + 0x184);
        if (*(float *)(lVar15 + 0x184) <= *(float *)(lVar15 + 0x17c)) {
          fVar20 = *(float *)(lVar15 + 0x17c);
        }
        lVar15 = (ulonglong)*(uint *)(lVar15 + 0x148) * 0x118 + lVar12;
        for (; lVar12 != lVar15; lVar12 = lVar12 + 0x118) {
          lVar8 = *(longlong *)(lVar12 + 0x18);
          if ((lVar8 != 0) && (*(longlong *)(lVar12 + 0xe8) != 0)) {
            if (0.0 <= fVar19) {
              fVar18 = fVar19;
              if (100.0 <= fVar19) {
                fVar18 = 100.0;
              }
            }
            else {
              fVar18 = 0.0;
            }
            if (fVar18 != *(float *)(lVar12 + 200)) {
              *(byte *)(lVar12 + 0xcd) = *(byte *)(lVar12 + 0xcd) | 1;
              *(float *)(lVar12 + 200) = fVar18;
            }
            if (0.0 <= fVar20) {
              fVar18 = fVar20;
              if (100.0 <= fVar20) {
                fVar18 = 100.0;
              }
            }
            else {
              fVar18 = 0.0;
            }
            if (fVar18 != *(float *)(lVar12 + 0xd4)) {
              *(byte *)(lVar12 + 0xd9) = *(byte *)(lVar12 + 0xd9) | 1;
              *(float *)(lVar12 + 0xd4) = fVar18;
            }
            iVar7 = *(int *)(lVar8 + 0xc);
            if ((*(short *)(lVar8 + 0x12) != 0) && ((iVar7 == 0x2d || (iVar7 == 0x11)))) {
              *(float *)(lVar2 + uVar16 * 8) = fVar3 * fVar5;
              *(float *)((longlong)local_38 + uVar16 * 8 + lVar10 + lVar9 + 4) = fVar4 * fVar6;
              *(longlong *)(lVar1 + uVar16 * 8) = lVar12;
              if ((iVar7 == 0x11) && (0.0 < fVar19)) {
                *(undefined4 *)((longlong)local_38 + uVar16 * 8 + lVar10 + lVar9 + 4) = 0;
              }
              uVar16 = (ulonglong)((int)uVar16 + 1);
            }
          }
        }
        param_5 = param_5 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if ((int)uVar16 != 0) {
        if (*(int *)(param_1 + 0x1b8) == 4) {
          *(undefined4 *)(param_1 + 0x1b8) = 1;
        }
        if ((*(uint *)(param_1 + 0x168) & 0xf00) == 0x300) {
          *(undefined8 *)((longlong)auStack_70 + lVar10 + lVar9) = 0x14537f20d;
          FUN_14537fa40(param_1,uVar16,lVar1);
        }
        else {
          *(longlong *)((longlong)alStack_48 + lVar10 + lVar9) = lVar2;
          *(undefined8 *)((longlong)auStack_70 + lVar10 + lVar9) = 0x14537f1f6;
          uVar13 = FUN_14537f750(param_1,local_38,uVar16,lVar1);
          *(undefined8 *)((longlong)auStack_70 + lVar10 + lVar9) = 0x14537f201;
          FUN_145071b80(param_2,uVar13);
        }
      }
    }
  }
  else {
    auStack_70[0] = 0x14537f01b;
    FUN_14537f230(param_1,uVar17,param_5);
  }
  return param_2;
}



// FUNCTION 14537f230 FUN_14537f230 body=1304 status=ok
// SIG undefined FUN_14537f230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14537f230(longlong param_1,uint param_2,longlong *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  int iVar27;
  char *pcVar28;
  longlong *plVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_res10;
  uint local_res20;
  undefined8 auStack_130 [5];
  longlong local_108 [2];
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  char *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  char *local_80;
  ulonglong local_78;
  longlong local_70;
  
  uVar23 = (ulonglong)*(uint *)(param_1 + 0x28) * 8;
  uVar31 = uVar23 + 0xf;
  if (uVar31 <= uVar23) {
    uVar31 = 0xffffffffffffff0;
  }
  uVar31 = uVar31 & 0xfffffffffffffff0;
  auStack_130[0] = 0x14537f295;
  lVar9 = -uVar31;
  uVar23 = 0;
  plVar25 = (longlong *)((longlong)&local_f8 + lVar9);
  local_88 = plVar25;
  if (param_2 != 0) {
    uVar32 = (ulonglong)param_2;
    do {
      lVar24 = *param_3;
      if (*(int *)(lVar24 + 0x148) != 0) {
        uVar31 = *(ulonglong *)(lVar24 + 0x140);
        if (((*(longlong *)(uVar31 + 0x18) != 0) && (*(longlong *)(uVar31 + 0xe8) != 0)) &&
           (*(short *)(*(longlong *)(uVar31 + 0x18) + 0x12) != 0)) {
          plVar25[uVar23] = lVar24;
          uVar23 = (ulonglong)((int)uVar23 + 1);
        }
      }
      param_3 = param_3 + 1;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
    if ((uint)uVar23 != 0) {
      if (*(int *)(param_1 + 0x1b8) == 4) {
        *(undefined4 *)(param_1 + 0x1b8) = 1;
      }
      if (*(int *)(param_1 + 0x178) == 0) {
        LOCK();
        UNLOCK();
        uVar3 = *(undefined4 *)(param_1 + 0x168);
        uVar31 = DAT_14c7fdcb0 + 1;
        *(undefined8 *)((longlong)auStack_130 + lVar9) = 0x14537f341;
        DAT_14c7fdcb0 = DAT_14c7fdcb0 + 1;
        lVar24 = FUN_14537bcc0(param_1,uVar31 & 0xffffffffffffff,uVar3);
        if (lVar24 == 0) {
          return 0;
        }
      }
      local_70 = *(longlong *)(param_1 + 0x170);
      local_78 = uVar23;
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x18);
      *(undefined4 *)(lVar24 + 0x50) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0x54) = 0x3f800000;
      uVar31 = uVar23 * 0x30 + 0xf;
      if (uVar31 <= uVar23 * 0x30) {
        uVar31 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_130 + lVar9) = 0x14537f394;
      lVar24 = -(uVar31 & 0xfffffffffffffff0);
      uVar31 = uVar23 + 0xf;
      plVar29 = (longlong *)((longlong)&local_f8 + lVar24 + lVar9);
      local_98 = plVar29;
      if (uVar31 <= uVar23) {
        uVar31 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_130 + lVar24 + lVar9) = 0x14537f3b6;
      lVar10 = -(uVar31 & 0xfffffffffffffff0);
      uVar32 = uVar23 * 8;
      uVar31 = uVar32 + 0xf;
      pcVar28 = (char *)((longlong)&local_f8 + lVar10 + lVar24 + lVar9);
      local_80 = pcVar28;
      if (uVar31 <= uVar32) {
        uVar31 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_130 + lVar10 + lVar24 + lVar9) = 0x14537f3df;
      lVar11 = -(uVar31 & 0xfffffffffffffff0);
      local_b8 = (longlong)&local_f8 + lVar11 + lVar10 + lVar24 + lVar9;
      uVar31 = uVar32 + 0xf;
      if (uVar31 <= uVar32) {
        uVar31 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_130 + lVar11 + lVar10 + lVar24 + lVar9) = 0x14537f400;
      lVar12 = -(uVar31 & 0xfffffffffffffff0);
      local_c8 = (longlong)&local_f8 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9;
      uVar31 = uVar32 + 0xf;
      if (uVar31 <= uVar32) {
        uVar31 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_130 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9) =
           0x14537f421;
      lVar13 = -(uVar31 & 0xfffffffffffffff0);
      local_res10 = 0;
      local_res20 = 0;
      local_a8 = pcVar28;
      local_a0 = plVar29;
      local_c0 = (longlong)&local_f8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9;
      local_b0 = plVar25;
      plVar33 = plVar29;
      do {
        local_90 = *plVar25;
        fVar36 = *(float *)(local_90 + 0x180);
        if (*(float *)(local_90 + 0x180) <= *(float *)(local_90 + 0x178)) {
          fVar36 = *(float *)(local_90 + 0x178);
        }
        lVar4 = *(longlong *)(local_90 + 0x140);
        fVar34 = *(float *)(local_90 + 0x184);
        if (*(float *)(local_90 + 0x184) <= *(float *)(local_90 + 0x17c)) {
          fVar34 = *(float *)(local_90 + 0x17c);
        }
        plVar5 = *(longlong **)(lVar4 + 0x18);
        if (0.0 <= fVar36) {
          fVar35 = fVar36;
          if (100.0 <= fVar36) {
            fVar35 = 100.0;
          }
        }
        else {
          fVar35 = 0.0;
        }
        if (fVar35 != *(float *)(lVar4 + 200)) {
          *(byte *)(lVar4 + 0xcd) = *(byte *)(lVar4 + 0xcd) | 1;
          *(float *)(lVar4 + 200) = fVar35;
        }
        if (0.0 <= fVar34) {
          if (100.0 <= fVar34) {
            fVar34 = 100.0;
          }
        }
        else {
          fVar34 = 0.0;
        }
        if (fVar34 != *(float *)(lVar4 + 0xd4)) {
          *(byte *)(lVar4 + 0xd9) = *(byte *)(lVar4 + 0xd9) | 1;
          *(float *)(lVar4 + 0xd4) = fVar34;
        }
        uVar1 = *(ushort *)(plVar5 + 2);
        uVar22 = *(ushort *)((longlong)plVar5 + 0x12);
        if (uVar1 <= *(ushort *)((longlong)plVar5 + 0x12)) {
          uVar22 = uVar1;
        }
        iVar27 = (uint)uVar1 - (uint)uVar22;
        local_b0 = plVar25;
        local_a0 = plVar29;
        if (iVar27 != 0) {
          if (*(byte *)(plVar5 + 1) != 0) {
            lVar30 = 0;
            uVar31 = (ulonglong)*(byte *)(plVar5 + 1);
            do {
              uVar1 = *(ushort *)(plVar5 + 2);
              lVar26 = *plVar5;
              *(undefined8 *)
               ((longlong)auStack_130 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9) =
                   0x14537f53c;
              memset((void *)(lVar26 + ((ulonglong)uVar1 * lVar30 + (ulonglong)(uint)uVar22) * 4),0,
                     (ulonglong)(uint)(iVar27 * 4));
              lVar30 = lVar30 + 1;
              uVar31 = uVar31 - 1;
              plVar33 = local_98;
            } while (uVar31 != 0);
          }
          *(short *)((longlong)plVar5 + 0x12) = (short)plVar5[2];
        }
        plVar29 = local_a0;
        if ((*(int *)((longlong)plVar5 + 0xc) == 0x11) && (0.0 < fVar36)) {
          *(undefined4 *)(local_90 + 0xc) = 0;
        }
        local_f8 = 0;
        uStack_e0 = 0;
        uStack_ec = 0x2b;
        local_d8 = 0xffffffff;
        uStack_d4 = 0x3f800000;
        uStack_d0 = 0xffffffff;
        uStack_cc = 1;
        uStack_f0 = (undefined4)plVar5[1];
        local_e8 = (uint)*(ushort *)(plVar5 + 2);
        *(undefined8 *)((longlong)auStack_130 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9)
             = 0x14537f5c1;
        iVar27 = FUN_145071750(&local_f8);
        lVar21 = local_b8;
        lVar30 = local_c8;
        *local_a8 = iVar27 == 1;
        lVar26 = local_c0;
        uVar3 = uStack_e4;
        uVar2 = (undefined2)plVar5[2];
        uVar15 = (undefined4)uStack_e0;
        uVar16 = uStack_e0._4_4_;
        if (iVar27 == 1) {
          uVar31 = (ulonglong)local_res10;
          lVar26 = CONCAT44(uStack_ec,uStack_f0);
          local_e8 = CONCAT22(uVar2,(undefined2)local_e8);
          uVar14 = local_e8;
          *plVar29 = local_f8;
          plVar29[1] = lVar26;
          uVar20 = uStack_cc;
          uVar19 = uStack_d0;
          uVar18 = uStack_d4;
          uVar17 = local_d8;
          *(undefined4 *)(plVar29 + 2) = uVar14;
          *(undefined4 *)((longlong)plVar29 + 0x14) = uVar3;
          *(undefined4 *)(plVar29 + 3) = uVar15;
          *(undefined4 *)((longlong)plVar29 + 0x1c) = uVar16;
          *(undefined4 *)(plVar29 + 4) = uVar17;
          *(undefined4 *)((longlong)plVar29 + 0x24) = uVar18;
          *(undefined4 *)(plVar29 + 5) = uVar19;
          *(undefined4 *)((longlong)plVar29 + 0x2c) = uVar20;
          *(longlong **)(lVar21 + uVar31 * 8) = plVar5;
          *(longlong **)(lVar30 + uVar31 * 8) = plVar33 + (ulonglong)local_res20 * 6;
          *(longlong *)(local_c0 + uVar31 * 8) = lVar4 + 0xc0;
          local_res10 = local_res10 + 1;
          lVar26 = local_c0;
        }
        else {
          local_f8 = *plVar5;
          uStack_f0 = (int)plVar5[1];
          lVar4 = CONCAT44(uStack_ec,(int)plVar5[1]);
          local_e8 = CONCAT22(uVar2,uVar2);
          uVar14 = local_e8;
          *plVar29 = *plVar5;
          plVar29[1] = lVar4;
          uVar20 = uStack_cc;
          uVar19 = uStack_d0;
          uVar18 = uStack_d4;
          uVar17 = local_d8;
          *(undefined4 *)(plVar29 + 2) = uVar14;
          *(undefined4 *)((longlong)plVar29 + 0x14) = uVar3;
          *(undefined4 *)(plVar29 + 3) = uVar15;
          *(undefined4 *)((longlong)plVar29 + 0x1c) = uVar16;
          *(undefined4 *)(plVar29 + 4) = uVar17;
          *(undefined4 *)((longlong)plVar29 + 0x24) = uVar18;
          *(undefined4 *)(plVar29 + 5) = uVar19;
          *(undefined4 *)((longlong)plVar29 + 0x2c) = uVar20;
        }
        local_res20 = local_res20 + 1;
        plVar25 = local_b0 + 1;
        local_b0 = plVar25;
        plVar29 = plVar29 + 6;
        local_a8 = local_a8 + 1;
        local_a0 = plVar29;
      } while (local_res20 < (uint)uVar23);
      *(undefined8 *)((longlong)auStack_130 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9) =
           0x14537f6a5;
      FUN_145381fb0(local_res10,lVar26,lVar21,lVar30);
      lVar4 = local_70;
      pcVar28 = local_80;
      uVar23 = local_78;
      plVar25 = local_88;
      do {
        lVar30 = *(longlong *)(param_1 + 0x198);
        lVar26 = *plVar25;
        *(longlong *)((longlong)local_108 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9 + 8)
             = lVar4;
        *(longlong **)((longlong)local_108 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9) =
             plVar33;
        plVar29 = *(longlong **)(lVar30 + 0x88);
        uVar6 = *(undefined8 *)(lVar26 + 0x10);
        uVar7 = *(undefined8 *)(lVar26 + 8);
        pcVar8 = *(code **)(*plVar29 + 0x48);
        *(undefined8 *)((longlong)auStack_130 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9)
             = 0x14537f6fa;
        uVar31 = (*pcVar8)(plVar29,lVar26,uVar7,uVar6);
        if (*pcVar28 != '\0') {
          *(undefined8 *)
           ((longlong)auStack_130 + lVar13 + lVar12 + lVar11 + lVar10 + lVar24 + lVar9) =
               0x14537f707;
          uVar31 = FUN_1450718b0(plVar33);
        }
        plVar33 = plVar33 + 6;
        plVar25 = plVar25 + 1;
        pcVar28 = pcVar28 + 1;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  return uVar31;
}



// FUNCTION 14537f750 FUN_14537f750 body=745 status=ok
// SIG undefined FUN_14537f750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_14537f750(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 uVar10;
  ushort uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  undefined8 auStack_f0 [5];
  longlong alStack_c8 [4];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [32];
  
  uVar17 = (ulonglong)param_3;
  if (*(int *)(param_1 + 0x178) == 0) {
    LOCK();
    UNLOCK();
    uVar14 = DAT_14c7fdcb0 + 1;
    auStack_f0[0] = 0x14537f7b1;
    DAT_14c7fdcb0 = DAT_14c7fdcb0 + 1;
    lVar12 = FUN_14537bcc0(param_1,uVar14 & 0xffffffffffffff,*(undefined4 *)(param_1 + 0x168));
    if (lVar12 == 0) {
      auStack_f0[0] = 0x14537f7be;
      FUN_145071a20(param_2);
      return param_2;
    }
  }
  uVar10 = DAT_14c72f434;
  lVar12 = *(longlong *)(param_1 + 0x170);
  lVar16 = *(longlong *)(lVar12 + 0x18);
  *(undefined4 *)(lVar16 + 0x50) = 0x3f800000;
  *(undefined4 *)(lVar16 + 0x54) = 0x3f800000;
  *(undefined2 *)(lVar12 + 0x12) = uVar10;
  uVar1 = uVar17 * 8;
  uVar14 = uVar1 + 0xf;
  if (uVar14 <= uVar1) {
    uVar14 = 0xffffffffffffff0;
  }
  auStack_f0[0] = 0x14537f81d;
  lVar6 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar1 + 0xf;
  lVar16 = (longlong)&local_a8 + lVar6;
  if (uVar14 <= uVar1) {
    uVar14 = 0xffffffffffffff0;
  }
  local_a8 = lVar12;
  local_68 = lVar16;
  *(undefined8 *)((longlong)auStack_f0 + lVar6) = 0x14537f83e;
  lVar7 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar1 + 0xf;
  lVar19 = (longlong)&local_a8 + lVar7 + lVar6;
  if (uVar14 <= uVar1) {
    uVar14 = 0xffffffffffffff0;
  }
  local_70 = lVar19;
  *(undefined8 *)((longlong)auStack_f0 + lVar7 + lVar6) = 0x14537f85f;
  lVar8 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar1 + 0xf;
  lVar15 = (longlong)&local_a8 + lVar8 + lVar7 + lVar6;
  if (uVar14 <= uVar1) {
    uVar14 = 0xffffffffffffff0;
  }
  local_78 = lVar15;
  *(undefined8 *)((longlong)auStack_f0 + lVar8 + lVar7 + lVar6) = 0x14537f880;
  lVar9 = -(uVar14 & 0xfffffffffffffff0);
  local_80 = (longlong)&local_a8 + lVar9 + lVar8 + lVar7 + lVar6;
  if (param_3 != 0) {
    lVar20 = lVar16 - param_5;
    lVar21 = lVar19 - param_5;
    lVar18 = lVar15 - param_5;
    pfVar22 = (float *)(param_5 + 4);
    lVar23 = local_80 - param_5;
    local_a0 = lVar20;
    local_98 = lVar21;
    local_90 = lVar18;
    local_88 = lVar23;
    do {
      lVar16 = *(longlong *)((param_4 - param_5) + -4 + (longlong)pfVar22);
      plVar5 = *(longlong **)(lVar16 + 0x18);
      uVar4 = *(ushort *)(plVar5 + 2);
      uVar11 = *(ushort *)((longlong)plVar5 + 0x12);
      if (uVar4 <= *(ushort *)((longlong)plVar5 + 0x12)) {
        uVar11 = uVar4;
      }
      iVar13 = (uint)uVar4 - (uint)uVar11;
      if (iVar13 != 0) {
        if (*(byte *)(plVar5 + 1) != 0) {
          lVar19 = 0;
          uVar14 = (ulonglong)*(byte *)(plVar5 + 1);
          do {
            uVar4 = *(ushort *)(plVar5 + 2);
            lVar12 = *plVar5;
            *(undefined8 *)((longlong)auStack_f0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x14537f92c;
            memset((void *)(lVar12 + ((ulonglong)uVar4 * lVar19 + (ulonglong)(uint)uVar11) * 4),0,
                   (ulonglong)(uint)(iVar13 * 4));
            lVar19 = lVar19 + 1;
            uVar14 = uVar14 - 1;
            lVar18 = local_90;
            lVar12 = local_a8;
            lVar20 = local_a0;
            lVar21 = local_98;
            lVar23 = local_88;
          } while (uVar14 != 0);
        }
        *(short *)((longlong)plVar5 + 0x12) = (short)plVar5[2];
      }
      iVar13 = *(int *)(lVar12 + 0xc);
      if (*(int *)(lVar12 + 0xc) <= *(int *)((longlong)plVar5 + 0xc)) {
        iVar13 = *(int *)((longlong)plVar5 + 0xc);
      }
      *(int *)(lVar12 + 0xc) = iVar13;
      fVar2 = pfVar22[-1];
      fVar3 = *(float *)(lVar16 + 0x70);
      *(longlong *)(lVar20 + -4 + (longlong)pfVar22) = lVar16 + 0xc0;
      *(longlong **)(lVar21 + -4 + (longlong)pfVar22) = plVar5;
      pfVar22[-1] = fVar2 * fVar3;
      *pfVar22 = *(float *)(lVar16 + 0x74) * *pfVar22;
      *(undefined8 *)(lVar18 + -4 + (longlong)pfVar22) = *(undefined8 *)(lVar16 + 0x100);
      *(undefined8 *)(lVar23 + -4 + (longlong)pfVar22) = *(undefined8 *)(lVar16 + 0xf8);
      pfVar22 = pfVar22 + 2;
      uVar17 = uVar17 - 1;
      lVar15 = local_78;
      lVar16 = local_68;
      lVar19 = local_70;
    } while (uVar17 != 0);
  }
  *(longlong *)((longlong)alStack_c8 + lVar9 + lVar8 + lVar7 + lVar6 + 0x18) = local_80;
  *(longlong *)((longlong)alStack_c8 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10) = lVar15;
  *(longlong *)((longlong)alStack_c8 + lVar9 + lVar8 + lVar7 + lVar6 + 8) = param_5;
  *(longlong *)((longlong)alStack_c8 + lVar9 + lVar8 + lVar7 + lVar6) = lVar12;
  *(undefined8 *)((longlong)auStack_f0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x14537fa19;
  FUN_145382360(local_60,param_3,lVar16,lVar19);
  *(undefined8 *)((longlong)auStack_f0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x14537fa25;
  FUN_145071b50(param_2,local_60);
  return param_2;
}



// FUNCTION 14537fa40 FUN_14537fa40 body=1543 status=ok
// SIG undefined FUN_14537fa40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14537fa40(longlong param_1,uint param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  char *pcVar19;
  char cVar20;
  ushort uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  void *_Dst;
  byte bVar26;
  char cVar27;
  uint uVar28;
  void *_Src;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  longlong *plVar35;
  char *pcVar36;
  undefined8 auStack_d0 [5];
  char local_a8 [2];
  ushort local_a6;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  char *local_98;
  undefined8 *local_90;
  char *local_88;
  uint local_80;
  char *local_78;
  uint local_70 [8];
  longlong local_50;
  
  uVar29 = (ulonglong)param_2 * 8;
  uVar22 = uVar29 + 0xf;
  if (uVar22 <= uVar29) {
    uVar22 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14537fa93;
  lVar13 = -(uVar22 & 0xfffffffffffffff0);
  local_78 = local_a8 + lVar13;
  uVar22 = uVar29 + 0xf;
  if (uVar22 <= uVar29) {
    uVar22 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar13) = 0x14537fab4;
  lVar14 = -(uVar22 & 0xfffffffffffffff0);
  uVar22 = uVar29 + 0xf;
  if (uVar22 <= uVar29) {
    uVar22 = 0xffffffffffffff0;
  }
  local_88 = local_a8 + lVar14 + lVar13;
  *(undefined8 *)((longlong)auStack_d0 + lVar14 + lVar13) = 0x14537fad5;
  lVar15 = -(uVar22 & 0xfffffffffffffff0);
  puVar31 = (undefined8 *)(param_1 + 0x170);
  uVar34 = *(uint *)(param_1 + 0x17c);
  uVar28 = *(int *)(param_1 + 0x178) + param_2;
  local_98 = local_a8 + lVar15 + lVar14 + lVar13;
  local_90 = puVar31;
  if (uVar34 < uVar28) {
    *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fb02;
    FUN_14537a590(puVar31,uVar28 - uVar34);
  }
  local_a6 = DAT_14c72f434;
  local_a4 = 0;
  local_a0 = 0;
  pcVar36 = local_a8 + lVar14 + lVar13;
  if (param_2 != 0) {
    param_4 = param_4 - (longlong)param_3;
    do {
      lVar30 = 0;
      lVar32 = *param_3;
      local_50 = lVar32;
      plVar35 = *(longlong **)(lVar32 + 0x18);
      uVar6 = *(ushort *)(plVar35 + 2);
      uVar34 = *(uint *)(plVar35 + 1);
      uVar21 = *(ushort *)((longlong)plVar35 + 0x12);
      if (uVar6 <= *(ushort *)((longlong)plVar35 + 0x12)) {
        uVar21 = uVar6;
      }
      iVar25 = (uint)uVar6 - (uint)uVar21;
      if (iVar25 != 0) {
        if ((char)uVar34 != '\0') {
          uVar22 = (ulonglong)(uVar34 & 0xff);
          do {
            uVar6 = *(ushort *)(plVar35 + 2);
            lVar8 = *plVar35;
            *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fb9f;
            memset((void *)(lVar8 + ((ulonglong)uVar6 * lVar30 + (ulonglong)(uint)uVar21) * 4),0,
                   (ulonglong)(uint)(iVar25 * 4));
            lVar30 = lVar30 + 1;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          uVar34 = *(uint *)(plVar35 + 1);
          puVar31 = local_90;
        }
        *(short *)((longlong)plVar35 + 0x12) = (short)plVar35[2];
      }
      uVar28 = uVar34 >> 0xc;
      if (((uVar34 >> 0xc == 0) || ((uVar28 & 0x63f) != uVar28)) ||
         ((uVar28 & *(uint *)(lVar32 + 0x54)) == uVar28)) {
        cVar27 = '\0';
      }
      else {
        cVar27 = '\x01';
      }
      uVar33 = uVar28 & *(uint *)(lVar32 + 0x54);
      plVar24 = (longlong *)*puVar31;
      lVar30 = *(longlong *)(lVar32 + 8);
      plVar23 = plVar24 + (ulonglong)*(uint *)(puVar31 + 1) * 6;
      for (; plVar24 != plVar23; plVar24 = plVar24 + 6) {
        if (*(longlong *)plVar24[3] == lVar30) goto LAB_14537fc28;
      }
      plVar24 = (longlong *)0x0;
LAB_14537fc28:
      local_a8[0] = cVar27;
      if (cVar27 == '\0') {
        if (plVar24 == (longlong *)0x0) {
          *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fc44;
          plVar24 = (longlong *)FUN_14537bcc0(param_1,lVar30);
          if (plVar24 == (longlong *)0x0) {
            return;
          }
        }
        uVar33 = *(uint *)(plVar24 + 1);
        if ((((char)uVar34 == (char)uVar33) && (((uVar34 ^ uVar33) & 0xf00) == 0)) &&
           (uVar33 >> 0xc == uVar28)) {
LAB_14537fe4a:
          *(ushort *)((longlong)plVar24 + 0x12) = local_a6;
          lVar30 = plVar24[3];
          uVar10 = *(undefined8 *)(lVar32 + 0x30);
          *(undefined8 *)(lVar30 + 8) = *(undefined8 *)(lVar32 + 0x28);
          *(undefined8 *)(lVar30 + 0x10) = uVar10;
          uVar10 = *(undefined8 *)(lVar32 + 0x40);
          *(undefined8 *)(lVar30 + 0x18) = *(undefined8 *)(lVar32 + 0x38);
          *(undefined8 *)(lVar30 + 0x20) = uVar10;
          uVar10 = *(undefined8 *)(lVar32 + 0x50);
          *(undefined8 *)(lVar30 + 0x28) = *(undefined8 *)(lVar32 + 0x48);
          *(undefined8 *)(lVar30 + 0x30) = uVar10;
          uVar10 = *(undefined8 *)(lVar32 + 0x60);
          *(undefined8 *)(lVar30 + 0x38) = *(undefined8 *)(lVar32 + 0x58);
          *(undefined8 *)(lVar30 + 0x40) = uVar10;
          *(undefined8 *)(lVar30 + 0x48) = *(undefined8 *)(lVar32 + 0x68);
          *(undefined8 *)(lVar30 + 0x50) = *(undefined8 *)(lVar32 + 0x70);
          *(undefined4 *)(lVar30 + 0x68) = 0;
          uVar7 = *(undefined4 *)(lVar32 + 0x88);
          *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fea0;
          cVar20 = FUN_1450cc210(lVar30 + 0x58,uVar7);
          if ((cVar20 != '\0') && (uVar22 = 0, *(int *)(lVar32 + 0x88) != 0)) {
            do {
              lVar8 = *(longlong *)(lVar32 + 0x80);
              lVar9 = *(longlong *)(lVar30 + 0x60);
              uVar34 = (int)uVar22 + 1;
              puVar1 = (undefined4 *)(lVar8 + uVar22 * 0x18);
              uVar7 = puVar1[1];
              uVar16 = puVar1[2];
              uVar17 = puVar1[3];
              puVar2 = (undefined4 *)(lVar9 + uVar22 * 0x18);
              *puVar2 = *puVar1;
              puVar2[1] = uVar7;
              puVar2[2] = uVar16;
              puVar2[3] = uVar17;
              *(undefined8 *)(lVar9 + 0x10 + uVar22 * 0x18) =
                   *(undefined8 *)(lVar8 + 0x10 + uVar22 * 0x18);
              uVar22 = (ulonglong)uVar34;
            } while (uVar34 < *(uint *)(lVar32 + 0x88));
          }
          *(undefined4 *)(lVar30 + 0x70) = *(undefined4 *)(lVar32 + 0x90);
          uVar10 = *(undefined8 *)(lVar32 + 0xa0);
          if ((*(longlong *)(lVar30 + 0x80) != 0) && (*(char *)(lVar30 + 0x88) != '\0')) {
            pcVar11 = *(code **)(**(longlong **)(lVar30 + 0x78) + 0x10);
            *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537ff0e;
            (*pcVar11)();
            *(undefined1 *)(lVar30 + 0x88) = 0;
          }
          uVar22 = (ulonglong)local_a4;
          *(undefined8 *)(lVar30 + 0x80) = uVar10;
          *(undefined8 *)(lVar30 + 0x78) = *(undefined8 *)(lVar32 + 0x98);
          *(undefined1 *)(lVar30 + 0x90) = *(undefined1 *)(lVar32 + 0xb0);
          *(undefined4 *)(plVar24[3] + 0x34) = 0xffffffff;
          iVar25 = *(int *)((longlong)plVar24 + 0xc);
          if (*(int *)((longlong)plVar24 + 0xc) <= *(int *)((longlong)plVar35 + 0xc)) {
            iVar25 = *(int *)((longlong)plVar35 + 0xc);
          }
          *(int *)((longlong)plVar24 + 0xc) = iVar25;
          if (cVar27 != '\0') {
            plVar35 = plVar24;
          }
          fVar3 = *(float *)(lVar32 + 0x74);
          fVar4 = *(float *)(param_4 + 4 + (longlong)param_3);
          fVar5 = **(float **)(lVar32 + 0xf8);
          lVar30 = plVar24[3];
          *(float *)(lVar30 + 0x50) =
               *(float *)(lVar32 + 0x70) * *(float *)((longlong)param_3 + param_4) *
               **(float **)(lVar32 + 0x100);
          *(float *)(lVar30 + 0x54) = fVar3 * fVar4 * fVar5;
          *(longlong *)(local_78 + uVar22 * 8) = lVar32 + 0xc0;
          *(longlong **)(local_88 + uVar22 * 8) = plVar35;
          *(longlong **)(local_98 + uVar22 * 8) = plVar24;
          local_a4 = local_a4 + 1;
          puVar31 = local_90;
        }
        else {
          *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fc80;
          FUN_145381f00(lVar32 + 0xc0);
          *(undefined4 *)((longlong)plVar24 + 0xc) = 0x11;
        }
      }
      else {
        local_70[0] = 0;
        local_70[1] = 4;
        local_80 = uVar33 & 8;
        bVar26 = 0;
        local_70[2] = 3;
        local_70[3] = 7;
        local_70[4] = 0x603;
        local_70[5] = 0x607;
        local_70[6] = 0x633;
        local_70[7] = 0x637;
        local_9c = uVar33 & 0xfffffff7;
        for (uVar34 = local_9c; uVar34 != 0; uVar34 = uVar34 & uVar34 - 1) {
          bVar26 = bVar26 + 1;
        }
        uVar34 = local_80 | local_70[bVar26];
        puVar31 = local_90;
        if (uVar34 != 0) {
          cVar27 = '\0';
          uVar28 = uVar34;
          do {
            cVar27 = cVar27 + '\x01';
            uVar28 = uVar28 & uVar28 - 1;
          } while (uVar28 != 0);
          uVar34 = uVar34 << 0xc | 0x100;
          if (plVar24 == (longlong *)0x0) {
            *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fd2c;
            plVar24 = (longlong *)FUN_14537bcc0(param_1,lVar30);
            if (plVar24 == (longlong *)0x0) {
              return;
            }
          }
          uVar28 = *(uint *)(plVar24 + 1);
          if ((((char)uVar28 == cVar27) && (((uVar28 ^ uVar34) & 0xf00) == 0)) &&
             (((uVar28 ^ uVar34) & 0xfffff000) == 0)) {
            iVar25 = 0;
            uVar22 = 0;
            *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fd8b;
            uVar34 = FUN_145098550();
            if (uVar34 != 0) {
              uVar29 = (ulonglong)local_a6;
              uVar28 = uVar34;
              do {
                iVar12 = 0;
                if (uVar28 != 0) {
                  for (; (uVar28 >> iVar12 & 1) == 0; iVar12 = iVar12 + 1) {
                  }
                }
                local_9c = 0;
                uVar6 = *(ushort *)(plVar35 + 2);
                lVar32 = *plVar35;
                uVar21 = *(ushort *)(plVar24 + 2);
                lVar30 = *plVar24;
                *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fdd6;
                memcpy((void *)(lVar30 + uVar21 * uVar22 * 4),
                       (void *)(lVar32 + (ulonglong)uVar6 * (ulonglong)(uint)(iVar25 + iVar12) * 4),
                       uVar29 << 2);
                iVar25 = iVar25 + iVar12 + 1;
                uVar22 = (ulonglong)((int)uVar22 + 1);
                uVar28 = uVar34 >> ((byte)iVar25 & 0x1f);
                lVar32 = local_50;
              } while (uVar28 != 0);
            }
            cVar27 = local_a8[0];
            if (local_80 != 0) {
              if ((*(uint *)(plVar35 + 1) >> 0xf & 1) == 0) {
                _Src = (void *)0x0;
              }
              else {
                _Src = (void *)(*plVar35 +
                               (ulonglong)((*(uint *)(plVar35 + 1) & 0xff) - 1) *
                               (ulonglong)*(ushort *)(plVar35 + 2) * 4);
              }
              if ((*(uint *)(plVar24 + 1) >> 0xf & 1) == 0) {
                _Dst = (void *)0x0;
              }
              else {
                _Dst = (void *)(*plVar24 +
                               (ulonglong)((*(uint *)(plVar24 + 1) & 0xff) - 1) *
                               (ulonglong)*(ushort *)(plVar24 + 2) * 4);
              }
              uVar22 = (ulonglong)local_a6;
              *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537fe45;
              memcpy(_Dst,_Src,uVar22 << 2);
              cVar27 = local_a8[0];
            }
            goto LAB_14537fe4a;
          }
          *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x14537ffdd;
          FUN_145381f00(lVar32 + 0xc0);
          *(undefined4 *)((longlong)plVar24 + 0xc) = 0x11;
          puVar31 = local_90;
        }
      }
      local_a0 = local_a0 + 1;
      param_3 = param_3 + 1;
      pcVar36 = local_88;
    } while (local_a0 < param_2);
  }
  pcVar19 = local_78;
  pcVar18 = local_98;
  uVar34 = local_a4;
  *(undefined8 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13) = 0x145380036;
  FUN_145381fb0(uVar34,pcVar19,pcVar36,pcVar18);
  return;
}



// FUNCTION 145380050 FUN_145380050 body=227 status=ok
// SIG undefined FUN_145380050(void)

undefined8 * FUN_145380050(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149d43588;
  param_1[0x14] = &PTR_LAB_149d43600;
  FUN_14538a0c0();
  FUN_14537ab90(param_1,0);
  plVar1 = (longlong *)param_1[1];
  *(byte *)((longlong)param_1 + 0x1b4) = *(byte *)((longlong)param_1 + 0x1b4) & 0xfc;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,0);
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
      AK::MemoryMgr::Free(5,plVar1);
    }
    param_1[1] = 0;
  }
  if (param_1[0x2e] != 0) {
    FUN_14537a4d0();
    AK::MemoryMgr::Free(0,(void *)param_1[0x2e]);
    param_1[0x2e] = 0;
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  FUN_145379f90(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 145380140 FUN_145380140 body=309 status=ok
// SIG undefined FUN_145380140(void)

void FUN_145380140(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 145380280 FUN_145380280 body=528 status=ok
// SIG undefined FUN_145380280(void)

void FUN_145380280(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_145380140(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_145380468;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_145380468:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 145380490 FUN_145380490 body=474 status=ok
// SIG undefined FUN_145380490(void)

void FUN_145380490(longlong *param_1,uint param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  undefined8 uVar32;
  undefined8 uVar33;
  uint uVar34;
  ulonglong uVar35;
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
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if ((param_2 & 3) != 0) {
    uVar34 = 4 - (param_2 & 3);
    if (uVar34 != 0) {
      memset((void *)(*param_1 + (ulonglong)param_2 * 4),0,(ulonglong)uVar34 << 2);
    }
    param_2 = param_2 + uVar34;
  }
  uVar35 = 0;
  uVar32 = *(undefined8 *)(param_4 + 0x1c);
  uVar33 = *(undefined8 *)(param_4 + 0x1e);
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  fVar6 = param_4[4];
  fVar7 = param_4[5];
  fVar8 = param_4[6];
  fVar9 = param_4[7];
  fVar49 = *param_5;
  fVar48 = param_5[1];
  fVar47 = param_5[2];
  fVar46 = param_5[3];
  fVar10 = param_4[8];
  fVar11 = param_4[9];
  fVar12 = param_4[10];
  fVar13 = param_4[0xb];
  fVar14 = param_4[0xc];
  fVar15 = param_4[0xd];
  fVar16 = param_4[0xe];
  fVar17 = param_4[0xf];
  fVar18 = param_4[0x10];
  fVar19 = param_4[0x11];
  fVar20 = param_4[0x12];
  fVar21 = param_4[0x13];
  fVar22 = param_4[0x14];
  fVar23 = param_4[0x15];
  fVar24 = param_4[0x16];
  fVar25 = param_4[0x17];
  fVar26 = param_4[0x18];
  fVar27 = param_4[0x19];
  fVar28 = param_4[0x1a];
  fVar29 = param_4[0x1b];
  if (param_2 != 0) {
    do {
      fVar36 = fVar18 * fVar49;
      fVar38 = fVar19 * fVar49;
      fVar40 = fVar20 * fVar49;
      fVar41 = fVar21 * fVar49;
      fVar42 = fVar22 * fVar48;
      fVar43 = fVar23 * fVar48;
      fVar44 = fVar24 * fVar48;
      fVar45 = fVar25 * fVar48;
      pfVar1 = (float *)(*param_1 + uVar35 * 4);
      fVar30 = *pfVar1;
      fVar31 = pfVar1[1];
      fVar48 = pfVar1[2];
      fVar49 = pfVar1[3];
      fVar37 = fVar26 * fVar47;
      fVar39 = fVar27 * fVar47;
      local_b8 = (float)uVar32;
      fStack_b4 = (float)((ulonglong)uVar32 >> 0x20);
      fStack_b0 = (float)uVar33;
      fStack_ac = (float)((ulonglong)uVar33 >> 0x20);
      local_b8 = local_b8 * fVar46;
      fStack_b4 = fStack_b4 * fVar46;
      fStack_ac = fStack_ac * fVar46;
      fVar46 = fVar31 * fVar12 + fVar48 * fVar8 + fVar48 * fVar4 + fVar40 + fVar44 + fVar30 * fVar16
               + fVar28 * fVar47 + fStack_b0 * fVar46;
      fVar47 = fVar31 * fVar13 + fVar48 * fVar9 + fVar49 * fVar5 + fVar41 + fVar45 + fVar30 * fVar17
               + fVar29 * fVar47 + fStack_ac;
      pfVar1 = (float *)(param_1[1] + uVar35 * 4);
      *pfVar1 = fVar31 * fVar10 + fVar48 * fVar6 + fVar30 * fVar2 + fVar36 + fVar42 +
                fVar30 * fVar14 + fVar37 + local_b8;
      pfVar1[1] = fVar31 * fVar11 + fVar48 * fVar7 + fVar31 * fVar3 + fVar38 + fVar43 +
                  fVar30 * fVar15 + fVar39 + fStack_b4;
      pfVar1[2] = fVar46;
      pfVar1[3] = fVar47;
      uVar34 = (int)uVar35 + 4;
      uVar35 = (ulonglong)uVar34;
    } while (uVar34 < param_2);
  }
  *param_5 = fVar49;
  param_5[2] = fVar47;
  param_5[3] = fVar46;
  param_5[1] = fVar48;
  return;
}



// FUNCTION 1453806a0 FUN_1453806a0 body=35 status=ok
// SIG undefined FUN_1453806a0(void)

undefined8 * FUN_1453806a0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xff;
  *param_1 = &PTR_FUN_149d43720;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 145380760 FUN_145380760 body=56 status=ok
// SIG undefined FUN_145380760(void)

undefined8 FUN_145380760(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145380830 FUN_145380830 body=43 status=ok
// SIG undefined FUN_145380830(void)

undefined8 * FUN_145380830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d16b8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145380860 FUN_145380860 body=77 status=ok
// SIG undefined FUN_145380860(void)

void FUN_145380860(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x18,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSinkBase.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0xff;
    *puVar1 = &PTR_FUN_149d43720;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x14) = 0;
    return;
  }
  return;
}



// FUNCTION 1453808b0 FUN_1453808b0 body=43 status=ok
// SIG undefined FUN_1453808b0(void)

undefined8 * FUN_1453808b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d43808;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1453808e0 Instance body=123 status=ok
// SIG AkRuntimeEnvironmentMgr * Instance(void)

/* public: static class AK::AkRuntimeEnvironmentMgr * __ptr64 __cdecl
   AK::AkRuntimeEnvironmentMgr::Instance(void) */

AkRuntimeEnvironmentMgr * __cdecl AK::AkRuntimeEnvironmentMgr::Instance(void)

{
                    /* 0x53808e0  143  ?Instance@AkRuntimeEnvironmentMgr@AK@@SAPEAV12@XZ */
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fdd08) {
    FUN_144b3d300(&DAT_14c7fdd08);
    if (DAT_14c7fdd08 == -1) {
      FUN_145380960(&PTR_PTR_14c7389a0);
      atexit((_func_5014 *)&LAB_149929910);
      _Init_thread_footer(&DAT_14c7fdd08);
      return (AkRuntimeEnvironmentMgr *)&PTR_PTR_14c7389a0;
    }
  }
  return (AkRuntimeEnvironmentMgr *)&PTR_PTR_14c7389a0;
}



// FUNCTION 145380960 FUN_145380960 body=269 status=ok
// SIG undefined FUN_145380960(void)

/* WARNING: Removing unreachable block (ram,0x0001453809bb) */
/* WARNING: Removing unreachable block (ram,0x0001453809a7) */
/* WARNING: Removing unreachable block (ram,0x000145380997) */
/* WARNING: Removing unreachable block (ram,0x000145380988) */
/* WARNING: Removing unreachable block (ram,0x000145380970) */

void FUN_145380960(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar7 = 0;
  uVar8 = 0;
  if (*piVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar8 = *(uint *)(lVar2 + 8);
    uVar7 = *(uint *)(lVar2 + 0xc);
    lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar9 = *(uint *)(lVar2 + 4);
  }
  puVar4 = (uint *)cpuid(0x80000000);
  if (*puVar4 < 0x80000006) {
    uVar3 = 0x400;
    uVar5 = 0x40;
  }
  else {
    lVar2 = cpuid(0x80000006);
    uVar3 = *(uint *)(lVar2 + 0xc) >> 0x10;
    uVar5 = *(uint *)(lVar2 + 0xc) & 0xff;
  }
  *(uint *)(param_1 + 0x10) = uVar5;
  puVar4 = (uint *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar3;
  if ((uVar8 >> 0x19 & 1) != 0) {
    *puVar4 = *puVar4 | 1;
  }
  if ((uVar8 >> 0x1a & 1) != 0) {
    *puVar4 = *puVar4 | 2;
  }
  if ((uVar7 & 1) != 0) {
    *puVar4 = *puVar4 | 4;
  }
  puVar6 = (uint *)(param_1 + 8);
  if ((uVar7 >> 9 & 1) != 0) {
    *puVar6 = *puVar4 | 8;
  }
  if ((uVar7 >> 0x13 & 1) != 0) {
    *puVar6 = *puVar6 | 0x10;
  }
  puVar4 = (uint *)(param_1 + 8);
  if ((uVar7 >> 0x1c & 1) != 0) {
    *puVar4 = *puVar6 | 0x20;
  }
  if ((uVar7 >> 0x1d & 1) != 0) {
    *puVar4 = *puVar4 | 0x40;
  }
  if ((uVar9 & 0x20) != 0) {
    *(uint *)(param_1 + 8) = *puVar4 | 0x80;
  }
  return;
}



// FUNCTION 145380a70 FUN_145380a70 body=6 status=ok
// SIG undefined FUN_145380a70(void)

void FUN_145380a70(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~param_2;
  return;
}



// FUNCTION 145380ab0 FUN_145380ab0 body=43 status=ok
// SIG undefined FUN_145380ab0(void)

undefined8 * FUN_145380ab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d43808;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145380ae0 FUN_145380ae0 body=242 status=ok
// SIG undefined FUN_145380ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145380ae0(void)

{
  char cVar1;
  undefined8 *puVar2;
  AkRuntimeEnvironmentMgr *pAVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar2 = &DAT_14c7fdd18;
  lVar5 = 5;
  do {
    lVar4 = 5;
    do {
      puVar2[-1] = FUN_14554c460;
      *puVar2 = FUN_14554c710;
      puVar2 = puVar2 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  DAT_14c7fdea0 = 0;
  DAT_14c7fdd10 = &LAB_145547a90;
  DAT_14c7fdd18 = FUN_145547940;
  _DAT_14c7fdd70 = &LAB_145547b50;
  _DAT_14c7fdd78 = FUN_145547bf0;
  _DAT_14c7fddd0 = FUN_145547cb0;
  _DAT_14c7fdd80 = FUN_145547e70;
  _DAT_14c7fde30 = FUN_145547f50;
  _DAT_14c7fdde0 = FUN_145548190;
  _DAT_14c7fdd90 = FUN_145548380;
  pAVar3 = AK::AkRuntimeEnvironmentMgr::Instance();
  cVar1 = (**(code **)(*(longlong *)pAVar3 + 8))(pAVar3,0x80);
  if (cVar1 != '\0') {
    DAT_14c7fdea0 = 1;
  }
  return;
}



// FUNCTION 145380be0 ApplyGainAndInterleave body=156 status=ok
// SIG void ApplyGainAndInterleave(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkRamp param_3, bool param_4)

/* void __cdecl AkMixer::ApplyGainAndInterleave(class AkAudioBuffer * __ptr64,class AkAudioBuffer *
   __ptr64,struct AkRamp,bool) */

void __cdecl
AkMixer::ApplyGainAndInterleave(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
                    /* 0x5380be0  29
                       ?ApplyGainAndInterleave@AkMixer@@YAXPEAVAkAudioBuffer@@0UAkRamp@@_N@Z */
  uVar1 = *(uint *)(param_1 + 8) >> 0xc;
  lVar3 = 0;
  if (uVar1 == 3) {
    lVar2 = 10;
  }
  else {
    lVar2 = lVar3;
    if (uVar1 != 4) {
      if (uVar1 == 0x60f) {
        lVar2 = 0x14;
      }
      else if (uVar1 == 0x63f) {
        lVar2 = 0x1e;
      }
      else {
        lVar2 = 0x28;
      }
    }
  }
  uVar1 = *(uint *)(param_2 + 8) >> 0xc;
  if (uVar1 == 3) {
    lVar3 = 2;
  }
  else if (uVar1 != 4) {
    if (uVar1 == 0x60f) {
      lVar3 = 4;
    }
    else if (uVar1 == 0x63f) {
      lVar3 = 6;
    }
    else {
      lVar3 = 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145380c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14c7fdd10)[(ulonglong)param_4 + lVar2 + lVar3])(param_1,param_2,param_3);
  return;
}



// FUNCTION 145380c80 ApplyGain body=14 status=ok
// SIG void ApplyGain(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkRamp param_3, bool param_4)

/* void __cdecl AkMixer::ApplyGain(class AkAudioBuffer * __ptr64,class AkAudioBuffer *
   __ptr64,struct AkRamp,bool) */

void __cdecl
AkMixer::ApplyGain(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  float fStackX_8;
  float fStackX_c;
  
                    /* 0x5380c80  28  ?ApplyGain@AkMixer@@YAXPEAVAkAudioBuffer@@0UAkRamp@@_N@Z */
  if (param_4 == '\0') {
    FUN_1455477a0();
    return;
  }
  pauVar14 = (undefined1 (*) [16])*param_2;
  bVar2 = *(byte *)(param_2 + 1);
  uVar11 = (ulonglong)bVar2;
  uVar3 = *(ushort *)(param_1 + 2);
  fStackX_8 = (float)param_3;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  pfVar13 = (float *)*param_1;
  fVar19 = fStackX_8 * 32767.0;
  if (fStackX_8 == fStackX_c) {
    if ((uint)uVar3 * (uint)bVar2 >> 2 != 0) {
      uVar11 = (ulonglong)((((uint)uVar3 * (uint)bVar2 >> 2) - 1 >> 1) + 1);
      do {
        fVar24 = *pfVar13;
        pfVar5 = pfVar13 + 1;
        pfVar6 = pfVar13 + 2;
        pfVar7 = pfVar13 + 3;
        pfVar1 = pfVar13 + 4;
        pfVar8 = pfVar13 + 5;
        pfVar9 = pfVar13 + 6;
        pfVar10 = pfVar13 + 7;
        pfVar13 = pfVar13 + 8;
        auVar25._0_4_ = (int)(fVar24 * fVar19);
        auVar25._4_4_ = (int)(*pfVar5 * fVar19);
        auVar25._8_4_ = (int)(*pfVar6 * fVar19);
        auVar25._12_4_ = (int)(*pfVar7 * fVar19);
        auVar4._4_4_ = (int)(*pfVar8 * fVar19);
        auVar4._0_4_ = (int)(*pfVar1 * fVar19);
        auVar4._8_4_ = (int)(*pfVar9 * fVar19);
        auVar4._12_4_ = (int)(*pfVar10 * fVar19);
        auVar26 = packssdw(auVar25,auVar4);
        *pauVar14 = auVar26;
        uVar11 = uVar11 - 1;
        pauVar14 = pauVar14 + 1;
      } while (uVar11 != 0);
      return;
    }
  }
  else {
    fVar24 = (fStackX_c * 32767.0 - fVar19) / (float)uVar3;
    fVar35 = fVar24 * 4.0;
    fVar36 = fVar24 * 4.0;
    fVar37 = fVar24 * 4.0;
    fVar38 = fVar24 * 4.0;
    fVar39 = fVar24 * 1.0 + fVar19;
    fVar40 = fVar24 * 2.0 + fVar19;
    fVar41 = fVar24 * 3.0 + fVar19;
    fVar19 = fVar24 * 4.0 + fVar19;
    if (bVar2 != 0) {
      do {
        if (uVar3 >> 2 != 0) {
          uVar12 = (ulonglong)(((uVar3 >> 2) - 1 >> 1) + 1);
          fVar24 = fVar39;
          fVar28 = fVar40;
          fVar29 = fVar41;
          fVar30 = fVar19;
          fVar31 = fVar35 + fVar39;
          fVar32 = fVar36 + fVar40;
          fVar33 = fVar37 + fVar41;
          fVar34 = fVar38 + fVar19;
          do {
            fVar15 = *pfVar13;
            pfVar5 = pfVar13 + 1;
            pfVar6 = pfVar13 + 2;
            pfVar7 = pfVar13 + 3;
            pfVar1 = pfVar13 + 4;
            pfVar8 = pfVar13 + 5;
            pfVar9 = pfVar13 + 6;
            pfVar10 = pfVar13 + 7;
            pfVar13 = pfVar13 + 8;
            fVar15 = fVar15 * fVar24;
            fVar16 = *pfVar5 * fVar28;
            fVar17 = *pfVar6 * fVar29;
            fVar18 = *pfVar7 * fVar30;
            fVar24 = fVar24 + fVar35 + fVar35;
            fVar28 = fVar28 + fVar36 + fVar36;
            fVar29 = fVar29 + fVar37 + fVar37;
            fVar30 = fVar30 + fVar38 + fVar38;
            fVar20 = *pfVar1 * fVar31;
            fVar21 = *pfVar8 * fVar32;
            fVar22 = *pfVar9 * fVar33;
            fVar23 = *pfVar10 * fVar34;
            fVar31 = fVar31 + fVar35 + fVar35;
            fVar32 = fVar32 + fVar36 + fVar36;
            fVar33 = fVar33 + fVar37 + fVar37;
            fVar34 = fVar34 + fVar38 + fVar38;
            auVar27._0_4_ = (int)fVar15;
            auVar27._4_4_ = (int)fVar16;
            auVar27._8_4_ = (int)fVar17;
            auVar27._12_4_ = (int)fVar18;
            auVar26._4_4_ = (int)fVar21;
            auVar26._0_4_ = (int)fVar20;
            auVar26._8_4_ = (int)fVar22;
            auVar26._12_4_ = (int)fVar23;
            auVar26 = packssdw(auVar27,auVar26);
            *pauVar14 = auVar26;
            pauVar14 = pauVar14 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  return;
}



// FUNCTION 145380c90 MixNinNChannels body=27 status=ok
// SIG void MixNinNChannels(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkRamp * param_3, float * param_4, float * param_5, float param_6, uint param_7)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* void __cdecl AkMixer::MixNinNChannels(class AkAudioBuffer * __ptr64,class AkAudioBuffer *
   __ptr64,struct AkRamp & __ptr64,float const * __ptr64,float const * __ptr64,float,unsigned int)
    */

void __cdecl
AkMixer::MixNinNChannels
          (AkAudioBuffer *param_1,AkAudioBuffer *param_2,AkRamp *param_3,float *param_4,
          float *param_5,float param_6,uint param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  AkAudioBuffer AVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined8 auStack_110 [5];
  longlong lStack_e8;
  uint auStack_e0 [6];
  longlong lStack_c8;
  uint uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* 0x5380c90  164
                       ?MixNinNChannels@AkMixer@@YAXPEAVAkAudioBuffer@@0AEAUAkRamp@@PEBM2MI@Z */
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    FUN_145548460();
    return;
  }
  AVar3 = param_1[8];
  uVar20 = *(uint *)(param_2 + 8) & 0xff;
  uVar18 = (ulonglong)(byte)AVar3 * 8;
  uVar14 = uVar18 + 0xf;
  if (uVar14 <= uVar18) {
    uVar14 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x14554cd52;
  lVar6 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = uVar18 + 0xf;
  plVar15 = (longlong *)((longlong)&lStack_c8 + lVar6);
  if (uVar14 <= uVar18) {
    uVar14 = 0xffffffffffffff0;
  }
  uStack_c0 = uVar20;
  plStack_98 = plVar15;
  *(undefined8 *)((longlong)auStack_110 + lVar6) = 0x14554cd73;
  lVar7 = -(uVar14 & 0xfffffffffffffff0);
  lStack_a0 = (longlong)&lStack_c8 + lVar7 + lVar6;
  uVar14 = uVar18 + 0xf;
  if (uVar14 <= uVar18) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar7 + lVar6) = 0x14554cd94;
  lVar8 = -(uVar14 & 0xfffffffffffffff0);
  lStack_a8 = (longlong)&lStack_c8 + lVar8 + lVar7 + lVar6;
  uVar14 = uVar18 + 0xf;
  if (uVar14 <= uVar18) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar7 + lVar6) = 0x14554cdb5;
  uVar2 = *(undefined8 *)param_3;
  uVar4 = *(ushort *)(param_1 + 0x10);
  lVar9 = -(uVar14 & 0xfffffffffffffff0);
  lVar5 = *(longlong *)param_1;
  uVar21 = 0;
  lStack_b0 = (longlong)&lStack_c8 + lVar9 + lVar8 + lVar7 + lVar6;
  uVar13 = uVar20;
  uStack_b8 = uVar2;
  if (AVar3 != (AkAudioBuffer)0x0) {
    lVar22 = lStack_a0 - (longlong)plVar15;
    uStack_b8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uVar12 = uStack_b8._4_4_;
    uStack_b8._0_4_ = (undefined4)uVar2;
    uVar11 = (undefined4)uStack_b8;
    lVar23 = lStack_a8 - (longlong)plVar15;
    lVar19 = lStack_b0 - (longlong)plVar15;
    do {
      plVar1 = plVar15 + 1;
      *plVar15 = lVar5 + (ulonglong)(uVar21 * uVar4) * 4;
      uVar13 = (uVar20 + 7 & 0xfffffff8) * uVar21;
      uVar21 = uVar21 + 1;
      *(undefined4 *)((longlong)plVar15 + lVar22) = uVar11;
      *(undefined4 *)(lVar22 + -4 + (longlong)plVar1) = uVar12;
      *(float **)(lVar23 + -8 + (longlong)plVar1) = param_4 + uVar13;
      *(float **)(lVar19 + -8 + (longlong)plVar1) = param_5 + uVar13;
      plVar15 = plVar1;
      uVar13 = uStack_c0;
    } while (uVar21 < (byte)AVar3);
  }
  lVar5 = lStack_b0;
  uVar18 = 0;
  uVar14 = (ulonglong)uVar13 * 8 + 0xf;
  if (uVar14 <= (ulonglong)uVar13 * 8) {
    uVar14 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_110 + lVar9 + lVar8 + lVar7 + lVar6) = 0x14554cea2;
  uVar4 = *(ushort *)(param_2 + 0x10);
  lVar23 = -(uVar14 & 0xfffffffffffffff0);
  lVar22 = *(longlong *)param_2;
  lVar19 = (longlong)&lStack_c8 + lVar23 + lVar9 + lVar8 + lVar7 + lVar6;
  auVar29._4_2_ = uVar4;
  auVar29._0_4_ = CONCAT22(0,uVar4);
  auVar29._6_2_ = 0;
  auVar29._8_2_ = uVar4;
  auVar29._10_2_ = 0;
  auVar29._12_2_ = uVar4;
  auVar29._14_2_ = 0;
  auVar30._8_8_ = lVar22;
  auVar30._0_8_ = lVar22;
  auVar30._16_8_ = lVar22;
  auVar30._24_8_ = lVar22;
  if (uVar13 != 0) {
    if (0xf < uVar13) {
      uStack_80 = 0x100000000;
      uStack_78 = 0x300000002;
      uStack_70 = 0x500000004;
      uStack_68 = 0x700000006;
      auVar10._8_8_ = 0x300000002;
      auVar10._0_8_ = 0x100000000;
      uVar20 = 8;
      do {
        uVar21 = uVar20 - 4;
        iVar16 = (int)uVar18;
        auVar24._4_4_ = iVar16;
        auVar24._0_4_ = iVar16;
        auVar24._8_4_ = iVar16;
        auVar24._12_4_ = iVar16;
        auVar24 = vpaddd_avx(auVar24,auVar10);
        auVar24 = vpmulld_avx(auVar24,auVar29);
        auVar28 = vpmovzxdq_avx2(auVar24);
        auVar28 = vpsllq_avx2(auVar28,2);
        auVar28 = vpaddq_avx2(auVar28,auVar30);
        *(undefined1 (*) [32])(lVar19 + uVar18 * 8) = auVar28;
        auVar27._4_4_ = uVar21;
        auVar27._0_4_ = uVar21;
        auVar27._8_4_ = uVar21;
        auVar27._12_4_ = uVar21;
        auVar24 = vpaddd_avx(auVar27,auVar10);
        auVar24 = vpmulld_avx(auVar24,auVar29);
        auVar28 = vpmovzxdq_avx2(auVar24);
        auVar28 = vpsllq_avx2(auVar28,2);
        auVar28 = vpaddq_avx2(auVar28,auVar30);
        *(undefined1 (*) [32])(lVar19 + (ulonglong)uVar21 * 8) = auVar28;
        uVar17 = iVar16 + 0x10;
        uVar18 = (ulonglong)uVar17;
        auVar25._4_4_ = uVar20;
        auVar25._0_4_ = uVar20;
        auVar25._8_4_ = uVar20;
        auVar25._12_4_ = uVar20;
        auVar24 = vpaddd_avx(auVar25,auVar10);
        auVar24 = vpmulld_avx(auVar24,auVar29);
        auVar28 = vpmovzxdq_avx2(auVar24);
        auVar28 = vpsllq_avx2(auVar28,2);
        auVar28 = vpaddq_avx2(auVar28,auVar30);
        *(undefined1 (*) [32])(lVar19 + (ulonglong)uVar20 * 8) = auVar28;
        uVar21 = uVar20 + 4;
        uVar20 = uVar20 + 0x10;
        auVar26._4_4_ = uVar21;
        auVar26._0_4_ = uVar21;
        auVar26._8_4_ = uVar21;
        auVar26._12_4_ = uVar21;
        auVar24 = vpaddd_avx(auVar26,auVar10);
        auVar24 = vpmulld_avx(auVar24,auVar29);
        auVar28 = vpmovzxdq_avx2(auVar24);
        auVar28 = vpsllq_avx2(auVar28,2);
        auVar28 = vpaddq_avx2(auVar28,auVar30);
        *(undefined1 (*) [32])(lVar19 + (ulonglong)uVar21 * 8) = auVar28;
      } while (uVar17 < (uVar13 & 0xfffffff0));
      if (uVar13 <= uVar17) goto LAB_14554cfd8;
    }
    plVar15 = (longlong *)(lVar19 + uVar18 * 8);
    do {
      iVar16 = (int)uVar18;
      uVar20 = iVar16 + 1;
      uVar18 = (ulonglong)uVar20;
      *plVar15 = lVar22 + (ulonglong)(iVar16 * CONCAT22(0,uVar4)) * 4;
      plVar15 = plVar15 + 1;
    } while (uVar20 < uVar13);
  }
LAB_14554cfd8:
  plVar15 = plStack_98;
  lVar22 = lStack_a0;
  *(uint *)((longlong)auStack_e0 + lVar23 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10) = uVar13;
  *(uint *)((longlong)auStack_e0 + lVar23 + lVar9 + lVar8 + lVar7 + lVar6 + 8) = (uint)(byte)AVar3;
  *(uint *)((longlong)auStack_e0 + lVar23 + lVar9 + lVar8 + lVar7 + lVar6) = param_7;
  *(longlong *)((longlong)&lStack_e8 + lVar23 + lVar9 + lVar8 + lVar7 + lVar6) = lVar5;
  lVar5 = lStack_a8;
  *(undefined8 *)((longlong)auStack_110 + lVar23 + lVar9 + lVar8 + lVar7 + lVar6) = 0x14554d005;
  FUN_14554d280(plVar15,lVar19,lVar22,lVar5);
  if ((ushort)param_7 <= *(ushort *)(param_2 + 0x12)) {
    param_7 = (uint)*(ushort *)(param_2 + 0x12);
  }
  *(short *)(param_2 + 0x12) = (short)param_7;
  return;
}



// FUNCTION 145380cb0 MixOneInNChannels body=27 status=ok
// SIG void MixOneInNChannels(float * param_1, AkAudioBuffer * param_2, AkChannelConfig param_3, AkRamp * param_4, float * param_5, float * param_6, float param_7, uint param_8)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* void __cdecl AkMixer::MixOneInNChannels(float * __ptr64 __restrict,class AkAudioBuffer *
   __ptr64,struct AkChannelConfig,struct AkRamp & __ptr64,float const * __ptr64,float const *
   __ptr64,float,unsigned int) */

void __cdecl
AkMixer::MixOneInNChannels
          (undefined8 param_1,longlong *param_2,byte param_3,undefined8 *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined8 auStack_d0 [5];
  longlong lStack_a8;
  uint auStack_a0 [6];
  longlong alStack_88 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* 0x5380cb0  165
                       ?MixOneInNChannels@AkMixer@@YAXPEIAMPEAVAkAudioBuffer@@UAkChannelConfig@@AEAUAkRamp@@PEBM4MI@Z
                        */
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    FUN_1455487b0();
    return;
  }
  alStack_88[3] = *param_4;
  alStack_88[2] = param_5;
  alStack_88[1] = param_6;
  uVar12 = (uint)param_3;
  uVar9 = (ulonglong)param_3 * 8 + 0xf;
  if (uVar9 <= (ulonglong)param_3 * 8) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14554d0ad;
  uVar3 = *(ushort *)(param_2 + 2);
  lVar5 = -(uVar9 & 0xfffffffffffffff0);
  lVar4 = *param_2;
  uVar9 = 0;
  lVar2 = (longlong)alStack_88 + lVar5;
  auVar18._4_2_ = uVar3;
  auVar18._0_4_ = CONCAT22(0,uVar3);
  auVar18._6_2_ = 0;
  auVar18._8_2_ = uVar3;
  auVar18._10_2_ = 0;
  auVar18._12_2_ = uVar3;
  auVar18._14_2_ = 0;
  auVar19._8_8_ = lVar4;
  auVar19._0_8_ = lVar4;
  auVar19._16_8_ = lVar4;
  auVar19._24_8_ = lVar4;
  uStack_68 = param_1;
  if (param_3 != 0) {
    if (0xf < uVar12) {
      uStack_60 = 0x100000000;
      uStack_58 = 0x300000002;
      uStack_50 = 0x500000004;
      uStack_48 = 0x700000006;
      auVar6._8_8_ = 0x300000002;
      auVar6._0_8_ = 0x100000000;
      uVar10 = 8;
      do {
        uVar1 = uVar10 - 4;
        iVar7 = (int)uVar9;
        auVar13._4_4_ = iVar7;
        auVar13._0_4_ = iVar7;
        auVar13._8_4_ = iVar7;
        auVar13._12_4_ = iVar7;
        auVar13 = vpaddd_avx(auVar13,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + uVar9 * 8) = auVar17;
        auVar16._4_4_ = uVar1;
        auVar16._0_4_ = uVar1;
        auVar16._8_4_ = uVar1;
        auVar16._12_4_ = uVar1;
        auVar13 = vpaddd_avx(auVar16,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + (ulonglong)uVar1 * 8) = auVar17;
        uVar8 = iVar7 + 0x10;
        uVar9 = (ulonglong)uVar8;
        auVar14._4_4_ = uVar10;
        auVar14._0_4_ = uVar10;
        auVar14._8_4_ = uVar10;
        auVar14._12_4_ = uVar10;
        auVar13 = vpaddd_avx(auVar14,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + (ulonglong)uVar10 * 8) = auVar17;
        uVar1 = uVar10 + 4;
        uVar10 = uVar10 + 0x10;
        auVar15._4_4_ = uVar1;
        auVar15._0_4_ = uVar1;
        auVar15._8_4_ = uVar1;
        auVar15._12_4_ = uVar1;
        auVar13 = vpaddd_avx(auVar15,auVar6);
        auVar13 = vpmulld_avx(auVar13,auVar18);
        auVar17 = vpmovzxdq_avx2(auVar13);
        auVar17 = vpsllq_avx2(auVar17,2);
        auVar17 = vpaddq_avx2(auVar17,auVar19);
        *(undefined1 (*) [32])(lVar2 + (ulonglong)uVar1 * 8) = auVar17;
      } while (uVar8 < (uVar12 & 0xfffffff0));
      if (uVar12 <= uVar8) goto LAB_14554d1e9;
    }
    plVar11 = (longlong *)(lVar2 + uVar9 * 8);
    do {
      iVar7 = (int)uVar9;
      uVar10 = iVar7 + 1;
      uVar9 = (ulonglong)uVar10;
      *plVar11 = lVar4 + (ulonglong)(iVar7 * CONCAT22(0,uVar3)) * 4;
      plVar11 = plVar11 + 1;
    } while (uVar10 < uVar12);
  }
LAB_14554d1e9:
  *(uint *)((longlong)auStack_a0 + lVar5 + 0x10) = uVar12;
  *(undefined4 *)((longlong)auStack_a0 + lVar5 + 8) = 1;
  *(undefined4 *)((longlong)auStack_a0 + lVar5) = param_8;
  *(longlong **)((longlong)&lStack_a8 + lVar5) = alStack_88 + 1;
  *(undefined8 *)((longlong)auStack_d0 + lVar5) = 0x14554d221;
  FUN_14554d280(&uStack_68,lVar2,alStack_88 + 3,alStack_88 + 2);
  return;
}



// FUNCTION 145380cd0 MixChannel body=94 status=ok
// SIG void MixChannel(float * param_1, float * param_2, float param_3, float param_4, uint param_5)

/* void __cdecl AkMixer::MixChannel(float * __ptr64,float * __ptr64,float,float,unsigned int) */

void __cdecl
AkMixer::MixChannel(float *param_1,float *param_2,float param_3,float param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_register_00001284 [12];
  undefined1 in_register_000012c4 [12];
  
                    /* 0x5380cd0  163  ?MixChannel@AkMixer@@YAXPEAM0MMI@Z */
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    FUN_145548990();
    return;
  }
  auVar1._4_12_ = in_register_000012c4;
  auVar1._0_4_ = param_4;
  auVar1 = vandps_avx(auVar1,SUB6416(ZEXT464(0x7fffffff),0));
  if (1.1920929e-07 <= auVar1._0_4_) {
    FUN_14554e560(param_2,param_1);
    return;
  }
  auVar2._4_12_ = in_register_00001284;
  auVar2._0_4_ = param_3;
  auVar1 = vandps_avx(auVar2,SUB6416(ZEXT464(0x7fffffff),0));
  if (1.1920929e-07 <= auVar1._0_4_) {
    FUN_14554e4b0(param_2,param_1,param_2,param_5);
    return;
  }
  return;
}



// FUNCTION 145380cf0 ProcessMix body=27 status=ok
// SIG void ProcessMix(float * * param_1, float * * param_2, AkRamp * param_3, float * * param_4, float * * param_5, uint param_6, uint param_7, uint param_8)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl AkMixer::ProcessMix(float * __ptr64 * __ptr64,float * __ptr64 * __ptr64,struct
   AkRamp * __ptr64,float const * __ptr64 * __ptr64,float const * __ptr64 * __ptr64,unsigned
   int,unsigned int,unsigned int) */

void __cdecl
AkMixer::ProcessMix(float **param_1,float **param_2,AkRamp *param_3,float **param_4,float **param_5,
                   uint param_6,uint param_7,uint param_8)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ushort uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 in_ZMM6 [64];
  undefined8 auStack_e0 [5];
  uint auStack_b8 [4];
  short asStack_a8 [4];
  uint uStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_48 [16];
  
                    /* 0x5380cf0  212  ?ProcessMix@AkMixer@@YAXPEAPEAM0PEAUAkRamp@@PEAPEBM2III@Z */
  if ((DAT_14c7fdea0 != 0) && (DAT_14c7fdea0 == 1)) {
    auStack_48 = in_ZMM6._0_16_;
    uVar18 = param_8 + 7 & 0xfffffff8;
    uVar15 = (ulonglong)uVar18 * 4;
    uStack_a0 = uVar18;
    uVar13 = uVar15 + 0xf;
    if (uVar13 <= uVar15) {
      uVar13 = 0xffffffffffffff0;
    }
    auStack_e0[0] = 0x14554d2f2;
    lVar9 = -(uVar13 & 0xfffffffffffffff0);
    uVar13 = uVar15 + 0xf;
    if (uVar13 <= uVar15) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar9) = 0x14554d30f;
    lVar10 = -(uVar13 & 0xfffffffffffffff0);
    fVar22 = 1.0 / (float)param_6;
    uVar13 = uVar15 + 0xf;
    lVar19 = (longlong)asStack_a8 + lVar10 + lVar9;
    lStack_90 = lVar19;
    fStack_80 = fVar22;
    fStack_7c = fVar22;
    fStack_78 = fVar22;
    fStack_74 = fVar22;
    fStack_70 = fVar22;
    fStack_6c = fVar22;
    fStack_68 = fVar22;
    fStack_64 = fVar22;
    if (uVar13 <= uVar15) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar10 + lVar9) = 0x14554d35e;
    lVar11 = -(uVar13 & 0xfffffffffffffff0);
    uStack_98 = (ulonglong)param_7;
    lVar12 = lVar11 + lVar10 + lVar9 + -0xa8;
    if (param_7 != 0) {
      lVar20 = (longlong)param_3 - (longlong)param_1;
      lVar21 = (longlong)param_4 - (longlong)param_1;
      lVar16 = (longlong)param_5 - (longlong)param_1;
      fVar23 = fVar22;
      fVar24 = fVar22;
      fVar25 = fVar22;
      fVar26 = fVar22;
      fVar27 = fVar22;
      fVar28 = fVar22;
      fVar29 = fVar22;
      do {
        uVar15 = 0;
        pfVar4 = *param_1;
        fVar2 = *(float *)((longlong)param_1 + lVar20);
        uVar3 = *(undefined4 *)(lVar20 + 4 + (longlong)param_1);
        auVar31._4_4_ = uVar3;
        auVar31._0_4_ = uVar3;
        auVar31._8_4_ = uVar3;
        auVar31._12_4_ = uVar3;
        auVar31._16_4_ = uVar3;
        auVar31._20_4_ = uVar3;
        auVar31._24_4_ = uVar3;
        auVar31._28_4_ = uVar3;
        lVar5 = *(longlong *)(lVar21 + (longlong)param_1);
        lVar6 = *(longlong *)(lVar16 + (longlong)param_1);
        uVar13 = uVar15;
        if (uVar18 != 0) {
          do {
            uVar14 = (int)uVar13 + 8;
            pfVar1 = (float *)(lVar5 + uVar13 * 4);
            auVar30._0_4_ = fVar2 * *pfVar1;
            auVar30._4_4_ = fVar2 * pfVar1[1];
            auVar30._8_4_ = fVar2 * pfVar1[2];
            auVar30._12_4_ = fVar2 * pfVar1[3];
            auVar30._16_4_ = fVar2 * pfVar1[4];
            auVar30._20_4_ = fVar2 * pfVar1[5];
            auVar30._24_4_ = fVar2 * pfVar1[6];
            auVar30._28_4_ = fVar2 * pfVar1[7];
            auVar8 = vfmsub231ps_fma(auVar30,auVar31,*(undefined1 (*) [32])(lVar6 + uVar13 * 4));
            *(undefined1 (*) [32])((longlong)asStack_a8 + uVar13 * 4 + lVar9) = auVar30;
            pfVar1 = (float *)(lVar19 + uVar13 * 4);
            *pfVar1 = auVar8._0_4_ * fVar22;
            pfVar1[1] = auVar8._4_4_ * fVar23;
            pfVar1[2] = auVar8._8_4_ * fVar24;
            pfVar1[3] = auVar8._12_4_ * fVar25;
            pfVar1[4] = fVar26 * 0.0;
            pfVar1[5] = fVar27 * 0.0;
            pfVar1[6] = fVar28 * 0.0;
            pfVar1[7] = fVar29 * 0.0;
            fVar29 = fStack_64;
            fVar28 = fStack_68;
            fVar27 = fStack_6c;
            fVar26 = fStack_70;
            fVar25 = fStack_74;
            fVar24 = fStack_78;
            fVar23 = fStack_7c;
            fVar22 = fStack_80;
            auVar30 = vandnps_avx(_DAT_149931820,auVar30);
            auVar7 = vcmpps_avx(auVar30,_DAT_149da9ca0,0xe);
            auVar30 = vandnps_avx(_DAT_149931820,ZEXT1632(auVar8));
            auVar30 = vcmpps_avx(auVar30,_DAT_149da9ca0,0xe);
            auVar30 = vpblendw_avx2(auVar7,auVar30,0x55);
            *(undefined1 (*) [32])((longlong)asStack_a8 + uVar13 * 4 + lVar12 + 0xa8) = auVar30;
            uVar13 = (ulonglong)uVar14;
          } while (uVar14 < uVar18);
        }
        uVar17 = 0;
        if (param_8 != 0) {
          do {
            uVar13 = (ulonglong)(uint)((int)uVar15 * 2);
            if (*(short *)((longlong)asStack_a8 + uVar13 * 2 + lVar12 + 0xa8) == 0) {
              if (*(short *)((longlong)asStack_a8 + uVar13 * 2 + lVar11 + lVar10 + lVar9 + 2) != 0)
              {
                pfVar1 = param_2[uVar17];
                *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10 + lVar9) = 0x14554d49f;
                FUN_14554e4b0(pfVar1,pfVar4,lVar19,param_6);
                lVar19 = lStack_90;
              }
            }
            else {
              *(uint *)((longlong)auStack_b8 + lVar11 + lVar10 + lVar9) = param_6;
              pfVar1 = param_2[uVar17];
              *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10 + lVar9) = 0x14554d47b;
              FUN_14554e560(pfVar1,pfVar4);
              lVar19 = lStack_90;
            }
            uVar17 = uVar17 + 1;
            uVar15 = (ulonglong)uVar17;
          } while (uVar17 < param_8);
        }
        param_1 = param_1 + 1;
        uStack_98 = uStack_98 - 1;
        uVar18 = uStack_a0;
        fVar22 = fStack_80;
        fVar23 = fStack_7c;
        fVar24 = fStack_78;
        fVar25 = fStack_74;
        fVar26 = fStack_70;
        fVar27 = fStack_6c;
        fVar28 = fStack_68;
        fVar29 = fStack_64;
      } while (uStack_98 != 0);
    }
    return;
  }
  FUN_1455489e0();
  return;
}



// FUNCTION 145380d10 ProcessBiquadFilter body=1232 status=ok
// SIG void ProcessBiquadFilter(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkBiquadCoefficients * param_3, AkBiquadMemories * param_4, uint param_5)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* void __cdecl AkMixer::ProcessBiquadFilter(class AkAudioBuffer * __ptr64,class AkAudioBuffer *
   __ptr64,struct AkBiquadCoefficients * __ptr64,struct AkBiquadMemories * __ptr64,unsigned int) */

void __cdecl
AkMixer::ProcessBiquadFilter
          (AkAudioBuffer *param_1,AkAudioBuffer *param_2,AkBiquadCoefficients *param_3,
          AkBiquadMemories *param_4,uint param_5)

{
  AkAudioBuffer *pAVar1;
  AkAudioBuffer *pAVar2;
  AkAudioBuffer *pAVar3;
  AkAudioBuffer *pAVar4;
  AkAudioBuffer *pAVar5;
  AkAudioBuffer *pAVar6;
  AkAudioBuffer *pAVar7;
  AkAudioBuffer *pAVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  AkAudioBuffer *pAVar19;
  ulonglong uVar20;
  longlong lVar21;
  AkAudioBuffer *pAVar22;
  ulonglong uVar23;
  AkBiquadMemories *pAVar24;
  AkAudioBuffer *pAVar25;
  uint uVar26;
  AkAudioBuffer *pAVar27;
  AkAudioBuffer *pAVar28;
  undefined1 auVar29 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar33 [16];
  uint local_res8;
  undefined8 auStack_100 [5];
  longlong lStack_d8;
  uint auStack_d0 [6];
  longlong local_b8;
  AkAudioBuffer aAStack_b0 [8];
  AkAudioBuffer *local_a8;
  AkAudioBuffer *pAStack_a0;
  AkAudioBuffer *local_98;
  
                    /* 0x5380d10  209
                       ?ProcessBiquadFilter@AkMixer@@YAXPEAVAkAudioBuffer@@0PEAUAkBiquadCoefficients@@PEAUAkBiquadMemories@@I@Z
                        */
  uVar11 = *(uint *)(param_1 + 8);
  uVar26 = uVar11 & 0xff;
  uVar20 = (ulonglong)uVar26 * 8;
  uVar18 = uVar20 + 0xf;
  if (uVar18 <= uVar20) {
    uVar18 = 0xffffffffffffff0;
  }
  auStack_100[0] = 0x145380d95;
  lVar12 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = uVar20 + 0xf;
  pAVar5 = aAStack_b0 + lVar12 + -8;
  if (uVar18 <= uVar20) {
    uVar18 = 0xffffffffffffff0;
  }
  pAStack_a0 = pAVar5;
  *(undefined8 *)((longlong)auStack_100 + lVar12) = 0x145380db6;
  lVar13 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = uVar20 + 0xf;
  pAVar6 = aAStack_b0 + lVar13 + lVar12 + -8;
  if (uVar18 <= uVar20) {
    uVar18 = 0xffffffffffffff0;
  }
  local_a8 = pAVar6;
  *(undefined8 *)((longlong)auStack_100 + lVar13 + lVar12) = 0x145380dd7;
  lVar14 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = uVar20 + 0xf;
  pAVar7 = aAStack_b0 + lVar14 + lVar13 + lVar12 + -8;
  if (uVar18 <= uVar20) {
    uVar18 = 0xffffffffffffff0;
  }
  local_98 = pAVar7;
  *(undefined8 *)((longlong)auStack_100 + lVar14 + lVar13 + lVar12) = 0x145380df8;
  lVar15 = -(uVar18 & 0xfffffffffffffff0);
  uVar20 = 0;
  uVar18 = 0;
  local_res8 = 0;
  pAVar8 = aAStack_b0 + lVar15 + lVar14 + lVar13 + lVar12 + -8;
  pAVar22 = pAVar6;
  pAVar27 = pAVar5;
  pAVar28 = pAVar7;
  if (uVar26 != 0) {
    uVar23 = uVar20;
    if ((3 < uVar26) && (5 < DAT_14c707900)) {
      pAVar19 = param_1 + 0x10;
      lVar9 = *(longlong *)param_1;
      pAVar1 = param_2 + 0x10;
      lVar10 = *(longlong *)param_2;
      local_res8 = 0;
      lVar21 = (ulonglong)(uVar26 - 1) * 8;
      pAVar2 = pAVar7 + lVar21;
      pAVar3 = pAVar8 + lVar21;
      if ((((((((pAVar2 < pAVar8) || (pAVar3 < pAVar7)) &&
              ((pAVar4 = pAVar6 + lVar21, uVar23 = uVar18, pAVar4 < pAVar8 || (pAVar3 < pAVar6))))
             && (((pAVar25 = pAVar5 + lVar21, pAVar25 < pAVar8 || (pAVar3 < pAVar5)) &&
                 ((((param_2 < pAVar8 || (pAVar3 < param_2)) &&
                   ((pAVar1 < pAVar8 || (pAVar3 < pAVar1)))) &&
                  ((param_1 < pAVar8 || (pAVar3 < param_1)))))))) &&
            (((pAVar19 < pAVar8 || (pAVar3 < pAVar19)) &&
             ((((pAVar4 < pAVar7 || (pAVar2 < pAVar6)) && ((pAVar25 < pAVar7 || (pAVar2 < pAVar5))))
              && ((((param_2 < pAVar7 || (pAVar2 < param_2)) &&
                   ((pAVar1 < pAVar7 || (pAVar2 < pAVar1)))) &&
                  ((((param_1 < pAVar7 || (pAVar2 < param_1)) &&
                    ((pAVar19 < pAVar7 || (pAVar2 < pAVar19)))) &&
                   ((pAVar25 < pAVar6 || (pAVar4 < pAVar5)))))))))))) &&
           ((param_2 < pAVar6 || (pAVar4 < param_2)))) &&
          ((((pAVar1 < pAVar6 || (pAVar4 < pAVar1)) && ((param_1 < pAVar6 || (pAVar4 < param_1))))
           && (((pAVar19 < pAVar6 || (pAVar4 < pAVar19)) &&
               ((param_2 < pAVar5 || (pAVar25 < param_2)))))))) &&
         ((((pAVar1 < pAVar5 || (pAVar25 < pAVar1)) && ((param_1 < pAVar5 || (pAVar25 < param_1))))
          && ((pAVar19 < pAVar5 || (pAVar25 < pAVar19)))))) {
        auVar32 = pmovzxwq(unaff_XMM8,
                           ZEXT416(CONCAT22(*(undefined2 *)(param_1 + 0x10),
                                            *(undefined2 *)(param_1 + 0x10))));
        auVar33 = pmovzxwq(unaff_XMM9,ZEXT416(CONCAT22(*(undefined2 *)pAVar1,*(undefined2 *)pAVar1))
                          );
        do {
          iVar16 = (int)uVar20;
          uVar17 = iVar16 + 2;
          uVar18 = (ulonglong)uVar17;
          auVar29._4_4_ = iVar16 + 1;
          auVar29._0_4_ = iVar16;
          auVar29._8_4_ = iVar16;
          auVar29._12_4_ = iVar16;
          auVar30 = pmovzxdq(in_XMM2,auVar29);
          auVar29 = vpmullq_avx512vl(auVar32,auVar30);
          *(longlong *)(pAVar5 + uVar20 * 8) = auVar29._0_8_ * 4 + lVar9;
          *(longlong *)(pAVar5 + uVar20 * 8 + 8) = auVar29._8_8_ * 4 + lVar9;
          auVar29 = vpmullq_avx512vl(auVar33,auVar30);
          auVar31._0_8_ = param_4 + auVar30._0_8_ * 0x10;
          auVar31._8_8_ = param_4 + auVar30._8_8_ * 0x10;
          *(undefined1 (*) [16])(pAVar8 + uVar20 * 8) = auVar31;
          *(longlong *)(pAVar6 + uVar20 * 8) = auVar29._0_8_ * 4 + lVar10;
          *(longlong *)(pAVar6 + uVar20 * 8 + 8) = auVar29._8_8_ * 4 + lVar10;
          auVar30._4_4_ = iVar16 + 3;
          auVar30._0_4_ = uVar17;
          auVar30._8_4_ = uVar17;
          auVar30._12_4_ = uVar17;
          auVar31 = pmovzxdq(auVar31,auVar30);
          auVar29 = vpmullq_avx512vl(auVar32,auVar31);
          auVar30 = vpmullq_avx512vl(auVar33,auVar31);
          *(AkBiquadCoefficients **)(pAVar7 + uVar20 * 8) = param_3;
          *(AkBiquadCoefficients **)(pAVar7 + uVar20 * 8 + 8) = param_3;
          local_res8 = iVar16 + 4;
          uVar20 = (ulonglong)local_res8;
          in_XMM2._0_8_ = param_4 + auVar31._0_8_ * 0x10;
          in_XMM2._8_8_ = param_4 + auVar31._8_8_ * 0x10;
          *(longlong *)(pAVar5 + uVar18 * 8) = auVar29._0_8_ * 4 + lVar9;
          *(longlong *)(pAVar5 + uVar18 * 8 + 8) = auVar29._8_8_ * 4 + lVar9;
          *(longlong *)(pAVar6 + uVar18 * 8) = auVar30._0_8_ * 4 + lVar10;
          *(longlong *)(pAVar6 + uVar18 * 8 + 8) = auVar30._8_8_ * 4 + lVar10;
          *(AkBiquadCoefficients **)(pAVar7 + uVar18 * 8) = param_3;
          *(AkBiquadCoefficients **)(pAVar7 + uVar18 * 8 + 8) = param_3;
          *(undefined1 (*) [16])(pAVar8 + uVar18 * 8) = in_XMM2;
        } while (local_res8 < (uVar11 & 0xfc));
        uVar23 = uVar20;
        if (uVar26 <= local_res8) goto LAB_14538114e;
      }
    }
    pAVar24 = param_4 + uVar23 * 0x10;
    uVar18 = (ulonglong)(uVar26 - local_res8);
    pAVar19 = pAVar6 + uVar23 * 8;
    local_b8 = (longlong)pAVar7 - (longlong)pAVar6;
    do {
      pAVar22 = pAVar19 + 8;
      *(ulonglong *)(pAVar22 + (longlong)(pAVar5 + (-8 - (longlong)pAVar6))) =
           *(longlong *)param_1 + *(ushort *)(param_1 + 0x10) * uVar23 * 4;
      lVar21 = *(ushort *)(param_2 + 0x10) * uVar23;
      uVar23 = uVar23 + 1;
      *(longlong *)pAVar19 = *(longlong *)param_2 + lVar21 * 4;
      *(AkBiquadCoefficients **)(pAVar22 + ((longlong)pAVar7 - (longlong)pAVar6) + -8) = param_3;
      *(AkBiquadMemories **)(pAVar22 + (longlong)(pAVar8 + (-8 - (longlong)pAVar6))) = pAVar24;
      pAVar24 = pAVar24 + 0x10;
      uVar18 = uVar18 - 1;
      pAVar19 = pAVar22;
      pAVar22 = local_a8;
      pAVar27 = pAStack_a0;
      pAVar28 = local_98;
    } while (uVar18 != 0);
  }
LAB_14538114e:
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    *(uint *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13 + lVar12 + 8) = uVar26;
    *(undefined4 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13 + lVar12) = 1;
    *(uint **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12) = &param_5;
    *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x1453811af;
    FUN_145548f60(pAVar27,pAVar22,pAVar28,pAVar8);
  }
  else {
    *(uint *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13 + lVar12 + 8) = uVar26;
    *(undefined4 *)((longlong)auStack_d0 + lVar15 + lVar14 + lVar13 + lVar12) = 1;
    *(uint **)((longlong)&lStack_d8 + lVar15 + lVar14 + lVar13 + lVar12) = &param_5;
    *(undefined8 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12) = 0x145381183;
    FUN_14554d6a0(pAVar27,pAVar22,pAVar28,pAVar8);
  }
  return;
}



// FUNCTION 1453811e0 ProcessInterpBiquadFilter body=27 status=ok
// SIG void ProcessInterpBiquadFilter(float * * param_1, float * * param_2, AkBiquadCoefficients * * param_3, AkBiquadMemories * * param_4, uint * param_5, uint param_6, uint param_7)

/* void __cdecl AkMixer::ProcessInterpBiquadFilter(float * __ptr64 * __ptr64,float * __ptr64 *
   __ptr64,struct AkBiquadCoefficients * __ptr64 * __ptr64,struct AkBiquadMemories * __ptr64 *
   __ptr64,unsigned int * __ptr64,unsigned int,unsigned int) */

void __cdecl
AkMixer::ProcessInterpBiquadFilter
          (float **param_1,float **param_2,AkBiquadCoefficients **param_3,AkBiquadMemories **param_4
          ,uint *param_5,uint param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
                    /* 0x53811e0  210
                       ?ProcessInterpBiquadFilter@AkMixer@@YAXPEAPEAM0PEAPEAUAkBiquadCoefficients@@PEAPEAUAkBiquadMemories@@PEAIII@Z
                        */
  uVar2 = param_6;
  if ((DAT_14c7fdea0 != 0) && (DAT_14c7fdea0 == 1)) {
    if (param_6 != 1) {
      uVar3 = 0;
      param_6 = 0;
      if (param_7 != 0) {
        do {
          uVar4 = param_7 - (int)uVar3;
          if (8 < uVar4) {
            uVar4 = 8;
          }
          memcpy(auStack_c8,param_1 + uVar3,(ulonglong)(uVar4 * 8));
          memcpy(auStack_88,param_2 + uVar3,(ulonglong)(uVar4 * 8));
          uVar5 = 0;
          if (uVar2 != 0) {
            puVar6 = param_5;
            do {
              uVar1 = *puVar6;
              auVar8 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
              FUN_14554d520(auStack_c8,auStack_88,param_3 + uVar5 * param_7 + uVar3,param_4 + uVar3,
                            uVar1,uVar4);
              auVar7 = vpmovzxdq_avx2(auVar8._0_16_);
              auVar7 = vpsllq_avx2(auVar7,2);
              auStack_c8 = vpaddq_avx2(auVar7,auStack_c8);
              auStack_88 = vpaddq_avx2(auVar7,auStack_88);
              auStack_a8 = vpaddq_avx2(auVar7,auStack_a8);
              auStack_68 = vpaddq_avx2(auVar7,auStack_68);
              uVar5 = uVar5 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar5 < uVar2);
            uVar3 = (ulonglong)param_6;
          }
          param_6 = (int)uVar3 + 8;
          uVar3 = (ulonglong)param_6;
        } while (param_6 < param_7);
      }
      return;
    }
    FUN_14554d520(param_1,param_2,param_3,param_4,*param_5,param_7);
    return;
  }
  FUN_145548f60();
  return;
}



// FUNCTION 145381200 ProcessInterpBiquadFilterAndMix body=27 status=ok
// SIG void ProcessInterpBiquadFilterAndMix(float * * param_1, AkBiquadCoefficients * * param_2, AkBiquadMemories * * param_3, float * * param_4, AkRamp * param_5, float * * param_6, float * * param_7, uint * param_8, uint param_9, uint param_10, uint param_11)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* void __cdecl AkMixer::ProcessInterpBiquadFilterAndMix(float * __ptr64 * __ptr64,struct
   AkBiquadCoefficients * __ptr64 * __ptr64,struct AkBiquadMemories * __ptr64 * __ptr64,float *
   __ptr64 * __ptr64,struct AkRamp * __ptr64,float const * __ptr64 * __ptr64,float const * __ptr64 *
   __ptr64,unsigned int * __ptr64,unsigned int,unsigned int,unsigned int) */

void __cdecl
AkMixer::ProcessInterpBiquadFilterAndMix
          (float **param_1,AkBiquadCoefficients **param_2,AkBiquadMemories **param_3,float **param_4
          ,AkRamp *param_5,float **param_6,float **param_7,uint *param_8,uint param_9,uint param_10,
          uint param_11)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  AkBiquadMemories **ppAVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [32];
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [32];
  undefined1 auVar16 [64];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined8 auStack_1a0 [5];
  uint auStack_178 [8];
  undefined1 auStack_158 [24];
  uint uStack_140;
  AkBiquadMemories **ppAStack_138;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined8 auStack_a0 [4];
  undefined1 auStack_80 [32];
  
                    /* 0x5381200  211
                       ?ProcessInterpBiquadFilterAndMix@AkMixer@@YAXPEAPEAMPEAPEAUAkBiquadCoefficients@@PEAPEAUAkBiquadMemories@@0PEAUAkRamp@@PEAPEBM4PEAIIII@Z
                        */
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    FUN_145549270();
    return;
  }
  uVar6 = 0;
  uStack_140 = 0;
  if (0xf < param_9) {
    auVar14 = ZEXT1664((undefined1  [16])0x0);
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar15 = vpaddd_avx2(auVar14._0_32_,*(undefined1 (*) [32])(param_8 + uVar6));
      auVar14 = ZEXT3264(auVar15);
      iVar8 = (int)uVar6;
      uVar11 = iVar8 + 0x10;
      uVar6 = (ulonglong)uVar11;
      auVar17 = vpaddd_avx2(auVar16._0_32_,*(undefined1 (*) [32])(param_8 + (iVar8 + 8)));
      auVar16 = ZEXT3264(auVar17);
    } while (uVar11 < (param_9 & 0xfffffff0));
    auVar15 = vpaddd_avx2(auVar17,auVar15);
    auVar15 = vphaddd_avx2(auVar15,auVar15);
    auVar15 = vphaddd_avx2(auVar15,auVar15);
    auVar18 = vpaddd_avx(auVar15._0_16_,auVar15._16_16_);
    uStack_140 = auVar18._0_4_;
  }
  iVar8 = 0;
  iVar9 = 0;
  uVar11 = (uint)uVar6;
  if (param_9 <= uVar11) goto LAB_14554d9dd;
  if (param_9 - uVar11 < 2) {
LAB_14554d9c7:
    uStack_140 = uStack_140 + param_8[uVar6];
  }
  else {
    uVar5 = ((param_9 - uVar11) - 2 >> 1) + 1;
    uVar10 = (ulonglong)uVar5;
    do {
      iVar8 = iVar8 + param_8[uVar6];
      iVar9 = iVar9 + param_8[uVar6 + 1];
      uVar6 = uVar6 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (uVar11 + uVar5 * 2 < param_9) goto LAB_14554d9c7;
  }
  uStack_140 = uStack_140 + iVar9 + iVar8;
LAB_14554d9dd:
  auVar18._4_4_ = uStack_140;
  auVar18._0_4_ = uStack_140;
  auVar18._8_4_ = uStack_140;
  auVar18._12_4_ = uStack_140;
  uVar6 = (ulonglong)uStack_140 * 0x20 + 0xf;
  if (uVar6 <= (ulonglong)uStack_140 * 0x20) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x14554da0d;
  lVar3 = -(uVar6 & 0xfffffffffffffff0);
  pauVar7 = (undefined1 (*) [32])auStack_a0;
  auStack_120._8_8_ = 0x300000002;
  auStack_120._0_8_ = 0x100000000;
  auStack_120._16_8_ = 0x500000004;
  auStack_120._24_8_ = 0x700000006;
  puVar1 = auStack_158 + lVar3;
  auVar15._8_8_ = puVar1;
  auVar15._0_8_ = puVar1;
  auVar15._16_8_ = puVar1;
  auVar15._24_8_ = puVar1;
  uVar11 = 0;
  do {
    auVar13._4_4_ = uVar11;
    auVar13._0_4_ = uVar11;
    auVar13._8_4_ = uVar11;
    auVar13._12_4_ = uVar11;
    auVar13 = vpaddd_avx(auVar13,auStack_120._0_16_);
    auVar13 = vpmulld_avx(auVar13,auVar18);
    auVar17 = vpmovzxdq_avx2(auVar13);
    auVar17 = vpsllq_avx2(auVar17,2);
    auVar17 = vpaddq_avx2(auVar17,auVar15);
    uVar11 = uVar11 + 4;
    *pauVar7 = auVar17;
    pauVar7 = pauVar7 + 1;
  } while (uVar11 < 8);
  uVar6 = 0;
  if (param_10 != 0) {
    do {
      uVar11 = param_10 - (int)uVar6;
      if (8 < uVar11) {
        uVar11 = 8;
      }
      if (param_9 == 1) {
        uVar5 = *param_8;
        *(uint *)((longlong)auStack_178 + lVar3 + 8) = uVar11;
        *(uint *)((longlong)auStack_178 + lVar3) = uVar5;
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554dad0;
        FUN_14554d520(param_1 + uVar6,auStack_a0,param_2 + uVar6,param_3 + uVar6);
      }
      else {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554daec;
        memcpy(auStack_e0,param_1 + uVar6,(ulonglong)(uVar11 * 8));
        uVar5 = 0;
        auStack_120._8_8_ = auStack_a0[1];
        auStack_120._0_8_ = auStack_a0[0];
        auStack_120._16_8_ = auStack_a0[2];
        auStack_120._24_8_ = auStack_a0[3];
        auStack_100 = auStack_80;
        if (param_9 != 0) {
          ppAStack_138 = param_3 + uVar6;
          puVar12 = param_8;
          do {
            ppAVar4 = ppAStack_138;
            uVar2 = *puVar12;
            *(uint *)((longlong)auStack_178 + lVar3 + 8) = uVar11;
            *(uint *)((longlong)auStack_178 + lVar3) = uVar2;
            auVar14 = ZEXT1664(CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))));
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554db6d;
            FUN_14554d520(auStack_e0,auStack_120,param_2 + uVar5 * param_10 + uVar6,ppAVar4);
            puVar12 = puVar12 + 1;
            auVar15 = vpmovzxdq_avx2(auVar14._0_16_);
            auVar15 = vpsllq_avx2(auVar15,2);
            auStack_e0 = vpaddq_avx2(auVar15,auStack_e0);
            auStack_120 = vpaddq_avx2(auVar15,auStack_120);
            auStack_c0 = vpaddq_avx2(auVar15,auStack_c0);
            auStack_100 = vpaddq_avx2(auVar15,auStack_100);
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_9);
        }
      }
      *(uint *)((longlong)auStack_178 + lVar3 + 0x18) = param_11;
      uVar5 = uStack_140;
      *(uint *)((longlong)auStack_178 + lVar3 + 0x10) = uVar11;
      *(uint *)((longlong)auStack_178 + lVar3 + 8) = uVar5;
      *(float ***)((longlong)auStack_178 + lVar3) = param_7 + uVar6;
      *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554dc1c;
      FUN_14554d280(auStack_a0,param_4,param_5 + uVar6 * 8,param_6 + uVar6);
      uVar11 = (int)uVar6 + 8;
      uVar6 = (ulonglong)uVar11;
    } while (uVar11 < param_10);
  }
  return;
}



// FUNCTION 145381220 ProcessPairedBiquadFilter body=1646 status=ok
// SIG void ProcessPairedBiquadFilter(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkBiquadCoefficients * param_3, AkBiquadMemories * param_4, AkBiquadCoefficients * param_5, AkBiquadMemories * param_6, uint param_7)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* void __cdecl AkMixer::ProcessPairedBiquadFilter(class AkAudioBuffer * __ptr64,class AkAudioBuffer
   * __ptr64,struct AkBiquadCoefficients * __ptr64,struct AkBiquadMemories * __ptr64,struct
   AkBiquadCoefficients * __ptr64,struct AkBiquadMemories * __ptr64,unsigned int) */

void __cdecl
AkMixer::ProcessPairedBiquadFilter
          (AkAudioBuffer *param_1,AkAudioBuffer *param_2,AkBiquadCoefficients *param_3,
          AkBiquadMemories *param_4,AkBiquadCoefficients *param_5,AkBiquadMemories *param_6,
          uint param_7)

{
  AkAudioBuffer *pAVar1;
  AkAudioBuffer *pAVar2;
  AkAudioBuffer *pAVar3;
  AkAudioBuffer *pAVar4;
  AkAudioBuffer *pAVar5;
  AkAudioBuffer *pAVar6;
  AkAudioBuffer *pAVar7;
  AkAudioBuffer *pAVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  AkAudioBuffer *pAVar21;
  AkAudioBuffer *pAVar22;
  AkBiquadMemories *pAVar23;
  uint uVar24;
  AkAudioBuffer *pAVar25;
  AkAudioBuffer *pAVar26;
  AkAudioBuffer *pAVar27;
  AkAudioBuffer *pAVar28;
  AkAudioBuffer *pAVar29;
  AkAudioBuffer *pAVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  longlong lVar35;
  undefined1 in_XMM3 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  uint local_res8;
  undefined8 auStack_140 [5];
  ulonglong auStack_118 [3];
  uint auStack_100 [6];
  uint local_e8 [2];
  AkAudioBuffer *local_e0;
  AkAudioBuffer *local_d8;
  AkAudioBuffer *local_d0;
  AkAudioBuffer *local_c8;
  AkAudioBuffer *local_c0;
  AkAudioBuffer *local_b8;
  AkAudioBuffer *local_b0;
  AkAudioBuffer *local_a8;
  
                    /* 0x5381220  213
                       ?ProcessPairedBiquadFilter@AkMixer@@YAXPEAVAkAudioBuffer@@0PEAUAkBiquadCoefficients@@PEAUAkBiquadMemories@@12I@Z
                        */
  uVar24 = *(uint *)(param_1 + 8) & 0xff;
  uVar19 = (ulonglong)uVar24 * 8;
  uVar17 = uVar19 + 0xf;
  if (uVar17 <= uVar19) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x1453812d0;
  lVar10 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar19 + 0xf;
  pAVar27 = (AkAudioBuffer *)((longlong)local_e8 + lVar10);
  if (uVar17 <= uVar19) {
    uVar17 = 0xffffffffffffff0;
  }
  local_e8[0] = uVar24;
  local_d8 = pAVar27;
  *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x1453812f1;
  lVar11 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar19 + 0xf;
  pAVar5 = (AkAudioBuffer *)((longlong)local_e8 + lVar11 + lVar10);
  if (uVar17 <= uVar19) {
    uVar17 = 0xffffffffffffff0;
  }
  local_c0 = pAVar5;
  *(undefined8 *)((longlong)auStack_140 + lVar11 + lVar10) = 0x145381312;
  lVar12 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar19 + 0xf;
  pAVar6 = (AkAudioBuffer *)((longlong)local_e8 + lVar12 + lVar11 + lVar10);
  if (uVar17 <= uVar19) {
    uVar17 = 0xffffffffffffff0;
  }
  local_b0 = pAVar6;
  *(undefined8 *)((longlong)auStack_140 + lVar12 + lVar11 + lVar10) = 0x145381333;
  lVar13 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar19 + 0xf;
  pAVar7 = (AkAudioBuffer *)((longlong)local_e8 + lVar13 + lVar12 + lVar11 + lVar10);
  if (uVar17 <= uVar19) {
    uVar17 = 0xffffffffffffff0;
  }
  local_b8 = pAVar7;
  *(undefined8 *)((longlong)auStack_140 + lVar13 + lVar12 + lVar11 + lVar10) = 0x145381354;
  lVar14 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar19 + 0xf;
  pAVar8 = (AkAudioBuffer *)((longlong)local_e8 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10);
  if (uVar17 <= uVar19) {
    uVar17 = 0xffffffffffffff0;
  }
  local_a8 = pAVar8;
  *(undefined8 *)((longlong)auStack_140 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10) = 0x145381375;
  pAVar21 = local_d8;
  uVar16 = local_e8[0];
  lVar15 = -(uVar17 & 0xfffffffffffffff0);
  local_res8 = 0;
  pAVar25 = (AkAudioBuffer *)
            ((longlong)local_e8 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10);
  pAVar22 = pAVar5;
  pAVar28 = pAVar8;
  pAVar29 = pAVar6;
  pAVar30 = pAVar7;
  local_d0 = pAVar25;
  if (uVar24 != 0) {
    pAVar26 = pAVar27;
    if ((1 < uVar24) && (5 < DAT_14c707900)) {
      pAVar27 = param_2 + 0x10;
      lVar20 = *(longlong *)param_1;
      lVar9 = *(longlong *)param_2;
      local_res8 = 0;
      lVar33 = (ulonglong)(uVar24 - 1) * 8;
      pAVar2 = pAVar25 + lVar33;
      if ((((pAVar8 + lVar33 < pAVar25) || (pAVar2 < pAVar8)) &&
          ((pAVar3 = pAVar7 + lVar33, pAVar3 < pAVar25 || (pAVar2 < pAVar7)))) &&
         ((pAVar26 = pAVar21, pAVar6 + lVar33 < pAVar25 || (pAVar2 < pAVar6)))) {
        local_c8 = pAVar5 + lVar33;
        pAVar1 = param_1 + 0x10;
        if ((local_c8 < pAVar25) || (pAVar2 < pAVar5)) {
          local_e0 = local_d8 + lVar33;
          pAVar4 = pAVar8 + lVar33;
          if ((((((local_e0 < pAVar25) || (pAVar2 < local_d8)) &&
                ((param_2 < pAVar25 || (pAVar2 < param_2)))) &&
               ((pAVar27 < pAVar25 || (pAVar2 < pAVar27)))) &&
              (((((((param_1 < pAVar25 || (pAVar2 < param_1)) &&
                   ((pAVar1 < pAVar25 || (pAVar2 < pAVar1)))) &&
                  (((pAVar3 < pAVar8 || (pAVar4 < pAVar7)) &&
                   ((pAVar2 = pAVar6 + lVar33, pAVar2 < pAVar8 || (pAVar4 < pAVar6)))))) &&
                 ((((local_c8 < pAVar8 || (pAVar4 < pAVar5)) &&
                   ((local_e0 < pAVar8 || (pAVar4 < local_d8)))) &&
                  ((param_2 < pAVar8 || (pAVar4 < param_2)))))) &&
                ((pAVar27 < pAVar8 || (pAVar4 < pAVar27)))) &&
               ((((param_1 < pAVar8 || (pAVar4 < param_1)) &&
                 ((pAVar1 < pAVar8 || (pAVar4 < pAVar1)))) &&
                (((pAVar2 < pAVar7 || (pAVar3 < pAVar6)) &&
                 (((local_c8 < pAVar7 || (pAVar3 < pAVar5)) &&
                  ((((local_e0 < pAVar7 || (pAVar3 < local_d8)) &&
                    ((param_2 < pAVar7 || (pAVar3 < param_2)))) &&
                   ((pAVar27 < pAVar7 || (pAVar3 < pAVar27)))))))))))))) &&
             ((((param_1 < pAVar7 || (pAVar3 < param_1)) &&
               (((((((pAVar1 < pAVar7 || (pAVar3 < pAVar1)) &&
                    ((local_c8 < pAVar6 || (pAVar2 < pAVar5)))) &&
                   ((local_e0 < pAVar6 || (pAVar2 < local_d8)))) &&
                  ((param_2 < pAVar6 || (pAVar2 < param_2)))) &&
                 (((pAVar27 < pAVar6 || (pAVar2 < pAVar27)) &&
                  ((param_1 < pAVar6 || (pAVar2 < param_1)))))) &&
                ((pAVar1 < pAVar6 || (pAVar2 < pAVar1)))))) &&
              (((local_e0 < pAVar5 || (local_c8 < local_d8)) &&
               (((((param_2 < pAVar5 || (local_c8 < param_2)) &&
                  ((pAVar27 < pAVar5 || (local_c8 < pAVar27)))) &&
                 ((((param_1 < pAVar5 || (local_c8 < param_1)) &&
                   ((pAVar1 < pAVar5 || (local_c8 < pAVar1)))) &&
                  ((((param_2 < local_d8 || (local_e0 < param_2)) &&
                    ((pAVar27 < local_d8 || (local_e0 < pAVar27)))) &&
                   ((param_1 < local_d8 || (local_e0 < param_1)))))))) &&
                ((pAVar1 < local_d8 || (local_e0 < pAVar1)))))))))) {
            uVar18 = local_e8[0] & 0xfffffffe;
            auVar36 = pmovzxwq(in_XMM3,ZEXT416(CONCAT22(*(undefined2 *)(param_1 + 0x10),
                                                        *(undefined2 *)(param_1 + 0x10))));
            auVar37 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22(*(undefined2 *)pAVar27,
                                                        *(undefined2 *)pAVar27)));
            uVar24 = 0;
            do {
              uVar17 = (ulonglong)uVar24;
              local_res8 = uVar24 + 2;
              auVar31._4_4_ = uVar24 + 1;
              auVar31._0_4_ = uVar24;
              auVar31._8_4_ = uVar24;
              auVar31._12_4_ = uVar24;
              auVar34 = pmovzxdq(in_XMM2,auVar31);
              auVar31 = vpmullq_avx512vl(auVar36,auVar34);
              auVar32 = vpmullq_avx512vl(auVar37,auVar34);
              lVar33 = auVar34._0_8_ * 0x10;
              lVar35 = auVar34._8_8_ * 0x10;
              *(longlong *)(pAVar21 + uVar17 * 8) = auVar31._0_8_ * 4 + lVar20;
              *(longlong *)(pAVar21 + uVar17 * 8 + 8) = auVar31._8_8_ * 4 + lVar20;
              in_XMM2._0_8_ = param_6 + lVar33;
              in_XMM2._8_8_ = param_6 + lVar35;
              *(AkBiquadMemories **)(pAVar7 + uVar17 * 8) = param_4 + lVar33;
              *(AkBiquadMemories **)(pAVar7 + uVar17 * 8 + 8) = param_4 + lVar35;
              *(longlong *)(pAVar5 + uVar17 * 8) = auVar32._0_8_ * 4 + lVar9;
              *(longlong *)(pAVar5 + uVar17 * 8 + 8) = auVar32._8_8_ * 4 + lVar9;
              *(AkBiquadCoefficients **)(pAVar6 + uVar17 * 8) = param_3;
              *(AkBiquadCoefficients **)(pAVar6 + uVar17 * 8 + 8) = param_3;
              *(AkBiquadCoefficients **)(pAVar8 + uVar17 * 8) = param_5;
              *(AkBiquadCoefficients **)(pAVar8 + uVar17 * 8 + 8) = param_5;
              *(undefined1 (*) [16])(pAVar25 + uVar17 * 8) = in_XMM2;
              uVar24 = local_res8;
            } while (local_res8 < uVar18);
            pAVar27 = pAVar21;
            uVar24 = uVar16;
            if (uVar16 <= local_res8) goto LAB_1453817da;
          }
        }
      }
    }
    uVar17 = (ulonglong)local_res8;
    lVar33 = (longlong)local_d0 - (longlong)pAVar5;
    pAVar23 = param_6 + uVar17 * 0x10;
    uVar19 = (ulonglong)(local_e8[0] - local_res8);
    pAVar21 = pAVar5 + uVar17 * 8;
    do {
      pAVar27 = pAVar21 + 8;
      *(ulonglong *)(pAVar27 + (longlong)(pAVar26 + (-8 - (longlong)pAVar5))) =
           *(longlong *)param_1 + *(ushort *)(param_1 + 0x10) * uVar17 * 4;
      lVar20 = *(ushort *)(param_2 + 0x10) * uVar17;
      uVar17 = uVar17 + 1;
      *(longlong *)pAVar21 = *(longlong *)param_2 + lVar20 * 4;
      *(AkBiquadCoefficients **)(pAVar27 + (longlong)(pAVar6 + (-8 - (longlong)pAVar5))) = param_3;
      *(AkBiquadMemories **)(pAVar27 + (longlong)(pAVar7 + (-8 - (longlong)pAVar5))) =
           pAVar23 + ((longlong)param_4 - (longlong)param_6);
      *(AkBiquadCoefficients **)(pAVar27 + (longlong)(pAVar8 + (-8 - (longlong)pAVar5))) = param_5;
      *(AkBiquadMemories **)(pAVar21 + lVar33) = pAVar23;
      pAVar23 = pAVar23 + 0x10;
      uVar19 = uVar19 - 1;
      pAVar21 = pAVar27;
      pAVar22 = local_c0;
      pAVar25 = local_d0;
      pAVar27 = local_d8;
      pAVar28 = local_a8;
      pAVar29 = local_b0;
      pAVar30 = local_b8;
      uVar24 = local_e8[0];
    } while (uVar19 != 0);
  }
LAB_1453817da:
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    *(uint *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + 8) =
         uVar24;
    *(undefined4 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10) = 1
    ;
    *(uint **)((longlong)auStack_118 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + 0x10) =
         &param_7;
    *(AkAudioBuffer **)
     ((longlong)auStack_118 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + 8) = pAVar25;
    *(AkAudioBuffer **)((longlong)auStack_118 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10)
         = pAVar28;
    *(undefined8 *)((longlong)auStack_140 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10) =
         0x14538184f;
    FUN_1455498b0(pAVar27,pAVar22,pAVar29,pAVar30);
  }
  else {
    *(uint *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + 8) =
         uVar24;
    *(undefined4 *)((longlong)auStack_100 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10) = 1
    ;
    *(uint **)((longlong)auStack_118 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + 0x10) =
         &param_7;
    *(AkAudioBuffer **)
     ((longlong)auStack_118 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + 8) = pAVar25;
    *(AkAudioBuffer **)((longlong)auStack_118 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10)
         = pAVar28;
    *(undefined8 *)((longlong)auStack_140 + lVar15 + lVar14 + lVar13 + lVar12 + lVar11 + lVar10) =
         0x145381819;
    FUN_14554de70(pAVar27,pAVar22,pAVar29,pAVar30);
  }
  return;
}



// FUNCTION 145381890 ProcessPairedInterpBiquadFilter body=27 status=ok
// SIG void ProcessPairedInterpBiquadFilter(float * * param_1, float * * param_2, AkBiquadCoefficients * * param_3, AkBiquadMemories * * param_4, AkBiquadCoefficients * * param_5, AkBiquadMemories * * param_6, uint * param_7, uint param_8, uint param_9)

/* void __cdecl AkMixer::ProcessPairedInterpBiquadFilter(float * __ptr64 * __ptr64,float * __ptr64 *
   __ptr64,struct AkBiquadCoefficients * __ptr64 * __ptr64,struct AkBiquadMemories * __ptr64 *
   __ptr64,struct AkBiquadCoefficients * __ptr64 * __ptr64,struct AkBiquadMemories * __ptr64 *
   __ptr64,unsigned int * __ptr64,unsigned int,unsigned int) */

void __cdecl
AkMixer::ProcessPairedInterpBiquadFilter
          (float **param_1,float **param_2,AkBiquadCoefficients **param_3,AkBiquadMemories **param_4
          ,AkBiquadCoefficients **param_5,AkBiquadMemories **param_6,uint *param_7,uint param_8,
          uint param_9)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [64];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
                    /* 0x5381890  214
                       ?ProcessPairedInterpBiquadFilter@AkMixer@@YAXPEAPEAM0PEAPEAUAkBiquadCoefficients@@PEAPEAUAkBiquadMemories@@12PEAIII@Z
                        */
  uVar2 = param_8;
  if ((DAT_14c7fdea0 != 0) && (DAT_14c7fdea0 == 1)) {
    if (param_8 != 1) {
      uVar5 = 0;
      param_8 = 0;
      if (param_9 != 0) {
        do {
          uVar4 = param_9 - (int)uVar5;
          if (8 < uVar4) {
            uVar4 = 8;
          }
          memcpy(auStack_c8,param_1 + uVar5,(ulonglong)(uVar4 * 8));
          memcpy(auStack_88,param_2 + uVar5,(ulonglong)(uVar4 * 8));
          uVar6 = 0;
          if (uVar2 != 0) {
            puVar7 = param_7;
            do {
              uVar1 = *puVar7;
              lVar3 = uVar6 * param_9 + uVar5;
              auVar9 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
              FUN_14554dc60(auStack_c8,auStack_88,param_3 + lVar3,param_4 + uVar5,param_5 + lVar3,
                            param_6 + uVar5,uVar1,uVar4);
              puVar7 = puVar7 + 1;
              auVar8 = vpmovzxdq_avx2(auVar9._0_16_);
              auVar8 = vpsllq_avx2(auVar8,2);
              auStack_c8 = vpaddq_avx2(auVar8,auStack_c8);
              auStack_88 = vpaddq_avx2(auVar8,auStack_88);
              auStack_a8 = vpaddq_avx2(auVar8,auStack_a8);
              auStack_68 = vpaddq_avx2(auVar8,auStack_68);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar2);
            uVar5 = (ulonglong)param_8;
          }
          param_8 = (int)uVar5 + 8;
          uVar5 = (ulonglong)param_8;
        } while (param_8 < param_9);
      }
      return;
    }
    FUN_14554dc60(param_1,param_2,param_3,param_4,param_5,param_6,*param_7,param_9);
    return;
  }
  FUN_1455498b0();
  return;
}



// FUNCTION 1453818b0 ProcessPairedInterpBiquadFilterAndMix body=27 status=ok
// SIG void ProcessPairedInterpBiquadFilterAndMix(float * * param_1, AkBiquadCoefficients * * param_2, AkBiquadMemories * * param_3, AkBiquadCoefficients * * param_4, AkBiquadMemories * * param_5, float * * param_6, AkRamp * param_7, float * * param_8, float * * param_9, uint * param_10, uint param_11, uint param_12, uint param_13)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* void __cdecl AkMixer::ProcessPairedInterpBiquadFilterAndMix(float * __ptr64 * __ptr64,struct
   AkBiquadCoefficients * __ptr64 * __ptr64,struct AkBiquadMemories * __ptr64 * __ptr64,struct
   AkBiquadCoefficients * __ptr64 * __ptr64,struct AkBiquadMemories * __ptr64 * __ptr64,float *
   __ptr64 * __ptr64,struct AkRamp * __ptr64,float const * __ptr64 * __ptr64,float const * __ptr64 *
   __ptr64,unsigned int * __ptr64,unsigned int,unsigned int,unsigned int) */

void __cdecl
AkMixer::ProcessPairedInterpBiquadFilterAndMix
          (float **param_1,AkBiquadCoefficients **param_2,AkBiquadMemories **param_3,
          AkBiquadCoefficients **param_4,AkBiquadMemories **param_5,float **param_6,AkRamp *param_7,
          float **param_8,float **param_9,uint *param_10,uint param_11,uint param_12,uint param_13)

{
  undefined1 *puVar1;
  uint uVar2;
  longlong lVar3;
  AkBiquadMemories **ppAVar4;
  AkBiquadMemories **ppAVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [32];
  undefined1 auVar18 [64];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined8 auStack_1a0 [5];
  longlong lStack_178;
  uint auStack_170 [6];
  undefined1 auStack_158 [24];
  uint uStack_140;
  AkBiquadMemories **ppAStack_138;
  AkBiquadMemories **ppAStack_130;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined8 auStack_a0 [4];
  undefined1 auStack_80 [32];
  
                    /* 0x53818b0  215
                       ?ProcessPairedInterpBiquadFilterAndMix@AkMixer@@YAXPEAPEAMPEAPEAUAkBiquadCoefficients@@PEAPEAUAkBiquadMemories@@120PEAUAkRamp@@PEAPEBM4PEAIIII@Z
                        */
  if ((DAT_14c7fdea0 == 0) || (DAT_14c7fdea0 != 1)) {
    FUN_145549b30();
    return;
  }
  uVar7 = 0;
  uStack_140 = 0;
  if (0xf < param_11) {
    auVar16 = ZEXT1664((undefined1  [16])0x0);
    auVar18 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar17 = vpaddd_avx2(auVar16._0_32_,*(undefined1 (*) [32])(param_10 + uVar7));
      auVar16 = ZEXT3264(auVar17);
      iVar10 = (int)uVar7;
      uVar13 = iVar10 + 0x10;
      uVar7 = (ulonglong)uVar13;
      auVar19 = vpaddd_avx2(auVar18._0_32_,*(undefined1 (*) [32])(param_10 + (iVar10 + 8)));
      auVar18 = ZEXT3264(auVar19);
    } while (uVar13 < (param_11 & 0xfffffff0));
    auVar17 = vpaddd_avx2(auVar19,auVar17);
    auVar17 = vphaddd_avx2(auVar17,auVar17);
    auVar17 = vphaddd_avx2(auVar17,auVar17);
    auVar20 = vpaddd_avx(auVar17._0_16_,auVar17._16_16_);
    uStack_140 = auVar20._0_4_;
  }
  iVar10 = 0;
  iVar11 = 0;
  uVar13 = (uint)uVar7;
  if (param_11 <= uVar13) goto LAB_14554e1dc;
  if (param_11 - uVar13 < 2) {
LAB_14554e1c6:
    uStack_140 = uStack_140 + param_10[uVar7];
  }
  else {
    uVar6 = ((param_11 - uVar13) - 2 >> 1) + 1;
    uVar12 = (ulonglong)uVar6;
    do {
      iVar10 = iVar10 + param_10[uVar7];
      iVar11 = iVar11 + param_10[uVar7 + 1];
      uVar7 = uVar7 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (uVar13 + uVar6 * 2 < param_11) goto LAB_14554e1c6;
  }
  uStack_140 = uStack_140 + iVar11 + iVar10;
LAB_14554e1dc:
  auVar20._4_4_ = uStack_140;
  auVar20._0_4_ = uStack_140;
  auVar20._8_4_ = uStack_140;
  auVar20._12_4_ = uStack_140;
  uVar7 = (ulonglong)uStack_140 * 0x20 + 0xf;
  if (uVar7 <= (ulonglong)uStack_140 * 0x20) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x14554e20c;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  pauVar8 = (undefined1 (*) [32])auStack_a0;
  auStack_120._8_8_ = 0x300000002;
  auStack_120._0_8_ = 0x100000000;
  auStack_120._16_8_ = 0x500000004;
  auStack_120._24_8_ = 0x700000006;
  puVar1 = auStack_158 + lVar3;
  auVar17._8_8_ = puVar1;
  auVar17._0_8_ = puVar1;
  auVar17._16_8_ = puVar1;
  auVar17._24_8_ = puVar1;
  uVar13 = 0;
  do {
    auVar15._4_4_ = uVar13;
    auVar15._0_4_ = uVar13;
    auVar15._8_4_ = uVar13;
    auVar15._12_4_ = uVar13;
    auVar15 = vpaddd_avx(auVar15,auStack_120._0_16_);
    auVar15 = vpmulld_avx(auVar15,auVar20);
    auVar19 = vpmovzxdq_avx2(auVar15);
    auVar19 = vpsllq_avx2(auVar19,2);
    auVar19 = vpaddq_avx2(auVar19,auVar17);
    uVar13 = uVar13 + 4;
    *pauVar8 = auVar19;
    pauVar8 = pauVar8 + 1;
  } while (uVar13 < 8);
  uVar7 = 0;
  if (param_12 != 0) {
    do {
      uVar13 = param_12 - (int)uVar7;
      if (8 < uVar13) {
        uVar13 = 8;
      }
      if (param_11 == 1) {
        *(uint *)((longlong)auStack_170 + lVar3 + 0x10) = uVar13;
        *(uint *)((longlong)auStack_170 + lVar3 + 8) = *param_10;
        *(AkBiquadMemories ***)((longlong)auStack_170 + lVar3) = param_5 + uVar7;
        *(AkBiquadCoefficients ***)((longlong)&lStack_178 + lVar3) = param_4 + uVar7;
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e2ef;
        FUN_14554dc60(param_1 + uVar7,auStack_a0,param_2 + uVar7,param_3 + uVar7);
      }
      else {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e30b;
        memcpy(auStack_e0,param_1 + uVar7,(ulonglong)(uVar13 * 8));
        uVar6 = 0;
        auStack_120._8_8_ = auStack_a0[1];
        auStack_120._0_8_ = auStack_a0[0];
        auStack_120._16_8_ = auStack_a0[2];
        auStack_120._24_8_ = auStack_a0[3];
        auStack_100 = auStack_80;
        if (param_11 != 0) {
          ppAStack_138 = param_5 + uVar7;
          ppAStack_130 = param_3 + uVar7;
          puVar14 = param_10;
          do {
            ppAVar5 = ppAStack_130;
            ppAVar4 = ppAStack_138;
            uVar2 = *puVar14;
            *(uint *)((longlong)auStack_170 + lVar3 + 0x10) = uVar13;
            lVar9 = uVar6 * param_12 + uVar7;
            *(uint *)((longlong)auStack_170 + lVar3 + 8) = uVar2;
            *(AkBiquadMemories ***)((longlong)auStack_170 + lVar3) = ppAVar4;
            *(AkBiquadCoefficients ***)((longlong)&lStack_178 + lVar3) = param_4 + lVar9;
            auVar16 = ZEXT1664(CONCAT412(uVar2,CONCAT48(uVar2,CONCAT44(uVar2,uVar2))));
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e3b6;
            FUN_14554dc60(auStack_e0,auStack_120,param_2 + lVar9,ppAVar5);
            puVar14 = puVar14 + 1;
            uVar6 = uVar6 + 1;
            auVar17 = vpmovzxdq_avx2(auVar16._0_16_);
            auVar17 = vpsllq_avx2(auVar17,2);
            auStack_e0 = vpaddq_avx2(auVar17,auStack_e0);
            auStack_120 = vpaddq_avx2(auVar17,auStack_120);
            auStack_c0 = vpaddq_avx2(auVar17,auStack_c0);
            auStack_100 = vpaddq_avx2(auVar17,auStack_100);
          } while (uVar6 < param_11);
        }
      }
      *(uint *)((longlong)auStack_170 + lVar3 + 0x10) = param_13;
      uVar6 = uStack_140;
      *(uint *)((longlong)auStack_170 + lVar3 + 8) = uVar13;
      *(uint *)((longlong)auStack_170 + lVar3) = uVar6;
      *(float ***)((longlong)&lStack_178 + lVar3) = param_9 + uVar7;
      *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x14554e46a;
      FUN_14554d280(auStack_a0,param_6,param_7 + uVar7 * 8,param_8 + uVar7);
      uVar13 = (int)uVar7 + 8;
      uVar7 = (ulonglong)uVar13;
    } while (uVar13 < param_12);
  }
  return;
}



// FUNCTION 1453818d0 FUN_1453818d0 body=111 status=ok
// SIG undefined FUN_1453818d0(void)

void FUN_1453818d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSinkPluginParams.cpp"
                      ,0x16);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_149d43848;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0xc;
    *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc) & 0xff;
    *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc) | 0x2d63f100;
    *(undefined1 *)(puVar1 + 2) = 0xc;
    *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xff;
    *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) | 0x2d63f100;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 1;
    *(undefined2 *)((longlong)puVar1 + 0x16) = 0x20;
    *(undefined1 *)(puVar1 + 3) = 0;
    return;
  }
  return;
}



// FUNCTION 145381940 FUN_145381940 body=92 status=ok
// SIG undefined FUN_145381940(void)

undefined8 * FUN_145381940(longlong *param_1)

{
  undefined8 *puVar1;
  ushort uStack_a;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_1 + 8))
                     (param_1,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSinkPluginParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_149d43878;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[1] = 0x3102;
    puVar1[2] = (ulonglong)uStack_a << 0x30;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1453819c0 FUN_1453819c0 body=56 status=ok
// SIG undefined FUN_1453819c0(void)

undefined8 FUN_1453819c0(undefined8 *param_1,longlong *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  return 1;
}



// FUNCTION 145381a00 FUN_145381a00 body=127 status=ok
// SIG undefined FUN_145381a00(void)

undefined8 * FUN_145381a00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSinkPluginParams.cpp"
                     );
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc) & 0xff;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xff;
    *puVar1 = &PTR_FUN_149d43848;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    *(undefined2 *)((longlong)puVar1 + 0x16) = *(undefined2 *)(param_1 + 0x16);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145381bd0 FUN_145381bd0 body=43 status=ok
// SIG undefined FUN_145381bd0(void)

undefined8 * FUN_145381bd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145381c00 FUN_145381c00 body=56 status=ok
// SIG undefined FUN_145381c00(void)

undefined8 * FUN_145381c00(undefined8 *param_1)

{
  ushort uStack_a;
  
  *param_1 = &PTR_FUN_149d43878;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0x3102;
  param_1[2] = (ulonglong)uStack_a << 0x30;
  return param_1;
}



// FUNCTION 145381c40 FUN_145381c40 body=112 status=ok
// SIG undefined FUN_145381c40(void)

undefined8 * FUN_145381c40(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           (**(code **)(*param_2 + 8))
                     (param_2,0x20,
                      "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkSinkPluginParams.cpp"
                      ,0xea);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) & 0xff;
    *puVar2 = &PTR_FUN_149d43878;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x14) = 0;
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145381cd0 FUN_145381cd0 body=43 status=ok
// SIG undefined FUN_145381cd0(void)

undefined8 * FUN_145381cd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1499d1820;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145381d00 FUN_145381d00 body=41 status=ok
// SIG undefined FUN_145381d00(void)

uint * FUN_145381d00(uint *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0xf;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0xf;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)param_1 = 0;
  *param_1 = *param_1 & 0xff;
  return param_1;
}



// FUNCTION 145381d30 FUN_145381d30 body=3 status=ok
// SIG undefined FUN_145381d30(void)

void FUN_145381d30(void)

{
  return;
}



// FUNCTION 145381d40 FUN_145381d40 body=163 status=ok
// SIG undefined FUN_145381d40(void)

undefined8 FUN_145381d40(uint *param_1,uint param_2)

{
  uint uVar1;
  void *_Dst;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = (param_2 & 0xff) * 0x20 + 0x38;
  _Dst = AK::MemoryMgr::Malign(6,(ulonglong)uVar1,0x10);
  if (_Dst == (void *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    AK::MemoryMgr::Free(6,(void *)0x0);
    uVar2 = 2;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    memset(_Dst,0,(ulonglong)uVar1);
    uVar2 = 1;
    *(longlong *)((longlong)_Dst + 0x28) = (longlong)_Dst + 0x38;
    *(ulonglong *)((longlong)_Dst + 0x30) =
         (ulonglong)(param_2 & 0xff) * 0x10 + 0x38 + (longlong)_Dst;
    *(void **)(param_1 + 8) = _Dst;
  }
  return uVar2;
}



// FUNCTION 145381df0 FUN_145381df0 body=37 status=ok
// SIG undefined FUN_145381df0(void)

void FUN_145381df0(longlong param_1)

{
  AK::MemoryMgr::Free(6,*(void **)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145381e20 FUN_145381e20 body=215 status=ok
// SIG undefined FUN_145381e20(void)

undefined8 FUN_145381e20(uint *param_1,uint param_2)

{
  uint uVar1;
  void *_Dst;
  undefined8 uVar2;
  
  AK::MemoryMgr::Free(6,*(void **)(param_1 + 8));
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0xf;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0xf;
  uVar1 = (param_2 & 0xff) * 0x20 + 0x38;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = param_2;
  _Dst = AK::MemoryMgr::Malign(6,(ulonglong)uVar1,0x10);
  if (_Dst == (void *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    AK::MemoryMgr::Free(6,(void *)0x0);
    uVar2 = 2;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    memset(_Dst,0,(ulonglong)uVar1);
    *(longlong *)((longlong)_Dst + 0x28) = (longlong)_Dst + 0x38;
    uVar2 = 1;
    *(ulonglong *)((longlong)_Dst + 0x30) =
         (ulonglong)(param_2 & 0xff) * 0x10 + 0x38 + (longlong)_Dst;
    *(void **)(param_1 + 8) = _Dst;
  }
  return uVar2;
}



// FUNCTION 145381f00 FUN_145381f00 body=68 status=ok
// SIG undefined FUN_145381f00(void)

void FUN_145381f00(byte *param_1)

{
  param_1[0xd] = param_1[0xd] | 2;
  param_1[0x19] = param_1[0x19] | 2;
  memset(*(void **)(*(longlong *)(param_1 + 0x20) + 0x28),0,(ulonglong)*param_1 << 4);
  memset(*(void **)(*(longlong *)(param_1 + 0x20) + 0x30),0,(ulonglong)*param_1 << 4);
  return;
}



// FUNCTION 145381f50 FUN_145381f50 body=95 status=ok
// SIG undefined FUN_145381f50(void)

void FUN_145381f50(undefined4 *param_1,undefined4 *param_2)

{
  AK::MemoryMgr::Free(6,*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  *param_1 = *param_2;
  return;
}



// FUNCTION 145381fb0 FUN_145381fb0 body=930 status=ok
// SIG undefined FUN_145381fb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145381fb0(uint param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 auStack_1c0 [5];
  longlong alStack_198 [4];
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168 [3];
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  longlong local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  if (param_1 != 0) {
    plVar22 = param_4;
    if (param_3 != (longlong *)0x0) {
      plVar22 = param_3;
    }
    uVar2 = (ulonglong)param_1 * 2;
    uStack_170 = 0;
    uStack_140 = 0;
    local_168[1] = 0;
    uStack_150 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uVar1 = *(undefined2 *)(*plVar22 + 0x10);
    uVar21 = uVar2 + 0xf;
    uStack_118 = 0;
    local_110 = 0;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    auStack_1c0[0] = 0x145382075;
    lVar3 = -(uVar21 & 0xfffffffffffffff0);
    local_178 = (longlong)&local_178 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1c0 + lVar3) = 0x145382096;
    lVar4 = -(uVar21 & 0xfffffffffffffff0);
    local_148 = (longlong)&local_178 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1c0 + lVar4 + lVar3) = 0x1453820b7;
    lVar5 = -(uVar21 & 0xfffffffffffffff0);
    local_168[0] = (longlong)&local_178 + lVar5 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1c0 + lVar5 + lVar4 + lVar3) = 0x1453820d8;
    lVar6 = -(uVar21 & 0xfffffffffffffff0);
    local_168[2] = (longlong)&local_178 + lVar6 + lVar5 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1c0 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1453820f9;
    lVar7 = -(uVar21 & 0xfffffffffffffff0);
    local_138 = (longlong)&local_178 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1c0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x14538211a;
    lVar8 = -(uVar21 & 0xfffffffffffffff0);
    local_120 = (longlong)&local_178 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         &local_138;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         &local_120;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         local_168;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_168 + 2;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538215a;
    FUN_145382820(param_2,(ulonglong)param_1,&local_178,&local_148);
    uVar16 = uStack_140;
    lVar15 = local_148;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) = 0;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = param_4;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538218b;
    FUN_145386060(&local_148,param_2,uVar1,plVar22);
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) = 0;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = param_4;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1453821ba;
    FUN_145386780(&local_178,param_2,uVar1,plVar22);
    lVar12 = local_168[1];
    lVar11 = local_168[0];
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) = 0;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = param_4;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1453821eb;
    FUN_145386980(local_168,param_2,uVar1,plVar22);
    uVar18 = uStack_130;
    lVar17 = local_138;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         0;
    uVar9 = CONCAT44(uStack_124,local_128);
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) = 0;
    local_108 = lVar17;
    uStack_100 = uVar18;
    local_f8 = uVar9;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = param_4;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538222a;
    FUN_145386bf0(&local_108,param_2,uVar1,plVar22);
    uVar14 = uStack_150;
    lVar13 = local_168[2];
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         0;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) = 0;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = param_4;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538225b;
    FUN_1453870c0(local_168 + 2,param_2,uVar1,plVar22);
    uVar20 = uStack_118;
    lVar19 = local_120;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         0;
    uVar10 = CONCAT44(uStack_10c,local_110);
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         0;
    local_e8 = lVar19;
    uStack_e0 = uVar20;
    local_d8 = uVar10;
    *(undefined8 *)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) = 0;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = param_4;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538229c;
    FUN_145387550(&local_e8,param_2,uVar1,plVar22);
    local_168[2] = lVar15;
    uStack_150 = uVar16;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         local_168 + 2;
    local_c8 = lVar17;
    uStack_c0 = uVar18;
    *(longlong **)((longlong)alStack_198 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         &local_c8;
    local_a8 = lVar19;
    uStack_a0 = uVar20;
    local_178 = lVar13;
    uStack_170 = uVar14;
    local_168[0] = lVar11;
    local_168[1] = lVar12;
    local_b8 = uVar9;
    local_98 = uVar10;
    *(undefined8 *)((longlong)auStack_1c0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1453822fa;
    FUN_145382a50(param_2,&local_178,local_168,&local_a8);
  }
  return;
}



// FUNCTION 145382360 FUN_145382360 body=1035 status=ok
// SIG undefined FUN_145382360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145382360(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 auStack_1f0 [5];
  longlong alStack_1c8 [4];
  longlong local_1a8 [2];
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  longlong local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  if ((int)param_2 == 0) {
    auStack_1f0[0] = 0x1453823d3;
    FUN_145071a20();
  }
  else {
    uVar2 = (param_2 & 0xffffffff) * 2;
    uVar1 = *(undefined2 *)(*param_4 + 0x10);
    *(undefined2 *)(param_5 + 0x12) = *(undefined2 *)(param_5 + 0x10);
    uStack_170 = 0;
    uStack_160 = 0;
    uStack_190 = 0;
    uStack_180 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    auStack_1f0[0] = 0x145382432;
    lVar3 = -(uVar21 & 0xfffffffffffffff0);
    local_178 = (longlong)local_1a8 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1f0 + lVar3) = 0x145382453;
    lVar4 = -(uVar21 & 0xfffffffffffffff0);
    local_168 = (longlong)local_1a8 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1f0 + lVar4 + lVar3) = 0x145382474;
    lVar5 = -(uVar21 & 0xfffffffffffffff0);
    local_198 = (longlong)local_1a8 + lVar5 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1f0 + lVar5 + lVar4 + lVar3) = 0x145382495;
    lVar6 = -(uVar21 & 0xfffffffffffffff0);
    local_188 = (longlong)local_1a8 + lVar6 + lVar5 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1f0 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1453824b6;
    lVar7 = -(uVar21 & 0xfffffffffffffff0);
    local_158 = (longlong)local_1a8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
    uVar21 = uVar2 + 0xf;
    if (uVar21 <= uVar2) {
      uVar21 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_1f0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1453824d7;
    lVar8 = -(uVar21 & 0xfffffffffffffff0);
    local_140 = (longlong)local_1a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         &local_158;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         &local_140;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         &local_198;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         &local_188;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x145382517;
    FUN_145382820(param_3,param_2,&local_178,&local_168);
    uVar16 = uStack_160;
    lVar15 = local_168;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         param_8;
    local_1a8[0] = param_5;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         param_7;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         param_6;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_1a8;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x145382568;
    FUN_1453837e0(&local_168,param_3,uVar1,param_4);
    uVar12 = uStack_190;
    lVar11 = local_198;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         param_8;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         param_7;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         param_6;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_1a8;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538259d;
    FUN_145383f40(&local_198,param_3,uVar1,param_4);
    uVar18 = uStack_150;
    lVar17 = local_158;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         param_8;
    uVar9 = CONCAT44(uStack_144,local_148);
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         param_7;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         param_6;
    local_118 = lVar17;
    uStack_110 = uVar18;
    local_108 = uVar9;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_1a8;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1453825e6;
    FUN_145384410(&local_118,param_3,uVar1,param_4);
    uVar14 = uStack_180;
    lVar13 = local_188;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         param_8;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         param_7;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         param_6;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_1a8;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538261b;
    FUN_145384ba0(&local_188,param_3,uVar1,param_4);
    uVar20 = uStack_138;
    lVar19 = local_140;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         param_8;
    uVar10 = CONCAT44(uStack_12c,local_130);
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         param_7;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         param_6;
    local_f8 = lVar19;
    uStack_f0 = uVar20;
    local_e8 = uVar10;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_1a8;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x145382660;
    FUN_1453852a0(&local_f8,param_3,uVar1,param_4);
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x18) =
         param_8;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 0x10) =
         param_7;
    *(undefined8 *)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         param_6;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         local_1a8;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x145382693;
    FUN_145385c70(&local_178,param_3,uVar1,param_4);
    local_178 = lVar15;
    uStack_170 = uVar16;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         &local_178;
    local_d8 = lVar17;
    uStack_d0 = uVar18;
    *(longlong **)((longlong)alStack_1c8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         &local_d8;
    local_b8 = lVar19;
    uStack_b0 = uVar20;
    local_188 = lVar11;
    uStack_180 = uVar12;
    local_198 = lVar13;
    uStack_190 = uVar14;
    local_c8 = uVar9;
    local_a8 = uVar10;
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1453826f1;
    FUN_145382a50(param_3,&local_198,&local_188,&local_b8);
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1453826fd;
    FUN_145071a20(local_128);
    *(undefined8 *)((longlong)auStack_1f0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x14538270c;
    FUN_145071b50(param_1,local_128);
  }
  return param_1;
}



// FUNCTION 145382770 FUN_145382770 body=172 status=ok
// SIG undefined FUN_145382770(void)

float FUN_145382770(float param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (30.0 <= param_1) {
    uVar1 = (uint)(longlong)((100.0 - param_1) * 1042939.94 + 1.0653532e+09);
    fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
    fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) * (float)(uVar1 & 0xff800000)
            * 16.797443;
  }
  else {
    fVar3 = (30.0 - param_1) * 433.33334 + 7000.0;
  }
  fVar2 = (float)param_2 * 0.45;
  if (fVar3 <= (float)param_2 * 0.45) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 145382820 FUN_145382820 body=546 status=ok
// SIG undefined FUN_145382820(void)

void FUN_145382820(undefined8 *param_1,ushort param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  longlong *plVar7;
  ushort uVar8;
  uint uVar9;
  
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      pbVar2 = (byte *)*param_1;
      lVar3 = *(longlong *)(pbVar2 + 0x20);
      bVar1 = *pbVar2;
      FUN_1453834a0(pbVar2 + 4,lVar3,*(undefined8 *)(lVar3 + 0x28),bVar1);
      FUN_145383640(pbVar2 + 0x10,lVar3 + 0x14,*(undefined8 *)(lVar3 + 0x30),bVar1);
      bVar6 = ~(pbVar2[0x19] >> 2) & 1;
      if (((pbVar2[0xd] & 8) == 0) || ((pbVar2[0x19] & 8) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((*(float *)(pbVar2 + 4) == *(float *)(pbVar2 + 8)) &&
         (*(float *)(pbVar2 + 0x10) == *(float *)(pbVar2 + 0x14))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      uVar9 = (uint)bVar1;
      plVar7 = param_4;
      if (bVar4) {
LAB_14538292d:
        *(ushort *)(*plVar7 + (ulonglong)*(uint *)(plVar7 + 1) * 2) = uVar8;
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + uVar9;
      }
      else if ((~(pbVar2[0xd] >> 2) & 1) == 0) {
        plVar7 = param_3;
        if (bVar6 == 0) goto LAB_14538292d;
        if (bVar5) {
          *(ushort *)(*param_7 + (ulonglong)*(uint *)((longlong)param_7 + 0xc) * 2) = uVar8;
          *(int *)((longlong)param_7 + 0xc) = *(int *)((longlong)param_7 + 0xc) + 1;
          *(uint *)(param_7 + 2) = (int)param_7[2] + uVar9;
        }
        else {
          *(ushort *)(*param_8 + (ulonglong)*(uint *)((longlong)param_8 + 0xc) * 2) = uVar8;
          *(int *)((longlong)param_8 + 0xc) = *(int *)((longlong)param_8 + 0xc) + 1;
LAB_1453829f9:
          *(uint *)(param_8 + 2) = (int)param_8[2] + uVar9;
        }
      }
      else if (bVar6 == 0) {
        if (!bVar5) {
          *(undefined2 *)(*param_8 + (ulonglong)*(uint *)((longlong)param_8 + 0xc) * 2) =
               *(undefined2 *)(*param_8 + (ulonglong)*(uint *)(param_8 + 1) * 2);
          *(int *)((longlong)param_8 + 0xc) = *(int *)((longlong)param_8 + 0xc) + 1;
          *(ushort *)(*param_8 + (ulonglong)*(uint *)(param_8 + 1) * 2) = uVar8;
          *(int *)(param_8 + 1) = (int)param_8[1] + 1;
          goto LAB_1453829f9;
        }
        *(undefined2 *)(*param_7 + (ulonglong)*(uint *)((longlong)param_7 + 0xc) * 2) =
             *(undefined2 *)(*param_7 + (ulonglong)*(uint *)(param_7 + 1) * 2);
        *(int *)((longlong)param_7 + 0xc) = *(int *)((longlong)param_7 + 0xc) + 1;
        *(ushort *)(*param_7 + (ulonglong)*(uint *)(param_7 + 1) * 2) = uVar8;
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        *(uint *)(param_7 + 2) = (int)param_7[2] + uVar9;
      }
      else if (bVar5) {
        *(ushort *)(*param_5 + (ulonglong)*(uint *)(param_5 + 1) * 2) = uVar8;
        *(int *)(param_5 + 1) = (int)param_5[1] + 1;
        *(int *)((longlong)param_5 + 0xc) = *(int *)((longlong)param_5 + 0xc) + uVar9;
      }
      else {
        *(ushort *)(*param_6 + (ulonglong)*(uint *)(param_6 + 1) * 2) = uVar8;
        *(int *)(param_6 + 1) = (int)param_6[1] + 1;
        *(int *)((longlong)param_6 + 0xc) = *(int *)((longlong)param_6 + 0xc) + uVar9;
      }
      uVar8 = uVar8 + 1;
      param_1 = param_1 + 1;
    } while (uVar8 < param_2);
  }
  return;
}



// FUNCTION 145382a50 FUN_145382a50 body=1128 status=ok
// SIG undefined FUN_145382a50(void)

void FUN_145382a50(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  
  lVar8 = 0;
  uVar13 = 0;
  uVar9 = *(uint *)(param_4 + 1);
  uVar11 = (ulonglong)uVar9;
  if (uVar9 < 4) {
    if (uVar9 != 0) {
      lVar12 = *param_4;
      goto LAB_145382b3a;
    }
  }
  else {
    lVar12 = *param_4;
    uVar6 = (uVar9 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar6;
    puVar7 = (ushort *)(lVar12 + 4);
    uVar13 = uVar6 * 4;
    lVar8 = (ulonglong)uVar6 * 4;
    do {
      lVar3 = *(longlong *)(param_1 + (ulonglong)puVar7[-2] * 8);
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar3 + 8);
      if (*(float *)(lVar3 + 8) <= 0.1) {
        *(undefined1 *)(lVar3 + 0xc) = 4;
      }
      lVar3 = *(longlong *)(param_1 + (ulonglong)puVar7[-1] * 8);
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar3 + 8);
      if (*(float *)(lVar3 + 8) <= 0.1) {
        *(undefined1 *)(lVar3 + 0xc) = 4;
      }
      lVar3 = *(longlong *)(param_1 + (ulonglong)*puVar7 * 8);
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar3 + 8);
      if (*(float *)(lVar3 + 8) <= 0.1) {
        *(undefined1 *)(lVar3 + 0xc) = 4;
      }
      lVar3 = *(longlong *)(param_1 + (ulonglong)puVar7[1] * 8);
      *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar3 + 8);
      if (*(float *)(lVar3 + 8) <= 0.1) {
        *(undefined1 *)(lVar3 + 0xc) = 4;
      }
      puVar7 = puVar7 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (uVar13 < uVar9) {
LAB_145382b3a:
      puVar7 = (ushort *)(lVar12 + lVar8 * 2);
      uVar10 = (ulonglong)(uVar9 - uVar13);
      do {
        lVar8 = *(longlong *)(param_1 + (ulonglong)*puVar7 * 8);
        *(float *)(lVar8 + 4) = *(float *)(lVar8 + 8);
        if (*(float *)(lVar8 + 8) <= 0.1) {
          *(undefined1 *)(lVar8 + 0xc) = 4;
        }
        puVar7 = puVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  uVar13 = *(uint *)((longlong)param_4 + 0xc);
  if (uVar9 < uVar13) {
    lVar8 = *param_4;
    if (3 < uVar13 - uVar9) {
      puVar7 = (ushort *)(uVar11 * 2 + 4 + lVar8);
      uVar6 = ((uVar13 - uVar9) - 4 >> 2) + 1;
      uVar10 = (ulonglong)uVar6;
      uVar9 = uVar9 + uVar6 * 4;
      uVar11 = uVar11 + (ulonglong)uVar6 * 4;
      do {
        lVar12 = *(longlong *)(param_1 + (ulonglong)puVar7[-2] * 8);
        *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar12 + 0x14);
        if (*(float *)(lVar12 + 0x14) <= 0.1) {
          *(undefined1 *)(lVar12 + 0x18) = 4;
        }
        lVar12 = *(longlong *)(param_1 + (ulonglong)puVar7[-1] * 8);
        *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar12 + 0x14);
        if (*(float *)(lVar12 + 0x14) <= 0.1) {
          *(undefined1 *)(lVar12 + 0x18) = 4;
        }
        lVar12 = *(longlong *)(param_1 + (ulonglong)*puVar7 * 8);
        *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar12 + 0x14);
        if (*(float *)(lVar12 + 0x14) <= 0.1) {
          *(undefined1 *)(lVar12 + 0x18) = 4;
        }
        lVar12 = *(longlong *)(param_1 + (ulonglong)puVar7[1] * 8);
        *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar12 + 0x14);
        if (*(float *)(lVar12 + 0x14) <= 0.1) {
          *(undefined1 *)(lVar12 + 0x18) = 4;
        }
        puVar7 = puVar7 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      if (uVar13 <= uVar9) goto LAB_145382c4c;
    }
    puVar7 = (ushort *)(lVar8 + uVar11 * 2);
    uVar11 = (ulonglong)(uVar13 - uVar9);
    do {
      lVar8 = *(longlong *)(param_1 + (ulonglong)*puVar7 * 8);
      *(float *)(lVar8 + 0x10) = *(float *)(lVar8 + 0x14);
      if (*(float *)(lVar8 + 0x14) <= 0.1) {
        *(undefined1 *)(lVar8 + 0x18) = 4;
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB_145382c4c:
  if (*(uint *)(param_2 + 1) != 0) {
    puVar7 = (ushort *)*param_2;
    uVar11 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      uVar2 = *puVar7;
      lVar8 = *(longlong *)(param_1 + (ulonglong)uVar2 * 8);
      fVar1 = *(float *)(lVar8 + 8);
      if (fVar1 == *(float *)(lVar8 + 4)) {
        if (('\0' < *(char *)(lVar8 + 0xc)) &&
           (cVar4 = *(char *)(lVar8 + 0xc) + -1, *(char *)(lVar8 + 0xc) = cVar4, cVar4 == '\0')) {
          bVar5 = *(byte *)(lVar8 + 0xd);
          if ((bVar5 & 4) == 0) {
            bVar5 = bVar5 & 0xf7;
          }
          *(byte *)(lVar8 + 0xd) = bVar5 | 4;
        }
      }
      else {
        *(float *)(lVar8 + 4) = fVar1;
        if (fVar1 <= 0.1) {
          *(undefined1 *)(lVar8 + 0xc) = 4;
        }
      }
      lVar8 = *(longlong *)(param_1 + (ulonglong)uVar2 * 8);
      fVar1 = *(float *)(lVar8 + 0x14);
      if (fVar1 == *(float *)(lVar8 + 0x10)) {
        if (('\0' < *(char *)(lVar8 + 0x18)) &&
           (cVar4 = *(char *)(lVar8 + 0x18) + -1, *(char *)(lVar8 + 0x18) = cVar4, cVar4 == '\0')) {
          bVar5 = *(byte *)(lVar8 + 0x19);
          if ((bVar5 & 4) == 0) {
            bVar5 = bVar5 & 0xf7;
          }
          *(byte *)(lVar8 + 0x19) = bVar5 | 4;
        }
      }
      else {
        *(float *)(lVar8 + 0x10) = fVar1;
        if (fVar1 <= 0.1) {
          *(undefined1 *)(lVar8 + 0x18) = 4;
        }
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*(uint *)(param_6 + 1) != 0) {
    puVar7 = (ushort *)*param_6;
    uVar11 = (ulonglong)*(uint *)(param_6 + 1);
    do {
      uVar2 = *puVar7;
      lVar8 = *(longlong *)(param_1 + (ulonglong)uVar2 * 8);
      fVar1 = *(float *)(lVar8 + 8);
      if (fVar1 == *(float *)(lVar8 + 4)) {
        if (('\0' < *(char *)(lVar8 + 0xc)) &&
           (cVar4 = *(char *)(lVar8 + 0xc) + -1, *(char *)(lVar8 + 0xc) = cVar4, cVar4 == '\0')) {
          bVar5 = *(byte *)(lVar8 + 0xd);
          if ((bVar5 & 4) == 0) {
            bVar5 = bVar5 & 0xf7;
          }
          *(byte *)(lVar8 + 0xd) = bVar5 | 4;
        }
      }
      else {
        *(float *)(lVar8 + 4) = fVar1;
        if (fVar1 <= 0.1) {
          *(undefined1 *)(lVar8 + 0xc) = 4;
        }
      }
      lVar8 = *(longlong *)(param_1 + (ulonglong)uVar2 * 8);
      fVar1 = *(float *)(lVar8 + 0x14);
      if (fVar1 == *(float *)(lVar8 + 0x10)) {
        if (('\0' < *(char *)(lVar8 + 0x18)) &&
           (cVar4 = *(char *)(lVar8 + 0x18) + -1, *(char *)(lVar8 + 0x18) = cVar4, cVar4 == '\0')) {
          bVar5 = *(byte *)(lVar8 + 0x19);
          if ((bVar5 & 4) == 0) {
            bVar5 = bVar5 & 0xf7;
          }
          *(byte *)(lVar8 + 0x19) = bVar5 | 4;
        }
      }
      else {
        *(float *)(lVar8 + 0x10) = fVar1;
        if (fVar1 <= 0.1) {
          *(undefined1 *)(lVar8 + 0x18) = 4;
        }
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*(uint *)(param_5 + 1) != 0) {
    puVar7 = (ushort *)*param_5;
    uVar11 = (ulonglong)*(uint *)(param_5 + 1);
    do {
      lVar8 = *(longlong *)(param_1 + (ulonglong)*puVar7 * 8);
      if (('\0' < *(char *)(lVar8 + 0xc)) &&
         (cVar4 = *(char *)(lVar8 + 0xc) + -1, *(char *)(lVar8 + 0xc) = cVar4, cVar4 == '\0')) {
        bVar5 = *(byte *)(lVar8 + 0xd);
        if ((bVar5 & 4) == 0) {
          bVar5 = bVar5 & 0xf7;
        }
        *(byte *)(lVar8 + 0xd) = bVar5 | 4;
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar9 = *(uint *)(param_5 + 1);
  if (uVar9 < *(uint *)((longlong)param_5 + 0xc)) {
    uVar11 = (ulonglong)(*(uint *)((longlong)param_5 + 0xc) - uVar9);
    puVar7 = (ushort *)(*param_5 + (ulonglong)uVar9 * 2);
    do {
      lVar8 = *(longlong *)(param_1 + (ulonglong)*puVar7 * 8);
      if (('\0' < *(char *)(lVar8 + 0x18)) &&
         (cVar4 = *(char *)(lVar8 + 0x18) + -1, *(char *)(lVar8 + 0x18) = cVar4, cVar4 == '\0')) {
        bVar5 = *(byte *)(lVar8 + 0x19);
        if ((bVar5 & 4) == 0) {
          bVar5 = bVar5 & 0xf7;
        }
        *(byte *)(lVar8 + 0x19) = bVar5 | 4;
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*(uint *)(param_3 + 1) != 0) {
    puVar7 = (ushort *)*param_3;
    uVar11 = (ulonglong)*(uint *)(param_3 + 1);
    do {
      uVar2 = *puVar7;
      lVar8 = *(longlong *)(param_1 + (ulonglong)uVar2 * 8);
      if (('\0' < *(char *)(lVar8 + 0xc)) &&
         (cVar4 = *(char *)(lVar8 + 0xc) + -1, *(char *)(lVar8 + 0xc) = cVar4, cVar4 == '\0')) {
        bVar5 = *(byte *)(lVar8 + 0xd);
        if ((bVar5 & 4) == 0) {
          bVar5 = bVar5 & 0xf7;
        }
        *(byte *)(lVar8 + 0xd) = bVar5 | 4;
      }
      lVar8 = *(longlong *)(param_1 + (ulonglong)uVar2 * 8);
      if (('\0' < *(char *)(lVar8 + 0x18)) &&
         (cVar4 = *(char *)(lVar8 + 0x18) + -1, *(char *)(lVar8 + 0x18) = cVar4, cVar4 == '\0')) {
        bVar5 = *(byte *)(lVar8 + 0x19);
        if ((bVar5 & 4) == 0) {
          bVar5 = bVar5 & 0xf7;
        }
        *(byte *)(lVar8 + 0x19) = bVar5 | 4;
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 145382ec0 FUN_145382ec0 body=620 status=ok
// SIG undefined FUN_145382ec0(void)

void FUN_145382ec0(longlong *param_1,longlong param_2,float param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    lVar3 = *param_1;
    pfVar5 = (float *)(param_4 + 8);
    lVar7 = 0;
    uVar6 = (ulonglong)uVar2;
    do {
      uVar4 = DAT_14c72f42c;
      uVar1 = *(undefined8 *)
               (*(longlong *)(param_2 + (ulonglong)*(ushort *)(lVar7 + lVar3) * 8) + 4);
      fVar8 = (float)uVar1;
      fVar9 = (float)((ulonglong)uVar1 >> 0x20);
      fVar8 = (float)FUN_145382770(CONCAT44(fVar9,(fVar9 - fVar8) * param_3 + fVar8),DAT_14c72f42c);
      fVar8 = tanf((fVar8 / (float)uVar4) * 3.1415927);
      fVar8 = 1.0 / fVar8;
      lVar7 = lVar7 + 2;
      fVar10 = fVar8 * fVar8;
      fVar9 = 1.0 / (fVar8 * 1.4142135 + 1.0 + fVar10);
      pfVar5[-2] = fVar9;
      pfVar5[-1] = fVar9 + fVar9;
      *pfVar5 = fVar9;
      pfVar5[1] = ((1.0 - fVar10) + (1.0 - fVar10)) * fVar9;
      pfVar5[2] = ((1.0 - fVar8 * 1.4142135) + fVar10) * fVar9;
      pfVar5 = pfVar5 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
    lVar3 = *param_1;
    lVar7 = (ulonglong)uVar2 * 2;
    uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) - uVar2);
    pfVar5 = (float *)(param_4 + (ulonglong)uVar2 * 0x14 + 8);
    do {
      uVar2 = DAT_14c72f42c;
      uVar1 = *(undefined8 *)
               (*(longlong *)(param_2 + (ulonglong)*(ushort *)(lVar3 + lVar7) * 8) + 0x10);
      fVar8 = (float)uVar1;
      fVar8 = (float)FUN_145382770(100.0 - (((float)((ulonglong)uVar1 >> 0x20) - fVar8) * param_3 +
                                           fVar8),DAT_14c72f42c);
      fVar8 = tanf((fVar8 / (float)uVar2) * 3.1415927);
      lVar7 = lVar7 + 2;
      fVar10 = fVar8 * fVar8 + 1.0;
      fVar9 = 1.0 / (fVar10 + fVar8 * 1.4142135);
      pfVar5[-2] = fVar9;
      pfVar5[-1] = fVar9 * -2.0;
      *pfVar5 = fVar9;
      pfVar5[1] = (1.0 - fVar8 * fVar8) * fVar9 * -2.0;
      pfVar5[2] = (fVar10 - fVar8 * 1.4142135) * fVar9;
      pfVar5 = pfVar5 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 145383130 FUN_145383130 body=611 status=ok
// SIG undefined FUN_145383130(void)

void FUN_145383130(longlong *param_1,longlong param_2,float param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(uint *)(param_1 + 1) != 0) {
    pfVar5 = (float *)(param_4 + 8);
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    lVar3 = *param_1;
    lVar7 = 0;
    param_5 = param_5 - param_4;
    do {
      uVar4 = DAT_14c72f42c;
      uVar2 = *(ushort *)(lVar7 + lVar3);
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + (ulonglong)uVar2 * 8) + 4);
      fVar8 = (float)uVar1;
      fVar9 = (float)((ulonglong)uVar1 >> 0x20);
      fVar8 = (float)FUN_145382770(CONCAT44(fVar9,(fVar9 - fVar8) * param_3 + fVar8),DAT_14c72f42c);
      fVar8 = tanf((fVar8 / (float)uVar4) * 3.1415927);
      fVar8 = 1.0 / fVar8;
      fVar10 = fVar8 * fVar8;
      fVar9 = 1.0 / (fVar8 * 1.4142135 + 1.0 + fVar10);
      pfVar5[-2] = fVar9;
      pfVar5[-1] = fVar9 + fVar9;
      *pfVar5 = fVar9;
      pfVar5[1] = ((1.0 - fVar10) + (1.0 - fVar10)) * fVar9;
      pfVar5[2] = ((1.0 - fVar8 * 1.4142135) + fVar10) * fVar9;
      uVar4 = DAT_14c72f42c;
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + (ulonglong)uVar2 * 8) + 0x10);
      fVar8 = (float)uVar1;
      fVar8 = (float)FUN_145382770(100.0 - (((float)((ulonglong)uVar1 >> 0x20) - fVar8) * param_3 +
                                           fVar8),DAT_14c72f42c);
      fVar8 = tanf((fVar8 / (float)uVar4) * 3.1415927);
      lVar7 = lVar7 + 2;
      fVar10 = fVar8 * fVar8 + 1.0;
      fVar9 = 1.0 / (fVar10 + fVar8 * 1.4142135);
      *(float *)(param_5 + -8 + (longlong)pfVar5) = fVar9;
      *(float *)(param_5 + -4 + (longlong)pfVar5) = fVar9 * -2.0;
      *(float *)(param_5 + (longlong)pfVar5) = fVar9;
      *(float *)(param_5 + 4 + (longlong)pfVar5) = (1.0 - fVar8 * fVar8) * fVar9 * -2.0;
      *(float *)(param_5 + 8 + (longlong)pfVar5) = (fVar10 - fVar8 * 1.4142135) * fVar9;
      pfVar5 = pfVar5 + 5;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1453833a0 FUN_1453833a0 body=254 status=ok
// SIG undefined FUN_1453833a0(void)

void FUN_1453833a0(float *param_1,float *param_2,AkBiquadCoefficients *param_3,
                  AkBiquadMemories *param_4,uint param_5,uint param_6)

{
  ulonglong uVar1;
  int iVar2;
  float *local_res8;
  float *local_res10 [2];
  AkBiquadMemories *local_res20;
  AkBiquadCoefficients *local_28 [2];
  
  uVar1 = (ulonglong)param_6;
  local_res8 = param_1;
  local_res10[0] = param_2;
  local_res20 = param_4;
  if (param_6 != 1) {
    iVar2 = 0;
    if (param_6 != 0) {
      do {
        param_6 = param_5 - iVar2;
        if (DAT_14c72f43c < param_5 - iVar2) {
          param_6 = DAT_14c72f43c;
        }
        local_28[0] = param_3;
        AkMixer::ProcessInterpBiquadFilter
                  (&local_res8,local_res10,local_28,&local_res20,&param_6,1,1);
        param_3 = param_3 + 0x14;
        iVar2 = iVar2 + param_6;
        local_res8 = local_res8 + param_6;
        local_res10[0] = local_res10[0] + param_6;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    return;
  }
  local_28[0] = param_3;
  AkMixer::ProcessInterpBiquadFilter(&local_res8,local_res10,local_28,&local_res20,&param_5,1,1);
  return;
}



// FUNCTION 1453834a0 FUN_1453834a0 body=404 status=ok
// SIG undefined FUN_1453834a0(void)

byte FUN_1453834a0(float *param_1,float *param_2,void *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 9);
  pbVar1 = (byte *)((longlong)param_1 + 9);
  if ((bVar2 & 1) != 0) {
    bVar6 = bVar2 & 0xfe;
    if ((bVar2 & 2) == 0) {
      if ((0.1 < *param_1) || (0.1 < param_1[1])) {
        cVar4 = '\0';
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        cVar4 = '\x01';
        if ((bVar2 & 4) == 0) {
          bVar6 = bVar2 & 0xf6;
        }
      }
      *pbVar1 = cVar4 << 2 | bVar6 & 0xfb;
    }
    else {
      fVar7 = param_1[1];
      bVar6 = bVar2 & 0xfc;
      *param_1 = fVar7;
      if (fVar7 <= 0.1) {
        if ((bVar2 >> 2 & 1) == 1) {
          bVar5 = 4;
        }
        else {
          bVar5 = 0;
          bVar6 = bVar2 & 0xf4;
          if (fVar7 <= 0.1) {
            bVar5 = 4;
          }
        }
        *pbVar1 = bVar5 | bVar6 & 0xfb;
        memset(param_3,0,(ulonglong)(uint)(param_4 << 4));
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
        bVar6 = 0;
        if (fVar7 <= 0.1) {
          bVar6 = 4;
        }
        bVar6 = bVar6 | bVar2 & 0xf8;
        *pbVar1 = bVar6;
        uVar3 = DAT_14c72f42c;
        fVar7 = (float)FUN_145382770(bVar6,DAT_14c72f42c);
        fVar7 = tanf((fVar7 / (float)uVar3) * 3.1415927);
        fVar7 = 1.0 / fVar7;
        fVar9 = fVar7 * fVar7;
        fVar8 = 1.0 / (fVar7 * 1.4142135 + 1.0 + fVar9);
        *param_2 = fVar8;
        param_2[1] = fVar8 + fVar8;
        param_2[2] = fVar8;
        param_2[3] = ((1.0 - fVar9) + (1.0 - fVar9)) * fVar8;
        param_2[4] = ((1.0 - fVar7 * 1.4142135) + fVar9) * fVar8;
      }
    }
  }
  return *pbVar1 >> 2 & 1;
}



// FUNCTION 145383640 FUN_145383640 body=410 status=ok
// SIG undefined FUN_145383640(void)

byte FUN_145383640(float *param_1,float *param_2,void *param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 9);
  pbVar1 = (byte *)((longlong)param_1 + 9);
  if ((bVar2 & 1) != 0) {
    bVar6 = bVar2 & 0xfe;
    if ((bVar2 & 2) == 0) {
      if ((0.1 < *param_1) || (0.1 < param_1[1])) {
        cVar4 = '\0';
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        cVar4 = '\x01';
        if ((bVar2 & 4) == 0) {
          bVar6 = bVar2 & 0xf6;
        }
      }
      *pbVar1 = cVar4 << 2 | bVar6 & 0xfb;
    }
    else {
      fVar7 = param_1[1];
      bVar6 = bVar2 & 0xfc;
      *param_1 = fVar7;
      if (fVar7 <= 0.1) {
        if ((bVar2 >> 2 & 1) == 1) {
          bVar5 = 4;
        }
        else {
          bVar5 = 0;
          bVar6 = bVar2 & 0xf4;
          if (fVar7 <= 0.1) {
            bVar5 = 4;
          }
        }
        *pbVar1 = bVar5 | bVar6 & 0xfb;
        memset(param_3,0,(ulonglong)(uint)(param_4 << 4));
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
        bVar6 = 0;
        if (fVar7 <= 0.1) {
          bVar6 = 4;
        }
        *pbVar1 = bVar6 | bVar2 & 0xf8;
        uVar3 = DAT_14c72f42c;
        fVar7 = (float)FUN_145382770(100.0 - fVar7,DAT_14c72f42c);
        fVar7 = tanf((fVar7 / (float)uVar3) * 3.1415927);
        fVar9 = fVar7 * fVar7 + 1.0;
        fVar8 = 1.0 / (fVar9 + fVar7 * 1.4142135);
        *param_2 = fVar8;
        param_2[1] = fVar8 * -2.0;
        param_2[2] = fVar8;
        param_2[3] = (1.0 - fVar7 * fVar7) * fVar8 * -2.0;
        param_2[4] = (fVar9 - fVar7 * 1.4142135) * fVar8;
      }
    }
  }
  return *pbVar1 >> 2 & 1;
}



// FUNCTION 1453837e0 FUN_1453837e0 body=1881 status=ok
// SIG undefined FUN_1453837e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_1453837e0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  void *_Src;
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 auStack_180 [5];
  uint auStack_158 [2];
  longlong lStack_150;
  float afStack_148 [2];
  uint auStack_140 [2];
  char local_138;
  byte local_137;
  byte local_136;
  byte local_135;
  byte local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined8 local_120;
  undefined8 *local_118;
  longlong local_108;
  longlong local_f8;
  undefined8 *puStack_f0;
  float *local_e8;
  float *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  
  uVar13 = (ulonglong)param_3;
  uVar12 = *(uint *)(param_1 + 1);
  if (uVar12 != 0) {
    uVar15 = uVar13 * 4;
    uVar11 = uVar15 + 0xf;
    fVar24 = 1.0 / (float)uVar13;
    if (uVar11 <= uVar15) {
      uVar11 = 0xffffffffffffff0;
    }
    auStack_180[0] = 0x145383895;
    lVar5 = -(uVar11 & 0xfffffffffffffff0);
    pfVar16 = (float *)((longlong)&local_138 + lVar5);
    local_e0 = pfVar16;
    if (param_3 != 0) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pfVar16 = 1.0;
        pfVar16 = pfVar16 + 1;
      }
    }
    uVar13 = uVar15 + 0xf;
    if (uVar13 <= uVar15) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_180 + lVar5) = 0x1453838cb;
    local_130 = (uint)DAT_14c72f438;
    uVar15 = (ulonglong)local_130;
    lVar6 = -(uVar13 & 0xfffffffffffffff0);
    uVar11 = uVar15 * 0x14;
    pfVar16 = (float *)((longlong)&local_138 + lVar6 + lVar5);
    uVar13 = uVar11 + 0xf;
    if (uVar13 <= uVar11) {
      uVar13 = 0xffffffffffffff0;
    }
    local_e8 = pfVar16;
    local_c0 = uVar15;
    *(undefined8 *)((longlong)auStack_180 + lVar6 + lVar5) = 0x145383902;
    lVar7 = -(uVar13 & 0xfffffffffffffff0);
    uVar13 = uVar11 + 0xf;
    puVar17 = (undefined8 *)((longlong)&local_138 + lVar7 + lVar6 + lVar5);
    if (uVar13 <= uVar11) {
      uVar13 = 0xffffffffffffff0;
    }
    puStack_f0 = puVar17;
    *(undefined8 *)((longlong)auStack_180 + lVar7 + lVar6 + lVar5) = 0x145383923;
    lVar8 = -(uVar13 & 0xfffffffffffffff0);
    local_118 = (undefined8 *)((longlong)&local_138 + lVar8 + lVar7 + lVar6 + lVar5);
    if (uVar12 != 0) {
      local_b0 = *param_1;
      local_d0 = 0;
      local_c8 = (ulonglong)uVar12;
      do {
        puVar14 = local_118;
        local_d8 = (ulonglong)*(ushort *)(local_d0 + local_b0);
        lVar20 = *(longlong *)(param_2 + local_d8 * 8);
        local_138 = *(float *)(lVar20 + 4) != *(float *)(lVar20 + 8);
        local_135 = *(byte *)(lVar20 + 0xd);
        local_137 = *(byte *)(lVar20 + 0x19);
        bVar4 = *(float *)(lVar20 + 0x10) != *(float *)(lVar20 + 0x14);
        puVar2 = *(undefined8 **)(lVar20 + 0x20);
        local_128 = (uint)*(byte *)(*(longlong *)(param_4 + local_d8 * 8) + 8);
        local_136 = local_135 & 4;
        local_b8 = lVar20;
        if (local_136 == 0) {
          if ((bool)local_138) {
            uVar12 = 0;
            if ((int)uVar15 != 0) {
              pfVar16 = (float *)(puVar17 + 1);
              uVar13 = local_c0;
              do {
                uVar10 = DAT_14c72f42c;
                local_108 = *(undefined8 *)(lVar20 + 4);
                fVar21 = (float)local_108;
                uVar11 = (ulonglong)local_108 >> 0x20;
                uVar1 = param_3 - uVar12;
                if (DAT_14c72f43c < param_3 - uVar12) {
                  uVar1 = DAT_14c72f43c;
                }
                uVar12 = uVar12 + uVar1;
                *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383a7f
                ;
                fVar21 = (float)FUN_145382770((float)uVar12 * fVar24 * ((float)uVar11 - fVar21) +
                                              fVar21,DAT_14c72f42c);
                *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383a95
                ;
                fVar21 = tanf((fVar21 / (float)uVar10) * 3.1415927);
                fVar21 = 1.0 / fVar21;
                fVar23 = fVar21 * fVar21;
                fVar22 = 1.0 / (fVar21 * 1.4142135 + 1.0 + fVar23);
                pfVar16[-2] = fVar22;
                pfVar16[-1] = fVar22 + fVar22;
                *pfVar16 = fVar22;
                pfVar16[1] = ((1.0 - fVar23) + (1.0 - fVar23)) * fVar22;
                pfVar16[2] = ((1.0 - fVar21 * 1.4142135) + fVar23) * fVar22;
                pfVar16 = pfVar16 + 5;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
              uVar15 = (ulonglong)local_130;
              puVar14 = local_118;
              pfVar16 = local_e8;
            }
          }
          else {
            uVar9 = puVar2[1];
            *puVar17 = *puVar2;
            puVar17[1] = uVar9;
            *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar2 + 2);
          }
        }
        local_134 = local_137 & 4;
        if (local_134 == 0) {
          if (bVar4) {
            uVar12 = 0;
            if ((int)uVar15 != 0) {
              pfVar18 = (float *)(puVar14 + 1);
              do {
                local_108 = *(undefined8 *)(lVar20 + 0x10);
                uVar11 = (ulonglong)DAT_14c72f42c;
                fVar21 = (float)local_108;
                uVar13 = (ulonglong)local_108 >> 0x20;
                uVar1 = param_3 - uVar12;
                if (DAT_14c72f43c < param_3 - uVar12) {
                  uVar1 = DAT_14c72f43c;
                }
                uVar12 = uVar12 + uVar1;
                *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383bb7
                ;
                fVar21 = (float)FUN_145382770(100.0 - ((float)uVar12 * fVar24 *
                                                       ((float)uVar13 - fVar21) + fVar21));
                *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383bcd
                ;
                fVar21 = tanf((fVar21 / (float)uVar11) * 3.1415927);
                fVar23 = fVar21 * fVar21 + 1.0;
                fVar22 = 1.0 / (fVar23 + fVar21 * 1.4142135);
                pfVar18[-2] = fVar22;
                pfVar18[-1] = fVar22 * -2.0;
                *pfVar18 = fVar22;
                pfVar18[1] = (1.0 - fVar21 * fVar21) * fVar22 * -2.0;
                pfVar18[2] = (fVar23 - fVar21 * 1.4142135) * fVar22;
                pfVar18 = pfVar18 + 5;
                uVar15 = uVar15 - 1;
                pfVar16 = local_e8;
              } while (uVar15 != 0);
            }
          }
          else {
            uVar9 = *(undefined8 *)((longlong)puVar2 + 0x1c);
            *puVar14 = *(undefined8 *)((longlong)puVar2 + 0x14);
            puVar14[1] = uVar9;
            *(undefined4 *)(puVar14 + 2) = *(undefined4 *)((longlong)puVar2 + 0x24);
          }
        }
        local_12c = 0;
        if (local_128 != 0) {
          uVar12 = param_3 - 1;
          local_f8 = 0;
          local_108 = 0;
          local_120 = CONCAT44(local_120._4_4_,uVar12);
          do {
            puVar17 = puStack_f0;
            plVar3 = *(longlong **)(param_4 + local_d8 * 8);
            pfVar18 = (float *)(puVar2[5] + local_f8);
            _Src = (void *)(*plVar3 + (ulonglong)*(ushort *)(plVar3 + 2) * local_108 * 4);
            if (local_136 == 0) {
              uVar12 = 1;
              if (local_138 != '\0') {
                uVar12 = local_130;
              }
              *(uint *)((longlong)&lStack_150 + lVar8 + lVar7 + lVar6 + lVar5) = uVar12;
              *(uint *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5) = param_3;
              *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383d29;
              FUN_1453833a0(_Src,pfVar16,puVar17,pfVar18);
              uVar12 = (uint)local_120;
            }
            else {
              *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383cae;
              memcpy(pfVar16,_Src,(ulonglong)(param_3 * 4));
              pfVar19 = local_e0;
              if ((local_135 & 8) == 0) {
                fVar21 = pfVar18[1];
                fVar22 = pfVar18[3];
                *(uint *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5) = param_3;
                *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383cd8
                ;
                AkMixer::MixChannel(pfVar19,pfVar16,fVar21 - fVar22,-(fVar24 * (fVar21 - fVar22)),
                                    *(uint *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5)
                                   );
                uVar12 = param_3 - 1;
              }
              fVar21 = pfVar16[param_3 - 2];
              pfVar18[2] = fVar21;
              *pfVar18 = fVar21;
              fVar21 = pfVar16[uVar12];
              pfVar18[3] = fVar21;
              pfVar18[1] = fVar21;
            }
            pfVar18 = local_e0;
            puVar17 = local_118;
            pfVar19 = (float *)(local_f8 + puVar2[6]);
            if (local_134 == 0) {
              uVar12 = 1;
              if (bVar4) {
                uVar12 = local_130;
              }
              *(uint *)((longlong)&lStack_150 + lVar8 + lVar7 + lVar6 + lVar5) = uVar12;
              *(uint *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5) = param_3;
              *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383db7;
              FUN_1453833a0(pfVar16,pfVar16,puVar17,pfVar19);
              uVar12 = param_3 - 1;
            }
            else {
              if ((local_137 & 8) == 0) {
                fVar21 = pfVar19[1];
                fVar22 = pfVar19[3];
                *(uint *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5) = param_3;
                *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383d68
                ;
                AkMixer::MixChannel(pfVar18,pfVar16,fVar21 - fVar22,-(fVar24 * (fVar21 - fVar22)),
                                    *(uint *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5)
                                   );
              }
              fVar21 = pfVar16[param_3 - 2];
              pfVar19[2] = fVar21;
              *pfVar19 = fVar21;
              fVar21 = pfVar16[uVar12];
              pfVar19[3] = fVar21;
              pfVar19[1] = fVar21;
            }
            uVar13 = local_d8;
            *(uint *)((longlong)auStack_140 + lVar8 + lVar7 + lVar6 + lVar5) = param_3;
            *(float *)((longlong)afStack_148 + lVar8 + lVar7 + lVar6 + lVar5) = fVar24;
            local_120 = *(undefined8 *)(param_6 + uVar13 * 8);
            lVar20 = *param_5;
            uVar1 = *(uint *)(lVar20 + 8);
            uVar11 = (ulonglong)(((uVar1 & 0xff) + 7 & 0xfffffff8) * local_12c);
            *(ulonglong *)((longlong)&lStack_150 + lVar8 + lVar7 + lVar6 + lVar5) =
                 *(longlong *)(param_8 + uVar13 * 8) + uVar11 * 4;
            *(ulonglong *)((longlong)auStack_158 + lVar8 + lVar7 + lVar6 + lVar5) =
                 *(longlong *)(param_7 + uVar13 * 8) + uVar11 * 4;
            *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5) = 0x145383e2f;
            AkMixer::MixOneInNChannels(pfVar16,lVar20,uVar1,&local_120);
            local_12c = local_12c + 1;
            local_f8 = local_f8 + 0x10;
            local_108 = local_108 + 1;
            local_120 = CONCAT44(local_120._4_4_,uVar12);
            lVar20 = local_b8;
          } while (local_12c < local_128);
        }
        uVar15 = (ulonglong)local_130;
        if (local_138 != '\0') {
          puVar17 = (undefined8 *)((longlong)puStack_f0 + (ulonglong)(local_130 - 1) * 0x14);
          uVar9 = puVar17[1];
          *puVar2 = *puVar17;
          puVar2[1] = uVar9;
          *(undefined4 *)(puVar2 + 2) =
               *(undefined4 *)((longlong)puStack_f0 + (ulonglong)(local_130 - 1) * 0x14 + 0x10);
        }
        if (bVar4) {
          puVar17 = (undefined8 *)((longlong)local_118 + (ulonglong)(local_130 - 1) * 0x14);
          uVar9 = puVar17[1];
          *(undefined8 *)((longlong)puVar2 + 0x14) = *puVar17;
          *(undefined8 *)((longlong)puVar2 + 0x1c) = uVar9;
          *(undefined4 *)((longlong)puVar2 + 0x24) =
               *(undefined4 *)((longlong)local_118 + (ulonglong)(local_130 - 1) * 0x14 + 0x10);
        }
        *(byte *)(lVar20 + 0xd) = *(byte *)(lVar20 + 0xd) | 8;
        local_d0 = local_d0 + 2;
        *(byte *)(lVar20 + 0x19) = *(byte *)(lVar20 + 0x19) | 8;
        local_c8 = local_c8 - 1;
        puVar17 = puStack_f0;
      } while (local_c8 != 0);
    }
  }
  return;
}



// FUNCTION 145383f40 FUN_145383f40 body=1228 status=ok
// SIG undefined FUN_145383f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145383f40(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  AkBiquadCoefficients *pAVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  AkBiquadCoefficients **ppAVar14;
  AkBiquadCoefficients **ppAVar15;
  float **ppfVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  AkBiquadMemories **ppAVar35;
  longlong lVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar41 [16];
  undefined4 local_res18 [2];
  longlong local_res20;
  undefined8 auStack_130 [5];
  longlong alStack_108 [6];
  uint auStack_d8 [8];
  AkBiquadCoefficients *local_b8;
  ulonglong local_b0 [4];
  AkBiquadMemories **local_90;
  longlong local_88;
  AkBiquadCoefficients **local_80;
  AkBiquadCoefficients **local_78;
  float **local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  
  uVar18 = *(uint *)(param_1 + 1);
  uVar25 = (ulonglong)uVar18;
  if (uVar18 == 0) {
    return;
  }
  uVar28 = 0;
  uVar29 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8;
  uVar19 = uVar29 + 0xf;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  auStack_130[0] = 0x145383fa0;
  lVar6 = -(uVar19 & 0xfffffffffffffff0);
  local_70 = (float **)((longlong)&local_b8 + lVar6);
  uVar19 = uVar29 + 0xf;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar6) = 0x145383fc1;
  lVar7 = -(uVar19 & 0xfffffffffffffff0);
  local_78 = (AkBiquadCoefficients **)((longlong)&local_b8 + lVar7 + lVar6);
  uVar19 = uVar29 + 0xf;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar7 + lVar6) = 0x145383fe2;
  lVar8 = -(uVar19 & 0xfffffffffffffff0);
  local_80 = (AkBiquadCoefficients **)((longlong)&local_b8 + lVar8 + lVar7 + lVar6);
  uVar19 = uVar29 + 0xf;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar8 + lVar7 + lVar6) = 0x145384003;
  lVar9 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = uVar29 + 0xf;
  ppAVar35 = (AkBiquadMemories **)((longlong)&local_b8 + lVar9 + lVar8 + lVar7 + lVar6);
  local_90 = ppAVar35;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar9 + lVar8 + lVar7 + lVar6) = 0x145384024;
  lVar10 = -(uVar19 & 0xfffffffffffffff0);
  plVar4 = (longlong *)*param_5;
  lVar36 = (longlong)&local_b8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  local_88 = lVar36;
  uVar20 = *(uint *)(plVar4 + 1);
  uVar27 = uVar20 & 0xff;
  uVar19 = (ulonglong)uVar27 * 8 + 0xf;
  if (uVar19 <= (ulonglong)uVar27 * 8) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x145384065;
  lVar11 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = 0;
  plVar30 = (longlong *)((longlong)&local_b8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  local_58 = plVar30;
  if (uVar27 != 0) {
    uVar23 = uVar19;
    if ((7 < uVar27) && (5 < DAT_14c707900)) {
      lVar21 = *plVar4;
      if (((plVar4 < plVar30) || (plVar30 + (uVar27 - 1) < plVar4)) &&
         ((plVar4 + 2 < plVar30 || (uVar23 = 0, plVar30 + (uVar27 - 1) < plVar4 + 2)))) {
        auVar41 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22((short)plVar4[2],(short)plVar4[2])));
        uVar22 = 4;
        do {
          iVar32 = (int)uVar19;
          uVar17 = uVar22 - 2;
          auVar37._4_4_ = iVar32 + 1;
          auVar37._0_4_ = iVar32;
          auVar37._8_4_ = iVar32;
          auVar37._12_4_ = iVar32;
          auVar37 = pmovzxdq(auVar37,auVar37);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          plVar30[uVar19] = auVar37._0_8_ * 4 + lVar21;
          (plVar30 + uVar19)[1] = auVar37._8_8_ * 4 + lVar21;
          uVar33 = iVar32 + 8;
          uVar19 = (ulonglong)uVar33;
          auVar38._4_4_ = uVar22 - 1;
          auVar38._0_4_ = uVar17;
          auVar38._8_4_ = uVar17;
          auVar38._12_4_ = uVar17;
          auVar37 = pmovzxdq(auVar38,auVar38);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          plVar30[uVar17] = auVar37._0_8_ * 4 + lVar21;
          (plVar30 + uVar17)[1] = auVar37._8_8_ * 4 + lVar21;
          auVar39._4_4_ = uVar22 + 1;
          auVar39._0_4_ = uVar22;
          auVar39._8_4_ = uVar22;
          auVar39._12_4_ = uVar22;
          auVar37 = pmovzxdq(auVar39,auVar39);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          plVar30[uVar22] = auVar37._0_8_ * 4 + lVar21;
          (plVar30 + uVar22)[1] = auVar37._8_8_ * 4 + lVar21;
          uVar17 = uVar22 + 2;
          auVar40._4_4_ = uVar22 + 3;
          auVar40._0_4_ = uVar17;
          auVar40._8_4_ = uVar17;
          auVar40._12_4_ = uVar17;
          auVar37 = pmovzxdq(auVar40,auVar40);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          plVar30[uVar17] = auVar37._0_8_ * 4 + lVar21;
          (plVar30 + uVar17)[1] = auVar37._8_8_ * 4 + lVar21;
          uVar22 = uVar22 + 8;
        } while (uVar33 < (uVar20 & 0xf8));
        uVar23 = uVar19;
        if (uVar27 <= uVar33) goto LAB_1453841ea;
      }
    }
    uVar19 = (ulonglong)(uVar27 - (int)uVar23);
    plVar30 = plVar30 + uVar23;
    do {
      lVar21 = *(ushort *)(plVar4 + 2) * uVar23;
      uVar23 = uVar23 + 1;
      *plVar30 = *plVar4 + lVar21 * 4;
      uVar19 = uVar19 - 1;
      plVar30 = plVar30 + 1;
    } while (uVar19 != 0);
  }
LAB_1453841ea:
  uVar19 = uVar29 + 0xf;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x1453841ff;
  lVar21 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = uVar29 + 0xf;
  uVar23 = (longlong)&local_b8 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  local_b0[3] = uVar23;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_130 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
       = 0x145384220;
  lVar12 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = uVar29 + 0xf;
  uVar31 = (longlong)&local_b8 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  local_b0[2] = uVar31;
  if (uVar19 <= uVar29) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_130 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x145384241;
  ppfVar16 = local_70;
  lVar13 = -(uVar19 & 0xfffffffffffffff0);
  lVar2 = (longlong)&local_b8 +
          lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
  local_b0[1] = lVar2;
  if (uVar18 != 0) {
    local_b8 = (AkBiquadCoefficients *)*param_1;
    do {
      lVar36 = (ulonglong)*(ushort *)local_b8 * 8;
      pAVar5 = *(AkBiquadCoefficients **)(*(longlong *)(lVar36 + param_2) + 0x20);
      bVar3 = *(byte *)(*(longlong *)(param_4 + lVar36) + 8);
      uVar18 = 0;
      if (bVar3 != 0) {
        lVar26 = 0;
        local_60 = (longlong *)(lVar36 + param_8);
        lVar34 = 0;
        local_68 = (longlong *)(param_7 + lVar36);
        uVar19 = uVar28;
        do {
          plVar4 = *(longlong **)(param_4 + lVar36);
          lVar1 = uVar19 * 8;
          uVar28 = (ulonglong)((int)uVar19 + 1);
          lVar24 = (ulonglong)*(ushort *)(plVar4 + 2) * lVar26;
          lVar26 = lVar26 + 1;
          local_70[uVar19] = (float *)(*plVar4 + lVar24 * 4);
          local_78[uVar19] = pAVar5;
          local_80[uVar19] = pAVar5 + 0x14;
          local_90[uVar19] = (AkBiquadMemories *)(*(longlong *)(pAVar5 + 0x28) + lVar34);
          lVar24 = *(longlong *)(pAVar5 + 0x30) + lVar34;
          lVar34 = lVar34 + 0x10;
          *(longlong *)(lVar1 + local_88) = lVar24;
          *(undefined8 *)(lVar1 + local_b0[3]) = *(undefined8 *)(param_6 + lVar36);
          uVar20 = (uVar27 + 7 & 0xfffffff8) * uVar18;
          uVar18 = uVar18 + 1;
          lVar24 = (ulonglong)uVar20 * 4;
          *(longlong *)(lVar1 + local_b0[2]) = *(longlong *)(param_7 + lVar36) + lVar24;
          *(longlong *)(lVar1 + lVar2) = *(longlong *)(lVar36 + param_8) + lVar24;
          uVar19 = uVar28;
        } while (uVar18 < bVar3);
      }
      local_b8 = local_b8 + 2;
      uVar25 = uVar25 - 1;
      local_b0[0] = uVar25;
      uVar23 = local_b0[3];
      uVar31 = local_b0[2];
      ppAVar35 = local_90;
      lVar36 = local_88;
    } while (uVar25 != 0);
  }
  *(uint *)((longlong)auStack_d8 +
           lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10) =
       uVar27;
  *(int *)((longlong)auStack_d8 +
          lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) =
       (int)uVar28;
  *(undefined4 *)
   ((longlong)auStack_d8 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 1;
  *(undefined4 **)
   ((longlong)alStack_108 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x28) = local_res18;
  plVar4 = local_58;
  *(longlong *)
   ((longlong)alStack_108 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x20) = lVar2;
  ppAVar15 = local_78;
  *(ulonglong *)
   ((longlong)alStack_108 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x18) = uVar31;
  ppAVar14 = local_80;
  *(ulonglong *)
   ((longlong)alStack_108 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10) = uVar23;
  *(longlong **)
   ((longlong)alStack_108 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) = plVar4;
  *(longlong *)
   ((longlong)alStack_108 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar36;
  *(undefined8 *)
   ((longlong)auStack_130 +
   lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1453843fb;
  local_res18[0] = param_3;
  local_res20 = param_4;
  AkMixer::ProcessPairedInterpBiquadFilterAndMix
            (ppfVar16,ppAVar15,ppAVar35,ppAVar14,
             *(AkBiquadMemories ***)
              ((longlong)alStack_108 +
              lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6),
             *(float ***)
              ((longlong)alStack_108 +
              lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8),
             *(AkRamp **)
              ((longlong)alStack_108 +
              lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10),
             *(float ***)
              ((longlong)alStack_108 +
              lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x18),
             *(float ***)
              ((longlong)alStack_108 +
              lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x20),
             *(uint **)((longlong)alStack_108 +
                       lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
                       0x28),
             *(uint *)((longlong)auStack_d8 +
                      lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6),
             *(uint *)((longlong)auStack_d8 +
                      lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8
                      ),
             *(uint *)((longlong)auStack_d8 +
                      lVar13 + lVar12 + lVar21 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
                      0x10));
  return;
}



// FUNCTION 145384410 FUN_145384410 body=1927 status=ok
// SIG undefined FUN_145384410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145384410(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  float **ppfVar6;
  AkBiquadCoefficients *pAVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  AkBiquadMemories **ppAVar14;
  AkBiquadCoefficients **ppAVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  AkBiquadMemories *pAVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  float *pfVar24;
  ushort *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  float **ppfVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar41 [16];
  undefined4 local_res18 [2];
  undefined8 auStack_f0 [5];
  longlong alStack_c8 [4];
  uint auStack_a8 [8];
  undefined8 local_88;
  float *local_80;
  ushort *local_78;
  ushort *local_70;
  uint local_68;
  AkBiquadMemories **local_60;
  AkBiquadCoefficients **local_58;
  float **local_50;
  float **local_48;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  uVar33 = 0;
  uVar27 = (ulonglong)*(uint *)(param_1 + 2) * 8;
  uVar17 = uVar27 + 0xf;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  auStack_f0[0] = 0x145384479;
  lVar10 = -(uVar17 & 0xfffffffffffffff0);
  local_50 = (float **)((longlong)&local_88 + lVar10);
  uVar17 = uVar27 + 0xf;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar10) = 0x14538449a;
  lVar28 = -(uVar17 & 0xfffffffffffffff0);
  local_58 = (AkBiquadCoefficients **)((longlong)&local_88 + lVar28 + lVar10);
  uVar17 = uVar27 + 0xf;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar28 + lVar10) = 0x1453844bb;
  lVar22 = -(uVar17 & 0xfffffffffffffff0);
  local_60 = (AkBiquadMemories **)((longlong)&local_88 + lVar22 + lVar28 + lVar10);
  ppfVar6 = (float **)*param_5;
  uVar32 = *(uint *)(ppfVar6 + 1);
  uVar35 = uVar32 & 0xff;
  local_88._0_4_ = uVar35;
  uVar17 = (ulonglong)uVar35 * 8 + 0xf;
  if (uVar17 <= (ulonglong)uVar35 * 8) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar22 + lVar28 + lVar10) = 0x1453844fc;
  lVar11 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = 0;
  ppfVar29 = (float **)((longlong)&local_88 + lVar11 + lVar22 + lVar28 + lVar10);
  local_48 = ppfVar29;
  if (uVar35 != 0) {
    uVar23 = uVar17;
    if ((7 < uVar35) && (5 < DAT_14c707900)) {
      pfVar24 = *ppfVar6;
      if (((ppfVar6 < ppfVar29) || (ppfVar29 + (uVar35 - 1) < ppfVar6)) &&
         ((ppfVar6 + 2 < ppfVar29 || (uVar23 = 0, ppfVar29 + (uVar35 - 1) < ppfVar6 + 2)))) {
        auVar41 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22(*(undefined2 *)(ppfVar6 + 2),
                                                    *(undefined2 *)(ppfVar6 + 2))));
        uVar36 = 4;
        do {
          iVar30 = (int)uVar17;
          uVar16 = uVar36 - 2;
          auVar37._4_4_ = iVar30 + 1;
          auVar37._0_4_ = iVar30;
          auVar37._8_4_ = iVar30;
          auVar37._12_4_ = iVar30;
          auVar37 = pmovzxdq(auVar37,auVar37);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          ppfVar29[uVar17] = pfVar24 + auVar37._0_8_;
          (ppfVar29 + uVar17)[1] = pfVar24 + auVar37._8_8_;
          uVar31 = iVar30 + 8;
          uVar17 = (ulonglong)uVar31;
          auVar38._4_4_ = uVar36 - 1;
          auVar38._0_4_ = uVar16;
          auVar38._8_4_ = uVar16;
          auVar38._12_4_ = uVar16;
          auVar37 = pmovzxdq(auVar38,auVar38);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          ppfVar29[uVar16] = pfVar24 + auVar37._0_8_;
          (ppfVar29 + uVar16)[1] = pfVar24 + auVar37._8_8_;
          auVar39._4_4_ = uVar36 + 1;
          auVar39._0_4_ = uVar36;
          auVar39._8_4_ = uVar36;
          auVar39._12_4_ = uVar36;
          auVar37 = pmovzxdq(auVar39,auVar39);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          ppfVar29[uVar36] = pfVar24 + auVar37._0_8_;
          (ppfVar29 + uVar36)[1] = pfVar24 + auVar37._8_8_;
          uVar16 = uVar36 + 2;
          auVar40._4_4_ = uVar36 + 3;
          auVar40._0_4_ = uVar16;
          auVar40._8_4_ = uVar16;
          auVar40._12_4_ = uVar16;
          auVar37 = pmovzxdq(auVar40,auVar40);
          auVar37 = vpmullq_avx512vl(auVar41,auVar37);
          ppfVar29[uVar16] = pfVar24 + auVar37._0_8_;
          (ppfVar29 + uVar16)[1] = pfVar24 + auVar37._8_8_;
          uVar36 = uVar36 + 8;
        } while (uVar31 < (uVar32 & 0xf8));
        uVar23 = uVar17;
        if (uVar35 <= uVar31) goto LAB_145384687;
      }
    }
    uVar17 = (ulonglong)(uVar35 - (int)uVar23);
    ppfVar29 = ppfVar29 + uVar23;
    do {
      lVar18 = *(ushort *)(ppfVar6 + 2) * uVar23;
      uVar23 = uVar23 + 1;
      *ppfVar29 = *ppfVar6 + lVar18;
      uVar17 = uVar17 - 1;
      ppfVar29 = ppfVar29 + 1;
    } while (uVar17 != 0);
  }
LAB_145384687:
  uVar17 = uVar27 + 0xf;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar11 + lVar22 + lVar28 + lVar10) = 0x14538469c;
  lVar18 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar27 + 0xf;
  pfVar24 = (float *)((longlong)&local_88 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10);
  local_80 = pfVar24;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10) = 0x1453846bd;
  lVar12 = -(uVar17 & 0xfffffffffffffff0);
  uVar17 = uVar27 + 0xf;
  lVar1 = (longlong)&local_88 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10;
  if (uVar17 <= uVar27) {
    uVar17 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10) =
       0x1453846da;
  uVar32 = *(uint *)(param_1 + 1);
  lVar13 = -(uVar17 & 0xfffffffffffffff0);
  lVar2 = (longlong)&local_88 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10;
  if (uVar32 != 0) {
    local_78 = (ushort *)*param_1;
    local_70 = (ushort *)(ulonglong)uVar32;
    do {
      uVar17 = (ulonglong)*local_78;
      uVar35 = 0;
      pAVar7 = *(AkBiquadCoefficients **)(*(longlong *)(param_2 + uVar17 * 8) + 0x20);
      local_68 = (uint)*(byte *)(*(longlong *)(param_4 + uVar17 * 8) + 8);
      if (local_68 != 0) {
        lVar34 = 0;
        uVar36 = (uint)local_88 + 7;
        lVar26 = 0;
        do {
          plVar8 = *(longlong **)(param_4 + uVar17 * 8);
          lVar19 = (ulonglong)*(ushort *)(plVar8 + 2) * lVar34;
          lVar34 = lVar34 + 1;
          local_50[uVar33] = (float *)(*plVar8 + lVar19 * 4);
          local_58[uVar33] = pAVar7;
          pAVar20 = (AkBiquadMemories *)(*(longlong *)(pAVar7 + 0x28) + lVar26);
          lVar26 = lVar26 + 0x10;
          local_60[uVar33] = pAVar20;
          *(undefined8 *)((longlong)pfVar24 + uVar33 * 8) = *(undefined8 *)(param_6 + uVar17 * 8);
          uVar27 = (ulonglong)((uVar36 & 0xfffffff8) * uVar35);
          uVar35 = uVar35 + 1;
          *(ulonglong *)(lVar1 + uVar33 * 8) = *(longlong *)(param_7 + uVar17 * 8) + uVar27 * 4;
          pfVar24 = local_80;
          *(ulonglong *)(lVar2 + uVar33 * 8) = *(longlong *)(param_8 + uVar17 * 8) + uVar27 * 4;
          uVar33 = (ulonglong)((int)uVar33 + 1);
        } while (uVar35 < local_68);
      }
      local_78 = local_78 + 1;
      local_70 = (ushort *)((longlong)local_70 + -1);
      uVar35 = (uint)local_88;
    } while (local_70 != (ushort *)0x0);
  }
  if (uVar32 < *(uint *)((longlong)param_1 + 0xc)) {
    local_70 = (ushort *)(*param_1 + (ulonglong)uVar32 * 2);
    local_78 = (ushort *)(ulonglong)(*(uint *)((longlong)param_1 + 0xc) - uVar32);
    do {
      uVar17 = (ulonglong)*local_70;
      uVar32 = 0;
      lVar26 = *(longlong *)(*(longlong *)(param_2 + uVar17 * 8) + 0x20);
      local_88._4_4_ = (uint)*(byte *)(*(longlong *)(param_4 + uVar17 * 8) + 8);
      if (local_88._4_4_ != 0) {
        lVar19 = 0;
        lVar34 = 0;
        do {
          plVar8 = *(longlong **)(param_4 + uVar17 * 8);
          lVar21 = (ulonglong)*(ushort *)(plVar8 + 2) * lVar19;
          lVar19 = lVar19 + 1;
          local_50[uVar33] = (float *)(*plVar8 + lVar21 * 4);
          local_58[uVar33] = (AkBiquadCoefficients *)(lVar26 + 0x14);
          pAVar20 = (AkBiquadMemories *)(*(longlong *)(lVar26 + 0x30) + lVar34);
          lVar34 = lVar34 + 0x10;
          local_60[uVar33] = pAVar20;
          *(undefined8 *)((longlong)pfVar24 + uVar33 * 8) = *(undefined8 *)(param_6 + uVar17 * 8);
          uVar27 = (ulonglong)((uVar35 + 7 & 0xfffffff8) * uVar32);
          uVar32 = uVar32 + 1;
          *(ulonglong *)(lVar1 + uVar33 * 8) = *(longlong *)(param_7 + uVar17 * 8) + uVar27 * 4;
          pfVar24 = local_80;
          *(ulonglong *)(lVar2 + uVar33 * 8) = *(longlong *)(param_8 + uVar17 * 8) + uVar27 * 4;
          uVar33 = (ulonglong)((int)uVar33 + 1);
        } while (uVar32 < local_88._4_4_);
      }
      local_70 = local_70 + 1;
      local_78 = (ushort *)((longlong)local_78 + -1);
      pfVar24 = local_80;
      uVar35 = (uint)local_88;
    } while (local_78 != (ushort *)0x0);
  }
  ppfVar29 = local_48;
  ppfVar6 = local_50;
  ppAVar15 = local_58;
  ppAVar14 = local_60;
  *(uint *)((longlong)auStack_a8 +
           lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 0x10) = (uint)local_88;
  *(int *)((longlong)auStack_a8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 8)
       = (int)uVar33;
  *(undefined4 *)
   ((longlong)auStack_a8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10) = 1;
  *(undefined4 **)
   ((longlong)alStack_c8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 0x18) =
       local_res18;
  pfVar24 = local_80;
  *(longlong *)
   ((longlong)alStack_c8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 0x10) =
       lVar2;
  *(longlong *)
   ((longlong)alStack_c8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 8) = lVar1
  ;
  *(float **)((longlong)alStack_c8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10) =
       pfVar24;
  *(undefined8 *)
   ((longlong)auStack_f0 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10) =
       0x14538495b;
  local_res18[0] = param_3;
  AkMixer::ProcessInterpBiquadFilterAndMix
            (ppfVar6,ppAVar15,ppAVar14,ppfVar29,
             *(AkRamp **)
              ((longlong)alStack_c8 + lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10),
             *(float ***)
              ((longlong)alStack_c8 +
              lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 8),
             *(float ***)
              ((longlong)alStack_c8 +
              lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 0x10),
             *(uint **)((longlong)alStack_c8 +
                       lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 0x18),
             *(uint *)((longlong)auStack_a8 +
                      lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10),
             *(uint *)((longlong)auStack_a8 +
                      lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 8),
             *(uint *)((longlong)auStack_a8 +
                      lVar13 + lVar12 + lVar18 + lVar11 + lVar22 + lVar28 + lVar10 + 0x10));
  if (*(uint *)(param_1 + 1) != 0) {
    puVar25 = (ushort *)*param_1;
    uVar17 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      uVar32 = 0;
      pbVar9 = *(byte **)(param_2 + (ulonglong)*puVar25 * 8);
      bVar5 = *pbVar9;
      lVar10 = *(longlong *)(pbVar9 + 0x20);
      if (bVar5 < 4) {
        if (bVar5 != 0) {
          lVar28 = 0;
          goto LAB_145384a25;
        }
      }
      else {
        uVar35 = (bVar5 - 4 >> 2) + 1;
        uVar33 = (ulonglong)uVar35;
        uVar32 = uVar35 * 4;
        lVar28 = (ulonglong)uVar35 * 4;
        lVar22 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar22 + *(longlong *)(lVar10 + 0x28));
          puVar3 = (undefined8 *)(lVar22 + *(longlong *)(lVar10 + 0x30));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar22 + 0x10 + *(longlong *)(lVar10 + 0x28));
          puVar3 = (undefined8 *)(lVar22 + 0x10 + *(longlong *)(lVar10 + 0x30));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar22 + 0x20 + *(longlong *)(lVar10 + 0x28));
          puVar3 = (undefined8 *)(lVar22 + 0x20 + *(longlong *)(lVar10 + 0x30));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar22 + 0x30 + *(longlong *)(lVar10 + 0x28));
          puVar3 = (undefined8 *)(lVar22 + 0x30 + *(longlong *)(lVar10 + 0x30));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar33 = uVar33 - 1;
          lVar22 = lVar22 + 0x40;
        } while (uVar33 != 0);
        if (uVar32 < bVar5) {
LAB_145384a25:
          uVar33 = (ulonglong)(bVar5 - uVar32);
          lVar28 = lVar28 << 4;
          do {
            uVar4 = *(undefined8 *)(lVar28 + *(longlong *)(lVar10 + 0x28));
            puVar3 = (undefined8 *)(lVar28 + *(longlong *)(lVar10 + 0x30));
            *puVar3 = uVar4;
            puVar3[1] = uVar4;
            uVar33 = uVar33 - 1;
            lVar28 = lVar28 + 0x10;
          } while (uVar33 != 0);
        }
      }
      puVar25 = puVar25 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  uVar32 = *(uint *)(param_1 + 1);
  if (uVar32 < *(uint *)((longlong)param_1 + 0xc)) {
    uVar17 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) - uVar32);
    puVar25 = (ushort *)(*param_1 + (ulonglong)uVar32 * 2);
    do {
      uVar32 = 0;
      pbVar9 = *(byte **)(param_2 + (ulonglong)*puVar25 * 8);
      bVar5 = *pbVar9;
      lVar10 = *(longlong *)(pbVar9 + 0x20);
      if (bVar5 < 4) {
        if (bVar5 != 0) {
          lVar28 = 0;
          goto LAB_145384b45;
        }
      }
      else {
        uVar35 = (bVar5 - 4 >> 2) + 1;
        uVar33 = (ulonglong)uVar35;
        uVar32 = uVar35 * 4;
        lVar28 = (ulonglong)uVar35 * 4;
        lVar22 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar22 + 8 + *(longlong *)(lVar10 + 0x30));
          puVar3 = (undefined8 *)(lVar22 + *(longlong *)(lVar10 + 0x28));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar22 + 0x18 + *(longlong *)(lVar10 + 0x30));
          puVar3 = (undefined8 *)(lVar22 + 0x10 + *(longlong *)(lVar10 + 0x28));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar22 + 0x28 + *(longlong *)(lVar10 + 0x30));
          puVar3 = (undefined8 *)(lVar22 + 0x20 + *(longlong *)(lVar10 + 0x28));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar22 + 0x38 + *(longlong *)(lVar10 + 0x30));
          puVar3 = (undefined8 *)(lVar22 + 0x30 + *(longlong *)(lVar10 + 0x28));
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          uVar33 = uVar33 - 1;
          lVar22 = lVar22 + 0x40;
        } while (uVar33 != 0);
        if (uVar32 < bVar5) {
LAB_145384b45:
          uVar33 = (ulonglong)(bVar5 - uVar32);
          lVar28 = lVar28 << 4;
          do {
            uVar4 = *(undefined8 *)(lVar28 + 8 + *(longlong *)(lVar10 + 0x30));
            puVar3 = (undefined8 *)(lVar28 + *(longlong *)(lVar10 + 0x28));
            *puVar3 = uVar4;
            puVar3[1] = uVar4;
            uVar33 = uVar33 - 1;
            lVar28 = lVar28 + 0x10;
          } while (uVar33 != 0);
        }
      }
      puVar25 = puVar25 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}



// FUNCTION 145384ba0 FUN_145384ba0 body=1789 status=ok
// SIG undefined FUN_145384ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145384ba0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  AkBiquadCoefficients **ppAVar19;
  AkBiquadMemories **ppAVar20;
  AkBiquadCoefficients **ppAVar21;
  float **ppfVar22;
  uint uVar23;
  int iVar24;
  ushort *puVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  longlong *plVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar47 [16];
  undefined8 auStack_180 [5];
  longlong alStack_158 [6];
  uint auStack_128 [8];
  undefined8 local_108;
  uint local_100 [2];
  uint *local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  ushort *local_e0;
  undefined8 *local_d8;
  uint *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  AkBiquadCoefficients **local_a8;
  AkBiquadMemories **local_a0;
  AkBiquadCoefficients **local_98;
  float **local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong *local_68;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return;
  }
  uVar33 = (uint)DAT_14c72f438;
  uVar34 = 0;
  local_108._4_4_ = 0;
  uVar39 = (ulonglong)uVar33 * 4 + 0xf;
  if (uVar39 <= (ulonglong)uVar33 * 4) {
    uVar39 = 0xffffffffffffff0;
  }
  auStack_180[0] = 0x145384c1c;
  uVar42 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  lVar4 = -(uVar39 & 0xfffffffffffffff0);
  local_88 = uVar42;
  uVar26 = uVar42 * 8;
  local_d0 = (uint *)((longlong)&local_108 + lVar4);
  uVar39 = uVar26 + 0xf;
  if (uVar39 <= uVar26) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar4) = 0x145384c4f;
  lVar5 = -(uVar39 & 0xfffffffffffffff0);
  local_90 = (float **)((longlong)&local_108 + lVar5 + lVar4);
  uVar39 = uVar26 + 0xf;
  if (uVar39 <= uVar26) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar5 + lVar4) = 0x145384c70;
  lVar6 = -(uVar39 & 0xfffffffffffffff0);
  local_a0 = (AkBiquadMemories **)((longlong)&local_108 + lVar6 + lVar5 + lVar4);
  uVar39 = uVar26 + 0xf;
  if (uVar39 <= uVar26) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar6 + lVar5 + lVar4) = 0x145384c91;
  lVar7 = -(uVar39 & 0xfffffffffffffff0);
  local_b0 = (longlong)&local_108 + lVar7 + lVar6 + lVar5 + lVar4;
  uVar31 = (ulonglong)uVar1 * (ulonglong)uVar33 * 0x14;
  uVar39 = uVar31 + 0xf;
  if (uVar39 <= uVar31) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145384cc1;
  lVar8 = -(uVar39 & 0xfffffffffffffff0);
  uVar39 = uVar31 + 0xf;
  lVar16 = lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + -0x108;
  if (uVar39 <= uVar31) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145384cde;
  lVar9 = -(uVar39 & 0xfffffffffffffff0);
  lVar17 = lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + -0x108;
  uVar42 = uVar33 * uVar42 * 8;
  uVar39 = uVar42 + 0xf;
  if (uVar39 <= uVar42) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
       0x145384d03;
  lVar10 = -(uVar39 & 0xfffffffffffffff0);
  local_98 = (AkBiquadCoefficients **)
             ((longlong)&local_108 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
  uVar39 = uVar42 + 0xf;
  if (uVar39 <= uVar42) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_180 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
       0x145384d24;
  lVar11 = -(uVar39 & 0xfffffffffffffff0);
  local_a8 = (AkBiquadCoefficients **)
             ((longlong)&local_108 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4
             );
  plVar2 = (longlong *)*param_5;
  uVar35 = *(uint *)(plVar2 + 1);
  uVar40 = uVar35 & 0xff;
  local_100[0] = uVar40;
  uVar39 = (ulonglong)uVar40 * 8 + 0xf;
  if (uVar39 <= (ulonglong)uVar40 * 8) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_180 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
       0x145384d6c;
  lVar12 = -(uVar39 & 0xfffffffffffffff0);
  uVar39 = 0;
  plVar36 = (longlong *)
            ((longlong)&local_108 +
            lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
  local_68 = plVar36;
  if (uVar40 != 0) {
    uVar42 = uVar39;
    if ((7 < uVar40) && (5 < DAT_14c707900)) {
      lVar29 = *plVar2;
      if (((plVar2 < plVar36) || (plVar36 + (uVar40 - 1) < plVar2)) &&
         ((plVar2 + 2 < plVar36 || (uVar42 = 0, plVar36 + (uVar40 - 1) < plVar2 + 2)))) {
        auVar47 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22((short)plVar2[2],(short)plVar2[2])));
        uVar41 = 4;
        do {
          iVar24 = (int)uVar39;
          uVar23 = uVar41 - 2;
          auVar43._4_4_ = iVar24 + 1;
          auVar43._0_4_ = iVar24;
          auVar43._8_4_ = iVar24;
          auVar43._12_4_ = iVar24;
          auVar43 = pmovzxdq(auVar43,auVar43);
          auVar43 = vpmullq_avx512vl(auVar47,auVar43);
          plVar36[uVar39] = auVar43._0_8_ * 4 + lVar29;
          (plVar36 + uVar39)[1] = auVar43._8_8_ * 4 + lVar29;
          uVar38 = iVar24 + 8;
          uVar39 = (ulonglong)uVar38;
          auVar44._4_4_ = uVar41 - 1;
          auVar44._0_4_ = uVar23;
          auVar44._8_4_ = uVar23;
          auVar44._12_4_ = uVar23;
          auVar43 = pmovzxdq(auVar44,auVar44);
          auVar43 = vpmullq_avx512vl(auVar47,auVar43);
          plVar36[uVar23] = auVar43._0_8_ * 4 + lVar29;
          (plVar36 + uVar23)[1] = auVar43._8_8_ * 4 + lVar29;
          auVar45._4_4_ = uVar41 + 1;
          auVar45._0_4_ = uVar41;
          auVar45._8_4_ = uVar41;
          auVar45._12_4_ = uVar41;
          auVar43 = pmovzxdq(auVar45,auVar45);
          auVar43 = vpmullq_avx512vl(auVar47,auVar43);
          plVar36[uVar41] = auVar43._0_8_ * 4 + lVar29;
          (plVar36 + uVar41)[1] = auVar43._8_8_ * 4 + lVar29;
          uVar23 = uVar41 + 2;
          auVar46._4_4_ = uVar41 + 3;
          auVar46._0_4_ = uVar23;
          auVar46._8_4_ = uVar23;
          auVar46._12_4_ = uVar23;
          auVar43 = pmovzxdq(auVar46,auVar46);
          auVar43 = vpmullq_avx512vl(auVar47,auVar43);
          plVar36[uVar23] = auVar43._0_8_ * 4 + lVar29;
          (plVar36 + uVar23)[1] = auVar43._8_8_ * 4 + lVar29;
          uVar41 = uVar41 + 8;
        } while (uVar38 < (uVar35 & 0xf8));
        uVar42 = uVar39;
        if (uVar40 <= uVar38) goto LAB_145384ef8;
      }
    }
    uVar39 = (ulonglong)(uVar40 - (int)uVar42);
    plVar36 = plVar36 + uVar42;
    do {
      lVar29 = *(ushort *)(plVar2 + 2) * uVar42;
      uVar42 = uVar42 + 1;
      *plVar36 = *plVar2 + lVar29 * 4;
      uVar39 = uVar39 - 1;
      plVar36 = plVar36 + 1;
    } while (uVar39 != 0);
  }
LAB_145384ef8:
  uVar39 = uVar26 + 0xf;
  if (uVar39 <= uVar26) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_180 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4
   ) = 0x145384f17;
  lVar29 = -(uVar39 & 0xfffffffffffffff0);
  local_b8 = (longlong)&local_108 +
             lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4;
  uVar39 = uVar26 + 0xf;
  if (uVar39 <= uVar26) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_180 +
   lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145384f38;
  lVar13 = -(uVar39 & 0xfffffffffffffff0);
  local_c0 = (longlong)&local_108 +
             lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4;
  uVar39 = uVar26 + 0xf;
  if (uVar39 <= uVar26) {
    uVar39 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_180 +
   lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
       0x145384f59;
  lVar14 = -(uVar39 & 0xfffffffffffffff0);
  uVar40 = 0;
  local_c8 = (longlong)&local_108 +
             lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4;
  uVar35 = uVar34;
  if (uVar33 != 0) {
    local_78 = *param_1;
    lStack_70 = param_1[1];
    local_f8 = local_d0;
    do {
      uVar35 = param_3 - uVar40;
      if (DAT_14c72f43c < param_3 - uVar40) {
        uVar35 = DAT_14c72f43c;
      }
      uVar40 = uVar40 + uVar35;
      *(ulonglong *)
       ((longlong)alStack_158 +
       lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 +
                                                                                             lVar4)
           = (longlong)&local_108 + (ulonglong)(uVar1 * uVar34) * 0x14 + lVar17 + 0x108;
      *(undefined8 *)
       ((longlong)auStack_180 +
       lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 +
                                                                                             lVar4)
           = 0x145384ff5;
      FUN_145383130(&local_78,param_2,(float)uVar40 * (1.0 / (float)param_3),
                    (longlong)&local_108 + (ulonglong)(uVar1 * uVar34) * 0x14 + lVar16 + 0x108);
      uVar34 = uVar34 + 1;
      *local_f8 = uVar35;
      local_f8 = local_f8 + 1;
      uVar35 = local_108._4_4_;
    } while (uVar34 < uVar33);
  }
  ppfVar22 = local_90;
  ppAVar21 = local_98;
  ppAVar20 = local_a0;
  ppAVar19 = local_a8;
  uVar34 = 0;
  uVar39 = (ulonglong)((uVar33 - 1) * uVar1);
  puVar30 = (undefined8 *)((longlong)&local_108 + uVar39 * 0x14 + lVar17 + 0x108);
  local_d8 = puVar30;
  if (uVar1 != 0) {
    lVar37 = (longlong)&local_108 + ((uVar39 * 0x14 + lVar16) - (longlong)puVar30) + 0x108;
    local_78 = lVar37;
    puVar25 = (ushort *)*param_1;
    local_e0 = puVar25;
    do {
      uVar39 = (ulonglong)*puVar25;
      uVar41 = 0;
      local_80 = uVar39;
      puVar3 = *(undefined8 **)(*(longlong *)(param_2 + uVar39 * 8) + 0x20);
      local_e8 = puVar3;
      uVar40 = (uint)*(byte *)(*(longlong *)(param_4 + uVar39 * 8) + 8);
      local_108._0_4_ = uVar40;
      if (uVar40 != 0) {
        local_f8 = (uint *)0x0;
        uVar23 = local_100[0] + 7 & 0xfffffff8;
        local_108._4_4_ = uVar23;
        local_f0 = 0;
        puVar32 = puVar3;
        do {
          plVar2 = *(longlong **)(param_4 + uVar39 * 8);
          uVar26 = (ulonglong)uVar35;
          uVar38 = 0;
          local_90[uVar26] =
               (float *)(*plVar2 + (ulonglong)*(ushort *)(plVar2 + 2) * (longlong)local_f8 * 4);
          local_a0[uVar26] = (AkBiquadMemories *)(puVar32[5] + local_f0);
          *(longlong *)(local_b0 + uVar26 * 8) = puVar32[6] + local_f0;
          if (uVar33 != 0) {
            do {
              iVar24 = uVar1 * uVar38;
              iVar27 = (int)local_88 * uVar38;
              uVar38 = uVar38 + 1;
              uVar26 = (ulonglong)(iVar24 + uVar34);
              uVar28 = iVar27 + uVar35;
              local_98[uVar28] =
                   (AkBiquadCoefficients *)((longlong)&local_108 + uVar26 * 0x14 + lVar16 + 0x108);
              local_a8[uVar28] =
                   (AkBiquadCoefficients *)((longlong)&local_108 + uVar26 * 0x14 + lVar17 + 0x108);
            } while (uVar38 < uVar33);
          }
          uVar42 = (ulonglong)uVar35;
          uVar35 = uVar35 + 1;
          uVar26 = (ulonglong)(uVar23 * uVar41);
          uVar41 = uVar41 + 1;
          local_f8 = (uint *)((longlong)local_f8 + 1);
          local_f0 = local_f0 + 0x10;
          *(undefined8 *)(local_b8 + uVar42 * 8) = *(undefined8 *)(param_6 + uVar39 * 8);
          *(ulonglong *)(local_c0 + uVar42 * 8) = *(longlong *)(param_7 + uVar39 * 8) + uVar26 * 4;
          *(ulonglong *)(local_c8 + uVar42 * 8) = *(longlong *)(param_8 + uVar39 * 8) + uVar26 * 4;
          puVar32 = local_e8;
        } while (uVar41 < uVar40);
      }
      uVar15 = ((undefined8 *)(lVar37 + (longlong)puVar30))[1];
      uVar34 = uVar34 + 1;
      *puVar3 = *(undefined8 *)(lVar37 + (longlong)puVar30);
      puVar3[1] = uVar15;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(lVar37 + 0x10 + (longlong)puVar30);
      uVar15 = puVar30[1];
      *(undefined8 *)((longlong)puVar3 + 0x14) = *puVar30;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar15;
      puVar32 = puVar30 + 2;
      puVar30 = (undefined8 *)((longlong)puVar30 + 0x14);
      *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)puVar32;
      puVar25 = puVar25 + 1;
      local_d8 = puVar30;
      local_e0 = puVar25;
    } while (uVar34 < uVar1);
  }
  *(uint *)((longlong)auStack_128 +
           lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 0x10) = local_100[0];
  puVar18 = local_d0;
  *(uint *)((longlong)auStack_128 +
           lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 8) = uVar35;
  *(uint *)((longlong)auStack_128 +
           lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4) = uVar33;
  *(uint **)((longlong)alStack_158 +
            lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 0x28) = puVar18;
  *(longlong *)
   ((longlong)alStack_158 +
   lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4 + 0x20) = local_c8;
  *(longlong *)
   ((longlong)alStack_158 +
   lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4 + 0x18) = local_c0;
  *(longlong *)
   ((longlong)alStack_158 +
   lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4 + 0x10) = local_b8;
  *(longlong **)
   ((longlong)alStack_158 +
   lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4 + 8) = local_68;
  *(longlong *)
   ((longlong)alStack_158 +
   lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4) = local_b0;
  *(undefined8 *)
   ((longlong)auStack_180 +
   lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + 
                                                  lVar4) = 0x145385282;
  AkMixer::ProcessPairedInterpBiquadFilterAndMix
            (ppfVar22,ppAVar21,ppAVar20,ppAVar19,
             *(AkBiquadMemories ***)
              ((longlong)alStack_158 +
              lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4),
             *(float ***)
              ((longlong)alStack_158 +
              lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 8),
             *(AkRamp **)
              ((longlong)alStack_158 +
              lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 0x10),
             *(float ***)
              ((longlong)alStack_158 +
              lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 0x18),
             *(float ***)
              ((longlong)alStack_158 +
              lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 
                                                  lVar5 + lVar4 + 0x20),
             *(uint **)((longlong)alStack_158 +
                       lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
                                                                                             lVar5 +
                                                                                             lVar4 +
                       0x28),
             *(uint *)((longlong)auStack_128 +
                      lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + lVar5 + lVar4),
             *(uint *)((longlong)auStack_128 +
                      lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + lVar5 + lVar4 + 8),
             *(uint *)((longlong)auStack_128 +
                      lVar14 + lVar13 + lVar29 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + lVar5 + lVar4 + 0x10));
  return;
}



// FUNCTION 1453852a0 FUN_1453852a0 body=2511 status=ok
// SIG undefined FUN_1453852a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453852a0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  byte bVar5;
  float **ppfVar6;
  longlong *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  AkBiquadMemories **ppAVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ushort *puVar27;
  uint uVar28;
  float **ppfVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  uint uVar35;
  uint *puVar36;
  AkBiquadCoefficients **ppAVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar42 [16];
  undefined8 auStack_150 [5];
  longlong alStack_128 [4];
  uint auStack_108 [8];
  undefined8 local_e8;
  uint local_e0;
  uint local_dc;
  AkBiquadCoefficients **local_d8;
  ushort *local_d0;
  float **local_c8;
  ushort *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  AkBiquadMemories **local_a0;
  float **local_98;
  longlong local_90;
  uint *local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  
  uVar24 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar24 == 0) {
    return;
  }
  uVar25 = (uint)DAT_14c72f438;
  uVar16 = 0;
  local_e8._4_4_ = 0;
  uVar31 = (ulonglong)uVar25 * 4 + 0xf;
  if (uVar31 <= (ulonglong)uVar25 * 4) {
    uVar31 = 0xffffffffffffff0;
  }
  auStack_150[0] = 0x145385319;
  uVar35 = *(uint *)(param_1 + 2);
  puVar27 = (ushort *)(ulonglong)uVar35;
  lVar30 = -(uVar31 & 0xfffffffffffffff0);
  local_d0 = puVar27;
  uVar32 = (longlong)puVar27 * 8;
  local_88 = (uint *)((longlong)&local_e8 + lVar30);
  uVar31 = uVar32 + 0xf;
  if (uVar31 <= uVar32) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar30) = 0x14538534a;
  lVar21 = -(uVar31 & 0xfffffffffffffff0);
  local_98 = (float **)((longlong)&local_e8 + lVar21 + lVar30);
  uVar31 = uVar32 + 0xf;
  if (uVar31 <= uVar32) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar21 + lVar30) = 0x14538536b;
  lVar22 = -(uVar31 & 0xfffffffffffffff0);
  local_a0 = (AkBiquadMemories **)((longlong)&local_e8 + lVar22 + lVar21 + lVar30);
  uVar19 = (ulonglong)uVar24 * (ulonglong)uVar25 * 0x14;
  uVar31 = uVar19 + 0xf;
  if (uVar31 <= uVar19) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar22 + lVar21 + lVar30) = 0x14538539b;
  lVar1 = -(uVar31 & 0xfffffffffffffff0);
  lVar14 = lVar1 + lVar22 + lVar21 + lVar30 + -0xe8;
  uVar19 = (ulonglong)uVar25 * (longlong)puVar27 * 8;
  uVar31 = uVar19 + 0xf;
  if (uVar31 <= uVar19) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar1 + lVar22 + lVar21 + lVar30) = 0x1453853c0;
  lVar10 = -(uVar31 & 0xfffffffffffffff0);
  ppfVar6 = (float **)*param_5;
  ppAVar37 = (AkBiquadCoefficients **)
             ((longlong)&local_e8 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30);
  local_d8 = ppAVar37;
  uVar23 = *(uint *)(ppfVar6 + 1) & 0xff;
  local_e8._0_4_ = uVar23;
  uVar31 = (ulonglong)uVar23 * 8 + 0xf;
  if (uVar31 <= (ulonglong)uVar23 * 8) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) = 0x145385405;
  lVar11 = -(uVar31 & 0xfffffffffffffff0);
  local_c8 = (float **)((longlong)&local_e8 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30);
  uVar31 = 0;
  uVar26 = 0;
  if (uVar23 != 0) {
    uVar19 = uVar31;
    if ((7 < uVar23) && (uVar26 = uVar16, 5 < DAT_14c707900)) {
      pfVar3 = *ppfVar6;
      if (((ppfVar6 < local_c8) || (local_c8 + ((uint)local_e8 - 1) < ppfVar6)) &&
         ((ppfVar6 + 2 < local_c8 || (uVar19 = 0, local_c8 + ((uint)local_e8 - 1) < ppfVar6 + 2))))
      {
        uVar19 = 4;
        auVar42 = pmovzxwq(in_XMM4,ZEXT416(CONCAT22(*(undefined2 *)(ppfVar6 + 2),
                                                    *(undefined2 *)(ppfVar6 + 2))));
        do {
          iVar18 = (int)uVar31;
          iVar17 = (int)uVar19;
          uVar16 = iVar17 - 2;
          auVar38._4_4_ = iVar18 + 1;
          auVar38._0_4_ = iVar18;
          auVar38._8_4_ = iVar18;
          auVar38._12_4_ = iVar18;
          auVar38 = pmovzxdq(auVar38,auVar38);
          auVar38 = vpmullq_avx512vl(auVar42,auVar38);
          local_c8[uVar31] = pfVar3 + auVar38._0_8_;
          (local_c8 + uVar31)[1] = pfVar3 + auVar38._8_8_;
          uVar23 = iVar18 + 8;
          uVar31 = (ulonglong)uVar23;
          auVar39._4_4_ = iVar17 + -1;
          auVar39._0_4_ = uVar16;
          auVar39._8_4_ = uVar16;
          auVar39._12_4_ = uVar16;
          auVar38 = pmovzxdq(auVar39,auVar39);
          auVar38 = vpmullq_avx512vl(auVar42,auVar38);
          local_c8[uVar16] = pfVar3 + auVar38._0_8_;
          (local_c8 + uVar16)[1] = pfVar3 + auVar38._8_8_;
          auVar40._4_4_ = iVar17 + 1;
          auVar40._0_4_ = iVar17;
          auVar40._8_4_ = iVar17;
          auVar40._12_4_ = iVar17;
          auVar38 = pmovzxdq(auVar40,auVar40);
          auVar38 = vpmullq_avx512vl(auVar42,auVar38);
          local_c8[uVar19] = pfVar3 + auVar38._0_8_;
          (local_c8 + uVar19)[1] = pfVar3 + auVar38._8_8_;
          uVar16 = iVar17 + 2;
          uVar19 = (ulonglong)(iVar17 + 8);
          auVar41._4_4_ = iVar17 + 3;
          auVar41._0_4_ = uVar16;
          auVar41._8_4_ = uVar16;
          auVar41._12_4_ = uVar16;
          auVar38 = pmovzxdq(auVar41,auVar41);
          auVar38 = vpmullq_avx512vl(auVar42,auVar38);
          local_c8[uVar16] = pfVar3 + auVar38._0_8_;
          (local_c8 + uVar16)[1] = pfVar3 + auVar38._8_8_;
        } while (uVar23 < ((uint)local_e8 & 0xfffffff8));
        uVar19 = uVar31;
        uVar26 = local_e8._4_4_;
        if ((uint)local_e8 <= uVar23) goto LAB_1453855a8;
      }
    }
    uVar31 = (ulonglong)((uint)local_e8 - (int)uVar19);
    ppfVar29 = local_c8 + uVar19;
    do {
      lVar20 = *(ushort *)(ppfVar6 + 2) * uVar19;
      uVar19 = uVar19 + 1;
      *ppfVar29 = *ppfVar6 + lVar20;
      uVar31 = uVar31 - 1;
      ppfVar29 = ppfVar29 + 1;
    } while (uVar31 != 0);
  }
LAB_1453855a8:
  uVar31 = uVar32 + 0xf;
  if (uVar31 <= uVar32) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_150 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) =
       0x1453855c7;
  lVar20 = -(uVar31 & 0xfffffffffffffff0);
  local_a8 = (longlong)&local_e8 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30;
  uVar31 = uVar32 + 0xf;
  if (uVar31 <= uVar32) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_150 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) =
       0x1453855e8;
  lVar12 = -(uVar31 & 0xfffffffffffffff0);
  local_b0 = (longlong)&local_e8 +
             lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30;
  uVar31 = uVar32 + 0xf;
  if (uVar31 <= uVar32) {
    uVar31 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_150 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) =
       0x145385609;
  lVar13 = -(uVar31 & 0xfffffffffffffff0);
  local_e0 = 0;
  local_b8 = (longlong)&local_e8 +
             lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30;
  if (uVar25 != 0) {
    uVar16 = 0;
    puVar36 = local_88;
    uVar35 = uVar16;
    do {
      local_78 = *param_1;
      lStack_70 = param_1[1];
      uVar23 = param_3 - uVar16;
      if (DAT_14c72f43c < param_3 - uVar16) {
        uVar23 = DAT_14c72f43c;
      }
      local_68 = param_1[2];
      uVar16 = uVar16 + uVar23;
      *(undefined8 *)
       ((longlong)auStack_150 +
       lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) = 0x1453856a1;
      FUN_145382ec0(&local_78,param_2,(float)uVar16 * (1.0 / (float)param_3),
                    (longlong)&local_e8 + (ulonglong)(uVar24 * uVar35) * 0x14 + lVar14 + 0xe8);
      uVar35 = uVar35 + 1;
      *puVar36 = uVar23;
      puVar36 = puVar36 + 1;
    } while (uVar35 < uVar25);
    uVar35 = (uint)local_d0;
    ppAVar37 = local_d8;
    uVar26 = local_e8._4_4_;
  }
  uVar16 = 0;
  local_e8._4_4_ = *(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) != 0) {
    local_d0 = (ushort *)*param_1;
    do {
      uVar31 = (ulonglong)*local_d0;
      uVar23 = 0;
      local_90 = *(longlong *)(*(longlong *)(param_2 + uVar31 * 8) + 0x20);
      local_e0 = (uint)*(byte *)(*(longlong *)(param_4 + uVar31 * 8) + 8);
      if (local_e0 != 0) {
        local_c0 = (ushort *)0x0;
        local_dc = (uint)local_e8 + 7 & 0xfffffff8;
        local_d8 = (AkBiquadCoefficients **)0x0;
        do {
          plVar7 = *(longlong **)(param_4 + uVar31 * 8);
          uVar32 = (ulonglong)uVar26;
          local_98[uVar32] =
               (float *)(*plVar7 + (ulonglong)*(ushort *)(plVar7 + 2) * (longlong)local_c0 * 4);
          uVar28 = 0;
          local_a0[uVar32] =
               (AkBiquadMemories *)(*(longlong *)(local_90 + 0x28) + (longlong)local_d8);
          if (uVar25 != 0) {
            do {
              iVar17 = uVar24 * uVar28;
              iVar18 = uVar35 * uVar28;
              uVar28 = uVar28 + 1;
              ppAVar37[iVar18 + uVar26] =
                   (AkBiquadCoefficients *)
                   ((longlong)&local_e8 + (ulonglong)(iVar17 + uVar16) * 0x14 + lVar14 + 0xe8);
            } while (uVar28 < uVar25);
          }
          uVar26 = uVar26 + 1;
          uVar28 = local_dc * uVar23;
          uVar23 = uVar23 + 1;
          local_d8 = local_d8 + 2;
          *(undefined8 *)(local_a8 + uVar32 * 8) = *(undefined8 *)(param_6 + uVar31 * 8);
          *(ulonglong *)(local_b0 + uVar32 * 8) =
               *(longlong *)(param_7 + uVar31 * 8) + (ulonglong)uVar28 * 4;
          local_c0 = (ushort *)((longlong)local_c0 + 1);
          *(ulonglong *)(local_b8 + uVar32 * 8) =
               *(longlong *)(param_8 + uVar31 * 8) + (ulonglong)uVar28 * 4;
        } while (uVar23 < local_e0);
      }
      uVar16 = uVar16 + 1;
      local_d0 = local_d0 + 1;
    } while (uVar16 < local_e8._4_4_);
  }
  uVar31 = (ulonglong)local_e8._4_4_;
  if (local_e8._4_4_ < uVar24) {
    local_c0 = (ushort *)(*param_1 + uVar31 * 2);
    do {
      uVar32 = (ulonglong)*local_c0;
      uVar16 = 0;
      local_90 = *(longlong *)(*(longlong *)(param_2 + uVar32 * 8) + 0x20);
      local_e0 = (uint)*(byte *)(*(longlong *)(param_4 + uVar32 * 8) + 8);
      if (local_e0 != 0) {
        local_d0 = (ushort *)0x0;
        local_dc = (uint)local_e8 + 7 & 0xfffffff8;
        local_d8 = (AkBiquadCoefficients **)0x0;
        do {
          plVar7 = *(longlong **)(param_4 + uVar32 * 8);
          uVar19 = (ulonglong)uVar26;
          local_98[uVar19] =
               (float *)(*plVar7 + (ulonglong)*(ushort *)(plVar7 + 2) * (longlong)local_d0 * 4);
          uVar23 = 0;
          local_a0[uVar19] =
               (AkBiquadMemories *)(*(longlong *)(local_90 + 0x30) + (longlong)local_d8);
          if (uVar25 != 0) {
            do {
              iVar17 = uVar24 * uVar23;
              iVar18 = uVar35 * uVar23;
              uVar23 = uVar23 + 1;
              ppAVar37[iVar18 + uVar26] =
                   (AkBiquadCoefficients *)
                   ((longlong)&local_e8 +
                   (ulonglong)(uint)(iVar17 + (int)uVar31) * 0x14 + lVar14 + 0xe8);
            } while (uVar23 < uVar25);
          }
          uVar26 = uVar26 + 1;
          uVar23 = local_dc * uVar16;
          uVar16 = uVar16 + 1;
          local_d8 = local_d8 + 2;
          *(undefined8 *)(local_a8 + uVar19 * 8) = *(undefined8 *)(param_6 + uVar32 * 8);
          *(ulonglong *)(local_b0 + uVar19 * 8) =
               *(longlong *)(param_7 + uVar32 * 8) + (ulonglong)uVar23 * 4;
          local_d0 = (ushort *)((longlong)local_d0 + 1);
          *(ulonglong *)(local_b8 + uVar19 * 8) =
               *(longlong *)(param_8 + uVar32 * 8) + (ulonglong)uVar23 * 4;
        } while (uVar16 < local_e0);
      }
      uVar16 = (int)uVar31 + 1;
      uVar31 = (ulonglong)uVar16;
      local_c0 = local_c0 + 1;
    } while (uVar16 < uVar24);
  }
  ppfVar29 = local_98;
  ppAVar15 = local_a0;
  ppfVar6 = local_c8;
  uVar16 = local_e8._4_4_;
  *(uint *)((longlong)auStack_108 +
           lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 0x10) =
       (uint)local_e8;
  puVar36 = local_88;
  *(uint *)((longlong)auStack_108 +
           lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 8) =
       uVar26;
  *(uint *)((longlong)auStack_108 +
           lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) = uVar25;
  *(uint **)((longlong)alStack_128 +
            lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 0x18) =
       puVar36;
  *(longlong *)
   ((longlong)alStack_128 +
   lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 0x10) = local_b8;
  *(longlong *)
   ((longlong)alStack_128 +
   lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 8) = local_b0;
  *(longlong *)
   ((longlong)alStack_128 +
   lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) = local_a8;
  *(undefined8 *)
   ((longlong)auStack_150 +
   lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30) = 0x1453859f0;
  AkMixer::ProcessInterpBiquadFilterAndMix
            (ppfVar29,ppAVar37,ppAVar15,ppfVar6,
             *(AkRamp **)
              ((longlong)alStack_128 +
              lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30),
             *(float ***)
              ((longlong)alStack_128 +
              lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 8),
             *(float ***)
              ((longlong)alStack_128 +
              lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30 + 0x10),
             *(uint **)((longlong)alStack_128 +
                       lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30
                       + 0x18),
             *(uint *)((longlong)auStack_108 +
                      lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30)
             ,*(uint *)((longlong)auStack_108 +
                       lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30
                       + 8),
             *(uint *)((longlong)auStack_108 +
                      lVar13 + lVar12 + lVar20 + lVar11 + lVar10 + lVar1 + lVar22 + lVar21 + lVar30
                      + 0x10));
  puVar34 = (undefined8 *)
            ((longlong)&local_e8 + (ulonglong)((uVar25 - 1) * uVar24) * 0x14 + lVar14 + 0xe8);
  if (uVar16 != 0) {
    puVar27 = (ushort *)*param_1;
    uVar31 = (ulonglong)uVar16;
    puVar33 = puVar34;
    do {
      uVar25 = 0;
      uVar4 = puVar33[1];
      pbVar8 = *(byte **)(param_2 + (ulonglong)*puVar27 * 8);
      bVar5 = *pbVar8;
      puVar9 = *(undefined8 **)(pbVar8 + 0x20);
      *puVar9 = *puVar33;
      puVar9[1] = uVar4;
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar33 + 2);
      if (bVar5 < 4) {
        if (bVar5 != 0) {
          lVar30 = 0;
          goto LAB_145385ae5;
        }
      }
      else {
        uVar16 = (bVar5 - 4 >> 2) + 1;
        uVar32 = (ulonglong)uVar16;
        uVar25 = uVar16 * 4;
        lVar30 = (ulonglong)uVar16 * 4;
        lVar21 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar21 + puVar9[5]);
          lVar22 = puVar9[6];
          *(undefined8 *)(lVar21 + lVar22) = uVar4;
          ((undefined8 *)(lVar21 + lVar22))[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar21 + 0x10 + puVar9[5]);
          puVar2 = (undefined8 *)(lVar21 + 0x10 + puVar9[6]);
          *puVar2 = uVar4;
          puVar2[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar21 + 0x20 + puVar9[5]);
          puVar2 = (undefined8 *)(lVar21 + 0x20 + puVar9[6]);
          *puVar2 = uVar4;
          puVar2[1] = uVar4;
          uVar4 = *(undefined8 *)(lVar21 + 0x30 + puVar9[5]);
          puVar2 = (undefined8 *)(lVar21 + 0x30 + puVar9[6]);
          *puVar2 = uVar4;
          puVar2[1] = uVar4;
          uVar32 = uVar32 - 1;
          lVar21 = lVar21 + 0x40;
        } while (uVar32 != 0);
        if (uVar25 < bVar5) {
LAB_145385ae5:
          uVar32 = (ulonglong)(bVar5 - uVar25);
          lVar30 = lVar30 << 4;
          do {
            uVar4 = *(undefined8 *)(lVar30 + puVar9[5]);
            lVar21 = puVar9[6];
            *(undefined8 *)(lVar30 + lVar21) = uVar4;
            ((undefined8 *)(lVar30 + lVar21))[1] = uVar4;
            uVar32 = uVar32 - 1;
            lVar30 = lVar30 + 0x10;
          } while (uVar32 != 0);
        }
      }
      puVar27 = puVar27 + 1;
      puVar33 = (undefined8 *)((longlong)puVar33 + 0x14);
      uVar31 = uVar31 - 1;
      uVar16 = local_e8._4_4_;
    } while (uVar31 != 0);
  }
  if (uVar16 < uVar24) {
    uVar31 = (ulonglong)(uVar24 - uVar16);
    puVar34 = (undefined8 *)((longlong)puVar34 + (ulonglong)uVar16 * 0x14);
    puVar27 = (ushort *)(*param_1 + (ulonglong)uVar16 * 2);
    do {
      uVar24 = 0;
      uVar4 = puVar34[1];
      pbVar8 = *(byte **)(param_2 + (ulonglong)*puVar27 * 8);
      bVar5 = *pbVar8;
      lVar30 = *(longlong *)(pbVar8 + 0x20);
      *(undefined8 *)(lVar30 + 0x14) = *puVar34;
      *(undefined8 *)(lVar30 + 0x1c) = uVar4;
      *(undefined4 *)(lVar30 + 0x24) = *(undefined4 *)(puVar34 + 2);
      if (bVar5 < 4) {
        if (bVar5 != 0) {
          lVar21 = 0;
          goto LAB_145385c15;
        }
      }
      else {
        uVar25 = (bVar5 - 4 >> 2) + 1;
        uVar32 = (ulonglong)uVar25;
        uVar24 = uVar25 * 4;
        lVar21 = (ulonglong)uVar25 * 4;
        lVar22 = 0;
        do {
          lVar1 = lVar22 + 0x40;
          uVar4 = *(undefined8 *)(*(longlong *)(lVar30 + 0x30) + -0x38 + lVar1);
          puVar33 = (undefined8 *)(lVar22 + *(longlong *)(lVar30 + 0x28));
          *puVar33 = uVar4;
          puVar33[1] = uVar4;
          uVar4 = *(undefined8 *)(*(longlong *)(lVar30 + 0x30) + -0x28 + lVar1);
          puVar33 = (undefined8 *)(lVar22 + 0x10 + *(longlong *)(lVar30 + 0x28));
          *puVar33 = uVar4;
          puVar33[1] = uVar4;
          uVar4 = *(undefined8 *)(*(longlong *)(lVar30 + 0x30) + -0x18 + lVar1);
          puVar33 = (undefined8 *)(lVar22 + 0x20 + *(longlong *)(lVar30 + 0x28));
          *puVar33 = uVar4;
          puVar33[1] = uVar4;
          uVar4 = *(undefined8 *)(*(longlong *)(lVar30 + 0x30) + -8 + lVar1);
          puVar33 = (undefined8 *)(lVar22 + 0x30 + *(longlong *)(lVar30 + 0x28));
          *puVar33 = uVar4;
          puVar33[1] = uVar4;
          uVar32 = uVar32 - 1;
          lVar22 = lVar1;
        } while (uVar32 != 0);
        if (uVar24 < bVar5) {
LAB_145385c15:
          uVar32 = (ulonglong)(bVar5 - uVar24);
          lVar21 = lVar21 << 4;
          do {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar30 + 0x30) + -8 + lVar21 + 0x10);
            puVar33 = (undefined8 *)(lVar21 + *(longlong *)(lVar30 + 0x28));
            *puVar33 = uVar4;
            puVar33[1] = uVar4;
            uVar32 = uVar32 - 1;
            lVar21 = lVar21 + 0x10;
          } while (uVar32 != 0);
        }
      }
      puVar27 = puVar27 + 1;
      puVar34 = (undefined8 *)((longlong)puVar34 + 0x14);
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
  }
  return;
}



// FUNCTION 145385c70 FUN_145385c70 body=1001 status=ok
// SIG undefined FUN_145385c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145385c70(undefined8 *param_1,longlong param_2,uint param_3,longlong param_4,
                  longlong *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  float *pfVar1;
  AkRamp *pAVar2;
  float **ppfVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  float **ppfVar24;
  float **ppfVar25;
  ulonglong uVar26;
  float **ppfVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong uVar40;
  undefined8 auStack_e0 [5];
  longlong lStack_b8;
  uint auStack_b0 [6];
  undefined8 local_98;
  longlong local_90;
  ushort *local_88;
  ulonglong local_80;
  longlong local_78;
  float **local_70;
  float **local_68;
  longlong local_60;
  longlong local_58;
  
  uVar22 = *(uint *)(param_1 + 1);
  uVar40 = CONCAT44(param_3,param_3);
  if (uVar22 == 0) {
    return;
  }
  local_98._0_4_ = *(uint *)((longlong)param_1 + 0xc);
  uVar19 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8;
  uVar8 = *(uint *)(*param_5 + 8);
  uVar18 = uVar19 + 0xf;
  uVar28 = uVar8 & 0xff;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  auStack_e0[0] = 0x145385cfa;
  lVar13 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = uVar19 + 0xf;
  local_68 = (float **)((longlong)&local_98 + lVar13);
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar13) = 0x145385d1b;
  lVar14 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = uVar19 + 0xf;
  pAVar2 = (AkRamp *)((longlong)&local_98 + lVar14 + lVar13);
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar14 + lVar13) = 0x145385d38;
  lVar15 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = uVar19 + 0xf;
  ppfVar25 = (float **)((longlong)&local_98 + lVar15 + lVar14 + lVar13);
  local_70 = ppfVar25;
  if (uVar18 <= uVar19) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar15 + lVar14 + lVar13) = 0x145385d59;
  lVar16 = -(uVar18 & 0xfffffffffffffff0);
  uVar18 = 0;
  local_78 = (longlong)&local_98 + lVar16 + lVar15 + lVar14 + lVar13;
  ppfVar24 = (float **)((longlong)&local_98 + lVar13);
  if (uVar22 != 0) {
    local_88 = (ushort *)*param_1;
    local_80 = (ulonglong)uVar22;
    do {
      uVar23 = 0;
      uVar19 = (ulonglong)*local_88;
      lVar9 = *(longlong *)(*(longlong *)(param_2 + uVar19 * 8) + 0x20);
      plVar10 = *(longlong **)(param_4 + uVar19 * 8);
      bVar7 = *(byte *)(plVar10 + 1);
      local_90 = *plVar10;
      uVar5 = *(undefined4 *)(param_6 + uVar19 * 8);
      uVar22 = *(uint *)(param_6 + 4 + uVar19 * 8);
      in_XMM2 = ZEXT416(uVar22);
      lVar11 = *(longlong *)(param_7 + uVar19 * 8);
      local_60 = lVar11;
      local_58 = *(longlong *)(param_8 + uVar19 * 8);
      if (bVar7 != 0) {
        uVar19 = uVar23;
        uVar26 = uVar18;
        do {
          ppfVar25 = local_70;
          lVar12 = *(longlong *)(lVar9 + 0x30);
          iVar20 = (int)uVar23;
          pfVar1 = (float *)(local_90 + (ulonglong)(iVar20 * param_3) * 4);
          uVar6 = *(undefined8 *)(pfVar1 + ((ulonglong)param_3 - 2));
          puVar4 = (undefined8 *)(uVar19 + *(longlong *)(lVar9 + 0x28));
          *puVar4 = uVar6;
          puVar4[1] = uVar6;
          puVar4 = (undefined8 *)(uVar19 + lVar12);
          *puVar4 = uVar6;
          puVar4[1] = uVar6;
          uVar18 = (ulonglong)((int)uVar26 + 1);
          local_68[uVar26] = pfVar1;
          uVar17 = (uVar28 + 7 & 0xfffffff8) * iVar20;
          uVar23 = (ulonglong)(iVar20 + 1U);
          *(undefined4 *)(pAVar2 + uVar26 * 8) = uVar5;
          *(uint *)((longlong)&local_98 + uVar26 * 8 + lVar14 + lVar13 + 4) = uVar22;
          ppfVar25[uVar26] = (float *)(lVar11 + (ulonglong)uVar17 * 4);
          *(ulonglong *)(local_78 + uVar26 * 8) = local_58 + (ulonglong)uVar17 * 4;
          uVar19 = uVar19 + 0x10;
          uVar26 = uVar18;
        } while (iVar20 + 1U < (uint)bVar7);
      }
      local_88 = local_88 + 1;
      local_80 = local_80 - 1;
      ppfVar24 = local_68;
      ppfVar25 = local_70;
    } while (local_80 != 0);
  }
  lVar9 = local_78;
  uVar19 = 0;
  uVar18 = (ulonglong)uVar28 * 8 + 0xf;
  if (uVar18 <= (ulonglong)uVar28 * 8) {
    uVar18 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar16 + lVar15 + lVar14 + lVar13) = 0x145385ec9;
  lVar12 = -(uVar18 & 0xfffffffffffffff0);
  ppfVar3 = (float **)((longlong)&local_98 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13);
  lVar11 = *(longlong *)*param_5;
  if (uVar28 != 0) {
    if ((7 < uVar28) && (1 < DAT_14c707900)) {
      uVar18 = uVar19;
      uVar22 = 4;
      do {
        iVar20 = (int)uVar18;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar40;
        uVar21 = iVar20 + 8;
        uVar19 = (ulonglong)uVar21;
        auVar33._4_4_ = iVar20 + 1;
        auVar33._0_4_ = iVar20;
        auVar33._8_4_ = iVar20;
        auVar33._12_4_ = iVar20;
        auVar29 = pmulld(auVar33,auVar29);
        auVar29 = pmovzxdq(in_XMM2,auVar29);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar40;
        auVar37._0_8_ = auVar29._0_8_ * 4 + lVar11;
        auVar37._8_8_ = auVar29._8_8_ * 4 + lVar11;
        *(undefined1 (*) [16])(ppfVar3 + uVar18) = auVar37;
        uVar17 = uVar22 - 2;
        auVar34._4_4_ = uVar22 - 1;
        auVar34._0_4_ = uVar17;
        auVar34._8_4_ = uVar17;
        auVar34._12_4_ = uVar17;
        auVar29 = pmulld(auVar34,auVar30);
        auVar29 = pmovzxdq(auVar37,auVar29);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar40;
        auVar38._0_8_ = auVar29._0_8_ * 4 + lVar11;
        auVar38._8_8_ = auVar29._8_8_ * 4 + lVar11;
        *(undefined1 (*) [16])(ppfVar3 + uVar17) = auVar38;
        auVar35._4_4_ = uVar22 + 1;
        auVar35._0_4_ = uVar22;
        auVar35._8_4_ = uVar22;
        auVar35._12_4_ = uVar22;
        auVar29 = pmulld(auVar35,auVar31);
        auVar29 = pmovzxdq(auVar38,auVar29);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar40;
        auVar39._0_8_ = auVar29._0_8_ * 4 + lVar11;
        auVar39._8_8_ = auVar29._8_8_ * 4 + lVar11;
        *(undefined1 (*) [16])(ppfVar3 + uVar22) = auVar39;
        uVar17 = uVar22 + 2;
        auVar36._4_4_ = uVar22 + 3;
        auVar36._0_4_ = uVar17;
        auVar36._8_4_ = uVar17;
        auVar36._12_4_ = uVar17;
        auVar29 = pmulld(auVar36,auVar32);
        auVar29 = pmovzxdq(auVar39,auVar29);
        in_XMM2._0_8_ = auVar29._0_8_ * 4 + lVar11;
        in_XMM2._8_8_ = auVar29._8_8_ * 4 + lVar11;
        *(undefined1 (*) [16])(ppfVar3 + uVar17) = in_XMM2;
        uVar18 = uVar19;
        uVar22 = uVar22 + 8;
      } while (uVar21 < (uVar8 & 0xf8));
      if (uVar28 <= uVar21) goto LAB_145386018;
    }
    ppfVar27 = ppfVar3 + uVar19;
    do {
      iVar20 = (int)uVar19;
      uVar22 = iVar20 + 1;
      uVar19 = (ulonglong)uVar22;
      *ppfVar27 = (float *)(lVar11 + (ulonglong)(iVar20 * param_3) * 4);
      ppfVar27 = ppfVar27 + 1;
    } while (uVar22 < uVar28);
  }
LAB_145386018:
  uVar22 = (uint)local_98;
  *(uint *)((longlong)auStack_b0 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13 + 0x10) = uVar28;
  *(uint *)((longlong)auStack_b0 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13 + 8) = uVar22;
  *(uint *)((longlong)auStack_b0 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13) = param_3;
  *(longlong *)((longlong)&lStack_b8 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13) = lVar9;
  *(undefined8 *)((longlong)auStack_e0 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13) = 0x14538603e;
  AkMixer::ProcessMix(ppfVar24,ppfVar3,pAVar2,ppfVar25,
                      *(float ***)
                       ((longlong)&lStack_b8 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13),
                      *(uint *)((longlong)auStack_b0 + lVar12 + lVar16 + lVar15 + lVar14 + lVar13),
                      *(uint *)((longlong)auStack_b0 +
                               lVar12 + lVar16 + lVar15 + lVar14 + lVar13 + 8),
                      *(uint *)((longlong)auStack_b0 +
                               lVar12 + lVar16 + lVar15 + lVar14 + lVar13 + 0x10));
  return;
}



// FUNCTION 145386060 FUN_145386060 body=1820 status=ok
// SIG undefined FUN_145386060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_145386060(longlong *param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  size_t sVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  float *pfVar18;
  undefined8 *puVar19;
  float *pfVar20;
  float *pfVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 auStack_170 [5];
  uint auStack_148 [4];
  char local_138;
  byte local_137;
  byte local_136;
  byte local_135;
  byte local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  size_t local_108;
  undefined8 *local_f8;
  float *pfStack_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  
  uVar12 = *(uint *)(param_1 + 1);
  uVar15 = (ulonglong)param_3;
  if (uVar12 != 0) {
    uVar22 = uVar15 * 4;
    uVar13 = uVar22 + 0xf;
    fVar28 = 1.0 / (float)uVar15;
    if (uVar13 <= uVar22) {
      uVar13 = 0xffffffffffffff0;
    }
    auStack_170[0] = 0x145386114;
    lVar4 = -(uVar13 & 0xfffffffffffffff0);
    pfVar18 = (float *)((longlong)&local_138 + lVar4);
    pfStack_f0 = pfVar18;
    if (param_3 != 0) {
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        *pfVar18 = 1.0;
        pfVar18 = pfVar18 + 1;
      }
    }
    uVar15 = uVar22 + 0xf;
    if (uVar15 <= uVar22) {
      uVar15 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_170 + lVar4) = 0x14538614b;
    local_130 = (uint)DAT_14c72f438;
    uVar22 = (ulonglong)local_130;
    lVar5 = -(uVar15 & 0xfffffffffffffff0);
    uVar13 = uVar22 * 0x14;
    pfVar18 = (float *)((longlong)&local_138 + lVar5 + lVar4);
    uVar15 = uVar13 + 0xf;
    if (uVar15 <= uVar13) {
      uVar15 = 0xffffffffffffff0;
    }
    local_c0 = uVar22;
    *(undefined8 *)((longlong)auStack_170 + lVar5 + lVar4) = 0x14538617e;
    lVar6 = -(uVar15 & 0xfffffffffffffff0);
    uVar15 = uVar13 + 0xf;
    puVar19 = (undefined8 *)((longlong)&local_138 + lVar6 + lVar5 + lVar4);
    if (uVar15 <= uVar13) {
      uVar15 = 0xffffffffffffff0;
    }
    local_f8 = puVar19;
    *(undefined8 *)((longlong)auStack_170 + lVar6 + lVar5 + lVar4) = 0x14538619f;
    lVar7 = -(uVar15 & 0xfffffffffffffff0);
    local_118 = (undefined8 *)((longlong)&local_138 + lVar7 + lVar6 + lVar5 + lVar4);
    if (uVar12 != 0) {
      local_b0 = *param_1;
      local_d0 = 0;
      local_c8 = (ulonglong)uVar12;
      do {
        puVar16 = local_118;
        uVar12 = (uint)uVar22;
        local_e8 = (ulonglong)*(ushort *)(local_d0 + local_b0);
        lVar24 = *(longlong *)(param_2 + local_e8 * 8);
        local_138 = *(float *)(lVar24 + 4) != *(float *)(lVar24 + 8);
        local_135 = *(byte *)(lVar24 + 0xd);
        local_137 = *(byte *)(lVar24 + 0x19);
        bVar3 = *(float *)(lVar24 + 0x10) != *(float *)(lVar24 + 0x14);
        puVar23 = *(undefined8 **)(lVar24 + 0x20);
        local_12c = (uint)*(byte *)(*(longlong *)(param_4 + local_e8 * 8) + 8);
        local_136 = local_135 & 4;
        local_120 = puVar23;
        local_b8 = lVar24;
        if (local_136 == 0) {
          if ((bool)local_138) {
            uVar14 = 0;
            if (uVar12 != 0) {
              pfVar20 = (float *)(puVar19 + 1);
              uVar15 = local_c0;
              do {
                uVar9 = DAT_14c72f42c;
                local_108 = *(undefined8 *)(lVar24 + 4);
                fVar25 = (float)local_108;
                uVar13 = local_108 >> 0x20;
                uVar12 = param_3 - uVar14;
                if (DAT_14c72f43c < param_3 - uVar14) {
                  uVar12 = DAT_14c72f43c;
                }
                uVar14 = uVar14 + uVar12;
                *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1453862ff
                ;
                fVar25 = (float)FUN_145382770((float)uVar14 * fVar28 * ((float)uVar13 - fVar25) +
                                              fVar25,DAT_14c72f42c);
                *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145386315
                ;
                fVar25 = tanf((fVar25 / (float)uVar9) * 3.1415927);
                fVar25 = 1.0 / fVar25;
                fVar27 = fVar25 * fVar25;
                fVar26 = 1.0 / (fVar25 * 1.4142135 + 1.0 + fVar27);
                pfVar20[-2] = fVar26;
                pfVar20[-1] = fVar26 + fVar26;
                *pfVar20 = fVar26;
                pfVar20[1] = ((1.0 - fVar27) + (1.0 - fVar27)) * fVar26;
                pfVar20[2] = ((1.0 - fVar25 * 1.4142135) + fVar27) * fVar26;
                pfVar20 = pfVar20 + 5;
                uVar15 = uVar15 - 1;
                puVar16 = local_118;
                puVar23 = local_120;
                uVar12 = local_130;
              } while (uVar15 != 0);
            }
          }
          else {
            uVar8 = puVar23[1];
            *puVar19 = *puVar23;
            puVar19[1] = uVar8;
            *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar23 + 2);
          }
        }
        local_134 = local_137 & 4;
        if (local_134 == 0) {
          if (bVar3) {
            uVar14 = 0;
            if (uVar12 != 0) {
              pfVar20 = (float *)(puVar16 + 1);
              uVar15 = (ulonglong)uVar12;
              do {
                uVar9 = DAT_14c72f42c;
                local_108 = *(undefined8 *)(lVar24 + 0x10);
                fVar25 = (float)local_108;
                uVar13 = local_108 >> 0x20;
                uVar12 = param_3 - uVar14;
                if (DAT_14c72f43c < param_3 - uVar14) {
                  uVar12 = DAT_14c72f43c;
                }
                uVar14 = uVar14 + uVar12;
                *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145386437
                ;
                fVar25 = (float)FUN_145382770(100.0 - ((float)uVar14 * fVar28 *
                                                       ((float)uVar13 - fVar25) + fVar25),
                                              DAT_14c72f42c);
                *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14538644d
                ;
                fVar25 = tanf((fVar25 / (float)uVar9) * 3.1415927);
                fVar27 = fVar25 * fVar25 + 1.0;
                fVar26 = 1.0 / (fVar27 + fVar25 * 1.4142135);
                pfVar20[-2] = fVar26;
                pfVar20[-1] = fVar26 * -2.0;
                *pfVar20 = fVar26;
                pfVar20[1] = (1.0 - fVar25 * fVar25) * fVar26 * -2.0;
                pfVar20[2] = (fVar27 - fVar25 * 1.4142135) * fVar26;
                pfVar20 = pfVar20 + 5;
                uVar15 = uVar15 - 1;
                puVar23 = local_120;
              } while (uVar15 != 0);
            }
          }
          else {
            uVar8 = *(undefined8 *)((longlong)puVar23 + 0x1c);
            *puVar16 = *(undefined8 *)((longlong)puVar23 + 0x14);
            puVar16[1] = uVar8;
            *(undefined4 *)(puVar16 + 2) = *(undefined4 *)((longlong)puVar23 + 0x24);
          }
        }
        if (local_12c != 0) {
          uVar12 = param_3 - 2;
          uVar14 = param_3 - 1;
          lVar24 = 0;
          local_108 = (size_t)(param_3 * 4);
          local_e0 = 0;
          local_d8 = (ulonglong)local_12c;
          do {
            puVar19 = local_f8;
            sVar10 = local_108;
            plVar1 = *(longlong **)(param_4 + local_e8 * 8);
            pfVar20 = (float *)(puVar23[5] + lVar24);
            _Src = (void *)(*plVar1 + (ulonglong)*(ushort *)(plVar1 + 2) * local_e0 * 4);
            local_12c = uVar14;
            local_128 = uVar12;
            if (local_136 == 0) {
              uVar12 = 1;
              if (local_138 != '\0') {
                uVar12 = local_130;
              }
              *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = uVar12;
              *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4) = param_3;
              *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1453865ba;
              FUN_1453833a0(_Src,pfVar18,puVar19,pfVar20);
              uVar12 = local_128;
              uVar14 = local_12c;
            }
            else {
              *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14538653a;
              memcpy(pfVar18,_Src,sVar10);
              pfVar21 = pfStack_f0;
              if ((local_135 & 8) == 0) {
                fVar25 = pfVar20[1];
                fVar26 = pfVar20[3];
                *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4) = param_3;
                *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145386565
                ;
                AkMixer::MixChannel(pfVar21,pfVar18,fVar25 - fVar26,-(fVar28 * (fVar25 - fVar26)),
                                    *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4)
                                   );
                uVar12 = param_3 - 2;
                uVar14 = param_3 - 1;
              }
              fVar25 = pfVar18[uVar12];
              pfVar20[2] = fVar25;
              *pfVar20 = fVar25;
              fVar25 = pfVar18[uVar14];
              pfVar20[3] = fVar25;
              pfVar20[1] = fVar25;
              puVar23 = local_120;
            }
            pfVar20 = pfStack_f0;
            puVar19 = local_118;
            pfVar21 = (float *)(puVar23[6] + lVar24);
            if (local_134 == 0) {
              uVar12 = 1;
              if (bVar3) {
                uVar12 = local_130;
              }
              *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = uVar12;
              *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4) = param_3;
              *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14538664d;
              FUN_1453833a0(pfVar18,pfVar18,puVar19,pfVar21);
              uVar12 = param_3 - 2;
              uVar14 = param_3 - 1;
            }
            else {
              if ((local_137 & 8) == 0) {
                fVar25 = pfVar21[1];
                fVar26 = pfVar21[3];
                *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4) = param_3;
                *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1453865fa
                ;
                AkMixer::MixChannel(pfVar20,pfVar18,fVar25 - fVar26,-(fVar28 * (fVar25 - fVar26)),
                                    *(uint *)((longlong)auStack_148 + lVar7 + lVar6 + lVar5 + lVar4)
                                   );
              }
              fVar25 = pfVar18[uVar12];
              pfVar21[2] = fVar25;
              *pfVar21 = fVar25;
              fVar25 = pfVar18[uVar14];
              pfVar21[3] = fVar25;
              pfVar21[1] = fVar25;
              puVar23 = local_120;
            }
            lVar11 = local_e0;
            sVar10 = local_108;
            plVar1 = *(longlong **)(param_5 + local_e8 * 8);
            lVar2 = *plVar1;
            lVar17 = (ulonglong)*(ushort *)(plVar1 + 2) * local_e0;
            *(undefined8 *)((longlong)auStack_170 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145386683;
            memcpy((void *)(lVar2 + lVar17 * 4),pfVar18,sVar10);
            local_e0 = lVar11 + 1;
            lVar24 = lVar24 + 0x10;
            local_d8 = local_d8 - 1;
          } while (local_d8 != 0);
          local_d8 = 0;
          lVar24 = local_b8;
          local_128 = uVar12;
        }
        uVar22 = (ulonglong)local_130;
        if (local_138 != '\0') {
          puVar19 = (undefined8 *)((longlong)local_f8 + (ulonglong)(local_130 - 1) * 0x14);
          uVar8 = puVar19[1];
          *puVar23 = *puVar19;
          puVar23[1] = uVar8;
          *(undefined4 *)(puVar23 + 2) =
               *(undefined4 *)((longlong)local_f8 + (ulonglong)(local_130 - 1) * 0x14 + 0x10);
        }
        if (bVar3) {
          puVar19 = (undefined8 *)((longlong)local_118 + (ulonglong)(local_130 - 1) * 0x14);
          uVar8 = puVar19[1];
          *(undefined8 *)((longlong)puVar23 + 0x14) = *puVar19;
          *(undefined8 *)((longlong)puVar23 + 0x1c) = uVar8;
          *(undefined4 *)((longlong)puVar23 + 0x24) =
               *(undefined4 *)((longlong)local_118 + (ulonglong)(local_130 - 1) * 0x14 + 0x10);
        }
        *(byte *)(lVar24 + 0xd) = *(byte *)(lVar24 + 0xd) | 8;
        local_d0 = local_d0 + 2;
        *(byte *)(lVar24 + 0x19) = *(byte *)(lVar24 + 0x19) | 8;
        local_c8 = local_c8 - 1;
        puVar19 = local_f8;
      } while (local_c8 != 0);
    }
  }
  return;
}



// FUNCTION 145386780 FUN_145386780 body=508 status=ok
// SIG undefined FUN_145386780(void)

void FUN_145386780(undefined8 *param_1,longlong param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  ulonglong local_res8;
  
  local_res8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar10 = (ulonglong)param_3;
  if (*(uint *)(param_1 + 1) != 0) {
    puVar16 = (ushort *)*param_1;
    do {
      uVar11 = (ulonglong)*puVar16;
      lVar5 = *(longlong *)(*(longlong *)(param_2 + uVar11 * 8) + 0x20);
      plVar6 = *(longlong **)(param_4 + uVar11 * 8);
      uVar14 = 0;
      bVar4 = *(byte *)(plVar6 + 1);
      lVar7 = *plVar6;
      uVar15 = (uint)bVar4;
      if (bVar4 < 4) {
        if (bVar4 != 0) {
          lVar13 = 0;
          goto LAB_1453868ca;
        }
      }
      else {
        iVar17 = 2;
        lVar13 = (ulonglong)((bVar4 - 4 >> 2) + 1) << 2;
        lVar12 = 0;
        uVar14 = 0;
        do {
          lVar8 = *(longlong *)(lVar5 + 0x30);
          uVar9 = uVar14 * param_3;
          uVar14 = uVar14 + 4;
          uVar3 = *(undefined8 *)(lVar7 + -8 + (uVar9 + uVar10) * 4);
          puVar2 = (undefined8 *)(lVar12 + *(longlong *)(lVar5 + 0x28));
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          puVar2 = (undefined8 *)(lVar12 + lVar8);
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          lVar8 = *(longlong *)(lVar5 + 0x30);
          uVar3 = *(undefined8 *)(lVar7 + -8 + ((iVar17 + -1) * param_3 + uVar10) * 4);
          puVar2 = (undefined8 *)(lVar12 + 0x10 + *(longlong *)(lVar5 + 0x28));
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar8);
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          lVar8 = *(longlong *)(lVar5 + 0x30);
          uVar3 = *(undefined8 *)(lVar7 + -8 + (iVar17 * param_3 + uVar10) * 4);
          iVar1 = iVar17 + 1;
          iVar17 = iVar17 + 4;
          puVar2 = (undefined8 *)(lVar12 + 0x20 + *(longlong *)(lVar5 + 0x28));
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar8);
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          lVar8 = *(longlong *)(lVar5 + 0x30);
          uVar3 = *(undefined8 *)(lVar7 + -8 + (iVar1 * param_3 + uVar10) * 4);
          puVar2 = (undefined8 *)(lVar12 + 0x30 + *(longlong *)(lVar5 + 0x28));
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          puVar2 = (undefined8 *)(lVar12 + 0x30 + lVar8);
          *puVar2 = uVar3;
          puVar2[1] = uVar3;
          lVar12 = lVar12 + 0x40;
        } while (uVar14 < bVar4 - 3);
        if (uVar14 < uVar15) {
LAB_1453868ca:
          lVar13 = lVar13 << 4;
          do {
            lVar12 = *(longlong *)(lVar5 + 0x30);
            uVar9 = uVar14 * param_3;
            uVar14 = uVar14 + 1;
            uVar3 = *(undefined8 *)(lVar7 + -8 + (uVar9 + uVar10) * 4);
            puVar2 = (undefined8 *)(lVar13 + *(longlong *)(lVar5 + 0x28));
            *puVar2 = uVar3;
            puVar2[1] = uVar3;
            puVar2 = (undefined8 *)(lVar13 + lVar12);
            *puVar2 = uVar3;
            puVar2[1] = uVar3;
            lVar13 = lVar13 + 0x10;
          } while (uVar14 < uVar15);
        }
      }
      if (param_4 != param_5) {
        memcpy((void *)**(undefined8 **)(param_5 + uVar11 * 8),
               (void *)**(undefined8 **)(param_4 + uVar11 * 8),(ulonglong)(uVar15 * param_3 * 4));
      }
      puVar16 = puVar16 + 1;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  return;
}



// FUNCTION 145386980 FUN_145386980 body=613 status=ok
// SIG undefined FUN_145386980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145386980(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  longlong param_5)

{
  float **ppfVar1;
  byte bVar2;
  uint uVar3;
  AkBiquadCoefficients *pAVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  AkBiquadCoefficients **ppAVar12;
  float **ppfVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  AkBiquadMemories **ppAVar20;
  longlong lVar21;
  ulonglong uVar22;
  AkBiquadCoefficients *pAVar23;
  undefined4 local_res18 [2];
  longlong local_res20;
  undefined8 auStack_e0 [5];
  longlong alStack_b8 [3];
  uint auStack_a0 [6];
  AkBiquadCoefficients *local_88;
  float **local_80;
  longlong local_78;
  AkBiquadMemories **local_70;
  longlong local_68;
  AkBiquadCoefficients **local_60;
  float **local_58;
  
  uVar3 = *(uint *)(param_1 + 1);
  pAVar23 = (AkBiquadCoefficients *)(ulonglong)uVar3;
  if (uVar3 != 0) {
    uVar22 = 0;
    uVar17 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8;
    uVar14 = uVar17 + 0xf;
    if (uVar14 <= uVar17) {
      uVar14 = 0xffffffffffffff0;
    }
    auStack_e0[0] = 0x1453869dc;
    lVar6 = -(uVar14 & 0xfffffffffffffff0);
    local_58 = (float **)((longlong)&local_88 + lVar6);
    uVar14 = uVar17 + 0xf;
    if (uVar14 <= uVar17) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar6) = 0x1453869fd;
    lVar7 = -(uVar14 & 0xfffffffffffffff0);
    local_60 = (AkBiquadCoefficients **)((longlong)&local_88 + lVar7 + lVar6);
    uVar14 = uVar17 + 0xf;
    if (uVar14 <= uVar17) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar7 + lVar6) = 0x145386a1e;
    lVar8 = -(uVar14 & 0xfffffffffffffff0);
    uVar14 = uVar17 + 0xf;
    lVar21 = (longlong)&local_88 + lVar8 + lVar7 + lVar6;
    local_68 = lVar21;
    if (uVar14 <= uVar17) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar8 + lVar7 + lVar6) = 0x145386a3f;
    lVar9 = -(uVar14 & 0xfffffffffffffff0);
    uVar14 = uVar17 + 0xf;
    ppAVar20 = (AkBiquadMemories **)((longlong)&local_88 + lVar9 + lVar8 + lVar7 + lVar6);
    local_70 = ppAVar20;
    if (uVar14 <= uVar17) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x145386a60;
    lVar10 = -(uVar14 & 0xfffffffffffffff0);
    uVar14 = uVar17 + 0xf;
    lVar18 = (longlong)&local_88 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
    local_78 = lVar18;
    if (uVar14 <= uVar17) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_e0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x145386a81;
    ppfVar13 = local_58;
    ppAVar12 = local_60;
    lVar11 = -(uVar14 & 0xfffffffffffffff0);
    ppfVar1 = (float **)((longlong)&local_88 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
    local_80 = ppfVar1;
    if (uVar3 != 0) {
      puVar16 = (ushort *)*param_1;
      do {
        lVar21 = (ulonglong)*puVar16 * 8;
        pAVar4 = *(AkBiquadCoefficients **)(*(longlong *)(lVar21 + param_2) + 0x20);
        bVar2 = *(byte *)(*(longlong *)(param_4 + lVar21) + 8);
        if (bVar2 != 0) {
          lVar18 = 0;
          lVar19 = 0;
          uVar17 = (ulonglong)bVar2;
          uVar14 = uVar22;
          do {
            plVar5 = *(longlong **)(param_4 + lVar21);
            uVar22 = (ulonglong)((int)uVar14 + 1);
            local_58[uVar14] = (float *)(*plVar5 + (ulonglong)*(ushort *)(plVar5 + 2) * lVar18 * 4);
            local_60[uVar14] = pAVar4;
            *(AkBiquadCoefficients **)(uVar14 * 8 + local_68) = pAVar4 + 0x14;
            local_70[uVar14] = (AkBiquadMemories *)(*(longlong *)(pAVar4 + 0x28) + lVar19);
            lVar15 = *(longlong *)(pAVar4 + 0x30) + lVar19;
            lVar19 = lVar19 + 0x10;
            *(longlong *)(uVar14 * 8 + local_78) = lVar15;
            lVar15 = (ulonglong)*(ushort *)(*(longlong **)(param_5 + lVar21) + 2) * lVar18;
            lVar18 = lVar18 + 1;
            ppfVar1[uVar14] = (float *)(**(longlong **)(param_5 + lVar21) + lVar15 * 4);
            uVar17 = uVar17 - 1;
            uVar14 = uVar22;
          } while (uVar17 != 0);
        }
        puVar16 = puVar16 + 1;
        pAVar23 = pAVar23 + -1;
        local_88 = pAVar23;
        lVar18 = local_78;
        ppAVar20 = local_70;
        lVar21 = local_68;
      } while (pAVar23 != (AkBiquadCoefficients *)0x0);
    }
    *(int *)((longlong)auStack_a0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) =
         (int)uVar22;
    *(undefined4 *)((longlong)auStack_a0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 1;
    *(undefined4 **)((longlong)alStack_b8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10)
         = local_res18;
    *(longlong *)((longlong)alStack_b8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) =
         lVar18;
    *(longlong *)((longlong)alStack_b8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar21;
    *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         0x145386bd4;
    local_res18[0] = param_3;
    local_res20 = param_4;
    AkMixer::ProcessPairedInterpBiquadFilter
              (ppfVar13,ppfVar1,ppAVar12,ppAVar20,
               *(AkBiquadCoefficients ***)
                ((longlong)alStack_b8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6),
               *(AkBiquadMemories ***)
                ((longlong)alStack_b8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8),
               *(uint **)((longlong)alStack_b8 +
                         lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 0x10),
               *(uint *)((longlong)auStack_a0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6),
               *(uint *)((longlong)auStack_a0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8)
              );
  }
  return;
}



// FUNCTION 145386bf0 FUN_145386bf0 body=1228 status=ok
// SIG undefined FUN_145386bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145386bf0(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  AkBiquadMemories **ppAVar2;
  float **ppfVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  AkBiquadCoefficients *pAVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong lVar10;
  float **ppfVar11;
  uint uVar12;
  ulonglong uVar13;
  AkBiquadMemories *pAVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ushort *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  AkBiquadCoefficients **ppAVar24;
  undefined4 local_res18 [2];
  undefined8 auStack_b0 [5];
  longlong lStack_88;
  uint auStack_80 [6];
  uint local_68;
  uint local_64;
  float **local_60;
  ushort *local_58;
  ulonglong local_50;
  ushort *local_48;
  AkBiquadCoefficients **local_40;
  
  uVar12 = *(uint *)((longlong)param_1 + 0xc);
  local_64 = uVar12;
  if (uVar12 != 0) {
    uVar23 = 0;
    uVar19 = (ulonglong)*(uint *)(param_1 + 2) * 8;
    uVar13 = uVar19 + 0xf;
    if (uVar13 <= uVar19) {
      uVar13 = 0xffffffffffffff0;
    }
    auStack_b0[0] = 0x145386c57;
    lVar10 = -(uVar13 & 0xfffffffffffffff0);
    local_60 = (float **)((longlong)&local_68 + lVar10);
    uVar13 = uVar19 + 0xf;
    if (uVar13 <= uVar19) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar10) = 0x145386c78;
    lVar17 = -(uVar13 & 0xfffffffffffffff0);
    uVar13 = uVar19 + 0xf;
    ppAVar24 = (AkBiquadCoefficients **)((longlong)&local_68 + lVar17 + lVar10);
    local_40 = ppAVar24;
    if (uVar13 <= uVar19) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar17 + lVar10) = 0x145386c99;
    lVar21 = -(uVar13 & 0xfffffffffffffff0);
    uVar13 = uVar19 + 0xf;
    ppAVar2 = (AkBiquadMemories **)((longlong)&local_68 + lVar21 + lVar17 + lVar10);
    if (uVar13 <= uVar19) {
      uVar13 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar21 + lVar17 + lVar10) = 0x145386cb6;
    local_68 = *(uint *)(param_1 + 1);
    lVar1 = -(uVar13 & 0xfffffffffffffff0);
    ppfVar3 = (float **)((longlong)&local_68 + lVar1 + lVar21 + lVar17 + lVar10);
    if (local_68 != 0) {
      local_58 = (ushort *)*param_1;
      local_50 = (ulonglong)local_68;
      do {
        ppfVar11 = local_60;
        uVar13 = (ulonglong)*local_58;
        pAVar7 = *(AkBiquadCoefficients **)(*(longlong *)(param_2 + uVar13 * 8) + 0x20);
        bVar6 = *(byte *)(*(longlong *)(param_4 + uVar13 * 8) + 8);
        if (bVar6 != 0) {
          lVar20 = 0;
          lVar22 = 0;
          uVar19 = (ulonglong)bVar6;
          do {
            plVar8 = *(longlong **)(param_4 + uVar13 * 8);
            ppfVar11[uVar23] = (float *)(*plVar8 + (ulonglong)*(ushort *)(plVar8 + 2) * lVar20 * 4);
            ppAVar24[uVar23] = pAVar7;
            pAVar14 = (AkBiquadMemories *)(*(longlong *)(pAVar7 + 0x28) + lVar22);
            lVar22 = lVar22 + 0x10;
            ppAVar2[uVar23] = pAVar14;
            plVar8 = *(longlong **)(param_5 + uVar13 * 8);
            lVar15 = (ulonglong)*(ushort *)(plVar8 + 2) * lVar20;
            lVar20 = lVar20 + 1;
            ppfVar3[uVar23] = (float *)(*plVar8 + lVar15 * 4);
            uVar23 = (ulonglong)((int)uVar23 + 1);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        local_58 = local_58 + 1;
        local_50 = local_50 - 1;
        uVar12 = local_64;
      } while (local_50 != 0);
    }
    uVar13 = (ulonglong)local_68;
    if (local_68 < uVar12) {
      local_50 = (ulonglong)(uVar12 - local_68);
      local_48 = (ushort *)(*param_1 + uVar13 * 2);
      do {
        ppAVar24 = local_40;
        uVar13 = (ulonglong)*local_48;
        lVar20 = *(longlong *)(*(longlong *)(param_2 + uVar13 * 8) + 0x20);
        bVar6 = *(byte *)(*(longlong *)(param_4 + uVar13 * 8) + 8);
        if (bVar6 != 0) {
          lVar22 = 0;
          uVar19 = (ulonglong)bVar6;
          lVar15 = 0;
          do {
            plVar8 = *(longlong **)(param_4 + uVar13 * 8);
            local_60[uVar23] = (float *)(*plVar8 + (ulonglong)*(ushort *)(plVar8 + 2) * lVar22 * 4);
            ppAVar24[uVar23] = (AkBiquadCoefficients *)(lVar20 + 0x14);
            pAVar14 = (AkBiquadMemories *)(*(longlong *)(lVar20 + 0x30) + lVar15);
            lVar15 = lVar15 + 0x10;
            ppAVar2[uVar23] = pAVar14;
            plVar8 = *(longlong **)(param_5 + uVar13 * 8);
            lVar16 = (ulonglong)*(ushort *)(plVar8 + 2) * lVar22;
            lVar22 = lVar22 + 1;
            ppfVar3[uVar23] = (float *)(*plVar8 + lVar16 * 4);
            uVar23 = (ulonglong)((int)uVar23 + 1);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        local_48 = local_48 + 1;
        local_50 = local_50 - 1;
      } while (local_50 != 0);
      uVar13 = (ulonglong)local_68;
      ppAVar24 = local_40;
    }
    ppfVar11 = local_60;
    *(int *)((longlong)auStack_80 + lVar1 + lVar21 + lVar17 + lVar10 + 8) = (int)uVar23;
    *(undefined4 *)((longlong)auStack_80 + lVar1 + lVar21 + lVar17 + lVar10) = 1;
    *(undefined4 **)((longlong)&lStack_88 + lVar1 + lVar21 + lVar17 + lVar10) = local_res18;
    *(undefined8 *)((longlong)auStack_b0 + lVar1 + lVar21 + lVar17 + lVar10) = 0x145386e84;
    local_res18[0] = param_3;
    AkMixer::ProcessInterpBiquadFilter
              (ppfVar11,ppfVar3,ppAVar24,ppAVar2,
               *(uint **)((longlong)&lStack_88 + lVar1 + lVar21 + lVar17 + lVar10),
               *(uint *)((longlong)auStack_80 + lVar1 + lVar21 + lVar17 + lVar10),
               *(uint *)((longlong)auStack_80 + lVar1 + lVar21 + lVar17 + lVar10 + 8));
    if ((int)uVar13 != 0) {
      puVar18 = (ushort *)*param_1;
      do {
        uVar12 = 0;
        pbVar9 = *(byte **)(param_2 + (ulonglong)*puVar18 * 8);
        bVar6 = *pbVar9;
        lVar10 = *(longlong *)(pbVar9 + 0x20);
        if (bVar6 < 4) {
          if (bVar6 != 0) {
            lVar17 = 0;
            goto LAB_145386f5c;
          }
        }
        else {
          uVar12 = (bVar6 - 4 >> 2) + 1;
          uVar23 = (ulonglong)uVar12;
          lVar17 = (ulonglong)uVar12 * 4;
          uVar12 = uVar12 * 4;
          lVar21 = 0;
          do {
            uVar5 = *(undefined8 *)(lVar21 + *(longlong *)(lVar10 + 0x28));
            puVar4 = (undefined8 *)(lVar21 + *(longlong *)(lVar10 + 0x30));
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar5 = *(undefined8 *)(lVar21 + 0x10 + *(longlong *)(lVar10 + 0x28));
            puVar4 = (undefined8 *)(lVar21 + 0x10 + *(longlong *)(lVar10 + 0x30));
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar5 = *(undefined8 *)(lVar21 + 0x20 + *(longlong *)(lVar10 + 0x28));
            puVar4 = (undefined8 *)(lVar21 + 0x20 + *(longlong *)(lVar10 + 0x30));
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar5 = *(undefined8 *)(lVar21 + 0x30 + *(longlong *)(lVar10 + 0x28));
            puVar4 = (undefined8 *)(lVar21 + 0x30 + *(longlong *)(lVar10 + 0x30));
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar23 = uVar23 - 1;
            lVar21 = lVar21 + 0x40;
          } while (uVar23 != 0);
          if (uVar12 < bVar6) {
LAB_145386f5c:
            uVar23 = (ulonglong)(bVar6 - uVar12);
            lVar17 = lVar17 << 4;
            do {
              uVar5 = *(undefined8 *)(lVar17 + *(longlong *)(lVar10 + 0x28));
              puVar4 = (undefined8 *)(lVar17 + *(longlong *)(lVar10 + 0x30));
              *puVar4 = uVar5;
              puVar4[1] = uVar5;
              uVar23 = uVar23 - 1;
              lVar17 = lVar17 + 0x10;
            } while (uVar23 != 0);
          }
        }
        puVar18 = puVar18 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uVar12 = *(uint *)(param_1 + 1);
    if (uVar12 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar13 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) - uVar12);
      puVar18 = (ushort *)(*param_1 + (ulonglong)uVar12 * 2);
      do {
        uVar12 = 0;
        pbVar9 = *(byte **)(param_2 + (ulonglong)*puVar18 * 8);
        bVar6 = *pbVar9;
        lVar10 = *(longlong *)(pbVar9 + 0x20);
        if (bVar6 < 4) {
          if (bVar6 != 0) {
            lVar17 = 0;
            goto LAB_14538706c;
          }
        }
        else {
          uVar12 = (bVar6 - 4 >> 2) + 1;
          uVar23 = (ulonglong)uVar12;
          lVar17 = (ulonglong)uVar12 * 4;
          uVar12 = uVar12 * 4;
          lVar21 = 0;
          do {
            lVar1 = lVar21 + 0x40;
            uVar5 = *(undefined8 *)(lVar21 + 8 + *(longlong *)(lVar10 + 0x30));
            puVar4 = (undefined8 *)(lVar21 + *(longlong *)(lVar10 + 0x28));
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar5 = *(undefined8 *)(lVar21 + 0x18 + *(longlong *)(lVar10 + 0x30));
            puVar4 = (undefined8 *)(lVar21 + 0x10 + *(longlong *)(lVar10 + 0x28));
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar5 = *(undefined8 *)(lVar21 + 0x28 + *(longlong *)(lVar10 + 0x30));
            puVar4 = (undefined8 *)(*(longlong *)(lVar10 + 0x28) + -0x20 + lVar1);
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar5 = *(undefined8 *)(lVar21 + 0x38 + *(longlong *)(lVar10 + 0x30));
            puVar4 = (undefined8 *)(*(longlong *)(lVar10 + 0x28) + -0x10 + lVar1);
            *puVar4 = uVar5;
            puVar4[1] = uVar5;
            uVar23 = uVar23 - 1;
            lVar21 = lVar1;
          } while (uVar23 != 0);
          if (uVar12 < bVar6) {
LAB_14538706c:
            uVar23 = (ulonglong)(bVar6 - uVar12);
            lVar17 = lVar17 << 4;
            do {
              uVar5 = *(undefined8 *)(lVar17 + 8 + *(longlong *)(lVar10 + 0x30));
              puVar4 = (undefined8 *)(lVar17 + *(longlong *)(lVar10 + 0x28));
              *puVar4 = uVar5;
              puVar4[1] = uVar5;
              uVar23 = uVar23 - 1;
              lVar17 = lVar17 + 0x10;
            } while (uVar23 != 0);
          }
        }
        puVar18 = puVar18 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}



// FUNCTION 1453870c0 FUN_1453870c0 body=1160 status=ok
// SIG undefined FUN_1453870c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453870c0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  ulonglong uVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  AkBiquadMemories *pAVar14;
  AkBiquadMemories **ppAVar15;
  AkBiquadCoefficients **ppAVar16;
  float **ppfVar17;
  float **ppfVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  AkBiquadMemories *pAVar26;
  ulonglong uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong local_res8;
  undefined8 auStack_140 [5];
  longlong alStack_118 [3];
  uint auStack_100 [6];
  AkBiquadMemories *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ushort *local_d0;
  AkBiquadMemories *local_c8;
  uint *local_c0;
  longlong local_b8;
  longlong local_b0;
  AkBiquadMemories **local_a8;
  AkBiquadCoefficients **local_a0;
  float **local_98;
  float **local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 *local_78;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uVar28 = *(uint *)(param_1 + 1);
  if (uVar28 != 0) {
    uVar24 = (uint)DAT_14c72f438;
    uVar23 = (ulonglong)uVar24;
    uVar27 = uVar23 * 4 + 0xf;
    if (uVar27 <= uVar23 * 4) {
      uVar27 = 0xffffffffffffff0;
    }
    auStack_140[0] = 0x145387139;
    uVar31 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
    lVar4 = -(uVar27 & 0xfffffffffffffff0);
    local_88 = uVar31;
    uVar1 = uVar31 * 8;
    local_c0 = (uint *)((longlong)&local_e8 + lVar4);
    uVar27 = uVar1 + 0xf;
    if (uVar27 <= uVar1) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar4) = 0x14538716a;
    lVar5 = -(uVar27 & 0xfffffffffffffff0);
    local_90 = (float **)((longlong)&local_e8 + lVar5 + lVar4);
    uVar27 = uVar1 + 0xf;
    if (uVar27 <= uVar1) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar5 + lVar4) = 0x14538718b;
    lVar6 = -(uVar27 & 0xfffffffffffffff0);
    local_a8 = (AkBiquadMemories **)((longlong)&local_e8 + lVar6 + lVar5 + lVar4);
    uVar27 = uVar1 + 0xf;
    if (uVar27 <= uVar1) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar6 + lVar5 + lVar4) = 0x1453871ac;
    lVar7 = -(uVar27 & 0xfffffffffffffff0);
    local_b8 = (longlong)&local_e8 + lVar7 + lVar6 + lVar5 + lVar4;
    uVar22 = uVar28 * uVar23 * 0x14;
    uVar27 = uVar22 + 0xf;
    if (uVar27 <= uVar22) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1453871dc;
    lVar8 = -(uVar27 & 0xfffffffffffffff0);
    uVar27 = uVar22 + 0xf;
    lVar21 = (longlong)&local_e8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4;
    local_e0 = lVar21;
    if (uVar27 <= uVar22) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x1453871fd;
    lVar9 = -(uVar27 & 0xfffffffffffffff0);
    pAVar26 = (AkBiquadMemories *)
              ((longlong)&local_e8 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
    uVar23 = uVar31 * uVar23 * 8;
    local_e8 = pAVar26;
    uVar27 = uVar23 + 0xf;
    if (uVar27 <= uVar23) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
         0x145387229;
    lVar10 = -(uVar27 & 0xfffffffffffffff0);
    local_a0 = (AkBiquadCoefficients **)
               ((longlong)&local_e8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
    uVar27 = uVar23 + 0xf;
    if (uVar27 <= uVar23) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_140 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4)
         = 0x14538724a;
    lVar11 = -(uVar27 & 0xfffffffffffffff0);
    local_b0 = (longlong)&local_e8 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4
    ;
    uVar27 = uVar1 + 0xf;
    if (uVar27 <= uVar1) {
      uVar27 = 0xffffffffffffff0;
    }
    *(undefined8 *)
     ((longlong)auStack_140 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
         0x14538726b;
    lVar12 = -(uVar27 & 0xfffffffffffffff0);
    uVar30 = 0;
    uVar32 = 0;
    local_98 = (float **)
               ((longlong)&local_e8 +
               lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
    if (uVar24 != 0) {
      local_68 = *param_1;
      uStack_60 = (undefined4)param_1[1];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
      puVar29 = local_c0;
      do {
        uVar28 = param_3 - uVar30;
        if (DAT_14c72f43c < param_3 - uVar30) {
          uVar28 = DAT_14c72f43c;
        }
        uVar27 = (ulonglong)((int)param_1[1] * uVar32);
        uVar30 = uVar30 + uVar28;
        *(AkBiquadMemories **)
         ((longlong)alStack_118 +
         lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) =
             pAVar26 + uVar27 * 0x14;
        *(undefined8 *)
         ((longlong)auStack_140 +
         lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x145387300;
        FUN_145383130(&local_68,param_2,(float)uVar30 * (1.0 / (float)param_3),
                      lVar21 + uVar27 * 0x14);
        uVar32 = uVar32 + 1;
        *puVar29 = uVar28;
        puVar29 = puVar29 + 1;
        pAVar26 = local_e8;
        lVar21 = local_e0;
      } while (uVar32 < uVar24);
      uVar28 = *(uint *)(param_1 + 1);
    }
    ppfVar18 = local_90;
    ppfVar17 = local_98;
    ppAVar16 = local_a0;
    ppAVar15 = local_a8;
    puVar29 = local_c0;
    pAVar14 = local_e8;
    uVar32 = 0;
    uVar30 = 0;
    uVar27 = (ulonglong)((uVar24 - 1) * uVar28);
    local_c8 = pAVar26 + uVar27 * 0x14;
    if (uVar28 != 0) {
      local_d0 = (ushort *)*param_1;
      local_68 = (lVar21 + uVar27 * 0x14) - (longlong)local_c8;
      do {
        local_80 = (ulonglong)*local_d0;
        local_78 = *(undefined8 **)(*(longlong *)(param_2 + local_80 * 8) + 0x20);
        bVar2 = *(byte *)(*(longlong *)(param_4 + local_80 * 8) + 8);
        if (bVar2 != 0) {
          local_res8 = 0;
          local_e8 = (AkBiquadMemories *)0x0;
          local_d8 = (ulonglong)bVar2;
          do {
            plVar3 = *(longlong **)(param_4 + local_80 * 8);
            uVar25 = 0;
            uVar27 = (ulonglong)uVar32;
            local_90[uVar27] =
                 (float *)(*plVar3 + (ulonglong)*(ushort *)(plVar3 + 2) * local_res8 * 4);
            local_a8[uVar27] = local_e8 + local_78[5];
            *(AkBiquadMemories **)(local_b8 + uVar27 * 8) = local_e8 + local_78[6];
            if (uVar24 != 0) {
              do {
                iVar19 = uVar28 * uVar25;
                iVar20 = (int)local_88 * uVar25;
                uVar25 = uVar25 + 1;
                uVar27 = (ulonglong)(iVar19 + uVar30);
                uVar23 = (ulonglong)(iVar20 + uVar32);
                local_a0[uVar23] = (AkBiquadCoefficients *)(local_e0 + uVar27 * 0x14);
                *(AkBiquadMemories **)(local_b0 + uVar23 * 8) = pAVar14 + uVar27 * 0x14;
              } while (uVar25 < uVar24);
            }
            uVar27 = (ulonglong)uVar32;
            uVar32 = uVar32 + 1;
            local_e8 = local_e8 + 0x10;
            plVar3 = *(longlong **)(param_5 + local_80 * 8);
            lVar21 = (ulonglong)*(ushort *)(plVar3 + 2) * local_res8;
            local_res8 = local_res8 + 1;
            local_d8 = local_d8 - 1;
            local_98[uVar27] = (float *)(*plVar3 + lVar21 * 4);
          } while (local_d8 != 0);
        }
        uVar13 = *(undefined8 *)(local_c8 + local_68 + 8);
        uVar30 = uVar30 + 1;
        *local_78 = *(undefined8 *)(local_c8 + local_68);
        local_78[1] = uVar13;
        *(undefined4 *)(local_78 + 2) = *(undefined4 *)(local_c8 + local_68 + 0x10);
        uVar13 = *(undefined8 *)(local_c8 + 8);
        *(undefined8 *)((longlong)local_78 + 0x14) = *(undefined8 *)local_c8;
        *(undefined8 *)((longlong)local_78 + 0x1c) = uVar13;
        pAVar26 = local_c8 + 0x10;
        local_c8 = local_c8 + 0x14;
        *(undefined4 *)((longlong)local_78 + 0x24) = *(undefined4 *)pAVar26;
        local_d0 = local_d0 + 1;
      } while (uVar30 < uVar28);
    }
    *(uint *)((longlong)auStack_100 +
             lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = uVar32;
    *(uint *)((longlong)auStack_100 +
             lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = uVar24;
    *(uint **)((longlong)alStack_118 +
              lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + 0x10) =
         puVar29;
    *(longlong *)
     ((longlong)alStack_118 +
     lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + 8) = local_b8;
    *(longlong *)
     ((longlong)alStack_118 +
     lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = local_b0;
    *(undefined8 *)
     ((longlong)auStack_140 +
     lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x14538752d;
    AkMixer::ProcessPairedInterpBiquadFilter
              (ppfVar18,ppfVar17,ppAVar16,ppAVar15,
               *(AkBiquadCoefficients ***)
                ((longlong)alStack_118 +
                lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4),
               *(AkBiquadMemories ***)
                ((longlong)alStack_118 +
                lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + 8),
               *(uint **)((longlong)alStack_118 +
                         lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 +
                         0x10),
               *(uint *)((longlong)auStack_100 +
                        lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4),
               *(uint *)((longlong)auStack_100 +
                        lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + 8
                        ));
  }
  return;
}



// FUNCTION 145387550 FUN_145387550 body=1809 status=ok
// SIG undefined FUN_145387550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145387550(longlong *param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5
                  )

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  AkBiquadMemories **ppAVar14;
  float **ppfVar15;
  float **ppfVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  AkBiquadCoefficients **ppAVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ushort *puVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  uint uVar37;
  ulonglong uVar38;
  uint *puVar39;
  AkBiquadCoefficients **ppAVar40;
  undefined8 auStack_110 [5];
  longlong lStack_e8;
  uint auStack_e0 [6];
  AkBiquadMemories *local_c8;
  ushort *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  AkBiquadCoefficients **local_a8;
  AkBiquadMemories **local_a0;
  float **local_98;
  float **local_90;
  uint *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  
  uVar25 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar25 != 0) {
    uVar27 = (uint)DAT_14c72f438;
    uVar19 = (ulonglong)uVar27;
    uVar28 = 0;
    local_b8 = local_b8 & 0xffffffff00000000;
    uVar33 = uVar19 * 4 + 0xf;
    if (uVar33 <= uVar19 * 4) {
      uVar33 = 0xffffffffffffff0;
    }
    auStack_110[0] = 0x1453875c8;
    uVar37 = *(uint *)(param_1 + 2);
    uVar38 = (ulonglong)uVar37;
    lVar22 = -(uVar33 & 0xfffffffffffffff0);
    local_b0 = uVar38;
    uVar2 = uVar38 * 8;
    local_88 = (uint *)((longlong)&local_c8 + lVar22);
    uVar33 = uVar2 + 0xf;
    if (uVar33 <= uVar2) {
      uVar33 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar22) = 0x1453875f9;
    lVar23 = -(uVar33 & 0xfffffffffffffff0);
    local_90 = (float **)((longlong)&local_c8 + lVar23 + lVar22);
    uVar33 = uVar2 + 0xf;
    if (uVar33 <= uVar2) {
      uVar33 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar23 + lVar22) = 0x14538761a;
    lVar31 = -(uVar33 & 0xfffffffffffffff0);
    local_a0 = (AkBiquadMemories **)((longlong)&local_c8 + lVar31 + lVar23 + lVar22);
    uVar20 = uVar25 * uVar19 * 0x14;
    uVar33 = uVar20 + 0xf;
    if (uVar33 <= uVar20) {
      uVar33 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar31 + lVar23 + lVar22) = 0x14538764a;
    lVar1 = -(uVar33 & 0xfffffffffffffff0);
    lVar13 = lVar1 + lVar31 + lVar23 + lVar22 + -200;
    uVar19 = uVar38 * uVar19 * 8;
    uVar33 = uVar19 + 0xf;
    if (uVar33 <= uVar19) {
      uVar33 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar1 + lVar31 + lVar23 + lVar22) = 0x145387675;
    lVar8 = -(uVar33 & 0xfffffffffffffff0);
    uVar33 = uVar2 + 0xf;
    ppAVar40 = (AkBiquadCoefficients **)
               ((longlong)&local_c8 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22);
    local_a8 = ppAVar40;
    if (uVar33 <= uVar2) {
      uVar33 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_110 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22) = 0x14538769d;
    lVar9 = -(uVar33 & 0xfffffffffffffff0);
    local_98 = (float **)((longlong)&local_c8 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22);
    if (uVar27 != 0) {
      uVar37 = 0;
      puVar39 = local_88;
      do {
        local_78 = (undefined4)*param_1;
        uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_70 = (undefined4)param_1[1];
        uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
        local_68 = param_1[2];
        uVar32 = param_3 - uVar28;
        if (DAT_14c72f43c < param_3 - uVar28) {
          uVar32 = DAT_14c72f43c;
        }
        uVar28 = uVar28 + uVar32;
        *(undefined8 *)((longlong)auStack_110 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22) =
             0x145387724;
        FUN_145382ec0(&local_78,param_2,(float)uVar28 * (1.0 / (float)param_3),
                      (longlong)&local_c8 + (ulonglong)(uVar25 * uVar37) * 0x14 + lVar13 + 200);
        uVar37 = uVar37 + 1;
        *puVar39 = uVar32;
        puVar39 = puVar39 + 1;
      } while (uVar37 < uVar27);
      uVar37 = (uint)local_b0;
      ppAVar40 = local_a8;
      uVar28 = (uint)local_b8;
    }
    local_c8._0_4_ = *(uint *)(param_1 + 1);
    uVar33 = (ulonglong)(uint)local_c8;
    uVar32 = 0;
    if ((uint)local_c8 != 0) {
      local_c0 = (ushort *)*param_1;
      do {
        ppAVar24 = (AkBiquadCoefficients **)(ulonglong)*local_c0;
        local_a8 = ppAVar24;
        local_b0 = *(ulonglong *)(*(longlong *)(param_2 + (longlong)ppAVar24 * 8) + 0x20);
        bVar4 = *(byte *)(*(longlong *)(param_4 + (longlong)ppAVar24 * 8) + 8);
        if (bVar4 != 0) {
          lVar34 = 0;
          lVar26 = 0;
          uVar29 = uVar28;
          local_b8 = (ulonglong)bVar4;
          do {
            plVar5 = *(longlong **)(param_4 + (longlong)ppAVar24 * 8);
            local_90[uVar29] = (float *)(*plVar5 + (ulonglong)*(ushort *)(plVar5 + 2) * lVar34 * 4);
            uVar28 = 0;
            local_a0[uVar29] = (AkBiquadMemories *)(*(longlong *)(local_b0 + 0x28) + lVar26);
            if (uVar27 != 0) {
              do {
                iVar17 = uVar28 * uVar25;
                iVar18 = uVar28 * uVar37;
                uVar28 = uVar28 + 1;
                ppAVar40[iVar18 + uVar29] =
                     (AkBiquadCoefficients *)
                     ((longlong)&local_c8 + (ulonglong)(iVar17 + uVar32) * 0x14 + lVar13 + 200);
                ppAVar24 = local_a8;
              } while (uVar28 < uVar27);
            }
            uVar28 = uVar29 + 1;
            lVar26 = lVar26 + 0x10;
            plVar5 = *(longlong **)(param_5 + (longlong)ppAVar24 * 8);
            lVar21 = (ulonglong)*(ushort *)(plVar5 + 2) * lVar34;
            lVar34 = lVar34 + 1;
            local_b8 = local_b8 - 1;
            local_98[uVar29] = (float *)(*plVar5 + lVar21 * 4);
            uVar29 = uVar28;
          } while (local_b8 != 0);
          uVar33 = (ulonglong)(uint)local_c8;
        }
        uVar32 = uVar32 + 1;
        local_c0 = local_c0 + 1;
      } while (uVar32 < (uint)uVar33);
    }
    if ((uint)uVar33 < uVar25) {
      local_c0 = (ushort *)(*param_1 + uVar33 * 2);
      do {
        ppAVar24 = (AkBiquadCoefficients **)(ulonglong)*local_c0;
        local_a8 = ppAVar24;
        local_b0 = *(ulonglong *)(*(longlong *)(param_2 + (longlong)ppAVar24 * 8) + 0x20);
        bVar4 = *(byte *)(*(longlong *)(param_4 + (longlong)ppAVar24 * 8) + 8);
        if (bVar4 != 0) {
          lVar34 = 0;
          lVar26 = 0;
          uVar32 = uVar28;
          local_b8 = (ulonglong)bVar4;
          do {
            plVar5 = *(longlong **)(param_4 + (longlong)ppAVar24 * 8);
            local_90[uVar32] = (float *)(*plVar5 + (ulonglong)*(ushort *)(plVar5 + 2) * lVar34 * 4);
            uVar28 = 0;
            local_a0[uVar32] = (AkBiquadMemories *)(*(longlong *)(local_b0 + 0x30) + lVar26);
            if (uVar27 != 0) {
              do {
                iVar17 = uVar28 * uVar25;
                iVar18 = uVar28 * uVar37;
                uVar28 = uVar28 + 1;
                ppAVar40[iVar18 + uVar32] =
                     (AkBiquadCoefficients *)
                     ((longlong)&local_c8 +
                     (ulonglong)(uint)(iVar17 + (int)uVar33) * 0x14 + lVar13 + 200);
                ppAVar24 = local_a8;
              } while (uVar28 < uVar27);
            }
            uVar28 = uVar32 + 1;
            lVar26 = lVar26 + 0x10;
            plVar5 = *(longlong **)(param_5 + (longlong)ppAVar24 * 8);
            lVar21 = (ulonglong)*(ushort *)(plVar5 + 2) * lVar34;
            lVar34 = lVar34 + 1;
            local_b8 = local_b8 - 1;
            local_98[uVar32] = (float *)(*plVar5 + lVar21 * 4);
            uVar32 = uVar28;
          } while (local_b8 != 0);
        }
        uVar32 = (int)uVar33 + 1;
        uVar33 = (ulonglong)uVar32;
        local_c0 = local_c0 + 1;
      } while (uVar32 < uVar25);
      uVar33 = (ulonglong)(uint)local_c8;
    }
    puVar39 = local_88;
    ppfVar16 = local_90;
    ppfVar15 = local_98;
    ppAVar14 = local_a0;
    *(uint *)((longlong)auStack_e0 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22 + 8) = uVar28;
    *(uint *)((longlong)auStack_e0 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22) = uVar27;
    *(uint **)((longlong)&lStack_e8 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22) = puVar39;
    *(undefined8 *)((longlong)auStack_110 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22) =
         0x1453879dd;
    AkMixer::ProcessInterpBiquadFilter
              (ppfVar16,ppfVar15,ppAVar40,ppAVar14,
               *(uint **)((longlong)&lStack_e8 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22),
               *(uint *)((longlong)auStack_e0 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22),
               *(uint *)((longlong)auStack_e0 + lVar9 + lVar8 + lVar1 + lVar31 + lVar23 + lVar22 + 8
                        ));
    puVar36 = (undefined8 *)
              ((longlong)&local_c8 + (ulonglong)((uVar27 - 1) * uVar25) * 0x14 + lVar13 + 200);
    if ((int)uVar33 != 0) {
      puVar30 = (ushort *)*param_1;
      puVar35 = puVar36;
      do {
        uVar28 = 0;
        uVar12 = puVar35[1];
        pbVar6 = *(byte **)(param_2 + (ulonglong)*puVar30 * 8);
        bVar4 = *pbVar6;
        puVar7 = *(undefined8 **)(pbVar6 + 0x20);
        *puVar7 = *puVar35;
        puVar7[1] = uVar12;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar35 + 2);
        if (bVar4 < 4) {
          if (bVar4 != 0) {
            lVar22 = 0;
            goto LAB_145387adc;
          }
        }
        else {
          uVar27 = (bVar4 - 4 >> 2) + 1;
          uVar19 = (ulonglong)uVar27;
          uVar28 = uVar27 * 4;
          lVar22 = (ulonglong)uVar27 * 4;
          lVar23 = 0;
          do {
            uVar10 = *(undefined4 *)(lVar23 + puVar7[5]);
            uVar11 = ((undefined4 *)(lVar23 + puVar7[5]))[1];
            puVar3 = (undefined4 *)(lVar23 + puVar7[6]);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar3 = (undefined4 *)(lVar23 + 0x10 + puVar7[5]);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(lVar23 + 0x10 + puVar7[6]);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar3 = (undefined4 *)(lVar23 + 0x20 + puVar7[5]);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(lVar23 + 0x20 + puVar7[6]);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar3 = (undefined4 *)(lVar23 + 0x30 + puVar7[5]);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(lVar23 + 0x30 + puVar7[6]);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            uVar19 = uVar19 - 1;
            lVar23 = lVar23 + 0x40;
          } while (uVar19 != 0);
          if (uVar28 < bVar4) {
LAB_145387adc:
            uVar19 = (ulonglong)(bVar4 - uVar28);
            lVar22 = lVar22 << 4;
            do {
              uVar10 = *(undefined4 *)(lVar22 + puVar7[5]);
              uVar11 = ((undefined4 *)(lVar22 + puVar7[5]))[1];
              puVar3 = (undefined4 *)(lVar22 + puVar7[6]);
              *puVar3 = uVar10;
              puVar3[1] = uVar11;
              puVar3[2] = uVar10;
              puVar3[3] = uVar11;
              uVar19 = uVar19 - 1;
              lVar22 = lVar22 + 0x10;
            } while (uVar19 != 0);
          }
        }
        puVar30 = puVar30 + 1;
        puVar35 = (undefined8 *)((longlong)puVar35 + 0x14);
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
      uVar33 = (ulonglong)(uint)local_c8;
    }
    if ((uint)uVar33 < uVar25) {
      uVar19 = (ulonglong)(uVar25 - (uint)uVar33);
      puVar36 = (undefined8 *)((longlong)puVar36 + uVar33 * 0x14);
      puVar30 = (ushort *)(*param_1 + uVar33 * 2);
      do {
        uVar25 = 0;
        uVar12 = puVar36[1];
        pbVar6 = *(byte **)(param_2 + (ulonglong)*puVar30 * 8);
        bVar4 = *pbVar6;
        lVar22 = *(longlong *)(pbVar6 + 0x20);
        *(undefined8 *)(lVar22 + 0x14) = *puVar36;
        *(undefined8 *)(lVar22 + 0x1c) = uVar12;
        *(undefined4 *)(lVar22 + 0x24) = *(undefined4 *)(puVar36 + 2);
        if (bVar4 < 4) {
          if (bVar4 != 0) {
            lVar23 = 0;
            goto LAB_145387c0c;
          }
        }
        else {
          uVar28 = (bVar4 - 4 >> 2) + 1;
          uVar33 = (ulonglong)uVar28;
          uVar25 = uVar28 * 4;
          lVar23 = (ulonglong)uVar28 * 4;
          lVar31 = 0;
          do {
            lVar1 = lVar31 + 0x40;
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x30) + -0x38 + lVar1);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(lVar31 + *(longlong *)(lVar22 + 0x28));
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x30) + -0x28 + lVar1);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x28) + -0x30 + lVar1);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x30) + -0x18 + lVar1);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x28) + -0x20 + lVar1);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x30) + -8 + lVar1);
            uVar10 = *puVar3;
            uVar11 = puVar3[1];
            puVar3 = (undefined4 *)(*(longlong *)(lVar22 + 0x28) + -0x10 + lVar1);
            *puVar3 = uVar10;
            puVar3[1] = uVar11;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            uVar33 = uVar33 - 1;
            lVar31 = lVar1;
          } while (uVar33 != 0);
          if (uVar25 < bVar4) {
LAB_145387c0c:
            uVar33 = (ulonglong)(bVar4 - uVar25);
            lVar23 = lVar23 << 4;
            do {
              puVar3 = (undefined4 *)(lVar23 + 8 + *(longlong *)(lVar22 + 0x30));
              uVar10 = *puVar3;
              uVar11 = puVar3[1];
              puVar3 = (undefined4 *)(lVar23 + *(longlong *)(lVar22 + 0x28));
              *puVar3 = uVar10;
              puVar3[1] = uVar11;
              puVar3[2] = uVar10;
              puVar3[3] = uVar11;
              uVar33 = uVar33 - 1;
              lVar23 = lVar23 + 0x10;
            } while (uVar33 != 0);
          }
        }
        puVar30 = puVar30 + 1;
        puVar36 = (undefined8 *)((longlong)puVar36 + 0x14);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  return;
}



// FUNCTION 145387c70 FUN_145387c70 body=44 status=ok
// SIG undefined FUN_145387c70(void)

longlong FUN_145387c70(longlong param_1)

{
  *(undefined8 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0x10000;
  return param_1;
}



// FUNCTION 145387ca0 FUN_145387ca0 body=3 status=ok
// SIG undefined FUN_145387ca0(void)

void FUN_145387ca0(void)

{
  return;
}



// FUNCTION 145387cb0 FUN_145387cb0 body=445 status=ok
// SIG undefined FUN_145387cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145387cb0(void)

{
  char cVar1;
  AkRuntimeEnvironmentMgr *pAVar2;
  
  _DAT_14c7fdeb0 = FUN_145554830;
  _DAT_14c7fdeb8 = FUN_1455549c0;
  _DAT_14c7fdec0 = FUN_145554be0;
  pAVar2 = AK::AkRuntimeEnvironmentMgr::Instance();
  cVar1 = (**(code **)(*(longlong *)pAVar2 + 8))(pAVar2,0x80);
  if (cVar1 != '\0') {
    _DAT_14c7fdeb0 = FUN_145557ec0;
    _DAT_14c7fdeb8 = FUN_145558030;
    _DAT_14c7fdec0 = FUN_1455582b0;
  }
  _DAT_14c7fdec8 = FUN_14555b110;
  _DAT_14c7fded0 = FUN_14555b110;
  _DAT_14c7fded8 = FUN_14555b110;
  _DAT_14c7fdee0 = FUN_145554fe0;
  _DAT_14c7fdee8 = FUN_145555380;
  _DAT_14c7fdef0 = FUN_1455557d0;
  pAVar2 = AK::AkRuntimeEnvironmentMgr::Instance();
  cVar1 = (**(code **)(*(longlong *)pAVar2 + 8))(pAVar2,0x80);
  if (cVar1 != '\0') {
    _DAT_14c7fdee0 = FUN_145558710;
    _DAT_14c7fdee8 = FUN_145558b20;
    _DAT_14c7fdef0 = FUN_145559050;
  }
  _DAT_14c7fdef8 = FUN_145556020;
  _DAT_14c7fdf00 = FUN_145556360;
  _DAT_14c7fdf08 = FUN_145556840;
  pAVar2 = AK::AkRuntimeEnvironmentMgr::Instance();
  cVar1 = (**(code **)(*(longlong *)pAVar2 + 8))(pAVar2,0x80);
  if (cVar1 != '\0') {
    _DAT_14c7fdef8 = FUN_145559a00;
    _DAT_14c7fdf00 = FUN_145559e70;
    _DAT_14c7fdf08 = FUN_14555a4b0;
  }
  _DAT_14c7fdf10 = FUN_145557430;
  _DAT_14c7fdf18 = FUN_145557680;
  _DAT_14c7fdf20 = FUN_14555b2a0;
  _DAT_14c7fdf28 = FUN_145557960;
  _DAT_14c7fdf30 = FUN_145557ba0;
  _DAT_14c7fdf38 = FUN_14555b5e0;
  return;
}



// FUNCTION 145387e70 FUN_145387e70 body=585 status=ok
// SIG undefined FUN_145387e70(void)

int FUN_145387e70(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  code *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar9 = param_2[2];
  uVar10 = 0;
  bVar1 = (byte)param_2[1];
  uVar13 = (ulonglong)bVar1;
  uVar12 = (uint)bVar1;
  if (bVar1 < 9) {
    param_1[4] = param_1;
    param_1[10] = param_1 + 9;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1[4] + 8) = 0;
    *(undefined4 *)(param_1[4] + 0xc) = 0;
    *(undefined4 *)(param_1[4] + 0x10) = 0;
    *(undefined4 *)(param_1[4] + 0x14) = 0;
    *(undefined4 *)(param_1[4] + 0x18) = 0;
    *(undefined4 *)(param_1[4] + 0x1c) = 0;
LAB_145387fe1:
    *(int *)(param_1 + 8) = (int)((ulonglong)DAT_14c72f42c / (param_3 & 0xffffffff));
    uVar3 = *param_2;
    *(byte *)((longlong)param_1 + 0x6d) = bVar1;
    *(float *)((longlong)param_1 + 100) = (float)uVar3 / (float)(param_3 & 0xffffffff);
    if ((param_2[2] & 0x3f) == 0x10) {
      if (uVar12 == 1) {
        uVar2 = 0;
      }
      else if (uVar12 == 2) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else if ((param_2[2] & 0x3f) == 0x20) {
      if (uVar12 == 1) {
        uVar2 = 3;
      }
      else if (uVar12 == 2) {
        uVar2 = 4;
      }
      else {
        uVar2 = 5;
      }
    }
    else {
      uVar2 = 0xff;
    }
    *(undefined1 *)((longlong)param_1 + 0x6c) = uVar2;
    pcVar11 = FUN_145071960;
    if ((uVar9 & 0x3f) == 0x20) {
      pcVar11 = FUN_145071950;
    }
    if ((char)param_2[1] != '\0') {
      do {
        uVar2 = (*pcVar11)(param_2 + 1,uVar10 & 0xff);
        iVar4 = (int)uVar10;
        uVar9 = iVar4 + 1;
        uVar10 = (ulonglong)uVar9;
        *(undefined1 *)((longlong)iVar4 + param_1[10]) = uVar2;
      } while ((int)uVar9 < (int)(uint)(byte)param_2[1]);
    }
    iVar4 = 2 - (uint)(*(byte *)((longlong)param_1 + 0x6c) < 6);
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 1;
    param_1[4] = 0;
    param_1[10] = 0;
    if ((uVar9 & 0x3f) == 0x20) {
      pvVar5 = AK::MemoryMgr::Malign(5,uVar13 * 4,0x10);
      param_1[4] = pvVar5;
      if (pvVar5 != (void *)0x0) {
        uVar3 = (bVar1 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar3;
        uVar6 = uVar10;
        do {
          uVar6 = uVar6 + 4;
          *(undefined4 *)(param_1[4] + -0x10 + uVar6 * 4) = 0;
          *(undefined4 *)(param_1[4] + -0xc + uVar6 * 4) = 0;
          *(undefined4 *)(param_1[4] + -8 + uVar6 * 4) = 0;
          *(undefined4 *)(param_1[4] + -4 + uVar6 * 4) = 0;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if (uVar3 * 4 < (uint)bVar1) {
          uVar8 = (ulonglong)(uVar12 + uVar3 * -4);
          lVar7 = uVar6 * 4;
          do {
            *(undefined4 *)(lVar7 + param_1[4]) = 0;
            uVar8 = uVar8 - 1;
            lVar7 = lVar7 + 4;
          } while (uVar8 != 0);
        }
LAB_145387f84:
        pvVar5 = AK::MemoryMgr::Malloc(5,uVar13);
        param_1[10] = pvVar5;
        if (pvVar5 != (void *)0x0) goto LAB_145387fe1;
      }
    }
    else {
      pvVar5 = AK::MemoryMgr::Malign(5,uVar13 * 2,0x10);
      param_1[4] = pvVar5;
      uVar6 = uVar10;
      uVar8 = uVar13;
      if (pvVar5 != (void *)0x0) {
        do {
          *(undefined2 *)(uVar6 + param_1[4]) = 0;
          uVar8 = uVar8 - 1;
          uVar6 = uVar6 + 2;
        } while (uVar8 != 0);
        goto LAB_145387f84;
      }
    }
    iVar4 = 0x34;
  }
  return iVar4;
}



// FUNCTION 1453880c0 FUN_1453880c0 body=77 status=ok
// SIG undefined FUN_1453880c0(void)

void FUN_1453880c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x20));
    }
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x50));
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 145388110 FUN_145388110 body=480 status=ok
// SIG undefined FUN_145388110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145388110(longlong param_1,uint *param_2,undefined4 param_3,undefined8 param_4,uint param_5
                  )

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined8 auStack_30 [5];
  
  bVar1 = *(byte *)(param_1 + 0x6d);
  uVar4 = (ulonglong)bVar1 * 4 + 0xf;
  if (uVar4 <= (ulonglong)bVar1 * 4) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x14538815c;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  uVar4 = 0;
  if (*(byte *)(param_1 + 0x6c) < 3) {
    uVar6 = uVar4;
    if (bVar1 != 0) {
      do {
        uVar5 = (int)uVar6 + 1;
        *(float *)(&stack0xfffffffffffffff8 + uVar6 * 4 + lVar2) =
             (float)(int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar6 * 2) * 3.0517578e-05;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(byte *)(param_1 + 0x6d));
    }
  }
  else if (((byte)(*(byte *)(param_1 + 0x6c) - 3) < 3) && (uVar6 = uVar4, bVar1 != 0)) {
    do {
      uVar5 = (int)uVar6 + 1;
      *(undefined4 *)(&stack0xfffffffffffffff8 + uVar6 * 4 + lVar2) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar6 * 4);
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(byte *)(param_1 + 0x6d));
  }
  if ((float)*param_2 / (float)param_5 != *(float *)(param_1 + 100)) {
    *(float *)(param_1 + 100) = (float)*param_2 / (float)param_5;
    *(undefined1 *)(param_1 + 0x6e) = 1;
  }
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14538820e;
  FUN_145388420(param_1,param_3,1);
  if ((param_2[2] & 0x3f) == 0x10) {
    if (*(char *)(param_1 + 0x6d) == '\x01') {
      cVar3 = '\0';
    }
    else if (*(char *)(param_1 + 0x6d) == '\x02') {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\x02';
    }
  }
  else {
    if ((param_2[2] & 0x3f) != 0x20) {
      *(undefined1 *)(param_1 + 0x6c) = 0xff;
      return;
    }
    if (*(char *)(param_1 + 0x6d) == '\x01') {
      cVar3 = '\x03';
    }
    else if (*(char *)(param_1 + 0x6d) == '\x02') {
      cVar3 = '\x04';
    }
    else {
      cVar3 = '\x05';
    }
  }
  *(char *)(param_1 + 0x6c) = cVar3;
  if (((cVar3 == '\0') || (cVar3 == '\x01')) || (cVar3 == '\x02')) {
    if (*(char *)(param_1 + 0x6d) != '\0') {
      do {
        fVar7 = *(float *)(&stack0xfffffffffffffff8 + uVar4 * 4 + lVar2) * 32767.0;
        if (32767.0 <= fVar7) {
          fVar7 = 32767.0;
        }
        if (fVar7 <= -32768.0) {
          fVar7 = -32768.0;
        }
        *(short *)(*(longlong *)(param_1 + 0x20) + uVar4 * 2) = (short)(int)fVar7;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *(byte *)(param_1 + 0x6d));
    }
  }
  else if ((((cVar3 == '\x03') || (cVar3 == '\x04')) || (cVar3 == '\x05')) &&
          (*(char *)(param_1 + 0x6d) != '\0')) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar4 * 4) =
           *(undefined4 *)(&stack0xfffffffffffffff8 + uVar4 * 4 + lVar2);
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < *(byte *)(param_1 + 0x6d));
  }
  return;
}



// FUNCTION 1453882f0 FUN_1453882f0 body=167 status=ok
// SIG undefined FUN_1453882f0(void)

undefined4 FUN_1453882f0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (*(short *)(param_2 + 0x12) != 0) {
    do {
      uVar1 = (**(code **)(&DAT_14c7fdeb0 +
                          ((ulonglong)*(byte *)(param_1 + 0x6c) +
                          (longlong)*(int *)(param_1 + 0x60) * 6) * 8))
                        (param_2,param_3,*(undefined4 *)(param_1 + 0x44),param_1);
      if ((*(int *)(param_1 + 0x60) == 2) && (0x3ff < *(uint *)(param_1 + 0x3c))) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
    } while ((*(short *)(param_2 + 0x12) != 0) &&
            ((uint)*(ushort *)(param_3 + 0x12) < *(uint *)(param_1 + 0x44)));
    return uVar1;
  }
  return 0x11;
}



// FUNCTION 1453883a0 FUN_1453883a0 body=116 status=ok
// SIG undefined FUN_1453883a0(void)

undefined8 FUN_1453883a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  
  uStack_20 = *(undefined4 *)(param_1 + 1);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_18 = *(undefined2 *)(param_1 + 2);
  uStack_16 = *(undefined2 *)((longlong)param_1 + 0x12);
  local_28 = 0;
  uVar1 = FUN_145071750(&local_28);
  if ((int)uVar1 == 1) {
    FUN_14555b9e0(param_1,&local_28);
    FUN_1450718b0(param_1);
    uVar1 = 1;
    *param_1 = local_28;
    param_1[1] = CONCAT44(uStack_1c,uStack_20);
    param_1[2] = CONCAT44(uStack_14,CONCAT22(uStack_16,local_18));
  }
  return uVar1;
}



// FUNCTION 145388420 FUN_145388420 body=401 status=ok
// SIG undefined FUN_145388420(void)

void FUN_145388420(longlong param_1,float param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar4 = *(uint *)(param_1 + 0x38);
  }
  else {
    fVar5 = powf(2.0,param_2 * 0.00083333335);
    fVar5 = fVar5 * *(float *)(param_1 + 100) * 65536.0 + 0.5;
    if (fVar5 < 2.1474836e+09) {
      uVar4 = (uint)(longlong)fVar5;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0x7fffffff;
    }
    *(float *)(param_1 + 0x68) = param_2;
    *(uint *)(param_1 + 0x34) = uVar4;
    *(uint *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = 0x400;
    *(undefined1 *)(param_1 + 0x6e) = 0;
    uVar3 = uVar4;
  }
  if (param_2 != *(float *)(param_1 + 0x68)) {
    if (*(int *)(param_1 + 0x60) == 2) {
      iVar2 = (uVar4 - uVar3) * *(int *)(param_1 + 0x3c);
      uVar3 = ((int)((iVar2 >> 0x1f & 0x3ffU) + iVar2) >> 10) + uVar3;
      *(uint *)(param_1 + 0x34) = uVar3;
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
        uVar3 = 1;
      }
      else if (0x7fffffff < uVar3) {
        *(undefined4 *)(param_1 + 0x34) = 0x7fffffff;
        uVar3 = 0x7fffffff;
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    fVar5 = powf(2.0,param_2 * 0.00083333335);
    fVar5 = fVar5 * *(float *)(param_1 + 100) * 65536.0 + 0.5;
    if (fVar5 < 2.1474836e+09) {
      uVar1 = (uint)(longlong)fVar5;
      if (uVar1 == 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0x7fffffff;
    }
    *(float *)(param_1 + 0x68) = param_2;
    *(uint *)(param_1 + 0x38) = uVar1;
    uVar4 = uVar1;
    if (param_3 == '\0') {
      *(uint *)(param_1 + 0x34) = uVar1;
      goto LAB_145388574;
    }
  }
  uVar1 = uVar3;
  if (uVar1 != uVar4) {
    *(undefined4 *)(param_1 + 0x60) = 2;
    return;
  }
LAB_145388574:
  *(uint *)(param_1 + 0x60) = (uint)(uVar1 != 0x10000);
  return;
}



// FUNCTION 1453885c0 FUN_1453885c0 body=144 status=ok
// SIG undefined FUN_1453885c0(void)

void FUN_1453885c0(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if ((*(char *)(param_1 + 0x6e) != '\0') || (param_2 != *(float *)(param_1 + 0x68))) {
    fVar2 = powf(2.0,param_2 * 0.00083333335);
    fVar2 = fVar2 * *(float *)(param_1 + 100) * 65536.0 + 0.5;
    if (fVar2 < 2.1474836e+09) {
      iVar1 = (int)(longlong)fVar2;
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(float *)(param_1 + 0x68) = param_2;
    *(int *)(param_1 + 0x34) = iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    *(undefined4 *)(param_1 + 0x3c) = 0x400;
    *(undefined1 *)(param_1 + 0x6e) = 0;
  }
  return;
}



// FUNCTION 145388650 FUN_145388650 body=86 status=ok
// SIG undefined FUN_145388650(void)

void FUN_145388650(longlong param_1,byte *param_2,code *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*param_2 != 0) {
    do {
      uVar1 = (*param_3)(param_2,uVar3 & 0xff);
      lVar2 = (longlong)(int)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(lVar2 + *(longlong *)(param_1 + 0x50)) = uVar1;
    } while ((int)uVar3 < (int)(uint)*param_2);
  }
  return;
}



// FUNCTION 1453886b0 FUN_1453886b0 body=7 status=ok
// SIG undefined FUN_1453886b0(void)

void FUN_1453886b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1453886c0 FUN_1453886c0 body=25 status=ok
// SIG undefined FUN_1453886c0(void)

float FUN_1453886c0(longlong param_1)

{
  return ((float)*(uint *)(param_1 + 0x34) * 1.5258789e-05) / *(float *)(param_1 + 100);
}



// FUNCTION 1453886e0 FUN_1453886e0 body=11 status=ok
// SIG undefined FUN_1453886e0(void)

void FUN_1453886e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c277e0;
  return;
}



// FUNCTION 1453886f0 FUN_1453886f0 body=25 status=ok
// SIG undefined FUN_1453886f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1453886f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint auStackX_8 [4];
  uint auStackX_18 [2];
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong lStack_58;
  uint auStack_50 [2];
  longlong alStack_48 [2];
  
  if ((*param_2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90) != 0)) {
    puVar7 = auStack_78;
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar8 = (undefined1 *)0x0;
    auStackX_18[0] = 0;
    auStackX_8[0] = 0;
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      uStack_80 = 0x1453887ca;
      FUN_14538e4b0(*(longlong *)(lVar1 + 0x90),&DAT_14c7389b8,auStackX_8,auStackX_18);
      if ((auStackX_8[0] != 0) || (auStackX_18[0] != 0)) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x314) & 0x10) == 0) ||
           (*(int *)(*(longlong *)(param_1 + 0x10) + 0x388) != -1)) {
          uVar6 = (ulonglong)auStackX_8[0] * 8;
          uVar5 = uVar6 + 0xf;
          if (uVar5 <= uVar6) {
            uVar5 = 0xffffffffffffff0;
          }
          uStack_80 = 0x145388860;
          lVar2 = -(uVar5 & 0xfffffffffffffff0);
          puVar9 = &stack0xffffffffffffffc8 + lVar2;
          uVar5 = (ulonglong)auStackX_18[0] * 8 + 0xf;
          if (uVar5 <= (ulonglong)auStackX_18[0] * 8) {
            uVar5 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_78 + lVar2 + -8) = 0x145388887;
          lVar3 = -(uVar5 & 0xfffffffffffffff0);
          uVar5 = uVar6 + 0xf;
          puVar10 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar3 + lVar2);
          if (uVar5 <= uVar6) {
            uVar5 = 0xffffffffffffff0;
          }
          *(undefined8 *)(auStack_78 + lVar3 + lVar2 + -8) = 0x1453888a4;
          lVar1 = *(longlong *)(lVar1 + 0x90);
          lVar4 = -(uVar5 & 0xfffffffffffffff0);
          puVar7 = auStack_78 + lVar4 + lVar3 + lVar2;
          puVar8 = &stack0xffffffffffffffc8 + lVar4 + lVar3 + lVar2;
          if (lVar1 != 0) {
            *(uint **)((longlong)alStack_48 + lVar4 + lVar3 + lVar2) = auStackX_18;
            *(uint **)((longlong)auStack_50 + lVar4 + lVar3 + lVar2) = auStackX_8;
            *(undefined1 **)((longlong)&lStack_58 + lVar4 + lVar3 + lVar2) = puVar8;
            *(undefined8 *)(auStack_78 + lVar4 + lVar3 + lVar2 + -8) = 0x1453888e1;
            FUN_14538e580(lVar1,&DAT_14c7389b8,puVar9,puVar10);
          }
          *(uint *)((longlong)alStack_48 + lVar4 + lVar3 + lVar2) = auStackX_18[0];
          *(uint *)((longlong)auStack_50 + lVar4 + lVar3 + lVar2) = auStackX_8[0];
        }
        else {
          if (*(longlong *)(lVar1 + 0x90) == 0) {
            uStackX_20 = 0x3f800000;
          }
          else {
            uStack_80 = 0x14538880e;
            uStackX_20 = FUN_14538e700(*(longlong *)(lVar1 + 0x90),&DAT_14c7389b8);
          }
          alStack_48[0]._0_4_ = 1;
          puVar10 = &uStackX_20;
          auStack_50[0] = 0;
          puVar9 = (undefined1 *)0x0;
          uStackX_24 = uStackX_20;
        }
        *(undefined1 **)(puVar7 + 0x20) = puVar8;
        *(undefined8 *)(puVar7 + -8) = 0x145388909;
        FUN_145388920(param_1,param_2,puVar9,puVar10);
      }
    }
    return;
  }
  return;
}



// FUNCTION 145388750 FUN_145388750 body=10 status=ok
// SIG undefined FUN_145388750(void)

undefined8 FUN_145388750(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 145388780 FUN_145388780 body=407 status=ok
// SIG undefined FUN_145388780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145388780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint local_res8 [4];
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_50 [2];
  longlong local_48 [2];
  
  puVar7 = auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar8 = (undefined1 *)0x0;
  local_res18[0] = 0;
  local_res8[0] = 0;
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    uStack_80 = 0x1453887ca;
    FUN_14538e4b0(*(longlong *)(lVar1 + 0x90),&DAT_14c7389b8,local_res8,local_res18);
    if ((local_res8[0] != 0) || (local_res18[0] != 0)) {
      if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x314) & 0x10) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x10) + 0x388) != -1)) {
        uVar6 = (ulonglong)local_res8[0] * 8;
        uVar5 = uVar6 + 0xf;
        if (uVar5 <= uVar6) {
          uVar5 = 0xffffffffffffff0;
        }
        uStack_80 = 0x145388860;
        lVar2 = -(uVar5 & 0xfffffffffffffff0);
        puVar9 = &stack0xffffffffffffffc8 + lVar2;
        uVar5 = (ulonglong)local_res18[0] * 8 + 0xf;
        if (uVar5 <= (ulonglong)local_res18[0] * 8) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_78 + lVar2 + -8) = 0x145388887;
        lVar3 = -(uVar5 & 0xfffffffffffffff0);
        uVar5 = uVar6 + 0xf;
        puVar10 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar3 + lVar2);
        if (uVar5 <= uVar6) {
          uVar5 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_78 + lVar3 + lVar2 + -8) = 0x1453888a4;
        lVar1 = *(longlong *)(lVar1 + 0x90);
        lVar4 = -(uVar5 & 0xfffffffffffffff0);
        puVar7 = auStack_78 + lVar4 + lVar3 + lVar2;
        puVar8 = &stack0xffffffffffffffc8 + lVar4 + lVar3 + lVar2;
        if (lVar1 != 0) {
          *(uint **)((longlong)local_48 + lVar4 + lVar3 + lVar2) = local_res18;
          *(uint **)((longlong)local_50 + lVar4 + lVar3 + lVar2) = local_res8;
          *(undefined1 **)((longlong)&local_58 + lVar4 + lVar3 + lVar2) = puVar8;
          *(undefined8 *)(auStack_78 + lVar4 + lVar3 + lVar2 + -8) = 0x1453888e1;
          FUN_14538e580(lVar1,&DAT_14c7389b8,puVar9,puVar10);
        }
        *(uint *)((longlong)local_48 + lVar4 + lVar3 + lVar2) = local_res18[0];
        *(uint *)((longlong)local_50 + lVar4 + lVar3 + lVar2) = local_res8[0];
      }
      else {
        if (*(longlong *)(lVar1 + 0x90) == 0) {
          local_res20 = 0x3f800000;
        }
        else {
          uStack_80 = 0x14538880e;
          local_res20 = FUN_14538e700(*(longlong *)(lVar1 + 0x90),&DAT_14c7389b8);
        }
        local_48[0]._0_4_ = 1;
        puVar10 = &local_res20;
        local_50[0] = 0;
        puVar9 = (undefined1 *)0x0;
        local_res24 = local_res20;
      }
      *(undefined1 **)(puVar7 + 0x20) = puVar8;
      *(undefined8 *)(puVar7 + -8) = 0x145388909;
      FUN_145388920(param_1,param_2,puVar9,puVar10);
    }
  }
  return;
}



// FUNCTION 145388920 FUN_145388920 body=761 status=ok
// SIG undefined FUN_145388920(void)

void FUN_145388920(undefined8 param_1,longlong *param_2,longlong param_3,float *param_4,
                  undefined8 *param_5,uint param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_6 != 0) {
    param_3 = param_3 - (longlong)param_5;
    uVar7 = (ulonglong)param_6;
    do {
      uVar12 = 0;
      fVar1 = *(float *)((longlong)param_5 + param_3);
      fVar2 = *(float *)(param_3 + 4 + (longlong)param_5);
      pfVar6 = (float *)*param_5;
      if ((char)param_2[1] != '\0') {
        do {
          pfVar5 = (float *)(*param_2 + uVar12 * *(ushort *)(param_2 + 2) * 4);
          pfVar9 = pfVar5 + (ulonglong)(*(ushort *)(param_2 + 2) >> 2) * 4;
          pfVar8 = pfVar6;
          for (; pfVar5 < pfVar9; pfVar5 = pfVar5 + 4) {
            fVar16 = *pfVar8;
            fVar14 = pfVar8[1];
            fVar13 = pfVar8[2];
            fVar15 = pfVar8[3];
            pfVar8 = pfVar8 + 4;
            *pfVar5 = (fVar2 * fVar16 + fVar1) * *pfVar5;
            pfVar5[1] = (fVar2 * fVar14 + fVar1) * pfVar5[1];
            pfVar5[2] = (fVar2 * fVar13 + fVar1) * pfVar5[2];
            pfVar5[3] = (fVar2 * fVar15 + fVar1) * pfVar5[3];
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (uVar11 < *(byte *)(param_2 + 1));
      }
      param_5 = param_5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_7 != 0) {
    uVar7 = (ulonglong)param_7;
    do {
      fVar1 = param_4[1];
      fVar2 = *param_4;
      bVar3 = *(byte *)(param_2 + 1);
      uVar12 = (ulonglong)bVar3;
      uVar4 = *(ushort *)((longlong)param_2 + 0x12);
      if (fVar1 == fVar2) {
        if (bVar3 != 0) {
          lVar10 = 0;
          do {
            FUN_145388c20(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar10 * 4,fVar2,uVar4);
            lVar10 = lVar10 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else if (bVar3 != 0) {
        lVar10 = 0;
        do {
          pfVar6 = (float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar10 * 4);
          pfVar5 = pfVar6 + uVar4;
          if (3 < uVar4) {
            uVar11 = uVar4 & 0xfffffffc;
            pfVar8 = pfVar6 + uVar11;
            fVar15 = (fVar1 - fVar2) / (float)uVar11;
            fVar17 = fVar15 * 4.0;
            fVar13 = fVar15 + fVar2 + fVar15;
            fVar16 = fVar2;
            fVar14 = fVar15 + fVar2;
            fVar15 = fVar13 + fVar15;
            for (; pfVar6 < pfVar8; pfVar6 = pfVar6 + 4) {
              *pfVar6 = fVar16 * *pfVar6;
              pfVar6[1] = fVar14 * pfVar6[1];
              pfVar6[2] = fVar13 * pfVar6[2];
              pfVar6[3] = fVar15 * pfVar6[3];
              fVar16 = fVar16 + fVar17;
              fVar14 = fVar14 + fVar17;
              fVar13 = fVar13 + fVar17;
              fVar15 = fVar15 + fVar17;
            }
          }
          if (pfVar6 < pfVar5) {
            fVar14 = (fVar1 - fVar2) / (float)uVar4;
            fVar16 = fVar2;
            if (0xf < ((longlong)pfVar5 + (3 - (longlong)pfVar6) & 0xfffffffffffffffcU)) {
              do {
                *pfVar6 = fVar16 * *pfVar6;
                fVar13 = fVar16 + fVar14 + fVar14;
                pfVar6[1] = (fVar16 + fVar14) * pfVar6[1];
                fVar15 = fVar13 + fVar14;
                pfVar6[2] = fVar13 * pfVar6[2];
                fVar16 = fVar15 + fVar14;
                pfVar6[3] = fVar15 * pfVar6[3];
                pfVar6 = pfVar6 + 4;
              } while (pfVar6 < pfVar5 + -3);
              if (pfVar5 <= pfVar6) goto LAB_145388bd8;
            }
            do {
              *pfVar6 = fVar16 * *pfVar6;
              pfVar6 = pfVar6 + 1;
              fVar16 = fVar16 + fVar14;
            } while (pfVar6 < pfVar5);
          }
LAB_145388bd8:
          lVar10 = lVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      param_4 = param_4 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 145388c20 FUN_145388c20 body=309 status=ok
// SIG undefined FUN_145388c20(void)

void FUN_145388c20(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 145388d60 FUN_145388d60 body=130 status=ok
// SIG undefined FUN_145388d60(void)

undefined8 FUN_145388d60(int param_1,uint param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_1 == 2) {
    pvVar1 = AK::MemoryMgr::Malloc(5,0x100);
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_14555bb00(pvVar1,param_3);
      return uVar2;
    }
  }
  else if ((param_1 != 0) && (param_2 >> 0x10 != 0)) {
    if (param_2 >> 0x10 != 2) {
      uVar2 = FUN_145089110(param_3,param_1,param_2);
      return uVar2;
    }
    pvVar1 = AK::MemoryMgr::Malloc(5,0xa8);
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_14555ca50(pvVar1,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145388df0 FUN_145388df0 body=85 status=ok
// SIG undefined FUN_145388df0(void)

void FUN_145388df0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 8) & 0x100000) != 0) {
      FUN_1450c8ec0(DAT_14c791050,*(undefined4 *)(lVar1 + 0x280),param_1);
    }
    FUN_1450eb2f0(param_1[3],param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145388e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// FUNCTION 145388e50 FUN_145388e50 body=296 status=ok
// SIG undefined FUN_145388e50(void)

void FUN_145388e50(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 0.0;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    fVar8 = (float)(**(code **)(*param_1 + 0x80))();
  }
  lVar3 = param_1[3];
  plVar6 = (longlong *)(lVar3 + 0x18);
  if ((*(byte *)(lVar3 + 0x220) & 1) == 0) {
    (**(code **)(*plVar6 + 0x68))(plVar6,0);
  }
  else {
    (**(code **)(*plVar6 + 0x70))(plVar6);
    if ((*(byte *)(lVar3 + 0x220) & 0x10) != 0) {
      (**(code **)(*plVar6 + 0x78))(plVar6);
    }
  }
  lVar3 = param_1[3];
  fVar7 = powf(2.0,*(float *)(lVar3 + 0xa4) * -0.00083333335);
  FUN_1450eb310(lVar3,fVar7 * fVar8);
  lVar3 = param_1[3];
  puVar4 = *(undefined4 **)(lVar3 + 0x2a0);
  uVar1 = *(undefined4 *)(lVar3 + 0x280);
  uVar2 = puVar4[3];
  uVar5 = FUN_1450e71d0(lVar3 + 0x18);
  FUN_1450b2df0(DAT_14c790fc0,uVar1,fVar8,fVar7 * fVar8,uVar5,*puVar4,((byte)uVar2 & 0x7c) == 4);
  if ((*(uint *)(param_1[3] + 8) & 0x100000) != 0) {
    FUN_1450c8da0(DAT_14c791050,*(undefined4 *)(param_1[3] + 0x280),param_1);
  }
  return;
}



// FUNCTION 145388f80 FUN_145388f80 body=9 status=ok
// SIG undefined FUN_145388f80(void)

void FUN_145388f80(longlong param_1)

{
  FUN_1450eb330(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145388f90 FUN_145388f90 body=51 status=ok
// SIG undefined FUN_145388f90(void)

void FUN_145388f90(longlong param_1)

{
  FUN_1450eb340(*(undefined8 *)(param_1 + 0x18));
  FUN_1450c95c0(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),param_1,0);
  return;
}



// FUNCTION 145388fd0 FUN_145388fd0 body=64 status=ok
// SIG undefined FUN_145388fd0(void)

void FUN_145388fd0(longlong param_1,undefined4 param_2)

{
  FUN_1450eb360(*(undefined8 *)(param_1 + 0x18));
  FUN_1450c95c0(DAT_14c791050,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x280),param_1,param_2
               );
  return;
}



// FUNCTION 145389010 FUN_145389010 body=153 status=ok
// SIG undefined FUN_145389010(void)

undefined4 FUN_145389010(longlong *param_1,uint *param_2)

{
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  ushort local_36;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_3c = 0x2b;
  local_40 = 0;
  local_38 = (undefined2)*param_2;
  local_48 = 0;
  local_36 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_24 = 0x3f800000;
  local_20 = 0xffffffff;
  local_1c = 1;
  (**(code **)(*param_1 + 0x78))(param_1,&local_48);
  if (local_48 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = (uint)local_36;
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return local_18;
}



// FUNCTION 1453890b0 FUN_1453890b0 body=29 status=ok
// SIG undefined FUN_1453890b0(void)

undefined8 FUN_1453890b0(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1[3] + 0x315) & 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001453890c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xd8))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 145389100 FUN_145389100 body=64 status=ok
// SIG undefined FUN_145389100(void)

undefined8 FUN_145389100(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))
                    (param_1,*(undefined8 *)(param_1[3] + 0x348),*(undefined4 *)(param_1[3] + 0x350)
                    );
  if ((int)uVar1 == 1) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | (byte)uVar1;
  }
  return uVar1;
}



// FUNCTION 145389140 FUN_145389140 body=33 status=ok
// SIG undefined FUN_145389140(void)

undefined8 * FUN_145389140(undefined8 *param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf8;
  *param_1 = &PTR_FUN_149d43940;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 145389170 FUN_145389170 body=43 status=ok
// SIG undefined FUN_145389170(void)

undefined8 * FUN_145389170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453891a0 FUN_1453891a0 body=116 status=ok
// SIG undefined FUN_1453891a0(void)

void FUN_1453891a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      *(undefined8 *)(param_1 + 8) = puVar1[4];
      puVar1[4] = 0;
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
      puVar1 = *(undefined8 **)(param_1 + 8);
    } while (puVar1 != (undefined8 *)0x0);
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 145389220 FUN_145389220 body=337 status=ok
// SIG undefined FUN_145389220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145389220(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_149c27940;
  puVar1 = (undefined8 *)param_1[7];
  do {
    puVar2 = puVar1;
    if (puVar2 == (undefined8 *)0x0) {
      if ((void *)param_1[8] != (void *)0x0) {
        *(undefined4 *)(param_1 + 9) = 0;
        AK::MemoryMgr::Free(0,(void *)param_1[8]);
        param_1[8] = 0;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      }
      if ((void *)param_1[10] != (void *)0x0) {
        *(undefined4 *)(param_1 + 0xb) = 0;
        AK::MemoryMgr::Free(5,(void *)param_1[10]);
        param_1[10] = 0;
        *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
      }
      param_1[4] = 0;
      param_1[3] = 0;
      FUN_1453891a0(param_1 + 6);
      *param_1 = &PTR_FUN_149c27768;
      return;
    }
    if (param_1[1] != 0) {
      *(undefined4 *)(param_1[1] + 0x174) = 0x42ca0000;
    }
    if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
      DAT_14c79c029 = 1;
    }
    lVar4 = FUN_145355800(puVar2);
    puVar1 = *(undefined8 **)(lVar4 + 0x20);
    puVar3 = puVar1;
    puVar5 = puVar1;
    puVar6 = (undefined8 *)0x0;
    if (puVar1 == (undefined8 *)0x0) {
LAB_14538929a:
      if (puVar5 != (undefined8 *)0x0) {
        if (puVar5 == puVar1) {
          *(undefined8 *)(lVar4 + 0x20) = puVar5[3];
        }
        else {
          puVar6[3] = puVar5[3];
        }
        if (puVar5 == *(undefined8 **)(lVar4 + 0x18)) {
          *(undefined8 **)(lVar4 + 0x18) = puVar6;
        }
      }
    }
    else {
      do {
        puVar5 = puVar3;
        if (puVar5 == puVar2) goto LAB_14538929a;
        puVar3 = (undefined8 *)puVar5[3];
        puVar6 = puVar5;
      } while ((undefined8 *)puVar5[3] != (undefined8 *)0x0);
    }
    lVar4 = FUN_145355800();
    *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
    puVar1 = (undefined8 *)puVar2[4];
    puVar3 = puVar1;
    if (puVar2 == (undefined8 *)param_1[7]) {
      param_1[7] = puVar1;
      puVar3 = _DAT_00000020;
    }
    _DAT_00000020 = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(5,puVar2);
    }
  } while( true );
}



// FUNCTION 145389380 FUN_145389380 body=37 status=ok
// SIG undefined FUN_145389380(void)

longlong FUN_145389380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x194) == 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return lVar1;
}



// FUNCTION 1453893b0 FUN_1453893b0 body=553 status=ok
// SIG undefined FUN_1453893b0(void)

ulonglong FUN_1453893b0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  plVar10 = *(longlong **)(param_1 + 8);
  if ((*(byte *)(plVar10 + 0x41) & 1) == 0) {
    (**(code **)(*plVar10 + 0x68))(plVar10,0);
  }
  else {
    (**(code **)(*plVar10 + 0x70))(plVar10);
    if ((*(byte *)(plVar10 + 0x41) & 0x10) != 0) {
      (**(code **)(*plVar10 + 0x78))(plVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar7 = FUN_1450e7120(*(undefined8 *)(param_1 + 8));
  if ((char)uVar7 != '\0') {
    FUN_1450e7ec0(*(undefined8 *)(param_1 + 8),param_1 + 0x40);
    iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1d0) + 0x70))();
    plVar10 = *(longlong **)(param_1 + 0x40);
    if (plVar10 != plVar10 + (ulonglong)*(uint *)(param_1 + 0x48) * 4) {
      lVar11 = 0;
      do {
        lVar8 = DAT_14c791060;
        if (((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x58) != *plVar10) ||
            ((int)plVar10[2] == 2)) || (iVar6 != 10)) {
          uVar2 = *(uint *)(plVar10 + 1);
          do {
            while (iVar3 = *(int *)(lVar8 + 0x58), iVar3 < 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x60));
              if (*(int *)(lVar8 + 0x58) < 0) goto LAB_1453894b1;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x60));
            }
            LOCK();
            bVar12 = iVar3 == *(int *)(lVar8 + 0x58);
            if (bVar12) {
              *(int *)(lVar8 + 0x58) = iVar3 + 1;
            }
            UNLOCK();
          } while (!bVar12);
LAB_1453894b1:
          lVar9 = lVar11;
          if (*(uint *)(lVar8 + 0xa0) != 0) {
            for (lVar4 = *(longlong *)
                          (*(longlong *)(lVar8 + 0x98) +
                          ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar8 + 0xa0)) * 8);
                (lVar9 = lVar11, lVar4 != 0 && (lVar9 = lVar4, *(uint *)(lVar4 + 0x10) != uVar2));
                lVar4 = *(longlong *)(lVar4 + 8)) {
            }
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
              UNLOCK();
            }
          }
          iVar3 = *(int *)(lVar8 + 0x58);
          while (-1 < iVar3) {
            LOCK();
            bVar12 = iVar3 == *(int *)(lVar8 + 0x58);
            if (bVar12) {
              *(int *)(lVar8 + 0x58) = iVar3 + -1;
            }
            UNLOCK();
            if (bVar12) {
              if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar8 + 0x88))) {
                SetEvent(*(HANDLE *)(lVar8 + 0x90));
              }
              goto LAB_14538952f;
            }
            iVar3 = *(int *)(lVar8 + 0x58);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x60));
LAB_14538952f:
          lVar8 = lVar9 + -0x10;
          if (lVar9 == 0) {
            lVar8 = lVar11;
          }
          if (lVar8 != 0) {
            cVar5 = FUN_14508d190(lVar8);
            if (cVar5 != '\0') {
              FUN_1450a6ec0(lVar8,plVar10,param_1);
            }
            LOCK();
            piVar1 = (int *)(lVar8 + 0x24);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*(longlong *)(lVar8 + 0x10) + 0x18))();
            }
          }
        }
        plVar10 = plVar10 + 4;
      } while (plVar10 !=
               (longlong *)
               ((ulonglong)*(uint *)(param_1 + 0x48) * 0x20 + *(longlong *)(param_1 + 0x40)));
    }
    uVar7 = uVar7 & 0xff;
  }
  return uVar7;
}



// FUNCTION 1453895e0 FUN_1453895e0 body=1979 status=ok
// SIG undefined FUN_1453895e0(void)

void FUN_1453895e0(longlong *param_1,char param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  float fVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_res8;
  char local_res10;
  float local_res18;
  float local_res20;
  
  lVar3 = param_1[1];
  local_res10 = param_2;
  if ((*(byte *)(lVar3 + 0x14b) & 1) == 0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (float)(**(code **)(*param_1 + 0x60))();
  }
  lVar13 = *(longlong *)(lVar3 + 0x78);
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xc5800000;
  local_res8 = 1;
  if (lVar13 == 0) {
    fVar22 = 1.0;
  }
  else {
    fVar22 = (float)FUN_14538e780();
  }
  fVar2 = *(float *)(param_1 + 2);
  puVar4 = (undefined8 *)param_1[7];
  puVar7 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar6 = puVar4;
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      fVar27 = *(float *)((longlong)puVar6 + 0x194);
      fVar25 = 0.0;
      lVar13 = puVar6[0x2e];
      pfVar19 = *(float **)(lVar3 + 0x1a8);
      local_res18 = fVar27;
      if (fVar27 == 0.0) {
        fVar26 = *(float *)(lVar3 + 0xb4);
        if (fVar26 == *(float *)(lVar3 + 0x210)) {
          fVar26 = *(float *)(lVar3 + 0x20c);
        }
        else {
          *(float *)(lVar3 + 0x210) = fVar26;
          fVar26 = fVar26 * 0.05;
          if ((fVar26 < -37.0) || (37.0 < fVar26)) {
            fVar26 = 0.0;
          }
          else {
            uVar17 = (uint)(longlong)(fVar26 * 27866352.0 + 1.0653532e+09);
            local_res20 = (float)(uVar17 & 0xff800000);
            local_res18 = (float)((uVar17 & 0x7fffff) + 0x3f800000);
            fVar26 = ((local_res18 * 0.32518977 + 0.020805772) * local_res18 + 0.65304345) *
                     local_res20;
          }
          *(float *)(lVar3 + 0x20c) = fVar26;
        }
        if ((*(byte *)(lVar3 + 0x170) & 8) == 0) {
          fVar25 = 1.0;
        }
        else {
          if (pfVar19 != pfVar19 + (ulonglong)*(uint *)(lVar3 + 0x1b0) * 0x24) {
            pfVar18 = pfVar19 + 0xf;
            fVar23 = fVar25;
            do {
              fVar25 = fVar23;
              if ((lVar13 == *(longlong *)(pfVar18 + 0xd)) &&
                 (fVar25 = *pfVar18, *pfVar18 <= fVar23)) {
                fVar25 = fVar23;
              }
              pfVar1 = pfVar18 + 0x15;
              pfVar18 = pfVar18 + 0x24;
              fVar23 = fVar25;
            } while (pfVar1 != pfVar19 + (ulonglong)*(uint *)(lVar3 + 0x1b0) * 0x24);
          }
          lVar13 = FUN_1450d2450(*(undefined8 *)(lVar3 + 8));
          if (*(char *)(lVar13 + 0xe0) == '\0') {
            uVar14 = FUN_144d4eb60();
            lVar13 = FUN_144d4eb00(uVar14);
          }
          else {
            lVar13 = lVar13 + 0x20;
          }
          fVar23 = (float)FUN_1450d0e20(lVar13);
          fVar26 = fVar26 * fVar23;
        }
        *(undefined4 *)(puVar6 + 0x2f) = *(undefined4 *)(lVar3 + 0xbc);
        *(undefined4 *)((longlong)puVar6 + 0x17c) = *(undefined4 *)(lVar3 + 0xb8);
        goto LAB_145389a84;
      }
      uVar14 = FUN_1453557f0(puVar6);
      plVar20 = (longlong *)param_1[8];
      bVar5 = false;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar23 = 0.0;
      if (plVar20 != plVar20 + (ulonglong)*(uint *)(param_1 + 9) * 4) break;
LAB_145389910:
      fVar26 = 0.0;
      if ((*(byte *)(puVar6 + 0x33) & 1) == 0) goto LAB_1453899dc;
      if (param_1[1] != 0) {
        *(undefined4 *)(param_1[1] + 0x174) = 0x42ca0000;
      }
      if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
        DAT_14c79c029 = 1;
      }
      lVar13 = FUN_145355800(puVar6);
      puVar9 = *(undefined8 **)(lVar13 + 0x20);
      puVar4 = (undefined8 *)0x0;
      while (puVar8 = puVar9, puVar8 != (undefined8 *)0x0) {
        if (puVar8 == puVar6) {
          if (puVar8 == *(undefined8 **)(lVar13 + 0x20)) {
            *(undefined8 *)(lVar13 + 0x20) = puVar8[3];
          }
          else {
            puVar4[3] = puVar8[3];
          }
          if (puVar8 == *(undefined8 **)(lVar13 + 0x18)) {
            *(undefined8 **)(lVar13 + 0x18) = puVar4;
          }
          break;
        }
        puVar4 = puVar8;
        puVar9 = (undefined8 *)puVar8[3];
      }
      lVar13 = FUN_145355800(puVar6);
      *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + -1;
      puVar4 = (undefined8 *)puVar6[4];
      if (puVar6 == (undefined8 *)param_1[7]) {
        param_1[7] = (longlong)puVar4;
      }
      else {
        puVar7[4] = puVar4;
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,0);
        AK::MemoryMgr::Free(5,puVar6);
      }
    }
    do {
      iVar10 = FUN_145377000(uVar14);
      if (((int)plVar20[1] == iVar10) && (lVar15 = FUN_145377010(uVar14), *plVar20 == lVar15)) {
        fVar26 = fVar26 + *(float *)((longlong)plVar20 + 0xc);
        fVar27 = fVar27 + *(float *)((longlong)plVar20 + 0x14);
        fVar23 = fVar23 + *(float *)(plVar20 + 3);
        bVar5 = true;
      }
      plVar20 = plVar20 + 4;
    } while (plVar20 != (longlong *)((ulonglong)*(uint *)(param_1 + 9) * 0x20 + param_1[8]));
    if (!bVar5) goto LAB_145389910;
LAB_1453899dc:
    *(float *)(puVar6 + 0x2f) = fVar27;
    *(float *)((longlong)puVar6 + 0x17c) = fVar23;
    fVar27 = local_res18;
    if ((*(byte *)(lVar3 + 0x170) & 8) == 0) {
LAB_145389a80:
      fVar25 = 1.0;
    }
    else if (local_res18 == 1.4013e-45) {
      pfVar18 = pfVar19 + (ulonglong)*(uint *)(lVar3 + 0x1b0) * 0x24;
      for (; pfVar19 != pfVar18; pfVar19 = pfVar19 + 0x24) {
        fVar23 = fVar25;
        if ((lVar13 == *(longlong *)(pfVar19 + 0x1c)) &&
           (fVar23 = pfVar19[0x10], pfVar19[0x10] <= fVar25)) {
          fVar23 = fVar25;
        }
        fVar25 = fVar23;
      }
    }
    else {
      if (local_res18 != 2.8026e-45) goto LAB_145389a80;
      pfVar18 = pfVar19 + (ulonglong)*(uint *)(lVar3 + 0x1b0) * 0x24;
      for (; pfVar19 != pfVar18; pfVar19 = pfVar19 + 0x24) {
        fVar23 = fVar25;
        if ((lVar13 == *(longlong *)(pfVar19 + 0x1c)) &&
           (fVar23 = pfVar19[0x11], pfVar19[0x11] <= fVar25)) {
          fVar23 = fVar25;
        }
        fVar25 = fVar23;
      }
    }
LAB_145389a84:
    fVar23 = fVar26 * fVar22 * fVar2 * fVar25;
    if (fVar23 <= 0.0) {
      uVar17 = *(uint *)(puVar6 + 0x33);
      uVar17 = (uVar17 * 2 ^ uVar17) & 2 ^ uVar17;
      *(uint *)(puVar6 + 0x33) = uVar17;
      bVar5 = -4096.0 <= DAT_14c72f444;
      *(float *)(puVar6 + 0x31) = fVar26;
      uVar17 = uVar17 & 0xfffffffe | (uint)bVar5;
      uVar12 = *(undefined4 *)((longlong)puVar6 + 0xc);
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
LAB_145389cc8:
      *(undefined4 *)(puVar6 + 1) = uVar12;
      uVar12 = *(undefined4 *)((longlong)puVar6 + 0x14);
      *(float *)((longlong)puVar6 + 0x14) = fVar25;
      *(undefined4 *)(puVar6 + 2) = uVar12;
      *(undefined4 *)((longlong)puVar6 + 0x18c) = 0xc5800000;
      *(uint *)(puVar6 + 0x33) = uVar17;
    }
    else {
      fVar16 = (float)(((uint)fVar23 & 0x7fffff) + 0x3f800000);
      fVar24 = fVar16 + 1.0;
      fVar16 = (((fVar16 * fVar16 * fVar16 - 1.0) * 1.1581186) / (fVar24 * fVar24 * fVar24)) * 20.0
               + ((float)((uint)fVar23 >> 0x17 & 0xff) - 127.0) * 6.0206003 +
               *(float *)(puVar6[0x2b] + 0x14);
      uVar17 = *(uint *)(puVar6 + 0x33);
      uVar17 = (uVar17 * 2 ^ uVar17) & 2 ^ uVar17;
      *(uint *)(puVar6 + 0x33) = uVar17;
      if ((local_res10 == '\0') || (DAT_14c72f444 < fVar16)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(float *)((longlong)puVar6 + 0x18c) = fVar16;
      *(float *)(puVar6 + 0x31) = fVar26;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)puVar6 + 0xc);
      uVar12 = *(undefined4 *)((longlong)puVar6 + 0x14);
      *(float *)((longlong)puVar6 + 0x14) = fVar25;
      *(undefined4 *)(puVar6 + 2) = uVar12;
      *(uint *)(puVar6 + 0x33) = uVar17 & 0xfffffffe | uVar11;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      if (*(float *)((longlong)param_1 + 0x14) <= fVar16 &&
          fVar16 != *(float *)((longlong)param_1 + 0x14)) {
        *(float *)((longlong)param_1 + 0x14) = fVar16;
      }
      lVar13 = puVar6[0x2c];
      local_res18 = fVar23;
      if ((lVar13 != 0) && (*(char *)(lVar3 + 0x208) < '\0')) {
        if ((-fVar21 < *(float *)(lVar3 + 0xc0)) &&
           (fVar16 = fVar16 + fVar21,
           *(float *)(lVar13 + 0x1c8) <= fVar16 && fVar16 != *(float *)(lVar13 + 0x1c8))) {
          *(float *)(lVar13 + 0x1c8) = fVar16;
        }
        lVar13 = puVar6[0x2c];
        lVar15 = FUN_14538a850(param_1 + 10,lVar13,&local_res8);
        if (lVar15 == 0) {
          uVar17 = *(uint *)(puVar6 + 0x33);
          uVar17 = (uVar17 * 2 ^ uVar17) & 2 ^ uVar17;
          *(uint *)(puVar6 + 0x33) = uVar17;
          bVar5 = -4096.0 <= DAT_14c72f444;
          *(undefined4 *)(puVar6 + 0x31) = 0;
          uVar17 = uVar17 & 0xfffffffe | (uint)bVar5;
          uVar12 = *(undefined4 *)((longlong)puVar6 + 0xc);
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          goto LAB_145389cc8;
        }
        fVar26 = *(float *)(lVar13 + 0x1d8) + *(float *)(lVar13 + 0x14);
        fVar25 = *(float *)((longlong)puVar6 + 0x18c) - fVar26;
        if (0.0 < fVar25) {
          fVar26 = fVar25 * *(float *)(lVar13 + 0x1dc) + fVar26;
        }
        if (((char)local_res8 == '\0') ||
           (*(float *)(lVar15 + 8) <= fVar26 && fVar26 != *(float *)(lVar15 + 8))) {
          *(float *)(lVar15 + 8) = fVar26;
        }
      }
    }
    if (((fVar27 != 4.2039e-45) && (((byte)*(undefined4 *)(puVar6 + 0x33) & 3) != 3)) &&
       (*(int *)(lVar3 + 0x1b0) != 0)) {
      thunk_FUN_14507bde0(lVar3,lVar3 + 0x1a8,puVar6);
    }
    puVar4 = (undefined8 *)puVar6[4];
    puVar7 = puVar6;
  } while( true );
}



// FUNCTION 145389da0 FUN_145389da0 body=61 status=ok
// SIG undefined FUN_145389da0(void)

int FUN_145389da0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = *(longlong *)(param_1 + 0x38); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if (((*(uint *)(lVar1 + 0x198) >> 2 & 1) == 0) &&
       (*(int *)(*(longlong *)(lVar1 + 0x158) + 0x1c0) == param_2)) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



// FUNCTION 145389de0 FUN_145389de0 body=393 status=ok
// SIG undefined FUN_145389de0(void)

int FUN_145389de0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
  }
  plVar7 = param_2;
  if ((*(byte *)((longlong)param_2 + 0x1c4) & 4) == 0) {
    plVar7 = (longlong *)0x0;
    for (lVar2 = param_2[7]; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
      if (*(int *)(lVar2 + 0x194) == 0) {
        plVar7 = *(longlong **)(lVar2 + 0x160);
        lVar4 = (**(code **)(*param_2 + 8))(param_2);
        if (*(longlong *)(lVar2 + 0x170) == lVar4) break;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x60) & 1) == 0) || ((*(byte *)(param_1 + 0x60) & 2) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  lVar2 = FUN_145356440(param_1 + 0x30,param_1,param_2,plVar7,param_3,uVar1);
  if (lVar2 == 0) {
    return 0x34;
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  if (param_2[4] == 0) {
    param_2[4] = lVar2;
  }
  else {
    *(longlong *)(param_2[3] + 0x18) = lVar2;
  }
  param_2[3] = lVar2;
  *(int *)(param_2 + 5) = (int)param_2[5] + 1;
  uVar3 = FUN_1453557f0(lVar2);
  lVar4 = FUN_1450a1a60(uVar3);
  if (lVar4 == 0) {
    iVar6 = 2;
  }
  else {
    puVar5 = (undefined4 *)FUN_1453557d0(lVar2,local_res8);
    iVar6 = FUN_145090bb0(lVar4 + 200,*puVar5);
    if (iVar6 == 1) goto LAB_145389f3d;
  }
  local_30 = 0;
  lVar2 = *(longlong *)(param_1 + 0x38);
  while (local_38 = lVar2, local_38 != 0) {
    if (*(longlong **)(local_38 + 0x158) == param_2) {
      if (local_38 != 0) {
        FUN_145389f70(param_1,local_28,&local_38);
      }
      break;
    }
    local_30 = local_38;
    lVar2 = *(longlong *)(local_38 + 0x20);
  }
LAB_145389f3d:
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    DAT_14c79c029 = 1;
  }
  return iVar6;
}



// FUNCTION 145389f70 FUN_145389f70 body=238 status=ok
// SIG undefined FUN_145389f70(void)

longlong * FUN_145389f70(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
  }
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    DAT_14c79c029 = 1;
  }
  lVar6 = *param_3;
  lVar5 = FUN_145355800(lVar6);
  lVar4 = *(longlong *)(lVar5 + 0x20);
  lVar2 = 0;
  do {
    lVar3 = lVar4;
    if (lVar3 == 0) {
LAB_145389ff6:
      lVar6 = FUN_145355800(*param_3);
      *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
      puVar1 = (undefined8 *)*param_3;
      lVar6 = param_3[1];
      lVar2 = puVar1[4];
      if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
        *(longlong *)(param_1 + 0x38) = lVar2;
      }
      else {
        *(longlong *)(lVar6 + 0x20) = lVar2;
      }
      *param_3 = lVar2;
      param_3[1] = lVar6;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        AK::MemoryMgr::Free(5,puVar1);
      }
      lVar6 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = lVar6;
      return param_2;
    }
    if (lVar3 == lVar6) {
      if (lVar3 == *(longlong *)(lVar5 + 0x20)) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar3 + 0x18);
      }
      else {
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      }
      if (lVar3 == *(longlong *)(lVar5 + 0x18)) {
        *(longlong *)(lVar5 + 0x18) = lVar2;
      }
      goto LAB_145389ff6;
    }
    lVar4 = *(longlong *)(lVar3 + 0x18);
    lVar2 = lVar3;
  } while( true );
}



// FUNCTION 14538a060 FUN_14538a060 body=93 status=ok
// SIG undefined FUN_14538a060(void)

void FUN_14538a060(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x38); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    lVar2 = *(longlong *)(lVar1 + 0x140);
    if (lVar2 != (ulonglong)*(uint *)(lVar1 + 0x148) * 0x118 + lVar2) {
      do {
        *(undefined8 *)(lVar2 + 0x18) = 0;
        lVar2 = lVar2 + 0x118;
      } while (lVar2 != (ulonglong)*(uint *)(lVar1 + 0x148) * 0x118 + *(longlong *)(lVar1 + 0x140));
    }
  }
  return;
}



// FUNCTION 14538a0c0 FUN_14538a0c0 body=364 status=ok
// SIG undefined FUN_14538a0c0(void)

void FUN_14538a0c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x20);
  puVar8 = (undefined8 *)0x0;
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
LAB_14538a0f0:
  puVar3 = *(undefined8 **)(*(longlong *)(lVar7 + 0x150) + 0x38);
  puVar6 = puVar8;
  while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
    lVar5 = FUN_145355800(puVar1);
    if (lVar5 == param_1) {
      lVar7 = *(longlong *)(lVar7 + 0x150);
      if (*(longlong *)(lVar7 + 8) != 0) {
        *(undefined4 *)(*(longlong *)(lVar7 + 8) + 0x174) = 0x42ca0000;
      }
      if ((*(byte *)(lVar7 + 0x60) & 4) != 0) {
        DAT_14c79c029 = 1;
      }
      lVar5 = FUN_145355800(puVar1);
      puVar4 = *(undefined8 **)(lVar5 + 0x20);
      puVar3 = puVar8;
      goto joined_r0x00014538a1a1;
    }
    puVar6 = puVar1;
    puVar3 = (undefined8 *)puVar1[4];
  }
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 != 0) {
    puVar6 = *(undefined8 **)(lVar7 + 0x18);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      puVar6 = puVar8;
    }
    *(undefined8 **)(param_1 + 0x20) = puVar6;
    *(undefined8 *)(lVar7 + 0x18) = 0;
  }
  goto LAB_14538a13d;
joined_r0x00014538a1a1:
  puVar2 = puVar4;
  if (puVar2 == (undefined8 *)0x0) goto LAB_14538a1d3;
  if (puVar2 == puVar1) {
    if (puVar2 == *(undefined8 **)(lVar5 + 0x20)) {
      *(undefined8 *)(lVar5 + 0x20) = puVar2[3];
    }
    else {
      puVar3[3] = puVar2[3];
    }
    if (puVar2 == *(undefined8 **)(lVar5 + 0x18)) {
      *(undefined8 **)(lVar5 + 0x18) = puVar3;
    }
    goto LAB_14538a1d3;
  }
  puVar4 = (undefined8 *)puVar2[3];
  puVar3 = puVar2;
  goto joined_r0x00014538a1a1;
LAB_14538a1d3:
  lVar5 = FUN_145355800(puVar1);
  *(int *)(lVar5 + 0x28) = *(int *)(lVar5 + 0x28) + -1;
  if (puVar1 == *(undefined8 **)(lVar7 + 0x38)) {
    *(undefined8 *)(lVar7 + 0x38) = puVar1[4];
  }
  else {
    puVar6[4] = puVar1[4];
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    AK::MemoryMgr::Free(5,puVar1);
  }
LAB_14538a13d:
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  goto LAB_14538a0f0;
}



// FUNCTION 14538a230 FUN_14538a230 body=43 status=ok
// SIG undefined FUN_14538a230(void)

void FUN_14538a230(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    do {
      *(uint *)(lVar1 + 0x198) =
           *(uint *)(lVar1 + 0x198) & 0xfffffffd | (uint)param_2 + (uint)param_2;
      lVar1 = *(longlong *)(lVar1 + 0x20);
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14538a260 FUN_14538a260 body=427 status=ok
// SIG undefined FUN_14538a260(void)

void FUN_14538a260(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar5 = *(longlong **)(param_1 + 0x50);
  if (plVar5 != plVar5 + (ulonglong)*(uint *)(param_1 + 0x58) * 2) {
    do {
      lVar1 = *plVar5;
      fVar8 = *(float *)(lVar1 + 0x1d0);
      if (*(float *)(lVar1 + 0x1d0) <= *(float *)(plVar5 + 1)) {
        fVar8 = *(float *)(plVar5 + 1);
      }
      fVar8 = *(float *)(lVar1 + 0x14) - fVar8;
      fVar6 = fVar8 * 0.05;
      if ((fVar6 < -37.0) || (37.0 < fVar6)) {
        fVar6 = 0.0;
      }
      else {
        uVar4 = (uint)(longlong)(fVar6 * 27866352.0 + 1.0653532e+09);
        fVar6 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
        fVar6 = ((fVar6 * 0.32518977 + 0.020805772) * fVar6 + 0.65304345) *
                (float)(uVar4 & 0xff800000);
      }
      for (lVar2 = *(longlong *)(param_1 + 0x38); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
        if (*(longlong *)(lVar2 + 0x160) == lVar1) {
          fVar7 = fVar8 + *(float *)(lVar2 + 0x18c);
          *(float *)(lVar2 + 0x188) = fVar6 * *(float *)(lVar2 + 0x188);
          bVar3 = fVar7 <= DAT_14c72f444;
          *(float *)(lVar2 + 0x18c) = fVar7;
          *(uint *)(lVar2 + 0x198) = *(uint *)(lVar2 + 0x198) & 0xfffffffe | (uint)bVar3;
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != (longlong *)
                       ((ulonglong)*(uint *)(param_1 + 0x58) * 0x10 + *(longlong *)(param_1 + 0x50))
            );
  }
  return;
}



// FUNCTION 14538a410 FUN_14538a410 body=866 status=ok
// SIG undefined FUN_14538a410(void)

void FUN_14538a410(longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50;
  byte local_4f;
  byte local_4e;
  undefined1 local_4c;
  longlong local_48;
  longlong lStack_40;
  
  local_68 = param_3 * *(float *)(param_1 + 0x10);
  local_48 = 0;
  lStack_40 = 0;
  if ((((*(float *)(param_2 + 0x160) == *(float *)(param_2 + 0x174)) &&
       (*(float *)(param_2 + 0x164) == *(float *)(param_2 + 0x178))) &&
      (*(float *)(param_2 + 0x168) == *(float *)(param_2 + 0x17c))) &&
     (*(float *)(param_2 + 0x16c) == *(float *)(param_2 + 0x180))) {
    if ((((*(byte *)(param_2 + 0x170) ^ *(byte *)(param_2 + 0x184)) & 7) == 0) &&
       (local_4c = 0, ((*(byte *)(param_2 + 0x170) ^ *(byte *)(param_2 + 0x184)) & 8) == 0))
    goto LAB_14538a4a5;
  }
  local_4c = 1;
LAB_14538a4a5:
  local_64 = *(float *)(param_2 + 0x16c) * 0.01;
  local_4f = *(byte *)(param_2 + 0x170) & 7;
  local_50 = 0;
  local_60 = *(float *)(param_2 + 0x160) * 0.01;
  local_5c = *(float *)(param_2 + 0x164) * 0.01;
  local_4e = 1;
  local_54 = *(float *)(param_2 + 0x188) * 0.01;
  local_58 = *(float *)(param_2 + 0x168) * 0.01;
  if ((((*(byte *)(param_2 + 0x170) & 8) != 0) &&
      (local_50 = *(byte *)(param_2 + 0x19c) >> 3 & 7, (*(byte *)(param_2 + 0x19c) & 0x40) != 0)) &&
     (lVar2 = FUN_14507bcb0(), lVar2 != 0)) {
    local_4e = *(byte *)(lVar2 + 0x20b) >> 1 & 1;
    if ((*(byte *)(lVar2 + 0x1fd) != 0xff) &&
       (lVar3 = (ulonglong)*(byte *)(lVar2 + 0x1fd) + 2, *(longlong *)(lVar2 + lVar3 * 0x18) != 0))
    {
      local_48 = lVar2 + lVar3 * 0x18;
    }
    if ((*(byte *)(lVar2 + 0x1fe) != 0xff) &&
       (lVar3 = (ulonglong)*(byte *)(lVar2 + 0x1fe) + 2, *(longlong *)(lVar2 + lVar3 * 0x18) != 0))
    {
      lStack_40 = lVar2 + lVar3 * 0x18;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  do {
    if (lVar2 == 0) {
      *(undefined8 *)(param_2 + 0x174) = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x168);
      *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)(param_2 + 0x170);
      return;
    }
    if ((*(byte *)(lVar2 + 0x198) & 1) == 0) {
      *(float *)(lVar2 + 0xc) = local_68 * *(float *)(lVar2 + 0x188);
LAB_14538a5f7:
      if (((*(byte *)(param_2 + 0x170) & 8) == 0) || (*(int *)(lVar2 + 0x194) == 3)) {
        puVar4 = (uint *)FUN_1453557d0(lVar2,local_res8);
        if ((*puVar4 & 0xf00) == 0) {
          FUN_14538b470(lVar2,param_5);
        }
        else {
          FUN_14538b210(lVar2,&local_68,param_5);
        }
      }
      else {
        puVar4 = (uint *)FUN_1453557d0(lVar2,local_res18);
        if ((*puVar4 & 0xf00) == 0x300) {
          FUN_14538ad60(lVar2,&local_68,param_2,param_5);
        }
        else {
          FUN_14538a990();
        }
      }
      if ((*(uint *)(lVar2 + 0x198) >> 1 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
          *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar2 + 0xc);
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar2 + 0x14);
          if (param_4 != '\0') {
            *(undefined4 *)(lVar2 + 8) = 0;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x140);
        *(undefined4 *)(lVar2 + 8) = 0;
        if (lVar3 != (ulonglong)*(uint *)(lVar2 + 0x148) * 0x118 + lVar3) {
          puVar4 = (uint *)(lVar3 + 0xc0);
          do {
            if (*(longlong *)(puVar4 + 10) != 0) {
              uVar5 = puVar4[-2];
              if ((uVar5 & 0xf00) == 0x300) {
                uVar5 = *puVar4;
              }
              uVar5 = ((uVar5 & 0xff) + 7 & 0xfffffff8) * (uint)(byte)*puVar4;
              if (uVar5 != 0) {
                memcpy(*(void **)(puVar4 + 0x10),*(void **)(puVar4 + 0xe),(ulonglong)uVar5 << 2);
              }
            }
            puVar1 = puVar4 + 0x16;
            puVar4 = puVar4 + 0x46;
          } while (puVar1 != (uint *)((ulonglong)*(uint *)(lVar2 + 0x148) * 0x118 +
                                     *(longlong *)(lVar2 + 0x140)));
        }
      }
    }
    else {
      *(undefined4 *)(lVar2 + 0xc) = 0;
      if ((*(uint *)(lVar2 + 0x198) >> 1 & 1) == 0) goto LAB_14538a5f7;
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
  } while( true );
}



// FUNCTION 14538a780 FUN_14538a780 body=193 status=ok
// SIG undefined FUN_14538a780(void)

undefined8 FUN_14538a780(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var6 = (ulonglong)(iVar2 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(5,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar5 + *param_1))[1];
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
            ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(5,(void *)*param_1);
      }
      goto LAB_14538a824;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(5,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14538a824:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14538a850 FUN_14538a850 body=307 status=ok
// SIG undefined FUN_14538a850(void)

ulonglong * FUN_14538a850(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)(param_1 + 1);
  iVar8 = 0;
  if (uVar7 != 0) {
    do {
      iVar2 = (uVar7 >> 1) + iVar8;
      lVar5 = (longlong)iVar2 * 0x10;
      uVar6 = *(ulonglong *)(lVar5 + *param_1);
      if (uVar6 == param_2) {
        *param_3 = 1;
        return (ulonglong *)(*param_1 + lVar5);
      }
      uVar3 = uVar7 - 1;
      iVar2 = iVar2 + 1;
      if (param_2 <= uVar6) {
        uVar3 = uVar7;
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      uVar7 = uVar3 >> 1;
    } while (uVar7 != 0);
  }
  *param_3 = 0;
  uVar7 = *(uint *)(param_1 + 1);
  if (*param_1 + (longlong)iVar8 * 0x10 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar7) &&
       (cVar1 = FUN_14538a780(param_1), cVar1 == '\0')) {
      return (ulonglong *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar7) {
      return (ulonglong *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    puVar4 = (ulonglong *)((ulonglong)uVar7 * 0x10 + *param_1);
  }
  else {
    uVar6 = (longlong)iVar8 * 0x10 >> 4;
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar7) &&
        (cVar1 = FUN_14538a780(param_1), cVar1 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar7)) {
      return (ulonglong *)0x0;
    }
    uVar7 = (uint)uVar6;
    lVar5 = (uVar6 & 0xffffffff) * 0x10;
    _Src = (void *)(*param_1 + lVar5);
    if (uVar7 < *(uint *)(param_1 + 1)) {
      memmove((void *)((longlong)_Src + 0x10),_Src,
              (ulonglong)((*(uint *)(param_1 + 1) - uVar7) * 0x10));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    puVar4 = (ulonglong *)(*param_1 + lVar5);
  }
  if (puVar4 != (ulonglong *)0x0) {
    *puVar4 = param_2;
  }
  return puVar4;
}



// FUNCTION 14538a990 FUN_14538a990 body=971 status=ok
// SIG undefined FUN_14538a990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14538a990(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *pvVar9;
  void *_Dst;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 uVar22;
  size_t _Size;
  float *pfVar23;
  ulonglong uVar24;
  undefined8 auStack_b0 [5];
  longlong lStack_88;
  longlong lStack_80;
  float afStack_78 [2];
  longlong alStack_70 [3];
  longlong local_58;
  longlong local_50;
  
  uVar2 = (ulonglong)*(uint *)(param_3 + 0x1b0) * 8;
  uVar24 = uVar2 + 0xf;
  if (uVar24 <= uVar2) {
    uVar24 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x14538a9e6;
  lVar10 = -(uVar24 & 0xfffffffffffffff0);
  uVar2 = (ulonglong)*(uint *)(param_3 + 0x1b0) * 4;
  uVar24 = uVar2 + 0xf;
  lVar19 = (longlong)&local_58 + lVar10;
  if (uVar24 <= uVar2) {
    uVar24 = 0xffffffffffffff0;
  }
  local_58 = lVar19;
  *(undefined8 *)((longlong)auStack_b0 + lVar10) = 0x14538aa12;
  lVar11 = -(uVar24 & 0xfffffffffffffff0);
  lVar3 = (longlong)&local_58 + lVar11 + lVar10;
  local_50 = lVar3;
  *(undefined8 *)((longlong)auStack_b0 + lVar11 + lVar10) = 0x14538aa33;
  uVar16 = FUN_145079400(param_1,param_3 + 0x1a8,lVar19,lVar3);
  if (1 < uVar16) {
    *(undefined8 *)((longlong)auStack_b0 + lVar11 + lVar10) = 0x14538aa45;
    cVar15 = FUN_1450e7cb0(param_3);
    if (cVar15 != '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0x184);
      uVar5 = *(undefined4 *)(param_1 + 0x180);
      *(longlong *)((longlong)&lStack_88 + lVar11 + lVar10) = lVar3;
      *(undefined8 *)((longlong)auStack_b0 + lVar11 + lVar10) = 0x14538aa6a;
      FUN_1450794b0(uVar16,uVar5,uVar4,lVar19);
      uVar7 = *(undefined8 *)(param_1 + 0x170);
      *(undefined8 *)((longlong)auStack_b0 + lVar11 + lVar10) = 0x14538aa76;
      lVar19 = FUN_145077820(uVar7);
      goto LAB_14538aa92;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)((longlong)auStack_b0 + lVar11 + lVar10) = 0x14538aa87;
  lVar19 = FUN_145077820(uVar7);
  if (uVar16 == 0) {
    return;
  }
LAB_14538aa92:
  if (lVar19 != 0) {
    uVar24 = (ulonglong)uVar16 * 0x30 + 0xf;
    if (uVar24 <= (ulonglong)uVar16 * 0x30) {
      uVar24 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_b0 + lVar11 + lVar10) = 0x14538aab8;
    lVar12 = -(uVar24 & 0xfffffffffffffff0);
    lVar8 = *(longlong *)(param_1 + 0x140);
    lVar3 = (longlong)&local_58 + lVar12 + lVar11 + lVar10;
    if (lVar8 != (ulonglong)*(uint *)(param_1 + 0x148) * 0x118 + lVar8) {
      pfVar23 = (float *)(lVar8 + 0x60);
      do {
        fVar21 = pfVar23[0x2b];
        bVar13 = false;
        uVar18 = (uint)fVar21 & 0xff;
        if (uVar18 == *(byte *)(pfVar23 + 0x18)) {
LAB_14538ab9f:
          if (*(longlong *)(pfVar23 + 0x22) != 0) {
            uVar7 = *(undefined8 *)(pfVar23 + 0x26);
            *(undefined8 *)(pfVar23 + 0x26) = *(undefined8 *)(pfVar23 + 0x28);
            *(undefined8 *)(pfVar23 + 0x28) = uVar7;
            pfVar23[-2] = pfVar23[-2] * *(float *)(param_2 + 4);
            pfVar23[-1] = *(float *)(param_2 + 8) + pfVar23[-1];
            *pfVar23 = *(float *)(param_2 + 0xc) + *pfVar23;
            pfVar23[1] = *(float *)(param_2 + 0x10) + pfVar23[1];
            pfVar23[2] = *(float *)(param_2 + 0x14) * pfVar23[2];
            cVar15 = *(char *)(param_2 + 0x19);
            if (cVar15 == '\0') {
              cVar15 = *(char *)((longlong)pfVar23 + 0xd);
            }
            *(char *)((longlong)pfVar23 + 0xd) = cVar15;
            *(byte *)((longlong)pfVar23 + 0xe) =
                 *(byte *)((longlong)pfVar23 + 0xe) & *(byte *)(param_2 + 0x1a);
            uVar7 = *(undefined8 *)(param_2 + 0x28);
            bVar6 = *(byte *)(pfVar23 + 3);
            *(longlong *)((longlong)alStack_70 + lVar12 + lVar11 + lVar10 + 8) = lVar3;
            lVar8 = local_58;
            *(undefined8 *)((longlong)alStack_70 + lVar12 + lVar11 + lVar10) = uVar7;
            *(undefined8 *)((longlong)afStack_78 + lVar12 + lVar11 + lVar10) =
                 *(undefined8 *)(param_2 + 0x20);
            uVar22 = *(undefined1 *)(param_2 + 0x18);
            *(longlong *)((longlong)&lStack_80 + lVar12 + lVar11 + lVar10) = lVar19;
            *(undefined1 *)((longlong)&lStack_88 + lVar12 + lVar11 + lVar10) = uVar22;
            *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ac68;
            FUN_145079910(pfVar23 + -0xe,uVar16,lVar8,bVar6);
            lVar14 = local_50;
            lVar8 = local_58;
            if (bVar6 < *(byte *)(param_2 + 0x18)) {
              *(byte *)(pfVar23 + 3) = *(byte *)(param_2 + 0x18);
            }
            if ((*(char *)(param_2 + 0x1c) != '\0') || (bVar13)) {
              uVar22 = 1;
            }
            else {
              uVar22 = 0;
            }
            fVar21 = pfVar23[0x18];
            *(float **)((longlong)alStack_70 + lVar12 + lVar11 + lVar10 + 8) = pfVar23 + -0x18;
            *(longlong *)((longlong)alStack_70 + lVar12 + lVar11 + lVar10) = param_1;
            *(float *)((longlong)afStack_78 + lVar12 + lVar11 + lVar10) = fVar21;
            *(undefined1 *)((longlong)&lStack_80 + lVar12 + lVar11 + lVar10) = uVar22;
            *(longlong *)((longlong)&lStack_88 + lVar12 + lVar11 + lVar10) = lVar3;
            *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538acb9;
            FUN_145078120(lVar19,uVar16,lVar8,lVar14);
            if (param_4 != 0) {
              *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538accd;
              FUN_14507b430(param_4,param_1);
            }
            if ((bVar13) && (*(char *)(pfVar23 + 0x2a) != '\0')) {
              fVar21 = pfVar23[0x16];
              if (((uint)fVar21 & 0xf00) == 0x300) {
                fVar21 = pfVar23[0x18];
              }
              uVar18 = (((uint)fVar21 & 0xff) + 7 & 0xfffffff8) * (uint)*(byte *)(pfVar23 + 0x18);
              if (uVar18 != 0) {
                pvVar9 = *(void **)(pfVar23 + 0x26);
                _Dst = *(void **)(pfVar23 + 0x28);
                *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ad1d;
                memcpy(_Dst,pvVar9,(ulonglong)uVar18 << 2);
              }
            }
          }
        }
        else {
          *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ab13;
          iVar17 = FUN_145381e20(pfVar23 + 0x18);
          if (iVar17 == 1) {
            fVar20 = pfVar23[0x16];
            if (((uint)fVar20 & 0xf00) == 0x300) {
              fVar20 = pfVar23[0x18];
            }
            *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ab42;
            FUN_14553c660(pfVar23 + 0x22);
            *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ab50;
            iVar17 = FUN_14553c5a0(pfVar23 + 0x22,uVar18,(uint)fVar20 & 0xff);
            if (iVar17 == 1) {
              uVar18 = (((uint)fVar20 & 0xff) + 7 & 0xfffffff8) * ((uint)fVar21 & 0xff);
              if (uVar18 != 0) {
                pvVar9 = *(void **)(pfVar23 + 0x28);
                _Size = (ulonglong)uVar18 << 2;
                *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ab7e;
                memset(pvVar9,0,_Size);
                pvVar9 = *(void **)(pfVar23 + 0x26);
                *(undefined8 *)((longlong)auStack_b0 + lVar12 + lVar11 + lVar10) = 0x14538ab8f;
                memset(pvVar9,0,_Size);
              }
              bVar13 = true;
              goto LAB_14538ab9f;
            }
          }
        }
        pfVar1 = pfVar23 + 0x2e;
        pfVar23 = pfVar23 + 0x46;
      } while (pfVar1 != (float *)((ulonglong)*(uint *)(param_1 + 0x148) * 0x118 +
                                  *(longlong *)(param_1 + 0x140)));
    }
  }
  return;
}



// FUNCTION 14538ad60 FUN_14538ad60 body=1185 status=ok
// SIG undefined FUN_14538ad60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_14538ad60(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *pvVar8;
  void *_Dst;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  size_t _Size;
  longlong lVar20;
  uint *puVar21;
  float *pfVar22;
  ulonglong uVar23;
  char *pcVar24;
  undefined8 auStack_120 [5];
  longlong alStack_f8 [6];
  ulonglong local_c8 [2];
  uint local_b8;
  longlong local_b0;
  longlong local_a8;
  char *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  uVar19 = (ulonglong)*(uint *)(param_3 + 0x1b0) * 8;
  uVar23 = uVar19 + 0xf;
  if (uVar23 <= uVar19) {
    uVar23 = 0xffffffffffffff0;
  }
  auStack_120[0] = 0x14538adc7;
  lVar9 = -(uVar23 & 0xfffffffffffffff0);
  uVar19 = (ulonglong)*(uint *)(param_3 + 0x1b0) * 4;
  uVar23 = uVar19 + 0xf;
  lVar1 = (longlong)local_c8 + lVar9;
  if (uVar23 <= uVar19) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_120 + lVar9) = 0x14538adef;
  lVar10 = -(uVar23 & 0xfffffffffffffff0);
  lVar20 = (longlong)local_c8 + lVar10 + lVar9;
  local_a8 = lVar20;
  *(undefined8 *)((longlong)auStack_120 + lVar10 + lVar9) = 0x14538ae10;
  uVar13 = FUN_145079400(param_1,param_3 + 0x1a8,lVar1,lVar20);
  if (1 < uVar13) {
    *(undefined8 *)((longlong)auStack_120 + lVar10 + lVar9) = 0x14538ae20;
    cVar12 = FUN_1450e7cb0(param_3);
    if (cVar12 != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x184);
      uVar3 = *(undefined4 *)(param_1 + 0x180);
      *(longlong *)((longlong)alStack_f8 + lVar10 + lVar9) = lVar20;
      *(undefined8 *)((longlong)auStack_120 + lVar10 + lVar9) = 0x14538ae44;
      FUN_1450794b0(uVar13,uVar3,uVar2,lVar1);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)((longlong)auStack_120 + lVar10 + lVar9) = 0x14538ae50;
  lVar16 = FUN_145077820(uVar6);
  uVar15 = *(uint *)(param_1 + 0x148);
  uVar19 = (ulonglong)uVar15;
  lVar7 = *(longlong *)(param_1 + 0x140);
  local_b0 = lVar16;
  local_98 = lVar7;
  uVar23 = uVar19 + 0xf;
  local_b8 = uVar15;
  local_c8[0] = uVar19;
  if (uVar23 <= uVar19) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_120 + lVar10 + lVar9) = 0x14538ae86;
  lVar11 = -(uVar23 & 0xfffffffffffffff0);
  pcVar24 = (char *)((longlong)local_c8 + lVar11 + lVar10 + lVar9);
  local_a0 = pcVar24;
  if (uVar15 != 0) {
    pfVar22 = (float *)(lVar7 + 0x60);
    do {
      *pcVar24 = '\0';
      fVar18 = pfVar22[0x2b];
      uVar15 = (uint)fVar18 & 0xff;
      if (uVar15 == *(byte *)(pfVar22 + 0x18)) {
LAB_14538af57:
        if (*(longlong *)(pfVar22 + 0x22) != 0) {
          uVar6 = *(undefined8 *)(pfVar22 + 0x26);
          *(undefined8 *)(pfVar22 + 0x26) = *(undefined8 *)(pfVar22 + 0x28);
          uVar23 = 0;
          *(undefined8 *)(pfVar22 + 0x28) = uVar6;
          local_c8[1] = 0;
          if (uVar13 != 0) {
            do {
              lVar20 = *(longlong *)(lVar1 + uVar23 * 8);
              if (*(float *)(lVar20 + 0x68) == pfVar22[-0x14]) {
                local_c8[1] = lVar20;
                uVar2 = *(undefined4 *)(local_a8 + uVar23 * 4);
                if ((lVar20 != 0) && (lVar16 != 0)) {
                  pfVar22[-2] = *(float *)(param_2 + 4) * pfVar22[-2];
                  pfVar22[-1] = *(float *)(param_2 + 8) + pfVar22[-1];
                  *pfVar22 = *(float *)(param_2 + 0xc) + *pfVar22;
                  pfVar22[1] = *(float *)(param_2 + 0x10) + pfVar22[1];
                  pfVar22[2] = *(float *)(param_2 + 0x14) * pfVar22[2];
                  cVar12 = *(char *)(param_2 + 0x19);
                  if (cVar12 == '\0') {
                    cVar12 = *(char *)((longlong)pfVar22 + 0xd);
                  }
                  *(char *)((longlong)pfVar22 + 0xd) = cVar12;
                  *(byte *)((longlong)pfVar22 + 0xe) =
                       *(byte *)((longlong)pfVar22 + 0xe) & *(byte *)(param_2 + 0x1a);
                  bVar4 = *(byte *)(pfVar22 + 3);
                  *(undefined4 **)((longlong)alStack_f8 + lVar11 + lVar10 + lVar9 + 0x20) =
                       &local_90;
                  *(undefined8 *)((longlong)alStack_f8 + lVar11 + lVar10 + lVar9 + 0x18) =
                       *(undefined8 *)(param_2 + 0x28);
                  *(undefined8 *)((longlong)alStack_f8 + lVar11 + lVar10 + lVar9 + 0x10) =
                       *(undefined8 *)(param_2 + 0x20);
                  uVar5 = *(undefined1 *)(param_2 + 0x18);
                  *(longlong *)((longlong)alStack_f8 + lVar11 + lVar10 + lVar9 + 8) = lVar16;
                  *(undefined1 *)((longlong)alStack_f8 + lVar11 + lVar10 + lVar9) = uVar5;
                  local_6c = 0x3f800000;
                  local_68 = 0x3f800000;
                  local_64 = 0xffff;
                  local_78 = 0;
                  local_70 = 0;
                  local_90 = 0;
                  uStack_8c = 0;
                  uStack_88 = 0x3f800000;
                  uStack_84 = 0;
                  local_80 = 0x3f800000;
                  *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538b1dd;
                  FUN_145079910(pfVar22 + -0xe,1,local_c8 + 1,bVar4);
                  if (bVar4 < *(byte *)(param_2 + 0x18)) {
                    *(byte *)(pfVar22 + 3) = *(byte *)(param_2 + 0x18);
                  }
                  fVar18 = pfVar22[0x18];
                  *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538b1fc;
                  FUN_145079170(uVar2,&local_90,fVar18,pfVar22 + -0x18);
                  uVar19 = local_c8[0];
                  goto LAB_14538afe9;
                }
                break;
              }
              uVar15 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar15;
            } while (uVar15 < uVar13);
          }
          fVar18 = pfVar22[0x16];
          if (((uint)fVar18 & 0xf00) == 0x300) {
            fVar18 = pfVar22[0x18];
          }
          uVar15 = (((uint)fVar18 & 0xff) + 7 & 0xfffffff8) * (uint)*(byte *)(pfVar22 + 0x18);
          uVar19 = local_c8[0];
          if (uVar15 != 0) {
            pvVar8 = *(void **)(pfVar22 + 0x26);
            *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538afe5;
            memset(pvVar8,0,(ulonglong)uVar15 << 2);
            uVar19 = local_c8[0];
          }
        }
      }
      else {
        *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538aec5;
        iVar14 = FUN_145381e20(pfVar22 + 0x18);
        uVar19 = local_c8[0];
        if (iVar14 == 1) {
          fVar17 = pfVar22[0x16];
          if (((uint)fVar17 & 0xf00) == 0x300) {
            fVar17 = pfVar22[0x18];
          }
          *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538aef4;
          FUN_14553c660(pfVar22 + 0x22);
          *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538af02;
          iVar14 = FUN_14553c5a0(pfVar22 + 0x22,uVar15,(uint)fVar17 & 0xff);
          uVar19 = local_c8[0];
          if (iVar14 == 1) {
            uVar15 = (((uint)fVar17 & 0xff) + 7 & 0xfffffff8) * ((uint)fVar18 & 0xff);
            if (uVar15 != 0) {
              pvVar8 = *(void **)(pfVar22 + 0x28);
              _Size = (ulonglong)uVar15 << 2;
              *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538af30;
              memset(pvVar8,0,_Size);
              pvVar8 = *(void **)(pfVar22 + 0x26);
              *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538af41;
              memset(pvVar8,0,_Size);
            }
            lVar16 = local_b0;
            uVar19 = local_c8[0];
            *pcVar24 = '\x01';
            goto LAB_14538af57;
          }
        }
      }
LAB_14538afe9:
      pfVar22 = pfVar22 + 0x46;
      pcVar24 = pcVar24 + 1;
      uVar19 = uVar19 - 1;
      local_c8[0] = uVar19;
      lVar20 = local_a8;
      lVar16 = local_b0;
      uVar15 = local_b8;
    } while (uVar19 != 0);
  }
  pcVar24 = local_a0;
  if (1 < uVar13) {
    *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538b02c;
    cVar12 = FUN_1450e7c70(param_3);
    if (cVar12 != '\x01') {
      *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538b042;
      FUN_14507a470(uVar13,lVar1,lVar20,param_1 + 0x28);
    }
  }
  if (param_4 != 0) {
    *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538b059;
    FUN_14507b430(param_4,param_1);
  }
  if (uVar15 != 0) {
    puVar21 = (uint *)(local_98 + 0xc0);
    uVar23 = (ulonglong)uVar15;
    do {
      if ((*pcVar24 != '\0') && ((byte)puVar21[0x12] != 0)) {
        uVar13 = puVar21[-2];
        if ((uVar13 & 0xf00) == 0x300) {
          uVar13 = *puVar21;
        }
        uVar13 = ((uVar13 & 0xff) + 7 & 0xfffffff8) * (uint)(byte)*puVar21;
        if (uVar13 != 0) {
          pvVar8 = *(void **)(puVar21 + 0xe);
          _Dst = *(void **)(puVar21 + 0x10);
          *(undefined8 *)((longlong)auStack_120 + lVar11 + lVar10 + lVar9) = 0x14538b0b7;
          memcpy(_Dst,pvVar8,(ulonglong)uVar13 << 2);
        }
      }
      pcVar24 = pcVar24 + 1;
      puVar21 = puVar21 + 0x46;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  return;
}



// FUNCTION 14538b210 FUN_14538b210 body=598 status=ok
// SIG undefined FUN_14538b210(void)

void FUN_14538b210(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  size_t _Size;
  float *pfVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (lVar2 != (ulonglong)*(uint *)(param_1 + 0x148) * 0x118 + lVar2) {
    pfVar10 = (float *)(lVar2 + 0x60);
    do {
      fVar8 = pfVar10[0x2b];
      bVar3 = false;
      uVar6 = (uint)fVar8 & 0xff;
      if (uVar6 == *(byte *)(pfVar10 + 0x18)) {
LAB_14538b30c:
        if (*(longlong *)(pfVar10 + 0x22) != 0) {
          uVar9 = *(undefined8 *)(pfVar10 + 0x26);
          *(undefined8 *)(pfVar10 + 0x26) = *(undefined8 *)(pfVar10 + 0x28);
          *(undefined8 *)(pfVar10 + 0x28) = uVar9;
          pfVar10[-2] = pfVar10[-2] * *(float *)(param_2 + 4);
          pfVar10[-1] = *(float *)(param_2 + 8) + pfVar10[-1];
          *pfVar10 = *(float *)(param_2 + 0xc) + *pfVar10;
          pfVar10[1] = *(float *)(param_2 + 0x10) + pfVar10[1];
          pfVar10[2] = *(float *)(param_2 + 0x14) * pfVar10[2];
          cVar4 = *(char *)(param_2 + 0x19);
          if (cVar4 == '\0') {
            cVar4 = *(char *)((longlong)pfVar10 + 0xd);
          }
          *(char *)((longlong)pfVar10 + 0xd) = cVar4;
          *(byte *)((longlong)pfVar10 + 0xe) =
               *(byte *)((longlong)pfVar10 + 0xe) & *(byte *)(param_2 + 0x1a);
          if ((*(char *)(param_2 + 0x1c) != '\0') || (bVar3)) {
            uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          }
          else {
            uVar9 = 0;
          }
          FUN_145077e70(uVar9,pfVar10[0x18],param_1,pfVar10 + -0x18);
          if (param_3 != 0) {
            FUN_14507b430(param_3,param_1);
          }
          if ((bVar3) && (*(char *)(pfVar10 + 0x2a) != '\0')) {
            fVar8 = pfVar10[0x16];
            if (((uint)fVar8 & 0xf00) == 0x300) {
              fVar8 = pfVar10[0x18];
            }
            uVar6 = (((uint)fVar8 & 0xff) + 7 & 0xfffffff8) * (uint)*(byte *)(pfVar10 + 0x18);
            if (uVar6 != 0) {
              memcpy(*(void **)(pfVar10 + 0x28),*(void **)(pfVar10 + 0x26),(ulonglong)uVar6 << 2);
            }
          }
        }
      }
      else {
        iVar5 = FUN_145381e20(pfVar10 + 0x18);
        if (iVar5 == 1) {
          fVar7 = pfVar10[0x16];
          if (((uint)fVar7 & 0xf00) == 0x300) {
            fVar7 = pfVar10[0x18];
          }
          FUN_14553c660(pfVar10 + 0x22);
          iVar5 = FUN_14553c5a0(pfVar10 + 0x22,uVar6,(uint)fVar7 & 0xff);
          if (iVar5 == 1) {
            uVar6 = (((uint)fVar7 & 0xff) + 7 & 0xfffffff8) * ((uint)fVar8 & 0xff);
            if (uVar6 != 0) {
              _Size = (ulonglong)uVar6 << 2;
              memset(*(void **)(pfVar10 + 0x28),0,_Size);
              memset(*(void **)(pfVar10 + 0x26),0,_Size);
            }
            bVar3 = true;
            goto LAB_14538b30c;
          }
        }
      }
      pfVar1 = pfVar10 + 0x2e;
      pfVar10 = pfVar10 + 0x46;
    } while (pfVar1 != (float *)((ulonglong)*(uint *)(param_1 + 0x148) * 0x118 +
                                *(longlong *)(param_1 + 0x140)));
  }
  return;
}



// FUNCTION 14538b470 FUN_14538b470 body=1031 status=ok
// SIG undefined FUN_14538b470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14538b470(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  void *pvVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong *plVar14;
  size_t _Size;
  uint *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  char *pcVar18;
  longlong *plVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined1 local_74 [4];
  char *local_70;
  longlong local_68;
  void *local_60;
  undefined8 local_58;
  
  uStack_a0 = 0x14538b49b;
  pbVar10 = (byte *)FUN_1453557d0(param_1,local_74);
  uVar8 = *(uint *)(param_1 + 0x148);
  bVar3 = *pbVar10;
  pvVar11 = (void *)0x0;
  uVar22 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  if (uVar8 != 0) {
    uStack_a0 = 0x14538b4d2;
    pvVar12 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar8 << 4);
    puVar16 = auStack_98;
    if (pvVar12 == (void *)0x0) goto LAB_14538b857;
    local_60 = pvVar12;
    local_58 = CONCAT44(uVar8,(undefined4)local_58);
  }
  local_78 = *(uint *)(param_1 + 0x148);
  uVar23 = (ulonglong)local_78;
  local_68 = *(longlong *)(param_1 + 0x140);
  uVar13 = (ulonglong)local_78 + 0xf;
  if (uVar13 <= local_78) {
    uVar13 = 0xffffffffffffff0;
  }
  uStack_a0 = 0x14538b519;
  lVar6 = -(uVar13 & 0xfffffffffffffff0);
  pcVar18 = local_74 + lVar6 + -4;
  local_70 = pcVar18;
  if (local_78 != 0) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x140) + 0xe8);
    uVar22 = 0;
    do {
      *pcVar18 = '\0';
      uVar8 = *(uint *)((longlong)plVar19 + 0x24);
      if ((uVar8 & 0xff) == (uint)*(byte *)(plVar19 + -5)) {
LAB_14538b5ce:
        if (*plVar19 != 0) {
          lVar5 = plVar19[2];
          plVar19[2] = plVar19[3];
          plVar19[3] = lVar5;
          bVar4 = *(byte *)(plVar19 + -5);
          uVar8 = (bVar3 + 7 & 0xfffffff8) * (uint)bVar4;
          if (uVar8 != 0) {
            pvVar11 = (void *)plVar19[2];
            *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b608;
            memset(pvVar11,0,(ulonglong)uVar8 << 2);
          }
          uVar22 = uVar22 + bVar4;
          plVar2 = plVar19 + -0x1d;
          lVar5 = *plVar2;
          *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b625;
          plVar14 = (longlong *)FUN_14538b930(&local_60,lVar5);
          *plVar14 = *plVar2;
          plVar14[1] = (longlong)plVar2;
        }
      }
      else {
        *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b55c;
        iVar7 = FUN_145381e20();
        if (iVar7 == 1) {
          uVar20 = *(uint *)(plVar19 + -6);
          if ((uVar20 & 0xf00) == 0x300) {
            uVar20 = *(uint *)(plVar19 + -5);
          }
          *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b584;
          FUN_14553c660(plVar19);
          *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b592;
          iVar7 = FUN_14553c5a0();
          if (iVar7 == 1) {
            uVar8 = ((uVar20 & 0xff) + 7 & 0xfffffff8) * (uVar8 & 0xff);
            if (uVar8 != 0) {
              pvVar11 = (void *)plVar19[3];
              _Size = (ulonglong)uVar8 << 2;
              *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b5bd;
              memset(pvVar11,0,_Size);
              pvVar11 = (void *)plVar19[2];
              *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b5cb;
              memset(pvVar11,0,_Size);
            }
            *pcVar18 = '\x01';
            goto LAB_14538b5ce;
          }
        }
      }
      plVar19 = plVar19 + 0x23;
      pcVar18 = pcVar18 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  pvVar11 = local_60;
  pcVar18 = local_70;
  if (bVar3 < uVar22) {
    uVar22 = (uint)bVar3;
  }
  uVar8 = 0;
  uVar13 = 0;
  if (uVar22 != 0) {
    do {
      uVar9 = bVar3 - uVar8;
      uVar20 = *(uint *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xc0) & 0xff;
      if (uVar9 <= uVar20) {
        uVar20 = uVar9;
      }
      uVar9 = 0;
      if (3 < uVar20) {
        uVar17 = bVar3 + 7 >> 3;
        uVar21 = uVar8 + 2;
        do {
          iVar7 = uVar17 * uVar9;
          uVar9 = uVar9 + 4;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xf8) +
           ((ulonglong)(uint)(iVar7 * 8) + (ulonglong)(uVar21 - 2)) * 4) = 0x3f800000;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xf8) +
           ((ulonglong)((uVar21 + ~uVar8) * uVar17 * 8) + (ulonglong)(uVar21 - 1)) * 4) = 0x3f800000
          ;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xf8) +
           ((ulonglong)((uVar21 - uVar8) * uVar17 * 8) + (ulonglong)uVar21) * 4) = 0x3f800000;
          iVar7 = (1 - uVar8) + uVar21;
          uVar1 = uVar21 + 1;
          uVar21 = uVar21 + 4;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xf8) +
           ((ulonglong)(iVar7 * uVar17 * 8) + (ulonglong)uVar1) * 4) = 0x3f800000;
        } while (uVar9 < uVar20 - 3);
      }
      if (uVar9 < uVar20) {
        do {
          uVar17 = uVar9 + uVar8;
          uVar21 = (bVar3 + 7 & 0xfffffff8) * uVar9;
          uVar9 = uVar9 + 1;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xf8) +
           ((ulonglong)uVar21 + (ulonglong)uVar17) * 4) = 0x3f800000;
        } while (uVar9 < uVar20);
      }
      uVar8 = uVar8 + *(byte *)(*(longlong *)((longlong)local_60 + uVar13 * 0x10 + 8) + 0xc0);
      uVar13 = (ulonglong)((int)uVar13 + 1);
    } while (uVar8 < uVar22);
  }
  if (param_2 != 0) {
    *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b7eb;
    FUN_14507b430(param_2,param_1);
  }
  puVar16 = auStack_98 + lVar6;
  if (local_78 != 0) {
    uVar13 = (ulonglong)local_78;
    puVar15 = (uint *)(local_68 + 0xc0);
    do {
      if ((*pcVar18 != '\0') && ((byte)puVar15[0x12] != 0)) {
        uVar8 = puVar15[-2];
        if ((uVar8 & 0xf00) == 0x300) {
          uVar8 = *puVar15;
        }
        uVar8 = ((uVar8 & 0xff) + 7 & 0xfffffff8) * (uint)(byte)*puVar15;
        if (uVar8 != 0) {
          pvVar12 = *(void **)(puVar15 + 0xe);
          _Dst = *(void **)(puVar15 + 0x10);
          *(undefined8 *)(auStack_98 + lVar6 + -8) = 0x14538b847;
          memcpy(_Dst,pvVar12,(ulonglong)uVar8 << 2);
        }
      }
      pcVar18 = pcVar18 + 1;
      puVar15 = puVar15 + 0x46;
      uVar13 = uVar13 - 1;
      puVar16 = auStack_98 + lVar6;
    } while (uVar13 != 0);
  }
LAB_14538b857:
  if (pvVar11 != (void *)0x0) {
    *(undefined8 *)(puVar16 + -8) = 0x14538b866;
    AK::MemoryMgr::Free(0,pvVar11);
  }
  return;
}



// FUNCTION 14538b880 FUN_14538b880 body=174 status=ok
// SIG undefined FUN_14538b880(void)

undefined8 FUN_14538b880(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  __uint64 _Var4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  _Var4 = (ulonglong)uVar5 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var4);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      if (uVar6 != 0) {
        lVar3 = 0;
        do {
          uVar1 = ((undefined8 *)(lVar3 + *param_1))[1];
          *(undefined8 *)(lVar3 + (longlong)pvVar2) = *(undefined8 *)(lVar3 + *param_1);
          ((undefined8 *)(lVar3 + (longlong)pvVar2))[1] = uVar1;
          uVar6 = uVar6 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var4);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 14538b930 FUN_14538b930 body=343 status=ok
// SIG undefined FUN_14538b930(void)

ulonglong * FUN_14538b930(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)(param_1 + 1);
  iVar8 = 0;
  if (uVar7 != 0) {
    do {
      iVar2 = (uVar7 >> 1) + iVar8;
      lVar5 = (longlong)iVar2 * 0x10;
      uVar6 = *(ulonglong *)(lVar5 + *param_1);
      if (uVar6 == param_2) {
        *param_3 = 1;
        return (ulonglong *)(*param_1 + lVar5);
      }
      uVar3 = uVar7 - 1;
      iVar2 = iVar2 + 1;
      if (param_2 <= uVar6) {
        uVar3 = uVar7;
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      uVar7 = uVar3 >> 1;
    } while (uVar7 != 0);
  }
  *param_3 = 0;
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 1);
  if (*param_1 + (longlong)iVar8 * 0x10 == 0) {
    if (uVar7 <= uVar3) {
      iVar8 = (uVar7 >> 1) + uVar7;
      if (uVar7 == 0) {
        iVar8 = 1;
      }
      cVar1 = FUN_14538b880(param_1,iVar8);
      if (cVar1 == '\0') {
        return (ulonglong *)0x0;
      }
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
      return (ulonglong *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    puVar4 = (ulonglong *)((ulonglong)uVar7 * 0x10 + *param_1);
  }
  else {
    uVar6 = (longlong)iVar8 * 0x10 >> 4;
    if (uVar7 <= uVar3) {
      iVar8 = (uVar7 >> 1) + uVar7;
      if (uVar7 == 0) {
        iVar8 = 1;
      }
      cVar1 = FUN_14538b880(param_1,iVar8);
      if (cVar1 == '\0') {
        return (ulonglong *)0x0;
      }
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
      return (ulonglong *)0x0;
    }
    uVar7 = (uint)uVar6;
    lVar5 = (uVar6 & 0xffffffff) * 0x10;
    _Src = (void *)(*param_1 + lVar5);
    if (uVar7 < *(uint *)(param_1 + 1)) {
      memmove((void *)((longlong)_Src + 0x10),_Src,
              (ulonglong)((*(uint *)(param_1 + 1) - uVar7) * 0x10));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    puVar4 = (ulonglong *)(*param_1 + lVar5);
  }
  if (puVar4 != (ulonglong *)0x0) {
    *puVar4 = param_2;
  }
  return puVar4;
}



// FUNCTION 14538ba90 FUN_14538ba90 body=31 status=ok
// SIG undefined FUN_14538ba90(void)

void FUN_14538ba90(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x18) != -1)) {
    FUN_1450b7c10(DAT_14c790fe0,*(int *)(param_1 + 0x18),param_1);
    return;
  }
  return;
}



// FUNCTION 14538bab0 FUN_14538bab0 body=326 status=ok
// SIG undefined FUN_14538bab0(void)

undefined8 FUN_14538bab0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  __uint64 _Var12;
  undefined4 *puVar13;
  ulonglong uVar14;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar14 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var12 = (ulonglong)(iVar5 + uVar3) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar11 = AK::MemoryMgr::Malloc(0,_Var12);
    if (pvVar11 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar11)) {
        if (uVar14 != 0) {
          puVar13 = (undefined4 *)((longlong)pvVar11 + 0x18);
          lVar6 = -(longlong)pvVar11;
          do {
            if ((undefined8 *)(puVar13 + -6) != (undefined8 *)0x0) {
              *(undefined8 *)(puVar13 + -4) = 0;
              *(undefined8 *)(puVar13 + -2) = 0;
              *puVar13 = 0;
            }
            lVar4 = *param_1;
            puVar1 = (undefined8 *)((longlong)puVar13 + lVar4 + lVar6 + -0x18);
            uVar10 = puVar1[1];
            *(undefined8 *)(puVar13 + -6) = *puVar1;
            *(undefined8 *)(puVar13 + -4) = uVar10;
            puVar2 = (undefined4 *)((longlong)puVar13 + lVar4 + lVar6 + -8);
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            puVar13[-2] = *puVar2;
            puVar13[-1] = uVar7;
            *puVar13 = uVar8;
            puVar13[1] = uVar9;
            *(undefined8 *)(puVar13 + 2) = *(undefined8 *)((longlong)puVar13 + lVar4 + lVar6 + 8);
            lVar4 = *param_1 + 8 + lVar6 + -0x18;
            if ((*(longlong *)((longlong)puVar13 + lVar4 + 8) != 0) &&
               (*(int *)((longlong)puVar13 + lVar4 + 0x18) != -1)) {
              FUN_1450b7c10();
            }
            puVar13 = puVar13 + 10;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14538bbdf;
    }
  }
  else {
    pvVar11 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var12);
    if (pvVar11 != (void *)0x0) {
LAB_14538bbdf:
      *param_1 = (longlong)pvVar11;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14538bc00 FUN_14538bc00 body=140 status=ok
// SIG undefined FUN_14538bc00(void)

void FUN_14538bc00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = lVar2 + (ulonglong)*(uint *)(param_1 + 1) * 0x28;
    if (lVar2 != lVar1) {
      piVar3 = (int *)(lVar2 + 0x20);
      do {
        if ((*(longlong *)(piVar3 + -4) != 0) && (*piVar3 != -1)) {
          FUN_1450b7c10(DAT_14c790fe0,*piVar3,piVar3 + -6);
        }
        lVar2 = lVar2 + 0x28;
        piVar3 = piVar3 + 10;
      } while (lVar2 != lVar1);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14538bc90 FUN_14538bc90 body=165 status=ok
// SIG undefined FUN_14538bc90(void)

undefined8 FUN_14538bc90(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_28;
  longlong lStack_20;
  undefined4 local_18;
  
  cVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (cVar1 != '\0') {
    local_28 = 0;
    lStack_20 = 0;
    local_18 = 0;
    FUN_1450b7ac0(DAT_14c790fe0,*(undefined4 *)(param_1 + 3),&local_28);
    if (lStack_20 != 0) {
      iVar2 = (**(code **)(*param_2 + 0x28))(param_2,lStack_20,param_1[1]);
      if (iVar2 == 1) {
        FUN_1450b7c10(DAT_14c790fe0,*(undefined4 *)(param_1 + 3),param_1);
        param_1[1] = lStack_20;
        *param_1 = local_28;
        return 1;
      }
      FUN_1450b7c10(DAT_14c790fe0,*(undefined4 *)(param_1 + 3),&local_28);
    }
  }
  return 0;
}



// FUNCTION 14538bd40 FUN_14538bd40 body=297 status=ok
// SIG undefined FUN_14538bd40(void)

int * FUN_14538bd40(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 local_38;
  longlong lStack_30;
  int local_28;
  
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  FUN_1450b7ac0(DAT_14c790fe0,param_3,&local_38);
  if (lStack_30 == 0) {
    return (int *)0x0;
  }
  piVar3 = (int *)*param_1;
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  piVar1 = piVar3 + uVar5 * 10;
  for (; (piVar3 != piVar1 && (*piVar3 != param_2)); piVar3 = piVar3 + 10) {
  }
  piVar4 = piVar3 + 2;
  if (piVar3 == piVar1) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar5) &&
        (cVar2 = FUN_14538bab0(param_1), cVar2 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar5)) goto LAB_14538bdd8;
    piVar1 = (int *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    piVar4 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      *piVar1 = param_2;
      piVar4 = piVar1 + 2;
    }
  }
  if (piVar4 != (int *)0x0) {
    *(longlong *)(piVar4 + 2) = lStack_30;
    piVar4[4] = local_28;
    *(undefined8 *)piVar4 = local_38;
    piVar4[6] = param_3;
    return piVar4;
  }
LAB_14538bdd8:
  FUN_1450b7c10(DAT_14c790fe0,param_3,&local_38);
  return (int *)0x0;
}



// FUNCTION 14538be90 FUN_14538be90 body=45 status=ok
// SIG undefined FUN_14538be90(void)

void FUN_14538be90(undefined8 param_1,char *param_2,ErrorLevel param_3)

{
  AK::Monitor::PostString(param_2,param_3,0,0xffffffffffffffff,0,false);
  return;
}



// FUNCTION 14538bec0 FUN_14538bec0 body=122 status=ok
// SIG undefined FUN_14538bec0(void)

undefined8 FUN_14538bec0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != lVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28) {
    do {
      if ((*(longlong *)(lVar2 + 8) == param_2) &&
         (cVar1 = FUN_14538bc90(lVar2 + 8,param_3), cVar1 == '\0')) {
        return 1;
      }
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28);
  }
  return 0;
}



// FUNCTION 14538bf40 FUN_14538bf40 body=148 status=ok
// SIG undefined FUN_14538bf40(void)

undefined8 FUN_14538bf40(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != lVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28) {
    do {
      if ((*(longlong *)(lVar2 + 0x10) == param_2) &&
         ((param_4 == '\0' || (cVar1 = FUN_14538bc90(lVar2 + 8,param_3), cVar1 == '\0')))) {
        return 1;
      }
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28);
  }
  return 0;
}



// FUNCTION 14538bff0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__149d43a48;
  FUN_14538bc00(this + 0x10);
  *(undefined ***)this = &PTR_FUN_149c26410;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x20);
  }
  return this;
}



// FUNCTION 14538c040 FUN_14538c040 body=31 status=ok
// SIG undefined FUN_14538c040(void)

undefined8 * FUN_14538c040(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__149d43af0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14538c060 FUN_14538c060 body=44 status=ok
// SIG undefined FUN_14538c060(void)

void FUN_14538c060(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__149d43a48;
  FUN_14538bc00(param_1 + 2);
  *param_1 = &PTR_FUN_149c26410;
  return;
}



// FUNCTION 14538c090 FUN_14538c090 body=9 status=ok
// SIG undefined FUN_14538c090(void)

void FUN_14538c090(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 14538c140 FUN_14538c140 body=215 status=ok
// SIG undefined FUN_14538c140(void)

void FUN_14538c140(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  
  piVar2 = *(int **)(param_1 + 0x10);
  piVar4 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 10;
  for (; (piVar2 != piVar4 && (*piVar2 != param_2)); piVar2 = piVar2 + 10) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar4) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    local_res8[0] = -1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    piVar4 = (int *)(lVar1 + -0x18);
    if (lVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    FUN_1450eba70(piVar4,*(undefined4 *)(param_1 + 8),param_2,local_res8,*(undefined8 *)(lVar1 + 8))
    ;
    if ((local_res8[0] == -1) ||
       (piVar3 = (int *)FUN_14538bd40(param_1 + 0x10,param_2), piVar3 == (int *)0x0)) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = piVar3[4];
  *param_3 = *(undefined8 *)(piVar3 + 2);
  return;
}



// FUNCTION 14538c2c0 FUN_14538c2c0 body=71 status=ok
// SIG undefined FUN_14538c2c0(void)

undefined8 FUN_14538c2c0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 local_res8 [32];
  
  *(undefined1 *)param_2 = 0;
  *param_2 = *param_2 & 0xff;
  lVar1 = FUN_145389380(*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    puVar2 = (uint *)FUN_1453557d0(lVar1,local_res8);
    *param_2 = *puVar2;
    return 1;
  }
  return 2;
}



// FUNCTION 14538c310 FUN_14538c310 body=112 status=ok
// SIG undefined FUN_14538c310(void)

undefined8 FUN_14538c310(longlong param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined1 *)param_2 = 0;
  *param_2 = *param_2 & 0xff;
  lVar2 = FUN_145389380(*(undefined8 *)(param_1 + 0x20));
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x158) != 0)) {
    lVar2 = FUN_1450a1a60(*(longlong *)(lVar2 + 0x158) + 0x70);
    if (lVar2 != 0) {
      *param_2 = *(uint *)(lVar2 + 0x60);
      uVar1 = *(undefined8 *)(lVar2 + 0x98);
      *param_3 = *(undefined8 *)(lVar2 + 0x90);
      param_3[1] = uVar1;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 14538c3b0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__149d43a48;
  FUN_14538bc00(this + 0x10);
  *(undefined ***)this = &PTR_FUN_149c26410;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x28);
  }
  return this;
}



// FUNCTION 14538c400 FUN_14538c400 body=36 status=ok
// SIG undefined FUN_14538c400(void)

undefined8 *
FUN_14538c400(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  param_1[5] = param_4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__149d43b98;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 14538c4c0 FUN_14538c4c0 body=23 status=ok
// SIG undefined FUN_14538c4c0(void)

undefined8 FUN_14538c4c0(longlong param_1)

{
  FUN_145379cd0(*(undefined8 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14538c510 FUN_14538c510 body=176 status=ok
// SIG undefined FUN_14538c510(void)

void FUN_14538c510(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 10;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 10) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    local_res8[0] = -1;
    FUN_145377170(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 8),param_2,local_res8);
    if ((local_res8[0] == -1) ||
       (piVar3 = (int *)FUN_14538bd40((undefined8 *)(param_1 + 0x10),param_2), piVar3 == (int *)0x0)
       ) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = piVar3[4];
  *param_3 = *(undefined8 *)(piVar3 + 2);
  return;
}



// FUNCTION 14538c700 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__149d43a48;
  FUN_14538bc00(this + 0x10);
  *(undefined ***)this = &PTR_FUN_149c26410;
  if ((param_1 & 1) != 0) {
    thunk_FUN_1400020a8(this,0x30);
  }
  return this;
}



// FUNCTION 14538c750 FUN_14538c750 body=184 status=ok
// SIG undefined FUN_14538c750(void)

uint * FUN_14538c750(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = *(uint **)(param_2 + 2);
  uVar4 = *param_2;
  uVar6 = param_2[1];
  param_1[0] = 0;
  param_1[1] = 0;
  uVar8 = *puVar1;
  uVar7 = 1;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  uVar3 = 0;
  param_1[4] = 0;
  *(uint **)(param_1 + 6) = puVar1;
  if (uVar8 == 0) {
    param_1[4] = 1;
    while (uVar7 < uVar6 * uVar4 + 0x1f >> 5) {
      uVar8 = puVar1[uVar7];
      param_1[5] = uVar8;
      uVar3 = uVar7;
      if (uVar8 != 0) goto LAB_14538c7c4;
      uVar7 = uVar7 + 1;
      param_1[4] = uVar7;
    }
    param_1[5] = 0;
  }
  else {
LAB_14538c7c4:
    iVar2 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    iVar5 = 0x20;
    if (uVar8 != 0) {
      iVar5 = iVar2;
    }
    uVar3 = uVar3 * 0x20 + iVar5;
    uVar4 = uVar3 / uVar6;
    uVar6 = uVar3 % uVar6;
    param_1[5] = ~(1 << ((byte)iVar5 & 0x1f)) & uVar8;
  }
  *param_1 = uVar4;
  param_1[1] = uVar6;
  return param_1;
}



// FUNCTION 14538c810 FUN_14538c810 body=54 status=ok
// SIG undefined FUN_14538c810(void)

int * FUN_14538c810(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  param_1[1] = iVar2;
  param_1[3] = iVar2;
  *param_1 = iVar1;
  param_1[2] = iVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 2);
  param_1[5] = 0;
  param_1[4] = iVar2 * iVar1 + 0x1fU >> 5;
  return param_1;
}



// FUNCTION 14538c850 FUN_14538c850 body=150 status=ok
// SIG undefined FUN_14538c850(void)

uint * FUN_14538c850(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[5];
  if (uVar3 == 0) {
    param_1[4] = param_1[4] + 1;
    uVar2 = param_1[4];
    while( true ) {
      if (param_1[3] * param_1[2] + 0x1f >> 5 <= uVar2) {
        *param_1 = param_1[2];
        param_1[1] = param_1[3];
        param_1[5] = 0;
        return param_1;
      }
      uVar3 = *(uint *)(*(longlong *)(param_1 + 6) + (ulonglong)uVar2 * 4);
      param_1[5] = uVar3;
      if (uVar3 != 0) break;
      uVar2 = uVar2 + 1;
      param_1[4] = uVar2;
    }
  }
  iVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  param_1[5] = ~(1 << ((byte)iVar1 & 0x1f)) & uVar3;
  uVar3 = param_1[4] * 0x20 + iVar1;
  *param_1 = uVar3 / param_1[3];
  param_1[1] = uVar3 % param_1[3];
  return param_1;
}



// FUNCTION 14538c8f0 FUN_14538c8f0 body=13 status=ok
// SIG undefined FUN_14538c8f0(void)

undefined8 * FUN_14538c8f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14538c900 FUN_14538c900 body=54 status=ok
// SIG undefined FUN_14538c900(void)

void FUN_14538c900(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[1]);
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 14538c940 FUN_14538c940 body=119 status=ok
// SIG undefined FUN_14538c940(void)

undefined8 FUN_14538c940(int *param_1,int param_2,int param_3)

{
  void *_Dst;
  uint uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = (param_2 * param_3 + 0x1fU >> 5) << 2;
    _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)uVar1);
    *(void **)(param_1 + 2) = _Dst;
    if (_Dst == (void *)0x0) {
      return 0x34;
    }
    memset(_Dst,0,(ulonglong)uVar1);
    return 1;
  }
  return 0x1f;
}



// FUNCTION 14538c9c0 FUN_14538c9c0 body=54 status=ok
// SIG undefined FUN_14538c9c0(void)

void FUN_14538c9c0(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)param_1[1]);
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 14538ca00 FUN_14538ca00 body=39 status=ok
// SIG undefined FUN_14538ca00(void)

void FUN_14538ca00(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_2 * *(int *)(param_1 + 4) + param_3;
  puVar1 = (uint *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 14538ca30 FUN_14538ca30 body=162 status=ok
// SIG undefined FUN_14538ca30(void)

undefined8 FUN_14538ca30(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  void *_Dst;
  undefined8 uVar2;
  
  uVar1 = (param_2 * param_3 + 0x1fU >> 5) << 2;
  _Dst = AK::MemoryMgr::Realloc(5,*(void **)(param_1 + 2),(ulonglong)uVar1);
  if (_Dst == (void *)0x0) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      AK::MemoryMgr::Free(5,*(void **)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    uVar2 = 0x34;
  }
  else {
    memset(_Dst,0,(ulonglong)uVar1);
    uVar2 = 1;
    *param_1 = param_2;
    param_1[1] = param_3;
    *(void **)(param_1 + 2) = _Dst;
  }
  return uVar2;
}


