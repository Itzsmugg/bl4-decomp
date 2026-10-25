// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14916982c FUN_14916982c body=209 status=ok
// SIG undefined FUN_14916982c(void)

void FUN_14916982c(longlong param_1,double *param_2,double *param_3,char param_4,double *param_5,
                  double *param_6,char *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*param_7 == '\0') {
    param_6[2] = param_3[2];
    dVar1 = param_3[1];
    *param_6 = *param_3;
    param_6[1] = dVar1;
    dVar1 = *param_3;
    dVar3 = param_3[1];
    param_5[2] = param_3[2];
    *param_5 = dVar1;
    param_5[1] = dVar3;
    *param_7 = '\x01';
  }
  dVar1 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  if (param_4 != '\0') {
    dVar2 = *(double *)(param_1 + 0x20);
    dVar4 = (dVar4 - DAT_14c846520) * dVar2 + DAT_14c846520;
    dVar3 = (dVar3 - DAT_14c846518) * dVar2 + DAT_14c846518;
    dVar1 = (dVar1 - DAT_14c846510) * dVar2 + DAT_14c846510;
  }
  *param_6 = dVar1 * *param_6;
  param_6[1] = dVar3 * param_6[1];
  param_6[2] = dVar4 * param_6[2];
  param_5[2] = param_6[2];
  dVar1 = param_6[1];
  *param_5 = *param_6;
  param_5[1] = dVar1;
  return;
}



// FUNCTION 1491698fe FUN_1491698fe body=207 status=ok
// SIG undefined FUN_1491698fe(void)

void FUN_1491698fe(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined1 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149169af6(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar2,uVar6,uVar8,
                uVar9);
  return;
}



// FUNCTION 1491699e2 FUN_1491699e2 body=274 status=ok
// SIG undefined FUN_1491699e2(void)

void FUN_1491699e2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0xa0;
  local_148 = param_1 + 0x80;
  local_150 = param_1 + 0x60;
  local_158 = *(undefined1 *)(param_1 + 0x51);
  FUN_149169af6(&local_138,param_1 + 0x10,param_1 + 0x30,*(undefined1 *)(param_1 + 0x50));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149169af6 FUN_149169af6 body=576 status=ok
// SIG undefined FUN_149169af6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149169af6(longlong param_1,undefined1 (*param_2) [16],double *param_3,char param_4,
                  char param_5,double *param_6,double *param_7,char *param_8)

{
  double dVar1;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  double dVar2;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_8 == '\0') {
    dVar15 = *param_3;
    dVar18 = param_3[1];
    dVar2 = param_3[3];
    param_7[2] = param_3[2];
    param_7[3] = dVar2;
    *param_7 = dVar15;
    param_7[1] = dVar18;
    dVar15 = *param_3;
    dVar18 = param_3[1];
    dVar2 = param_3[3];
    param_6[2] = param_3[2];
    param_6[3] = dVar2;
    *param_6 = dVar15;
    param_6[1] = dVar18;
    *param_8 = '\x01';
  }
  local_a8 = param_2[1];
  local_b8 = *param_2;
  if (param_5 != '\0') {
    FUN_144a44da6(&local_98,&DAT_14c8463d0,local_b8,*(undefined8 *)(param_1 + 0x20));
    dVar15 = local_88 * local_88 + local_98 * local_98;
    dVar18 = dStack_80 * dStack_80 + dStack_90 * dStack_90;
    auVar16._0_8_ = dVar15 + dVar18;
    auVar16._8_8_ = dVar15 + dVar18;
    uVar10 = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar17 = sqrtpd(auVar16,auVar16);
    auVar19 = divpd(_DAT_149934d80,auVar17);
    auVar20._0_8_ = auVar19._0_8_ * local_88;
    auVar20._8_8_ = auVar19._8_8_ * dStack_80;
    uVar3 = (ulonglong)(dStack_90 * auVar19._8_8_) & uVar10;
    auVar17._8_4_ = (int)uVar10;
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar17._12_4_ = (int)(uVar10 >> 0x20);
    local_a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar17);
    local_b8._8_4_ = (int)uVar3;
    local_b8._0_8_ =
         (ulonglong)(local_98 * auVar19._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_)
    ;
    local_b8._12_4_ = (int)(uVar3 >> 0x20);
  }
  if (param_4 == '\0') {
    uVar11 = *(undefined4 *)(param_7 + 2);
    uVar12 = *(undefined4 *)((longlong)param_7 + 0x14);
    uVar13 = *(undefined4 *)(param_7 + 3);
    uVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
    pdVar9 = (double *)local_b8;
    pdVar8 = param_7;
  }
  else {
    pdVar8 = (double *)local_b8;
    pdVar9 = param_7;
    uVar11 = local_a8._0_4_;
    uVar12 = local_a8._4_4_;
    uVar13 = local_a8._8_4_;
    uVar14 = local_a8._12_4_;
  }
  dVar4 = *pdVar9;
  dVar5 = pdVar9[1];
  dVar6 = pdVar9[2];
  dVar7 = pdVar9[3];
  dVar15 = pdVar8[1];
  dVar18 = pdVar8[1];
  dVar1 = *pdVar8;
  dVar2 = *pdVar8;
  *param_7 = dVar5 * (double)CONCAT44(uVar12,uVar11) * -1.0 +
             dVar6 * dVar15 + dVar1 * dVar7 * 1.0 + (double)CONCAT44(uVar14,uVar13) * dVar4;
  param_7[1] = dVar4 * (double)CONCAT44(uVar12,uVar11) * 1.0 +
               dVar7 * dVar18 + dVar2 * dVar6 * -1.0 + (double)CONCAT44(uVar14,uVar13) * dVar5;
  param_7[2] = dVar7 * (double)CONCAT44(uVar12,uVar11) * 1.0 +
               ((dVar1 * dVar5 * 1.0 + (double)CONCAT44(uVar14,uVar13) * dVar6) - dVar15 * dVar4);
  param_7[3] = dVar6 * (double)CONCAT44(uVar12,uVar11) * -1.0 +
               ((dVar2 * dVar4 * -1.0 + (double)CONCAT44(uVar14,uVar13) * dVar7) - dVar18 * dVar5);
  dVar15 = param_7[3];
  param_6[2] = param_7[2];
  param_6[3] = dVar15;
  uVar11 = *(undefined4 *)((longlong)param_7 + 4);
  uVar12 = *(undefined4 *)(param_7 + 1);
  uVar13 = *(undefined4 *)((longlong)param_7 + 0xc);
  *(undefined4 *)param_6 = *(undefined4 *)param_7;
  *(undefined4 *)((longlong)param_6 + 4) = uVar11;
  *(undefined4 *)(param_6 + 1) = uVar12;
  *(undefined4 *)((longlong)param_6 + 0xc) = uVar13;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149169d38 FUN_149169d38 body=207 status=ok
// SIG undefined FUN_149169d38(void)

void FUN_149169d38(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined1 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149169f3c(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar2,uVar6,uVar8,
                uVar9);
  return;
}



// FUNCTION 149169e20 FUN_149169e20 body=283 status=ok
// SIG undefined FUN_149169e20(void)

void FUN_149169e20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x1a0;
  local_148 = param_1 + 0x140;
  local_150 = param_1 + 0xe0;
  local_158 = *(undefined1 *)(param_1 + 0xd1);
  FUN_149169f3c(&local_138,param_1 + 0x10,param_1 + 0x70,*(undefined1 *)(param_1 + 0xd0));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149169f3c FUN_149169f3c body=3670 status=ok
