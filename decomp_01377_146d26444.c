// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146d26444 FUN_146d26444 body=172 status=ok
// SIG undefined FUN_146d26444(void)

void FUN_146d26444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d264f1(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d264f1 FUN_146d264f1 body=1080 status=ok
// SIG undefined FUN_146d264f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d264f1(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d2692a FUN_146d2692a body=172 status=ok
// SIG undefined FUN_146d2692a(void)

void FUN_146d2692a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d269d7(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d269d7 FUN_146d269d7 body=1080 status=ok
// SIG undefined FUN_146d269d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d269d7(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d26e10 FUN_146d26e10 body=172 status=ok
// SIG undefined FUN_146d26e10(void)

void FUN_146d26e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d26ebd(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d26ebd FUN_146d26ebd body=1080 status=ok
// SIG undefined FUN_146d26ebd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d26ebd(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d272f6 FUN_146d272f6 body=172 status=ok
// SIG undefined FUN_146d272f6(void)

void FUN_146d272f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d273a3(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d273a3 FUN_146d273a3 body=1073 status=ok
// SIG undefined FUN_146d273a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d273a3(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d277d6 FUN_146d277d6 body=172 status=ok
// SIG undefined FUN_146d277d6(void)

void FUN_146d277d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d27883(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d27883 FUN_146d27883 body=1080 status=ok
// SIG undefined FUN_146d27883(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d27883(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d27cbc FUN_146d27cbc body=172 status=ok
// SIG undefined FUN_146d27cbc(void)

void FUN_146d27cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d27d69(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d27d69 FUN_146d27d69 body=1080 status=ok
// SIG undefined FUN_146d27d69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d27d69(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d281a2 FUN_146d281a2 body=172 status=ok
// SIG undefined FUN_146d281a2(void)

void FUN_146d281a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2824f(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2824f FUN_146d2824f body=1080 status=ok
// SIG undefined FUN_146d2824f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2824f(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d28688 FUN_146d28688 body=172 status=ok
// SIG undefined FUN_146d28688(void)

void FUN_146d28688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d28735(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d28735 FUN_146d28735 body=1080 status=ok
// SIG undefined FUN_146d28735(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d28735(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d28b6e FUN_146d28b6e body=172 status=ok
// SIG undefined FUN_146d28b6e(void)

void FUN_146d28b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d28c1b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d28c1b FUN_146d28c1b body=1080 status=ok
// SIG undefined FUN_146d28c1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d28c1b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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



// FUNCTION 146d29054 FUN_146d29054 body=172 status=ok
// SIG undefined FUN_146d29054(void)

void FUN_146d29054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d29101(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d29101 FUN_146d29101 body=1080 status=ok
// SIG undefined FUN_146d29101(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d29101(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2953a FUN_146d2953a body=1080 status=ok
// SIG undefined FUN_146d2953a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2953a(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d29974 FUN_146d29974 body=172 status=ok
// SIG undefined FUN_146d29974(void)

void FUN_146d29974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d29a21(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d29a21 FUN_146d29a21 body=1080 status=ok
// SIG undefined FUN_146d29a21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d29a21(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d29e5a FUN_146d29e5a body=1080 status=ok
// SIG undefined FUN_146d29e5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d29e5a(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2a294 FUN_146d2a294 body=172 status=ok
// SIG undefined FUN_146d2a294(void)

void FUN_146d2a294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2a341(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2a341 FUN_146d2a341 body=1080 status=ok
// SIG undefined FUN_146d2a341(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2a341(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2a77a FUN_146d2a77a body=172 status=ok
// SIG undefined FUN_146d2a77a(void)

void FUN_146d2a77a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2a827(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2a827 FUN_146d2a827 body=1080 status=ok
// SIG undefined FUN_146d2a827(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2a827(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2ac60 FUN_146d2ac60 body=172 status=ok
// SIG undefined FUN_146d2ac60(void)

void FUN_146d2ac60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2ad0d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2ad0d FUN_146d2ad0d body=1080 status=ok
// SIG undefined FUN_146d2ad0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2ad0d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2b146 FUN_146d2b146 body=1073 status=ok
// SIG undefined FUN_146d2b146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2b146(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2b578 FUN_146d2b578 body=172 status=ok
// SIG undefined FUN_146d2b578(void)

void FUN_146d2b578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2b625(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2b625 FUN_146d2b625 body=1080 status=ok
// SIG undefined FUN_146d2b625(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2b625(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2ba5e FUN_146d2ba5e body=172 status=ok
// SIG undefined FUN_146d2ba5e(void)

void FUN_146d2ba5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2bb0b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2bb0b FUN_146d2bb0b body=1080 status=ok
// SIG undefined FUN_146d2bb0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2bb0b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2bf44 FUN_146d2bf44 body=172 status=ok
// SIG undefined FUN_146d2bf44(void)

void FUN_146d2bf44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2bff1(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2bff1 FUN_146d2bff1 body=1080 status=ok
// SIG undefined FUN_146d2bff1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2bff1(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2c42a FUN_146d2c42a body=1080 status=ok
// SIG undefined FUN_146d2c42a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2c42a(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_14068657c;
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



// FUNCTION 146d2c864 FUN_146d2c864 body=172 status=ok
// SIG undefined FUN_146d2c864(void)

void FUN_146d2c864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2c911(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2c911 FUN_146d2c911 body=1080 status=ok
// SIG undefined FUN_146d2c911(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2c911(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2cd4a FUN_146d2cd4a body=172 status=ok
// SIG undefined FUN_146d2cd4a(void)

void FUN_146d2cd4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2cdf7(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2cdf7 FUN_146d2cdf7 body=1080 status=ok
// SIG undefined FUN_146d2cdf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2cdf7(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2d230 FUN_146d2d230 body=172 status=ok
// SIG undefined FUN_146d2d230(void)

void FUN_146d2d230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2d2dd(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2d2dd FUN_146d2d2dd body=1080 status=ok
// SIG undefined FUN_146d2d2dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2d2dd(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2d716 FUN_146d2d716 body=172 status=ok
// SIG undefined FUN_146d2d716(void)

void FUN_146d2d716(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2d7c3(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2d7c3 FUN_146d2d7c3 body=1080 status=ok
// SIG undefined FUN_146d2d7c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2d7c3(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2dbfc FUN_146d2dbfc body=172 status=ok
// SIG undefined FUN_146d2dbfc(void)

void FUN_146d2dbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2dca9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2dca9 FUN_146d2dca9 body=1080 status=ok
// SIG undefined FUN_146d2dca9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2dca9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2e0e2 FUN_146d2e0e2 body=172 status=ok
// SIG undefined FUN_146d2e0e2(void)

void FUN_146d2e0e2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2e18f(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2e18f FUN_146d2e18f body=1080 status=ok
// SIG undefined FUN_146d2e18f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2e18f(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2e5c8 FUN_146d2e5c8 body=172 status=ok
// SIG undefined FUN_146d2e5c8(void)

void FUN_146d2e5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2e675(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2e675 FUN_146d2e675 body=1080 status=ok
// SIG undefined FUN_146d2e675(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2e675(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2eaae FUN_146d2eaae body=172 status=ok
// SIG undefined FUN_146d2eaae(void)

void FUN_146d2eaae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2eb5b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2eb5b FUN_146d2eb5b body=1080 status=ok
// SIG undefined FUN_146d2eb5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2eb5b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2ef94 FUN_146d2ef94 body=172 status=ok
// SIG undefined FUN_146d2ef94(void)

void FUN_146d2ef94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2f041(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2f041 FUN_146d2f041 body=1073 status=ok
// SIG undefined FUN_146d2f041(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2f041(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2f474 FUN_146d2f474 body=172 status=ok
// SIG undefined FUN_146d2f474(void)

void FUN_146d2f474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2f521(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2f521 FUN_146d2f521 body=1080 status=ok
// SIG undefined FUN_146d2f521(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2f521(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2f95a FUN_146d2f95a body=172 status=ok
// SIG undefined FUN_146d2f95a(void)

void FUN_146d2f95a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2fa07(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2fa07 FUN_146d2fa07 body=1080 status=ok
// SIG undefined FUN_146d2fa07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2fa07(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d2fe40 FUN_146d2fe40 body=172 status=ok
// SIG undefined FUN_146d2fe40(void)

void FUN_146d2fe40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d2feed(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2feed FUN_146d2feed body=1080 status=ok
// SIG undefined FUN_146d2feed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2feed(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d127e8;
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



// FUNCTION 146d30326 FUN_146d30326 body=172 status=ok
// SIG undefined FUN_146d30326(void)

void FUN_146d30326(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d303d3(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d303d3 FUN_146d303d3 body=1080 status=ok
// SIG undefined FUN_146d303d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d303d3(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d3080c FUN_146d3080c body=172 status=ok
// SIG undefined FUN_146d3080c(void)

void FUN_146d3080c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d308b9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d308b9 FUN_146d308b9 body=1080 status=ok
// SIG undefined FUN_146d308b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d308b9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d30cf2 FUN_146d30cf2 body=172 status=ok
// SIG undefined FUN_146d30cf2(void)

void FUN_146d30cf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d30d9f(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d30d9f FUN_146d30d9f body=1080 status=ok
// SIG undefined FUN_146d30d9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d30d9f(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d311d8 FUN_146d311d8 body=172 status=ok
// SIG undefined FUN_146d311d8(void)

void FUN_146d311d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d31285(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d31285 FUN_146d31285 body=1080 status=ok
// SIG undefined FUN_146d31285(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d31285(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d316be FUN_146d316be body=172 status=ok
// SIG undefined FUN_146d316be(void)

void FUN_146d316be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3176b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3176b FUN_146d3176b body=1080 status=ok
// SIG undefined FUN_146d3176b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3176b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d31ba4 FUN_146d31ba4 body=172 status=ok
// SIG undefined FUN_146d31ba4(void)

void FUN_146d31ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d31c51(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d31c51 FUN_146d31c51 body=1080 status=ok
// SIG undefined FUN_146d31c51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d31c51(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d3208a FUN_146d3208a body=172 status=ok
// SIG undefined FUN_146d3208a(void)

void FUN_146d3208a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d32137(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d32137 FUN_146d32137 body=1080 status=ok
// SIG undefined FUN_146d32137(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d32137(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d32570 FUN_146d32570 body=172 status=ok
// SIG undefined FUN_146d32570(void)

void FUN_146d32570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3261d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3261d FUN_146d3261d body=1080 status=ok
// SIG undefined FUN_146d3261d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3261d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d32a56 FUN_146d32a56 body=172 status=ok
// SIG undefined FUN_146d32a56(void)

void FUN_146d32a56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d32b03(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d32b03 FUN_146d32b03 body=1080 status=ok
// SIG undefined FUN_146d32b03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d32b03(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d32f3c FUN_146d32f3c body=172 status=ok
// SIG undefined FUN_146d32f3c(void)

void FUN_146d32f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d32fe9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d32fe9 FUN_146d32fe9 body=1073 status=ok
// SIG undefined FUN_146d32fe9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d32fe9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d3341c FUN_146d3341c body=172 status=ok
// SIG undefined FUN_146d3341c(void)

void FUN_146d3341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d334c9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d334c9 FUN_146d334c9 body=1080 status=ok
// SIG undefined FUN_146d334c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d334c9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d33902 FUN_146d33902 body=172 status=ok
// SIG undefined FUN_146d33902(void)

void FUN_146d33902(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d339af(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d339af FUN_146d339af body=1080 status=ok
// SIG undefined FUN_146d339af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d339af(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d12cf0;
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



// FUNCTION 146d33de8 FUN_146d33de8 body=172 status=ok
// SIG undefined FUN_146d33de8(void)

void FUN_146d33de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d33e95(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d33e95 FUN_146d33e95 body=1080 status=ok
// SIG undefined FUN_146d33e95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d33e95(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d342ce FUN_146d342ce body=172 status=ok
// SIG undefined FUN_146d342ce(void)

void FUN_146d342ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3437b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3437b FUN_146d3437b body=1080 status=ok
// SIG undefined FUN_146d3437b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3437b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d347b4 FUN_146d347b4 body=172 status=ok
// SIG undefined FUN_146d347b4(void)

void FUN_146d347b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d34861(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d34861 FUN_146d34861 body=1080 status=ok
// SIG undefined FUN_146d34861(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d34861(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d34c9a FUN_146d34c9a body=172 status=ok
// SIG undefined FUN_146d34c9a(void)

void FUN_146d34c9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d34d47(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d34d47 FUN_146d34d47 body=1080 status=ok
// SIG undefined FUN_146d34d47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d34d47(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d35180 FUN_146d35180 body=172 status=ok
// SIG undefined FUN_146d35180(void)

void FUN_146d35180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3522d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3522d FUN_146d3522d body=1080 status=ok
// SIG undefined FUN_146d3522d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3522d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d35666 FUN_146d35666 body=172 status=ok
// SIG undefined FUN_146d35666(void)

void FUN_146d35666(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d35713(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d35713 FUN_146d35713 body=1080 status=ok
// SIG undefined FUN_146d35713(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d35713(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d35b4c FUN_146d35b4c body=172 status=ok
// SIG undefined FUN_146d35b4c(void)

void FUN_146d35b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d35bf9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d35bf9 FUN_146d35bf9 body=1080 status=ok
// SIG undefined FUN_146d35bf9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d35bf9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d36032 FUN_146d36032 body=172 status=ok
// SIG undefined FUN_146d36032(void)

void FUN_146d36032(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d360df(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d360df FUN_146d360df body=1080 status=ok
// SIG undefined FUN_146d360df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d360df(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d36518 FUN_146d36518 body=172 status=ok
// SIG undefined FUN_146d36518(void)

void FUN_146d36518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d365c5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d365c5 FUN_146d365c5 body=1080 status=ok
// SIG undefined FUN_146d365c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d365c5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d369fe FUN_146d369fe body=172 status=ok
// SIG undefined FUN_146d369fe(void)

void FUN_146d369fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d36aab(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d36aab FUN_146d36aab body=1080 status=ok
// SIG undefined FUN_146d36aab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d36aab(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d36ee4 FUN_146d36ee4 body=172 status=ok
// SIG undefined FUN_146d36ee4(void)

void FUN_146d36ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d36f91(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d36f91 FUN_146d36f91 body=1073 status=ok
// SIG undefined FUN_146d36f91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d36f91(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d373c4 FUN_146d373c4 body=172 status=ok
// SIG undefined FUN_146d373c4(void)

void FUN_146d373c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d37471(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d37471 FUN_146d37471 body=1080 status=ok
// SIG undefined FUN_146d37471(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d37471(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = &LAB_146d1329a;
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



// FUNCTION 146d378aa FUN_146d378aa body=172 status=ok
// SIG undefined FUN_146d378aa(void)

void FUN_146d378aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d37957(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d37957 FUN_146d37957 body=1080 status=ok
// SIG undefined FUN_146d37957(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d37957(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d37d90 FUN_146d37d90 body=1080 status=ok
// SIG undefined FUN_146d37d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d37d90(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d381ca FUN_146d381ca body=172 status=ok
// SIG undefined FUN_146d381ca(void)

void FUN_146d381ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d38277(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d38277 FUN_146d38277 body=1080 status=ok
// SIG undefined FUN_146d38277(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d38277(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d386b0 FUN_146d386b0 body=1080 status=ok
// SIG undefined FUN_146d386b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d386b0(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d38aea FUN_146d38aea body=172 status=ok
// SIG undefined FUN_146d38aea(void)

void FUN_146d38aea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d38b97(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d38b97 FUN_146d38b97 body=1080 status=ok
// SIG undefined FUN_146d38b97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d38b97(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d38fd0 FUN_146d38fd0 body=172 status=ok
// SIG undefined FUN_146d38fd0(void)

void FUN_146d38fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3907d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3907d FUN_146d3907d body=1080 status=ok
// SIG undefined FUN_146d3907d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3907d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d394b6 FUN_146d394b6 body=172 status=ok
// SIG undefined FUN_146d394b6(void)

void FUN_146d394b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d39563(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d39563 FUN_146d39563 body=1080 status=ok
// SIG undefined FUN_146d39563(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d39563(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d3999c FUN_146d3999c body=1080 status=ok
// SIG undefined FUN_146d3999c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3999c(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d39dd6 FUN_146d39dd6 body=172 status=ok
// SIG undefined FUN_146d39dd6(void)

void FUN_146d39dd6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d39e83(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d39e83 FUN_146d39e83 body=1080 status=ok
// SIG undefined FUN_146d39e83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d39e83(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d3a2bc FUN_146d3a2bc body=172 status=ok
// SIG undefined FUN_146d3a2bc(void)

void FUN_146d3a2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3a369(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3a369 FUN_146d3a369 body=1080 status=ok
// SIG undefined FUN_146d3a369(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3a369(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d3a7a2 FUN_146d3a7a2 body=172 status=ok
// SIG undefined FUN_146d3a7a2(void)

void FUN_146d3a7a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146d3a84f(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3a84f FUN_146d3a84f body=1080 status=ok
// SIG undefined FUN_146d3a84f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3a84f(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d3ac88 FUN_146d3ac88 body=212 status=ok
// SIG undefined FUN_146d3ac88(void)

void FUN_146d3ac88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d3ad80(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3ad80 FUN_146d3ad80 body=1073 status=ok
// SIG undefined FUN_146d3ad80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d3ad80(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
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
  local_e8 = FUN_146d1381a;
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



// FUNCTION 146d3b1b2 FUN_146d3b1b2 body=170 status=ok
// SIG undefined FUN_146d3b1b2(void)

void FUN_146d3b1b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_146d0a564(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4992f(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3b25d FUN_146d3b25d body=170 status=ok
// SIG undefined FUN_146d3b25d(void)

void FUN_146d3b25d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_146d0a564(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d49ddd(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3b308 FUN_146d3b308 body=170 status=ok
// SIG undefined FUN_146d3b308(void)

void FUN_146d3b308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_1404c7181(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d494cb(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3b3b3 FUN_146d3b3b3 body=264 status=ok
// SIG undefined FUN_146d3b3b3(void)

void FUN_146d3b3b3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double *local_90;
  double local_80;
  undefined1 local_78 [72];
  double local_30;
  ulonglong local_20;
  
  cVar1 = DAT_14c75f089;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = &local_80;
  local_80 = 3.4028234663852886e+38;
  local_98 = (double)*(float *)(param_7 + 0x65c);
  local_a0 = (double)*(float *)(param_7 + 0x658);
  local_a8 = param_6;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_146d4868a(local_78,param_1,param_2,param_3);
  if ((cVar1 != '\0') || (local_30 <= (double)*(float *)(param_7 + 300))) {
    if ((local_30 != 1.79769313486232e+308) || (NAN(local_30))) {
      FUN_140bd3cd0(param_7,local_78);
    }
  }
  else {
    *(byte *)(param_7 + 0x374) = *(byte *)(param_7 + 0x374) | 2;
  }
  *(float *)(param_7 + 0x640) = (float)local_80;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3b4bc FUN_146d3b4bc body=264 status=ok
// SIG undefined FUN_146d3b4bc(void)

void FUN_146d3b4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double *local_90;
  double local_80;
  undefined1 local_78 [72];
  double local_30;
  ulonglong local_20;
  
  cVar1 = DAT_14c75f089;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = &local_80;
  local_80 = 3.4028234663852886e+38;
  local_98 = (double)*(float *)(param_7 + 0x65c);
  local_a0 = (double)*(float *)(param_7 + 0x658);
  local_a8 = param_6;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_146d48ccd(local_78,param_1,param_2,param_3);
  if ((cVar1 != '\0') || (local_30 <= (double)*(float *)(param_7 + 300))) {
    if ((local_30 != 1.79769313486232e+308) || (NAN(local_30))) {
      FUN_140bd3cd0(param_7,local_78);
    }
  }
  else {
    *(byte *)(param_7 + 0x374) = *(byte *)(param_7 + 0x374) | 2;
  }
  *(float *)(param_7 + 0x640) = (float)local_80;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3b5c6 FUN_146d3b5c6 body=104 status=ok
// SIG undefined FUN_146d3b5c6(void)

void FUN_146d3b5c6(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d3b6ea(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d3b62e(param_1,param_2);
  return;
}



// FUNCTION 146d3b62e FUN_146d3b62e body=188 status=ok
// SIG undefined FUN_146d3b62e(void)

void FUN_146d3b62e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3b6ea(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3b6ea(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3b6ea FUN_146d3b6ea body=177 status=ok
// SIG undefined FUN_146d3b6ea(void)

void FUN_146d3b6ea(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  FUN_1404b899e(*param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30),param_1[2],
                local_180);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3b79c FUN_146d3b79c body=104 status=ok
// SIG undefined FUN_146d3b79c(void)

void FUN_146d3b79c(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d3b8c0(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d3b804(param_1,param_2);
  return;
}



// FUNCTION 146d3b804 FUN_146d3b804 body=188 status=ok
// SIG undefined FUN_146d3b804(void)

void FUN_146d3b804(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3b8c0(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3b8c0(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3b8c0 FUN_146d3b8c0 body=201 status=ok
// SIG undefined FUN_146d3b8c0(void)

void FUN_146d3b8c0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  if (DAT_14c75f050 == '\x01') {
    FUN_1404b6a88();
  }
  else {
    FUN_146cc2d3a(*param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30),param_1[2],
                  local_180);
  }
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3b98a FUN_146d3b98a body=184 status=ok
// SIG undefined FUN_146d3b98a(void)

void FUN_146d3b98a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d3ba44(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3ba44 FUN_146d3ba44 body=401 status=ok
// SIG undefined FUN_146d3ba44(void)

void FUN_146d3ba44(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1404c8166(0,param_2,&local_e8);
  if (0 < (int)uStack_e0) {
    dVar1 = *(double *)(param_3 + 0x40);
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_3 + 0x50);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(local_e8 + lVar11 * 4);
      local_108 = &local_f4;
      local_110 = &local_f0;
      local_118 = &local_ec;
      FUN_1404c81ee(param_1,uVar4,param_3,local_d0);
      uVar8 = local_a8;
      uVar7 = local_f0;
      if (dVar1 * dVar2 * dVar3 < 0.0) {
        local_78 = local_a8;
        local_88 = local_b8;
        uVar9 = local_88;
        uStack_80 = uStack_b0;
        uVar10 = uStack_80;
        local_a8 = local_90;
        uVar5 = CONCAT44(uStack_9c,local_a0);
        uVar6 = CONCAT44(uStack_94,uStack_98);
        local_90 = uVar8;
        local_88._0_4_ = (undefined4)local_b8;
        local_88._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        uStack_80._0_4_ = (undefined4)uStack_b0;
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
        local_a0 = (undefined4)local_88;
        uStack_9c = local_88._4_4_;
        uStack_98 = (undefined4)uStack_80;
        uStack_94 = uStack_80._4_4_;
        local_f0 = local_f4;
        local_f4 = uVar7;
        local_b8 = uVar5;
        uStack_b0 = uVar6;
        local_88 = uVar9;
        uStack_80 = uVar10;
      }
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_f4);
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,local_f0);
      FUN_146d3bbd6(param_4,local_d0,uVar4,local_ec);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3bbd6 FUN_146d3bbd6 body=183 status=ok
// SIG undefined FUN_146d3bbd6(void)

void FUN_146d3bbd6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  FUN_1404b899e(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3bc8e FUN_146d3bc8e body=887 status=ok
// SIG undefined FUN_146d3bc8e(void)

void FUN_146d3bc8e(double *param_1,int param_2,longlong param_3,longlong *param_4,
                  undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                  int *param_8,int *param_9,int *param_10)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar5 = *param_4;
  lVar13 = (longlong)param_2;
  iVar2 = *(int *)(lVar5 + lVar13 * 0xc);
  lVar14 = (longlong)iVar2;
  iVar3 = *(int *)(lVar5 + 4 + lVar13 * 0xc);
  lVar15 = (longlong)iVar3;
  iVar4 = *(int *)(lVar5 + 8 + lVar13 * 0xc);
  lVar13 = (longlong)iVar4;
  lVar5 = *(longlong *)(param_3 + 0x28);
  dVar17 = (double)*(float *)(lVar5 + lVar14 * 0xc) * param_1[8];
  dVar18 = (double)*(float *)(lVar5 + 4 + lVar14 * 0xc) * param_1[9];
  dVar16 = (double)*(float *)(lVar5 + 8 + lVar14 * 0xc) * param_1[10];
  dVar10 = *param_1;
  dVar11 = param_1[1];
  dVar12 = param_1[2];
  dVar1 = param_1[3];
  dVar19 = dVar18 * dVar10 - dVar17 * dVar11;
  dVar20 = dVar16 * dVar11 - dVar18 * dVar12;
  dVar21 = dVar17 * dVar12 - dVar10 * dVar16;
  dVar20 = dVar20 + dVar20;
  dVar21 = dVar21 + dVar21;
  dVar19 = dVar19 + dVar19;
  dVar9 = (dVar12 * dVar20 - dVar10 * dVar19) + param_1[3] * dVar21 + dVar18 + param_1[5];
  dVar18 = param_1[6];
  auVar6._8_4_ = SUB84(dVar9,0);
  auVar6._0_8_ = (dVar19 * dVar11 - dVar21 * dVar12) + dVar1 * dVar20 + dVar17 + param_1[4];
  auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_5 = auVar6;
  *(double *)param_5[1] = dVar19 * dVar1 + dVar16 + (dVar21 * dVar10 - dVar20 * dVar11) + dVar18;
  lVar5 = *(longlong *)(param_3 + 0x28);
  dVar17 = (double)*(float *)(lVar5 + lVar15 * 0xc) * param_1[8];
  dVar18 = (double)*(float *)(lVar5 + 4 + lVar15 * 0xc) * param_1[9];
  dVar16 = (double)*(float *)(lVar5 + 8 + lVar15 * 0xc) * param_1[10];
  dVar10 = *param_1;
  dVar11 = param_1[1];
  dVar12 = param_1[2];
  dVar1 = param_1[3];
  dVar19 = dVar18 * dVar10 - dVar17 * dVar11;
  dVar20 = dVar16 * dVar11 - dVar18 * dVar12;
  dVar21 = dVar17 * dVar12 - dVar10 * dVar16;
  dVar20 = dVar20 + dVar20;
  dVar21 = dVar21 + dVar21;
  dVar19 = dVar19 + dVar19;
  dVar9 = (dVar12 * dVar20 - dVar10 * dVar19) + param_1[3] * dVar21 + dVar18 + param_1[5];
  dVar18 = param_1[6];
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = (dVar19 * dVar11 - dVar21 * dVar12) + dVar1 * dVar20 + dVar17 + param_1[4];
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_6 = auVar7;
  *(double *)param_6[1] = dVar19 * dVar1 + dVar16 + (dVar21 * dVar10 - dVar20 * dVar11) + dVar18;
  lVar5 = *(longlong *)(param_3 + 0x28);
  dVar17 = (double)*(float *)(lVar5 + lVar13 * 0xc) * param_1[8];
  dVar18 = (double)*(float *)(lVar5 + 4 + lVar13 * 0xc) * param_1[9];
  dVar16 = (double)*(float *)(lVar5 + 8 + lVar13 * 0xc) * param_1[10];
  dVar10 = *param_1;
  dVar11 = param_1[1];
  dVar12 = param_1[2];
  dVar1 = param_1[3];
  dVar19 = dVar18 * dVar10 - dVar17 * dVar11;
  dVar20 = dVar16 * dVar11 - dVar18 * dVar12;
  dVar21 = dVar17 * dVar12 - dVar10 * dVar16;
  dVar20 = dVar20 + dVar20;
  dVar21 = dVar21 + dVar21;
  dVar19 = dVar19 + dVar19;
  dVar9 = (dVar12 * dVar20 - dVar10 * dVar19) + param_1[3] * dVar21 + dVar18 + param_1[5];
  dVar18 = param_1[6];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = (dVar19 * dVar11 - dVar21 * dVar12) + dVar1 * dVar20 + dVar17 + param_1[4];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_7 = auVar8;
  *(double *)param_7[1] = dVar19 * dVar1 + dVar16 + (dVar21 * dVar10 - dVar20 * dVar11) + dVar18;
  *param_8 = iVar2;
  *param_9 = iVar3;
  *param_10 = iVar4;
  return;
}



// FUNCTION 146d3c006 FUN_146d3c006 body=495 status=ok
// SIG undefined FUN_146d3c006(void)

void FUN_146d3c006(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,double param_8)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  
  if (0 < (int)param_2[1]) {
    iVar10 = FUN_146d4d952(param_1,param_3,param_4,param_5,param_6,param_7);
    iVar15 = (int)param_2[1] + (int)param_1[1];
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar15) {
      FUN_1404b0906(param_1,iVar15);
    }
    if (*(int *)((longlong)param_1 + 0x1c) < iVar15) {
      FUN_1404b0b9a(param_1 + 2,iVar15);
    }
    lVar9 = param_2[1];
    if ((longlong)(int)lVar9 != 0) {
      lVar8 = *param_2;
      lVar13 = 0;
      lVar17 = (longlong)iVar10 * 0x70;
      do {
        pdVar1 = (double *)(lVar8 + 0x48 + lVar13);
        if (*pdVar1 <= param_8 && param_8 != *pdVar1) {
          lVar11 = param_1[4];
          dVar2 = *(double *)(lVar8 + 0x30 + lVar13);
          dVar3 = *(double *)(lVar8 + 0x38 + lVar13);
          dVar4 = *(double *)(lVar11 + 0x50 + lVar17);
          dVar5 = *(double *)(lVar11 + 0x48 + lVar17);
          dVar6 = *(double *)(lVar8 + 0x40 + lVar13);
          dVar7 = *(double *)(lVar11 + 0x58 + lVar17);
          iVar15 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar15 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar15 + 1U) {
            FUN_146d3c1f6(param_1,iVar15);
          }
          lVar12 = (longlong)iVar15 * 0x58;
          puVar14 = (undefined8 *)(lVar13 + -0x48 + lVar8 + 0x48);
          puVar16 = (undefined8 *)(*param_1 + lVar12);
          for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar16 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          }
          FUN_1404afdda(param_1 + 2);
          *(undefined4 *)(*param_1 + 0x50 + lVar12) = param_4;
          lVar11 = (longlong)iVar15 * 0x18;
          *(int *)(param_1[2] + 8 + lVar11) = iVar10;
          *(float *)(param_1[2] + 0xc + lVar11) =
               (float)(dVar6 * dVar7 + dVar2 * dVar5 + dVar3 * dVar4);
          *(undefined1 *)(param_1[2] + 0x10 + lVar11) = 1;
        }
        lVar13 = lVar13 + 0x58;
      } while ((longlong)(int)lVar9 * 0x58 != lVar13);
    }
  }
  return;
}



// FUNCTION 146d3c1f6 FUN_146d3c1f6 body=143 status=ok
// SIG undefined FUN_146d3c1f6(void)

void FUN_146d3c1f6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d3c286 FUN_146d3c286 body=147 status=ok
// SIG undefined FUN_146d3c286(void)

void FUN_146d3c286(longlong param_1,int param_2)

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



// FUNCTION 146d3c31a FUN_146d3c31a body=184 status=ok
// SIG undefined FUN_146d3c31a(void)

void FUN_146d3c31a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d3c3d4(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3c3d4 FUN_146d3c3d4 body=401 status=ok
// SIG undefined FUN_146d3c3d4(void)

void FUN_146d3c3d4(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1404c8166(0,param_2,&local_e8);
  if (0 < (int)uStack_e0) {
    dVar1 = *(double *)(param_3 + 0x40);
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_3 + 0x50);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(local_e8 + lVar11 * 4);
      local_108 = &local_f4;
      local_110 = &local_f0;
      local_118 = &local_ec;
      FUN_1404c81ee(param_1,uVar4,param_3,local_d0);
      uVar8 = local_a8;
      uVar7 = local_f0;
      if (dVar1 * dVar2 * dVar3 < 0.0) {
        local_78 = local_a8;
        local_88 = local_b8;
        uVar9 = local_88;
        uStack_80 = uStack_b0;
        uVar10 = uStack_80;
        local_a8 = local_90;
        uVar5 = CONCAT44(uStack_9c,local_a0);
        uVar6 = CONCAT44(uStack_94,uStack_98);
        local_90 = uVar8;
        local_88._0_4_ = (undefined4)local_b8;
        local_88._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        uStack_80._0_4_ = (undefined4)uStack_b0;
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
        local_a0 = (undefined4)local_88;
        uStack_9c = local_88._4_4_;
        uStack_98 = (undefined4)uStack_80;
        uStack_94 = uStack_80._4_4_;
        local_f0 = local_f4;
        local_f4 = uVar7;
        local_b8 = uVar5;
        uStack_b0 = uVar6;
        local_88 = uVar9;
        uStack_80 = uVar10;
      }
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_f4);
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,local_f0);
      FUN_146d3c566(param_4,local_d0,uVar4,local_ec);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3c566 FUN_146d3c566 body=205 status=ok
// SIG undefined FUN_146d3c566(void)

void FUN_146d3c566(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f050 == '\x01') {
    FUN_1404b6a88(param_1[1],param_2);
  }
  else {
    FUN_146cc2d3a(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3c634 FUN_146d3c634 body=184 status=ok
// SIG undefined FUN_146d3c634(void)

void FUN_146d3c634(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3c6ec(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3c6ec(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3c6ec FUN_146d3c6ec body=177 status=ok
// SIG undefined FUN_146d3c6ec(void)

void FUN_146d3c6ec(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  FUN_1404b899e(*param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30),param_1[2],
                local_180);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3c79e FUN_146d3c79e body=184 status=ok
// SIG undefined FUN_146d3c79e(void)

void FUN_146d3c79e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3c856(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3c856(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3c856 FUN_146d3c856 body=201 status=ok
// SIG undefined FUN_146d3c856(void)

void FUN_146d3c856(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  if (DAT_14c75f050 == '\x01') {
    FUN_1404b6a88();
  }
  else {
    FUN_146cc2d3a(*param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30),param_1[2],
                  local_180);
  }
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3c920 FUN_146d3c920 body=184 status=ok
// SIG undefined FUN_146d3c920(void)

void FUN_146d3c920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d3c9da(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3c9da FUN_146d3c9da body=2149 status=ok
// SIG undefined FUN_146d3c9da(void)

void FUN_146d3c9da(longlong param_1,undefined4 *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  double *local_248;
  double dStack_240;
  undefined8 local_230;
  undefined8 local_228;
  double dStack_220;
  double local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8 [6];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_230 = param_4;
  FUN_1401ad93c(local_1b8,&local_1b8,&local_198);
  if ((longlong)(int)uStack_190 != 0) {
    local_210 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) *
                *(double *)(param_1 + 0x60);
    piVar1 = local_198 + (longlong)(int)uStack_190 * 2;
    piVar36 = local_198;
    do {
      uVar29 = local_230;
      uVar6 = *(ushort *)(param_1 + 0x92);
      uVar32 = (uVar6 - 1) * piVar36[1] + *piVar36;
      if ((((int)uVar32 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar32)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar32) != -1)) {
        uVar35 = (uint)uVar6;
        iVar33 = piVar36[1] * uVar35 + *piVar36;
        dVar3 = *(double *)(param_1 + 0x80);
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar33;
        dVar45 = *(double *)(param_1 + 0xa0);
        lVar2 = (ulonglong)uVar6 + lVar30;
        dVar24 = (double)*(ushort *)(lVar31 + lVar30 * 2) * dVar45 + dVar3;
        dVar10 = (double)*(ushort *)(lVar31 + 2 + lVar30 * 2) * dVar45 + dVar3;
        dVar9 = (double)*(ushort *)(lVar31 + lVar2 * 2) * dVar45 + dVar3;
        dVar3 = (double)*(ushort *)(lVar31 + 2 + lVar2 * 2) * dVar45 + dVar3;
        dVar45 = dVar9;
        if (dVar3 <= dVar9) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar45 <= dVar10) {
          dVar4 = dVar45;
        }
        local_1e8[5] = dVar24;
        if (dVar4 <= dVar24) {
          local_1e8[5] = dVar4;
        }
        dVar45 = dVar9;
        if (dVar9 <= dVar3) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar10 <= dVar45) {
          dVar4 = dVar45;
        }
        dVar45 = dVar24;
        if (dVar24 <= dVar4) {
          dVar45 = dVar4;
        }
        dVar21 = *(double *)(param_1 + 0x50) * (double)(iVar33 % (int)uVar35);
        dVar23 = *(double *)(param_1 + 0x58) * (double)(iVar33 / (int)uVar35);
        dVar4 = *(double *)(param_1 + 0x60);
        dVar24 = dVar24 * dVar4;
        dVar20 = ((double)(iVar33 % (int)uVar35) + 1.0) * *(double *)(param_1 + 0x50);
        dVar43 = ((double)(iVar33 / (int)uVar35) + 1.0) * *(double *)(param_1 + 0x58);
        local_1e8[0] = dVar21;
        if (dVar20 <= dVar21) {
          local_1e8[0] = dVar20;
        }
        local_1e8[3] = dVar21;
        if (dVar21 <= dVar20) {
          local_1e8[3] = dVar20;
        }
        dVar10 = dVar10 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar45 = dVar45 * dVar4;
        local_1e8[5] = local_1e8[5] * dVar4;
        local_1e8[2] = local_1e8[5];
        if (dVar45 <= local_1e8[5]) {
          local_1e8[2] = dVar45;
        }
        if (local_1e8[5] <= dVar45) {
          local_1e8[5] = dVar45;
        }
        local_1e8[1] = dVar23;
        if (dVar43 <= dVar23) {
          local_1e8[1] = dVar43;
        }
        local_1e8[4] = dVar23;
        if (dVar23 <= dVar43) {
          local_1e8[4] = dVar43;
        }
        lVar31 = 0;
        do {
          if ((*(double *)(param_2 + lVar31 * 2 + 6) <= local_1e8[lVar31] &&
               local_1e8[lVar31] != *(double *)(param_2 + lVar31 * 2 + 6)) ||
             (local_1e8[lVar31 + 3] <= *(double *)(param_2 + lVar31 * 2) &&
              *(double *)(param_2 + lVar31 * 2) != local_1e8[lVar31 + 3])) goto LAB_146d3d198;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        dVar4 = param_3[3];
        dVar45 = param_3[3];
        dVar26 = *param_3;
        dVar27 = *(double *)*(undefined1 (*) [12])(param_3 + 1);
        auVar5 = *(undefined1 (*) [16])(param_3 + 2);
        auVar28 = *(undefined1 (*) [12])(param_3 + 1);
        dVar7 = auVar5._0_8_;
        auVar22._12_4_ = auVar5._4_4_;
        auVar22._0_12_ = auVar28;
        dVar12 = dVar23 * dVar26 - dVar21 * dVar27;
        dVar16 = dVar24 * dVar27 - dVar23 * dVar7;
        local_1f8._8_4_ = auVar5._8_4_;
        local_1f8._0_8_ = dVar26;
        local_1f8._12_4_ = auVar5._12_4_;
        dVar46 = dVar21 * dVar7 - dVar24 * dVar26;
        dVar16 = dVar16 + dVar16;
        dVar46 = dVar46 + dVar46;
        dVar12 = dVar12 + dVar12;
        auVar5._8_4_ = SUB84(dVar45,0);
        auVar5._0_8_ = dVar4;
        auVar5._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_208._0_8_ = auVar28._0_8_;
        local_208._8_8_ = auVar22._8_8_;
        dVar44 = (dVar12 * dVar27 - dVar46 * (double)local_208._8_8_) + dVar4 * dVar16 + dVar21;
        dStack_220 = (dVar7 * dVar16 - dVar26 * dVar12) + dVar45 * dVar46 + dVar23;
        dVar13 = dVar23 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar17 = dVar10 * dVar27 - dVar23 * (double)local_208._8_8_;
        dVar47 = dVar20 * dVar7 - dVar10 * dVar26;
        dStack_240 = auVar5._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar47 = dVar47 + dVar47;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar43 * dVar26 - dVar21 * (double)local_208._0_8_;
        dVar18 = dVar9 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar48 = dVar21 * dVar7 - dVar9 * dVar26;
        dVar18 = dVar18 + dVar18;
        dVar48 = dVar48 + dVar48;
        dVar14 = dVar14 + dVar14;
        dVar15 = dVar43 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar19 = dVar3 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar49 = dVar20 * dVar7 - dVar3 * dVar26;
        dVar19 = dVar19 + dVar19;
        dVar49 = dVar49 + dVar49;
        dVar15 = dVar15 + dVar15;
        dVar45 = param_3[4];
        dVar8 = param_3[5];
        local_188 = dVar44 + dVar45;
        dStack_180 = dStack_220 + dVar8;
        dVar11 = (dVar13 * dVar27 - dVar47 * (double)local_208._8_8_) + dVar4 * dVar17 + dVar20 +
                 dVar45;
        dVar23 = (dVar7 * dVar17 - dVar26 * dVar13) + dStack_240 * dVar47 + dVar23 + dVar8;
        uVar41 = SUB84(dVar23,0);
        uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar21 = (dVar14 * dVar27 - dVar48 * (double)local_208._8_8_) + dVar4 * dVar18 + dVar21 +
                 dVar45;
        dVar23 = (dVar7 * dVar18 - dVar26 * dVar14) + dStack_240 * dVar48 + dVar43 + dVar8;
        uVar39 = SUB84(dVar23,0);
        uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar45 = (dVar15 * dVar27 - dVar49 * (double)local_208._8_8_) + dVar4 * dVar19 + dVar20 +
                 dVar45;
        dVar8 = (dVar7 * dVar19 - dVar26 * dVar15) + dStack_240 * dVar49 + dVar43 + dVar8;
        uVar37 = SUB84(dVar8,0);
        uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_248 = param_3;
        local_148 = param_3[6];
        local_178 = dVar12 * dVar4 + dVar24 + (dVar46 * dVar26 - dVar16 * (double)local_208._0_8_) +
                    local_148;
        local_160 = dVar13 * dVar4 + dVar10 + (dVar47 * dVar26 - dVar17 * (double)local_208._0_8_) +
                    local_148;
        local_100 = dVar14 * dVar4 + dVar9 + (dVar48 * dVar26 - dVar18 * (double)local_208._0_8_) +
                    local_148;
        local_148 = dVar15 * dVar4 + dVar3 + (dVar49 * dVar26 - dVar19 * (double)local_208._0_8_) +
                    local_148;
        local_258 = iVar33 + 1;
        iVar25 = (int)lVar2;
        iVar34 = iVar25 + 1;
        local_228 = CONCAT44((int)((ulonglong)dVar44 >> 0x20),uVar32 * 2 + 1);
        local_208 = auVar22;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        if (0.0 <= local_210) {
          local_170._8_4_ = uVar41;
          local_170._0_8_ = dVar11;
          local_170._12_4_ = uVar42;
          local_158._8_4_ = uVar37;
          local_158._0_8_ = dVar45;
          local_158._12_4_ = uVar38;
          local_128._8_4_ = uVar37;
          local_128._0_8_ = dVar45;
          local_128._12_4_ = uVar38;
          local_110._8_4_ = uVar39;
          local_110._0_8_ = dVar21;
          local_110._12_4_ = uVar40;
          local_250 = iVar34;
          local_118 = local_148;
          FUN_146d3d240(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar34;
          local_250 = iVar25;
        }
        else {
          local_170._8_4_ = uVar37;
          local_170._0_8_ = dVar45;
          local_170._12_4_ = uVar38;
          local_158._8_4_ = uVar41;
          local_158._0_8_ = dVar11;
          local_158._12_4_ = uVar42;
          local_128._8_4_ = uVar39;
          local_128._0_8_ = dVar21;
          local_128._12_4_ = uVar40;
          local_110._8_4_ = uVar37;
          local_110._0_8_ = dVar45;
          local_110._12_4_ = uVar38;
          local_250 = local_258;
          local_258 = iVar34;
          dVar3 = local_160;
          local_160 = local_148;
          dVar45 = local_148;
          local_148 = dVar3;
          local_118 = local_100;
          local_100 = dVar45;
          FUN_146d3d240(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar25;
          local_250 = iVar34;
        }
        FUN_146d3d240(uVar29,&local_140,local_228 & 0xffffffff,iVar33);
        param_3 = local_248;
      }
LAB_146d3d198:
      piVar36 = piVar36 + 2;
    } while (piVar36 != piVar1);
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3d240 FUN_146d3d240 body=183 status=ok
// SIG undefined FUN_146d3d240(void)

void FUN_146d3d240(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  FUN_1404b899e(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3d2f8 FUN_146d3d2f8 body=184 status=ok
// SIG undefined FUN_146d3d2f8(void)

void FUN_146d3d2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d3d3b2(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3d3b2 FUN_146d3d3b2 body=2149 status=ok
// SIG undefined FUN_146d3d3b2(void)

void FUN_146d3d3b2(longlong param_1,undefined4 *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  double *local_248;
  double dStack_240;
  undefined8 local_230;
  undefined8 local_228;
  double dStack_220;
  double local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8 [6];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_230 = param_4;
  FUN_1401ad93c(local_1b8,&local_1b8,&local_198);
  if ((longlong)(int)uStack_190 != 0) {
    local_210 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) *
                *(double *)(param_1 + 0x60);
    piVar1 = local_198 + (longlong)(int)uStack_190 * 2;
    piVar36 = local_198;
    do {
      uVar29 = local_230;
      uVar6 = *(ushort *)(param_1 + 0x92);
      uVar32 = (uVar6 - 1) * piVar36[1] + *piVar36;
      if ((((int)uVar32 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar32)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar32) != -1)) {
        uVar35 = (uint)uVar6;
        iVar33 = piVar36[1] * uVar35 + *piVar36;
        dVar3 = *(double *)(param_1 + 0x80);
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar33;
        dVar45 = *(double *)(param_1 + 0xa0);
        lVar2 = (ulonglong)uVar6 + lVar30;
        dVar24 = (double)*(ushort *)(lVar31 + lVar30 * 2) * dVar45 + dVar3;
        dVar10 = (double)*(ushort *)(lVar31 + 2 + lVar30 * 2) * dVar45 + dVar3;
        dVar9 = (double)*(ushort *)(lVar31 + lVar2 * 2) * dVar45 + dVar3;
        dVar3 = (double)*(ushort *)(lVar31 + 2 + lVar2 * 2) * dVar45 + dVar3;
        dVar45 = dVar9;
        if (dVar3 <= dVar9) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar45 <= dVar10) {
          dVar4 = dVar45;
        }
        local_1e8[5] = dVar24;
        if (dVar4 <= dVar24) {
          local_1e8[5] = dVar4;
        }
        dVar45 = dVar9;
        if (dVar9 <= dVar3) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar10 <= dVar45) {
          dVar4 = dVar45;
        }
        dVar45 = dVar24;
        if (dVar24 <= dVar4) {
          dVar45 = dVar4;
        }
        dVar21 = *(double *)(param_1 + 0x50) * (double)(iVar33 % (int)uVar35);
        dVar23 = *(double *)(param_1 + 0x58) * (double)(iVar33 / (int)uVar35);
        dVar4 = *(double *)(param_1 + 0x60);
        dVar24 = dVar24 * dVar4;
        dVar20 = ((double)(iVar33 % (int)uVar35) + 1.0) * *(double *)(param_1 + 0x50);
        dVar43 = ((double)(iVar33 / (int)uVar35) + 1.0) * *(double *)(param_1 + 0x58);
        local_1e8[0] = dVar21;
        if (dVar20 <= dVar21) {
          local_1e8[0] = dVar20;
        }
        local_1e8[3] = dVar21;
        if (dVar21 <= dVar20) {
          local_1e8[3] = dVar20;
        }
        dVar10 = dVar10 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar45 = dVar45 * dVar4;
        local_1e8[5] = local_1e8[5] * dVar4;
        local_1e8[2] = local_1e8[5];
        if (dVar45 <= local_1e8[5]) {
          local_1e8[2] = dVar45;
        }
        if (local_1e8[5] <= dVar45) {
          local_1e8[5] = dVar45;
        }
        local_1e8[1] = dVar23;
        if (dVar43 <= dVar23) {
          local_1e8[1] = dVar43;
        }
        local_1e8[4] = dVar23;
        if (dVar23 <= dVar43) {
          local_1e8[4] = dVar43;
        }
        lVar31 = 0;
        do {
          if ((*(double *)(param_2 + lVar31 * 2 + 6) <= local_1e8[lVar31] &&
               local_1e8[lVar31] != *(double *)(param_2 + lVar31 * 2 + 6)) ||
             (local_1e8[lVar31 + 3] <= *(double *)(param_2 + lVar31 * 2) &&
              *(double *)(param_2 + lVar31 * 2) != local_1e8[lVar31 + 3])) goto LAB_146d3db70;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        dVar4 = param_3[3];
        dVar45 = param_3[3];
        dVar26 = *param_3;
        dVar27 = *(double *)*(undefined1 (*) [12])(param_3 + 1);
        auVar5 = *(undefined1 (*) [16])(param_3 + 2);
        auVar28 = *(undefined1 (*) [12])(param_3 + 1);
        dVar7 = auVar5._0_8_;
        auVar22._12_4_ = auVar5._4_4_;
        auVar22._0_12_ = auVar28;
        dVar12 = dVar23 * dVar26 - dVar21 * dVar27;
        dVar16 = dVar24 * dVar27 - dVar23 * dVar7;
        local_1f8._8_4_ = auVar5._8_4_;
        local_1f8._0_8_ = dVar26;
        local_1f8._12_4_ = auVar5._12_4_;
        dVar46 = dVar21 * dVar7 - dVar24 * dVar26;
        dVar16 = dVar16 + dVar16;
        dVar46 = dVar46 + dVar46;
        dVar12 = dVar12 + dVar12;
        auVar5._8_4_ = SUB84(dVar45,0);
        auVar5._0_8_ = dVar4;
        auVar5._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_208._0_8_ = auVar28._0_8_;
        local_208._8_8_ = auVar22._8_8_;
        dVar44 = (dVar12 * dVar27 - dVar46 * (double)local_208._8_8_) + dVar4 * dVar16 + dVar21;
        dStack_220 = (dVar7 * dVar16 - dVar26 * dVar12) + dVar45 * dVar46 + dVar23;
        dVar13 = dVar23 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar17 = dVar10 * dVar27 - dVar23 * (double)local_208._8_8_;
        dVar47 = dVar20 * dVar7 - dVar10 * dVar26;
        dStack_240 = auVar5._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar47 = dVar47 + dVar47;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar43 * dVar26 - dVar21 * (double)local_208._0_8_;
        dVar18 = dVar9 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar48 = dVar21 * dVar7 - dVar9 * dVar26;
        dVar18 = dVar18 + dVar18;
        dVar48 = dVar48 + dVar48;
        dVar14 = dVar14 + dVar14;
        dVar15 = dVar43 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar19 = dVar3 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar49 = dVar20 * dVar7 - dVar3 * dVar26;
        dVar19 = dVar19 + dVar19;
        dVar49 = dVar49 + dVar49;
        dVar15 = dVar15 + dVar15;
        dVar45 = param_3[4];
        dVar8 = param_3[5];
        local_188 = dVar44 + dVar45;
        dStack_180 = dStack_220 + dVar8;
        dVar11 = (dVar13 * dVar27 - dVar47 * (double)local_208._8_8_) + dVar4 * dVar17 + dVar20 +
                 dVar45;
        dVar23 = (dVar7 * dVar17 - dVar26 * dVar13) + dStack_240 * dVar47 + dVar23 + dVar8;
        uVar41 = SUB84(dVar23,0);
        uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar21 = (dVar14 * dVar27 - dVar48 * (double)local_208._8_8_) + dVar4 * dVar18 + dVar21 +
                 dVar45;
        dVar23 = (dVar7 * dVar18 - dVar26 * dVar14) + dStack_240 * dVar48 + dVar43 + dVar8;
        uVar39 = SUB84(dVar23,0);
        uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar45 = (dVar15 * dVar27 - dVar49 * (double)local_208._8_8_) + dVar4 * dVar19 + dVar20 +
                 dVar45;
        dVar8 = (dVar7 * dVar19 - dVar26 * dVar15) + dStack_240 * dVar49 + dVar43 + dVar8;
        uVar37 = SUB84(dVar8,0);
        uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_248 = param_3;
        local_148 = param_3[6];
        local_178 = dVar12 * dVar4 + dVar24 + (dVar46 * dVar26 - dVar16 * (double)local_208._0_8_) +
                    local_148;
        local_160 = dVar13 * dVar4 + dVar10 + (dVar47 * dVar26 - dVar17 * (double)local_208._0_8_) +
                    local_148;
        local_100 = dVar14 * dVar4 + dVar9 + (dVar48 * dVar26 - dVar18 * (double)local_208._0_8_) +
                    local_148;
        local_148 = dVar15 * dVar4 + dVar3 + (dVar49 * dVar26 - dVar19 * (double)local_208._0_8_) +
                    local_148;
        local_258 = iVar33 + 1;
        iVar25 = (int)lVar2;
        iVar34 = iVar25 + 1;
        local_228 = CONCAT44((int)((ulonglong)dVar44 >> 0x20),uVar32 * 2 + 1);
        local_208 = auVar22;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        if (0.0 <= local_210) {
          local_170._8_4_ = uVar41;
          local_170._0_8_ = dVar11;
          local_170._12_4_ = uVar42;
          local_158._8_4_ = uVar37;
          local_158._0_8_ = dVar45;
          local_158._12_4_ = uVar38;
          local_128._8_4_ = uVar37;
          local_128._0_8_ = dVar45;
          local_128._12_4_ = uVar38;
          local_110._8_4_ = uVar39;
          local_110._0_8_ = dVar21;
          local_110._12_4_ = uVar40;
          local_250 = iVar34;
          local_118 = local_148;
          FUN_146d3dc18(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar34;
          local_250 = iVar25;
        }
        else {
          local_170._8_4_ = uVar37;
          local_170._0_8_ = dVar45;
          local_170._12_4_ = uVar38;
          local_158._8_4_ = uVar41;
          local_158._0_8_ = dVar11;
          local_158._12_4_ = uVar42;
          local_128._8_4_ = uVar39;
          local_128._0_8_ = dVar21;
          local_128._12_4_ = uVar40;
          local_110._8_4_ = uVar37;
          local_110._0_8_ = dVar45;
          local_110._12_4_ = uVar38;
          local_250 = local_258;
          local_258 = iVar34;
          dVar3 = local_160;
          local_160 = local_148;
          dVar45 = local_148;
          local_148 = dVar3;
          local_118 = local_100;
          local_100 = dVar45;
          FUN_146d3dc18(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar25;
          local_250 = iVar34;
        }
        FUN_146d3dc18(uVar29,&local_140,local_228 & 0xffffffff,iVar33);
        param_3 = local_248;
      }
LAB_146d3db70:
      piVar36 = piVar36 + 2;
    } while (piVar36 != piVar1);
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3dc18 FUN_146d3dc18 body=205 status=ok
// SIG undefined FUN_146d3dc18(void)

void FUN_146d3dc18(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f050 == '\x01') {
    FUN_1404b6a88(param_1[1],param_2);
  }
  else {
    FUN_146cc2d3a(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3dce6 FUN_146d3dce6 body=104 status=ok
// SIG undefined FUN_146d3dce6(void)

void FUN_146d3dce6(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d3e210(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d3e154(param_1,param_2);
  return;
}



// FUNCTION 146d3dd4e FUN_146d3dd4e body=180 status=ok
// SIG undefined FUN_146d3dd4e(void)

void FUN_146d3dd4e(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404af629(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3de03 FUN_146d3de03 body=847 status=ok
// SIG undefined FUN_146d3de03(void)

void FUN_146d3de03(longlong param_1,longlong param_2,int param_3,double *param_4,undefined4 *param_5
                  )

{
  char cVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  double dVar6;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined4 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  int local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [52];
  double local_a0 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar5 = (double *)((longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  pdVar3 = (double *)FUN_1404afe38(pdVar5);
  local_108 = *pdVar3;
  dStack_100 = pdVar3[1];
  local_f8 = pdVar3[2];
  if ((DAT_14c75f059 != '\x01') ||
     (((pdVar5[2] + pdVar5[5] + pdVar5[8]) / 3.0 -
      ((*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5 +
      *(double *)(param_1 + 0x30))) * local_f8 +
      ((*pdVar5 + pdVar5[3] + pdVar5[6]) / 3.0 -
      ((*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5 +
      *(double *)(param_1 + 0x20))) * local_108 +
      ((pdVar5[1] + pdVar5[4] + pdVar5[7]) / 3.0 -
      ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5 +
      *(double *)(param_1 + 0x28))) * dStack_100 <= 0.0)) {
    local_130 = &local_f0;
    local_a0[3] = 1.79769313486232e+308;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_138 = param_4;
    cVar1 = FUN_146d5a0c3(param_1,pdVar5,&local_108);
    if (cVar1 != '\0') {
      local_f0 = 0;
      dVar6 = local_f8 * local_a0[2] + local_108 * local_a0[0] + dStack_100 * local_a0[1];
      local_e0 = param_3;
      if ((0.0 <= dVar6) || (DAT_14c75f058 == '\0')) {
        if (local_a0[3] <= (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)param_4)) {
          local_138 = local_a0;
          cVar1 = FUN_146d5b14c(param_2,param_3,local_d4,local_d8);
          if (cVar1 != '\0') {
            uVar2 = (ABS(local_a0[1]) <= ABS(local_a0[2])) + 1;
            uVar4 = 0;
            if (ABS(local_a0[0]) <= ABS(local_a0[2])) {
              uVar4 = uVar2;
            }
            local_e4 = 1;
            if (ABS(local_a0[0]) <= ABS(local_a0[1])) {
              uVar4 = uVar2;
            }
            local_ec = uVar4 + 3;
            if (0.0 < local_a0[uVar4] || local_a0[uVar4] == 0.0) {
              local_ec = uVar4;
            }
            local_e8 = 0xffffffff;
          }
          if (0.0 <= local_a0[2] * local_f8 + local_a0[0] * local_108 + local_a0[1] * dStack_100) {
            local_130 = param_5;
            local_138 = param_4;
            FUN_146d519fa(param_1,pdVar5,&local_108,&local_f0);
          }
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3e154 FUN_146d3e154 body=188 status=ok
// SIG undefined FUN_146d3e154(void)

void FUN_146d3e154(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3e210(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3e210(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3e210 FUN_146d3e210 body=141 status=ok
// SIG undefined FUN_146d3e210(void)

void FUN_146d3e210(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d3e29e(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3e29e FUN_146d3e29e body=55 status=ok
// SIG undefined FUN_146d3e29e(void)

void FUN_146d3e29e(void)

{
  if (DAT_14c992db8 == '\x01') {
    FUN_146d3e2d5();
    return;
  }
  FUN_146d3ea0e();
  return;
}



// FUNCTION 146d3e2d5 FUN_146d3e2d5 body=1848 status=ok
// SIG undefined FUN_146d3e2d5(void)

void FUN_146d3e2d5(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  uint uVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_328 [32];
  double *local_308;
  int *local_300;
  double *local_2f8;
  undefined1 *local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 uStack_270;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [24];
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  int local_198;
  uint local_194;
  undefined4 local_190;
  undefined1 local_18c;
  int local_188;
  undefined1 local_180 [4];
  undefined1 local_17c [52];
  double local_148 [5];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar16 = *(longlong *)(param_3 + 0x30);
  lVar17 = (longlong)param_4 * 0x78;
  local_2a0 = *(double *)(lVar16 + lVar17);
  dVar1 = *(double *)(lVar16 + 8 + lVar17);
  dVar18 = *(double *)(lVar16 + 0x10 + lVar17);
  local_2a8 = *(double *)(lVar16 + 0x18 + lVar17);
  local_2b0 = *(double *)(lVar16 + 0x20 + lVar17);
  local_2b8 = *(double *)(lVar16 + 0x28 + lVar17);
  local_2c0 = *(double *)(lVar16 + 0x30 + lVar17);
  local_2c8 = *(double *)(lVar16 + 0x38 + lVar17);
  local_2d0 = *(double *)(lVar16 + 0x40 + lVar17);
  pdVar14 = (double *)FUN_1404afe38(lVar16 + lVar17);
  dVar11 = local_2a0;
  dVar10 = local_2a8;
  dVar9 = local_2b0;
  dVar8 = local_2b8;
  dVar7 = local_2c0;
  dVar6 = local_2c8;
  dVar5 = local_2d0;
  local_1f8 = pdVar14[2];
  local_208 = *pdVar14;
  dStack_200 = pdVar14[1];
  dVar2 = *param_2;
  dVar19 = param_2[1];
  dVar3 = param_2[2];
  if (dVar3 * local_1f8 + dVar2 * local_208 + dVar19 * dStack_200 <=
      (((*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5 +
       *(double *)(param_1 + 0x30)) - dVar18) * local_1f8 +
      (((*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5 +
       *(double *)(param_1 + 0x20)) - local_2a0) * local_208 +
      (((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5 +
       *(double *)(param_1 + 0x28)) - dVar1) * dStack_200) {
    local_e8 = local_2d0 + dVar3;
    local_f0 = local_2c8 + dVar19;
    local_f8 = local_2c0 + dVar2;
    local_110 = local_2a8 + dVar2;
    local_148[4] = dVar2 + local_2a0;
    local_108 = local_2b0 + dVar19;
    local_120 = dVar19 + dVar1;
    local_100 = local_2b8 + dVar3;
    local_118 = dVar3 + dVar18;
    local_300 = &local_198;
    local_148[3] = 1.79769313486232e+308;
    local_308 = param_5;
    cVar12 = FUN_146d5a0c3(param_1,local_148 + 4,&local_208,param_2);
    if (cVar12 != '\0') {
      local_308 = local_148;
      local_198 = 0;
      local_188 = param_4;
      cVar12 = FUN_146d5b14c(param_3,param_4,local_17c,local_180);
      if (cVar12 != '\0') {
        local_18c = 1;
        uVar13 = (ABS(local_148[1]) <= ABS(local_148[2])) + 1;
        uVar15 = 0;
        if (ABS(local_148[0]) <= ABS(local_148[1])) {
          uVar15 = uVar13;
        }
        if (ABS(local_148[0]) <= ABS(local_148[2])) {
          uVar15 = uVar13;
        }
        local_194 = uVar15 + 3;
        if (0.0 < local_148[uVar15] || local_148[uVar15] == 0.0) {
          local_194 = uVar15;
        }
        local_190 = 0xffffffff;
      }
      if (0.0 <= local_1f8 * local_148[2] + local_208 * local_148[0] + dStack_200 * local_148[1]) {
        local_278 = local_148[0];
        uStack_270 = 0;
        local_2d8 = param_2[2];
        local_250 = (dVar18 + dVar8 + dVar5) / 3.0 + local_2d8;
        local_2e8 = *param_2;
        local_2e0 = param_2[1];
        local_258 = (dVar1 + dVar9 + dVar6) / 3.0 + local_2e0;
        local_260 = (dVar11 + dVar10 + dVar7) / 3.0 + local_2e8;
        local_1e8 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = 0.0;
        local_2f0 = local_248;
        local_2f8 = &local_230;
        local_300 = (int *)local_218;
        local_308 = (double *)local_210;
        local_288 = local_148[2];
        uStack_280 = 0;
        local_298 = local_148[1];
        uStack_290 = 0;
        FUN_146d3ef81(&local_1e8,param_2,&local_260,&local_208);
        local_230 = local_2e8 - local_230;
        local_1e8 = dVar11 + local_230;
        local_220 = local_2d8 - local_220;
        local_228 = local_2e0 - local_228;
        dStack_1e0 = dVar1 + local_228;
        local_1d8 = dVar18 + local_220;
        local_1d0 = dVar10 + local_230;
        local_1c8 = dVar9 + local_228;
        local_1c0 = dVar8 + local_220;
        local_1b8 = dVar7 + local_230;
        local_1b0 = dVar6 + local_228;
        local_1a8 = dVar5 + local_220;
        dVar18 = -(local_288 * local_2d8 + local_278 * local_2e8 + local_298 * local_2e0);
        dVar1 = 0.0;
        if (0.0 <= dVar18) {
          dVar1 = dVar18;
        }
        local_308 = (double *)(dVar1 + (double)param_5);
        local_300 = param_6;
        FUN_146d519fa(param_1,&local_1e8,&local_208,&local_198);
        iVar4 = *param_6;
        if (0 < (longlong)iVar4) {
          lVar16 = 0;
          do {
            dVar1 = *(double *)((longlong)param_6 + lVar16 + 0x38);
            dVar18 = *(double *)((longlong)param_6 + lVar16 + 0x40);
            dVar2 = *(double *)((longlong)param_6 + lVar16 + 0x48);
            dVar19 = local_220 * dVar2 + local_230 * dVar1 + local_228 * dVar18;
            *(double *)((longlong)param_6 + lVar16 + 0x20) =
                 *(double *)((longlong)param_6 + lVar16 + 0x20) - dVar1 * dVar19;
            *(double *)((longlong)param_6 + lVar16 + 0x28) =
                 *(double *)((longlong)param_6 + lVar16 + 0x28) - dVar18 * dVar19;
            *(double *)((longlong)param_6 + lVar16 + 0x30) =
                 *(double *)((longlong)param_6 + lVar16 + 0x30) - dVar2 * dVar19;
            *(double *)((longlong)param_6 + lVar16 + 0x50) =
                 dVar19 + *(double *)((longlong)param_6 + lVar16 + 0x50);
            lVar16 = lVar16 + 0x58;
          } while ((longlong)iVar4 * 0x58 - lVar16 != 0);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d3ea0e FUN_146d3ea0e body=1394 status=ok
// SIG undefined FUN_146d3ea0e(void)

void FUN_146d3ea0e(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_198 [32];
  double *local_178;
  int *local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  int local_128 [4];
  int local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [52];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8 [4];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar9 = (double *)((longlong)param_4 * 0x78 + *(longlong *)(param_3 + 0x30));
  pdVar10 = pdVar9;
  pdVar12 = local_b8;
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar10 = (double *)FUN_1404afe38(pdVar9);
  local_138 = pdVar10[2];
  local_148 = *pdVar10;
  dStack_140 = pdVar10[1];
  dVar7 = (((*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5 +
           *(double *)(param_1 + 0x30)) - local_b8[2]) * local_138 +
          (((*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5 +
           *(double *)(param_1 + 0x20)) - local_b8[0]) * local_148 +
          (((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5 +
           *(double *)(param_1 + 0x28)) - local_b8[1]) * dStack_140;
  bVar6 = true;
  if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
    bVar6 = param_2[2] != 0.0;
  }
  bVar6 = (bool)(dVar7 < 0.0 & bVar6);
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_158 = 0.0;
  dVar13 = dVar7;
  if (bVar6) {
    local_168 = *param_2;
    dStack_160 = param_2[1];
    local_158 = param_2[2];
    local_b8[0] = local_b8[0] + local_168;
    local_b8[1] = local_b8[1] + dStack_160;
    local_b8[2] = local_b8[2] + local_158;
    local_b8[3] = local_b8[3] + local_168;
    local_98 = local_98 + dStack_160;
    local_90 = local_90 + local_158;
    local_88 = local_88 + local_168;
    local_80 = dStack_160 + local_80;
    local_78 = local_78 + local_158;
    dVar13 = dVar7 - (local_138 * local_158 + local_148 * local_168 + dStack_140 * dStack_160);
  }
  if ((0.0 <= dVar7) || (0.0 <= dVar13)) {
    local_170 = local_128;
    local_c0 = 0x7fefffffffffffff;
    local_178 = param_5;
    cVar8 = FUN_146d5a0c3(param_1,local_b8,&local_148,&local_168);
    if (cVar8 != '\0') {
      local_128[0] = 0;
      local_118 = param_4;
      if (0.0 <= local_138 * local_c8 + local_148 * local_d8 + dStack_140 * dStack_d0) {
        if (bVar6) {
          dVar13 = -(local_c8 * local_158 + local_d8 * local_168 + dStack_d0 * dStack_160);
          dVar7 = 0.0;
          if (0.0 <= dVar13) {
            dVar7 = dVar13;
          }
          param_5 = (double *)((double)param_5 + dVar7);
        }
        local_170 = param_6;
        local_178 = param_5;
        FUN_146d519fa(param_1,local_b8,&local_148,local_128);
        if (0 < *param_6) {
          local_178 = &local_d8;
          cVar8 = FUN_146d5b14c(param_3,param_4,local_10c,local_110);
          if ((cVar8 != '\0') && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              pdVar10 = (double *)((longlong)param_6 + lVar11 + 0x38);
              *pdVar10 = local_d8;
              pdVar10[1] = dStack_d0;
              *(double *)((longlong)param_6 + lVar11 + 0x48) = local_c8;
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x18);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x10);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 8);
              dVar2 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar3 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar4 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar14 = (dVar7 - *(double *)((longlong)param_6 + lVar11 + 0x30)) * dVar4 +
                       (dVar1 - *(double *)((longlong)param_6 + lVar11 + 0x20)) * dVar2 +
                       (dVar13 - *(double *)((longlong)param_6 + lVar11 + 0x28)) * dVar3;
              *(double *)((longlong)param_6 + lVar11 + 0x50) = dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x20) = dVar1 - dVar2 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x28) = dVar13 - dVar3 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x30) = dVar7 - dVar14 * dVar4;
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
          if ((bVar6) && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar2 = local_158 * dVar1 + local_168 * dVar7 + dStack_160 * dVar13;
              *(double *)((longlong)param_6 + lVar11 + 0x20) =
                   *(double *)((longlong)param_6 + lVar11 + 0x20) - dVar7 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x28) =
                   *(double *)((longlong)param_6 + lVar11 + 0x28) - dVar13 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x30) =
                   *(double *)((longlong)param_6 + lVar11 + 0x30) - dVar1 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x50) =
                   dVar2 + *(double *)((longlong)param_6 + lVar11 + 0x50);
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3ef81 FUN_146d3ef81 body=683 status=ok
// SIG undefined FUN_146d3ef81(void)

void FUN_146d3ef81(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8)

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
  double dVar11;
  double dVar12;
  
  dVar5 = param_2[2] - param_1[2];
  dVar7 = param_2[1] - param_1[1];
  dVar8 = param_1[2] - param_3[2];
  dVar3 = param_1[1] - param_3[1];
  dVar6 = *param_2 - *param_1;
  dVar2 = *param_1 - *param_3;
  dVar10 = dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
  dVar11 = *param_4;
  dVar9 = param_4[1];
  dVar1 = param_4[2];
  dVar12 = dVar5 * dVar1 + dVar6 * dVar11 + dVar7 * dVar9;
  *param_5 = 0.0;
  *param_6 = 0.0;
  if ((9.99999949475751e-09 < dVar10) || (9.99999949475751e-09 < dVar12)) {
    dVar4 = dVar1 * dVar1 + dVar11 * dVar11 + dVar9 * dVar9;
    dVar11 = dVar1 * dVar8 + dVar11 * dVar2 + dVar3 * dVar9;
    if (dVar10 <= 9.99999949475751e-09) {
      *param_6 = dVar11 / dVar4;
    }
    else {
      dVar9 = dVar8 * dVar5 + dVar2 * dVar6 + dVar3 * dVar7;
      if (dVar4 <= 9.99999949475751e-09) {
        dVar10 = -dVar9 / dVar10;
        if (1.0 <= dVar10) {
          dVar10 = 1.0;
        }
        if (dVar10 <= 0.0) {
          dVar10 = 0.0;
        }
        *param_5 = dVar10;
      }
      else {
        dVar1 = dVar10 * dVar4 - dVar12 * dVar12;
        if ((dVar1 != 0.0) || (NAN(dVar1))) {
          dVar1 = (dVar12 * dVar11 - dVar9 * dVar4) / dVar1;
          if (1.0 <= dVar1) {
            dVar1 = 1.0;
          }
          if (dVar1 <= 0.0) {
            dVar1 = 0.0;
          }
          *param_5 = dVar1;
        }
        else {
          dVar1 = *param_5;
        }
        *param_6 = (dVar12 * dVar1 + dVar11) / dVar4;
      }
    }
  }
  dVar11 = *param_5;
  dVar9 = param_1[2];
  dVar1 = param_1[1];
  *param_7 = dVar6 * dVar11 + *param_1;
  param_7[1] = dVar7 * dVar11 + dVar1;
  param_7[2] = dVar5 * dVar11 + dVar9;
  dVar11 = *param_6;
  dVar9 = param_4[1];
  dVar1 = param_4[2];
  dVar10 = param_3[2];
  dVar2 = param_3[1];
  *param_8 = *param_4 * dVar11 + *param_3;
  param_8[1] = dVar9 * dVar11 + dVar2;
  param_8[2] = dVar11 * dVar1 + dVar10;
  return;
}



// FUNCTION 146d3f22c FUN_146d3f22c body=367 status=ok
// SIG undefined FUN_146d3f22c(void)

void FUN_146d3f22c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  double local_130;
  undefined1 local_128 [48];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_c8,param_2);
  local_88 = *param_5;
  uStack_80 = param_5[1];
  local_78 = param_5[2];
  uStack_70 = 0;
  local_f8 = *(double *)(param_1 + 0x58) - param_6;
  local_f0 = *(double *)(param_1 + 0x60) - param_6;
  local_e8 = *(double *)(param_1 + 0x68) - param_6;
  local_e0 = *(double *)(param_1 + 0x70) + param_6;
  local_d8 = *(double *)(param_1 + 0x78) + param_6;
  local_d0 = *(double *)(param_1 + 0x80) + param_6;
  FUN_1449c5bc8(&local_f8,local_128,local_c8);
  local_130 = param_6;
  local_148 = param_7;
  local_140 = param_1;
  local_138 = param_2;
  FUN_1404c7e5c(param_3,local_128,local_c8,&local_f8);
  FUN_146d3f404(param_7,&local_140);
  FUN_1404aed08(param_7,param_2,local_c8);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3f39c FUN_146d3f39c body=104 status=ok
// SIG undefined FUN_146d3f39c(void)

void FUN_146d3f39c(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d3f942(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d3f886(param_1,param_2);
  return;
}



// FUNCTION 146d3f404 FUN_146d3f404 body=104 status=ok
// SIG undefined FUN_146d3f404(void)

void FUN_146d3f404(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d3f528(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d3f46c(param_1,param_2);
  return;
}



// FUNCTION 146d3f46c FUN_146d3f46c body=188 status=ok
// SIG undefined FUN_146d3f46c(void)

void FUN_146d3f46c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3f528(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3f528(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3f528 FUN_146d3f528 body=180 status=ok
// SIG undefined FUN_146d3f528(void)

void FUN_146d3f528(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404b0df3(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3f5dd FUN_146d3f5dd body=679 status=ok
// SIG undefined FUN_146d3f5dd(void)

void FUN_146d3f5dd(longlong param_1,longlong param_2,int param_3,double *param_4,undefined4 *param_5
                  )

{
  longlong lVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_118 [32];
  double *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  int local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [52];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar4 = (double *)((longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  pdVar3 = (double *)FUN_1404afe38(pdVar4);
  local_c8 = *pdVar3;
  dStack_c0 = pdVar3[1];
  local_b8 = pdVar3[2];
  if (DAT_14c75f059 == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x88);
    if (0.0 < ((pdVar4[2] + pdVar4[5] + pdVar4[8]) / 3.0 -
              (double)*(float *)(lVar1 + 0x74) * *(double *)(param_1 + 0x30)) * local_b8 +
              ((*pdVar4 + pdVar4[3] + pdVar4[6]) / 3.0 -
              (double)*(float *)(lVar1 + 0x6c) * *(double *)(param_1 + 0x20)) * local_c8 +
              ((pdVar4[1] + pdVar4[4] + pdVar4[7]) / 3.0 -
              (double)*(float *)(lVar1 + 0x70) * *(double *)(param_1 + 0x28)) * dStack_c0)
    goto LAB_146d3f795;
  }
  local_f0 = &local_b0;
  local_48 = 1.79769313486232e+308;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_f8 = param_4;
  cVar2 = FUN_146d59b78(param_1,pdVar4,&local_c8);
  if (cVar2 != '\0') {
    local_b0 = 0;
    dVar5 = local_b8 * local_50 + local_c8 * local_60 + dStack_c0 * local_58;
    local_a0 = param_3;
    if ((0.0 <= dVar5) || (DAT_14c75f058 == '\0')) {
      if (local_48 <= (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)param_4)) {
        local_f8 = &local_60;
        cVar2 = FUN_146d5b14c(param_2,param_3,local_94,local_98);
        if (cVar2 != '\0') {
          local_a4 = 1;
          local_ac = FUN_1404c24b6(*(undefined8 *)(param_1 + 0x88),&local_60,param_1 + 0x20);
          local_a8 = 0xffffffff;
        }
        if (0.0 <= local_b8 * local_50 + local_c8 * local_60 + dStack_c0 * local_58) {
          local_f0 = param_5;
          local_f8 = param_4;
          FUN_146d5104d(param_1,pdVar4,&local_c8,&local_b0);
        }
      }
    }
  }
LAB_146d3f795:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3f886 FUN_146d3f886 body=188 status=ok
// SIG undefined FUN_146d3f886(void)

void FUN_146d3f886(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d3f942(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d3f942(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d3f942 FUN_146d3f942 body=141 status=ok
// SIG undefined FUN_146d3f942(void)

void FUN_146d3f942(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d3f9d0(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d3f9d0 FUN_146d3f9d0 body=55 status=ok
// SIG undefined FUN_146d3f9d0(void)

void FUN_146d3f9d0(void)

{
  if (DAT_14c992db8 == '\x01') {
    FUN_146d3fa07();
    return;
  }
  FUN_146d4006a();
  return;
}



// FUNCTION 146d3fa07 FUN_146d3fa07 body=1634 status=ok
// SIG undefined FUN_146d3fa07(void)

void FUN_146d3fa07(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  int *local_2b0;
  double *local_2a8;
  undefined1 *local_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [24];
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  int local_188;
  undefined1 local_180 [4];
  undefined1 local_17c [52];
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar15 = *(longlong *)(param_3 + 0x30);
  lVar16 = (longlong)param_4 * 0x78;
  dVar1 = *(double *)(lVar15 + lVar16);
  dVar2 = *(double *)(lVar15 + 8 + lVar16);
  dVar3 = *(double *)(lVar15 + 0x10 + lVar16);
  local_268 = *(double *)(lVar15 + 0x18 + lVar16);
  local_288 = *(double *)(lVar15 + 0x20 + lVar16);
  local_290 = *(double *)(lVar15 + 0x28 + lVar16);
  dVar19 = *(double *)(lVar15 + 0x30 + lVar16);
  dVar4 = *(double *)(lVar15 + 0x38 + lVar16);
  dVar5 = *(double *)(lVar15 + 0x40 + lVar16);
  pdVar14 = (double *)FUN_1404afe38(lVar15 + lVar16);
  dVar12 = local_268;
  dVar11 = local_288;
  dVar10 = local_290;
  local_1f8 = pdVar14[2];
  local_208 = *pdVar14;
  dStack_200 = pdVar14[1];
  dVar6 = *param_2;
  dVar7 = param_2[1];
  dVar8 = param_2[2];
  lVar15 = *(longlong *)(param_1 + 0x88);
  if (dVar8 * local_1f8 + dVar6 * local_208 + dVar7 * dStack_200 <=
      ((double)*(float *)(lVar15 + 0x74) * *(double *)(param_1 + 0x30) - dVar3) * local_1f8 +
      ((double)*(float *)(lVar15 + 0x6c) * *(double *)(param_1 + 0x20) - dVar1) * local_208 +
      ((double)*(float *)(lVar15 + 0x70) * *(double *)(param_1 + 0x28) - dVar2) * dStack_200) {
    local_e8 = dVar5 + dVar8;
    local_f0 = dVar4 + dVar7;
    local_f8 = dVar19 + dVar6;
    local_110 = local_268 + dVar6;
    local_128 = dVar6 + dVar1;
    local_108 = local_288 + dVar7;
    local_120 = dVar7 + dVar2;
    local_100 = local_290 + dVar8;
    local_118 = dVar8 + dVar3;
    local_2b0 = &local_198;
    local_130 = 0x7fefffffffffffff;
    local_2b8 = param_5;
    cVar13 = FUN_146d59b78(param_1,&local_128,&local_208,param_2);
    if (cVar13 != '\0') {
      local_198 = 0;
      local_2b8 = &local_148;
      local_188 = param_4;
      cVar13 = FUN_146d5b14c(param_3,param_4,local_17c,local_180);
      if (cVar13 != '\0') {
        local_18c = 1;
        local_194 = FUN_1404c24b6(*(undefined8 *)(param_1 + 0x88),&local_148,param_1 + 0x20);
        local_190 = 0xffffffff;
      }
      if (0.0 <= local_1f8 * local_138 + local_208 * local_148 + dStack_200 * local_140) {
        local_270 = local_140;
        local_278 = param_2[2];
        local_250 = (dVar3 + dVar10 + dVar5) / 3.0 + local_278;
        dVar6 = *param_2;
        local_280 = param_2[1];
        local_258 = (dVar2 + dVar11 + dVar4) / 3.0 + local_280;
        local_260 = (dVar1 + dVar12 + dVar19) / 3.0 + dVar6;
        local_1e8 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = 0.0;
        local_2a0 = local_248;
        local_2a8 = &local_230;
        local_2b0 = (int *)local_218;
        local_2b8 = (double *)local_210;
        FUN_146d3ef81(&local_1e8,param_2,&local_260,&local_208);
        local_230 = dVar6 - local_230;
        local_1e8 = dVar1 + local_230;
        local_220 = local_278 - local_220;
        local_228 = local_280 - local_228;
        dStack_1e0 = dVar2 + local_228;
        local_1d8 = dVar3 + local_220;
        local_1d0 = dVar12 + local_230;
        local_1c8 = local_288 + local_228;
        local_1c0 = local_290 + local_220;
        local_1b8 = dVar19 + local_230;
        local_1b0 = dVar4 + local_228;
        local_1a8 = dVar5 + local_220;
        dVar1 = local_138 * local_278 + local_148 * dVar6 + local_270 * local_280;
        dVar2 = -dVar1;
        uVar17 = 0;
        uVar18 = 0;
        if (0.0 <= dVar2) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (int)((ulonglong)dVar2 >> 0x20);
        }
        local_2b8 = (double *)((double)CONCAT44(uVar18,uVar17) + (double)param_5);
        local_2b0 = param_6;
        FUN_146d5104d(param_1,&local_1e8,&local_208,&local_198);
        iVar9 = *param_6;
        if (0 < (longlong)iVar9) {
          lVar15 = 0;
          do {
            dVar1 = *(double *)((longlong)param_6 + lVar15 + 0x38);
            dVar2 = *(double *)((longlong)param_6 + lVar15 + 0x40);
            dVar3 = *(double *)((longlong)param_6 + lVar15 + 0x48);
            dVar19 = local_220 * dVar3 + local_230 * dVar1 + local_228 * dVar2;
            *(double *)((longlong)param_6 + lVar15 + 0x20) =
                 *(double *)((longlong)param_6 + lVar15 + 0x20) - dVar1 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x28) =
                 *(double *)((longlong)param_6 + lVar15 + 0x28) - dVar2 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x30) =
                 *(double *)((longlong)param_6 + lVar15 + 0x30) - dVar3 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x50) =
                 dVar19 + *(double *)((longlong)param_6 + lVar15 + 0x50);
            lVar15 = lVar15 + 0x58;
          } while ((longlong)iVar9 * 0x58 - lVar15 != 0);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d4006a FUN_146d4006a body=1360 status=ok
// SIG undefined FUN_146d4006a(void)

void FUN_146d4006a(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_198 [32];
  double *local_178;
  int *local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  int local_128 [4];
  int local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [52];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8 [4];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar9 = (double *)((longlong)param_4 * 0x78 + *(longlong *)(param_3 + 0x30));
  pdVar10 = pdVar9;
  pdVar12 = local_b8;
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar10 = (double *)FUN_1404afe38(pdVar9);
  local_138 = pdVar10[2];
  local_148 = *pdVar10;
  dStack_140 = pdVar10[1];
  lVar11 = *(longlong *)(param_1 + 0x88);
  dVar7 = ((double)*(float *)(lVar11 + 0x74) * *(double *)(param_1 + 0x30) - local_b8[2]) *
          local_138 +
          ((double)*(float *)(lVar11 + 0x6c) * *(double *)(param_1 + 0x20) - local_b8[0]) *
          local_148 +
          ((double)*(float *)(lVar11 + 0x70) * *(double *)(param_1 + 0x28) - local_b8[1]) *
          dStack_140;
  bVar6 = true;
  if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
    bVar6 = param_2[2] != 0.0;
  }
  bVar6 = (bool)(dVar7 < 0.0 & bVar6);
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_158 = 0.0;
  dVar13 = dVar7;
  if (bVar6) {
    local_168 = *param_2;
    dStack_160 = param_2[1];
    local_158 = param_2[2];
    local_b8[0] = local_b8[0] + local_168;
    local_b8[1] = local_b8[1] + dStack_160;
    local_b8[2] = local_b8[2] + local_158;
    local_b8[3] = local_b8[3] + local_168;
    local_98 = local_98 + dStack_160;
    local_90 = local_90 + local_158;
    local_88 = local_88 + local_168;
    local_80 = dStack_160 + local_80;
    local_78 = local_78 + local_158;
    dVar13 = dVar7 - (local_138 * local_158 + local_148 * local_168 + dStack_140 * dStack_160);
  }
  if ((0.0 <= dVar7) || (0.0 <= dVar13)) {
    local_170 = local_128;
    local_c0 = 0x7fefffffffffffff;
    local_178 = param_5;
    cVar8 = FUN_146d59b78(param_1,local_b8,&local_148,&local_168);
    if (cVar8 != '\0') {
      local_128[0] = 0;
      local_118 = param_4;
      if (0.0 <= local_138 * local_c8 + local_148 * local_d8 + dStack_140 * dStack_d0) {
        if (bVar6) {
          dVar13 = -(local_c8 * local_158 + local_d8 * local_168 + dStack_d0 * dStack_160);
          dVar7 = 0.0;
          if (0.0 <= dVar13) {
            dVar7 = dVar13;
          }
          param_5 = (double *)((double)param_5 + dVar7);
        }
        local_170 = param_6;
        local_178 = param_5;
        FUN_146d5104d(param_1,local_b8,&local_148,local_128);
        if (0 < *param_6) {
          local_178 = &local_d8;
          cVar8 = FUN_146d5b14c(param_3,param_4,local_10c,local_110);
          if ((cVar8 != '\0') && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              pdVar10 = (double *)((longlong)param_6 + lVar11 + 0x38);
              *pdVar10 = local_d8;
              pdVar10[1] = dStack_d0;
              *(double *)((longlong)param_6 + lVar11 + 0x48) = local_c8;
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x18);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x10);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 8);
              dVar2 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar3 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar4 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar14 = (dVar7 - *(double *)((longlong)param_6 + lVar11 + 0x30)) * dVar4 +
                       (dVar1 - *(double *)((longlong)param_6 + lVar11 + 0x20)) * dVar2 +
                       (dVar13 - *(double *)((longlong)param_6 + lVar11 + 0x28)) * dVar3;
              *(double *)((longlong)param_6 + lVar11 + 0x50) = dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x20) = dVar1 - dVar2 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x28) = dVar13 - dVar3 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x30) = dVar7 - dVar14 * dVar4;
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
          if ((bVar6) && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar2 = local_158 * dVar1 + local_168 * dVar7 + dStack_160 * dVar13;
              *(double *)((longlong)param_6 + lVar11 + 0x20) =
                   *(double *)((longlong)param_6 + lVar11 + 0x20) - dVar7 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x28) =
                   *(double *)((longlong)param_6 + lVar11 + 0x28) - dVar13 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x30) =
                   *(double *)((longlong)param_6 + lVar11 + 0x30) - dVar1 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x50) =
                   dVar2 + *(double *)((longlong)param_6 + lVar11 + 0x50);
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d405bb FUN_146d405bb body=368 status=ok
// SIG undefined FUN_146d405bb(void)

void FUN_146d405bb(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  double local_130;
  undefined1 local_128 [48];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_c8,param_2);
  local_88 = *param_5;
  uStack_80 = param_5[1];
  local_78 = param_5[2];
  uStack_70 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_f8 = (double)*(float *)(lVar1 + 0x40) - param_6;
  local_f0 = (double)*(float *)(lVar1 + 0x44) - param_6;
  local_e8 = (double)*(float *)(lVar1 + 0x48) - param_6;
  local_e0 = (double)*(float *)(lVar1 + 0x4c) + param_6;
  local_d8 = (double)*(float *)(lVar1 + 0x50) + param_6;
  local_d0 = (double)*(float *)(lVar1 + 0x54) + param_6;
  FUN_1449c5bc8(&local_f8,local_128,local_c8);
  local_130 = param_6;
  local_148 = param_7;
  local_140 = param_1;
  local_138 = param_2;
  FUN_1404c7e5c(param_3,local_128,local_c8,&local_f8);
  FUN_146d40794(param_7,&local_140);
  FUN_1404aed08(param_7,param_2,local_c8);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4072c FUN_146d4072c body=104 status=ok
// SIG undefined FUN_146d4072c(void)

void FUN_146d4072c(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d40cba(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d40bfe(param_1,param_2);
  return;
}



// FUNCTION 146d40794 FUN_146d40794 body=104 status=ok
// SIG undefined FUN_146d40794(void)

void FUN_146d40794(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d408b8(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d407fc(param_1,param_2);
  return;
}



// FUNCTION 146d407fc FUN_146d407fc body=188 status=ok
// SIG undefined FUN_146d407fc(void)

void FUN_146d407fc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d408b8(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d408b8(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d408b8 FUN_146d408b8 body=180 status=ok
// SIG undefined FUN_146d408b8(void)

void FUN_146d408b8(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404b9207(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4096d FUN_146d4096d body=656 status=ok
// SIG undefined FUN_146d4096d(void)

void FUN_146d4096d(longlong param_1,longlong param_2,int param_3,double *param_4,undefined4 *param_5
                  )

{
  longlong lVar1;
  char cVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_118 [32];
  double *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  int local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [52];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar4 = (double *)((longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  pdVar3 = (double *)FUN_1404afe38(pdVar4);
  local_c8 = *pdVar3;
  dStack_c0 = pdVar3[1];
  local_b8 = pdVar3[2];
  if (DAT_14c75f059 == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0.0 < ((pdVar4[2] + pdVar4[5] + pdVar4[8]) / 3.0 - (double)*(float *)(lVar1 + 0x74)) *
              local_b8 +
              ((*pdVar4 + pdVar4[3] + pdVar4[6]) / 3.0 - (double)*(float *)(lVar1 + 0x6c)) *
              local_c8 +
              ((pdVar4[1] + pdVar4[4] + pdVar4[7]) / 3.0 - (double)*(float *)(lVar1 + 0x70)) *
              dStack_c0) goto LAB_146d40b15;
  }
  local_f0 = &local_b0;
  local_48 = 1.79769313486232e+308;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_f8 = param_4;
  cVar2 = FUN_146d59659(param_1,pdVar4,&local_c8);
  if (cVar2 != '\0') {
    local_b0 = 0;
    dVar5 = local_b8 * local_50 + local_c8 * local_60 + dStack_c0 * local_58;
    local_a0 = param_3;
    if ((0.0 <= dVar5) || (DAT_14c75f058 == '\0')) {
      if (local_48 <= (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)param_4)) {
        local_f8 = &local_60;
        cVar2 = FUN_146d5b14c(param_2,param_3,local_94,local_98);
        if (cVar2 != '\0') {
          local_a4 = 1;
          local_ac = FUN_1449c8d5c(*(undefined8 *)(param_1 + 0x28),&local_60);
          local_a8 = 0xffffffff;
        }
        if (0.0 <= local_b8 * local_50 + local_c8 * local_60 + dStack_c0 * local_58) {
          local_f0 = param_5;
          local_f8 = param_4;
          FUN_146d50686(param_1,pdVar4,&local_c8,&local_b0);
        }
      }
    }
  }
LAB_146d40b15:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d40bfe FUN_146d40bfe body=188 status=ok
// SIG undefined FUN_146d40bfe(void)

void FUN_146d40bfe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d40cba(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d40cba(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d40cba FUN_146d40cba body=141 status=ok
// SIG undefined FUN_146d40cba(void)

void FUN_146d40cba(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d40d48(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d40d48 FUN_146d40d48 body=55 status=ok
// SIG undefined FUN_146d40d48(void)

void FUN_146d40d48(void)

{
  if (DAT_14c992db8 == '\x01') {
    FUN_146d40d7f();
    return;
  }
  FUN_146d413c8();
  return;
}



// FUNCTION 146d40d7f FUN_146d40d7f body=1608 status=ok
// SIG undefined FUN_146d40d7f(void)

void FUN_146d40d7f(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  int *local_2b0;
  double *local_2a8;
  undefined1 *local_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [24];
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  int local_188;
  undefined1 local_180 [4];
  undefined1 local_17c [52];
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar15 = *(longlong *)(param_3 + 0x30);
  lVar16 = (longlong)param_4 * 0x78;
  dVar1 = *(double *)(lVar15 + lVar16);
  dVar2 = *(double *)(lVar15 + 8 + lVar16);
  dVar3 = *(double *)(lVar15 + 0x10 + lVar16);
  local_268 = *(double *)(lVar15 + 0x18 + lVar16);
  local_288 = *(double *)(lVar15 + 0x20 + lVar16);
  local_290 = *(double *)(lVar15 + 0x28 + lVar16);
  dVar19 = *(double *)(lVar15 + 0x30 + lVar16);
  dVar4 = *(double *)(lVar15 + 0x38 + lVar16);
  dVar5 = *(double *)(lVar15 + 0x40 + lVar16);
  pdVar14 = (double *)FUN_1404afe38(lVar15 + lVar16);
  dVar12 = local_268;
  dVar11 = local_288;
  dVar10 = local_290;
  local_1f8 = pdVar14[2];
  local_208 = *pdVar14;
  dStack_200 = pdVar14[1];
  dVar6 = *param_2;
  dVar7 = param_2[1];
  dVar8 = param_2[2];
  lVar15 = *(longlong *)(param_1 + 0x28);
  if (dVar8 * local_1f8 + dVar6 * local_208 + dVar7 * dStack_200 <=
      ((double)*(float *)(lVar15 + 0x74) - dVar3) * local_1f8 +
      ((double)*(float *)(lVar15 + 0x6c) - dVar1) * local_208 +
      ((double)*(float *)(lVar15 + 0x70) - dVar2) * dStack_200) {
    local_e8 = dVar5 + dVar8;
    local_f0 = dVar4 + dVar7;
    local_f8 = dVar19 + dVar6;
    local_110 = local_268 + dVar6;
    local_128 = dVar6 + dVar1;
    local_108 = local_288 + dVar7;
    local_120 = dVar7 + dVar2;
    local_100 = local_290 + dVar8;
    local_118 = dVar8 + dVar3;
    local_2b0 = &local_198;
    local_130 = 0x7fefffffffffffff;
    local_2b8 = param_5;
    cVar13 = FUN_146d59659(param_1,&local_128,&local_208,param_2);
    if (cVar13 != '\0') {
      local_198 = 0;
      local_2b8 = &local_148;
      local_188 = param_4;
      cVar13 = FUN_146d5b14c(param_3,param_4,local_17c,local_180);
      if (cVar13 != '\0') {
        local_18c = 1;
        local_194 = FUN_1449c8d5c(*(undefined8 *)(param_1 + 0x28),&local_148);
        local_190 = 0xffffffff;
      }
      if (0.0 <= local_1f8 * local_138 + local_208 * local_148 + dStack_200 * local_140) {
        local_270 = local_140;
        local_278 = param_2[2];
        local_250 = (dVar3 + dVar10 + dVar5) / 3.0 + local_278;
        dVar6 = *param_2;
        local_280 = param_2[1];
        local_258 = (dVar2 + dVar11 + dVar4) / 3.0 + local_280;
        local_260 = (dVar1 + dVar12 + dVar19) / 3.0 + dVar6;
        local_1e8 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = 0.0;
        local_2a0 = local_248;
        local_2a8 = &local_230;
        local_2b0 = (int *)local_218;
        local_2b8 = (double *)local_210;
        FUN_146d3ef81(&local_1e8,param_2,&local_260,&local_208);
        local_230 = dVar6 - local_230;
        local_1e8 = dVar1 + local_230;
        local_220 = local_278 - local_220;
        local_228 = local_280 - local_228;
        dStack_1e0 = dVar2 + local_228;
        local_1d8 = dVar3 + local_220;
        local_1d0 = dVar12 + local_230;
        local_1c8 = local_288 + local_228;
        local_1c0 = local_290 + local_220;
        local_1b8 = dVar19 + local_230;
        local_1b0 = dVar4 + local_228;
        local_1a8 = dVar5 + local_220;
        dVar1 = local_138 * local_278 + local_148 * dVar6 + local_270 * local_280;
        dVar2 = -dVar1;
        uVar17 = 0;
        uVar18 = 0;
        if (0.0 <= dVar2) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (int)((ulonglong)dVar2 >> 0x20);
        }
        local_2b8 = (double *)((double)CONCAT44(uVar18,uVar17) + (double)param_5);
        local_2b0 = param_6;
        FUN_146d50686(param_1,&local_1e8,&local_208,&local_198);
        iVar9 = *param_6;
        if (0 < (longlong)iVar9) {
          lVar15 = 0;
          do {
            dVar1 = *(double *)((longlong)param_6 + lVar15 + 0x38);
            dVar2 = *(double *)((longlong)param_6 + lVar15 + 0x40);
            dVar3 = *(double *)((longlong)param_6 + lVar15 + 0x48);
            dVar19 = local_220 * dVar3 + local_230 * dVar1 + local_228 * dVar2;
            *(double *)((longlong)param_6 + lVar15 + 0x20) =
                 *(double *)((longlong)param_6 + lVar15 + 0x20) - dVar1 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x28) =
                 *(double *)((longlong)param_6 + lVar15 + 0x28) - dVar2 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x30) =
                 *(double *)((longlong)param_6 + lVar15 + 0x30) - dVar3 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x50) =
                 dVar19 + *(double *)((longlong)param_6 + lVar15 + 0x50);
            lVar15 = lVar15 + 0x58;
          } while ((longlong)iVar9 * 0x58 - lVar15 != 0);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d413c8 FUN_146d413c8 body=1339 status=ok
// SIG undefined FUN_146d413c8(void)

void FUN_146d413c8(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_198 [32];
  double *local_178;
  int *local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  int local_128 [4];
  int local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [52];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8 [4];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar9 = (double *)((longlong)param_4 * 0x78 + *(longlong *)(param_3 + 0x30));
  pdVar10 = pdVar9;
  pdVar12 = local_b8;
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar10 = (double *)FUN_1404afe38(pdVar9);
  local_138 = pdVar10[2];
  local_148 = *pdVar10;
  dStack_140 = pdVar10[1];
  lVar11 = *(longlong *)(param_1 + 0x28);
  dVar7 = ((double)*(float *)(lVar11 + 0x74) - local_b8[2]) * local_138 +
          ((double)*(float *)(lVar11 + 0x6c) - local_b8[0]) * local_148 +
          ((double)*(float *)(lVar11 + 0x70) - local_b8[1]) * dStack_140;
  bVar6 = true;
  if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
    bVar6 = param_2[2] != 0.0;
  }
  bVar6 = (bool)(dVar7 < 0.0 & bVar6);
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_158 = 0.0;
  dVar13 = dVar7;
  if (bVar6) {
    local_168 = *param_2;
    dStack_160 = param_2[1];
    local_158 = param_2[2];
    local_b8[0] = local_b8[0] + local_168;
    local_b8[1] = local_b8[1] + dStack_160;
    local_b8[2] = local_b8[2] + local_158;
    local_b8[3] = local_b8[3] + local_168;
    local_98 = local_98 + dStack_160;
    local_90 = local_90 + local_158;
    local_88 = local_88 + local_168;
    local_80 = dStack_160 + local_80;
    local_78 = local_78 + local_158;
    dVar13 = dVar7 - (local_138 * local_158 + local_148 * local_168 + dStack_140 * dStack_160);
  }
  if ((0.0 <= dVar7) || (0.0 <= dVar13)) {
    local_170 = local_128;
    local_c0 = 0x7fefffffffffffff;
    local_178 = param_5;
    cVar8 = FUN_146d59659(param_1,local_b8,&local_148,&local_168);
    if (cVar8 != '\0') {
      local_128[0] = 0;
      local_118 = param_4;
      if (0.0 <= local_138 * local_c8 + local_148 * local_d8 + dStack_140 * dStack_d0) {
        if (bVar6) {
          dVar13 = -(local_c8 * local_158 + local_d8 * local_168 + dStack_d0 * dStack_160);
          dVar7 = 0.0;
          if (0.0 <= dVar13) {
            dVar7 = dVar13;
          }
          param_5 = (double *)((double)param_5 + dVar7);
        }
        local_170 = param_6;
        local_178 = param_5;
        FUN_146d50686(param_1,local_b8,&local_148,local_128);
        if (0 < *param_6) {
          local_178 = &local_d8;
          cVar8 = FUN_146d5b14c(param_3,param_4,local_10c,local_110);
          if ((cVar8 != '\0') && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              pdVar10 = (double *)((longlong)param_6 + lVar11 + 0x38);
              *pdVar10 = local_d8;
              pdVar10[1] = dStack_d0;
              *(double *)((longlong)param_6 + lVar11 + 0x48) = local_c8;
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x18);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x10);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 8);
              dVar2 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar3 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar4 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar14 = (dVar7 - *(double *)((longlong)param_6 + lVar11 + 0x30)) * dVar4 +
                       (dVar1 - *(double *)((longlong)param_6 + lVar11 + 0x20)) * dVar2 +
                       (dVar13 - *(double *)((longlong)param_6 + lVar11 + 0x28)) * dVar3;
              *(double *)((longlong)param_6 + lVar11 + 0x50) = dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x20) = dVar1 - dVar2 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x28) = dVar13 - dVar3 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x30) = dVar7 - dVar14 * dVar4;
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
          if ((bVar6) && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar2 = local_158 * dVar1 + local_168 * dVar7 + dStack_160 * dVar13;
              *(double *)((longlong)param_6 + lVar11 + 0x20) =
                   *(double *)((longlong)param_6 + lVar11 + 0x20) - dVar7 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x28) =
                   *(double *)((longlong)param_6 + lVar11 + 0x28) - dVar13 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x30) =
                   *(double *)((longlong)param_6 + lVar11 + 0x30) - dVar1 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x50) =
                   dVar2 + *(double *)((longlong)param_6 + lVar11 + 0x50);
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d41904 FUN_146d41904 body=370 status=ok
// SIG undefined FUN_146d41904(void)

void FUN_146d41904(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  double local_130;
  undefined1 local_128 [48];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_c8,param_2);
  local_88 = *param_5;
  uStack_80 = param_5[1];
  local_78 = param_5[2];
  uStack_70 = 0;
  local_f8 = (double)*(float *)(param_1 + 0x40) - param_6;
  local_f0 = (double)*(float *)(param_1 + 0x44) - param_6;
  local_e8 = (double)*(float *)(param_1 + 0x48) - param_6;
  local_e0 = (double)*(float *)(param_1 + 0x4c) + param_6;
  local_d8 = (double)*(float *)(param_1 + 0x50) + param_6;
  local_d0 = (double)*(float *)(param_1 + 0x54) + param_6;
  FUN_1449c5bc8(&local_f8,local_128,local_c8);
  local_130 = param_6;
  local_148 = param_7;
  local_140 = param_1;
  local_138 = param_2;
  FUN_1404c7e5c(param_3,local_128,local_c8,&local_f8);
  FUN_146d41ae0(param_7,&local_140);
  FUN_1404aed08(param_7,param_2,local_c8);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d41a78 FUN_146d41a78 body=104 status=ok
// SIG undefined FUN_146d41a78(void)

void FUN_146d41a78(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d42002(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d41f46(param_1,param_2);
  return;
}



// FUNCTION 146d41ae0 FUN_146d41ae0 body=104 status=ok
// SIG undefined FUN_146d41ae0(void)

void FUN_146d41ae0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d41c04(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d41b48(param_1,param_2);
  return;
}



// FUNCTION 146d41b48 FUN_146d41b48 body=188 status=ok
// SIG undefined FUN_146d41b48(void)

void FUN_146d41b48(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d41c04(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d41c04(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d41c04 FUN_146d41c04 body=180 status=ok
// SIG undefined FUN_146d41c04(void)

void FUN_146d41c04(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404aed4c(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d41cb9 FUN_146d41cb9 body=651 status=ok
// SIG undefined FUN_146d41cb9(void)

void FUN_146d41cb9(longlong param_1,longlong param_2,int param_3,double *param_4,undefined4 *param_5
                  )

{
  char cVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_118 [32];
  double *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  int local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [52];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar3 = (double *)((longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  pdVar2 = (double *)FUN_1404afe38(pdVar3);
  local_c8 = *pdVar2;
  dStack_c0 = pdVar2[1];
  local_b8 = pdVar2[2];
  if ((DAT_14c75f059 != '\x01') ||
     (((pdVar3[2] + pdVar3[5] + pdVar3[8]) / 3.0 - (double)*(float *)(param_1 + 0x74)) * local_b8 +
      ((*pdVar3 + pdVar3[3] + pdVar3[6]) / 3.0 - (double)*(float *)(param_1 + 0x6c)) * local_c8 +
      ((pdVar3[1] + pdVar3[4] + pdVar3[7]) / 3.0 - (double)*(float *)(param_1 + 0x70)) * dStack_c0
      <= 0.0)) {
    local_f0 = &local_b0;
    local_48 = 1.79769313486232e+308;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_f8 = param_4;
    cVar1 = FUN_146d58ff5(param_1,pdVar3,&local_c8);
    if (cVar1 != '\0') {
      local_b0 = 0;
      dVar4 = local_b8 * local_50 + local_c8 * local_60 + dStack_c0 * local_58;
      local_a0 = param_3;
      if ((0.0 <= dVar4) || (DAT_14c75f058 == '\0')) {
        if (local_48 <= (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)param_4)) {
          local_f8 = &local_60;
          cVar1 = FUN_146d5b14c(param_2,param_3,local_94,local_98);
          if (cVar1 != '\0') {
            local_a4 = 1;
            local_ac = FUN_1449c8d5c(param_1,&local_60);
            local_a8 = 0xffffffff;
          }
          if (0.0 <= local_b8 * local_50 + local_c8 * local_60 + dStack_c0 * local_58) {
            local_f0 = param_5;
            local_f8 = param_4;
            FUN_146d4fcc3(param_1,pdVar3,&local_c8,&local_b0);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d41f46 FUN_146d41f46 body=188 status=ok
// SIG undefined FUN_146d41f46(void)

void FUN_146d41f46(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d42002(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d42002(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d42002 FUN_146d42002 body=141 status=ok
// SIG undefined FUN_146d42002(void)

void FUN_146d42002(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d42090(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d42090 FUN_146d42090 body=55 status=ok
// SIG undefined FUN_146d42090(void)

void FUN_146d42090(void)

{
  if (DAT_14c992db8 == '\x01') {
    FUN_146d420c7();
    return;
  }
  FUN_146d4270b();
  return;
}



// FUNCTION 146d420c7 FUN_146d420c7 body=1603 status=ok
// SIG undefined FUN_146d420c7(void)

void FUN_146d420c7(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  int *local_2b0;
  double *local_2a8;
  undefined1 *local_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [24];
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  int local_188;
  undefined1 local_180 [4];
  undefined1 local_17c [52];
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar15 = *(longlong *)(param_3 + 0x30);
  lVar16 = (longlong)param_4 * 0x78;
  dVar1 = *(double *)(lVar15 + lVar16);
  dVar2 = *(double *)(lVar15 + 8 + lVar16);
  dVar3 = *(double *)(lVar15 + 0x10 + lVar16);
  local_268 = *(double *)(lVar15 + 0x18 + lVar16);
  local_288 = *(double *)(lVar15 + 0x20 + lVar16);
  local_290 = *(double *)(lVar15 + 0x28 + lVar16);
  dVar19 = *(double *)(lVar15 + 0x30 + lVar16);
  dVar4 = *(double *)(lVar15 + 0x38 + lVar16);
  dVar5 = *(double *)(lVar15 + 0x40 + lVar16);
  pdVar14 = (double *)FUN_1404afe38(lVar15 + lVar16);
  dVar12 = local_268;
  dVar11 = local_288;
  dVar10 = local_290;
  local_1f8 = pdVar14[2];
  local_208 = *pdVar14;
  dStack_200 = pdVar14[1];
  dVar6 = *param_2;
  dVar7 = param_2[1];
  dVar8 = param_2[2];
  if (dVar8 * local_1f8 + dVar6 * local_208 + dVar7 * dStack_200 <=
      ((double)*(float *)(param_1 + 0x74) - dVar3) * local_1f8 +
      ((double)*(float *)(param_1 + 0x6c) - dVar1) * local_208 +
      ((double)*(float *)(param_1 + 0x70) - dVar2) * dStack_200) {
    local_e8 = dVar5 + dVar8;
    local_f0 = dVar4 + dVar7;
    local_f8 = dVar19 + dVar6;
    local_110 = local_268 + dVar6;
    local_128 = dVar6 + dVar1;
    local_108 = local_288 + dVar7;
    local_120 = dVar7 + dVar2;
    local_100 = local_290 + dVar8;
    local_118 = dVar8 + dVar3;
    local_2b0 = &local_198;
    local_130 = 0x7fefffffffffffff;
    local_2b8 = param_5;
    cVar13 = FUN_146d58ff5(param_1,&local_128,&local_208,param_2);
    if (cVar13 != '\0') {
      local_198 = 0;
      local_2b8 = &local_148;
      local_188 = param_4;
      cVar13 = FUN_146d5b14c(param_3,param_4,local_17c,local_180);
      if (cVar13 != '\0') {
        local_18c = 1;
        local_194 = FUN_1449c8d5c(param_1,&local_148);
        local_190 = 0xffffffff;
      }
      if (0.0 <= local_1f8 * local_138 + local_208 * local_148 + dStack_200 * local_140) {
        local_270 = local_140;
        local_278 = param_2[2];
        local_250 = (dVar3 + dVar10 + dVar5) / 3.0 + local_278;
        dVar6 = *param_2;
        local_280 = param_2[1];
        local_258 = (dVar2 + dVar11 + dVar4) / 3.0 + local_280;
        local_260 = (dVar1 + dVar12 + dVar19) / 3.0 + dVar6;
        local_1e8 = 0.0;
        dStack_1e0 = 0.0;
        local_1d8 = 0.0;
        local_2a0 = local_248;
        local_2a8 = &local_230;
        local_2b0 = (int *)local_218;
        local_2b8 = (double *)local_210;
        FUN_146d3ef81(&local_1e8,param_2,&local_260,&local_208);
        local_230 = dVar6 - local_230;
        local_1e8 = dVar1 + local_230;
        local_220 = local_278 - local_220;
        local_228 = local_280 - local_228;
        dStack_1e0 = dVar2 + local_228;
        local_1d8 = dVar3 + local_220;
        local_1d0 = dVar12 + local_230;
        local_1c8 = local_288 + local_228;
        local_1c0 = local_290 + local_220;
        local_1b8 = dVar19 + local_230;
        local_1b0 = dVar4 + local_228;
        local_1a8 = dVar5 + local_220;
        dVar1 = local_138 * local_278 + local_148 * dVar6 + local_270 * local_280;
        dVar2 = -dVar1;
        uVar17 = 0;
        uVar18 = 0;
        if (0.0 <= dVar2) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (int)((ulonglong)dVar2 >> 0x20);
        }
        local_2b8 = (double *)((double)CONCAT44(uVar18,uVar17) + (double)param_5);
        local_2b0 = param_6;
        FUN_146d4fcc3(param_1,&local_1e8,&local_208,&local_198);
        iVar9 = *param_6;
        if (0 < (longlong)iVar9) {
          lVar15 = 0;
          do {
            dVar1 = *(double *)((longlong)param_6 + lVar15 + 0x38);
            dVar2 = *(double *)((longlong)param_6 + lVar15 + 0x40);
            dVar3 = *(double *)((longlong)param_6 + lVar15 + 0x48);
            dVar19 = local_220 * dVar3 + local_230 * dVar1 + local_228 * dVar2;
            *(double *)((longlong)param_6 + lVar15 + 0x20) =
                 *(double *)((longlong)param_6 + lVar15 + 0x20) - dVar1 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x28) =
                 *(double *)((longlong)param_6 + lVar15 + 0x28) - dVar2 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x30) =
                 *(double *)((longlong)param_6 + lVar15 + 0x30) - dVar3 * dVar19;
            *(double *)((longlong)param_6 + lVar15 + 0x50) =
                 dVar19 + *(double *)((longlong)param_6 + lVar15 + 0x50);
            lVar15 = lVar15 + 0x58;
          } while ((longlong)iVar9 * 0x58 - lVar15 != 0);
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d4270b FUN_146d4270b body=1338 status=ok
// SIG undefined FUN_146d4270b(void)

void FUN_146d4270b(longlong param_1,double *param_2,longlong param_3,int param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  char cVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_198 [32];
  double *local_178;
  int *local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  int local_128 [4];
  int local_118;
  undefined1 local_110 [4];
  undefined1 local_10c [52];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8 [4];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar9 = (double *)((longlong)param_4 * 0x78 + *(longlong *)(param_3 + 0x30));
  pdVar10 = pdVar9;
  pdVar12 = local_b8;
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  pdVar10 = (double *)FUN_1404afe38(pdVar9);
  local_138 = pdVar10[2];
  local_148 = *pdVar10;
  dStack_140 = pdVar10[1];
  dVar7 = ((double)*(float *)(param_1 + 0x74) - local_b8[2]) * local_138 +
          ((double)*(float *)(param_1 + 0x6c) - local_b8[0]) * local_148 +
          ((double)*(float *)(param_1 + 0x70) - local_b8[1]) * dStack_140;
  bVar6 = true;
  if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
    bVar6 = param_2[2] != 0.0;
  }
  bVar6 = (bool)(dVar7 < 0.0 & bVar6);
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_158 = 0.0;
  dVar13 = dVar7;
  if (bVar6) {
    local_168 = *param_2;
    dStack_160 = param_2[1];
    local_158 = param_2[2];
    local_b8[0] = local_b8[0] + local_168;
    local_b8[1] = local_b8[1] + dStack_160;
    local_b8[2] = local_b8[2] + local_158;
    local_b8[3] = local_b8[3] + local_168;
    local_98 = local_98 + dStack_160;
    local_90 = local_90 + local_158;
    local_88 = local_88 + local_168;
    local_80 = dStack_160 + local_80;
    local_78 = local_78 + local_158;
    dVar13 = dVar7 - (local_138 * local_158 + local_148 * local_168 + dStack_140 * dStack_160);
  }
  if ((0.0 <= dVar7) || (0.0 <= dVar13)) {
    local_170 = local_128;
    local_c0 = 0x7fefffffffffffff;
    local_178 = param_5;
    cVar8 = FUN_146d58ff5(param_1,local_b8,&local_148,&local_168);
    if (cVar8 != '\0') {
      local_128[0] = 0;
      local_118 = param_4;
      if (0.0 <= local_138 * local_c8 + local_148 * local_d8 + dStack_140 * dStack_d0) {
        if (bVar6) {
          dVar13 = -(local_c8 * local_158 + local_d8 * local_168 + dStack_d0 * dStack_160);
          dVar7 = 0.0;
          if (0.0 <= dVar13) {
            dVar7 = dVar13;
          }
          param_5 = (double *)((double)param_5 + dVar7);
        }
        local_170 = param_6;
        local_178 = param_5;
        FUN_146d4fcc3(param_1,local_b8,&local_148,local_128);
        if (0 < *param_6) {
          local_178 = &local_d8;
          cVar8 = FUN_146d5b14c(param_3,param_4,local_10c,local_110);
          if ((cVar8 != '\0') && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              pdVar10 = (double *)((longlong)param_6 + lVar11 + 0x38);
              *pdVar10 = local_d8;
              pdVar10[1] = dStack_d0;
              *(double *)((longlong)param_6 + lVar11 + 0x48) = local_c8;
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x18);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x10);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 8);
              dVar2 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar3 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar4 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar14 = (dVar7 - *(double *)((longlong)param_6 + lVar11 + 0x30)) * dVar4 +
                       (dVar1 - *(double *)((longlong)param_6 + lVar11 + 0x20)) * dVar2 +
                       (dVar13 - *(double *)((longlong)param_6 + lVar11 + 0x28)) * dVar3;
              *(double *)((longlong)param_6 + lVar11 + 0x50) = dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x20) = dVar1 - dVar2 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x28) = dVar13 - dVar3 * dVar14;
              *(double *)((longlong)param_6 + lVar11 + 0x30) = dVar7 - dVar14 * dVar4;
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
          if ((bVar6) && (iVar5 = *param_6, 0 < (longlong)iVar5)) {
            lVar11 = 0;
            do {
              dVar7 = *(double *)((longlong)param_6 + lVar11 + 0x38);
              dVar13 = *(double *)((longlong)param_6 + lVar11 + 0x40);
              dVar1 = *(double *)((longlong)param_6 + lVar11 + 0x48);
              dVar2 = local_158 * dVar1 + local_168 * dVar7 + dStack_160 * dVar13;
              *(double *)((longlong)param_6 + lVar11 + 0x20) =
                   *(double *)((longlong)param_6 + lVar11 + 0x20) - dVar7 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x28) =
                   *(double *)((longlong)param_6 + lVar11 + 0x28) - dVar13 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x30) =
                   *(double *)((longlong)param_6 + lVar11 + 0x30) - dVar1 * dVar2;
              *(double *)((longlong)param_6 + lVar11 + 0x50) =
                   dVar2 + *(double *)((longlong)param_6 + lVar11 + 0x50);
              lVar11 = lVar11 + 0x58;
            } while ((longlong)iVar5 * 0x58 - lVar11 != 0);
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d42c46 FUN_146d42c46 body=184 status=ok
// SIG undefined FUN_146d42c46(void)

void FUN_146d42c46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d42d00(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d42d00 FUN_146d42d00 body=401 status=ok
// SIG undefined FUN_146d42d00(void)

void FUN_146d42d00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1404c8166(0,param_2,&local_e8);
  if (0 < (int)uStack_e0) {
    dVar1 = *(double *)(param_3 + 0x40);
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_3 + 0x50);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(local_e8 + lVar11 * 4);
      local_108 = &local_f4;
      local_110 = &local_f0;
      local_118 = &local_ec;
      FUN_1404c81ee(param_1,uVar4,param_3,local_d0);
      uVar8 = local_a8;
      uVar7 = local_f0;
      if (dVar1 * dVar2 * dVar3 < 0.0) {
        local_78 = local_a8;
        local_88 = local_b8;
        uVar9 = local_88;
        uStack_80 = uStack_b0;
        uVar10 = uStack_80;
        local_a8 = local_90;
        uVar5 = CONCAT44(uStack_9c,local_a0);
        uVar6 = CONCAT44(uStack_94,uStack_98);
        local_90 = uVar8;
        local_88._0_4_ = (undefined4)local_b8;
        local_88._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        uStack_80._0_4_ = (undefined4)uStack_b0;
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
        local_a0 = (undefined4)local_88;
        uStack_9c = local_88._4_4_;
        uStack_98 = (undefined4)uStack_80;
        uStack_94 = uStack_80._4_4_;
        local_f0 = local_f4;
        local_f4 = uVar7;
        local_b8 = uVar5;
        uStack_b0 = uVar6;
        local_88 = uVar9;
        uStack_80 = uVar10;
      }
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_f4);
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,local_f0);
      FUN_146d42e92(param_4,local_d0,uVar4,local_ec);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d42e92 FUN_146d42e92 body=205 status=ok
// SIG undefined FUN_146d42e92(void)

void FUN_146d42e92(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cbf627(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1449c90bb(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d42f60 FUN_146d42f60 body=184 status=ok
// SIG undefined FUN_146d42f60(void)

void FUN_146d42f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d4301a(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4301a FUN_146d4301a body=401 status=ok
// SIG undefined FUN_146d4301a(void)

void FUN_146d4301a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1404c8166(0,param_2,&local_e8);
  if (0 < (int)uStack_e0) {
    dVar1 = *(double *)(param_3 + 0x40);
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_3 + 0x50);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(local_e8 + lVar11 * 4);
      local_108 = &local_f4;
      local_110 = &local_f0;
      local_118 = &local_ec;
      FUN_1404c81ee(param_1,uVar4,param_3,local_d0);
      uVar8 = local_a8;
      uVar7 = local_f0;
      if (dVar1 * dVar2 * dVar3 < 0.0) {
        local_78 = local_a8;
        local_88 = local_b8;
        uVar9 = local_88;
        uStack_80 = uStack_b0;
        uVar10 = uStack_80;
        local_a8 = local_90;
        uVar5 = CONCAT44(uStack_9c,local_a0);
        uVar6 = CONCAT44(uStack_94,uStack_98);
        local_90 = uVar8;
        local_88._0_4_ = (undefined4)local_b8;
        local_88._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        uStack_80._0_4_ = (undefined4)uStack_b0;
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
        local_a0 = (undefined4)local_88;
        uStack_9c = local_88._4_4_;
        uStack_98 = (undefined4)uStack_80;
        uStack_94 = uStack_80._4_4_;
        local_f0 = local_f4;
        local_f4 = uVar7;
        local_b8 = uVar5;
        uStack_b0 = uVar6;
        local_88 = uVar9;
        uStack_80 = uVar10;
      }
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_f4);
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,local_f0);
      FUN_146d431ac(param_4,local_d0,uVar4,local_ec);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d431ac FUN_146d431ac body=205 status=ok
// SIG undefined FUN_146d431ac(void)

void FUN_146d431ac(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cbdae1(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1404c02c0(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4327a FUN_146d4327a body=184 status=ok
// SIG undefined FUN_146d4327a(void)

void FUN_146d4327a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d43334(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d43334 FUN_146d43334 body=401 status=ok
// SIG undefined FUN_146d43334(void)

void FUN_146d43334(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1404c8166(0,param_2,&local_e8);
  if (0 < (int)uStack_e0) {
    dVar1 = *(double *)(param_3 + 0x40);
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_3 + 0x50);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(local_e8 + lVar11 * 4);
      local_108 = &local_f4;
      local_110 = &local_f0;
      local_118 = &local_ec;
      FUN_1404c81ee(param_1,uVar4,param_3,local_d0);
      uVar8 = local_a8;
      uVar7 = local_f0;
      if (dVar1 * dVar2 * dVar3 < 0.0) {
        local_78 = local_a8;
        local_88 = local_b8;
        uVar9 = local_88;
        uStack_80 = uStack_b0;
        uVar10 = uStack_80;
        local_a8 = local_90;
        uVar5 = CONCAT44(uStack_9c,local_a0);
        uVar6 = CONCAT44(uStack_94,uStack_98);
        local_90 = uVar8;
        local_88._0_4_ = (undefined4)local_b8;
        local_88._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        uStack_80._0_4_ = (undefined4)uStack_b0;
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
        local_a0 = (undefined4)local_88;
        uStack_9c = local_88._4_4_;
        uStack_98 = (undefined4)uStack_80;
        uStack_94 = uStack_80._4_4_;
        local_f0 = local_f4;
        local_f4 = uVar7;
        local_b8 = uVar5;
        uStack_b0 = uVar6;
        local_88 = uVar9;
        uStack_80 = uVar10;
      }
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_f4);
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,local_f0);
      FUN_146d434c6(param_4,local_d0,uVar4,local_ec);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d434c6 FUN_146d434c6 body=205 status=ok
// SIG undefined FUN_146d434c6(void)

void FUN_146d434c6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cbc0fe(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1404c8cfb(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d43594 FUN_146d43594 body=184 status=ok
// SIG undefined FUN_146d43594(void)

void FUN_146d43594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d4364e(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4364e FUN_146d4364e body=401 status=ok
// SIG undefined FUN_146d4364e(void)

void FUN_146d4364e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1404c8166(0,param_2,&local_e8);
  if (0 < (int)uStack_e0) {
    dVar1 = *(double *)(param_3 + 0x40);
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_3 + 0x50);
    lVar11 = 0;
    do {
      uVar4 = *(undefined4 *)(local_e8 + lVar11 * 4);
      local_108 = &local_f4;
      local_110 = &local_f0;
      local_118 = &local_ec;
      FUN_1404c81ee(param_1,uVar4,param_3,local_d0);
      uVar8 = local_a8;
      uVar7 = local_f0;
      if (dVar1 * dVar2 * dVar3 < 0.0) {
        local_78 = local_a8;
        local_88 = local_b8;
        uVar9 = local_88;
        uStack_80 = uStack_b0;
        uVar10 = uStack_80;
        local_a8 = local_90;
        uVar5 = CONCAT44(uStack_9c,local_a0);
        uVar6 = CONCAT44(uStack_94,uStack_98);
        local_90 = uVar8;
        local_88._0_4_ = (undefined4)local_b8;
        local_88._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
        uStack_80._0_4_ = (undefined4)uStack_b0;
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
        local_a0 = (undefined4)local_88;
        uStack_9c = local_88._4_4_;
        uStack_98 = (undefined4)uStack_80;
        uStack_94 = uStack_80._4_4_;
        local_f0 = local_f4;
        local_f4 = uVar7;
        local_b8 = uVar5;
        uStack_b0 = uVar6;
        local_88 = uVar9;
        uStack_80 = uVar10;
      }
      local_110 = (undefined4 *)CONCAT44(local_110._4_4_,local_f4);
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,local_f0);
      FUN_146d437e0(param_4,local_d0,uVar4,local_ec);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_e0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d437e0 FUN_146d437e0 body=205 status=ok
// SIG undefined FUN_146d437e0(void)

void FUN_146d437e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cba588(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1449c6f44(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d438ae FUN_146d438ae body=104 status=ok
// SIG undefined FUN_146d438ae(void)

void FUN_146d438ae(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d43a88(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d439cc(param_1,param_2);
  return;
}



// FUNCTION 146d43916 FUN_146d43916 body=180 status=ok
// SIG undefined FUN_146d43916(void)

void FUN_146d43916(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404af629(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d439cc FUN_146d439cc body=188 status=ok
// SIG undefined FUN_146d439cc(void)

void FUN_146d439cc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d43a88(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d43a88(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d43a88 FUN_146d43a88 body=141 status=ok
// SIG undefined FUN_146d43a88(void)

void FUN_146d43a88(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d3e29e(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d43b16 FUN_146d43b16 body=104 status=ok
// SIG undefined FUN_146d43b16(void)

void FUN_146d43b16(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d43cf0(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d43c34(param_1,param_2);
  return;
}



// FUNCTION 146d43b7e FUN_146d43b7e body=180 status=ok
// SIG undefined FUN_146d43b7e(void)

void FUN_146d43b7e(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404b0df3(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d43c34 FUN_146d43c34 body=188 status=ok
// SIG undefined FUN_146d43c34(void)

void FUN_146d43c34(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d43cf0(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d43cf0(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d43cf0 FUN_146d43cf0 body=141 status=ok
// SIG undefined FUN_146d43cf0(void)

void FUN_146d43cf0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d3f9d0(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d43d7e FUN_146d43d7e body=104 status=ok
// SIG undefined FUN_146d43d7e(void)

void FUN_146d43d7e(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d43ea2(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d43de6(param_1,param_2);
  return;
}



// FUNCTION 146d43de6 FUN_146d43de6 body=188 status=ok
// SIG undefined FUN_146d43de6(void)

void FUN_146d43de6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d43ea2(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d43ea2(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d43ea2 FUN_146d43ea2 body=141 status=ok
// SIG undefined FUN_146d43ea2(void)

void FUN_146d43ea2(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d40d48(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d43f30 FUN_146d43f30 body=104 status=ok
// SIG undefined FUN_146d43f30(void)

void FUN_146d43f30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = 0x71;
      uVar1 = 0;
      do {
        FUN_146d4410a(param_2,param_1,uVar1 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar2) = 0;
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x78;
      } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x38));
    }
    return;
  }
  FUN_146d4404e(param_1,param_2);
  return;
}



// FUNCTION 146d43f98 FUN_146d43f98 body=180 status=ok
// SIG undefined FUN_146d43f98(void)

void FUN_146d43f98(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404aed4c(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4404e FUN_146d4404e body=188 status=ok
// SIG undefined FUN_146d4404e(void)

void FUN_146d4404e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    lVar4 = 0x71;
    uVar2 = 0;
    do {
      iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_146d4410a(param_2,param_1,uVar2 & 0xffffffff);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 0;
        iVar3 = *(int *)(param_1 + 0x38);
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar2 < (longlong)iVar3);
    if (0 < iVar3) {
      lVar4 = 0x71;
      uVar2 = 0;
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x30) + lVar4) == -1) &&
           (iVar1 = FUN_1404af102(param_1,uVar2 & 0xffffffff), iVar1 < 3)) {
          FUN_146d4410a(param_2,param_1,uVar2 & 0xffffffff);
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar4) = 1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x78;
      } while ((longlong)uVar2 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 146d4410a FUN_146d4410a body=141 status=ok
// SIG undefined FUN_146d4410a(void)

void FUN_146d4410a(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)param_1[4] = 0;
  local_40 = param_1[4];
  local_48 = param_1[3];
  FUN_146d42090(*param_1,param_1[2],param_2,param_3);
  local_30 = (undefined4 *)param_1[4] + 2;
  local_28 = *(undefined4 *)param_1[4];
  FUN_1404af8f0(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d44198 FUN_146d44198 body=184 status=ok
// SIG undefined FUN_146d44198(void)

void FUN_146d44198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d44252(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d44252 FUN_146d44252 body=2149 status=ok
// SIG undefined FUN_146d44252(void)

void FUN_146d44252(longlong param_1,undefined4 *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  double *local_248;
  double dStack_240;
  undefined8 local_230;
  undefined8 local_228;
  double dStack_220;
  double local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8 [6];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_230 = param_4;
  FUN_1401ad93c(local_1b8,&local_1b8,&local_198);
  if ((longlong)(int)uStack_190 != 0) {
    local_210 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) *
                *(double *)(param_1 + 0x60);
    piVar1 = local_198 + (longlong)(int)uStack_190 * 2;
    piVar36 = local_198;
    do {
      uVar29 = local_230;
      uVar6 = *(ushort *)(param_1 + 0x92);
      uVar32 = (uVar6 - 1) * piVar36[1] + *piVar36;
      if ((((int)uVar32 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar32)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar32) != -1)) {
        uVar35 = (uint)uVar6;
        iVar33 = piVar36[1] * uVar35 + *piVar36;
        dVar3 = *(double *)(param_1 + 0x80);
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar33;
        dVar45 = *(double *)(param_1 + 0xa0);
        lVar2 = (ulonglong)uVar6 + lVar30;
        dVar24 = (double)*(ushort *)(lVar31 + lVar30 * 2) * dVar45 + dVar3;
        dVar10 = (double)*(ushort *)(lVar31 + 2 + lVar30 * 2) * dVar45 + dVar3;
        dVar9 = (double)*(ushort *)(lVar31 + lVar2 * 2) * dVar45 + dVar3;
        dVar3 = (double)*(ushort *)(lVar31 + 2 + lVar2 * 2) * dVar45 + dVar3;
        dVar45 = dVar9;
        if (dVar3 <= dVar9) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar45 <= dVar10) {
          dVar4 = dVar45;
        }
        local_1e8[5] = dVar24;
        if (dVar4 <= dVar24) {
          local_1e8[5] = dVar4;
        }
        dVar45 = dVar9;
        if (dVar9 <= dVar3) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar10 <= dVar45) {
          dVar4 = dVar45;
        }
        dVar45 = dVar24;
        if (dVar24 <= dVar4) {
          dVar45 = dVar4;
        }
        dVar21 = *(double *)(param_1 + 0x50) * (double)(iVar33 % (int)uVar35);
        dVar23 = *(double *)(param_1 + 0x58) * (double)(iVar33 / (int)uVar35);
        dVar4 = *(double *)(param_1 + 0x60);
        dVar24 = dVar24 * dVar4;
        dVar20 = ((double)(iVar33 % (int)uVar35) + 1.0) * *(double *)(param_1 + 0x50);
        dVar43 = ((double)(iVar33 / (int)uVar35) + 1.0) * *(double *)(param_1 + 0x58);
        local_1e8[0] = dVar21;
        if (dVar20 <= dVar21) {
          local_1e8[0] = dVar20;
        }
        local_1e8[3] = dVar21;
        if (dVar21 <= dVar20) {
          local_1e8[3] = dVar20;
        }
        dVar10 = dVar10 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar45 = dVar45 * dVar4;
        local_1e8[5] = local_1e8[5] * dVar4;
        local_1e8[2] = local_1e8[5];
        if (dVar45 <= local_1e8[5]) {
          local_1e8[2] = dVar45;
        }
        if (local_1e8[5] <= dVar45) {
          local_1e8[5] = dVar45;
        }
        local_1e8[1] = dVar23;
        if (dVar43 <= dVar23) {
          local_1e8[1] = dVar43;
        }
        local_1e8[4] = dVar23;
        if (dVar23 <= dVar43) {
          local_1e8[4] = dVar43;
        }
        lVar31 = 0;
        do {
          if ((*(double *)(param_2 + lVar31 * 2 + 6) <= local_1e8[lVar31] &&
               local_1e8[lVar31] != *(double *)(param_2 + lVar31 * 2 + 6)) ||
             (local_1e8[lVar31 + 3] <= *(double *)(param_2 + lVar31 * 2) &&
              *(double *)(param_2 + lVar31 * 2) != local_1e8[lVar31 + 3])) goto LAB_146d44a10;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        dVar4 = param_3[3];
        dVar45 = param_3[3];
        dVar26 = *param_3;
        dVar27 = *(double *)*(undefined1 (*) [12])(param_3 + 1);
        auVar5 = *(undefined1 (*) [16])(param_3 + 2);
        auVar28 = *(undefined1 (*) [12])(param_3 + 1);
        dVar7 = auVar5._0_8_;
        auVar22._12_4_ = auVar5._4_4_;
        auVar22._0_12_ = auVar28;
        dVar12 = dVar23 * dVar26 - dVar21 * dVar27;
        dVar16 = dVar24 * dVar27 - dVar23 * dVar7;
        local_1f8._8_4_ = auVar5._8_4_;
        local_1f8._0_8_ = dVar26;
        local_1f8._12_4_ = auVar5._12_4_;
        dVar46 = dVar21 * dVar7 - dVar24 * dVar26;
        dVar16 = dVar16 + dVar16;
        dVar46 = dVar46 + dVar46;
        dVar12 = dVar12 + dVar12;
        auVar5._8_4_ = SUB84(dVar45,0);
        auVar5._0_8_ = dVar4;
        auVar5._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_208._0_8_ = auVar28._0_8_;
        local_208._8_8_ = auVar22._8_8_;
        dVar44 = (dVar12 * dVar27 - dVar46 * (double)local_208._8_8_) + dVar4 * dVar16 + dVar21;
        dStack_220 = (dVar7 * dVar16 - dVar26 * dVar12) + dVar45 * dVar46 + dVar23;
        dVar13 = dVar23 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar17 = dVar10 * dVar27 - dVar23 * (double)local_208._8_8_;
        dVar47 = dVar20 * dVar7 - dVar10 * dVar26;
        dStack_240 = auVar5._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar47 = dVar47 + dVar47;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar43 * dVar26 - dVar21 * (double)local_208._0_8_;
        dVar18 = dVar9 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar48 = dVar21 * dVar7 - dVar9 * dVar26;
        dVar18 = dVar18 + dVar18;
        dVar48 = dVar48 + dVar48;
        dVar14 = dVar14 + dVar14;
        dVar15 = dVar43 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar19 = dVar3 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar49 = dVar20 * dVar7 - dVar3 * dVar26;
        dVar19 = dVar19 + dVar19;
        dVar49 = dVar49 + dVar49;
        dVar15 = dVar15 + dVar15;
        dVar45 = param_3[4];
        dVar8 = param_3[5];
        local_188 = dVar44 + dVar45;
        dStack_180 = dStack_220 + dVar8;
        dVar11 = (dVar13 * dVar27 - dVar47 * (double)local_208._8_8_) + dVar4 * dVar17 + dVar20 +
                 dVar45;
        dVar23 = (dVar7 * dVar17 - dVar26 * dVar13) + dStack_240 * dVar47 + dVar23 + dVar8;
        uVar41 = SUB84(dVar23,0);
        uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar21 = (dVar14 * dVar27 - dVar48 * (double)local_208._8_8_) + dVar4 * dVar18 + dVar21 +
                 dVar45;
        dVar23 = (dVar7 * dVar18 - dVar26 * dVar14) + dStack_240 * dVar48 + dVar43 + dVar8;
        uVar39 = SUB84(dVar23,0);
        uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar45 = (dVar15 * dVar27 - dVar49 * (double)local_208._8_8_) + dVar4 * dVar19 + dVar20 +
                 dVar45;
        dVar8 = (dVar7 * dVar19 - dVar26 * dVar15) + dStack_240 * dVar49 + dVar43 + dVar8;
        uVar37 = SUB84(dVar8,0);
        uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_248 = param_3;
        local_148 = param_3[6];
        local_178 = dVar12 * dVar4 + dVar24 + (dVar46 * dVar26 - dVar16 * (double)local_208._0_8_) +
                    local_148;
        local_160 = dVar13 * dVar4 + dVar10 + (dVar47 * dVar26 - dVar17 * (double)local_208._0_8_) +
                    local_148;
        local_100 = dVar14 * dVar4 + dVar9 + (dVar48 * dVar26 - dVar18 * (double)local_208._0_8_) +
                    local_148;
        local_148 = dVar15 * dVar4 + dVar3 + (dVar49 * dVar26 - dVar19 * (double)local_208._0_8_) +
                    local_148;
        local_258 = iVar33 + 1;
        iVar25 = (int)lVar2;
        iVar34 = iVar25 + 1;
        local_228 = CONCAT44((int)((ulonglong)dVar44 >> 0x20),uVar32 * 2 + 1);
        local_208 = auVar22;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        if (0.0 <= local_210) {
          local_170._8_4_ = uVar41;
          local_170._0_8_ = dVar11;
          local_170._12_4_ = uVar42;
          local_158._8_4_ = uVar37;
          local_158._0_8_ = dVar45;
          local_158._12_4_ = uVar38;
          local_128._8_4_ = uVar37;
          local_128._0_8_ = dVar45;
          local_128._12_4_ = uVar38;
          local_110._8_4_ = uVar39;
          local_110._0_8_ = dVar21;
          local_110._12_4_ = uVar40;
          local_250 = iVar34;
          local_118 = local_148;
          FUN_146d44ab8(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar34;
          local_250 = iVar25;
        }
        else {
          local_170._8_4_ = uVar37;
          local_170._0_8_ = dVar45;
          local_170._12_4_ = uVar38;
          local_158._8_4_ = uVar41;
          local_158._0_8_ = dVar11;
          local_158._12_4_ = uVar42;
          local_128._8_4_ = uVar39;
          local_128._0_8_ = dVar21;
          local_128._12_4_ = uVar40;
          local_110._8_4_ = uVar37;
          local_110._0_8_ = dVar45;
          local_110._12_4_ = uVar38;
          local_250 = local_258;
          local_258 = iVar34;
          dVar3 = local_160;
          local_160 = local_148;
          dVar45 = local_148;
          local_148 = dVar3;
          local_118 = local_100;
          local_100 = dVar45;
          FUN_146d44ab8(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar25;
          local_250 = iVar34;
        }
        FUN_146d44ab8(uVar29,&local_140,local_228 & 0xffffffff,iVar33);
        param_3 = local_248;
      }
LAB_146d44a10:
      piVar36 = piVar36 + 2;
    } while (piVar36 != piVar1);
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d44ab8 FUN_146d44ab8 body=205 status=ok
// SIG undefined FUN_146d44ab8(void)

void FUN_146d44ab8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cbf627(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1449c90bb(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d44b86 FUN_146d44b86 body=184 status=ok
// SIG undefined FUN_146d44b86(void)

void FUN_146d44b86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d44c40(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d44c40 FUN_146d44c40 body=2149 status=ok
// SIG undefined FUN_146d44c40(void)

void FUN_146d44c40(longlong param_1,undefined4 *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  double *local_248;
  double dStack_240;
  undefined8 local_230;
  undefined8 local_228;
  double dStack_220;
  double local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8 [6];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_230 = param_4;
  FUN_1401ad93c(local_1b8,&local_1b8,&local_198);
  if ((longlong)(int)uStack_190 != 0) {
    local_210 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) *
                *(double *)(param_1 + 0x60);
    piVar1 = local_198 + (longlong)(int)uStack_190 * 2;
    piVar36 = local_198;
    do {
      uVar29 = local_230;
      uVar6 = *(ushort *)(param_1 + 0x92);
      uVar32 = (uVar6 - 1) * piVar36[1] + *piVar36;
      if ((((int)uVar32 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar32)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar32) != -1)) {
        uVar35 = (uint)uVar6;
        iVar33 = piVar36[1] * uVar35 + *piVar36;
        dVar3 = *(double *)(param_1 + 0x80);
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar33;
        dVar45 = *(double *)(param_1 + 0xa0);
        lVar2 = (ulonglong)uVar6 + lVar30;
        dVar24 = (double)*(ushort *)(lVar31 + lVar30 * 2) * dVar45 + dVar3;
        dVar10 = (double)*(ushort *)(lVar31 + 2 + lVar30 * 2) * dVar45 + dVar3;
        dVar9 = (double)*(ushort *)(lVar31 + lVar2 * 2) * dVar45 + dVar3;
        dVar3 = (double)*(ushort *)(lVar31 + 2 + lVar2 * 2) * dVar45 + dVar3;
        dVar45 = dVar9;
        if (dVar3 <= dVar9) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar45 <= dVar10) {
          dVar4 = dVar45;
        }
        local_1e8[5] = dVar24;
        if (dVar4 <= dVar24) {
          local_1e8[5] = dVar4;
        }
        dVar45 = dVar9;
        if (dVar9 <= dVar3) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar10 <= dVar45) {
          dVar4 = dVar45;
        }
        dVar45 = dVar24;
        if (dVar24 <= dVar4) {
          dVar45 = dVar4;
        }
        dVar21 = *(double *)(param_1 + 0x50) * (double)(iVar33 % (int)uVar35);
        dVar23 = *(double *)(param_1 + 0x58) * (double)(iVar33 / (int)uVar35);
        dVar4 = *(double *)(param_1 + 0x60);
        dVar24 = dVar24 * dVar4;
        dVar20 = ((double)(iVar33 % (int)uVar35) + 1.0) * *(double *)(param_1 + 0x50);
        dVar43 = ((double)(iVar33 / (int)uVar35) + 1.0) * *(double *)(param_1 + 0x58);
        local_1e8[0] = dVar21;
        if (dVar20 <= dVar21) {
          local_1e8[0] = dVar20;
        }
        local_1e8[3] = dVar21;
        if (dVar21 <= dVar20) {
          local_1e8[3] = dVar20;
        }
        dVar10 = dVar10 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar45 = dVar45 * dVar4;
        local_1e8[5] = local_1e8[5] * dVar4;
        local_1e8[2] = local_1e8[5];
        if (dVar45 <= local_1e8[5]) {
          local_1e8[2] = dVar45;
        }
        if (local_1e8[5] <= dVar45) {
          local_1e8[5] = dVar45;
        }
        local_1e8[1] = dVar23;
        if (dVar43 <= dVar23) {
          local_1e8[1] = dVar43;
        }
        local_1e8[4] = dVar23;
        if (dVar23 <= dVar43) {
          local_1e8[4] = dVar43;
        }
        lVar31 = 0;
        do {
          if ((*(double *)(param_2 + lVar31 * 2 + 6) <= local_1e8[lVar31] &&
               local_1e8[lVar31] != *(double *)(param_2 + lVar31 * 2 + 6)) ||
             (local_1e8[lVar31 + 3] <= *(double *)(param_2 + lVar31 * 2) &&
              *(double *)(param_2 + lVar31 * 2) != local_1e8[lVar31 + 3])) goto LAB_146d453fe;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        dVar4 = param_3[3];
        dVar45 = param_3[3];
        dVar26 = *param_3;
        dVar27 = *(double *)*(undefined1 (*) [12])(param_3 + 1);
        auVar5 = *(undefined1 (*) [16])(param_3 + 2);
        auVar28 = *(undefined1 (*) [12])(param_3 + 1);
        dVar7 = auVar5._0_8_;
        auVar22._12_4_ = auVar5._4_4_;
        auVar22._0_12_ = auVar28;
        dVar12 = dVar23 * dVar26 - dVar21 * dVar27;
        dVar16 = dVar24 * dVar27 - dVar23 * dVar7;
        local_1f8._8_4_ = auVar5._8_4_;
        local_1f8._0_8_ = dVar26;
        local_1f8._12_4_ = auVar5._12_4_;
        dVar46 = dVar21 * dVar7 - dVar24 * dVar26;
        dVar16 = dVar16 + dVar16;
        dVar46 = dVar46 + dVar46;
        dVar12 = dVar12 + dVar12;
        auVar5._8_4_ = SUB84(dVar45,0);
        auVar5._0_8_ = dVar4;
        auVar5._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_208._0_8_ = auVar28._0_8_;
        local_208._8_8_ = auVar22._8_8_;
        dVar44 = (dVar12 * dVar27 - dVar46 * (double)local_208._8_8_) + dVar4 * dVar16 + dVar21;
        dStack_220 = (dVar7 * dVar16 - dVar26 * dVar12) + dVar45 * dVar46 + dVar23;
        dVar13 = dVar23 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar17 = dVar10 * dVar27 - dVar23 * (double)local_208._8_8_;
        dVar47 = dVar20 * dVar7 - dVar10 * dVar26;
        dStack_240 = auVar5._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar47 = dVar47 + dVar47;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar43 * dVar26 - dVar21 * (double)local_208._0_8_;
        dVar18 = dVar9 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar48 = dVar21 * dVar7 - dVar9 * dVar26;
        dVar18 = dVar18 + dVar18;
        dVar48 = dVar48 + dVar48;
        dVar14 = dVar14 + dVar14;
        dVar15 = dVar43 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar19 = dVar3 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar49 = dVar20 * dVar7 - dVar3 * dVar26;
        dVar19 = dVar19 + dVar19;
        dVar49 = dVar49 + dVar49;
        dVar15 = dVar15 + dVar15;
        dVar45 = param_3[4];
        dVar8 = param_3[5];
        local_188 = dVar44 + dVar45;
        dStack_180 = dStack_220 + dVar8;
        dVar11 = (dVar13 * dVar27 - dVar47 * (double)local_208._8_8_) + dVar4 * dVar17 + dVar20 +
                 dVar45;
        dVar23 = (dVar7 * dVar17 - dVar26 * dVar13) + dStack_240 * dVar47 + dVar23 + dVar8;
        uVar41 = SUB84(dVar23,0);
        uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar21 = (dVar14 * dVar27 - dVar48 * (double)local_208._8_8_) + dVar4 * dVar18 + dVar21 +
                 dVar45;
        dVar23 = (dVar7 * dVar18 - dVar26 * dVar14) + dStack_240 * dVar48 + dVar43 + dVar8;
        uVar39 = SUB84(dVar23,0);
        uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar45 = (dVar15 * dVar27 - dVar49 * (double)local_208._8_8_) + dVar4 * dVar19 + dVar20 +
                 dVar45;
        dVar8 = (dVar7 * dVar19 - dVar26 * dVar15) + dStack_240 * dVar49 + dVar43 + dVar8;
        uVar37 = SUB84(dVar8,0);
        uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_248 = param_3;
        local_148 = param_3[6];
        local_178 = dVar12 * dVar4 + dVar24 + (dVar46 * dVar26 - dVar16 * (double)local_208._0_8_) +
                    local_148;
        local_160 = dVar13 * dVar4 + dVar10 + (dVar47 * dVar26 - dVar17 * (double)local_208._0_8_) +
                    local_148;
        local_100 = dVar14 * dVar4 + dVar9 + (dVar48 * dVar26 - dVar18 * (double)local_208._0_8_) +
                    local_148;
        local_148 = dVar15 * dVar4 + dVar3 + (dVar49 * dVar26 - dVar19 * (double)local_208._0_8_) +
                    local_148;
        local_258 = iVar33 + 1;
        iVar25 = (int)lVar2;
        iVar34 = iVar25 + 1;
        local_228 = CONCAT44((int)((ulonglong)dVar44 >> 0x20),uVar32 * 2 + 1);
        local_208 = auVar22;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        if (0.0 <= local_210) {
          local_170._8_4_ = uVar41;
          local_170._0_8_ = dVar11;
          local_170._12_4_ = uVar42;
          local_158._8_4_ = uVar37;
          local_158._0_8_ = dVar45;
          local_158._12_4_ = uVar38;
          local_128._8_4_ = uVar37;
          local_128._0_8_ = dVar45;
          local_128._12_4_ = uVar38;
          local_110._8_4_ = uVar39;
          local_110._0_8_ = dVar21;
          local_110._12_4_ = uVar40;
          local_250 = iVar34;
          local_118 = local_148;
          FUN_146d454a6(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar34;
          local_250 = iVar25;
        }
        else {
          local_170._8_4_ = uVar37;
          local_170._0_8_ = dVar45;
          local_170._12_4_ = uVar38;
          local_158._8_4_ = uVar41;
          local_158._0_8_ = dVar11;
          local_158._12_4_ = uVar42;
          local_128._8_4_ = uVar39;
          local_128._0_8_ = dVar21;
          local_128._12_4_ = uVar40;
          local_110._8_4_ = uVar37;
          local_110._0_8_ = dVar45;
          local_110._12_4_ = uVar38;
          local_250 = local_258;
          local_258 = iVar34;
          dVar3 = local_160;
          local_160 = local_148;
          dVar45 = local_148;
          local_148 = dVar3;
          local_118 = local_100;
          local_100 = dVar45;
          FUN_146d454a6(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar25;
          local_250 = iVar34;
        }
        FUN_146d454a6(uVar29,&local_140,local_228 & 0xffffffff,iVar33);
        param_3 = local_248;
      }
LAB_146d453fe:
      piVar36 = piVar36 + 2;
    } while (piVar36 != piVar1);
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d454a6 FUN_146d454a6 body=205 status=ok
// SIG undefined FUN_146d454a6(void)

void FUN_146d454a6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cbdae1(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1404c02c0(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d45574 FUN_146d45574 body=184 status=ok
// SIG undefined FUN_146d45574(void)

void FUN_146d45574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d4562e(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4562e FUN_146d4562e body=2149 status=ok
// SIG undefined FUN_146d4562e(void)

void FUN_146d4562e(longlong param_1,undefined4 *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  double *local_248;
  double dStack_240;
  undefined8 local_230;
  undefined8 local_228;
  double dStack_220;
  double local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8 [6];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_230 = param_4;
  FUN_1401ad93c(local_1b8,&local_1b8,&local_198);
  if ((longlong)(int)uStack_190 != 0) {
    local_210 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) *
                *(double *)(param_1 + 0x60);
    piVar1 = local_198 + (longlong)(int)uStack_190 * 2;
    piVar36 = local_198;
    do {
      uVar29 = local_230;
      uVar6 = *(ushort *)(param_1 + 0x92);
      uVar32 = (uVar6 - 1) * piVar36[1] + *piVar36;
      if ((((int)uVar32 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar32)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar32) != -1)) {
        uVar35 = (uint)uVar6;
        iVar33 = piVar36[1] * uVar35 + *piVar36;
        dVar3 = *(double *)(param_1 + 0x80);
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar33;
        dVar45 = *(double *)(param_1 + 0xa0);
        lVar2 = (ulonglong)uVar6 + lVar30;
        dVar24 = (double)*(ushort *)(lVar31 + lVar30 * 2) * dVar45 + dVar3;
        dVar10 = (double)*(ushort *)(lVar31 + 2 + lVar30 * 2) * dVar45 + dVar3;
        dVar9 = (double)*(ushort *)(lVar31 + lVar2 * 2) * dVar45 + dVar3;
        dVar3 = (double)*(ushort *)(lVar31 + 2 + lVar2 * 2) * dVar45 + dVar3;
        dVar45 = dVar9;
        if (dVar3 <= dVar9) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar45 <= dVar10) {
          dVar4 = dVar45;
        }
        local_1e8[5] = dVar24;
        if (dVar4 <= dVar24) {
          local_1e8[5] = dVar4;
        }
        dVar45 = dVar9;
        if (dVar9 <= dVar3) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar10 <= dVar45) {
          dVar4 = dVar45;
        }
        dVar45 = dVar24;
        if (dVar24 <= dVar4) {
          dVar45 = dVar4;
        }
        dVar21 = *(double *)(param_1 + 0x50) * (double)(iVar33 % (int)uVar35);
        dVar23 = *(double *)(param_1 + 0x58) * (double)(iVar33 / (int)uVar35);
        dVar4 = *(double *)(param_1 + 0x60);
        dVar24 = dVar24 * dVar4;
        dVar20 = ((double)(iVar33 % (int)uVar35) + 1.0) * *(double *)(param_1 + 0x50);
        dVar43 = ((double)(iVar33 / (int)uVar35) + 1.0) * *(double *)(param_1 + 0x58);
        local_1e8[0] = dVar21;
        if (dVar20 <= dVar21) {
          local_1e8[0] = dVar20;
        }
        local_1e8[3] = dVar21;
        if (dVar21 <= dVar20) {
          local_1e8[3] = dVar20;
        }
        dVar10 = dVar10 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar45 = dVar45 * dVar4;
        local_1e8[5] = local_1e8[5] * dVar4;
        local_1e8[2] = local_1e8[5];
        if (dVar45 <= local_1e8[5]) {
          local_1e8[2] = dVar45;
        }
        if (local_1e8[5] <= dVar45) {
          local_1e8[5] = dVar45;
        }
        local_1e8[1] = dVar23;
        if (dVar43 <= dVar23) {
          local_1e8[1] = dVar43;
        }
        local_1e8[4] = dVar23;
        if (dVar23 <= dVar43) {
          local_1e8[4] = dVar43;
        }
        lVar31 = 0;
        do {
          if ((*(double *)(param_2 + lVar31 * 2 + 6) <= local_1e8[lVar31] &&
               local_1e8[lVar31] != *(double *)(param_2 + lVar31 * 2 + 6)) ||
             (local_1e8[lVar31 + 3] <= *(double *)(param_2 + lVar31 * 2) &&
              *(double *)(param_2 + lVar31 * 2) != local_1e8[lVar31 + 3])) goto LAB_146d45dec;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        dVar4 = param_3[3];
        dVar45 = param_3[3];
        dVar26 = *param_3;
        dVar27 = *(double *)*(undefined1 (*) [12])(param_3 + 1);
        auVar5 = *(undefined1 (*) [16])(param_3 + 2);
        auVar28 = *(undefined1 (*) [12])(param_3 + 1);
        dVar7 = auVar5._0_8_;
        auVar22._12_4_ = auVar5._4_4_;
        auVar22._0_12_ = auVar28;
        dVar12 = dVar23 * dVar26 - dVar21 * dVar27;
        dVar16 = dVar24 * dVar27 - dVar23 * dVar7;
        local_1f8._8_4_ = auVar5._8_4_;
        local_1f8._0_8_ = dVar26;
        local_1f8._12_4_ = auVar5._12_4_;
        dVar46 = dVar21 * dVar7 - dVar24 * dVar26;
        dVar16 = dVar16 + dVar16;
        dVar46 = dVar46 + dVar46;
        dVar12 = dVar12 + dVar12;
        auVar5._8_4_ = SUB84(dVar45,0);
        auVar5._0_8_ = dVar4;
        auVar5._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_208._0_8_ = auVar28._0_8_;
        local_208._8_8_ = auVar22._8_8_;
        dVar44 = (dVar12 * dVar27 - dVar46 * (double)local_208._8_8_) + dVar4 * dVar16 + dVar21;
        dStack_220 = (dVar7 * dVar16 - dVar26 * dVar12) + dVar45 * dVar46 + dVar23;
        dVar13 = dVar23 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar17 = dVar10 * dVar27 - dVar23 * (double)local_208._8_8_;
        dVar47 = dVar20 * dVar7 - dVar10 * dVar26;
        dStack_240 = auVar5._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar47 = dVar47 + dVar47;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar43 * dVar26 - dVar21 * (double)local_208._0_8_;
        dVar18 = dVar9 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar48 = dVar21 * dVar7 - dVar9 * dVar26;
        dVar18 = dVar18 + dVar18;
        dVar48 = dVar48 + dVar48;
        dVar14 = dVar14 + dVar14;
        dVar15 = dVar43 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar19 = dVar3 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar49 = dVar20 * dVar7 - dVar3 * dVar26;
        dVar19 = dVar19 + dVar19;
        dVar49 = dVar49 + dVar49;
        dVar15 = dVar15 + dVar15;
        dVar45 = param_3[4];
        dVar8 = param_3[5];
        local_188 = dVar44 + dVar45;
        dStack_180 = dStack_220 + dVar8;
        dVar11 = (dVar13 * dVar27 - dVar47 * (double)local_208._8_8_) + dVar4 * dVar17 + dVar20 +
                 dVar45;
        dVar23 = (dVar7 * dVar17 - dVar26 * dVar13) + dStack_240 * dVar47 + dVar23 + dVar8;
        uVar41 = SUB84(dVar23,0);
        uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar21 = (dVar14 * dVar27 - dVar48 * (double)local_208._8_8_) + dVar4 * dVar18 + dVar21 +
                 dVar45;
        dVar23 = (dVar7 * dVar18 - dVar26 * dVar14) + dStack_240 * dVar48 + dVar43 + dVar8;
        uVar39 = SUB84(dVar23,0);
        uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar45 = (dVar15 * dVar27 - dVar49 * (double)local_208._8_8_) + dVar4 * dVar19 + dVar20 +
                 dVar45;
        dVar8 = (dVar7 * dVar19 - dVar26 * dVar15) + dStack_240 * dVar49 + dVar43 + dVar8;
        uVar37 = SUB84(dVar8,0);
        uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_248 = param_3;
        local_148 = param_3[6];
        local_178 = dVar12 * dVar4 + dVar24 + (dVar46 * dVar26 - dVar16 * (double)local_208._0_8_) +
                    local_148;
        local_160 = dVar13 * dVar4 + dVar10 + (dVar47 * dVar26 - dVar17 * (double)local_208._0_8_) +
                    local_148;
        local_100 = dVar14 * dVar4 + dVar9 + (dVar48 * dVar26 - dVar18 * (double)local_208._0_8_) +
                    local_148;
        local_148 = dVar15 * dVar4 + dVar3 + (dVar49 * dVar26 - dVar19 * (double)local_208._0_8_) +
                    local_148;
        local_258 = iVar33 + 1;
        iVar25 = (int)lVar2;
        iVar34 = iVar25 + 1;
        local_228 = CONCAT44((int)((ulonglong)dVar44 >> 0x20),uVar32 * 2 + 1);
        local_208 = auVar22;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        if (0.0 <= local_210) {
          local_170._8_4_ = uVar41;
          local_170._0_8_ = dVar11;
          local_170._12_4_ = uVar42;
          local_158._8_4_ = uVar37;
          local_158._0_8_ = dVar45;
          local_158._12_4_ = uVar38;
          local_128._8_4_ = uVar37;
          local_128._0_8_ = dVar45;
          local_128._12_4_ = uVar38;
          local_110._8_4_ = uVar39;
          local_110._0_8_ = dVar21;
          local_110._12_4_ = uVar40;
          local_250 = iVar34;
          local_118 = local_148;
          FUN_146d45e94(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar34;
          local_250 = iVar25;
        }
        else {
          local_170._8_4_ = uVar37;
          local_170._0_8_ = dVar45;
          local_170._12_4_ = uVar38;
          local_158._8_4_ = uVar41;
          local_158._0_8_ = dVar11;
          local_158._12_4_ = uVar42;
          local_128._8_4_ = uVar39;
          local_128._0_8_ = dVar21;
          local_128._12_4_ = uVar40;
          local_110._8_4_ = uVar37;
          local_110._0_8_ = dVar45;
          local_110._12_4_ = uVar38;
          local_250 = local_258;
          local_258 = iVar34;
          dVar3 = local_160;
          local_160 = local_148;
          dVar45 = local_148;
          local_148 = dVar3;
          local_118 = local_100;
          local_100 = dVar45;
          FUN_146d45e94(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar25;
          local_250 = iVar34;
        }
        FUN_146d45e94(uVar29,&local_140,local_228 & 0xffffffff,iVar33);
        param_3 = local_248;
      }
LAB_146d45dec:
      piVar36 = piVar36 + 2;
    } while (piVar36 != piVar1);
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d45e94 FUN_146d45e94 body=205 status=ok
// SIG undefined FUN_146d45e94(void)

void FUN_146d45e94(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cbc0fe(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1404c8cfb(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d45f62 FUN_146d45f62 body=184 status=ok
// SIG undefined FUN_146d45f62(void)

void FUN_146d45f62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_1c8 [40];
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined4 local_180 [90];
  ulonglong local_18;
  
  uVar1 = param_6;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_180[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_180 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_1a0 = local_180;
  local_190 = (undefined1  [8])&param_5;
  local_188 = param_6;
  local_198 = param_1;
  FUN_146d4601c(param_2,param_3,param_4);
  FUN_146d4e05e(uVar1,param_4);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4601c FUN_146d4601c body=2149 status=ok
// SIG undefined FUN_146d4601c(void)

void FUN_146d4601c(longlong param_1,undefined4 *param_2,double *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int *piVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_278 [32];
  int local_258;
  int local_250;
  double *local_248;
  double dStack_240;
  undefined8 local_230;
  undefined8 local_228;
  double dStack_220;
  double local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8 [6];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  int *local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined1 local_170 [16];
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_110 [16];
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 6);
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  local_198 = (int *)0x0;
  uStack_190 = 0;
  local_230 = param_4;
  FUN_1401ad93c(local_1b8,&local_1b8,&local_198);
  if ((longlong)(int)uStack_190 != 0) {
    local_210 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x58) *
                *(double *)(param_1 + 0x60);
    piVar1 = local_198 + (longlong)(int)uStack_190 * 2;
    piVar36 = local_198;
    do {
      uVar29 = local_230;
      uVar6 = *(ushort *)(param_1 + 0x92);
      uVar32 = (uVar6 - 1) * piVar36[1] + *piVar36;
      if ((((int)uVar32 < 0) || (*(int *)(param_1 + 0x48) <= (int)uVar32)) ||
         (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar32) != -1)) {
        uVar35 = (uint)uVar6;
        iVar33 = piVar36[1] * uVar35 + *piVar36;
        dVar3 = *(double *)(param_1 + 0x80);
        lVar31 = *(longlong *)(param_1 + 0x20);
        lVar30 = (longlong)iVar33;
        dVar45 = *(double *)(param_1 + 0xa0);
        lVar2 = (ulonglong)uVar6 + lVar30;
        dVar24 = (double)*(ushort *)(lVar31 + lVar30 * 2) * dVar45 + dVar3;
        dVar10 = (double)*(ushort *)(lVar31 + 2 + lVar30 * 2) * dVar45 + dVar3;
        dVar9 = (double)*(ushort *)(lVar31 + lVar2 * 2) * dVar45 + dVar3;
        dVar3 = (double)*(ushort *)(lVar31 + 2 + lVar2 * 2) * dVar45 + dVar3;
        dVar45 = dVar9;
        if (dVar3 <= dVar9) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar45 <= dVar10) {
          dVar4 = dVar45;
        }
        local_1e8[5] = dVar24;
        if (dVar4 <= dVar24) {
          local_1e8[5] = dVar4;
        }
        dVar45 = dVar9;
        if (dVar9 <= dVar3) {
          dVar45 = dVar3;
        }
        dVar4 = dVar10;
        if (dVar10 <= dVar45) {
          dVar4 = dVar45;
        }
        dVar45 = dVar24;
        if (dVar24 <= dVar4) {
          dVar45 = dVar4;
        }
        dVar21 = *(double *)(param_1 + 0x50) * (double)(iVar33 % (int)uVar35);
        dVar23 = *(double *)(param_1 + 0x58) * (double)(iVar33 / (int)uVar35);
        dVar4 = *(double *)(param_1 + 0x60);
        dVar24 = dVar24 * dVar4;
        dVar20 = ((double)(iVar33 % (int)uVar35) + 1.0) * *(double *)(param_1 + 0x50);
        dVar43 = ((double)(iVar33 / (int)uVar35) + 1.0) * *(double *)(param_1 + 0x58);
        local_1e8[0] = dVar21;
        if (dVar20 <= dVar21) {
          local_1e8[0] = dVar20;
        }
        local_1e8[3] = dVar21;
        if (dVar21 <= dVar20) {
          local_1e8[3] = dVar20;
        }
        dVar10 = dVar10 * dVar4;
        dVar9 = dVar9 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar45 = dVar45 * dVar4;
        local_1e8[5] = local_1e8[5] * dVar4;
        local_1e8[2] = local_1e8[5];
        if (dVar45 <= local_1e8[5]) {
          local_1e8[2] = dVar45;
        }
        if (local_1e8[5] <= dVar45) {
          local_1e8[5] = dVar45;
        }
        local_1e8[1] = dVar23;
        if (dVar43 <= dVar23) {
          local_1e8[1] = dVar43;
        }
        local_1e8[4] = dVar23;
        if (dVar23 <= dVar43) {
          local_1e8[4] = dVar43;
        }
        lVar31 = 0;
        do {
          if ((*(double *)(param_2 + lVar31 * 2 + 6) <= local_1e8[lVar31] &&
               local_1e8[lVar31] != *(double *)(param_2 + lVar31 * 2 + 6)) ||
             (local_1e8[lVar31 + 3] <= *(double *)(param_2 + lVar31 * 2) &&
              *(double *)(param_2 + lVar31 * 2) != local_1e8[lVar31 + 3])) goto LAB_146d467da;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 3);
        dVar4 = param_3[3];
        dVar45 = param_3[3];
        dVar26 = *param_3;
        dVar27 = *(double *)*(undefined1 (*) [12])(param_3 + 1);
        auVar5 = *(undefined1 (*) [16])(param_3 + 2);
        auVar28 = *(undefined1 (*) [12])(param_3 + 1);
        dVar7 = auVar5._0_8_;
        auVar22._12_4_ = auVar5._4_4_;
        auVar22._0_12_ = auVar28;
        dVar12 = dVar23 * dVar26 - dVar21 * dVar27;
        dVar16 = dVar24 * dVar27 - dVar23 * dVar7;
        local_1f8._8_4_ = auVar5._8_4_;
        local_1f8._0_8_ = dVar26;
        local_1f8._12_4_ = auVar5._12_4_;
        dVar46 = dVar21 * dVar7 - dVar24 * dVar26;
        dVar16 = dVar16 + dVar16;
        dVar46 = dVar46 + dVar46;
        dVar12 = dVar12 + dVar12;
        auVar5._8_4_ = SUB84(dVar45,0);
        auVar5._0_8_ = dVar4;
        auVar5._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        local_208._0_8_ = auVar28._0_8_;
        local_208._8_8_ = auVar22._8_8_;
        dVar44 = (dVar12 * dVar27 - dVar46 * (double)local_208._8_8_) + dVar4 * dVar16 + dVar21;
        dStack_220 = (dVar7 * dVar16 - dVar26 * dVar12) + dVar45 * dVar46 + dVar23;
        dVar13 = dVar23 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar17 = dVar10 * dVar27 - dVar23 * (double)local_208._8_8_;
        dVar47 = dVar20 * dVar7 - dVar10 * dVar26;
        dStack_240 = auVar5._8_8_;
        dVar17 = dVar17 + dVar17;
        dVar47 = dVar47 + dVar47;
        dVar13 = dVar13 + dVar13;
        dVar14 = dVar43 * dVar26 - dVar21 * (double)local_208._0_8_;
        dVar18 = dVar9 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar48 = dVar21 * dVar7 - dVar9 * dVar26;
        dVar18 = dVar18 + dVar18;
        dVar48 = dVar48 + dVar48;
        dVar14 = dVar14 + dVar14;
        dVar15 = dVar43 * dVar26 - dVar20 * (double)local_208._0_8_;
        dVar19 = dVar3 * dVar27 - dVar43 * (double)local_208._8_8_;
        dVar49 = dVar20 * dVar7 - dVar3 * dVar26;
        dVar19 = dVar19 + dVar19;
        dVar49 = dVar49 + dVar49;
        dVar15 = dVar15 + dVar15;
        dVar45 = param_3[4];
        dVar8 = param_3[5];
        local_188 = dVar44 + dVar45;
        dStack_180 = dStack_220 + dVar8;
        dVar11 = (dVar13 * dVar27 - dVar47 * (double)local_208._8_8_) + dVar4 * dVar17 + dVar20 +
                 dVar45;
        dVar23 = (dVar7 * dVar17 - dVar26 * dVar13) + dStack_240 * dVar47 + dVar23 + dVar8;
        uVar41 = SUB84(dVar23,0);
        uVar42 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar21 = (dVar14 * dVar27 - dVar48 * (double)local_208._8_8_) + dVar4 * dVar18 + dVar21 +
                 dVar45;
        dVar23 = (dVar7 * dVar18 - dVar26 * dVar14) + dStack_240 * dVar48 + dVar43 + dVar8;
        uVar39 = SUB84(dVar23,0);
        uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar45 = (dVar15 * dVar27 - dVar49 * (double)local_208._8_8_) + dVar4 * dVar19 + dVar20 +
                 dVar45;
        dVar8 = (dVar7 * dVar19 - dVar26 * dVar15) + dStack_240 * dVar49 + dVar43 + dVar8;
        uVar37 = SUB84(dVar8,0);
        uVar38 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_248 = param_3;
        local_148 = param_3[6];
        local_178 = dVar12 * dVar4 + dVar24 + (dVar46 * dVar26 - dVar16 * (double)local_208._0_8_) +
                    local_148;
        local_160 = dVar13 * dVar4 + dVar10 + (dVar47 * dVar26 - dVar17 * (double)local_208._0_8_) +
                    local_148;
        local_100 = dVar14 * dVar4 + dVar9 + (dVar48 * dVar26 - dVar18 * (double)local_208._0_8_) +
                    local_148;
        local_148 = dVar15 * dVar4 + dVar3 + (dVar49 * dVar26 - dVar19 * (double)local_208._0_8_) +
                    local_148;
        local_258 = iVar33 + 1;
        iVar25 = (int)lVar2;
        iVar34 = iVar25 + 1;
        local_228 = CONCAT44((int)((ulonglong)dVar44 >> 0x20),uVar32 * 2 + 1);
        local_208 = auVar22;
        local_140 = local_188;
        dStack_138 = dStack_180;
        local_130 = local_178;
        if (0.0 <= local_210) {
          local_170._8_4_ = uVar41;
          local_170._0_8_ = dVar11;
          local_170._12_4_ = uVar42;
          local_158._8_4_ = uVar37;
          local_158._0_8_ = dVar45;
          local_158._12_4_ = uVar38;
          local_128._8_4_ = uVar37;
          local_128._0_8_ = dVar45;
          local_128._12_4_ = uVar38;
          local_110._8_4_ = uVar39;
          local_110._0_8_ = dVar21;
          local_110._12_4_ = uVar40;
          local_250 = iVar34;
          local_118 = local_148;
          FUN_146d46882(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar34;
          local_250 = iVar25;
        }
        else {
          local_170._8_4_ = uVar37;
          local_170._0_8_ = dVar45;
          local_170._12_4_ = uVar38;
          local_158._8_4_ = uVar41;
          local_158._0_8_ = dVar11;
          local_158._12_4_ = uVar42;
          local_128._8_4_ = uVar39;
          local_128._0_8_ = dVar21;
          local_128._12_4_ = uVar40;
          local_110._8_4_ = uVar37;
          local_110._0_8_ = dVar45;
          local_110._12_4_ = uVar38;
          local_250 = local_258;
          local_258 = iVar34;
          dVar3 = local_160;
          local_160 = local_148;
          dVar45 = local_148;
          local_148 = dVar3;
          local_118 = local_100;
          local_100 = dVar45;
          FUN_146d46882(local_230,&local_188,uVar32 * 2,iVar33);
          local_258 = iVar25;
          local_250 = iVar34;
        }
        FUN_146d46882(uVar29,&local_140,local_228 & 0xffffffff,iVar33);
        param_3 = local_248;
      }
LAB_146d467da:
      piVar36 = piVar36 + 2;
    } while (piVar36 != piVar1);
  }
  if (local_198 != (int *)0x0) {
    FUN_1400020a8(local_198);
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d46882 FUN_146d46882 body=205 status=ok
// SIG undefined FUN_146d46882(void)

void FUN_146d46882(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)*param_1 = 0;
  if (DAT_14c75f054 == 0) {
    FUN_146cba588(param_1[1],param_2,*(undefined8 *)param_1[2],*param_1);
  }
  else {
    FUN_1449c6f44(param_1[1],param_2);
  }
  iVar1 = *(int *)*param_1;
  if (0 < iVar1) {
    local_40 = *(undefined8 *)param_1[2];
    local_38 = (int *)*param_1 + 2;
    local_48 = param_6;
    local_50 = param_5;
    local_58 = param_4;
    local_30 = iVar1;
    FUN_146d3c006(param_1[3],&local_38,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d46950 FUN_146d46950 body=1078 status=ok
// SIG undefined FUN_146d46950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d46950(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
  local_e8 = FUN_1406863dc;
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



// FUNCTION 146d46d88 FUN_146d46d88 body=518 status=ok
// SIG undefined FUN_146d46d88(void)

void FUN_146d46d88(double *param_1,longlong *param_2,double *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  dVar10 = 1.0;
  dVar9 = 0.0;
  if (param_2 == (longlong *)0x0) {
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
    uVar17 = 0;
    uVar18 = 0;
  }
  else {
    dVar11 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
    uVar17 = 0;
    uVar18 = 0;
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      lVar3 = *param_2;
      lVar7 = (longlong)(int)param_2[1];
      cVar2 = *(char *)(*(longlong *)(lVar3 + 0x2c0) + 0xb + lVar7 * 0x10);
      if ((cVar2 == '\x04') || (cVar2 == '\x01')) {
        lVar4 = *(longlong *)(lVar3 + 0x3f8);
        lVar8 = lVar7 * 0x20;
        dVar9 = *(double *)(lVar4 + lVar8);
        dVar11 = *(double *)(lVar4 + 8 + lVar8);
        dVar12 = *(double *)(lVar4 + 0x10 + lVar8);
        dVar10 = *(double *)(lVar4 + 0x18 + lVar8);
      }
      else {
        dVar10 = 1.0;
      }
      if ((cVar2 == '\x04') || (cVar2 == '\x01')) {
        lVar3 = *(longlong *)(lVar3 + 0x3e0);
        uVar1 = *(undefined8 *)(lVar3 + lVar7 * 0x18);
        uVar17 = (undefined4)uVar1;
        uVar18 = (undefined4)((ulonglong)uVar1 >> 0x20);
        dVar15 = *(double *)(lVar3 + 8 + lVar7 * 0x18);
        dVar13 = *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
      }
    }
  }
  dVar13 = param_3[2] - dVar13;
  dVar5 = *param_3 - (double)CONCAT44(uVar18,uVar17);
  dVar15 = param_3[1] - dVar15;
  dVar14 = dVar11 * dVar5 - dVar9 * dVar15;
  dVar16 = dVar9 * dVar13 - dVar12 * dVar5;
  dVar6 = dVar12 * dVar15 - dVar11 * dVar13;
  dVar14 = dVar14 + dVar14;
  dVar16 = dVar16 + dVar16;
  dVar6 = dVar6 + dVar6;
  *param_1 = (dVar16 * dVar12 - dVar14 * dVar11) + dVar10 * dVar6 + dVar5;
  param_1[1] = (dVar9 * dVar14 - dVar6 * dVar12) + dVar10 * dVar16 + dVar15;
  param_1[2] = (dVar11 * dVar6 - dVar9 * dVar16) + dVar10 * dVar14 + dVar13;
  return;
}



// FUNCTION 146d46f8e FUN_146d46f8e body=73 status=ok
// SIG undefined FUN_146d46f8e(void)

longlong FUN_146d46f8e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    cVar1 = *(char *)(*(longlong *)(*param_1 + 0x2c0) + 0xb + (longlong)(int)param_1[1] * 0x10);
    lVar2 = 0x530;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) goto LAB_146d46fca;
  }
  lVar2 = 0x28;
LAB_146d46fca:
  return (longlong)(int)param_1[1] * 0x18 + *(longlong *)(*param_1 + lVar2);
}



// FUNCTION 146d47070 FUN_146d47070 body=109 status=ok
// SIG undefined FUN_146d47070(void)

undefined8
FUN_146d47070(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_5;
  local_38 = param_4;
  FUN_1449cbad8(param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d470de FUN_146d470de body=109 status=ok
// SIG undefined FUN_146d470de(void)

undefined8
FUN_146d470de(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_5;
  local_38 = param_4;
  FUN_1449c37f8(param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d4714c FUN_146d4714c body=109 status=ok
// SIG undefined FUN_146d4714c(void)

undefined8
FUN_146d4714c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  local_30 = param_5;
  local_38 = param_4;
  FUN_1449cbc5a(param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d471ba FUN_146d471ba body=1294 status=ok
// SIG undefined FUN_146d471ba(void)

void FUN_146d471ba(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_378 [40];
  longlong local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  uVar18 = *(uint *)(param_1 + 0x38);
  if ((ulonglong)uVar18 != 0) {
    if (1 < (int)uVar18) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      local_350 = param_1;
      memset(local_338,0,0x2f0);
      local_340 = lVar4 + (ulonglong)uVar18 * 8 + -8;
      local_348 = lVar4;
      fVar25 = logf((float)(int)uVar18);
      local_338[0] = (int)(longlong)(fVar25 + fVar25);
      plVar5 = &local_348;
      do {
        plVar6 = (longlong *)*plVar5;
        plVar7 = (longlong *)plVar5[1];
        iVar14 = (int)plVar5[2];
        iVar10 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar6) >> 3);
        uVar19 = (ulonglong)(iVar10 + 1);
        plVar12 = plVar7;
        plVar22 = plVar6;
        if (iVar14 != 0) {
LAB_146d47265:
          plVar9 = plVar6;
          if (8 < (int)(uint)uVar19) {
            uVar18 = (uint)uVar19 >> 1;
            lVar4 = plVar9[uVar18];
            plVar9[uVar18] = *plVar9;
            *plVar9 = lVar4;
            plVar20 = plVar12 + 1;
            plVar6 = plVar9;
            do {
              plVar3 = plVar6 + 1;
              plVar13 = plVar6 + 1;
              do {
                plVar23 = plVar13;
                plVar6 = plVar3;
                if (plVar12 < plVar6) break;
                uVar19 = *(ulonglong *)(*plVar9 + 0x158);
                uVar11 = *(ulonglong *)(*plVar6 + 0x158);
                bVar24 = uVar19 < uVar11;
                if (uVar19 == uVar11) {
                  bVar24 = *(ulonglong *)(*plVar9 + 0x160) < *(ulonglong *)(*plVar6 + 0x160);
                }
                plVar3 = plVar6 + 1;
                plVar13 = plVar23 + 1;
              } while (!bVar24);
              plVar3 = plVar20 + -2;
              do {
                plVar13 = plVar20;
                plVar21 = plVar3;
                plVar20 = plVar13 + -1;
                if (plVar20 <= plVar9) break;
                uVar19 = *(ulonglong *)(*plVar20 + 0x158);
                uVar11 = *(ulonglong *)(*plVar9 + 0x158);
                bVar24 = uVar19 < uVar11;
                if (uVar19 == uVar11) {
                  bVar24 = *(ulonglong *)(*plVar20 + 0x160) < *(ulonglong *)(*plVar9 + 0x160);
                }
                plVar3 = plVar21 + -1;
              } while (!bVar24);
              if (plVar20 < plVar6) goto LAB_146d47347;
              lVar4 = *plVar6;
              *plVar6 = *plVar20;
              *plVar20 = lVar4;
            } while( true );
          }
          if (plVar9 < plVar12) {
            do {
              plVar6 = plVar9;
              if (plVar9 + 1 <= plVar12) {
                plVar7 = plVar9 + 1;
                lVar4 = *plVar9;
                do {
                  lVar8 = *plVar7;
                  bVar24 = *(ulonglong *)(lVar4 + 0x158) < *(ulonglong *)(lVar8 + 0x158);
                  if (*(ulonglong *)(lVar4 + 0x158) == *(ulonglong *)(lVar8 + 0x158)) {
                    bVar24 = *(ulonglong *)(lVar4 + 0x160) < *(ulonglong *)(lVar8 + 0x160);
                  }
                  plVar22 = plVar7;
                  if (!bVar24) {
                    lVar8 = lVar4;
                    plVar22 = plVar6;
                  }
                  plVar6 = plVar22;
                  plVar7 = plVar7 + 1;
                  lVar4 = lVar8;
                } while (plVar7 <= plVar12);
              }
              lVar4 = *plVar6;
              *plVar6 = *plVar12;
              *plVar12 = lVar4;
              plVar12 = plVar12 + -1;
            } while (plVar9 < plVar12);
          }
          goto LAB_146d4764d;
        }
LAB_146d473db:
        iVar14 = (int)uVar19;
        if (iVar14 != 0) {
          iVar10 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
          iVar17 = iVar10;
joined_r0x000146d47402:
          do {
            iVar16 = iVar10 * 2 + 1;
            if (iVar16 < iVar14) {
              iVar15 = iVar10 * 2 + 2;
              if (iVar15 < iVar14) {
                uVar11 = *(ulonglong *)(plVar6[iVar15] + 0x158);
                uVar1 = *(ulonglong *)(plVar6[iVar16] + 0x158);
                bVar24 = uVar11 < uVar1;
                if (uVar11 == uVar1) {
                  bVar24 = *(ulonglong *)(plVar6[iVar15] + 0x160) <
                           *(ulonglong *)(plVar6[iVar16] + 0x160);
                }
                if (!bVar24) {
                  iVar16 = iVar15;
                }
              }
              lVar4 = plVar6[iVar16];
              lVar8 = plVar6[iVar10];
              bVar24 = *(ulonglong *)(lVar8 + 0x158) < *(ulonglong *)(lVar4 + 0x158);
              if (*(ulonglong *)(lVar8 + 0x158) == *(ulonglong *)(lVar4 + 0x158)) {
                bVar24 = *(ulonglong *)(lVar8 + 0x160) < *(ulonglong *)(lVar4 + 0x160);
              }
              if (bVar24) {
                plVar6[iVar10] = lVar4;
                plVar6[iVar16] = lVar8;
                iVar10 = iVar16;
                goto joined_r0x000146d47402;
              }
            }
            bVar24 = iVar17 != 0;
            iVar10 = iVar17 + -1;
            iVar17 = iVar10;
          } while (bVar24);
          if (1 < iVar14) {
            lVar4 = *plVar6;
            *plVar6 = plVar6[uVar19 - 1];
            plVar6[uVar19 - 1] = lVar4;
            if (iVar14 != 2) {
              do {
                uVar11 = uVar19 - 1;
                iVar14 = 0;
                iVar17 = 1;
                iVar10 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  iVar16 = iVar17;
                  if ((longlong)iVar14 < (longlong)uVar11) {
                    uVar1 = *(ulonglong *)(plVar6[iVar14] + 0x158);
                    uVar2 = *(ulonglong *)(plVar6[iVar17] + 0x158);
                    bVar24 = uVar1 < uVar2;
                    if (uVar1 == uVar2) {
                      bVar24 = *(ulonglong *)(plVar6[iVar14] + 0x160) <
                               *(ulonglong *)(plVar6[iVar17] + 0x160);
                    }
                    if (!bVar24) {
                      iVar16 = iVar14;
                    }
                  }
                  lVar4 = plVar6[iVar16];
                  lVar8 = plVar6[iVar10];
                  bVar24 = *(ulonglong *)(lVar8 + 0x158) < *(ulonglong *)(lVar4 + 0x158);
                  if (*(ulonglong *)(lVar8 + 0x158) == *(ulonglong *)(lVar4 + 0x158)) {
                    bVar24 = *(ulonglong *)(lVar8 + 0x160) < *(ulonglong *)(lVar4 + 0x160);
                  }
                  if (!bVar24) break;
                  plVar6[iVar10] = lVar4;
                  plVar6[iVar16] = lVar8;
                  iVar14 = iVar16 * 2;
                  iVar17 = iVar16 * 2 + 1;
                  iVar10 = iVar16;
                } while ((longlong)iVar17 < (longlong)uVar11);
                lVar4 = *plVar6;
                *plVar6 = plVar6[uVar19 - 2];
                plVar6[uVar19 - 2] = lVar4;
                uVar19 = uVar11;
              } while (2 < uVar11);
            }
          }
        }
LAB_146d4764d:
        plVar5 = plVar5 + -3;
      } while (&local_348 <= plVar5);
      uVar18 = *(uint *)(local_350 + 0x38);
      param_1 = local_350;
    }
    if (0 < (int)uVar18) {
      lVar4 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar4 * 8);
        *(uint *)(lVar8 + 0x150) = (*(uint *)(lVar8 + 0x150) & 0x80000000) + (int)lVar4;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x38));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146d47347:
  lVar4 = *plVar9;
  *plVar9 = *plVar20;
  *plVar20 = lVar4;
  iVar14 = iVar14 + -1;
  plVar13 = plVar13 + -2;
  if ((longlong)plVar21 - (longlong)plVar22 < (longlong)plVar7 - (longlong)plVar23) {
    if (plVar6 < plVar12) {
      *plVar5 = (longlong)plVar6;
      plVar5[1] = (longlong)plVar12;
      *(int *)(plVar5 + 2) = iVar14;
      plVar5 = plVar5 + 3;
    }
    plVar6 = plVar9;
    plVar7 = plVar21;
    if (plVar20 <= plVar9 + 1) goto LAB_146d4764d;
  }
  else {
    if (plVar9 + 1 < plVar20) {
      *plVar5 = (longlong)plVar9;
      plVar5[1] = (longlong)plVar13;
      *(int *)(plVar5 + 2) = iVar14;
      plVar5 = plVar5 + 3;
    }
    plVar9 = plVar23;
    plVar13 = plVar12;
    plVar7 = plVar12;
    if (plVar12 <= plVar6) goto LAB_146d4764d;
  }
  iVar10 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar9) >> 3);
  uVar19 = (ulonglong)(iVar10 + 1);
  plVar12 = plVar13;
  plVar22 = plVar9;
  if (iVar14 == 0) goto LAB_146d473db;
  goto LAB_146d47265;
}