// SIG undefined FUN_149169f3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149169f3c(longlong param_1,double *param_2,undefined8 *param_3,char param_4,char param_5,
                  undefined8 *param_6,undefined1 (*param_7) [16],char *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined4 in_EAX;
  int iVar12;
  void *pvVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  double *pdVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar58;
  undefined1 auVar57 [16];
  undefined4 uVar59;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
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
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
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
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 *local_f0;
  
  local_f0 = (undefined8 *)(DAT_14c707940 ^ (ulonglong)auStack_2e8);
  puVar17 = local_f0;
  if (*param_8 == '\0') {
    puVar17 = param_3;
    pauVar19 = param_7;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(undefined8 *)*pauVar19 = *puVar17;
      puVar17 = puVar17 + 1;
      pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
    }
    puVar17 = param_6;
    pvVar13 = memmove(param_6,param_3,0x60);
    in_EAX = SUB84(pvVar13,0);
    *param_8 = '\x01';
  }
  uVar14 = SUB84(puVar17,0);
  dVar33 = *param_2;
  dVar40 = param_2[1];
  auVar37 = *(undefined1 (*) [16])(param_2 + 2);
  dVar34 = param_2[4];
  dVar29 = param_2[5];
  dVar47 = param_2[6];
  dVar48 = param_2[7];
  dVar7 = param_2[8];
  dVar42 = param_2[9];
  auVar52 = *(undefined1 (*) [16])(param_2 + 10);
  if (param_5 != '\0') {
    dVar48 = *(double *)(param_1 + 0x20);
    dVar47 = (dVar47 - DAT_14c846520) * dVar48 + DAT_14c846520;
    dVar29 = (dVar29 - DAT_14c846518) * dVar48 + DAT_14c846518;
    dVar34 = (dVar34 - DAT_14c846510) * dVar48 + DAT_14c846510;
    dVar48 = 0.0;
    pdVar18 = &local_178;
    local_1f8 = dVar33;
    dStack_1f0 = dVar40;
    local_1e8 = auVar37;
    in_EAX = FUN_144a44da6(pdVar18,&DAT_14c8463d0);
    uVar14 = SUB84(pdVar18,0);
    dVar33 = local_168 * local_168 + local_178 * local_178;
    dVar40 = dStack_160 * dStack_160 + dStack_170 * dStack_170;
    auVar35._0_8_ = dVar33 + dVar40;
    auVar35._8_8_ = dVar33 + dVar40;
    auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
    auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
    auVar36 = sqrtpd(auVar35,auVar35);
    auVar36 = divpd(_DAT_149934d80,auVar36);
    auVar43._0_8_ = auVar36._0_8_ * local_168;
    auVar43._8_8_ = auVar36._8_8_ * dStack_160;
    dVar33 = (double)((ulonglong)(local_178 * auVar36._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
    dVar40 = (double)((ulonglong)(dStack_170 * auVar36._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
    auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar37);
    dVar1 = *(double *)(param_1 + 0x20);
    auVar52._0_8_ = (auVar52._0_8_ - DAT_14c846520) * dVar1 + DAT_14c846520;
    dVar42 = (dVar42 - DAT_14c846518) * dVar1 + DAT_14c846518;
    dVar7 = (dVar7 - DAT_14c846510) * dVar1 + DAT_14c846510;
    auVar52._8_8_ = 0;
  }
  auVar43 = _DAT_149934d80;
  uVar59 = (undefined4)((ulonglong)dVar29 >> 0x20);
  auVar35 = param_7[4];
  dVar1 = auVar35._0_8_;
  dVar4 = auVar35._8_8_;
  auVar36 = param_7[5];
  dVar3 = auVar36._0_8_;
  dVar5 = auVar36._8_8_;
  dVar51 = auVar52._0_8_;
  dVar53 = auVar52._8_8_;
  dVar30 = auVar37._0_8_;
  dVar41 = auVar37._8_8_;
  dVar2 = (double)DAT_149934d80;
  dVar55 = DAT_149934d80._8_8_;
  if (param_4 == '\0') {
    local_2c8._8_4_ = SUB84(dVar29,0);
    local_2c8._0_8_ = dVar34;
    local_2c8._12_4_ = uVar59;
    auVar6._8_4_ = SUB84(dVar42,0);
    auVar6._0_8_ = dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar37 = minpd(auVar35,auVar6);
    auVar52 = minpd(auVar36,auVar52);
    auVar26._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
    auVar26._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
    iVar12 = movmskpd(in_EAX,auVar26);
    auVar32._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar15 = movmskpd(uVar14,auVar32);
    local_2b8 = auVar36;
    if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
      dVar29 = *(double *)*param_7;
      dVar2 = *(double *)(*param_7 + 8);
      dVar55 = *(double *)param_7[1];
      dVar44 = *(double *)(param_7[1] + 8);
      dVar46 = dVar2 * dVar30 * -1.0 + dVar55 * dVar40 + dVar33 * dVar44 * 1.0 + dVar41 * dVar29;
      dVar45 = dVar29 * dVar30 * 1.0 + dVar44 * dVar40 + dVar33 * dVar55 * -1.0 + dVar41 * dVar2;
      auVar36._0_8_ =
           dVar44 * dVar30 * 1.0 + ((dVar33 * dVar2 * 1.0 + dVar41 * dVar55) - dVar40 * dVar29);
      auVar36._8_8_ =
           dVar55 * dVar30 * -1.0 + ((dVar33 * dVar29 * -1.0 + dVar41 * dVar44) - dVar40 * dVar2);
      dVar29 = *(double *)param_7[2] * dVar7;
      dVar2 = *(double *)(param_7[2] + 8) * dVar42;
      dVar21 = *(double *)param_7[3] * dVar51;
      dVar54 = *(double *)(param_7[3] + 8) * dVar53;
      dVar55 = dVar2 * dVar33 - dVar40 * dVar29;
      dVar56 = dVar21 * dVar40 - dVar30 * dVar2;
      dVar49 = dVar29 * dVar30 - dVar33 * dVar21;
      dVar44 = dVar54 * dVar41 - dVar41 * dVar54;
      dVar56 = dVar56 + dVar56;
      dVar49 = dVar49 + dVar49;
      dVar55 = dVar55 + dVar55;
      dVar44 = dVar44 + dVar44;
      local_118 = dVar34 + (dVar55 * dVar40 - dVar30 * dVar49) + dVar41 * dVar56 + dVar29;
      dStack_110 = (double)local_2c8._8_8_ +
                   (dVar56 * dVar30 - dVar55 * dVar33) + dVar41 * dVar49 + dVar2;
      local_108 = dVar47 + (dVar49 * dVar33 - dVar40 * dVar56) + dVar41 * dVar55 + dVar21;
      dVar48 = dVar48 + (dVar44 * dVar41 - dVar44 * dVar41) + dVar41 * dVar44 + dVar54;
      local_2a8 = auVar35;
      goto LAB_14916a988;
    }
    dVar44 = dVar40 + dVar40;
    dVar46 = dVar30 + dVar30;
    dVar48 = dVar33 * (dVar33 + dVar33);
    local_1f8 = (dVar2 - (dVar30 * dVar46 + dVar40 * dVar44)) * dVar7;
    dVar45 = (dVar33 + dVar33) * dVar41;
    dVar29 = (dVar46 * dVar40 - dVar45) * dVar51;
    local_1a8 = (1.0 - (dVar48 + dVar40 * dVar44)) * dVar51;
    dStack_1f0 = (dVar44 * dVar33 + dVar46 * dVar41) * dVar7;
    local_1c8 = (dVar46 * dVar40 + dVar45) * dVar42;
    local_1e8._8_8_ = 0;
    local_1e8._0_8_ = (dVar33 * dVar46 - dVar44 * dVar41) * dVar7;
    local_1d8._8_8_ = (dVar55 - (dVar30 * dVar46 + dVar48)) * dVar42;
    local_1d8._0_8_ = (dVar44 * dVar33 - dVar46 * dVar41) * dVar42;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar29,0);
    local_1b8._0_8_ = (dVar44 * dVar41 + dVar33 * dVar46) * dVar51;
    local_1b8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uStack_1a0 = 0;
    dStack_190 = (double)local_2c8._8_8_;
    uStack_180 = 0x3ff0000000000000;
    dVar48 = *(double *)*param_7;
    dVar33 = *(double *)(*param_7 + 8);
    dVar40 = *(double *)param_7[1];
    dVar41 = dVar33 + dVar33;
    dVar44 = dVar40 + dVar40;
    dVar30 = dVar48 * (dVar48 + dVar48);
    local_228 = (1.0 - (dVar30 + dVar33 * dVar41)) * dVar3;
    dVar49 = *(double *)*param_7 * dVar44;
    dVar29 = *(double *)(param_7[1] + 8);
    dVar46 = dVar44 * dVar29;
    dVar45 = (dVar48 + dVar48) * *(double *)(param_7[1] + 8);
    dVar29 = dVar41 * dVar29;
    local_238 = (dVar29 + dVar49) * dVar3;
    local_258 = (dVar41 * dVar48 - dVar46) * dVar4;
    dStack_230 = (dVar44 * dVar33 - dVar45) * dVar3;
    local_278 = (dVar2 - (dVar40 * dVar44 + dVar33 * dVar41)) * dVar1;
    dStack_250 = (dVar55 - (dVar40 * dVar44 + dVar30)) * dVar4;
    dStack_270 = (dVar41 * dVar48 + dVar46) * dVar1;
    local_248 = (dVar44 * dVar33 + dVar45) * dVar4;
    local_268 = (dVar49 - dVar29) * dVar1;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = *(double *)param_7[2];
    uStack_210 = *(undefined8 *)(param_7[2] + 8);
    local_208 = *(double *)param_7[3];
    uStack_200 = 0x3ff0000000000000;
    local_2a8 = auVar35;
    local_198 = dVar34;
    local_188 = dVar47;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= dVar42 * dVar4);
    auVar27._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar1);
    auVar37 = blendvpd(_DAT_149936790,auVar43,auVar27);
    uVar20 = -(ulonglong)(0.0 <= dVar51 * dVar3);
    dVar34 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
    dVar29 = auVar37._0_8_;
    local_168 = local_168 * dVar29;
    dStack_170 = dStack_170 * dVar29;
    local_178 = local_178 * dVar29;
    dVar29 = auVar37._8_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = dVar29 * local_158;
    local_128 = local_128 * dVar34;
    local_130 = local_130 * dVar34;
    local_138 = dVar34 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar34 = local_288 * local_288 + local_298 * local_298;
    dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar39._0_8_ = dVar34 + dVar29;
    auVar39._8_8_ = dVar34 + dVar29;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
    auVar37 = sqrtpd(auVar39,auVar39);
    auVar37 = divpd(auVar43,auVar37);
    auVar57._0_8_ = auVar37._0_8_ * local_288;
    auVar57._8_8_ = auVar37._8_8_ * dStack_280;
    dVar46 = (double)((ulonglong)(local_298 * auVar37._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
    dVar45 = (double)((ulonglong)(dStack_290 * auVar37._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
    auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar28);
  }
  else {
    auVar22._8_8_ = dVar42;
    auVar22._0_8_ = dVar7;
    auVar37 = minpd(auVar22,auVar35);
    auVar52 = minpd(auVar52,auVar36);
    auVar23._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
    iVar12 = movmskpd(in_EAX,auVar23);
    auVar31._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar15 = movmskpd(uVar14,auVar31);
    if ((uVar15 & 0x3fffffff) == 0 && iVar12 == 0) {
      dVar10 = *(double *)*param_7;
      dVar11 = *(double *)(*param_7 + 8);
      local_2c8 = *param_7;
      dVar55 = *(double *)(param_7[1] + 8);
      dVar2 = *(double *)(param_7[1] + 8);
      dVar49 = *(double *)(*param_7 + 8);
      dVar44 = *(double *)(*param_7 + 8);
      dVar54 = *(double *)param_7[1];
      dVar58 = *(double *)(param_7[1] + 8);
      dVar56 = *(double *)param_7[1];
      dVar21 = *(double *)param_7[1];
      dVar46 = dVar40 * dVar56 * -1.0 +
               dVar30 * dVar49 + dVar41 * *(double *)*param_7 * 1.0 + dVar33 * dVar55;
      dVar45 = dVar33 * dVar21 * 1.0 +
               dVar41 * dVar44 + dVar30 * *(double *)*param_7 * -1.0 + dVar40 * dVar2;
      auVar36._0_8_ =
           dVar41 * dVar56 * 1.0 +
           ((*(double *)*param_7 * dVar40 * 1.0 + dVar30 * dVar55) - dVar33 * dVar49);
      auVar36._8_8_ =
           dVar30 * dVar21 * -1.0 +
           ((*(double *)*param_7 * dVar33 * -1.0 + dVar41 * dVar2) - dVar40 * dVar44);
      dVar34 = dVar34 * dVar1;
      dVar29 = dVar29 * dVar4;
      dVar47 = dVar47 * dVar3;
      dVar48 = dVar48 * dVar5;
      dVar33 = dVar29 * dVar10 - dVar34 * dVar11;
      dVar41 = dVar47 * dVar11 - dVar29 * dVar54;
      dVar30 = dVar34 * dVar54 - dVar47 * dVar10;
      dVar40 = dVar48 * dVar58 - dVar48 * dVar58;
      dVar41 = dVar41 + dVar41;
      dVar30 = dVar30 + dVar30;
      dVar33 = dVar33 + dVar33;
      dVar40 = dVar40 + dVar40;
      local_118 = (dVar33 * dVar11 - dVar54 * dVar30) + dVar55 * dVar41 + dVar34 +
                  *(double *)param_7[2];
      dStack_110 = (dVar41 * dVar54 - dVar33 * dVar10) + dVar2 * dVar30 + dVar29 +
                   *(double *)(param_7[2] + 8);
      local_108 = (dVar30 * dVar10 - dVar11 * dVar41) + dVar55 * dVar33 + dVar47 +
                  *(double *)param_7[3];
      dVar48 = (dVar40 * dVar58 - dVar40 * dVar58) + dVar2 * dVar40 + dVar48 +
               *(double *)(param_7[3] + 8);
      local_2a8 = auVar35;
      goto LAB_14916a988;
    }
    dVar49 = *(double *)*param_7;
    dVar56 = *(double *)(*param_7 + 8);
    dVar45 = *(double *)param_7[1];
    dVar58 = dVar56 + dVar56;
    dVar48 = dVar45 + dVar45;
    dVar21 = dVar49 * (dVar49 + dVar49);
    local_2c8._8_4_ = SUB84(dVar29,0);
    local_2c8._0_8_ = dVar34;
    local_2c8._12_4_ = uVar59;
    dVar54 = *(double *)*param_7 * dVar48;
    dVar29 = *(double *)(param_7[1] + 8);
    dVar44 = dVar48 * dVar29;
    dVar46 = (dVar49 + dVar49) * *(double *)(param_7[1] + 8);
    dVar29 = dVar58 * dVar29;
    local_2b8._8_8_ = dVar53 * dVar5;
    local_2b8._0_8_ = dVar51 * dVar3;
    local_1a8 = (1.0 - (dVar21 + dVar56 * dVar58)) * dVar3;
    local_1f8 = (dVar2 - (dVar45 * dVar48 + dVar56 * dVar58)) * dVar1;
    dVar45 = (dVar55 - (dVar45 * dVar48 + dVar21)) * dVar4;
    dStack_1f0 = (dVar58 * dVar49 + dVar44) * dVar1;
    local_1c8 = (dVar48 * dVar56 + dVar46) * dVar4;
    local_1e8._8_8_ = 0;
    local_1e8._0_8_ = (dVar54 - dVar29) * dVar1;
    local_1d8._8_4_ = SUB84(dVar45,0);
    local_1d8._0_8_ = (dVar58 * dVar49 - dVar44) * dVar4;
    local_1d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_8_ = (dVar48 * dVar56 - dVar46) * dVar3;
    local_1b8._0_8_ = (dVar29 + dVar54) * dVar3;
    uStack_1a0 = 0;
    local_198 = *(double *)param_7[2];
    dStack_190 = *(double *)(param_7[2] + 8);
    local_188 = *(double *)param_7[3];
    uStack_180 = 0x3ff0000000000000;
    dVar44 = dVar40 + dVar40;
    dVar29 = dVar30 + dVar30;
    dVar46 = dVar33 * (dVar33 + dVar33);
    local_228 = (1.0 - (dVar46 + dVar40 * dVar44)) * dVar51;
    dVar48 = (dVar33 + dVar33) * dVar41;
    local_238 = (dVar44 * dVar41 + dVar33 * dVar29) * dVar51;
    local_258 = (dVar44 * dVar33 - dVar29 * dVar41) * dVar42;
    dStack_230 = (dVar29 * dVar40 - dVar48) * dVar51;
    local_278 = (dVar2 - (dVar30 * dVar29 + dVar40 * dVar44)) * dVar7;
    dStack_250 = (dVar55 - (dVar30 * dVar29 + dVar46)) * dVar42;
    dStack_270 = (dVar44 * dVar33 + dVar29 * dVar41) * dVar7;
    local_248 = (dVar29 * dVar40 + dVar48) * dVar42;
    local_268 = (dVar33 * dVar29 - dVar44 * dVar41) * dVar7;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_210 = local_2c8._8_8_;
    uStack_200 = 0x3ff0000000000000;
    local_218 = dVar34;
    local_208 = dVar47;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar24._8_8_ = -(ulonglong)(0.0 <= dVar42 * dVar4);
    auVar24._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar1);
    auVar37 = blendvpd(_DAT_149936790,auVar43,auVar24);
    uVar20 = -(ulonglong)(0.0 <= dVar51 * dVar3);
    dVar34 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
    dVar29 = auVar37._0_8_;
    local_168 = local_168 * dVar29;
    dStack_170 = dStack_170 * dVar29;
    local_178 = local_178 * dVar29;
    dVar29 = auVar37._8_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = dVar29 * local_158;
    local_128 = local_128 * dVar34;
    local_130 = local_130 * dVar34;
    local_138 = dVar34 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar34 = local_288 * local_288 + local_298 * local_298;
    dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar38._0_8_ = dVar34 + dVar29;
    auVar38._8_8_ = dVar34 + dVar29;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
    auVar37 = sqrtpd(auVar38,auVar38);
    auVar37 = divpd(auVar43,auVar37);
    auVar50._0_8_ = auVar37._0_8_ * local_288;
    auVar50._8_8_ = auVar37._8_8_ * dStack_280;
    dVar46 = (double)((ulonglong)(local_298 * auVar37._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
    dVar45 = (double)((ulonglong)(dStack_290 * auVar37._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
    auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar25);
  }
  dVar48 = 0.0;
LAB_14916a988:
  *(double *)*param_7 = dVar46;
  *(double *)(*param_7 + 8) = dVar45;
  param_7[1] = auVar36;
  *(double *)param_7[2] = local_118;
  *(double *)(param_7[2] + 8) = dStack_110;
  *(double *)param_7[3] = local_108;
  *(double *)(param_7[3] + 8) = dVar48;
  auVar8._8_4_ = SUB84(dVar42 * dVar4,0);
  auVar8._0_8_ = dVar7 * dVar1;
  auVar8._12_4_ = (int)((ulonglong)(dVar42 * dVar4) >> 0x20);
  param_7[4] = auVar8;
  auVar9._8_4_ = SUB84(dVar53 * dVar5,0);
  auVar9._0_8_ = dVar51 * dVar3;
  auVar9._12_4_ = (int)((ulonglong)(dVar53 * dVar5) >> 0x20);
  param_7[5] = auVar9;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *param_6 = *(undefined8 *)*param_7;
    param_7 = (undefined1 (*) [16])(*param_7 + 8);
    param_6 = param_6 + 1;
  }
  if (((ulonglong)local_f0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916ad94 FUN_14916ad94 body=280 status=ok
// SIG undefined FUN_14916ad94(void)

void FUN_14916ad94(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  
  puVar3 = (undefined8 *)*param_2;
  fVar8 = *(float *)*puVar3;
  fVar1 = *(float *)puVar3[4];
  fVar9 = *(float *)puVar3[8];
  cVar2 = *(char *)puVar3[0xc];
  pfVar4 = (float *)puVar3[0x10];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar6 = (float *)FUN_144828ac0(puVar3 + 0x14,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar7 = (char *)FUN_144828ac0(*param_2 + 0xc0,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar7 == '\0') {
    *pfVar6 = fVar1;
    *pfVar4 = fVar1;
    *pcVar7 = '\x01';
  }
  if (cVar2 != '\0') {
    fVar9 = (float)((double)fVar9 * *(double *)(lVar5 + 0x20));
  }
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar8 = (fVar8 - *pfVar6) * fVar9 + *pfVar6;
  *pfVar6 = fVar8;
  *pfVar4 = fVar8;
  return;
}



// FUNCTION 14916aeb8 FUN_14916aeb8 body=298 status=ok
// SIG undefined FUN_14916aeb8(void)

void FUN_14916aeb8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    fVar4 = *(float *)(param_1 + 0x1c);
  }
  else {
    fVar4 = *(float *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  fVar5 = *(float *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x14) != '\0') {
    fVar5 = (float)((double)fVar5 * (double)CONCAT44(uStack_114,uStack_118));
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar4 = (*(float *)(param_1 + 8) - fVar4) * fVar5 + fVar4;
  *(float *)(param_1 + 0x1c) = fVar4;
  *(float *)(param_1 + 0x18) = fVar4;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916afe4 FUN_14916afe4 body=212 status=ok
// SIG undefined FUN_14916afe4(void)

void FUN_14916afe4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined4 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14916b1d2(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar1,uVar2,uVar6,uVar8,uVar9);
  return;
}



// FUNCTION 14916b0c4 FUN_14916b0c4 body=269 status=ok
// SIG undefined FUN_14916b0c4(void)

void FUN_14916b0c4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x70;
  local_148 = param_1 + 0x58;
  local_150 = param_1 + 0x40;
  local_158 = *(undefined1 *)(param_1 + 0x3c);
  FUN_14916b1d2(&local_138,param_1 + 8,param_1 + 0x20,*(undefined4 *)(param_1 + 0x38));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916b1d2 FUN_14916b1d2 body=222 status=ok
// SIG undefined FUN_14916b1d2(void)

void FUN_14916b1d2(longlong param_1,double *param_2,double *param_3,float param_4,char param_5,
                  double *param_6,double *param_7,char *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*param_8 == '\0') {
    param_7[2] = param_3[2];
    dVar1 = param_3[1];
    *param_7 = *param_3;
    param_7[1] = dVar1;
    dVar1 = *param_3;
    dVar2 = param_3[1];
    param_6[2] = param_3[2];
    *param_6 = dVar1;
    param_6[1] = dVar2;
    *param_8 = '\x01';
  }
  if (param_5 != '\0') {
    param_4 = (float)((double)param_4 * *(double *)(param_1 + 0x20));
  }
  if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  dVar3 = (double)param_4;
  *param_7 = (*param_2 - *param_7) * dVar3 + *param_7;
  param_7[1] = (dVar2 - param_7[1]) * dVar3 + param_7[1];
  param_7[2] = (dVar1 - param_7[2]) * dVar3 + param_7[2];
  param_6[2] = param_7[2];
  dVar1 = param_7[1];
  *param_6 = *param_7;
  param_6[1] = dVar1;
  return;
}



// FUNCTION 14916b2b0 FUN_14916b2b0 body=212 status=ok
// SIG undefined FUN_14916b2b0(void)

void FUN_14916b2b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined4 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14916b4a6(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar1,uVar2,uVar6,uVar8,uVar9);
  return;
}



// FUNCTION 14916b392 FUN_14916b392 body=275 status=ok
// SIG undefined FUN_14916b392(void)

void FUN_14916b392(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0xa0;
  local_148 = param_1 + 0x80;
  local_150 = param_1 + 0x60;
  local_158 = *(undefined1 *)(param_1 + 0x54);
  FUN_14916b4a6(&local_138,param_1 + 0x10,param_1 + 0x30,*(undefined4 *)(param_1 + 0x50));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916b4a6 FUN_14916b4a6 body=303 status=ok
// SIG undefined FUN_14916b4a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916b4a6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5,undefined8 *param_6,undefined1 (*param_7) [16],char *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 in_XMM3 [16];
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_8 == '\0') {
    uVar7 = *param_3;
    uVar8 = param_3[1];
    uVar9 = param_3[3];
    *(undefined8 *)param_7[1] = param_3[2];
    *(undefined8 *)(param_7[1] + 8) = uVar9;
    *(undefined8 *)*param_7 = uVar7;
    *(undefined8 *)(*param_7 + 8) = uVar8;
    uVar7 = *param_3;
    uVar8 = param_3[1];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar5 = *(undefined4 *)(param_3 + 3);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_6 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_6 + 0x14) = uVar4;
    *(undefined4 *)(param_6 + 3) = uVar5;
    *(undefined4 *)((longlong)param_6 + 0x1c) = uVar6;
    *param_6 = uVar7;
    param_6[1] = uVar8;
    *param_8 = '\x01';
  }
  if (param_5 != '\0') {
    in_XMM3 = ZEXT416((uint)(float)((double)in_XMM3._0_4_ * *(double *)(param_1 + 0x20)));
  }
  if (1.0 <= in_XMM3._0_4_) {
    in_XMM3._0_4_ = 0x3f800000;
  }
  if (in_XMM3._0_4_ <= 0.0) {
    auVar13._12_4_ = 0;
    auVar13._0_12_ = in_XMM3._4_12_;
    in_XMM3 = auVar13 << 0x20;
  }
  FUN_144a44da6(&local_48,param_7,param_2,(double)in_XMM3._0_4_);
  dVar11 = local_38 * local_38 + local_48 * local_48;
  dVar14 = dStack_30 * dStack_30 + dStack_40 * dStack_40;
  auVar12._0_8_ = dVar11 + dVar14;
  auVar12._8_8_ = dVar11 + dVar14;
  uVar10 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
  auVar13 = sqrtpd(auVar12,auVar12);
  auVar15 = divpd(_DAT_149934d80,auVar13);
  auVar16._0_8_ = auVar15._0_8_ * local_38;
  auVar16._8_8_ = auVar15._8_8_ * dStack_30;
  uVar3 = (ulonglong)(dStack_40 * auVar15._8_8_) & uVar10;
  auVar1._8_4_ = (int)uVar10;
  auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
  auVar1._12_4_ = (int)(uVar10 >> 0x20);
  auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar1);
  auVar2._8_4_ = (int)uVar3;
  auVar2._0_8_ = (ulonglong)(local_48 * auVar15._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
  auVar2._12_4_ = (int)(uVar3 >> 0x20);
  *param_7 = auVar2;
  param_7[1] = auVar13;
  uVar7 = *(undefined8 *)(param_7[1] + 8);
  param_6[2] = *(undefined8 *)param_7[1];
  param_6[3] = uVar7;
  uVar4 = *(undefined4 *)(*param_7 + 4);
  uVar5 = *(undefined4 *)(*param_7 + 8);
  uVar6 = *(undefined4 *)(*param_7 + 0xc);
  *(undefined4 *)param_6 = *(undefined4 *)*param_7;
  *(undefined4 *)((longlong)param_6 + 4) = uVar4;
  *(undefined4 *)(param_6 + 1) = uVar5;
  *(undefined4 *)((longlong)param_6 + 0xc) = uVar6;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916b5d6 FUN_14916b5d6 body=212 status=ok
// SIG undefined FUN_14916b5d6(void)

void FUN_14916b5d6(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined4 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar6 = puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14916b7d8(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar1,uVar2,uVar6,uVar8,uVar9);
  return;
}



// FUNCTION 14916b6ba FUN_14916b6ba body=284 status=ok
// SIG undefined FUN_14916b6ba(void)

void FUN_14916b6ba(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x1a0;
  local_148 = param_1 + 0x140;
  local_150 = param_1 + 0xe0;
  local_158 = *(undefined1 *)(param_1 + 0xd4);
  FUN_14916b7d8(&local_138,param_1 + 0x10,param_1 + 0x70,*(undefined4 *)(param_1 + 0xd0));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916b7d8 FUN_14916b7d8 body=561 status=ok
// SIG undefined FUN_14916b7d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916b7d8(longlong param_1,undefined8 *param_2,ulonglong *param_3,float param_4,
                  char param_5,ulonglong *param_6,ulonglong *param_7,char *param_8)

{
  undefined1 auVar1 [16];
  double dVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_8 == '\0') {
    puVar4 = param_3;
    puVar5 = param_7;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    memmove(param_6,param_3,0x60);
    *param_8 = '\x01';
  }
  if (param_5 != '\0') {
    param_4 = (float)((double)param_4 * *(double *)(param_1 + 0x20));
  }
  if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  dVar7 = (double)param_2[6];
  dVar2 = (double)param_4;
  dVar10 = ((double)param_2[5] - (double)param_7[5]) * dVar2 + (double)param_7[5];
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = ((double)param_2[4] - (double)param_7[4]) * dVar2 + (double)param_7[4];
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_7 + 4) = auVar9;
  param_7[6] = (ulonglong)((dVar7 - (double)param_7[6]) * dVar2 + (double)param_7[6]);
  param_7[7] = 0;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_c8 = *param_7;
  uStack_c0 = param_7[1];
  local_b8 = (undefined4)param_7[2];
  uStack_b4 = *(undefined4 *)((longlong)param_7 + 0x14);
  uStack_b0 = (undefined4)param_7[3];
  uStack_ac = *(undefined4 *)((longlong)param_7 + 0x1c);
  FUN_144a44da6(&local_88);
  dVar7 = local_78 * local_78 + local_88 * local_88;
  dVar10 = dStack_70 * dStack_70 + dStack_80 * dStack_80;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  uVar6 = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar11 = divpd(_DAT_149934d80,auVar9);
  auVar12._0_8_ = auVar11._0_8_ * local_78;
  auVar12._8_8_ = auVar11._8_8_ * dStack_70;
  auVar1._8_4_ = (int)uVar6;
  auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar1._12_4_ = (int)(uVar6 >> 0x20);
  auVar9 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar12,auVar1);
  *param_7 = (ulonglong)(local_88 * auVar11._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  param_7[1] = (ulonglong)(dStack_80 * auVar11._8_8_) & uVar6;
  *(undefined1 (*) [16])(param_7 + 2) = auVar9;
  dVar7 = (double)param_2[10];
  dVar10 = ((double)param_2[9] - (double)param_7[9]) * dVar2 + (double)param_7[9];
  auVar11._8_4_ = SUB84(dVar10,0);
  auVar11._0_8_ = ((double)param_2[8] - (double)param_7[8]) * dVar2 + (double)param_7[8];
  auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_7 + 8) = auVar11;
  param_7[10] = (ulonglong)((dVar7 - (double)param_7[10]) * dVar2 + (double)param_7[10]);
  param_7[0xb] = 0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *param_6 = *param_7;
    param_7 = param_7 + 1;
    param_6 = param_6 + 1;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916ba0a FUN_14916ba0a body=265 status=ok
// SIG undefined FUN_14916ba0a(void)

void FUN_14916ba0a(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  char *pcVar8;
  float fVar9;
  
  puVar2 = (undefined8 *)*param_2;
  pfVar3 = (float *)puVar2[4];
  fVar1 = *(float *)*puVar2;
  pfVar4 = (float *)puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar6 = (float *)FUN_144828ac0(puVar2 + 0xc,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar7 = (float *)FUN_144828ac0(*param_2 + 0x80,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar8 = (char *)FUN_144828ac0(*param_2 + 0xa0,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  if (*pcVar8 == '\0') {
    *pfVar7 = fVar1;
    *pfVar4 = fVar1;
    *pfVar6 = fVar1;
    *pfVar3 = fVar1;
    *pcVar8 = '\x01';
  }
  fVar9 = *pfVar6;
  if (fVar1 <= *pfVar6) {
    fVar9 = fVar1;
  }
  *pfVar6 = fVar9;
  *pfVar3 = fVar9;
  fVar9 = *pfVar7;
  if (*pfVar7 <= fVar1) {
    fVar9 = fVar1;
  }
  *pfVar7 = fVar9;
  *pfVar4 = fVar9;
  return;
}



// FUNCTION 14916bb1a FUN_14916bb1a body=269 status=ok
// SIG undefined FUN_14916bb1a(void)

void FUN_14916bb1a(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar1 = *(float *)(param_1 + 8);
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    fVar5 = *(float *)(param_1 + 0x18);
    fVar6 = *(float *)(param_1 + 0x14);
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    fVar5 = fVar1;
    fVar6 = fVar1;
  }
  if (fVar1 <= fVar6) {
    fVar6 = fVar1;
  }
  *(float *)(param_1 + 0x14) = fVar6;
  *(float *)(param_1 + 0xc) = fVar6;
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  *(float *)(param_1 + 0x18) = fVar5;
  *(float *)(param_1 + 0x10) = fVar5;
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916bc28 FUN_14916bc28 body=221 status=ok
// SIG undefined FUN_14916bc28(void)

void FUN_14916bc28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  uVar4 = puVar1[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar1 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0xa0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14916be0e(uVar2,uVar3,uVar4,uVar6,uVar7,uVar8);
  return;
}



// FUNCTION 14916bd0e FUN_14916bd0e body=254 status=ok
// SIG undefined FUN_14916bd0e(void)

void FUN_14916bd0e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x80;
  local_148 = param_1 + 0x68;
  FUN_14916be0e(param_1 + 8,param_1 + 0x20,param_1 + 0x38,param_1 + 0x50);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916be0e FUN_14916be0e body=194 status=ok
// SIG undefined FUN_14916be0e(void)

void FUN_14916be0e(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  char *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*param_6 == '\0') {
    param_5[2] = param_1[2];
    dVar2 = param_1[1];
    *param_5 = *param_1;
    param_5[1] = dVar2;
    dVar1 = *param_1;
    dVar3 = param_1[1];
    dVar2 = param_1[2];
    param_3[2] = dVar2;
    *param_3 = dVar1;
    param_3[1] = dVar3;
    param_4[2] = dVar2;
    *param_4 = dVar1;
    param_4[1] = dVar3;
    dVar2 = *param_3;
    dVar1 = param_3[1];
    param_2[2] = param_3[2];
    *param_2 = dVar2;
    param_2[1] = dVar1;
    *param_6 = '\x01';
  }
  dVar2 = *param_4;
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = *param_1;
  if (dVar1 <= dVar2) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *param_4 = (double)CONCAT44(uVar5,uVar4);
  *param_2 = (double)CONCAT44(uVar5,uVar4);
  dVar2 = param_4[1];
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = param_1[1];
  if (dVar1 <= dVar2) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  param_4[1] = (double)CONCAT44(uVar5,uVar4);
  param_2[1] = (double)CONCAT44(uVar5,uVar4);
  dVar2 = param_4[2];
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = param_1[2];
  if (dVar1 <= dVar2) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  param_4[2] = (double)CONCAT44(uVar5,uVar4);
  param_2[2] = (double)CONCAT44(uVar5,uVar4);
  dVar2 = *param_5;
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = *param_1;
  if (dVar2 <= dVar1) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *param_5 = (double)CONCAT44(uVar5,uVar4);
  *param_3 = (double)CONCAT44(uVar5,uVar4);
  dVar2 = param_5[1];
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = param_1[1];
  if (dVar2 <= dVar1) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  param_5[1] = (double)CONCAT44(uVar5,uVar4);
  param_3[1] = (double)CONCAT44(uVar5,uVar4);
  dVar2 = param_5[2];
  uVar4 = SUB84(dVar2,0);
  uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = param_1[2];
  if (dVar2 <= dVar1) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  param_5[2] = (double)CONCAT44(uVar5,uVar4);
  param_3[2] = (double)CONCAT44(uVar5,uVar4);
  return;
}



// FUNCTION 14916bee2 FUN_14916bee2 body=220 status=ok
// SIG undefined FUN_14916bee2(void)

void FUN_14916bee2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14916bfc0(param_1,&local_138);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916bfc0 FUN_14916bfc0 body=96 status=ok
// SIG undefined FUN_14916bfc0(void)

void FUN_14916bfc0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x38);
  uVar1 = FUN_144a85682(param_1 + 0x44,*(undefined4 *)(param_1 + 8),
                        (float)*(double *)(param_2 + 0x20));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}



// FUNCTION 14916c020 FUN_14916c020 body=391 status=ok
// SIG undefined FUN_14916c020(void)

void FUN_14916c020(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  
  puVar10 = (undefined8 *)*param_2;
  uVar11 = *puVar10;
  uVar1 = *(undefined4 *)puVar10[4];
  uVar2 = *(undefined4 *)puVar10[8];
  uVar7 = *(undefined1 *)puVar10[0xc];
  uVar12 = puVar10[0x10];
  uVar13 = puVar10[0x14];
  uVar8 = *(undefined1 *)puVar10[0x18];
  uVar3 = *(undefined4 *)puVar10[0x1c];
  uVar4 = *(undefined4 *)puVar10[0x20];
  uVar9 = *(undefined1 *)puVar10[0x24];
  uVar5 = *(undefined4 *)puVar10[0x28];
  uVar6 = *(undefined4 *)puVar10[0x2c];
  uVar14 = puVar10[0x30];
  lVar15 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar16 = FUN_144828ac0(puVar10 + 0x34,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar15 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar15 * 0x14));
  FUN_14916c312(*(undefined8 *)(param_1 + 0xc0),uVar11,uVar1,uVar2,uVar7,uVar12,uVar13,uVar8,uVar3,
                uVar4,uVar9,uVar5,uVar6,uVar14,uVar16);
  return;
}



// FUNCTION 14916c1ba FUN_14916c1ba body=342 status=ok
// SIG undefined FUN_14916c1ba(void)

void FUN_14916c1ba(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined4 local_160;
  undefined4 local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x70;
  local_150 = param_1 + 0x58;
  local_158 = *(undefined4 *)(param_1 + 0x50);
  local_160 = *(undefined4 *)(param_1 + 0x4c);
  local_168 = *(undefined1 *)(param_1 + 0x48);
  local_170 = *(undefined4 *)(param_1 + 0x44);
  local_178 = *(undefined4 *)(param_1 + 0x40);
  local_180 = *(undefined1 *)(param_1 + 0x3c);
  local_188 = param_1 + 0x34;
  local_190 = param_1 + 0x2c;
  local_198 = *(undefined1 *)(param_1 + 0x28);
  FUN_14916c312(&local_138,param_1 + 8,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916c312 FUN_14916c312 body=264 status=ok
// SIG undefined FUN_14916c312(void)

void FUN_14916c312(longlong param_1,double *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
                  undefined4 param_13,double *param_14,undefined1 *param_15)

{
  float fVar1;
  
  *param_15 = param_5;
  param_15[1] = param_8;
  param_15[2] = param_11;
  *(undefined8 *)(param_15 + 4) = *param_6;
  *(undefined8 *)(param_15 + 0xc) = *param_7;
  *(undefined4 *)(param_15 + 0x1c) = param_9;
  *(undefined4 *)(param_15 + 0x20) = param_10;
  *(undefined4 *)(param_15 + 0x14) = param_3;
  *(undefined4 *)(param_15 + 0x18) = param_4;
  *(undefined4 *)(param_15 + 0x24) = param_12;
  *(undefined4 *)(param_15 + 0x28) = param_13;
  fVar1 = (float)FUN_144a85682(param_15,(float)*param_2,(float)*(double *)(param_1 + 0x20));
  *param_14 = (double)fVar1;
  fVar1 = (float)FUN_144a85682(param_15,(float)param_2[1],(float)*(double *)(param_1 + 0x20));
  param_14[1] = (double)fVar1;
  fVar1 = (float)FUN_144a85682(param_15,(float)param_2[2],(float)*(double *)(param_1 + 0x20));
  param_14[2] = (double)fVar1;
  return;
}



// FUNCTION 14916c41a FUN_14916c41a body=391 status=ok
// SIG undefined FUN_14916c41a(void)

void FUN_14916c41a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  
  puVar10 = (undefined8 *)*param_2;
  uVar11 = *puVar10;
  uVar1 = *(undefined4 *)puVar10[4];
  uVar2 = *(undefined4 *)puVar10[8];
  uVar7 = *(undefined1 *)puVar10[0xc];
  uVar12 = puVar10[0x10];
  uVar13 = puVar10[0x14];
  uVar8 = *(undefined1 *)puVar10[0x18];
  uVar3 = *(undefined4 *)puVar10[0x1c];
  uVar4 = *(undefined4 *)puVar10[0x20];
  uVar9 = *(undefined1 *)puVar10[0x24];
  uVar5 = *(undefined4 *)puVar10[0x28];
  uVar6 = *(undefined4 *)puVar10[0x2c];
  uVar14 = puVar10[0x30];
  lVar15 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar16 = FUN_144828ac0(puVar10 + 0x34,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar15 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar15 * 0x14));
  FUN_14916c790(*(undefined8 *)(param_1 + 0xc0),uVar11,uVar1,uVar2,uVar7,uVar12,uVar13,uVar8,uVar3,
                uVar4,uVar9,uVar5,uVar6,uVar14,uVar16);
  return;
}



// FUNCTION 14916c5b4 FUN_14916c5b4 body=475 status=ok
// SIG undefined FUN_14916c5b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916c5b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined2 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_40;
  
  uVar8 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_178 = &PTR_FUN_14bad5c20;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  local_14c = 0;
  local_148 = 0x3f91111111111111;
  local_140 = 0x800;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = local_108;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1490d751a(&local_178);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_1 + 0x5c);
  fVar7 = (float)FUN_144a85682(param_1 + 0x90,0x3f800000,
                               CONCAT44(uVar8,(float)(double)CONCAT44(uStack_154,uStack_158)));
  FUN_144a44da6(&local_68,&DAT_14c8463d0,param_1 + 0x10,(double)fVar7);
  dVar9 = local_58 * local_58 + local_68 * local_68;
  dVar12 = dStack_50 * dStack_50 + dStack_60 * dStack_60;
  auVar10._0_8_ = dVar9 + dVar12;
  auVar10._8_8_ = dVar9 + dVar12;
  uVar6 = -(ulonglong)(9.99999993922529e-09 <= auVar10._8_8_);
  auVar11 = sqrtpd(auVar10,auVar10);
  auVar13 = divpd(_DAT_149934d80,auVar11);
  auVar14._0_8_ = auVar13._0_8_ * local_58;
  auVar14._8_8_ = auVar13._8_8_ * dStack_50;
  uVar2 = (ulonglong)(dStack_60 * auVar13._8_8_) & uVar6;
  auVar11._8_4_ = (int)uVar6;
  auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_);
  auVar11._12_4_ = (int)(uVar6 >> 0x20);
  auVar11 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar11);
  auVar1._8_4_ = (int)uVar2;
  auVar1._0_8_ = (ulonglong)(local_68 * auVar13._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar10._0_8_);
  auVar1._12_4_ = (int)(uVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar11;
  FUN_140f8ceac(&local_178);
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916c790 FUN_14916c790 body=356 status=ok
// SIG undefined FUN_14916c790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916c790(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
                  undefined4 param_13,undefined1 (*param_14) [16],undefined1 *param_15)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_15 = param_5;
  param_15[1] = param_8;
  param_15[2] = param_11;
  *(undefined8 *)(param_15 + 4) = *param_6;
  *(undefined8 *)(param_15 + 0xc) = *param_7;
  *(undefined4 *)(param_15 + 0x1c) = param_9;
  *(undefined4 *)(param_15 + 0x20) = param_10;
  *(undefined4 *)(param_15 + 0x14) = param_3;
  *(undefined4 *)(param_15 + 0x18) = param_4;
  *(undefined4 *)(param_15 + 0x24) = param_12;
  *(undefined4 *)(param_15 + 0x28) = param_13;
  fVar4 = (float)FUN_144a85682(param_15,0x3f800000,(float)*(double *)(param_1 + 0x20));
  FUN_144a44da6(&local_48,&DAT_14c8463d0,param_2,(double)fVar4);
  dVar5 = local_38 * local_38 + local_48 * local_48;
  dVar8 = dStack_30 * dStack_30 + dStack_40 * dStack_40;
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  uVar3 = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar9 = divpd(_DAT_149934d80,auVar7);
  auVar10._0_8_ = auVar9._0_8_ * local_38;
  auVar10._8_8_ = auVar9._8_8_ * dStack_30;
  uVar2 = (ulonglong)(dStack_40 * auVar9._8_8_) & uVar3;
  auVar7._8_4_ = (int)uVar3;
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar7._12_4_ = (int)(uVar3 >> 0x20);
  auVar7 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar7);
  auVar1._8_4_ = (int)uVar2;
  auVar1._0_8_ = (ulonglong)(local_48 * auVar9._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar1._12_4_ = (int)(uVar2 >> 0x20);
  *param_14 = auVar1;
  param_14[1] = auVar7;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916c8f6 FUN_14916c8f6 body=494 status=ok
// SIG undefined FUN_14916c8f6(void)

undefined8 * FUN_14916c8f6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    local_50 = (double)*(float *)(param_1 + 0x24);
    local_58 = (double)*(float *)(param_1 + 0x20);
    FUN_140002266(&local_48,L" Map(%.02f, %.02f, %.02f, %.02f)",(double)*(float *)(param_1 + 0x18),
                  (double)*(float *)(param_1 + 0x1c));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    FUN_140002266(&local_48,L" Interp(%.02f, %.02f)",(double)*(float *)(param_1 + 0x38),
                  (double)*(float *)(param_1 + 0x3c));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_140002266(&local_48,L" Clamp(%.02f, %.02f)",(double)*(float *)(param_1 + 0x2c),
                  (double)*(float *)(param_1 + 0x30));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_30 < 2) {
    *param_2 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    FUN_140002266(param_2,L"%s: %s",puVar2,local_38);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916cae6 FUN_14916cae6 body=494 status=ok
// SIG undefined FUN_14916cae6(void)

undefined8 * FUN_14916cae6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    local_50 = (double)*(float *)(param_1 + 0x38);
    local_58 = (double)*(float *)(param_1 + 0x34);
    FUN_140002266(&local_48,L" Map(%.02f, %.02f, %.02f, %.02f)",(double)*(float *)(param_1 + 0x2c),
                  (double)*(float *)(param_1 + 0x30));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_140002266(&local_48,L" Interp(%.02f, %.02f)",(double)*(float *)(param_1 + 0x4c),
                  (double)*(float *)(param_1 + 0x50));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    FUN_140002266(&local_48,L" Clamp(%.02f, %.02f)",(double)*(float *)(param_1 + 0x40),
                  (double)*(float *)(param_1 + 0x44));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_30 < 2) {
    *param_2 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    FUN_140002266(param_2,L"%s: %s",puVar2,local_38);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916ccd6 FUN_14916ccd6 body=494 status=ok
// SIG undefined FUN_14916ccd6(void)

undefined8 * FUN_14916ccd6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    local_50 = (double)*(float *)(param_1 + 0x48);
    local_58 = (double)*(float *)(param_1 + 0x44);
    FUN_140002266(&local_48,L" Map(%.02f, %.02f, %.02f, %.02f)",(double)*(float *)(param_1 + 0x3c),
                  (double)*(float *)(param_1 + 0x40));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_140002266(&local_48,L" Interp(%.02f, %.02f)",(double)*(float *)(param_1 + 0x5c),
                  (double)*(float *)(param_1 + 0x60));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    FUN_140002266(&local_48,L" Clamp(%.02f, %.02f)",(double)*(float *)(param_1 + 0x50),
                  (double)*(float *)(param_1 + 0x54));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((int)uStack_30 < 2) {
    *param_2 = 0;
    iVar1 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    if (*(int *)(param_3 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_3;
    }
    FUN_140002266(param_2,L"%s: %s",puVar2,local_38);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916cec6 FUN_14916cec6 body=223 status=ok
// SIG undefined FUN_14916cec6(void)

void FUN_14916cec6(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  char *pcVar8;
  
  puVar3 = (undefined8 *)*param_2;
  pfVar4 = (float *)puVar3[4];
  fVar1 = *(float *)*puVar3;
  pfVar5 = (float *)puVar3[8];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar7 = (float *)FUN_144828ac0(puVar3 + 0xc,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar8 = (char *)FUN_144828ac0(*param_2 + 0x80,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar8 == '\0') {
    *pfVar4 = 0.0;
    *pfVar7 = fVar1;
    *pfVar5 = fVar1;
    *pcVar8 = '\x01';
  }
  fVar2 = *pfVar7;
  *pfVar5 = fVar2;
  *pfVar4 = fVar2 - fVar1;
  if (9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x20))) {
    *pfVar7 = fVar1;
  }
  return;
}



// FUNCTION 14916cfac FUN_14916cfac body=281 status=ok
// SIG undefined FUN_14916cfac(void)

void FUN_14916cfac(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  fVar1 = *(float *)(param_1 + 8);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    fVar5 = *(float *)(param_1 + 0x14);
  }
  else {
    *(float *)(param_1 + 0x14) = fVar1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    fVar5 = fVar1;
  }
  *(float *)(param_1 + 0x10) = fVar5;
  *(float *)(param_1 + 0xc) = fVar5 - fVar1;
  if (9.99999993922529e-09 < ABS((double)CONCAT44(uStack_114,uStack_118))) {
    *(float *)(param_1 + 0x14) = fVar1;
  }
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916d0c6 FUN_14916d0c6 body=312 status=ok
// SIG undefined FUN_14916d0c6(void)

void FUN_14916d0c6(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  longlong lVar9;
  double *pdVar10;
  char *pcVar11;
  
  puVar5 = (undefined8 *)*param_2;
  pdVar6 = (double *)*puVar5;
  pdVar7 = (double *)puVar5[4];
  pdVar8 = (double *)puVar5[8];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pdVar10 = (double *)
            FUN_144828ac0(puVar5 + 0xc,0,
                          *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                          *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar11 = (char *)FUN_144828ac0(*param_2 + 0x80,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar11 == '\0') {
    pdVar7[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *pdVar7 = DAT_14c8464e0;
    pdVar7[1] = dVar1;
    pdVar10[2] = pdVar6[2];
    dVar1 = pdVar6[1];
    *pdVar10 = *pdVar6;
    pdVar10[1] = dVar1;
    dVar1 = *pdVar6;
    dVar2 = pdVar6[1];
    pdVar8[2] = pdVar6[2];
    *pdVar8 = dVar1;
    pdVar8[1] = dVar2;
    *pcVar11 = '\x01';
  }
  pdVar8[2] = pdVar10[2];
  dVar1 = pdVar10[1];
  *pdVar8 = *pdVar10;
  pdVar8[1] = dVar1;
  dVar1 = pdVar10[2];
  dVar2 = pdVar6[2];
  dVar3 = pdVar10[1];
  dVar4 = pdVar6[1];
  *pdVar7 = *pdVar10 - *pdVar6;
  pdVar7[1] = dVar3 - dVar4;
  pdVar7[2] = dVar1 - dVar2;
  if (9.99999993922529e-09 < ABS(*(double *)(lVar9 + 0x20))) {
    pdVar10[2] = pdVar6[2];
    dVar1 = pdVar6[1];
    *pdVar10 = *pdVar6;
    pdVar10[1] = dVar1;
  }
  return;
}



// FUNCTION 14916d204 FUN_14916d204 body=220 status=ok
// SIG undefined FUN_14916d204(void)

void FUN_14916d204(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  FUN_14916d2e2(param_1,&local_138);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916d2e2 FUN_14916d2e2 body=138 status=ok
// SIG undefined FUN_14916d2e2(void)

void FUN_14916d2e2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x38) = *puVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x58);
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x50) - *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x18);
  if (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x20))) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 14916d36c FUN_14916d36c body=496 status=ok
// SIG undefined FUN_14916d36c(void)

void FUN_14916d36c(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar3;
  undefined8 *puVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  char *pcVar17;
  double dVar18;
  double dVar19;
  double dVar2;
  double dVar4;
  
  puVar5 = (undefined8 *)*param_2;
  pdVar6 = (double *)*puVar5;
  pdVar7 = (double *)puVar5[4];
  pdVar8 = (double *)puVar5[8];
  lVar15 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pdVar16 = (double *)
            FUN_144828ac0(puVar5 + 0xc,0,
                          *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar15 * 0x14) +
                          *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar15 * 0x14));
  lVar15 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar17 = (char *)FUN_144828ac0(*param_2 + 0x80,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar15 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar15 * 0x14));
  dVar2 = DAT_14c8463e8;
  lVar15 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar17 == '\0') {
    pdVar7[2] = DAT_14c8463e0;
    pdVar7[3] = dVar2;
    dVar2 = DAT_14c8463d8;
    *pdVar7 = DAT_14c8463d0;
    pdVar7[1] = dVar2;
    dVar2 = *pdVar6;
    dVar1 = pdVar6[1];
    dVar4 = pdVar6[3];
    pdVar16[2] = pdVar6[2];
    pdVar16[3] = dVar4;
    *pdVar16 = dVar2;
    pdVar16[1] = dVar1;
    dVar2 = *pdVar6;
    dVar1 = pdVar6[1];
    dVar4 = pdVar6[3];
    pdVar8[2] = pdVar6[2];
    pdVar8[3] = dVar4;
    *pdVar8 = dVar2;
    pdVar8[1] = dVar1;
    *pcVar17 = '\x01';
  }
  dVar2 = *pdVar16;
  dVar1 = pdVar16[1];
  dVar4 = pdVar16[3];
  pdVar8[2] = pdVar16[2];
  pdVar8[3] = dVar4;
  *pdVar8 = dVar2;
  pdVar8[1] = dVar1;
  dVar18 = pdVar16[2] * -1.0;
  dVar19 = pdVar16[3] * 1.0;
  dVar11 = *pdVar6;
  dVar12 = pdVar6[1];
  dVar13 = pdVar6[2];
  dVar14 = pdVar6[3];
  dVar1 = pdVar16[1];
  dVar2 = pdVar16[1];
  dVar3 = *pdVar16;
  dVar4 = *pdVar16;
  dVar10 = dVar13 * dVar18 * -1.0 + dVar2 * dVar12 + (dVar19 * dVar14 - dVar4 * dVar11 * -1.0);
  *pdVar7 = dVar12 * dVar18 * -1.0 + ((dVar11 * dVar19 - dVar3 * dVar14 * 1.0) - dVar13 * dVar1);
  pdVar7[1] = dVar11 * dVar18 * 1.0 + ((dVar12 * dVar19 - dVar4 * dVar13 * -1.0) - dVar14 * dVar2);
  auVar9._8_4_ = SUB84(dVar10,0);
  auVar9._0_8_ = dVar14 * dVar18 * 1.0 + dVar1 * dVar11 + (dVar19 * dVar13 - dVar3 * dVar12 * 1.0);
  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(pdVar7 + 2) = auVar9;
  if (9.99999993922529e-09 < ABS(*(double *)(lVar15 + 0x20))) {
    dVar2 = *pdVar6;
    dVar1 = pdVar6[1];
    dVar4 = pdVar6[3];
    pdVar16[2] = pdVar6[2];
    pdVar16[3] = dVar4;
    *pdVar16 = dVar2;
    pdVar16[1] = dVar1;
  }
  return;
}



// FUNCTION 14916d564 FUN_14916d564 body=562 status=ok
// SIG undefined FUN_14916d564(void)

void FUN_14916d564(longlong param_1)

{
  double dVar1;
  double dVar3;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1a8 [32];
  undefined **local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined2 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  double dVar2;
  double dVar4;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188 = &PTR_FUN_14bad5c20;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  local_15c = 0;
  local_158 = 0x3f91111111111111;
  local_150 = 0x800;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  puVar12 = &DAT_14c846480;
  puVar13 = local_118;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1490d751a(&local_188);
  puVar12 = (undefined8 *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x28);
    *puVar12 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x50) = *puVar12;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x78);
  dVar14 = *(double *)(param_1 + 0x80) * -1.0;
  dVar15 = *(double *)(param_1 + 0x88) * 1.0;
  dVar7 = *(double *)(param_1 + 0x10);
  dVar8 = *(double *)(param_1 + 0x18);
  dVar9 = *(double *)(param_1 + 0x20);
  dVar10 = *(double *)(param_1 + 0x28);
  dVar1 = *(double *)(param_1 + 0x78);
  dVar2 = *(double *)(param_1 + 0x78);
  dVar3 = *(double *)(param_1 + 0x70);
  dVar4 = *(double *)(param_1 + 0x70);
  dVar6 = dVar9 * dVar14 * -1.0 + dVar2 * dVar8 + (dVar15 * dVar10 - dVar4 * dVar7 * -1.0);
  *(double *)(param_1 + 0x30) =
       dVar8 * dVar14 * -1.0 + ((dVar7 * dVar15 - dVar3 * dVar10 * 1.0) - dVar9 * dVar1);
  *(double *)(param_1 + 0x38) =
       dVar7 * dVar14 * 1.0 + ((dVar8 * dVar15 - dVar4 * dVar9 * -1.0) - dVar10 * dVar2);
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar10 * dVar14 * 1.0 + dVar1 * dVar7 + (dVar15 * dVar9 - dVar3 * dVar8 * 1.0);
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar5;
  if (9.99999993922529e-09 < ABS((double)CONCAT44(uStack_164,uStack_168))) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)puVar12 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  }
  FUN_140f8ceac(&local_188);
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916d798 FUN_14916d798 body=342 status=ok
// SIG undefined FUN_14916d798(void)

void FUN_14916d798(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *_Src;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = (undefined8 *)*param_2;
  _Src = (undefined8 *)*puVar2;
  puVar8 = (undefined8 *)puVar2[4];
  puVar6 = (undefined8 *)puVar2[8];
  lVar1 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  puVar2 = (undefined8 *)
           FUN_144828ac0(puVar2 + 0xc,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar1 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar1 * 0x14));
  lVar1 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar3 = (char *)FUN_144828ac0(*param_2 + 0x80,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar1 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar1 * 0x14));
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar3 == '\0') {
    puVar5 = &DAT_14c846480;
    puVar7 = puVar8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = _Src;
    puVar7 = puVar2;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    memmove(puVar6,_Src,0x60);
    *pcVar3 = '\x01';
  }
  puVar5 = puVar2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1449437a2(_Src,local_a8,puVar2);
  puVar6 = local_a8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  if (9.99999993922529e-09 < ABS(*(double *)(lVar1 + 0x20))) {
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *_Src;
      _Src = _Src + 1;
      puVar2 = puVar2 + 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916d8f8 FUN_14916d8f8 body=375 status=ok
// SIG undefined FUN_14916d8f8(void)

void FUN_14916d8f8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138 [12];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_1a8 = &PTR_FUN_14bad5c20;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  local_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  local_17c = 0;
  local_178 = 0x3f91111111111111;
  local_170 = 0x800;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  puVar3 = &DAT_14c846480;
  puVar5 = local_138;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_1490d751a(&local_1a8);
  puVar5 = (undefined8 *)(param_1 + 0x130);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 400) == '\0') {
    puVar2 = &DAT_14c846480;
    puVar4 = (undefined8 *)(param_1 + 0x70);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = puVar3;
    puVar4 = puVar5;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)(param_1 + 400) = 1;
  }
  puVar2 = puVar5;
  puVar4 = (undefined8 *)(param_1 + 0xd0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1449437a2(puVar3,local_98,puVar5);
  puVar2 = local_98;
  puVar4 = (undefined8 *)(param_1 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (9.99999993922529e-09 < ABS((double)CONCAT44(uStack_184,uStack_188))) {
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  FUN_140f8ceac(&local_1a8);
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916da70 FUN_14916da70 body=170 status=ok
// SIG undefined FUN_14916da70(void)

void FUN_14916da70(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)*puVar3;
  uVar2 = *(undefined4 *)puVar3[4];
  uVar4 = puVar3[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar3 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14916dc0a(uVar1,uVar2,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 14916db1a FUN_14916db1a body=239 status=ok
// SIG undefined FUN_14916db1a(void)

void FUN_14916db1a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x28;
  FUN_14916dc0a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_1 + 0x10,
                param_1 + 0x18);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916dc0a FUN_14916dc0a body=230 status=ok
// SIG undefined FUN_14916dc0a(void)

void FUN_14916dc0a(float param_1,int param_2,float *param_3,longlong *param_4,int *param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (0 < param_2) {
    if ((int)param_4[1] != param_2) {
      FUN_144a84024(param_4);
      lVar2 = param_4[1];
      if ((longlong)(int)lVar2 == 0) {
        param_2 = 0;
      }
      else {
        lVar3 = *param_4;
        lVar4 = 0;
        do {
          *(undefined4 *)(lVar3 + lVar4) = 0x7f7fffff;
          *param_5 = -1;
          lVar4 = lVar4 + 4;
        } while ((longlong)(int)lVar2 * 4 != lVar4);
        param_2 = (int)param_4[1];
      }
    }
    iVar5 = 0;
    if (*param_5 != param_2 + -1) {
      iVar5 = *param_5 + 1;
    }
    *param_5 = iVar5;
    *(float *)(*param_4 + (longlong)iVar5 * 4) = param_1;
    *param_3 = 0.0;
    if ((longlong)(int)param_4[1] == 0) {
      return;
    }
    lVar2 = *param_4;
    lVar4 = (longlong)(int)param_4[1] << 2;
    param_1 = 0.0;
    lVar3 = 0;
    do {
      fVar1 = *(float *)(lVar2 + lVar3 * 4);
      if ((fVar1 == 3.4028235e+38) && (!NAN(fVar1))) {
        if ((int)lVar3 == 0) {
          return;
        }
        break;
      }
      param_1 = param_1 + fVar1;
      *param_3 = param_1;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
    param_1 = param_1 / (float)(int)lVar3;
  }
  *param_3 = param_1;
  return;
}



// FUNCTION 14916dcf0 FUN_14916dcf0 body=163 status=ok
// SIG undefined FUN_14916dcf0(void)

void FUN_14916dcf0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14916de86(uVar3,uVar1,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 14916dd94 FUN_14916dd94 body=241 status=ok
// SIG undefined FUN_14916dd94(void)

void FUN_14916dd94(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0x50;
  FUN_14916de86(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x28,param_1 + 0x40);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916de86 FUN_14916de86 body=376 status=ok
// SIG undefined FUN_14916de86(void)

void FUN_14916de86(double *param_1,ulonglong param_2,double *param_3,longlong *param_4,int *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  double *pdVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((int)param_2 < 1) {
    param_3[2] = param_1[2];
    dVar10 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = dVar10;
  }
  else {
    if ((int)param_4[1] != (int)param_2) {
      FUN_14051b394(param_4,param_2,1);
      lVar3 = param_4[1];
      if ((longlong)(int)lVar3 == 0) {
        param_2 = 0;
      }
      else {
        lVar4 = *param_4;
        lVar7 = 0;
        do {
          *(undefined8 *)(lVar4 + lVar7) = 0x47efffffe0000000;
          *param_5 = -1;
          lVar7 = lVar7 + 0x18;
        } while ((longlong)(int)lVar3 * 0x18 != lVar7);
        param_2 = (ulonglong)*(uint *)(param_4 + 1);
      }
    }
    iVar8 = *param_5 + 1;
    iVar5 = 0;
    if (*param_5 == (int)param_2 + -1) {
      iVar8 = 0;
    }
    *param_5 = iVar8;
    lVar3 = *param_4;
    *(double *)(lVar3 + 0x10 + (longlong)iVar8 * 0x18) = param_1[2];
    dVar10 = param_1[1];
    pdVar1 = (double *)(lVar3 + (longlong)iVar8 * 0x18);
    *pdVar1 = *param_1;
    pdVar1[1] = dVar10;
    param_3[2] = DAT_14c8464f0;
    dVar10 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = dVar10;
    if ((longlong)(int)param_4[1] != 0) {
      pdVar6 = (double *)*param_4;
      pdVar1 = pdVar6 + (longlong)(int)param_4[1] * 3;
      dVar10 = *param_3;
      dVar9 = param_3[1];
      dVar2 = param_3[2];
      do {
        dVar11 = *pdVar6;
        if ((dVar11 == 3.4028234663852886e+38) && (!NAN(dVar11))) {
          if (iVar5 == 0) {
            return;
          }
          break;
        }
        dVar10 = dVar10 + dVar11;
        *param_3 = dVar10;
        dVar9 = dVar9 + pdVar6[1];
        param_3[1] = dVar9;
        dVar2 = dVar2 + pdVar6[2];
        param_3[2] = dVar2;
        iVar5 = iVar5 + 1;
        pdVar6 = pdVar6 + 3;
      } while (pdVar6 != pdVar1);
      dVar11 = 1.0 / (double)iVar5;
      *param_3 = dVar11 * dVar10;
      param_3[1] = dVar9 * dVar11;
      param_3[2] = dVar2 * dVar11;
    }
  }
  return;
}



// FUNCTION 14916dffe FUN_14916dffe body=163 status=ok
// SIG undefined FUN_14916dffe(void)

void FUN_14916dffe(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(*param_2 + 0x80,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14916e19e(uVar3,uVar1,uVar4,uVar6,uVar7);
  return;
}



// FUNCTION 14916e0a2 FUN_14916e0a2 body=250 status=ok
// SIG undefined FUN_14916e0a2(void)

void FUN_14916e0a2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0xf0;
  FUN_14916e19e(param_1 + 0x10,*(undefined4 *)(param_1 + 0x70),param_1 + 0x80,param_1 + 0xe0);
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916e19e FUN_14916e19e body=1800 status=ok
// SIG undefined FUN_14916e19e(void)

void FUN_14916e19e(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4,
                  int *param_5)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_228 [32];
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_158 [136];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((int)param_2 < 1) {
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_228);
  }
  if ((int)param_4[1] != (int)param_2) {
    FUN_140ee84a4(param_4,param_2,1);
    lVar15 = param_4[1];
    param_2 = 0;
    if ((longlong)(int)lVar15 != 0) {
      lVar19 = *param_4;
      lVar16 = 0;
      do {
        puVar17 = (undefined8 *)(lVar19 + 0x20 + lVar16);
        *puVar17 = 0x47efffffe0000000;
        puVar17[1] = 0x47efffffe0000000;
        puVar17 = (undefined8 *)(lVar19 + 0x30 + lVar16);
        *puVar17 = 0x47efffffe0000000;
        puVar17[1] = 0;
        *param_5 = -1;
        lVar16 = lVar16 + 0x60;
      } while ((longlong)(int)lVar15 * 0x60 != lVar16);
      param_2 = (ulonglong)*(uint *)(param_4 + 1);
    }
  }
  iVar18 = *param_5 + 1;
  iVar14 = 0;
  if (*param_5 == (int)param_2 + -1) {
    iVar18 = 0;
  }
  *param_5 = iVar18;
  puVar17 = (undefined8 *)((longlong)iVar18 * 0x60 + *param_4);
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *param_1;
    param_1 = param_1 + 1;
    puVar17 = puVar17 + 1;
  }
  local_168 = DAT_14c8464f0;
  local_178 = DAT_14c8464e0;
  dStack_170 = DAT_14c8464e8;
  local_188 = DAT_14c8464f0;
  local_198 = DAT_14c8464e0;
  dStack_190 = DAT_14c8464e8;
  dVar22 = DAT_14c8464e0;
  dVar21 = DAT_14c8464e8;
  dVar10 = DAT_14c8464f0;
  dVar4 = DAT_14c8464f0;
  dVar7 = DAT_14c8464e0;
  dVar8 = DAT_14c8464e8;
  if ((longlong)(int)param_4[1] != 0) {
    lVar15 = *param_4;
    lVar19 = 0;
    local_200 = DAT_14c8464f0;
    dVar23 = DAT_14c8464e0;
    dVar24 = DAT_14c8464e8;
    dVar25 = DAT_14c8464f0;
    dVar3 = DAT_14c8464e0;
    do {
      local_198 = dVar3;
      local_188 = dVar25;
      dVar21 = dVar24;
      dVar22 = dVar23;
      pdVar1 = (double *)(lVar15 + 0x20 + lVar19);
      dVar9 = *pdVar1;
      if ((dVar9 == 3.4028234663852886e+38) && (!NAN(dVar9))) {
        dVar23 = dVar22;
        dVar24 = dVar21;
        dVar25 = local_188;
        dVar3 = local_198;
        local_208 = dStack_190;
        if (iVar14 == 0) goto LAB_14916e390;
        break;
      }
      dVar11 = *(double *)(lVar15 + lVar19);
      dVar12 = ((double *)(lVar15 + lVar19))[1];
      dVar13 = *(double *)(lVar15 + 0x10 + lVar19);
      pdVar2 = (double *)(lVar15 + 0x18 + lVar19);
      dVar24 = *pdVar2;
      dVar23 = *pdVar2;
      local_1e8._8_8_ = 0;
      local_1e8._0_8_ = dVar10;
      local_1d8._8_8_ = 0;
      local_1d8._0_8_ = dVar4;
      dVar25 = dVar11 * 0.0 - dVar12 * 1.0;
      dVar5 = dVar12 * 0.0 - dVar13 * 0.0;
      dVar3 = dVar13 * 1.0 - dVar11 * 0.0;
      dVar5 = dVar5 + dVar5;
      dVar3 = dVar3 + dVar3;
      dVar25 = dVar25 + dVar25;
      local_178 = local_178 + (dVar25 * dVar12 - dVar3 * dVar13) + dVar24 * dVar5 + 1.0;
      dStack_170 = dStack_170 + (dVar13 * dVar5 - dVar11 * dVar25) + dVar23 * dVar3 + 0.0;
      local_168 = local_168 + dVar25 * dVar24 + 0.0 + (dVar3 * dVar11 - dVar5 * dVar12);
      dVar5 = dVar11 * 1.0 - dVar12 * 0.0;
      dVar20 = dVar12 * 0.0 - dVar13 * 1.0;
      dVar25 = dVar13 * 0.0 - dVar11 * 0.0;
      dVar20 = dVar20 + dVar20;
      dVar25 = dVar25 + dVar25;
      dVar5 = dVar5 + dVar5;
      dVar3 = local_198 + (dVar5 * dVar12 - dVar25 * dVar13) + dVar24 * dVar20 + 0.0;
      local_208 = dStack_190 + (dVar13 * dVar20 - dVar11 * dVar5) + dVar23 * dVar25 + 1.0;
      dVar25 = local_188 + dVar5 * dVar24 + 0.0 + (dVar25 * dVar11 - dVar20 * dVar12);
      dVar10 = dVar10 + *(double *)(lVar15 + 0x30 + lVar19);
      pdVar2 = (double *)(lVar15 + 0x40 + lVar19);
      dVar7 = dVar7 + *pdVar2;
      dVar8 = dVar8 + pdVar2[1];
      dVar4 = dVar4 + *(double *)(lVar15 + 0x50 + lVar19);
      dVar24 = dVar21 + pdVar1[1];
      iVar14 = iVar14 + 1;
      lVar19 = lVar19 + 0x60;
      dVar23 = dVar22 + dVar9;
      local_1f8 = local_188;
      local_1f0 = local_198;
      local_1c8 = dVar22;
      dStack_1c0 = dVar21;
      dStack_190 = local_208;
    } while ((longlong)(int)param_4[1] * 0x60 != lVar19);
    dVar5 = 1.0 / (double)iVar14;
    dVar9 = local_168 * dVar5;
    dVar21 = dStack_170 * dVar5;
    dVar22 = local_178 * dVar5;
    dVar20 = dVar9 * dVar9 + dVar22 * dVar22 + dVar21 * dVar21;
    if (((dVar20 != 1.0) ||
        (local_168 = dVar9, dStack_170 = dVar21, local_178 = dVar22, NAN(dVar20))) &&
       (local_168 = DAT_14c8464f0, dStack_170 = DAT_14c8464e8, local_178 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar20)) {
      dVar20 = 1.0 / SQRT(dVar20);
      local_168 = dVar9 * dVar20;
      dStack_170 = dVar21 * dVar20;
      local_178 = dVar22 * dVar20;
    }
    dVar25 = dVar25 * dVar5;
    dVar22 = local_208 * dVar5;
    dVar3 = dVar3 * dVar5;
    dVar21 = dVar25 * dVar25 + dVar3 * dVar3 + dVar22 * dVar22;
    if (((dVar21 != 1.0) ||
        (local_188 = dVar25, local_198 = dVar3, dStack_190 = dVar22, NAN(dVar21))) &&
       (local_188 = DAT_14c8464f0, local_198 = DAT_14c8464e0, dStack_190 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar21)) {
      local_198 = 1.0 / SQRT(dVar21);
      local_188 = dVar25 * local_198;
      dStack_190 = dVar22 * local_198;
      local_198 = dVar3 * local_198;
    }
    dVar22 = dVar23 * dVar5;
    dVar21 = dVar24 * dVar5;
    dVar10 = dVar10 * dVar5;
    dVar4 = dVar4 * dVar5;
    dVar7 = dVar5 * dVar7;
    dVar8 = dVar8 * dVar5;
    local_200 = DAT_14c8464f0;
  }
LAB_14916e390:
  param_3[4] = dVar22;
  param_3[5] = dVar21;
  param_3[6] = dVar10;
  param_3[7] = 0;
  FUN_147298f40(local_158,&local_178,&local_198);
  FUN_141706d54(local_158,&local_1b8);
  *param_3 = local_1b8;
  param_3[1] = uStack_1b0;
  *(undefined4 *)(param_3 + 2) = local_1a8;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_1a4;
  *(undefined4 *)(param_3 + 3) = uStack_1a0;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_19c;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 8) = auVar6;
  param_3[10] = dVar4;
  param_3[0xb] = 0;
  if ((local_d0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916e8a8 FUN_14916e8a8 body=196 status=ok
// SIG undefined FUN_14916e8a8(void)

void FUN_14916e8a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  char *pcVar5;
  float fVar6;
  
  puVar1 = (undefined8 *)*param_2;
  pfVar2 = (float *)puVar1[4];
  fVar6 = *(float *)*puVar1;
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pfVar4 = (float *)FUN_144828ac0(puVar1 + 8,0,
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                                  *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  pcVar5 = (char *)FUN_144828ac0(*param_2 + 0x60,0,
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                                 *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (*pcVar5 == '\0') {
    *pfVar4 = 0.0;
    *pfVar2 = 0.0;
    *pcVar5 = '\x01';
  }
  fVar6 = (float)((double)fVar6 * *(double *)(lVar3 + 0x20) + (double)*pfVar4);
  *pfVar4 = fVar6;
  *pfVar2 = fVar6;
  return;
}



// FUNCTION 14916e972 FUN_14916e972 body=260 status=ok
// SIG undefined FUN_14916e972(void)

void FUN_14916e972(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  if (*(char *)(param_1 + 0x14) == '\x01') {
    dVar5 = (double)*(float *)(param_1 + 0x10);
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 1;
    dVar5 = 0.0;
  }
  fVar4 = (float)((double)*(float *)(param_1 + 8) * (double)CONCAT44(uStack_114,uStack_118) + dVar5)
  ;
  *(float *)(param_1 + 0x10) = fVar4;
  *(float *)(param_1 + 0xc) = fVar4;
  FUN_140f8ceac();
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916ea78 FUN_14916ea78 body=389 status=ok
// SIG undefined FUN_14916ea78(void)

void FUN_14916ea78(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar4 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)*puVar4;
  uVar2 = *(undefined4 *)puVar4[4];
  uVar3 = *(undefined1 *)puVar4[8];
  uVar5 = puVar4[0xc];
  uVar6 = puVar4[0x10];
  uVar7 = puVar4[0x14];
  uVar8 = puVar4[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(puVar4 + 0x1c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0x120,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = FUN_144828ac0(*param_2 + 0x140,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_14916ed44(*(undefined8 *)(param_1 + 0xc0),uVar1,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8,uVar10,
                uVar11,uVar12,uVar13);
  return;
}



// FUNCTION 14916ec10 FUN_14916ec10 body=307 status=ok
// SIG undefined FUN_14916ec10(void)

void FUN_14916ec10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x30;
  local_148 = param_1 + 0x2c;
  local_150 = param_1 + 0x28;
  local_158 = param_1 + 0x24;
  local_160 = param_1 + 0x20;
  local_168 = param_1 + 0x1c;
  local_170 = param_1 + 0x18;
  local_178 = param_1 + 0x14;
  FUN_14916ed44(&local_138,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(undefined1 *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916ed44 FUN_14916ed44 body=222 status=ok
// SIG undefined FUN_14916ed44(void)

void FUN_14916ed44(longlong param_1,float param_2,float param_3,char param_4,float *param_5,
                  float *param_6,float *param_7,byte *param_8,float *param_9,float *param_10,
                  uint *param_11,char *param_12)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*param_12 == '\0') {
    *param_10 = 0.0;
    *param_9 = 0.0;
    *param_7 = 0.0;
    *param_6 = 0.0;
    *param_5 = 0.0;
    *param_11 = 0;
    *param_8 = 0;
    *param_12 = '\x01';
  }
  fVar2 = param_3;
  if (param_3 <= 0.0001) {
    fVar2 = 0.0001;
  }
  fVar3 = (float)((double)param_2 * *(double *)(param_1 + 0x20));
  fVar4 = *param_9 + fVar3;
  *param_9 = fVar4;
  *param_5 = fVar4;
  fVar3 = fVar3 + *param_10;
  *param_10 = fVar3;
  while (fVar2 < fVar3) {
    *param_10 = fVar3 - fVar2;
    *param_11 = *param_11 + 1;
    fVar3 = *param_10;
  }
  *param_6 = fVar3;
  uVar1 = *param_11;
  *param_8 = (byte)(uVar1 & 1) ^ 1;
  fVar3 = *param_6;
  if ((uVar1 & 1) != 0) {
    fVar3 = param_3 - fVar3;
  }
  *param_7 = fVar3;
  if (param_4 != '\0') {
    *param_6 = *param_6 / fVar2;
    *param_7 = *param_7 / fVar2;
  }
  return;
}



// FUNCTION 14916ee22 FUN_14916ee22 body=360 status=ok
// SIG undefined FUN_14916ee22(void)

void FUN_14916ee22(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)*puVar5;
  uVar2 = *(undefined4 *)puVar5[4];
  uVar4 = *(undefined4 *)puVar5[8];
  uVar3 = *(undefined4 *)puVar5[0xc];
  uVar6 = puVar5[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar5 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14916f0aa(*(undefined8 *)(param_1 + 0xc0),uVar1,uVar2,uVar4,uVar3,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 14916ef8a FUN_14916ef8a body=287 status=ok
// SIG undefined FUN_14916ef8a(void)

void FUN_14916ef8a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x44;
  local_148 = param_1 + 0x40;
  local_150 = param_1 + 0x30;
  local_158 = param_1 + 0x20;
  local_160 = param_1 + 0x18;
  local_168 = *(undefined4 *)(param_1 + 0x14);
  FUN_14916f0aa(&local_138,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                *(undefined4 *)(param_1 + 0x10));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916f0aa FUN_14916f0aa body=637 status=ok
// SIG undefined FUN_14916f0aa(void)

void FUN_14916f0aa(longlong param_1,float param_2,float param_3,uint param_4,float param_5,
                  float *param_6,longlong *param_7,longlong *param_8,int *param_9,int *param_10)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  
  *param_6 = param_2;
  if ((int)param_4 < 1) {
    return;
  }
  if (param_5 <= 0.0) {
    return;
  }
  if ((int)param_7[1] == 0) {
    *param_10 = 0;
  }
  uVar3 = 0x200;
  if (param_4 < 0x200) {
    uVar3 = param_4;
  }
  uVar8 = 2;
  if (2 < uVar3) {
    uVar8 = uVar3;
  }
  FUN_144a84024(param_7,uVar8,1);
  FUN_144a84024(param_8,uVar8,1);
  if ((int)*(uint *)(param_7 + 1) <= (int)uVar8) {
    uVar8 = *(uint *)(param_7 + 1);
  }
  iVar5 = *param_10;
  fVar9 = param_2;
  if (iVar5 != 0) {
    iVar4 = *param_9;
    lVar2 = *param_8;
    lVar7 = (longlong)iVar4;
    fVar12 = *(float *)(lVar2 + lVar7 * 4);
    if ((iVar5 == 1) || (param_3 < fVar12)) {
      fVar10 = *(float *)(*param_7 + lVar7 * 4);
      fVar12 = param_3 / fVar12;
    }
    else if (iVar5 < 1) {
      fVar12 = 0.0;
      fVar10 = param_2;
    }
    else {
      fVar10 = *(float *)(*param_7 + lVar7 * 4);
      fVar13 = 0.0;
      if (0.0 < param_3) {
        fVar12 = 0.0;
        fVar13 = 0.0;
        iVar6 = iVar5;
        do {
          iVar6 = iVar6 + -1;
          fVar9 = fVar10;
          if (iVar6 == 0) goto LAB_14916f200;
          iVar4 = (iVar4 + iVar5 + -1) % iVar5;
          fVar13 = fVar13 + *(float *)(lVar2 + lVar7 * 4);
          lVar7 = (longlong)iVar4;
          fVar10 = *(float *)(*param_7 + lVar7 * 4);
        } while (fVar13 < param_3);
        fVar12 = *(float *)(lVar2 + lVar7 * 4);
      }
      fVar12 = 1.0 - (fVar13 - param_3) / fVar12;
    }
LAB_14916f200:
    fVar9 = (fVar10 - fVar9) * fVar12 + fVar9;
  }
  *param_6 = fVar9;
  dVar1 = *(double *)(param_1 + 0x20);
  if (dVar1 <= 9.99999993922529e-09) {
    return;
  }
  iVar5 = *param_10;
  if (iVar5 == 0) {
    *param_9 = 0;
  }
  else {
    iVar4 = *param_9;
    dVar11 = (double)*(float *)(*param_8 + (longlong)iVar4 * 4);
    if (dVar11 <= dVar1 * -0.5 + (double)(param_5 / (float)(int)(uVar8 - 1))) {
      *(float *)(*param_8 + (longlong)iVar4 * 4) = (float)(dVar1 + dVar11);
      return;
    }
    if ((int)uVar8 <= iVar5) {
      iVar5 = (iVar4 + 1) % iVar5;
      *param_9 = iVar5;
      *(float *)(*param_7 + (longlong)iVar5 * 4) = param_2;
      dVar1 = *(double *)(param_1 + 0x20);
      iVar5 = *param_9;
      goto LAB_14916f298;
    }
    *param_9 = iVar5;
  }
  *(float *)(*param_7 + (longlong)*param_10 * 4) = param_2;
  dVar1 = *(double *)(param_1 + 0x20);
  iVar5 = *param_10;
  *param_10 = iVar5 + 1;
LAB_14916f298:
  *(float *)(*param_8 + (longlong)iVar5 * 4) = (float)dVar1;
  return;
}



// FUNCTION 14916f328 FUN_14916f328 body=338 status=ok
// SIG undefined FUN_14916f328(void)

void FUN_14916f328(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar1 = *(undefined4 *)puVar4[4];
  uVar3 = *(undefined4 *)puVar4[8];
  uVar2 = *(undefined4 *)puVar4[0xc];
  uVar6 = puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14916f59c(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar1,uVar3,uVar2,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 14916f47a FUN_14916f47a body=289 status=ok
// SIG undefined FUN_14916f47a(void)

void FUN_14916f47a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x6c;
  local_148 = param_1 + 0x68;
  local_150 = param_1 + 0x58;
  local_158 = param_1 + 0x48;
  local_160 = param_1 + 0x30;
  local_168 = *(undefined4 *)(param_1 + 0x28);
  FUN_14916f59c(&local_138,param_1 + 8,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916f59c FUN_14916f59c body=880 status=ok
// SIG undefined FUN_14916f59c(void)

void FUN_14916f59c(longlong param_1,double *param_2,float param_3,uint param_4,float param_5,
                  double *param_6,longlong *param_7,longlong *param_8,int *param_9,int *param_10)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  
  param_6[2] = param_2[2];
  dVar17 = param_2[1];
  *param_6 = *param_2;
  param_6[1] = dVar17;
  if (((int)param_4 < 1) || (param_5 <= 0.0)) {
    param_6[2] = param_2[2];
    dVar17 = param_2[1];
    *param_6 = *param_2;
    param_6[1] = dVar17;
    return;
  }
  if ((int)param_7[1] == 0) {
    *param_10 = 0;
  }
  uVar5 = 0x200;
  if (param_4 < 0x200) {
    uVar5 = param_4;
  }
  uVar10 = 2;
  if (2 < uVar5) {
    uVar10 = uVar5;
  }
  FUN_14051b394(param_7,uVar10,1);
  FUN_144a84024(param_8,uVar10,1);
  if ((int)*(uint *)(param_7 + 1) <= (int)uVar10) {
    uVar10 = *(uint *)(param_7 + 1);
  }
  iVar7 = *param_10;
  if (iVar7 == 0) {
    param_6[2] = param_2[2];
    dVar17 = param_2[1];
    *param_6 = *param_2;
    param_6[1] = dVar17;
  }
  else {
    dVar17 = *param_2;
    uVar11 = SUB84(dVar17,0);
    uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
    dVar13 = param_2[1];
    dVar14 = param_2[2];
    iVar6 = *param_9;
    lVar2 = *param_8;
    lVar8 = (longlong)iVar6;
    fVar18 = *(float *)(lVar2 + lVar8 * 4);
    if ((iVar7 == 1) || (param_3 < fVar18)) {
      lVar2 = *param_7;
      dVar17 = *(double *)(lVar2 + lVar8 * 0x18);
      fVar18 = param_3 / fVar18;
      dVar15 = *(double *)(lVar2 + 0x10 + lVar8 * 0x18);
      dVar16 = *(double *)(lVar2 + 8 + lVar8 * 0x18);
    }
    else if (iVar7 < 1) {
      fVar18 = 0.0;
      dVar15 = dVar14;
      dVar16 = dVar13;
    }
    else {
      lVar3 = *param_7;
      dVar17 = *(double *)(lVar3 + lVar8 * 0x18);
      dVar16 = *(double *)(lVar3 + 8 + lVar8 * 0x18);
      dVar15 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
      fVar19 = 0.0;
      if (0.0 < param_3) {
        fVar18 = 0.0;
        iVar9 = iVar7;
        do {
          dVar13 = dVar16;
          dVar14 = dVar15;
          uVar11 = SUB84(dVar17,0);
          uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
          iVar9 = iVar9 + -1;
          dVar15 = dVar14;
          dVar16 = dVar13;
          if (iVar9 == 0) goto LAB_14916f7bc;
          iVar6 = (iVar6 + iVar7 + -1) % iVar7;
          fVar19 = fVar19 + *(float *)(lVar2 + lVar8 * 4);
          lVar8 = (longlong)iVar6;
          dVar17 = *(double *)(lVar3 + lVar8 * 0x18);
          dVar16 = *(double *)(lVar3 + 8 + lVar8 * 0x18);
          dVar15 = *(double *)(lVar3 + 0x10 + lVar8 * 0x18);
        } while (fVar19 < param_3);
        fVar18 = *(float *)(lVar2 + lVar8 * 4);
      }
      fVar18 = 1.0 - (fVar19 - param_3) / fVar18;
    }
LAB_14916f7bc:
    dVar4 = (double)fVar18;
    *param_6 = (dVar17 - (double)CONCAT44(uVar12,uVar11)) * dVar4 + (double)CONCAT44(uVar12,uVar11);
    param_6[1] = (dVar16 - dVar13) * dVar4 + dVar13;
    param_6[2] = (dVar15 - dVar14) * dVar4 + dVar14;
  }
  dVar17 = *(double *)(param_1 + 0x20);
  if (dVar17 <= 9.99999993922529e-09) {
    return;
  }
  iVar7 = *param_10;
  if (iVar7 == 0) {
    *param_9 = 0;
  }
  else {
    iVar6 = *param_9;
    dVar13 = (double)*(float *)(*param_8 + (longlong)iVar6 * 4);
    if (dVar13 <= dVar17 * -0.5 + (double)(param_5 / (float)(int)(uVar10 - 1))) {
      *(float *)(*param_8 + (longlong)iVar6 * 4) = (float)(dVar17 + dVar13);
      return;
    }
    if ((int)uVar10 <= iVar7) {
      iVar7 = (iVar6 + 1) % iVar7;
      *param_9 = iVar7;
      lVar2 = *param_7;
      *(double *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18) = param_2[2];
      dVar17 = param_2[1];
      pdVar1 = (double *)(lVar2 + (longlong)iVar7 * 0x18);
      *pdVar1 = *param_2;
      pdVar1[1] = dVar17;
      dVar17 = *(double *)(param_1 + 0x20);
      iVar7 = *param_9;
      goto LAB_14916f88e;
    }
    *param_9 = iVar7;
  }
  iVar7 = *param_10;
  lVar2 = *param_7;
  *(double *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18) = param_2[2];
  dVar17 = param_2[1];
  pdVar1 = (double *)(lVar2 + (longlong)iVar7 * 0x18);
  *pdVar1 = *param_2;
  pdVar1[1] = dVar17;
  dVar17 = *(double *)(param_1 + 0x20);
  iVar7 = *param_10;
  *param_10 = iVar7 + 1;
LAB_14916f88e:
  *(float *)(*param_8 + (longlong)iVar7 * 4) = (float)dVar17;
  return;
}



// FUNCTION 14916f90c FUN_14916f90c body=338 status=ok
// SIG undefined FUN_14916f90c(void)

void FUN_14916f90c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar1 = *(undefined4 *)puVar4[4];
  uVar3 = *(undefined4 *)puVar4[8];
  uVar2 = *(undefined4 *)puVar4[0xc];
  uVar6 = puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_14916fb90(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar1,uVar3,uVar2,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 14916fa5e FUN_14916fa5e body=304 status=ok
// SIG undefined FUN_14916fa5e(void)

void FUN_14916fa5e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_140 = param_1 + 0x104;
  local_148 = param_1 + 0x100;
  local_150 = param_1 + 0xf0;
  local_158 = param_1 + 0xe0;
  local_160 = param_1 + 0x80;
  local_168 = *(undefined4 *)(param_1 + 0x78);
  FUN_14916fb90(&local_138,param_1 + 0x10,*(undefined4 *)(param_1 + 0x70),
                *(undefined4 *)(param_1 + 0x74));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14916fb90 FUN_14916fb90 body=1482 status=ok
// SIG undefined FUN_14916fb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14916fb90(longlong param_1,undefined8 *param_2,float param_3,uint param_4,float param_5,
                  undefined1 (*param_6) [16],longlong *param_7,longlong *param_8,int *param_9,
                  int *param_10)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar14 = param_2;
  pauVar13 = param_6;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined8 *)*pauVar13 = *puVar14;
    puVar14 = puVar14 + 1;
    pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
  }
  if (((int)param_4 < 1) || (param_5 <= 0.0)) {
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)*param_6 = *param_2;
      param_2 = param_2 + 1;
      param_6 = (undefined1 (*) [16])(*param_6 + 8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_178);
  }
  if ((int)param_7[1] == 0) {
    *param_10 = 0;
  }
  uVar6 = 0x200;
  if (param_4 < 0x200) {
    uVar6 = param_4;
  }
  uVar11 = 2;
  if (2 < uVar6) {
    uVar11 = uVar6;
  }
  FUN_140ee84a4(param_7,uVar11,1);
  FUN_144a84024(param_8,uVar11,1);
  if ((int)*(uint *)(param_7 + 1) <= (int)uVar11) {
    uVar11 = *(uint *)(param_7 + 1);
  }
  iVar10 = *param_10;
  if (iVar10 == 0) {
    puVar14 = param_2;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)*param_6 = *puVar14;
      puVar14 = puVar14 + 1;
      param_6 = (undefined1 (*) [16])(*param_6 + 8);
    }
  }
  else {
    local_158 = *param_2;
    uStack_150 = param_2[1];
    local_148 = *(undefined4 *)(param_2 + 2);
    uStack_144 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_140 = *(undefined4 *)(param_2 + 3);
    uStack_13c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar17 = *(undefined4 *)(param_2 + 4);
    uVar18 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar19 = *(undefined4 *)(param_2 + 5);
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x2c);
    dVar21 = (double)param_2[6];
    uVar27 = *(undefined4 *)(param_2 + 8);
    uVar28 = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar29 = *(undefined4 *)(param_2 + 9);
    uVar30 = *(undefined4 *)((longlong)param_2 + 0x4c);
    uVar31 = *(undefined4 *)(param_2 + 10);
    uVar32 = *(undefined4 *)((longlong)param_2 + 0x54);
    iVar9 = *param_9;
    lVar8 = *param_8;
    lVar15 = (longlong)iVar9;
    fVar41 = *(float *)(lVar8 + lVar15 * 4);
    if ((iVar10 == 1) || (param_3 < fVar41)) {
      lVar8 = *param_7;
      lVar15 = lVar15 * 0x60;
      local_138 = *(undefined8 *)(lVar8 + lVar15);
      uStack_130 = ((undefined8 *)(lVar8 + lVar15))[1];
      puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar15);
      local_128 = *puVar1;
      uStack_124 = puVar1[1];
      uStack_120 = puVar1[2];
      uStack_11c = puVar1[3];
      auVar23 = *(undefined1 (*) [16])(lVar8 + 0x20 + lVar15);
      puVar1 = (undefined4 *)(lVar8 + 0x30 + lVar15);
      uVar39 = *puVar1;
      uVar40 = puVar1[1];
      puVar1 = (undefined4 *)(lVar8 + 0x40 + lVar15);
      uVar33 = *puVar1;
      uVar34 = puVar1[1];
      uVar35 = puVar1[2];
      uVar36 = puVar1[3];
      puVar1 = (undefined4 *)(lVar8 + 0x50 + lVar15);
      uVar37 = *puVar1;
      uVar38 = puVar1[1];
      param_3 = param_3 / fVar41;
    }
    else if (iVar10 < 1) {
LAB_1491700ff:
      param_3 = 0.0;
      auVar23._4_4_ = uVar18;
      auVar23._0_4_ = uVar17;
      auVar23._8_4_ = uVar19;
      auVar23._12_4_ = uVar20;
      uVar39 = SUB84(dVar21,0);
      uVar40 = (undefined4)((ulonglong)dVar21 >> 0x20);
      local_128 = local_148;
      uStack_124 = uStack_144;
      uStack_120 = uStack_140;
      uStack_11c = uStack_13c;
      uVar33 = uVar27;
      uVar34 = uVar28;
      uVar35 = uVar29;
      uVar36 = uVar30;
      uVar37 = uVar31;
      uVar38 = uVar32;
      local_138 = local_158;
      uStack_130 = uStack_150;
    }
    else {
      lVar2 = *param_7;
      lVar7 = lVar15 * 0x60;
      local_138 = *(undefined8 *)(lVar2 + lVar7);
      uStack_130 = ((undefined8 *)(lVar2 + lVar7))[1];
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar7);
      local_128 = *puVar1;
      uStack_124 = puVar1[1];
      uStack_120 = puVar1[2];
      uStack_11c = puVar1[3];
      auVar23 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar7);
      puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
      uVar39 = *puVar1;
      uVar40 = puVar1[1];
      puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
      uVar33 = *puVar1;
      uVar34 = puVar1[1];
      uVar35 = puVar1[2];
      uVar36 = puVar1[3];
      puVar1 = (undefined4 *)(lVar2 + 0x50 + lVar7);
      uVar37 = *puVar1;
      uVar38 = puVar1[1];
      fVar42 = 0.0;
      if (0.0 < param_3) {
        iVar12 = iVar10;
        do {
          uStack_150 = uStack_130;
          local_158 = local_138;
          uVar32 = uVar38;
          uVar31 = uVar37;
          uVar30 = uVar36;
          uVar29 = uVar35;
          uVar28 = uVar34;
          uVar27 = uVar33;
          uStack_13c = uStack_11c;
          uStack_140 = uStack_120;
          uStack_144 = uStack_124;
          local_148 = local_128;
          uVar17 = auVar23._0_4_;
          uVar18 = auVar23._4_4_;
          uVar19 = auVar23._8_4_;
          uVar20 = auVar23._12_4_;
          dVar21 = (double)CONCAT44(uVar40,uVar39);
          iVar12 = iVar12 + -1;
          if (iVar12 == 0) goto LAB_1491700ff;
          iVar9 = (iVar9 + iVar10 + -1) % iVar10;
          fVar42 = fVar42 + *(float *)(lVar8 + lVar15 * 4);
          lVar15 = (longlong)iVar9;
          lVar7 = lVar15 * 0x60;
          local_138 = *(undefined8 *)(lVar2 + lVar7);
          uStack_130 = ((undefined8 *)(lVar2 + lVar7))[1];
          puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar7);
          local_128 = *puVar1;
          uStack_124 = puVar1[1];
          uStack_120 = puVar1[2];
          uStack_11c = puVar1[3];
          auVar23 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar7);
          puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar7);
          uVar39 = *puVar1;
          uVar40 = puVar1[1];
          puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar7);
          uVar33 = *puVar1;
          uVar34 = puVar1[1];
          uVar35 = puVar1[2];
          uVar36 = puVar1[3];
          puVar1 = (undefined4 *)(lVar2 + 0x50 + lVar7);
          uVar37 = *puVar1;
          uVar38 = puVar1[1];
        } while (fVar42 < param_3);
        fVar41 = *(float *)(lVar8 + lVar15 * 4);
      }
      param_3 = 1.0 - (fVar42 - param_3) / fVar41;
    }
    dVar5 = (double)param_3;
    *(double *)param_6[2] =
         (auVar23._0_8_ - (double)CONCAT44(uVar18,uVar17)) * dVar5 + (double)CONCAT44(uVar18,uVar17)
    ;
    *(double *)(param_6[2] + 8) =
         (auVar23._8_8_ - (double)CONCAT44(uVar20,uVar19)) * dVar5 + (double)CONCAT44(uVar20,uVar19)
    ;
    *(double *)param_6[3] = ((double)CONCAT44(uVar40,uVar39) - dVar21) * dVar5 + dVar21;
    *(undefined8 *)(param_6[3] + 8) = 0;
    FUN_144a44da6(&local_118);
    dVar21 = local_108 * local_108 + local_118 * local_118;
    dVar24 = dStack_100 * dStack_100 + dStack_110 * dStack_110;
    auVar22._0_8_ = dVar21 + dVar24;
    auVar22._8_8_ = dVar21 + dVar24;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar23 = sqrtpd(auVar22,auVar22);
    auVar25 = divpd(_DAT_149934d80,auVar23);
    auVar26._0_8_ = auVar25._0_8_ * local_108;
    auVar26._8_8_ = auVar25._8_8_ * dStack_100;
    uVar4 = (ulonglong)(dStack_110 * auVar25._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar16);
    auVar3._8_4_ = (int)uVar4;
    auVar3._0_8_ = (ulonglong)(local_118 * auVar25._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
    auVar3._12_4_ = (int)(uVar4 >> 0x20);
    *param_6 = auVar3;
    param_6[1] = auVar23;
    dVar21 = ((double)CONCAT44(uVar36,uVar35) - (double)CONCAT44(uVar30,uVar29)) * dVar5 +
             (double)CONCAT44(uVar30,uVar29);
    auVar25._8_4_ = SUB84(dVar21,0);
    auVar25._0_8_ =
         ((double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar28,uVar27)) * dVar5 +
         (double)CONCAT44(uVar28,uVar27);
    auVar25._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    param_6[4] = auVar25;
    *(double *)param_6[5] =
         ((double)CONCAT44(uVar38,uVar37) - (double)CONCAT44(uVar32,uVar31)) * dVar5 +
         (double)CONCAT44(uVar32,uVar31);
    *(undefined8 *)(param_6[5] + 8) = 0;
  }
  dVar21 = *(double *)(param_1 + 0x20);
  if (dVar21 <= 9.99999993922529e-09) goto LAB_1491700cb;
  iVar10 = *param_10;
  if (iVar10 == 0) {
    *param_9 = 0;
    puVar14 = (undefined8 *)((longlong)*param_10 * 0x60 + *param_7);
LAB_1491700a4:
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar14 = *param_2;
      param_2 = param_2 + 1;
      puVar14 = puVar14 + 1;
    }
    dVar21 = *(double *)(param_1 + 0x20);
    iVar10 = *param_10;
    *param_10 = iVar10 + 1;
  }
  else {
    iVar9 = *param_9;
    dVar5 = (double)*(float *)(*param_8 + (longlong)iVar9 * 4);
    if (dVar5 <= dVar21 * -0.5 + (double)(param_5 / (float)(int)(uVar11 - 1))) {
      *(float *)(*param_8 + (longlong)iVar9 * 4) = (float)(dVar21 + dVar5);
      goto LAB_1491700cb;
    }
    if (iVar10 < (int)uVar11) {
      *param_9 = iVar10;
      puVar14 = (undefined8 *)((longlong)*param_10 * 0x60 + *param_7);
      goto LAB_1491700a4;
    }
    iVar10 = (iVar9 + 1) % iVar10;
    *param_9 = iVar10;
    puVar14 = (undefined8 *)((longlong)iVar10 * 0x60 + *param_7);
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar14 = *param_2;
      param_2 = param_2 + 1;
      puVar14 = puVar14 + 1;
    }
    dVar21 = *(double *)(param_1 + 0x20);
    iVar10 = *param_9;
  }
  *(float *)(*param_8 + (longlong)iVar10 * 4) = (float)dVar21;
LAB_1491700cb:
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14917015c FUN_14917015c body=294 status=ok
// SIG undefined FUN_14917015c(void)

void FUN_14917015c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar1 = *(undefined4 *)puVar4[4];
  uVar2 = *(undefined4 *)puVar4[8];
  uVar3 = *(undefined4 *)puVar4[0xc];
  uVar6 = puVar4[0x10];
  uVar7 = puVar4[0x14];
  uVar8 = puVar4[0x18];
  uVar9 = puVar4[0x1c];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(puVar4 + 0x20,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0x120,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  FUN_1491703bc(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar1,uVar2,uVar3,uVar6,uVar7,uVar8,uVar9,
                uVar11,uVar12);
  return;
}



// FUNCTION 14917028a FUN_14917028a body=305 status=ok
// SIG undefined FUN_14917028a(void)

void FUN_14917028a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_138 = &PTR_FUN_14bad5c20;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0;
  local_108 = 0x3f91111111111111;
  local_100 = 0x800;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1490d751a(&local_138);
  local_148 = param_1 + 0xd0;
  local_150 = param_1 + 0x90;
  local_158 = param_1 + 0x78;
  local_160 = param_1 + 0x60;
  local_168 = param_1 + 0x48;
  local_170 = param_1 + 0x30;
  local_178 = *(undefined4 *)(param_1 + 0x28);
  FUN_1491703bc(&local_138,param_1 + 8,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x24));
  FUN_140f8ceac(&local_138);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491703bc FUN_1491703bc body=626 status=ok
// SIG undefined FUN_1491703bc(void)

void FUN_1491703bc(longlong param_1,double *param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,double *param_6,double *param_7,double *param_8,double *param_9
                  ,undefined8 *param_10,char *param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_11 == '\0') {
    *(undefined4 *)param_10 = 0x3f800000;
    dVar1 = param_2[1];
    param_10[2] = *param_2;
    param_10[3] = dVar1;
    param_10[4] = param_2[2];
    dVar1 = *param_2;
    dVar5 = param_2[1];
    param_7[2] = param_2[2];
    *param_7 = dVar1;
    param_7[1] = dVar5;
    param_10[7] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    param_10[5] = DAT_14c8464e0;
    param_10[6] = dVar1;
    dVar2 = DAT_14c8464f0;
    dVar5 = DAT_14c8464e8;
    dVar1 = DAT_14c8464e0;
    param_9[2] = DAT_14c8464f0;
    *param_9 = dVar1;
    param_9[1] = dVar5;
    param_8[2] = dVar2;
    *param_8 = dVar1;
    param_8[1] = dVar5;
    *param_11 = '\x01';
  }
  *(undefined4 *)(param_10 + 1) = param_4;
  dVar1 = *(double *)(param_1 + 0x20);
  if (9.99999993922529e-09 < dVar1) {
    if (param_3 <= 0.0001) {
      param_3 = 0.0001;
    }
    dVar5 = (double)param_3;
    local_78 = param_6[2] * dVar1 * 60.0 + (param_2[2] - (double)param_10[4]) * dVar5;
    local_80 = param_6[1] * dVar1 * 60.0 + (param_2[1] - (double)param_10[3]) * dVar5;
    local_88 = *param_6 * dVar1 * 60.0 + (*param_2 - (double)param_10[2]) * dVar5;
    dVar5 = (double)param_10[5];
    dVar2 = (double)param_10[6];
    dVar3 = (double)param_10[7];
    local_d8 = (float)dVar1;
    FUN_14915adde(param_10,&local_c8,&local_88,param_5);
    param_10[6] = local_98;
    param_10[7] = uStack_90;
    param_10[4] = local_a8;
    param_10[5] = uStack_a0;
    param_10[2] = local_b8;
    param_10[3] = uStack_b0;
    *param_10 = local_c8;
    param_10[1] = uStack_c0;
    dVar1 = (double)param_10[7];
    dVar4 = (double)param_10[6];
    dVar6 = 1.0 / *(double *)(param_1 + 0x20);
    *param_9 = dVar6 * ((double)param_10[5] - dVar5);
    param_9[1] = (dVar4 - dVar2) * dVar6;
    param_9[2] = (dVar1 - dVar3) * dVar6;
    param_7[2] = (double)param_10[4];
    dVar1 = (double)param_10[3];
    *param_7 = (double)param_10[2];
    param_7[1] = dVar1;
    param_8[2] = (double)param_10[7];
    uVar7 = *(undefined4 *)((longlong)param_10 + 0x2c);
    uVar8 = *(undefined4 *)(param_10 + 6);
    uVar9 = *(undefined4 *)((longlong)param_10 + 0x34);
    *(undefined4 *)param_8 = *(undefined4 *)(param_10 + 5);
    *(undefined4 *)((longlong)param_8 + 4) = uVar7;
    *(undefined4 *)(param_8 + 1) = uVar8;
    *(undefined4 *)((longlong)param_8 + 0xc) = uVar9;
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149170634 FUN_149170634 body=41 status=ok
// SIG undefined FUN_149170634(void)

void FUN_149170634(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 149170664 FUN_149170664 body=180 status=ok
// SIG undefined FUN_149170664(void)

void FUN_149170664(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2e0))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149170720 FUN_149170720 body=176 status=ok
// SIG undefined FUN_149170720(void)

void FUN_149170720(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491707d2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491707d2 FUN_1491707d2 body=266 status=ok
// SIG undefined FUN_1491707d2(void)

undefined4 FUN_1491707d2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  void **local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x2f8))();
  if ((char)uVar2 != '\0') {
    uVar1 = *param_2;
    local_50 = (undefined8 *)0x0;
    local_48 = 1;
    FUN_1401b309e(&local_50,1,0);
    *local_50 = uVar1;
    FUN_1408fd444(&local_40,param_1 + 0x31,&local_50);
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x2c0))(param_1);
    _Src = local_38;
    if (local_40 != &local_38) {
      *(int *)(local_40 + 1) = local_30;
      if (local_30 == 0 && *(int *)((longlong)local_40 + 0xc) == 0) {
        *(undefined4 *)((longlong)local_40 + 0xc) = 0;
      }
      else {
        FUN_1401b309e(local_40,local_30);
        if (local_30 != 0) {
          memcpy(*local_40,_Src,(longlong)local_30 << 3);
        }
      }
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491708de FUN_1491708de body=323 status=ok
// SIG undefined FUN_1491708de(void)

void FUN_1491708de(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_149170a22(&local_38,local_20,&local_40);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149170a22 FUN_149170a22 body=518 status=ok
// SIG undefined FUN_149170a22(void)

longlong * FUN_149170a22(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar5 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (lVar7 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
       != lVar5 + 0x30)) {
      uVar6 = FUN_144a6c4d8();
      lVar7 = FUN_144a78ede(param_2,uVar6);
    }
    FUN_149171972(&local_58);
    uVar9 = (ulonglong)local_48;
    if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
      do {
        lVar5 = *(longlong *)(local_58 + (uVar9 & 0xffffffff) * 8);
        if (lVar5 != 0) {
          lVar2 = *param_3;
          if (lVar2 != 0) {
            lVar3 = *(longlong *)(lVar5 + 0x10);
            lVar8 = FUN_141409182();
            if (((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                  == lVar8 + 0x30)) && (lVar2 = *param_3, lVar2 != 0)) &&
               (((((lVar3 == 0 || (lVar8 = FUN_141409182(), lVar8 == 0)) ||
                  ((*(int *)(lVar2 + 0x38) < *(int *)(lVar8 + 0x38) ||
                   ((*(longlong *)
                      (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                     lVar8 + 0x30 || (lVar2 = *param_3, lVar2 == 0)))))) ||
                 (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
                (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                 != lVar2 + 0x30)))) goto LAB_149170b45;
          }
          cVar4 = FUN_1468ff1d8(lVar5,param_2);
          if ((cVar4 != '\0') ||
             ((lVar7 != 0 && (cVar4 = FUN_1468ff1d8(lVar5,lVar7), cVar4 != '\0')))) {
            iVar1 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
              FUN_14917f752(param_1,iVar1);
            }
            *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar5;
          }
        }
LAB_149170b45:
        uVar9 = (longlong)(int)local_48;
        do {
          uVar10 = uVar9;
          uVar9 = uVar10 + 1;
          local_48 = (uint)uVar9;
          if ((longlong)local_50 <= (longlong)uVar9) break;
        } while (*(longlong *)(local_58 + uVar9 * 8) == 0);
      } while ((-2 < (longlong)uVar10) && ((int)local_48 < local_50));
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149170cac FUN_149170cac body=49 status=ok
// SIG undefined FUN_149170cac(void)

void FUN_149170cac(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x350))();
  FUN_145c50834(param_3,uVar1);
  return;
}



// FUNCTION 149170cde FUN_149170cde body=139 status=ok
// SIG undefined FUN_149170cde(void)

void FUN_149170cde(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149170d6a(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149170d6a FUN_149170d6a body=171 status=ok
// SIG undefined FUN_149170d6a(void)

longlong * FUN_149170d6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149172098(param_1,&local_40);
  lVar2 = local_40;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar3);
      lVar3 = lVar3 + 0x30;
    } while ((longlong)local_38 * 0x30 != lVar3);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149170e16 FUN_149170e16 body=49 status=ok
// SIG undefined FUN_149170e16(void)

void FUN_149170e16(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x300))();
  FUN_1406fa324(param_3,uVar1);
  return;
}



// FUNCTION 149170e48 FUN_149170e48 body=164 status=ok
// SIG undefined FUN_149170e48(void)

void FUN_149170e48(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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



// FUNCTION 149170eee FUN_149170eee body=188 status=ok
// SIG undefined FUN_149170eee(void)

void FUN_149170eee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149170fac(param_1,&local_30,puVar1);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149170fac FUN_149170fac body=123 status=ok
// SIG undefined FUN_149170fac(void)

longlong * FUN_149170fac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  ushort uStack_46;
  undefined4 uStack_44;
  undefined2 local_38;
  ushort uStack_36;
  undefined4 uStack_34;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409a6968(param_1,&local_48);
  if (((DAT_14c87eb08 + 1U <= (uint)uStack_46) ||
      (CONCAT44(uStack_44,CONCAT22(uStack_46,local_48)) == 0)) ||
     (lVar1 = CONCAT44(uStack_34,CONCAT22(uStack_36,local_38)),
     DAT_14c87eb08 + 1U <= (uint)uStack_36 || lVar1 == 0)) {
    lVar1 = 0;
  }
  *param_2 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149171028 FUN_149171028 body=62 status=ok
// SIG undefined FUN_149171028(void)

void FUN_149171028(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = param_1[0xb];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1,1);
    lVar1 = param_1[0xb];
  }
  *param_3 = lVar1;
  return;
}



// FUNCTION 14917106a FUN_14917106a body=41 status=ok
// SIG undefined FUN_14917106a(void)

void FUN_14917106a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x310))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14917109a FUN_14917109a body=189 status=ok
// SIG undefined FUN_14917109a(void)

void FUN_14917109a(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = FUN_140c0508e(param_1 + 0x1a8,*puVar2);
  *(bool *)param_3 = 0 < iVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149171172 FUN_149171172 body=315 status=ok
// SIG undefined FUN_149171172(void)

void FUN_149171172(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  uVar4 = local_2c;
  puVar6 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar6 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar6;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  puVar5 = (undefined4 *)
           FUN_140dfb35a(param_1 + 0x1a8,
                         ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4));
  *puVar5 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491712ae FUN_1491712ae body=240 status=ok
// SIG undefined FUN_1491712ae(void)

void FUN_1491712ae(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x4c) = local_1c;
  *(undefined4 *)(param_1 + 0x48) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491713a6 FUN_1491713a6 body=255 status=ok
// SIG undefined FUN_1491713a6(void)

void FUN_1491713a6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x4c) = local_1c;
  *(undefined1 *)(param_1 + 0x54) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491714a6 FUN_1491714a6 body=153 status=ok
// SIG undefined FUN_1491714a6(void)

void FUN_1491714a6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x48) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149171540 FUN_149171540 body=153 status=ok
// SIG undefined FUN_149171540(void)

void FUN_149171540(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x50) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491715e0 FUN_1491715e0 body=239 status=ok
// SIG undefined FUN_1491715e0(void)

void FUN_1491715e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  *param_3 = 0;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491716d0 FUN_1491716d0 body=3 status=ok
// SIG undefined FUN_1491716d0(void)

undefined8 FUN_1491716d0(void)

{
  return 0;
}



// FUNCTION 1491716da FUN_1491716da body=180 status=ok
// SIG undefined FUN_1491716da(void)

void FUN_1491716da(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149171792 FUN_149171792 body=75 status=ok
// SIG undefined FUN_149171792(void)

void FUN_149171792(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1491717de(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491717de FUN_1491717de body=402 status=ok
// SIG undefined FUN_1491717de(void)

void FUN_1491717de(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  longlong local_70;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb46be0);
  if (((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) && (param_1[0xb] != 0)) {
    uVar3 = (**(code **)(*param_1 + 800))(param_1,1);
    uVar4 = (**(code **)(*param_1 + 800))(param_1,0);
    local_60 = (undefined8 *)0x0;
    local_58 = 2;
    FUN_1460066bc(&local_60,2,0);
    *local_60 = uVar3;
    local_60[1] = uVar4;
    FUN_149171a42(param_1,&local_50,&local_60);
    lVar2 = local_50;
    if ((longlong)local_48 != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar6);
        if (lVar1 != 0) {
          lVar5 = FUN_1408cc5f4();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
            lVar5 = FUN_1414cc200();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_14917194d;
          }
          FUN_1400bbfc4(local_80,lVar1);
          FUN_1428295be(local_80,param_2);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
        }
LAB_14917194d:
        lVar6 = lVar6 + 8;
      } while ((longlong)local_48 * 8 != lVar6);
    }
    if (local_50 != 0) {
      FUN_1400020a8(local_50);
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149171972 FUN_149171972 body=107 status=ok
// SIG undefined FUN_149171972(void)

longlong * FUN_149171972(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_141409182();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1491719de FUN_1491719de body=78 status=ok
// SIG undefined FUN_1491719de(void)

uint FUN_1491719de(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 1;
  if (((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
     ((*(uint *)(param_1 + 8) & 0x18000) == 0)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    uVar1 = *(uint *)(lVar2 + 8) >> 0x15 & 1;
  }
  return uVar1;
}



// FUNCTION 149171a2c FUN_149171a2c body=22 status=ok
// SIG undefined FUN_149171a2c(void)

undefined8 FUN_149171a2c(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149171a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 149171a42 FUN_149171a42 body=980 status=ok
// SIG undefined FUN_149171a42(void)

undefined8 * FUN_149171a42(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    plVar15 = (longlong *)*param_3;
    plVar10 = plVar15 + (int)param_3[1];
    do {
      lVar12 = *plVar15;
      if ((lVar12 != 0) && ((longlong)*(int *)(lVar12 + 0x30) != 0)) {
        plVar13 = *(longlong **)(lVar12 + 0x28);
        plVar16 = plVar13 + *(int *)(lVar12 + 0x30);
LAB_149171aaf:
        for (lVar12 = *plVar13; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x78)) {
          lVar9 = *(longlong *)(lVar12 + 8);
          lVar6 = FUN_1446e6bbc();
          if (*(ulonglong *)(lVar6 + 8) == 0) {
            bVar17 = lVar9 != 0;
            if (lVar9 != lVar6 && bVar17) {
              do {
                lVar9 = *(longlong *)(lVar9 + 0x30);
                bVar17 = lVar9 != 0;
                if (lVar9 == lVar6) break;
              } while (lVar9 != 0);
            }
            if (!bVar17) goto LAB_149171b07;
          }
          else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_149171b07:
            lVar9 = *(longlong *)(lVar12 + 8);
            lVar6 = FUN_1446dcc8c();
            if (*(ulonglong *)(lVar6 + 8) == 0) {
              bVar17 = lVar9 != 0;
              if (lVar9 == lVar6 || !bVar17) goto LAB_149171b89;
              goto LAB_149171b75;
            }
            if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) goto LAB_149171b8d;
            goto LAB_149171b1f;
          }
        }
        goto LAB_149171b4e;
      }
LAB_149171c80:
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar10);
  }
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x230);
  lVar12 = (longlong)(int)plVar10[1];
  local_70 = param_3;
  if (lVar12 != 0) {
    puVar8 = (undefined8 *)*plVar10;
    local_68 = puVar8 + lVar12;
    do {
      uVar7 = *puVar8;
      local_60 = puVar8;
      lVar9 = FUN_14001a7b2();
      plVar10 = (longlong *)FUN_14446bd4a(uVar7);
      lVar12 = plVar10[1];
      if ((longlong)(int)lVar12 != 0) {
        lVar6 = *plVar10;
        lVar14 = 0;
        do {
          uVar3 = *(undefined4 *)(lVar6 + lVar14);
          local_50 = 0x100;
          local_58 = lVar9;
          AcquireSRWLockShared((PSRWLOCK)(lVar9 + 0x3a0));
          LOCK();
          piVar1 = (int *)(local_58 + 0x3ac);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (iVar2 == 0) {
            LOCK();
            *(undefined1 *)(local_58 + 0x3a8) = (undefined1)local_50;
            UNLOCK();
          }
          lVar11 = FUN_144476044(lVar9,uVar3);
          FUN_1409be446(&local_58);
          if (*(longlong *)(lVar11 + 8) != 0) {
            plVar10 = (longlong *)(lVar11 + 8);
            uVar7 = FUN_1408cc5f4();
            cVar5 = FUN_144a7ca96(plVar10,uVar7);
            lVar11 = *plVar10;
            if (cVar5 == '\0') {
              if (lVar11 != 0) {
                uVar7 = FUN_1414cc200();
                bVar4 = FUN_144a7ca96(plVar10,uVar7);
                lVar11 = *plVar10;
                if ((lVar11 != 0 & bVar4) == 1) goto LAB_149171db0;
              }
            }
            else if (lVar11 != 0) {
LAB_149171db0:
              local_58 = lVar11;
              FUN_14917fa70(local_78,&local_58);
            }
          }
          lVar14 = lVar14 + 4;
        } while ((longlong)(int)lVar12 * 4 != lVar14);
      }
      puVar8 = local_60 + 1;
    } while (puVar8 != local_68);
  }
  if (*local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_78;
  while (lVar9 != 0) {
LAB_149171b75:
    lVar9 = *(longlong *)(lVar9 + 0x30);
    bVar17 = lVar9 != 0;
    if (lVar9 == lVar6) break;
  }
LAB_149171b89:
  if (bVar17) {
LAB_149171b1f:
    if (*(longlong *)(lVar12 + 0x70) == 0) goto LAB_149171b4e;
    uVar7 = FUN_1408cc5f4();
LAB_149171b2f:
    bVar4 = FUN_144a7ca96((longlong *)(lVar12 + 0x70),uVar7);
    lVar12 = *(longlong *)(lVar12 + 0x70);
    if ((lVar12 != 0 & bVar4) != 1) goto LAB_149171b4e;
  }
  else {
LAB_149171b8d:
    lVar9 = *(longlong *)(lVar12 + 8);
    lVar6 = FUN_144a7add4();
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar17 = lVar9 != 0;
      if (lVar9 != lVar6 && bVar17) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar17 = lVar9 != 0;
          if (lVar9 == lVar6) break;
        } while (lVar9 != 0);
      }
      if (!bVar17) goto LAB_149171c00;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_149171c00:
      lVar9 = *(longlong *)(lVar12 + 8);
      lVar6 = FUN_14475a8dc();
      if (*(ulonglong *)(lVar6 + 8) == 0) {
        bVar17 = lVar9 != 0;
        if (lVar9 != lVar6 && bVar17) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar17 = lVar9 != 0;
            if (lVar9 == lVar6) break;
          } while (lVar9 != 0);
        }
        if (!bVar17) goto LAB_149171b4e;
      }
      else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) goto LAB_149171b4e;
      if (*(longlong *)(lVar12 + 0x70) == 0) goto LAB_149171b4e;
      uVar7 = FUN_1414cc200();
      goto LAB_149171b2f;
    }
    lVar12 = *(longlong *)(lVar12 + 0x78);
    if (lVar12 == 0) goto LAB_149171b4e;
    lVar9 = FUN_1414cc200();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_149171b4e;
  }
  local_58 = lVar12;
  FUN_14917fa70(local_78,&local_58);
LAB_149171b4e:
  plVar13 = plVar13 + 1;
  if (plVar13 == plVar16) goto LAB_149171c80;
  goto LAB_149171aaf;
}



// FUNCTION 149171e18 FUN_149171e18 body=81 status=ok
// SIG undefined FUN_149171e18(void)

void FUN_149171e18(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  *(int *)(local_18 + 0x94) = *(int *)(local_18 + 0x94) + 1;
  FUN_1468be722();
  FUN_149171e6a(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149171e6a FUN_149171e6a body=556 status=ok
// SIG undefined FUN_149171e6a(void)

void FUN_149171e6a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [16];
  longlong local_a0;
  longlong local_90 [2];
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  int local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1[0xb] != 0) {
    uVar5 = (**(code **)(*param_1 + 800))(param_1,1);
    uVar6 = (**(code **)(*param_1 + 800))(param_1,0);
    local_80 = (undefined8 *)0x0;
    local_78 = 2;
    FUN_1460066bc(&local_80,2,0);
    *local_80 = uVar5;
    local_80[1] = uVar6;
    FUN_149171a42(param_1,&local_70,&local_80);
    plVar1 = param_1 + 0xc;
    if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
      FUN_1490d13f8(plVar1);
      FUN_1490d153c(plVar1);
    }
    plVar2 = param_1 + 0x16;
    if ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4)) {
      FUN_1490d13f8(plVar2);
      FUN_1490d153c(plVar2);
    }
    FUN_14687cb70(param_1 + 0x20);
    lVar4 = local_70;
    if ((longlong)local_68 != 0) {
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(lVar4 + lVar9);
        if (lVar3 != 0) {
          lVar7 = FUN_1408cc5f4();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
            lVar7 = FUN_1414cc200();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_149171fe4;
            FUN_141906362(local_90,lVar3);
            FUN_1400bbfc4(local_b0,lVar3);
            plVar8 = plVar2;
          }
          else {
            FUN_1409a79e2(local_90,lVar3);
            FUN_1400bbfc4(local_b0,lVar3);
            plVar8 = plVar1;
          }
          local_60 = local_90;
          local_58 = local_b0;
          FUN_1490d1f04(plVar8,local_4c,&local_60,0);
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          if (local_90[0] != 0) {
            FUN_1400020a8();
          }
        }
LAB_149171fe4:
        lVar9 = lVar9 + 8;
      } while ((longlong)local_68 * 8 != lVar9);
    }
    if (local_70 != 0) {
      FUN_1400020a8(local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149172098 FUN_149172098 body=221 status=ok
// SIG undefined FUN_149172098(void)

longlong * FUN_149172098(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x360))(param_1,&local_40,1);
  lVar11 = local_40;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)local_38 != 0) {
    lVar14 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(lVar11 + 0x21 + lVar14) == '\x01') {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1466843f6(param_2,iVar3);
          lVar12 = *param_2;
        }
        puVar1 = (undefined4 *)(lVar11 + lVar14);
        lVar13 = (longlong)iVar3 * 0x30;
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar8 = *(undefined8 *)(puVar1 + 4);
        uVar9 = *(undefined8 *)(puVar1 + 6);
        uVar10 = *(undefined8 *)(puVar1 + 10);
        puVar2 = (undefined8 *)(lVar12 + 0x20 + lVar13);
        *puVar2 = *(undefined8 *)(puVar1 + 8);
        puVar2[1] = uVar10;
        puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar13);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar1 = (undefined4 *)(lVar12 + lVar13);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
      }
      lVar14 = lVar14 + 0x30;
    } while ((longlong)local_38 * 0x30 != lVar14);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491721a2 FUN_1491721a2 body=94 status=ok
// SIG undefined FUN_1491721a2(void)

void FUN_1491721a2(longlong *param_1,undefined8 *param_2)

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
    FUN_1490f2448(param_1,iVar2);
  }
  FUN_1490eb40a((longlong)iVar2 * 0xd0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 149172200 FUN_149172200 body=129 status=ok
// SIG undefined FUN_149172200(void)

undefined8 * FUN_149172200(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149172214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x3b8))();
    return puVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc05778) {
    FUN_144b3d300(&DAT_14cc05778);
    if (DAT_14cc05778 == -1) {
      DAT_14cc05768 = 0;
      uRam000000014cc05770 = 0;
      atexit((_func_5014 *)&LAB_1444876d5);
      _Init_thread_footer(&DAT_14cc05778);
    }
  }
  return &DAT_14cc05768;
}



// FUNCTION 1491722d0 FUN_1491722d0 body=29 status=ok
// SIG undefined FUN_1491722d0(void)

void FUN_1491722d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a799b0();
  FUN_144a78ede(param_1,uVar1);
  return;
}



// FUNCTION 1491722ed FUN_1491722ed body=199 status=ok
// SIG undefined FUN_1491722ed(void)

undefined8 FUN_1491722ed(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_c8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_c8);
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491723b6 FUN_1491723b6 body=218 status=ok
// SIG undefined FUN_1491723b6(void)

undefined8
FUN_1491723b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14b422d40;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bb46aa0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14591eb98(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172492 FUN_149172492 body=310 status=ok
// SIG undefined FUN_149172492(void)

ulonglong FUN_149172492(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar7);
  iVar3 = FUN_1490d10fe((longlong *)(param_1 + 0x60),uVar2,param_2);
  if (iVar3 == -1) {
LAB_149172564:
    iVar3 = *(int *)(param_2 + 1);
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    uVar8 = 0;
    uVar4 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar4 = uVar8;
    }
    uVar2 = FUN_144a49b4a(uVar4,puVar7);
    iVar3 = FUN_1490d10fe((longlong *)(param_1 + 0xb0),uVar2,param_2);
    if (iVar3 == -1) goto LAB_149172540;
    lVar6 = (longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0xb0);
    lVar5 = lVar6 + 0x10;
    if (lVar5 == 0 || lVar6 == 0) {
      uVar8 = 0;
      goto LAB_149172540;
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 + (longlong)iVar3 * 0x38 == 0) goto LAB_149172564;
    lVar5 = lVar5 + (longlong)iVar3 * 0x38 + 0x10;
  }
  uVar4 = FUN_140081d40(lVar5,0);
  uVar8 = 0;
  if (uVar4 != 0) {
    local_30 = uVar4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(uVar4);
    }
    FUN_14075b584(param_1 + 0x100,local_34,&local_30,0);
    uVar8 = uVar4;
  }
LAB_149172540:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491725ca FUN_1491725ca body=533 status=ok
// SIG undefined FUN_1491725ca(void)

void FUN_1491725ca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = 0x40001;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar5 = 0x48;
  }
  plVar2 = (longlong *)param_1[0x2a];
  lVar3 = (**(code **)(*param_1 + 0x2a0))();
  lVar4 = FUN_141357b6a(plVar2);
  if (lVar4 != lVar3) {
    (**(code **)(*plVar2 + 8))(plVar2,lVar3);
  }
  FUN_140457ffc(plVar2 + 0x3e,param_1);
  local_48 = &LAB_140478844;
  local_40 = 0;
  FUN_1491723b6(plVar2 + 0x3e,local_38,param_1);
  FUN_14591e884(param_1);
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (param_2 != (longlong *)0x0) {
      if (param_1[0xb] != 0) {
        if (param_2[0xb] != 0) goto LAB_149172747;
        (**(code **)(*param_2 + 0x2b0))(param_2,1);
        if (param_1[0xb] != 0) goto LAB_149172747;
      }
      lVar3 = param_2[0xb];
      if (lVar3 == 0) {
        (**(code **)(*param_2 + 0x2b0))(param_2,1);
        lVar3 = param_2[0xb];
      }
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0xb] = lVar3;
    }
  }
  else {
    lVar3 = param_1[0xb];
    if (lVar3 == 0) {
      FUN_1446f470e(&local_50,L"RigVM_VM",1);
      local_60 = 0;
      local_68 = 0;
      lVar3 = FUN_14591ec7d(param_1,local_50,uVar5,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0xb] = lVar3;
    }
    uVar1 = *(uint *)(param_1[2] + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x19 & 1) != 0) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
    }
  }
LAB_149172747:
  (**(code **)(*param_1 + 0x308))(param_1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491727ec FUN_1491727ec body=199 status=ok
// SIG undefined FUN_1491727ec(void)

void FUN_1491727ec(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = *(longlong *)(param_2 + 0x10);
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_30);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x41];
    *(uint *)(param_1 + 0x41) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x20c) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x40,iVar1);
    }
    *(longlong *)(param_1[0x40] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491728b4 FUN_1491728b4 body=177 status=ok
// SIG undefined FUN_1491728b4(void)

longlong FUN_1491728b4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (0 < (int)plVar2[1]) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*plVar2 + lVar5 * 8);
      if (lVar1 != 0) {
        lVar4 = *param_2;
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
LAB_1491728fc:
          lVar3 = FUN_144ae113c();
          if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) goto LAB_14917291e;
        }
        else {
          if (lVar4 != 0) goto LAB_1491728fc;
LAB_14917291e:
          lVar4 = 0;
        }
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          return lVar1;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)plVar2[1]);
  }
  return 0;
}



// FUNCTION 149172966 FUN_149172966 body=281 status=ok
// SIG undefined FUN_149172966(void)

void FUN_149172966(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x208);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x200) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_1491729b9:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_1491729db;
        }
        else {
          if (lVar5 != 0) goto LAB_1491729b9;
LAB_1491729db:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x208);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x208);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x200) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x200) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x208);
            }
            *(int *)(param_1 + 0x208) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x200));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 149172a90 FUN_149172a90 body=210 status=ok
// SIG undefined FUN_149172a90(void)

void FUN_149172a90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  longlong *local_50;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149172b64(param_1,local_68,local_28);
  FUN_149172bce(param_3,local_68);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172b64 FUN_149172b64 body=106 status=ok
// SIG undefined FUN_149172b64(void)

undefined8 * FUN_149172b64(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    lVar1 = (longlong)*(int *)(param_1 + 0x40) << 6;
    do {
      if (*plVar2 == param_3) {
        if (plVar2 != (longlong *)0x0) {
          FUN_1490e46bc(param_2);
          return param_2;
        }
        break;
      }
      plVar2 = plVar2 + 8;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2 + 3);
  param_2[5] = &DAT_3f8000003f800000;
  param_2[6] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_2 + 7) = 1;
  return param_2;
}



// FUNCTION 149172bce FUN_149172bce body=106 status=ok
// SIG undefined FUN_149172bce(void)

undefined8 * FUN_149172bce(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
  }
  FUN_140008f88(param_1 + 3,param_2 + 3);
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 149172c3b FUN_149172c3b body=132 status=ok
// SIG undefined FUN_149172c3b(void)

undefined4 FUN_149172c3b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,&DAT_149e06184);
  local_40 = 1;
  local_48 = 1;
  uVar1 = FUN_1407cdbc6(param_1,local_38,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172cc0 FUN_149172cc0 body=108 status=ok
// SIG undefined FUN_149172cc0(void)

undefined8 FUN_149172cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449b8608(local_30,param_2,&DAT_149e06184);
  FUN_144a7dea0(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172d2d FUN_149172d2d body=135 status=ok
// SIG undefined FUN_149172d2d(void)

undefined4 FUN_149172d2d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,&DAT_149e0635c);
  local_40 = 0;
  local_48 = 1;
  uVar1 = FUN_1407cdbc6(param_1,local_38,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172db5 FUN_149172db5 body=132 status=ok
// SIG undefined FUN_149172db5(void)

undefined4 FUN_149172db5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,&DAT_149e0635c);
  local_40 = 1;
  local_48 = 1;
  uVar1 = FUN_1407cdbc6(param_1,local_38,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172e3a FUN_149172e3a body=108 status=ok
// SIG undefined FUN_149172e3a(void)

undefined8 FUN_149172e3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449b8608(local_30,param_2,&DAT_149e0635c);
  FUN_144a7dea0(param_1,local_30,param_3);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149172ea7 FUN_149172ea7 body=1479 status=ok
// SIG undefined FUN_149172ea7(void)

longlong * FUN_149172ea7(undefined2 **param_1,longlong *param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined2 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 1);
  lVar7 = (longlong)local_70;
  puVar8 = *param_1;
  if (lVar7 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,puVar8,lVar7 * 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f8c06(param_1,0);
  }
  pvVar1 = local_78;
  if (*param_1 != (undefined2 *)0x0) {
    **param_1 = 0;
  }
  plVar4 = (longlong *)0x0;
  if ((param_2 == (longlong *)0x0) || (1 < *(int *)(param_1 + 1))) goto LAB_149172f4d;
  if ((*param_2 != 0) || ((int)param_2[9] != *(int *)((longlong)param_2 + 0x74))) {
    local_88 = (undefined2 *)0x0;
    lVar7 = (longlong)local_70;
    iStack_80 = local_70;
    if (lVar7 == 0) {
      uStack_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_70,0);
      memcpy(local_88,pvVar1,lVar7 * 2);
    }
    cVar2 = FUN_144a791f8(&local_88,L"TArray<",7,1);
    if (cVar2 != '\0') {
      do {
        FUN_140e64647(&local_58,&local_88);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_88 = local_58;
        iStack_80 = iStack_50;
        uStack_7c = uStack_4c;
        cVar2 = FUN_144a791f8(&local_88,L"TArray<",7,1);
      } while (cVar2 != '\0');
    }
    plVar4 = (longlong *)FUN_149173470(param_2,&local_88);
    pvVar1 = local_78;
    if (plVar4 != (longlong *)0x0) {
      local_98 = (undefined2 *)0x0;
      lVar7 = (longlong)local_70;
      iStack_90 = local_70;
      if (lVar7 == 0) {
        uStack_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_70,0);
        memcpy(local_98,pvVar1,lVar7 * 2);
      }
      cVar2 = FUN_144a791f8(&local_98,L"TSubclassOf<",0xc,1);
      lVar7 = FUN_144a797b2();
      if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) {
        lVar7 = FUN_1446f4bba();
        if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30)) {
          lVar7 = FUN_140851d9a();
          if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              != lVar7 + 0x30)) {
            local_68 = (undefined2 *)0x0;
            uStack_60 = 0;
          }
          else {
            FUN_141906362(&local_68,plVar4);
          }
        }
        else {
          FUN_1409a79e2(&local_68,plVar4);
        }
      }
      else {
        if (cVar2 == '\0') {
          lVar7 = FUN_144a8d392();
          if (((lVar7 == 0) || ((int)plVar4[7] < *(int *)(lVar7 + 0x38))) ||
             (*(longlong *)(plVar4[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
            local_68 = (undefined2 *)plVar4[3];
            FUN_1400021e4(&local_68,&local_58);
            puVar8 = local_58;
            if (iStack_50 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            puVar5 = (undefined *)(**(code **)(*plVar4 + 0x308))(plVar4);
            pwVar6 = L"TObjectPtr<%s%s>";
          }
          else {
            local_68 = (undefined2 *)plVar4[3];
            FUN_1400021e4(&local_68,&local_58);
            puVar8 = local_58;
            if (iStack_50 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            pwVar6 = L"TScriptInterface<%s%s>";
            puVar5 = &DAT_149ebbbf2;
          }
        }
        else {
          local_68 = (undefined2 *)plVar4[3];
          FUN_1400021e4(&local_68,&local_58);
          puVar8 = local_58;
          if (iStack_50 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          puVar5 = (undefined *)(**(code **)(*plVar4 + 0x308))(plVar4);
          pwVar6 = L"TSubclassOf<%s%s>";
        }
        FUN_140002266(&local_68,pwVar6,puVar5,puVar8);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_68;
      iStack_90 = (int)uStack_60;
      uStack_8c = uStack_60._4_4_;
      if ((int)uStack_60 == local_70) {
        if ((1 < (int)uStack_60) && (iVar3 = FUN_144a80a00(local_68,local_78), iVar3 != 0)) {
LAB_1491731b5:
          iVar3 = local_70;
          pvVar1 = local_78;
          local_58 = (undefined2 *)0x0;
          iStack_50 = local_70;
          if (local_70 == 0) {
            uStack_4c = 0;
          }
          else {
            FUN_1446dd670(&local_58,local_70,0);
            memcpy(local_58,pvVar1,(longlong)iVar3 * 2);
          }
          cVar2 = FUN_144a791f8(&local_58,L"TArray<",7,1);
          if (cVar2 != '\0') {
            do {
              puVar8 = &DAT_149dfb77a;
              if (iStack_90 != 0) {
                puVar8 = local_98;
              }
              FUN_140002266(&local_68,L"TArray<%s>",puVar8);
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_98 = local_68;
              iStack_90 = (int)uStack_60;
              uStack_8c = uStack_60._4_4_;
              FUN_140e64647(&local_68,&local_58);
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_58 = local_68;
              iStack_50 = (int)uStack_60;
              uStack_4c = uStack_60._4_4_;
              cVar2 = FUN_144a791f8(&local_58,L"TArray<",7,1);
            } while (cVar2 != '\0');
          }
          if (local_58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      else if ((int)uStack_60 + local_70 != 1) goto LAB_1491731b5;
      if (&local_98 == param_1) {
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *param_1 = local_98;
        local_98 = (undefined2 *)0x0;
        *(int *)(param_1 + 1) = iStack_90;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_149172f4d;
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)0x0;
LAB_149172f4d:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 149173470 FUN_149173470 body=168 status=ok
// SIG undefined FUN_149173470(void)

undefined8 FUN_149173470(undefined8 *param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar8 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[2];
    }
    uVar4 = (**(code **)(*plVar8 + 8))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x0001491734b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(uVar4,param_2);
    return uVar4;
  }
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar7);
  iVar3 = FUN_1490d10fe(param_1 + 8,uVar2,param_2);
  if ((iVar3 != -1) &&
     (lVar5 = (longlong)iVar3 * 0x38 + param_1[8], lVar6 = lVar5 + 0x10, lVar6 != 0 && lVar5 != 0))
  {
    uVar4 = FUN_140081d40(lVar6,0);
    return uVar4;
  }
  return 0;
}



// FUNCTION 14917351e FUN_14917351e body=102 status=ok
// SIG undefined FUN_14917351e(void)

undefined8 FUN_14917351e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4();
  FUN_140b127b8(param_2,&DAT_14a18491c,2,1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149173592 FUN_149173592 body=108 status=ok
// SIG undefined FUN_149173592(void)

undefined * FUN_149173592(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc05a40) {
    FUN_144b3d300(&DAT_14cc05a40);
    if (DAT_14cc05a40 == -1) {
      FUN_145b27bd0(&DAT_14cc05818);
      atexit((_func_5014 *)&LAB_144488154);
      _Init_thread_footer(&DAT_14cc05a40);
    }
  }
  return &DAT_14cc05818;
}



// FUNCTION 1491735fe FUN_1491735fe body=108 status=ok
// SIG undefined FUN_1491735fe(void)

undefined * FUN_1491735fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc05c70) {
    FUN_144b3d300(&DAT_14cc05c70);
    if (DAT_14cc05c70 == -1) {
      FUN_145b27bd0(&DAT_14cc05a48);
      atexit((_func_5014 *)&LAB_144488160);
      _Init_thread_footer(&DAT_14cc05c70);
    }
  }
  return &DAT_14cc05a48;
}



// FUNCTION 14917366a FUN_14917366a body=45 status=ok
// SIG undefined FUN_14917366a(void)

longlong FUN_14917366a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1456e4db8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14917369e FUN_14917369e body=38 status=ok
// SIG undefined FUN_14917369e(void)

undefined8 FUN_14917369e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"ContentEditors",1);
  return param_2;
}



// FUNCTION 149173796 FUN_149173796 body=59 status=ok
// SIG undefined FUN_149173796(void)

undefined8 FUN_149173796(longlong *param_1)

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



// FUNCTION 149173836 FUN_149173836 body=29 status=ok
// SIG undefined FUN_149173836(void)

undefined8 FUN_149173836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149173958 FUN_149173958 body=59 status=ok
// SIG undefined FUN_149173958(void)

undefined8 FUN_149173958(longlong *param_1)

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



// FUNCTION 1491739f8 FUN_1491739f8 body=29 status=ok
// SIG undefined FUN_1491739f8(void)

undefined8 FUN_1491739f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149173b4e FUN_149173b4e body=44 status=ok
// SIG undefined FUN_149173b4e(void)

undefined8 FUN_149173b4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149173ba2 FUN_149173ba2 body=59 status=ok
// SIG undefined FUN_149173ba2(void)

undefined8 FUN_149173ba2(longlong *param_1)

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



// FUNCTION 149173c4e FUN_149173c4e body=29 status=ok
// SIG undefined FUN_149173c4e(void)

undefined8 FUN_149173c4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149173db4 FUN_149173db4 body=71 status=ok
// SIG undefined FUN_149173db4(void)

undefined8 FUN_149173db4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149173e24 FUN_149173e24 body=59 status=ok
// SIG undefined FUN_149173e24(void)

undefined8 FUN_149173e24(longlong *param_1)

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



// FUNCTION 149173ed2 FUN_149173ed2 body=29 status=ok
// SIG undefined FUN_149173ed2(void)

undefined8 FUN_149173ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149173fd8 FUN_149173fd8 body=59 status=ok
// SIG undefined FUN_149173fd8(void)

undefined8 FUN_149173fd8(longlong *param_1)

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



// FUNCTION 149174078 FUN_149174078 body=29 status=ok
// SIG undefined FUN_149174078(void)

undefined8 FUN_149174078(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14917417e FUN_14917417e body=51 status=ok
// SIG undefined FUN_14917417e(void)

undefined8 FUN_14917417e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      *(undefined4 *)(param_2 + 0x48 + lVar1) = *(undefined4 *)(param_3 + 0x48 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491741da FUN_1491741da body=59 status=ok
// SIG undefined FUN_1491741da(void)

undefined8 FUN_1491741da(longlong *param_1)

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



// FUNCTION 14917427a FUN_14917427a body=29 status=ok
// SIG undefined FUN_14917427a(void)

undefined8 FUN_14917427a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149174360 FUN_149174360 body=39 status=ok
// SIG undefined FUN_149174360(void)

undefined8 FUN_149174360(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491743b0 FUN_1491743b0 body=59 status=ok
// SIG undefined FUN_1491743b0(void)

undefined8 FUN_1491743b0(longlong *param_1)

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



// FUNCTION 149174476 FUN_149174476 body=48 status=ok
// SIG undefined FUN_149174476(void)

void FUN_149174476(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491744bc FUN_1491744bc body=96 status=ok
// SIG undefined FUN_1491744bc(void)

undefined8 FUN_1491744bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined2 *)(param_2 + lVar1) = *(undefined2 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149174544 FUN_149174544 body=59 status=ok
// SIG undefined FUN_149174544(void)

undefined8 FUN_149174544(longlong *param_1)

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



// FUNCTION 1491745e2 FUN_1491745e2 body=52 status=ok
// SIG undefined FUN_1491745e2(void)

void FUN_1491745e2(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149174704 FUN_149174704 body=59 status=ok
// SIG undefined FUN_149174704(void)

undefined8 FUN_149174704(longlong *param_1)

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



// FUNCTION 1491747a6 FUN_1491747a6 body=32 status=ok
// SIG undefined FUN_1491747a6(void)

void FUN_1491747a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_141094b14(param_2);
  *param_2 = &PTR_FUN_14bb3c360;
  return;
}



// FUNCTION 1491747dc FUN_1491747dc body=103 status=ok
// SIG undefined FUN_1491747dc(void)

undefined8 FUN_1491747dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917486c FUN_14917486c body=59 status=ok
// SIG undefined FUN_14917486c(void)

undefined8 FUN_14917486c(longlong *param_1)

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



// FUNCTION 1491748b2 FUN_1491748b2 body=32 status=ok
// SIG undefined FUN_1491748b2(void)

void FUN_1491748b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149174928 FUN_149174928 body=32 status=ok
// SIG undefined FUN_149174928(void)

void FUN_149174928(undefined8 param_1,undefined8 *param_2)

{
  FUN_141094b14(param_2);
  *param_2 = &PTR_FUN_14bb3c5b0;
  return;
}



// FUNCTION 14917495e FUN_14917495e body=103 status=ok
// SIG undefined FUN_14917495e(void)

undefined8 FUN_14917495e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491749ee FUN_1491749ee body=59 status=ok
// SIG undefined FUN_1491749ee(void)

undefined8 FUN_1491749ee(longlong *param_1)

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



// FUNCTION 149174a34 FUN_149174a34 body=32 status=ok
// SIG undefined FUN_149174a34(void)

void FUN_149174a34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149174ac2 FUN_149174ac2 body=103 status=ok
// SIG undefined FUN_149174ac2(void)

undefined8 FUN_149174ac2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149174b52 FUN_149174b52 body=59 status=ok
// SIG undefined FUN_149174b52(void)

undefined8 FUN_149174b52(longlong *param_1)

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



// FUNCTION 149174b98 FUN_149174b98 body=32 status=ok
// SIG undefined FUN_149174b98(void)

void FUN_149174b98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149174c26 FUN_149174c26 body=103 status=ok
// SIG undefined FUN_149174c26(void)

undefined8 FUN_149174c26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149174cb6 FUN_149174cb6 body=59 status=ok
// SIG undefined FUN_149174cb6(void)

undefined8 FUN_149174cb6(longlong *param_1)

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



// FUNCTION 149174cfc FUN_149174cfc body=32 status=ok
// SIG undefined FUN_149174cfc(void)

void FUN_149174cfc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149174d8c FUN_149174d8c body=103 status=ok
// SIG undefined FUN_149174d8c(void)

undefined8 FUN_149174d8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149174e1c FUN_149174e1c body=59 status=ok
// SIG undefined FUN_149174e1c(void)

undefined8 FUN_149174e1c(longlong *param_1)

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



// FUNCTION 149174e62 FUN_149174e62 body=32 status=ok
// SIG undefined FUN_149174e62(void)

void FUN_149174e62(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149174ef2 FUN_149174ef2 body=103 status=ok
// SIG undefined FUN_149174ef2(void)

undefined8 FUN_149174ef2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149174f82 FUN_149174f82 body=59 status=ok
// SIG undefined FUN_149174f82(void)

undefined8 FUN_149174f82(longlong *param_1)

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



// FUNCTION 149174fc8 FUN_149174fc8 body=32 status=ok
// SIG undefined FUN_149174fc8(void)

void FUN_149174fc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175058 FUN_149175058 body=103 status=ok
// SIG undefined FUN_149175058(void)

undefined8 FUN_149175058(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491750e8 FUN_1491750e8 body=59 status=ok
// SIG undefined FUN_1491750e8(void)

undefined8 FUN_1491750e8(longlong *param_1)

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



// FUNCTION 14917512e FUN_14917512e body=32 status=ok
// SIG undefined FUN_14917512e(void)

void FUN_14917512e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1491751bc FUN_1491751bc body=103 status=ok
// SIG undefined FUN_1491751bc(void)

undefined8 FUN_1491751bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917524c FUN_14917524c body=59 status=ok
// SIG undefined FUN_14917524c(void)

undefined8 FUN_14917524c(longlong *param_1)

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



// FUNCTION 149175292 FUN_149175292 body=32 status=ok
// SIG undefined FUN_149175292(void)

void FUN_149175292(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175322 FUN_149175322 body=103 status=ok
// SIG undefined FUN_149175322(void)

undefined8 FUN_149175322(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491753b2 FUN_1491753b2 body=59 status=ok
// SIG undefined FUN_1491753b2(void)

undefined8 FUN_1491753b2(longlong *param_1)

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



// FUNCTION 1491753f8 FUN_1491753f8 body=32 status=ok
// SIG undefined FUN_1491753f8(void)

void FUN_1491753f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175488 FUN_149175488 body=103 status=ok
// SIG undefined FUN_149175488(void)

undefined8 FUN_149175488(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149175518 FUN_149175518 body=59 status=ok
// SIG undefined FUN_149175518(void)

undefined8 FUN_149175518(longlong *param_1)

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



// FUNCTION 14917555e FUN_14917555e body=32 status=ok
// SIG undefined FUN_14917555e(void)

void FUN_14917555e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1491755ee FUN_1491755ee body=103 status=ok
// SIG undefined FUN_1491755ee(void)

undefined8 FUN_1491755ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917567e FUN_14917567e body=59 status=ok
// SIG undefined FUN_14917567e(void)

undefined8 FUN_14917567e(longlong *param_1)

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



// FUNCTION 1491756c4 FUN_1491756c4 body=32 status=ok
// SIG undefined FUN_1491756c4(void)

void FUN_1491756c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175754 FUN_149175754 body=103 status=ok
// SIG undefined FUN_149175754(void)

undefined8 FUN_149175754(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491757e4 FUN_1491757e4 body=59 status=ok
// SIG undefined FUN_1491757e4(void)

undefined8 FUN_1491757e4(longlong *param_1)

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



// FUNCTION 14917582a FUN_14917582a body=32 status=ok
// SIG undefined FUN_14917582a(void)

void FUN_14917582a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1491758ba FUN_1491758ba body=103 status=ok
// SIG undefined FUN_1491758ba(void)

undefined8 FUN_1491758ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917594a FUN_14917594a body=59 status=ok
// SIG undefined FUN_14917594a(void)

undefined8 FUN_14917594a(longlong *param_1)

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



// FUNCTION 149175990 FUN_149175990 body=32 status=ok
// SIG undefined FUN_149175990(void)

void FUN_149175990(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175a20 FUN_149175a20 body=103 status=ok
// SIG undefined FUN_149175a20(void)

undefined8 FUN_149175a20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149175ab0 FUN_149175ab0 body=59 status=ok
// SIG undefined FUN_149175ab0(void)

undefined8 FUN_149175ab0(longlong *param_1)

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



// FUNCTION 149175af6 FUN_149175af6 body=32 status=ok
// SIG undefined FUN_149175af6(void)

void FUN_149175af6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175b86 FUN_149175b86 body=103 status=ok
// SIG undefined FUN_149175b86(void)

undefined8 FUN_149175b86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149175c16 FUN_149175c16 body=59 status=ok
// SIG undefined FUN_149175c16(void)

undefined8 FUN_149175c16(longlong *param_1)

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



// FUNCTION 149175c5c FUN_149175c5c body=32 status=ok
// SIG undefined FUN_149175c5c(void)

void FUN_149175c5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175cec FUN_149175cec body=103 status=ok
// SIG undefined FUN_149175cec(void)

undefined8 FUN_149175cec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149175d7c FUN_149175d7c body=59 status=ok
// SIG undefined FUN_149175d7c(void)

undefined8 FUN_149175d7c(longlong *param_1)

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



// FUNCTION 149175dc2 FUN_149175dc2 body=32 status=ok
// SIG undefined FUN_149175dc2(void)

void FUN_149175dc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175e52 FUN_149175e52 body=103 status=ok
// SIG undefined FUN_149175e52(void)

undefined8 FUN_149175e52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149175ee2 FUN_149175ee2 body=59 status=ok
// SIG undefined FUN_149175ee2(void)

undefined8 FUN_149175ee2(longlong *param_1)

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



// FUNCTION 149175f28 FUN_149175f28 body=32 status=ok
// SIG undefined FUN_149175f28(void)

void FUN_149175f28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149175fb8 FUN_149175fb8 body=103 status=ok
// SIG undefined FUN_149175fb8(void)

undefined8 FUN_149175fb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176048 FUN_149176048 body=59 status=ok
// SIG undefined FUN_149176048(void)

undefined8 FUN_149176048(longlong *param_1)

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



// FUNCTION 14917608e FUN_14917608e body=32 status=ok
// SIG undefined FUN_14917608e(void)

void FUN_14917608e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14917611e FUN_14917611e body=103 status=ok
// SIG undefined FUN_14917611e(void)

undefined8 FUN_14917611e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491761ae FUN_1491761ae body=59 status=ok
// SIG undefined FUN_1491761ae(void)

undefined8 FUN_1491761ae(longlong *param_1)

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



// FUNCTION 1491761f4 FUN_1491761f4 body=32 status=ok
// SIG undefined FUN_1491761f4(void)

void FUN_1491761f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176284 FUN_149176284 body=103 status=ok
// SIG undefined FUN_149176284(void)

undefined8 FUN_149176284(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176314 FUN_149176314 body=59 status=ok
// SIG undefined FUN_149176314(void)

undefined8 FUN_149176314(longlong *param_1)

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



// FUNCTION 14917635a FUN_14917635a body=32 status=ok
// SIG undefined FUN_14917635a(void)

void FUN_14917635a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1491763ea FUN_1491763ea body=103 status=ok
// SIG undefined FUN_1491763ea(void)

undefined8 FUN_1491763ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917647a FUN_14917647a body=59 status=ok
// SIG undefined FUN_14917647a(void)

undefined8 FUN_14917647a(longlong *param_1)

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



// FUNCTION 1491764c0 FUN_1491764c0 body=32 status=ok
// SIG undefined FUN_1491764c0(void)

void FUN_1491764c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176532 FUN_149176532 body=32 status=ok
// SIG undefined FUN_149176532(void)

void FUN_149176532(undefined8 param_1,undefined8 *param_2)

{
  FUN_141094b14(param_2);
  *param_2 = &PTR_FUN_14bb3c3e0;
  return;
}



// FUNCTION 149176568 FUN_149176568 body=103 status=ok
// SIG undefined FUN_149176568(void)

undefined8 FUN_149176568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491765f8 FUN_1491765f8 body=59 status=ok
// SIG undefined FUN_1491765f8(void)

undefined8 FUN_1491765f8(longlong *param_1)

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



// FUNCTION 14917663e FUN_14917663e body=32 status=ok
// SIG undefined FUN_14917663e(void)

void FUN_14917663e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1491766cc FUN_1491766cc body=103 status=ok
// SIG undefined FUN_1491766cc(void)

undefined8 FUN_1491766cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917675c FUN_14917675c body=59 status=ok
// SIG undefined FUN_14917675c(void)

undefined8 FUN_14917675c(longlong *param_1)

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



// FUNCTION 1491767a2 FUN_1491767a2 body=32 status=ok
// SIG undefined FUN_1491767a2(void)

void FUN_1491767a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176830 FUN_149176830 body=103 status=ok
// SIG undefined FUN_149176830(void)

undefined8 FUN_149176830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491768c0 FUN_1491768c0 body=59 status=ok
// SIG undefined FUN_1491768c0(void)

undefined8 FUN_1491768c0(longlong *param_1)

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



// FUNCTION 149176906 FUN_149176906 body=32 status=ok
// SIG undefined FUN_149176906(void)

void FUN_149176906(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176994 FUN_149176994 body=103 status=ok
// SIG undefined FUN_149176994(void)

undefined8 FUN_149176994(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176a24 FUN_149176a24 body=59 status=ok
// SIG undefined FUN_149176a24(void)

undefined8 FUN_149176a24(longlong *param_1)

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



// FUNCTION 149176a6a FUN_149176a6a body=32 status=ok
// SIG undefined FUN_149176a6a(void)

void FUN_149176a6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176afa FUN_149176afa body=103 status=ok
// SIG undefined FUN_149176afa(void)

undefined8 FUN_149176afa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176b8a FUN_149176b8a body=59 status=ok
// SIG undefined FUN_149176b8a(void)

undefined8 FUN_149176b8a(longlong *param_1)

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



// FUNCTION 149176bd0 FUN_149176bd0 body=32 status=ok
// SIG undefined FUN_149176bd0(void)

void FUN_149176bd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176c5e FUN_149176c5e body=103 status=ok
// SIG undefined FUN_149176c5e(void)

undefined8 FUN_149176c5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176cee FUN_149176cee body=59 status=ok
// SIG undefined FUN_149176cee(void)

undefined8 FUN_149176cee(longlong *param_1)

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



// FUNCTION 149176d34 FUN_149176d34 body=32 status=ok
// SIG undefined FUN_149176d34(void)

void FUN_149176d34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176dc2 FUN_149176dc2 body=103 status=ok
// SIG undefined FUN_149176dc2(void)

undefined8 FUN_149176dc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176e52 FUN_149176e52 body=59 status=ok
// SIG undefined FUN_149176e52(void)

undefined8 FUN_149176e52(longlong *param_1)

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



// FUNCTION 149176e98 FUN_149176e98 body=32 status=ok
// SIG undefined FUN_149176e98(void)

void FUN_149176e98(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 149176f28 FUN_149176f28 body=103 status=ok
// SIG undefined FUN_149176f28(void)

undefined8 FUN_149176f28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149176fb8 FUN_149176fb8 body=59 status=ok
// SIG undefined FUN_149176fb8(void)

undefined8 FUN_149176fb8(longlong *param_1)

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



// FUNCTION 149176ffe FUN_149176ffe body=32 status=ok
// SIG undefined FUN_149176ffe(void)

void FUN_149176ffe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14917708e FUN_14917708e body=103 status=ok
// SIG undefined FUN_14917708e(void)

undefined8 FUN_14917708e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14917711e FUN_14917711e body=59 status=ok
// SIG undefined FUN_14917711e(void)

undefined8 FUN_14917711e(longlong *param_1)

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



// FUNCTION 149177164 FUN_149177164 body=32 status=ok
// SIG undefined FUN_149177164(void)

void FUN_149177164(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14917723e FUN_14917723e body=59 status=ok
// SIG undefined FUN_14917723e(void)

undefined8 FUN_14917723e(longlong *param_1)

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



// FUNCTION 1491772de FUN_1491772de body=29 status=ok
// SIG undefined FUN_1491772de(void)

undefined8 FUN_1491772de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149177330 FUN_149177330 body=63 status=ok
// SIG undefined FUN_149177330(void)

undefined1 FUN_149177330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149177798(param_2,param_3);
    param_3 = param_3 + 0x470;
    param_2 = param_2 + 0x470;
  }
  return 1;
}



// FUNCTION 149177398 FUN_149177398 body=59 status=ok
// SIG undefined FUN_149177398(void)

undefined8 FUN_149177398(longlong *param_1)

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



// FUNCTION 14917743a FUN_14917743a body=506 status=ok
// SIG undefined FUN_14917743a(void)

void FUN_14917743a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb3fe10;
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
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x26] = &PTR_FUN_14bad5c20;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0x3f91111111111111;
  param_1[0x2d] = 0x800;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x48] = &PTR_FUN_14bad5c20;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4e] = 0x3f91111111111111;
  param_1[0x4f] = 0x800;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x56;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x6a] = &PTR_FUN_14bad5c20;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x70] = 0x3f91111111111111;
  param_1[0x71] = 0x800;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  return;
}



// FUNCTION 149177634 FUN_149177634 body=88 status=ok
// SIG undefined FUN_149177634(void)

undefined8 * FUN_149177634(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb3fe10;
  FUN_140f8ceac(param_1 + 0x6a);
  FUN_140f8ceac(param_1 + 0x48);
  FUN_140f8ceac(param_1 + 0x26);
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14917768c FUN_14917768c body=266 status=ok
// SIG undefined FUN_14917768c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14917768c(void)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc05810) {
    FUN_144b3d300(&DAT_14cc05810);
    if (DAT_14cc05810 == -1) {
      FUN_1446f470e(&local_28,&DAT_149e0617a,1);
      FUN_1446f470e(&uStack_20,L"False",1);
      FUN_1446f57c6(&DAT_14cc00d70,&local_18);
      DAT_14cc05800 = (undefined8 *)0x0;
      _DAT_14cc05808 = 3;
      FUN_1401b309e(&DAT_14cc05800,3,0);
      puVar1 = DAT_14cc05800;
      DAT_14cc05800[2] = local_18;
      *puVar1 = local_28;
      puVar1[1] = uStack_20;
      atexit((_func_5014 *)&LAB_144487b8a);
      _Init_thread_footer(&DAT_14cc05810);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc05800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149177798 FUN_149177798 body=542 status=ok
// SIG undefined FUN_149177798(void)

longlong FUN_149177798(longlong param_1,longlong param_2)

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
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_14591e93c(param_1 + 0x48,param_2 + 0x48);
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x98);
  FUN_1490e1992(param_1 + 0xf8,param_2 + 0xf8);
  FUN_145c50a48(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 0x138);
  uVar2 = *(undefined4 *)(param_2 + 0x13c);
  uVar3 = *(undefined4 *)(param_2 + 0x140);
  uVar4 = *(undefined4 *)(param_2 + 0x144);
  uVar5 = *(undefined4 *)(param_2 + 0x148);
  uVar6 = *(undefined4 *)(param_2 + 0x14c);
  uVar7 = *(undefined4 *)(param_2 + 0x150);
  uVar8 = *(undefined4 *)(param_2 + 0x154);
  uVar9 = *(undefined4 *)(param_2 + 0x15c);
  uVar10 = *(undefined4 *)(param_2 + 0x160);
  uVar11 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar9;
  *(undefined4 *)(param_1 + 0x160) = uVar10;
  *(undefined4 *)(param_1 + 0x164) = uVar11;
  *(undefined4 *)(param_1 + 0x148) = uVar5;
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  *(undefined4 *)(param_1 + 0x150) = uVar7;
  *(undefined4 *)(param_1 + 0x154) = uVar8;
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  *(undefined4 *)(param_1 + 0x140) = uVar3;
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  FUN_14591e93c(param_1 + 0x168,param_2 + 0x168);
  memcpy((void *)(param_1 + 0x180),(void *)(param_2 + 0x180),0x98);
  FUN_1490e1992(param_1 + 0x218,param_2 + 0x218);
  FUN_145c50a48(param_1 + 0x228,param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_2 + 0x238);
  uVar1 = *(undefined4 *)(param_2 + 0x248);
  uVar2 = *(undefined4 *)(param_2 + 0x24c);
  uVar3 = *(undefined4 *)(param_2 + 0x250);
  uVar4 = *(undefined4 *)(param_2 + 0x254);
  uVar5 = *(undefined4 *)(param_2 + 600);
  uVar6 = *(undefined4 *)(param_2 + 0x25c);
  uVar7 = *(undefined4 *)(param_2 + 0x260);
  uVar8 = *(undefined4 *)(param_2 + 0x264);
  uVar9 = *(undefined4 *)(param_2 + 0x26c);
  uVar10 = *(undefined4 *)(param_2 + 0x270);
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = uVar9;
  *(undefined4 *)(param_1 + 0x270) = uVar10;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined4 *)(param_1 + 600) = uVar5;
  *(undefined4 *)(param_1 + 0x25c) = uVar6;
  *(undefined4 *)(param_1 + 0x260) = uVar7;
  *(undefined4 *)(param_1 + 0x264) = uVar8;
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  *(undefined4 *)(param_1 + 0x24c) = uVar2;
  *(undefined4 *)(param_1 + 0x250) = uVar3;
  *(undefined4 *)(param_1 + 0x254) = uVar4;
  FUN_14591e93c(param_1 + 0x278,param_2 + 0x278);
  memcpy((void *)(param_1 + 0x290),(void *)(param_2 + 0x290),0x98);
  FUN_1490e1992(param_1 + 0x328,param_2 + 0x328);
  FUN_145c50a48(param_1 + 0x338,param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  uVar1 = *(undefined4 *)(param_2 + 0x358);
  uVar2 = *(undefined4 *)(param_2 + 0x35c);
  uVar3 = *(undefined4 *)(param_2 + 0x360);
  uVar4 = *(undefined4 *)(param_2 + 0x364);
  uVar5 = *(undefined4 *)(param_2 + 0x368);
  uVar6 = *(undefined4 *)(param_2 + 0x36c);
  uVar7 = *(undefined4 *)(param_2 + 0x370);
  uVar8 = *(undefined4 *)(param_2 + 0x374);
  uVar9 = *(undefined4 *)(param_2 + 0x37c);
  uVar10 = *(undefined4 *)(param_2 + 0x380);
  uVar11 = *(undefined4 *)(param_2 + 900);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x37c) = uVar9;
  *(undefined4 *)(param_1 + 0x380) = uVar10;
  *(undefined4 *)(param_1 + 900) = uVar11;
  *(undefined4 *)(param_1 + 0x368) = uVar5;
  *(undefined4 *)(param_1 + 0x36c) = uVar6;
  *(undefined4 *)(param_1 + 0x370) = uVar7;
  *(undefined4 *)(param_1 + 0x374) = uVar8;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined4 *)(param_1 + 0x35c) = uVar2;
  *(undefined4 *)(param_1 + 0x360) = uVar3;
  *(undefined4 *)(param_1 + 0x364) = uVar4;
  FUN_14591e93c(param_1 + 0x388,param_2 + 0x388);
  memcpy((void *)(param_1 + 0x3a0),(void *)(param_2 + 0x3a0),0x98);
  FUN_1490e1992(param_1 + 0x438,param_2 + 0x438);
  FUN_145c50a48(param_1 + 0x448,param_2 + 0x448);
  *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_2 + 0x458);
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  return param_1;
}


