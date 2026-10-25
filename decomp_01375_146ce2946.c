// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ce2946 FUN_146ce2946 body=877 status=ok
// SIG undefined FUN_146ce2946(void)

void FUN_146ce2946(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (0.0001 <= pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1]) {
    dStack_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  else {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    dStack_d8 = 0.0;
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = FUN_14068657c;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce2d66 FUN_146ce2d66 body=176 status=ok
// SIG undefined FUN_146ce2d66(void)

void FUN_146ce2d66(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140a08fc0(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce2e18 FUN_146ce2e18 body=176 status=ok
// SIG undefined FUN_146ce2e18(void)

void FUN_146ce2e18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140a097c8(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce2eca FUN_146ce2eca body=176 status=ok
// SIG undefined FUN_146ce2eca(void)

void FUN_146ce2eca(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140a0937f(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce2f7c FUN_146ce2f7c body=176 status=ok
// SIG undefined FUN_146ce2f7c(void)

void FUN_146ce2f7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce3191(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce302e FUN_146ce302e body=176 status=ok
// SIG undefined FUN_146ce302e(void)

void FUN_146ce302e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce33a6(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce30e0 FUN_146ce30e0 body=176 status=ok
// SIG undefined FUN_146ce30e0(void)

void FUN_146ce30e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double dStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (0.0001 <= pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]) {
    dStack_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  else {
    local_28 = 1.0;
    dStack_20 = 0.0;
    dStack_18 = 0.0;
  }
  local_38 = &local_28;
  FUN_146ce3594(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce3191 FUN_146ce3191 body=532 status=ok
// SIG undefined FUN_146ce3191(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce3191(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  undefined1 *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144a12d46;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = &LAB_146cc500a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce33a6 FUN_146ce33a6 body=493 status=ok
// SIG undefined FUN_146ce33a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce33a6(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144a12d46;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_146cc5264;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce3594 FUN_146ce3594 body=532 status=ok
// SIG undefined FUN_146ce3594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce3594(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  float local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144a12d46;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = (float)(double)(-(ulonglong)(0.0 < *(double *)(*(longlong *)(param_1 + 0x88) + 0x10)) &
                            (ulonglong)*(double *)(param_1 + 0x10));
  local_78 = FUN_146cc5596;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce37b0 FUN_146ce37b0 body=145 status=ok
// SIG undefined FUN_146ce37b0(void)

void FUN_146ce37b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447dc19e(param_3,local_88,param_1[1]);
  local_90 = *(undefined8 *)param_1[5];
  local_98 = param_1[4];
  cVar1 = FUN_140a08058(param_2,local_88,param_1[2],param_1[3]);
  if (cVar1 != '\0') {
    *(undefined1 *)*param_1 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce3842 FUN_146ce3842 body=96 status=ok
// SIG undefined FUN_146ce3842(void)

void FUN_146ce3842(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146ce38a2 FUN_146ce38a2 body=1812 status=ok
// SIG undefined FUN_146ce38a2(void)

longlong * FUN_146ce38a2(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  ulonglong uVar16;
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
  undefined1 auStack_168 [32];
  int *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  int *local_128;
  int *local_120;
  longlong *local_118;
  longlong *local_110 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = param_2[1];
  if (3 < (longlong)(int)lVar4) {
    local_120 = (int *)FUN_146ce447c(param_1,0xffffffff);
    local_120[2] = 0;
    local_120[3] = 0;
    local_120[4] = 0;
    local_120[5] = 0;
    lVar11 = 0;
    uVar16 = 0;
    piVar15 = (int *)0x0;
    piVar14 = (int *)0x0;
    piVar5 = local_120;
    fVar17 = -3.4028235e+38;
    fVar19 = 3.4028235e+38;
    do {
      piVar3 = (int *)FUN_146ce447c(param_1,uVar16 & 0xffffffff);
      piVar1 = local_120;
      *(int **)(piVar5 + 4) = piVar3;
      *(int **)(piVar3 + 2) = piVar5;
      piVar3[4] = 0;
      piVar3[5] = 0;
      lVar13 = *param_2;
      fVar21 = *(float *)(lVar13 + lVar11);
      if (fVar21 < fVar19) {
        piVar15 = piVar3;
      }
      if (fVar17 < fVar21) {
        piVar14 = piVar3;
      }
      fVar23 = fVar21;
      if (fVar19 <= fVar21) {
        fVar23 = fVar19;
      }
      if (fVar21 <= fVar17) {
        fVar21 = fVar17;
      }
      uVar16 = uVar16 + 1;
      lVar11 = lVar11 + 0xc;
      piVar5 = piVar3;
      fVar17 = fVar21;
      fVar19 = fVar23;
    } while ((longlong)(int)lVar4 != uVar16);
    if (piVar15 != piVar14) {
      lVar4 = (longlong)*piVar15;
      lVar11 = (longlong)*piVar14;
      fVar17 = *(float *)(lVar13 + 8 + lVar4 * 0xc) - *(float *)(lVar13 + 8 + lVar11 * 0xc);
      fVar21 = *(float *)(lVar13 + 4 + lVar4 * 0xc) - *(float *)(lVar13 + 4 + lVar11 * 0xc);
      fVar19 = *(float *)(lVar13 + lVar4 * 0xc) - *(float *)(lVar13 + lVar11 * 0xc);
      fVar23 = 0.0001;
      if (0.0001 <= fVar17 * fVar17 + fVar19 * fVar19 + fVar21 * fVar21) {
        lVar4 = *(longlong *)(piVar15 + 4);
        *(longlong *)(*(longlong *)(piVar15 + 2) + 0x10) = lVar4;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(piVar15 + 2);
        }
        lVar4 = *(longlong *)(piVar14 + 4);
        *(longlong *)(*(longlong *)(piVar14 + 2) + 0x10) = lVar4;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(piVar14 + 2);
        }
        piVar5 = *(int **)(local_120 + 4);
        if (piVar5 != (int *)0x0) {
          lVar11 = (longlong)*piVar14;
          lVar4 = *param_2;
          lVar13 = (longlong)*piVar15;
          fVar17 = *(float *)(lVar4 + 8 + lVar13 * 0xc);
          fVar18 = *(float *)(lVar4 + 8 + lVar11 * 0xc) - fVar17;
          fVar19 = *(float *)(lVar4 + lVar13 * 0xc);
          fVar21 = *(float *)(lVar4 + 4 + lVar13 * 0xc);
          fVar20 = *(float *)(lVar4 + 4 + lVar11 * 0xc) - fVar21;
          fVar22 = *(float *)(lVar4 + lVar11 * 0xc) - fVar19;
          piVar3 = (int *)0x0;
          do {
            lVar11 = (longlong)*piVar5;
            fVar25 = *(float *)(lVar4 + 8 + lVar11 * 0xc) - fVar17;
            fVar27 = *(float *)(lVar4 + 4 + lVar11 * 0xc) - fVar21;
            fVar26 = *(float *)(lVar4 + lVar11 * 0xc) - fVar19;
            fVar24 = fVar22 * fVar27 + fVar26 * -fVar20;
            fVar26 = fVar25 * -fVar22 + fVar18 * fVar26;
            fVar25 = fVar27 * -fVar18 + fVar20 * fVar25;
            fVar24 = fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26;
            piVar10 = piVar5;
            if (fVar24 <= fVar23) {
              fVar24 = fVar23;
              piVar10 = piVar3;
            }
            piVar3 = piVar10;
            fVar23 = fVar24;
            piVar5 = *(int **)(piVar5 + 4);
          } while (piVar5 != (int *)0x0);
          if (piVar3 != (int *)0x0) {
            lVar4 = *(longlong *)(piVar3 + 4);
            *(longlong *)(*(longlong *)(piVar3 + 2) + 0x10) = lVar4;
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(piVar3 + 2);
            }
            lVar11 = (longlong)*piVar3;
            lVar4 = *param_2;
            lVar13 = (longlong)*piVar15;
            fVar17 = *(float *)(lVar4 + 8 + lVar13 * 0xc);
            fVar25 = *(float *)(lVar4 + 8 + lVar11 * 0xc) - fVar17;
            fVar19 = *(float *)(lVar4 + lVar13 * 0xc);
            fVar21 = *(float *)(lVar4 + 4 + lVar13 * 0xc);
            fVar26 = *(float *)(lVar4 + 4 + lVar11 * 0xc) - fVar21;
            fVar23 = *(float *)(lVar4 + lVar11 * 0xc) - fVar19;
            fVar24 = fVar22 * fVar26 + -fVar20 * fVar23;
            fVar23 = fVar18 * fVar23 + -fVar22 * fVar25;
            fVar18 = fVar20 * fVar25 + fVar26 * -fVar18;
            fVar20 = fVar24 * fVar24 + fVar18 * fVar18 + fVar23 * fVar23;
            if (((fVar20 != 1.0) || (fVar22 = fVar23, fVar25 = fVar18, fVar26 = fVar24, NAN(fVar20))
                ) && (fVar22 = DAT_14c846330._4_4_, fVar25 = (float)DAT_14c846330,
                     fVar26 = DAT_14c846338, 1e-08 <= fVar20)) {
              fVar20 = 1.0 / SQRT(fVar20);
              fVar22 = fVar23 * fVar20;
              fVar25 = fVar18 * fVar20;
              fVar26 = fVar24 * fVar20;
            }
            piVar5 = *(int **)(local_120 + 4);
            if (piVar5 == (int *)0x0) {
              fVar18 = 0.0001;
              piVar10 = (int *)0x0;
              fVar23 = 0.0001;
              piVar12 = (int *)0x0;
            }
            else {
              fVar23 = 0.0001;
              piVar12 = (int *)0x0;
              piVar10 = (int *)0x0;
              fVar20 = 0.0001;
              do {
                lVar11 = (longlong)*piVar5;
                fVar24 = (*(float *)(lVar4 + lVar11 * 0xc) - fVar19) * fVar25 +
                         (*(float *)(lVar4 + 4 + lVar11 * 0xc) - fVar21) * fVar22 +
                         (*(float *)(lVar4 + 8 + lVar11 * 0xc) - fVar17) * fVar26;
                fVar18 = fVar24;
                piVar2 = piVar5;
                if (fVar24 <= fVar20) {
                  fVar18 = fVar20;
                  piVar2 = piVar10;
                }
                piVar10 = piVar2;
                if (fVar23 < -fVar24) {
                  piVar12 = piVar5;
                  fVar23 = -fVar24;
                }
                piVar5 = *(int **)(piVar5 + 4);
                fVar20 = fVar18;
              } while (piVar5 != (int *)0x0);
            }
            if (((fVar23 != 0.0001) || (NAN(fVar23))) || ((fVar18 != 0.0001 || (NAN(fVar18))))) {
              if (fVar23 < fVar18) {
                piVar12 = piVar10;
              }
              lVar4 = *(longlong *)(piVar12 + 4);
              *(longlong *)(*(longlong *)(piVar12 + 2) + 0x10) = lVar4;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(piVar12 + 2);
              }
              piVar5 = piVar15;
              if (fVar23 < fVar18) {
                piVar5 = piVar14;
                piVar14 = piVar15;
              }
              local_148 = piVar3;
              local_128 = piVar14;
              plVar6 = (longlong *)FUN_146ce4562(param_1,param_2,piVar5);
              local_118 = plVar6;
              local_138 = (longlong *)FUN_146ce447c(param_1,*piVar5);
              uVar7 = FUN_146ce447c(param_1,*piVar14);
              local_148 = piVar12;
              local_138 = (longlong *)FUN_146ce4562(param_1,param_2,uVar7,local_138);
              local_110[0] = local_138;
              local_140 = FUN_146ce447c(param_1,*piVar12);
              uVar7 = FUN_146ce447c(param_1,*piVar3);
              uVar8 = FUN_146ce447c(param_1,*piVar5);
              local_148 = (int *)local_140;
              plVar9 = (longlong *)FUN_146ce4562(param_1,param_2,uVar8,uVar7);
              local_110[1] = plVar9;
              local_140 = FUN_146ce447c(param_1,*piVar12);
              piVar14 = local_128;
              local_130 = FUN_146ce447c(param_1,*local_128);
              uVar7 = FUN_146ce447c(param_1,*piVar3);
              local_148 = (int *)local_140;
              local_110[2] = (longlong *)FUN_146ce4562(param_1,param_2,uVar7,local_130);
              lVar4 = *local_138;
              *(longlong *)(piVar5 + 6) = lVar4;
              *(int **)(lVar4 + 0x18) = piVar5;
              lVar4 = *local_110[2];
              *(longlong *)(piVar14 + 6) = lVar4;
              *(int **)(lVar4 + 0x18) = piVar14;
              lVar4 = *plVar9;
              *(longlong *)(piVar3 + 6) = lVar4;
              *(int **)(lVar4 + 0x18) = piVar3;
              lVar4 = *(longlong *)(*plVar9 + 8);
              lVar11 = *(longlong *)(*local_138 + 0x10);
              *(longlong *)(lVar11 + 0x18) = lVar4;
              *(longlong *)(lVar4 + 0x18) = lVar11;
              lVar4 = *(longlong *)(*local_110[2] + 0x10);
              lVar11 = *(longlong *)(*local_138 + 8);
              *(longlong *)(lVar11 + 0x18) = lVar4;
              *(longlong *)(lVar4 + 0x18) = lVar11;
              lVar4 = *(longlong *)(*local_110[2] + 8);
              lVar11 = *(longlong *)(*plVar9 + 0x10);
              *(longlong *)(lVar11 + 0x18) = lVar4;
              *(longlong *)(lVar4 + 0x18) = lVar11;
              plVar6[5] = 0;
              lVar4 = 1;
              do {
                plVar9 = local_110[lVar4 + -1];
                plVar6[6] = (longlong)plVar9;
                plVar9[5] = (longlong)plVar6;
                lVar4 = lVar4 + 1;
                plVar6 = plVar9;
              } while (lVar4 != 4);
              local_110[2][6] = 0;
              local_148 = (int *)CONCAT44(local_148._4_4_,4);
              FUN_146ce46f2(param_1,param_2,*(undefined8 *)(piVar1 + 4),&local_118);
              plVar6 = local_118;
              goto LAB_146ce392c;
            }
          }
        }
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_146ce392c:
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce3fb8 FUN_146ce3fb8 body=309 status=ok
// SIG undefined FUN_146ce3fb8(void)

longlong FUN_146ce3fb8(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar5 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar5 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    iVar6 = FUN_146ce49f2(param_1 + 0x38,1);
    iVar5 = iVar6 + 0xff;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar5 >> 8) * 8);
    lVar7 = (ulonglong)(uint)(iVar6 % 0x100) * 0x40;
    *(undefined8 *)(lVar8 + 8 + lVar7) = 0;
    puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar7);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    *(undefined8 *)(lVar8 + 0x20 + lVar7) = local_28;
    *(undefined4 *)(lVar8 + 0x38 + lVar7) = uVar2;
    iVar5 = *(int *)(param_1 + 0x48);
    uVar10 = iVar5 + 0xfe;
    if (-1 < (int)(iVar5 - 1U)) {
      uVar10 = iVar5 - 1U;
    }
    lVar8 = (ulonglong)((iVar5 - (uVar10 & 0xffffff00)) - 1) * 0x40 +
            *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)((int)uVar10 >> 8) * 8);
  }
  else {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + -4 + (longlong)iVar5 * 4);
    *(int *)(param_1 + 0x30) = iVar5 + -1;
    iVar5 = iVar6 + 0xff;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar5 >> 8) * 8);
    lVar9 = (ulonglong)(uint)(iVar6 % 0x100) * 0x40;
    lVar8 = lVar7 + lVar9;
    *(undefined8 *)(lVar7 + 8 + lVar9) = 0;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar9);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    *(undefined8 *)(lVar7 + 0x20 + lVar9) = *(undefined8 *)(param_2 + 4);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce40ee FUN_146ce40ee body=198 status=ok
// SIG undefined FUN_146ce40ee(void)

int * FUN_146ce40ee(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 != 0) {
    lVar1 = *param_1;
    do {
      piVar4 = *(int **)(param_2 + 8);
      if (piVar4 != (int *)0x0) {
        piVar3 = (int *)0x0;
        fVar6 = -3.4028235e+38;
        do {
          lVar5 = (longlong)*piVar4;
          fVar7 = *(float *)(lVar1 + 8 + lVar5 * 0xc) * *(float *)(param_2 + 0x24) +
                  *(float *)(lVar1 + lVar5 * 0xc) * *(float *)(param_2 + 0x1c) +
                  *(float *)(lVar1 + 4 + lVar5 * 0xc) * *(float *)(param_2 + 0x20);
          piVar2 = piVar4;
          if (fVar7 <= fVar6) {
            fVar7 = fVar6;
            piVar2 = piVar3;
          }
          piVar3 = piVar2;
          fVar6 = fVar7;
          piVar4 = *(int **)(piVar4 + 4);
        } while (piVar4 != (int *)0x0);
        if (piVar3 != (int *)0x0) {
          lVar1 = *(longlong *)(piVar3 + 4);
          if (*(longlong *)(piVar3 + 2) != 0) {
            *(longlong *)(*(longlong *)(piVar3 + 2) + 0x10) = lVar1;
          }
          if (lVar1 != 0) {
            *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(piVar3 + 2);
          }
          if (piVar3 == *(int **)(param_2 + 8)) {
            *(undefined8 *)(param_2 + 8) = *(undefined8 *)(piVar3 + 4);
          }
          *(longlong *)(piVar3 + 8) = param_2;
          return piVar3;
        }
      }
      param_2 = *(longlong *)(param_2 + 0x30);
    } while (param_2 != 0);
  }
  return (int *)0x0;
}



// FUNCTION 146ce41b4 FUN_146ce41b4 body=392 status=ok
// SIG undefined FUN_146ce41b4(void)

undefined4 FUN_146ce41b4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78[0] = 0;
  local_78[1] = 0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_a8 = (longlong **)param_4;
  FUN_146ce4a6e(param_2,param_3,local_78,&local_88);
  local_a0 = local_98;
  local_98[0] = 0;
  local_98[1] = 0;
  local_a8 = &local_88;
  uVar4 = FUN_146ce4e2a(param_1,param_2,param_3,local_78);
  if (((char)uVar4 != '\0') && ((longlong)(int)uStack_80 != 0)) {
    plVar1 = local_88 + (int)uStack_80;
    plVar6 = local_88;
    do {
      plVar3 = (longlong *)*plVar6;
      lVar5 = *plVar3;
      do {
        lVar5 = *(longlong *)(lVar5 + 0x10);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_1,iVar2);
        }
        *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar5 + 0x28);
      } while (lVar5 != *plVar3);
      lVar5 = plVar3[6];
      if (plVar3[5] != 0) {
        *(longlong *)(plVar3[5] + 0x30) = lVar5;
      }
      if (lVar5 != 0) {
        *(longlong *)(lVar5 + 0x28) = plVar3[5];
      }
      iVar2 = (int)param_1[6];
      *(uint *)(param_1 + 6) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
        FUN_1446f48e2(param_1 + 5,iVar2);
      }
      *(int *)(param_1[5] + (longlong)iVar2 * 4) = (int)plVar3[7];
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce433e FUN_146ce433e body=97 status=ok
// SIG undefined FUN_146ce433e(void)

void FUN_146ce433e(longlong *param_1)

{
  FUN_146ce440e(param_1 + 7,0);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_146ce43a0(param_1 + 2,0);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ce43a0 FUN_146ce43a0 body=108 status=ok
// SIG undefined FUN_146ce43a0(void)

void FUN_146ce43a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1447ab16c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ce440e FUN_146ce440e body=108 status=ok
// SIG undefined FUN_146ce440e(void)

void FUN_146ce440e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1447ab16c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ce447c FUN_146ce447c body=230 status=ok
// SIG undefined FUN_146ce447c(void)

longlong FUN_146ce447c(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = (int)param_1[1];
  if ((longlong)iVar3 == 0) {
    lVar2 = param_1[4];
    iVar3 = FUN_146ce48b0(param_1 + 2,1);
    lVar4 = *(longlong *)(param_1[2] + (longlong)(iVar3 / 0x155) * 8);
    lVar5 = (ulonglong)(uint)(iVar3 % 0x155) * 0x30;
    *(undefined4 *)(lVar4 + lVar5) = param_2;
    *(int *)(lVar4 + 0x28 + lVar5) = (int)lVar2;
    iVar3 = (int)param_1[4] + -1;
    lVar4 = (ulonglong)(uint)(iVar3 % 0x155) * 0x30 +
            *(longlong *)(param_1[2] + (longlong)(iVar3 / 0x155) * 8);
  }
  else {
    iVar1 = *(int *)(*param_1 + -4 + (longlong)iVar3 * 4);
    *(int *)(param_1 + 1) = iVar3 + -1;
    lVar2 = *(longlong *)(param_1[2] + (longlong)(iVar1 / 0x155) * 8);
    lVar5 = (ulonglong)(uint)(iVar1 % 0x155) * 0x30;
    lVar4 = lVar2 + lVar5;
    *(undefined4 *)(lVar2 + lVar5) = param_2;
  }
  return lVar4;
}



// FUNCTION 146ce4562 FUN_146ce4562 body=399 status=ok
// SIG undefined FUN_146ce4562(void)

void FUN_146ce4562(undefined8 param_1,longlong *param_2,int *param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(int **)(param_3 + 2) = param_5;
  *(int **)(param_3 + 4) = param_4;
  *(int **)(param_4 + 2) = param_3;
  *(int **)(param_4 + 4) = param_5;
  *(int **)(param_5 + 2) = param_4;
  *(int **)(param_5 + 4) = param_3;
  lVar3 = (longlong)*param_5;
  lVar2 = *param_2;
  lVar4 = (longlong)*param_4;
  pfVar1 = (float *)(lVar2 + (longlong)*param_3 * 0xc);
  fVar8 = *(float *)(lVar2 + 8 + lVar3 * 0xc) - pfVar1[2];
  fVar10 = *(float *)(lVar2 + 4 + lVar3 * 0xc) - pfVar1[1];
  fVar9 = *(float *)(lVar2 + lVar3 * 0xc) - *pfVar1;
  fVar11 = *(float *)(lVar2 + 8 + lVar4 * 0xc) - pfVar1[2];
  fVar7 = *(float *)(lVar2 + 4 + lVar4 * 0xc) - pfVar1[1];
  fVar6 = *(float *)(lVar2 + lVar4 * 0xc) - *pfVar1;
  local_44 = fVar6 * fVar10 - fVar9 * fVar7;
  local_48 = fVar11 * fVar9 - fVar8 * fVar6;
  local_4c = fVar7 * fVar8 - fVar11 * fVar10;
  fVar6 = SQRT(local_44 * local_44 + local_4c * local_4c + local_48 * local_48);
  if (fVar6 <= 0.0) {
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 6) + 0x20);
    local_4c = *(float *)(lVar2 + 0x1c);
    local_48 = *(float *)(lVar2 + 0x20);
    local_44 = *(float *)(lVar2 + 0x24);
  }
  else {
    fVar6 = 1.0 / fVar6;
    local_44 = local_44 * fVar6;
    local_48 = local_48 * fVar6;
    local_4c = local_4c * fVar6;
  }
  local_50 = pfVar1[2];
  local_58 = *(undefined8 *)pfVar1;
  puVar5 = (undefined8 *)FUN_146ce3fb8();
  *puVar5 = param_3;
  *(undefined8 **)(param_3 + 8) = puVar5;
  *(undefined8 **)(param_4 + 8) = puVar5;
  *(undefined8 **)(param_5 + 8) = puVar5;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce46f2 FUN_146ce46f2 body=444 status=ok
// SIG undefined FUN_146ce46f2(void)

void FUN_146ce46f2(longlong *param_1,longlong *param_2,int *param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != (int *)0x0) {
    do {
      if ((int)param_5 < 1) {
LAB_146ce483a:
        piVar8 = *(int **)(param_3 + 4);
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_1,iVar3);
        }
        *(int *)(*param_1 + (longlong)iVar3 * 4) = param_3[10];
      }
      else {
        lVar4 = (longlong)*param_3;
        lVar7 = *param_2;
        uVar5 = 0xffffffff;
        uVar6 = 0;
        fVar9 = 0.0001;
        do {
          lVar1 = *(longlong *)(param_4 + uVar6 * 8);
          fVar10 = (*(float *)(lVar7 + 8 + lVar4 * 0xc) - *(float *)(lVar1 + 0x18)) *
                   *(float *)(lVar1 + 0x24) +
                   (*(float *)(lVar7 + lVar4 * 0xc) - *(float *)(lVar1 + 0x10)) *
                   *(float *)(lVar1 + 0x1c) +
                   (*(float *)(lVar7 + 4 + lVar4 * 0xc) - *(float *)(lVar1 + 0x14)) *
                   *(float *)(lVar1 + 0x20);
          if (fVar9 < fVar10) {
            uVar5 = uVar6 & 0xffffffff;
            fVar9 = fVar10;
          }
          uVar6 = uVar6 + 1;
        } while (param_5 != uVar6);
        iVar3 = (int)uVar5;
        if (iVar3 == -1) goto LAB_146ce483a;
        lVar7 = **(longlong **)(param_4 + (longlong)iVar3 * 8);
        local_88 = param_2;
        do {
          fVar9 = (float)FUN_146ce4936(&local_88,*(undefined8 *)(lVar7 + 8),lVar7,param_3);
          if (fVar9 < 0.0001) goto LAB_146ce483a;
          lVar7 = *(longlong *)(lVar7 + 0x10);
          plVar2 = *(longlong **)(param_4 + (longlong)iVar3 * 8);
        } while (lVar7 != *plVar2);
        piVar8 = *(int **)(param_3 + 4);
        if (plVar2[1] == 0) {
          lVar7 = 0;
        }
        else {
          *(int **)(plVar2[1] + 8) = param_3;
          lVar7 = plVar2[1];
        }
        *(longlong *)(param_3 + 4) = lVar7;
        plVar2[1] = (longlong)param_3;
        param_3[2] = 0;
        param_3[3] = 0;
      }
      param_3 = piVar8;
    } while (piVar8 != (int *)0x0);
  }
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce48b0 FUN_146ce48b0 body=134 status=ok
// SIG undefined FUN_146ce48b0(void)

int FUN_146ce48b0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar2 = (param_2 + iVar1 + 0x154) / 0x155;
  *(int *)(param_1 + 2) = iVar1 + param_2;
  iVar4 = iVar2 - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar2) {
    do {
      uVar3 = FUN_14001cc68(0x3ff0,0x10);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 146ce4936 FUN_146ce4936 body=188 status=ok
// SIG undefined FUN_146ce4936(void)

float FUN_146ce4936(undefined8 *param_1,int *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = (longlong)*param_4;
  lVar1 = *(longlong *)*param_1;
  lVar3 = (longlong)*param_2;
  fVar9 = *(float *)(lVar1 + 8 + lVar3 * 0xc);
  fVar6 = *(float *)(lVar1 + 8 + lVar2 * 0xc) - fVar9;
  fVar4 = *(float *)(lVar1 + lVar3 * 0xc);
  fVar10 = *(float *)(lVar1 + 4 + lVar3 * 0xc);
  fVar7 = *(float *)(lVar1 + 4 + lVar2 * 0xc) - fVar10;
  fVar8 = *(float *)(lVar1 + lVar2 * 0xc) - fVar4;
  lVar2 = (longlong)*param_3;
  fVar9 = *(float *)(lVar1 + 8 + lVar2 * 0xc) - fVar9;
  fVar10 = *(float *)(lVar1 + 4 + lVar2 * 0xc) - fVar10;
  fVar4 = *(float *)(lVar1 + lVar2 * 0xc) - fVar4;
  fVar5 = fVar4 * fVar7 - fVar8 * fVar10;
  fVar4 = fVar9 * fVar8 - fVar6 * fVar4;
  fVar9 = fVar10 * fVar6 - fVar9 * fVar7;
  return fVar5 * fVar5 + fVar9 * fVar9 + fVar4 * fVar4;
}



// FUNCTION 146ce49f2 FUN_146ce49f2 body=124 status=ok
// SIG undefined FUN_146ce49f2(void)

int FUN_146ce49f2(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar4 = iVar1 + param_2 + 0xff;
  iVar2 = iVar1 + param_2 + 0x1fe;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(param_1 + 2) = iVar1 + param_2;
  iVar4 = (iVar2 >> 8) - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar2 >> 8) {
    do {
      uVar3 = FUN_14001cc68(0x4000,0x10);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 146ce4a6e FUN_146ce4a6e body=954 status=ok
// SIG undefined FUN_146ce4a6e(void)

void FUN_146ce4a6e(longlong *param_1,int *param_2,longlong *param_3,longlong *param_4,float *param_5
                  )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_128 [44];
  undefined1 local_fc [4];
  undefined8 *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar1 = *param_5;
  lVar9 = (longlong)*param_2;
  lVar14 = *param_1;
  fVar2 = *(float *)(lVar14 + lVar9 * 0xc);
  fVar3 = *(float *)(lVar14 + 4 + lVar9 * 0xc);
  fVar4 = *(float *)(lVar14 + 8 + lVar9 * 0xc);
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_f8 = (undefined8 *)0x0;
  lVar14 = **(longlong **)(param_2 + 8);
  uStack_f0 = 1;
  uStack_ec = 0;
  FUN_146ce5042(&local_f8,0);
  uVar7 = uStack_f0;
  *local_f8 = *(undefined8 *)(lVar14 + 8);
  lVar14 = **(longlong **)(param_2 + 8);
  lVar9 = (longlong)(int)uStack_f0;
  uStack_f0 = uStack_f0 + 1;
  if (uStack_ec < uStack_f0) {
    FUN_146ce5042(&local_f8,uVar7);
  }
  uVar7 = uStack_f0;
  local_f8[lVar9] = *(undefined8 *)(lVar14 + 0x10);
  puVar5 = *(undefined8 **)(param_2 + 8);
  lVar14 = (longlong)(int)uStack_f0;
  uStack_f0 = uStack_f0 + 1;
  if (uStack_ec < uStack_f0) {
    FUN_146ce5042(&local_f8,uVar7);
  }
  local_f8[lVar14] = *puVar5;
  iVar13 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar13 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar13 + 1U) {
    FUN_146ce50c8(param_4,iVar13);
  }
  *(undefined8 *)(*param_4 + (longlong)iVar13 * 8) = *(undefined8 *)(param_2 + 8);
  if (uStack_f0 != 0) {
    do {
      piVar6 = (int *)local_f8[-1];
      uStack_f0 = 0xffffffff;
      FUN_146ce514e(&local_e8,local_fc,piVar6 + 8,0);
      uVar7 = uStack_f0;
      lVar14 = *(longlong *)(piVar6 + 6);
      piVar12 = *(int **)(lVar14 + 0x20);
      if ((int)uStack_e0 != local_b4) {
        uVar8 = ((uint)((ulonglong)piVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)piVar12 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        puVar10 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar10 = local_b0;
        }
        for (iVar13 = *(int *)(puVar10 + (ulonglong)(local_a0 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            iVar13 != -1; iVar13 = *(int *)((longlong)iVar13 * 0x10 + local_e8 + 8)) {
          if (*(int **)(local_e8 + (longlong)iVar13 * 0x10) == piVar12) goto LAB_146ce4db4;
        }
      }
      if ((fVar4 - (float)piVar12[6]) * (float)piVar12[9] +
          (fVar2 - (float)piVar12[4]) * (float)piVar12[7] +
          (fVar3 - (float)piVar12[5]) * (float)piVar12[8] <= fVar1) {
        iVar13 = (int)param_3[1];
        if (((longlong)iVar13 == 0) ||
           (*piVar6 == **(int **)(*(longlong *)(*param_3 + -8 + (longlong)iVar13 * 8) + 0x10))) {
          *(uint *)(param_3 + 1) = iVar13 + 1U;
          plVar11 = param_3;
          piVar12 = piVar6;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
            FUN_146ce5042(param_3,iVar13);
          }
          goto LAB_146ce4daa;
        }
      }
      else {
        lVar9 = (longlong)(int)uStack_f0;
        uStack_f0 = uStack_f0 + 1;
        if (uStack_ec < uStack_f0) {
          FUN_146ce5042(&local_f8,uVar7);
        }
        uVar7 = uStack_f0;
        local_f8[lVar9] = *(undefined8 *)(lVar14 + 8);
        lVar9 = (longlong)(int)uStack_f0;
        uStack_f0 = uStack_f0 + 1;
        if (uStack_ec < uStack_f0) {
          FUN_146ce5042(&local_f8,uVar7);
        }
        local_f8[lVar9] = *(undefined8 *)(lVar14 + 0x10);
        iVar13 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar13 + 1U;
        plVar11 = param_4;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar13 + 1U) {
          FUN_146ce50c8(param_4,iVar13);
        }
LAB_146ce4daa:
        *(int **)(*plVar11 + (longlong)iVar13 * 8) = piVar12;
      }
LAB_146ce4db4:
    } while (uStack_f0 != 0);
  }
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146ce567a(&local_e8);
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce4e2a FUN_146ce4e2a body=535 status=ok
// SIG undefined FUN_146ce4e2a(void)

undefined8
FUN_146ce4e2a(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if ((2 < (int)param_4[1]) &&
     (((int)param_4[1] <= *(int *)((longlong)param_6 + 0xc) ||
      (FUN_146ce5732(param_6), 0 < (int)param_4[1])))) {
    uVar8 = 0;
    piVar6 = (int *)0x0;
    do {
      puVar2 = *(undefined4 **)(*param_4 + uVar8 * 8);
      lVar3 = FUN_146ce447c(param_1,*puVar2);
      lVar5 = *(longlong *)(puVar2 + 6);
      *(longlong *)(lVar3 + 0x18) = lVar5;
      *(longlong *)(lVar5 + 0x18) = lVar3;
      piVar4 = (int *)FUN_146ce447c(param_1,**(undefined4 **)(puVar2 + 4));
      uVar8 = uVar8 + 1;
      if (*piVar4 !=
          **(int **)(*param_4 +
                    ((longlong)((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff)
                     % (longlong)(int)param_4[1] & 0xffffffffU) * 8)) {
        return 0;
      }
      lVar5 = FUN_146ce447c(param_1,*param_3);
      *(int **)(lVar5 + 0x18) = piVar6;
      if (piVar6 != (int *)0x0) {
        *(longlong *)(piVar6 + 6) = lVar5;
      }
      lVar5 = FUN_146ce4562(param_1,param_2,lVar3,piVar4,lVar5);
      if ((longlong)(int)param_6[1] < 1) {
        *(undefined8 *)(lVar5 + 0x28) = 0;
      }
      else {
        *(undefined8 *)(lVar5 + 0x28) =
             *(undefined8 *)(*param_6 + -8 + (longlong)(int)param_6[1] * 8);
        *(longlong *)(*(longlong *)(*param_6 + -8 + (longlong)(int)param_6[1] * 8) + 0x30) = lVar5;
      }
      iVar1 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
        FUN_146ce50c8(param_6,iVar1);
      }
      *(longlong *)(*param_6 + (longlong)iVar1 * 8) = lVar5;
      piVar6 = piVar4;
    } while ((longlong)uVar8 < (longlong)(int)param_4[1]);
    if (piVar4 != (int *)0x0) {
      *(int **)(*(longlong *)(**(longlong **)*param_6 + 8) + 0x18) = piVar4;
      *(undefined8 *)(piVar4 + 6) = *(undefined8 *)(**(longlong **)*param_6 + 8);
      *(undefined8 *)(*(longlong *)(*param_6 + -8 + (longlong)(int)param_6[1] * 8) + 0x30) = 0;
      lVar5 = param_5[1];
      if ((longlong)(int)lVar5 != 0) {
        lVar3 = *param_5;
        lVar9 = 0;
        do {
          FUN_146ce46f2(param_1,param_2,*(undefined8 *)(*(longlong *)(lVar3 + lVar9) + 8),*param_6,
                        (int)param_6[1]);
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar5 * 8 != lVar9);
      }
      lVar5 = *(longlong *)(param_3 + 8);
      lVar3 = *(longlong *)*param_6;
      lVar9 = ((longlong *)*param_6)[(longlong)(int)param_6[1] + -1];
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        uVar7 = 0;
      }
      else {
        *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x28) = lVar9;
        uVar7 = *(undefined8 *)(lVar5 + 0x30);
      }
      *(undefined8 *)(lVar9 + 0x30) = uVar7;
      *(longlong *)(lVar5 + 0x30) = lVar3;
      *(longlong *)(lVar3 + 0x28) = lVar5;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 146ce5042 FUN_146ce5042 body=132 status=ok
// SIG undefined FUN_146ce5042(void)

void FUN_146ce5042(longlong param_1,int param_2)

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



// FUNCTION 146ce50c8 FUN_146ce50c8 body=132 status=ok
// SIG undefined FUN_146ce50c8(void)

void FUN_146ce50c8(longlong param_1,int param_2)

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



// FUNCTION 146ce514e FUN_146ce514e body=332 status=ok
// SIG undefined FUN_146ce514e(void)

undefined4 *
FUN_146ce514e(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146ce529c(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_146ce5382(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146ce549c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce529c FUN_146ce529c body=229 status=ok
// SIG undefined FUN_146ce529c(void)

int * FUN_146ce529c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146ce5382 FUN_146ce5382 body=144 status=ok
// SIG undefined FUN_146ce5382(void)

void FUN_146ce5382(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_146ce5412(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146ce53ed;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146ce53ed:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146ce5412 FUN_146ce5412 body=138 status=ok
// SIG undefined FUN_146ce5412(void)

void FUN_146ce5412(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146ce549c FUN_146ce549c body=477 status=ok
// SIG undefined FUN_146ce549c(void)

void FUN_146ce549c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce567a FUN_146ce567a body=54 status=ok
// SIG undefined FUN_146ce567a(void)

void FUN_146ce567a(longlong *param_1)

{
  FUN_146ce56b0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ce56b0 FUN_146ce56b0 body=128 status=ok
// SIG undefined FUN_146ce56b0(void)

void FUN_146ce56b0(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146ce5732 FUN_146ce5732 body=96 status=ok
// SIG undefined FUN_146ce5732(void)

void FUN_146ce5732(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146ce5792 FUN_146ce5792 body=138 status=ok
// SIG undefined FUN_146ce5792(void)

void FUN_146ce5792(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1bc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x6c,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x6c)) {
        uVar4 = uVar3 / 0x6c & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1bc) = (int)uVar4;
    FUN_1404b24ba(param_1,param_2,uVar4,0x6c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146ce581e FUN_146ce581e body=205 status=ok
// SIG undefined FUN_146ce581e(void)

void FUN_146ce581e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xb8);
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
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(int *)((longlong)puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000146ce58df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146ce58ec FUN_146ce58ec body=96 status=ok
// SIG undefined FUN_146ce58ec(void)

void FUN_146ce58ec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146ce594c FUN_146ce594c body=48 status=ok
// SIG undefined FUN_146ce594c(void)

void FUN_146ce594c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146ce597c FUN_146ce597c body=134 status=ok
// SIG undefined FUN_146ce597c(void)

longlong FUN_146ce597c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146ce5a02(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  iVar1 = (int)param_1[2];
  uVar3 = FUN_14001cc68((longlong)iVar1 * 0x128,8);
  *(undefined8 *)(lVar2 + lVar4) = uVar3;
  *(undefined8 *)(lVar2 + 8 + lVar4) = uVar3;
  *(int *)(lVar2 + 0x10 + lVar4) = iVar1;
  *(int *)(lVar2 + 0x14 + lVar4) = iVar1;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0xffffffff00000000;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)param_1[2];
  *(int *)(param_1 + 3) = (int)param_1[3] + (int)param_1[2];
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 146ce5a02 FUN_146ce5a02 body=132 status=ok
// SIG undefined FUN_146ce5a02(void)

void FUN_146ce5a02(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ce5a9a FUN_146ce5a9a body=102 status=ok
// SIG undefined FUN_146ce5a9a(void)

longlong FUN_146ce5a9a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)((longlong)param_1 + 0x1c) != -1) {
    lVar1 = *param_1;
    lVar2 = (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x128;
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x120 + lVar2);
    *(undefined4 *)(lVar1 + 0x120 + lVar2) = 0xffffffff;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    return lVar1 + lVar2;
  }
  if ((int)param_1[3] < (int)param_1[2]) {
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x128;
    *(undefined4 *)(lVar1 + 0x120) = 0xffffffff;
    *(byte *)(lVar1 + 0x124) = *(byte *)(lVar1 + 0x124) & 0xfe;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    return lVar1;
  }
  return 0;
}



// FUNCTION 146ce5b00 FUN_146ce5b00 body=326 status=ok
// SIG undefined FUN_146ce5b00(void)

void FUN_146ce5b00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f4b560;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0;
  param_1[7] = 0x4097700000000000;
  param_1[8] = 0x4059000000000000;
  param_1[9] = 0x408f400000000000;
  param_1[10] = 0x40b3880000000000;
  param_1[0xb] = 0x3fe44189374bc6a8;
  param_1[0xc] = 0;
  param_1[0xd] = 0x4000000000000000;
  param_1[0xe] = 0;
  uVar1 = DAT_14c8463c0;
  param_1[0xf] = DAT_14c8463b8;
  param_1[0x10] = uVar1;
  param_1[0x11] = DAT_14c8463c8;
  uVar1 = DAT_14c8464e8;
  param_1[0x12] = DAT_14c8464e0;
  param_1[0x13] = uVar1;
  param_1[0x14] = DAT_14c8464f0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x4202a05f20000000;
  param_1[0x17] = 0x3fe44189374bc6a8;
  param_1[0x1a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x18] = DAT_14c8464e0;
  param_1[0x19] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x1b] = DAT_14c8464e0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1e] = DAT_14c8464e0;
  param_1[0x1f] = uVar1;
  param_1[0x20] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  return;
}



// FUNCTION 146ce5c46 FUN_146ce5c46 body=39 status=ok
// SIG undefined FUN_146ce5c46(void)

undefined8 * FUN_146ce5c46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f4b8e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ce5c6e FUN_146ce5c6e body=132 status=ok
// SIG undefined FUN_146ce5c6e(void)

void FUN_146ce5c6e(longlong param_1,int param_2)

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



// FUNCTION 146ce5cf4 FUN_146ce5cf4 body=96 status=ok
// SIG undefined FUN_146ce5cf4(void)

void FUN_146ce5cf4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146ce5d54 FUN_146ce5d54 body=112 status=ok
// SIG undefined FUN_146ce5d54(void)

void FUN_146ce5d54(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x160,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x160)) {
      uVar2 = uVar1 / 0x160 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x160,0x10);
  }
  return;
}



// FUNCTION 146ce5dc4 FUN_146ce5dc4 body=41 status=ok
// SIG undefined FUN_146ce5dc4(void)

void FUN_146ce5dc4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ce5e82(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 146ce5dee FUN_146ce5dee body=146 status=ok
// SIG undefined FUN_146ce5dee(void)

void FUN_146ce5dee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ce5e82 FUN_146ce5e82 body=150 status=ok
// SIG undefined FUN_146ce5e82(void)

undefined8 * FUN_146ce5e82(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  param_1[4] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = DAT_14c846330;
  *(undefined4 *)(param_1 + 7) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x3c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  memset(param_1 + 9,0,0x88);
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x3f80000000000000;
  param_1[0x25] = 0xbf800000bf800000;
  return param_1;
}



// FUNCTION 146ce5f18 FUN_146ce5f18 body=62 status=ok
// SIG undefined FUN_146ce5f18(void)

void FUN_146ce5f18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ce5f56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x160,0x10);
  }
  return;
}



// FUNCTION 146ce5f56 FUN_146ce5f56 body=110 status=ok
// SIG undefined FUN_146ce5f56(void)

ulonglong FUN_146ce5f56(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x160) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146ce5f8f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x160,0x10);
      param_2 = param_2 / 0x160;
    }
  }
LAB_146ce5f8f:
  return param_2 & 0xffffffff;
}



// FUNCTION 146ce5fc4 FUN_146ce5fc4 body=181 status=ok
// SIG undefined FUN_146ce5fc4(void)

longlong FUN_146ce5fc4(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146ce605c;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146ce607a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146ce605c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146ce607a FUN_146ce607a body=275 status=ok
// SIG undefined FUN_146ce607a(void)

undefined4 * FUN_146ce607a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146ce618e(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_146ce6274(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146ce6386(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce618e FUN_146ce618e body=229 status=ok
// SIG undefined FUN_146ce618e(void)

int * FUN_146ce618e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146ce6274 FUN_146ce6274 body=159 status=ok
// SIG undefined FUN_146ce6274(void)

undefined8 FUN_146ce6274(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_146ce6314(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ce6314 FUN_146ce6314 body=114 status=ok
// SIG undefined FUN_146ce6314(void)

void FUN_146ce6314(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146ce6386 FUN_146ce6386 body=423 status=ok
// SIG undefined FUN_146ce6386(void)

void FUN_146ce6386(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(char *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce652e FUN_146ce652e body=105 status=ok
// SIG undefined FUN_146ce652e(void)

void FUN_146ce652e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406b7a4a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 146ce6598 FUN_146ce6598 body=67 status=ok
// SIG undefined FUN_146ce6598(void)

void FUN_146ce6598(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146cc35d2(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146ce6386(param_1);
    return;
  }
  FUN_146ce65dc(param_1);
  FUN_146cc35d2(param_1,0);
  return;
}



// FUNCTION 146ce65dc FUN_146ce65dc body=322 status=ok
// SIG undefined FUN_146ce65dc(void)

void FUN_146ce65dc(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 146ce6720 FUN_146ce6720 body=82 status=ok
// SIG undefined FUN_146ce6720(void)

void FUN_146ce6720(longlong *param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] + 0x7fU & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_146ce6772(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146ce6772 FUN_146ce6772 body=90 status=ok
// SIG undefined FUN_146ce6772(void)

void FUN_146ce6772(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146ce67cc();
  return;
}



// FUNCTION 146ce67cc FUN_146ce67cc body=52 status=ok
// SIG undefined FUN_146ce67cc(void)

void FUN_146ce67cc(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146ce6314(param_1,param_2);
  return;
}



// FUNCTION 146ce6800 FUN_146ce6800 body=300 status=ok
// SIG undefined FUN_146ce6800(void)

undefined4 * FUN_146ce6800(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ce692e(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_146ce6abe(local_40 + 2,uVar1);
  local_40[0x5a] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_146ce6a1c(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x5b] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x5a] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146ce6fec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce692e FUN_146ce692e body=237 status=ok
// SIG undefined FUN_146ce692e(void)

int * FUN_146ce692e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1457c328a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x170);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x170) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x170 + *param_1;
  return param_2;
}



// FUNCTION 146ce6a1c FUN_146ce6a1c body=162 status=ok
// SIG undefined FUN_146ce6a1c(void)

undefined8 FUN_146ce6a1c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x170);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x170) == *param_3) {
          FUN_146cb7dc8((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x168);
          FUN_146ce6f72(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x168);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ce6abe FUN_146ce6abe body=435 status=ok
// SIG undefined FUN_146ce6abe(void)

undefined8 * FUN_146ce6abe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140509e62(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140509e62(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_146ce6c72(param_1 + 6,param_2 + 6);
  puVar4 = param_2 + 0x10;
  puVar5 = param_1 + 0x10;
  for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_2 + 0x21);
  pvVar2 = (void *)param_2[0x20];
  *(int *)(param_1 + 0x21) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_146ce6d66(param_1 + 0x20,iVar1);
    memcpy((void *)param_1[0x20],pvVar2,(longlong)iVar1 << 4);
  }
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_146ce6dbe(param_1 + 0x22,param_2 + 0x22);
  return param_1;
}



// FUNCTION 146ce6c72 FUN_146ce6c72 body=122 status=ok
// SIG undefined FUN_146ce6c72(void)

longlong FUN_146ce6c72(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146ce6cec(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ce6cec FUN_146ce6cec body=121 status=ok
// SIG undefined FUN_146ce6cec(void)

undefined8 * FUN_146ce6cec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146cc376e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 146ce6d66 FUN_146ce6d66 body=88 status=ok
// SIG undefined FUN_146ce6d66(void)

void FUN_146ce6d66(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146ce6dbe FUN_146ce6dbe body=122 status=ok
// SIG undefined FUN_146ce6dbe(void)

longlong FUN_146ce6dbe(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146ce6e38(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ce6e38 FUN_146ce6e38 body=201 status=ok
// SIG undefined FUN_146ce6e38(void)

undefined8 * FUN_146ce6e38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146cc35d2(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_146ce6f02(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146ce6f02 FUN_146ce6f02 body=112 status=ok
// SIG undefined FUN_146ce6f02(void)

undefined1 * FUN_146ce6f02(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_140509e62(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 146ce6f72 FUN_146ce6f72 body=122 status=ok
// SIG undefined FUN_146ce6f72(void)

void FUN_146ce6f72(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x170) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x170) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x170 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146ce6fec FUN_146ce6fec body=432 status=ok
// SIG undefined FUN_146ce6fec(void)

void FUN_146ce6fec(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x170;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x16c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x168 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce719e FUN_146ce719e body=85 status=ok
// SIG undefined FUN_146ce719e(void)

void FUN_146ce719e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_146ce71f4(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146ce71f4 FUN_146ce71f4 body=95 status=ok
// SIG undefined FUN_146ce71f4(void)

void FUN_146ce71f4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_146ce7254();
  return;
}



// FUNCTION 146ce7254 FUN_146ce7254 body=82 status=ok
// SIG undefined FUN_146ce7254(void)

void FUN_146ce7254(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_146ce7320(lVar1 + lVar2 + 8);
  FUN_146ce72a6(param_1,param_2);
  return;
}



// FUNCTION 146ce72a6 FUN_146ce72a6 body=122 status=ok
// SIG undefined FUN_146ce72a6(void)

void FUN_146ce72a6(longlong *param_1,int param_2)

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



// FUNCTION 146ce7320 FUN_146ce7320 body=54 status=ok
// SIG undefined FUN_146ce7320(void)

void FUN_146ce7320(longlong *param_1)

{
  FUN_146ce7356(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ce7356 FUN_146ce7356 body=356 status=ok
// SIG undefined FUN_146ce7356(void)

void FUN_146ce7356(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
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



// FUNCTION 146ce74bc FUN_146ce74bc body=87 status=ok
// SIG undefined FUN_146ce74bc(void)

void FUN_146ce74bc(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x170) == param_2) {
          FUN_146ce7514(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x170 + *param_1 + 0x168);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146ce7514 FUN_146ce7514 body=138 status=ok
// SIG undefined FUN_146ce7514(void)

void FUN_146ce7514(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x170;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x16c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x168 + lVar6 * 0x170);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x170 + 0x168);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x168);
  FUN_146cb7dc8(*param_1 + lVar2 + 8);
  FUN_146ce6f72(param_1,param_2);
  return;
}



// FUNCTION 146ce759e FUN_146ce759e body=43 status=ok
// SIG undefined FUN_146ce759e(void)

undefined8 FUN_146ce759e(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  uVar2 = 0;
  if (0.0 < dVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 146ce75ca FUN_146ce75ca body=43 status=ok
// SIG undefined FUN_146ce75ca(void)

undefined8 FUN_146ce75ca(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  uVar2 = 0;
  if (dVar1 <= 0.0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 146ce7606 FUN_146ce7606 body=248 status=ok
// SIG undefined FUN_146ce7606(void)

longlong * FUN_146ce7606(longlong param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88 [4];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    puVar5 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_68 = *param_3 * local_68;
    dStack_60 = param_3[1] * dStack_60;
    local_58 = param_3[2] * local_58;
    dStack_50 = dStack_50 * 0.0;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_90);
    lVar3 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar3,&local_90,local_88);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_90 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_90 + 0xc) == 0)) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7700 FUN_146ce7700 body=177 status=ok
// SIG undefined FUN_146ce7700(void)

longlong * FUN_146ce7700(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
    lVar3 = FUN_14001cc68(0xc0,0x10);
    FUN_14010f5c4(lVar3,&local_30,param_1 + 0x30);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_30 + 0xc) == 0)) {
        (**(code **)*local_30)(local_30,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce77b2 FUN_146ce77b2 body=754 status=ok
// SIG undefined FUN_146ce77b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce77b2(longlong param_1,double *param_2,longlong *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar3 = *param_2 - *(double *)(param_1 + 0x50);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar9 = param_2[2] - *(double *)(param_1 + 0x60);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar14 = *(double *)(param_1 + 0x40) * -1.0;
  dVar15 = *(double *)(param_1 + 0x48) * 1.0;
  dVar4 = -*(double *)(param_1 + 0x30);
  dVar5 = -*(double *)(param_1 + 0x38);
  dVar16 = dVar3 * dVar14 - dVar4 * dVar9;
  dVar13 = dVar11 * dVar4 - dVar3 * dVar5;
  dVar6 = dVar9 * dVar5 - dVar11 * dVar14;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  auVar10 = divpd(_DAT_149934d80,auVar2);
  local_98 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
             ((dVar13 * dVar5 - dVar16 * dVar14) + dVar15 * dVar6 + dVar3);
  dStack_90 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
              (*(double *)(param_1 + 0x30) * dVar13 + dVar14 * dVar6 + dVar15 * dVar16 + dVar11);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
             (dVar15 * dVar13 + dVar9 + (dVar16 * dVar4 - dVar6 * dVar5));
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb8))();
  if ((iVar7 != -1) && ((longlong)(int)param_3[1] != 0)) {
    pauVar8 = (undefined1 (*) [16])*param_3;
    pauVar1 = (undefined1 (*) [16])((longlong)pauVar8 + (longlong)(int)param_3[1] * 0x18);
    do {
      dVar14 = *(double *)*pauVar8 * *(double *)(param_1 + 0x70);
      dVar11 = *(double *)(*pauVar8 + 8) * *(double *)(param_1 + 0x78);
      dVar9 = *(double *)pauVar8[1] * *(double *)(param_1 + 0x80);
      dVar5 = *(double *)(param_1 + 0x30);
      dVar6 = *(double *)(param_1 + 0x38);
      dVar16 = *(double *)(param_1 + 0x40);
      dVar3 = *(double *)(param_1 + 0x48);
      dVar15 = dVar11 * dVar5 - dVar14 * dVar6;
      dVar12 = dVar9 * dVar6 - dVar11 * dVar16;
      dVar13 = dVar14 * dVar16 - dVar5 * dVar9;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar15 = dVar15 + dVar15;
      dVar4 = (dVar16 * dVar12 - dVar5 * dVar15) + *(double *)(param_1 + 0x48) * dVar13 + dVar11 +
              *(double *)(param_1 + 0x58);
      dVar11 = *(double *)(param_1 + 0x60);
      auVar2._8_4_ = SUB84(dVar4,0);
      auVar2._0_8_ = (dVar15 * dVar6 - dVar13 * dVar16) + dVar3 * dVar12 + dVar14 +
                     *(double *)(param_1 + 0x50);
      auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *pauVar8 = auVar2;
      *(double *)pauVar8[1] = dVar15 * dVar3 + dVar9 + (dVar13 * dVar5 - dVar12 * dVar6) + dVar11;
      pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 8);
    } while (pauVar8 != pauVar1);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7aa6 FUN_146ce7aa6 body=479 status=ok
// SIG undefined FUN_146ce7aa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ce7aa6(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar2 = *param_2 - *(double *)(param_1 + 0x50);
  dVar3 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar8 = param_2[2] - *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar10 = *(double *)(param_1 + 0x40) * -1.0;
  dVar11 = *(double *)(param_1 + 0x48) * 1.0;
  dVar4 = -*(double *)(param_1 + 0x30);
  dVar5 = -*(double *)(param_1 + 0x38);
  dVar12 = dVar2 * dVar10 - dVar4 * dVar8;
  dVar6 = dVar3 * dVar4 - dVar2 * dVar5;
  dVar7 = dVar8 * dVar5 - dVar3 * dVar10;
  dVar7 = dVar7 + dVar7;
  dVar12 = dVar12 + dVar12;
  dVar6 = dVar6 + dVar6;
  auVar9 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar9._0_8_) *
             ((dVar6 * dVar5 - dVar12 * dVar10) + dVar11 * dVar7 + dVar2);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar9._8_8_) *
              (*(double *)(param_1 + 0x30) * dVar6 + dVar10 * dVar7 + dVar11 * dVar12 + dVar3);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
             (dVar11 * dVar6 + dVar8 + (dVar12 * dVar4 - dVar7 * dVar5));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))();
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7c86 FUN_146ce7c86 body=106 status=ok
// SIG undefined FUN_146ce7c86(void)

void FUN_146ce7c86(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447dc19e(param_1 + 0x30,local_88);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd0))
            (*(longlong **)(param_1 + 0x20),param_2,local_88);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7cf2 FUN_146ce7cf2 body=208 status=ok
// SIG undefined FUN_146ce7cf2(void)

void FUN_146ce7cf2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [12];
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14299547a(param_1 + 0x30,local_c8);
  FUN_1400c6592(param_3,local_68,local_c8);
  lVar1 = param_2[1];
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xe0))
            (*(longlong **)(param_1 + 0x20),param_2,local_68);
  if ((int)lVar1 < (int)param_2[1]) {
    lVar4 = (longlong)(int)lVar1 * 0x70;
    FUN_1447dc19e(*param_2 + lVar4 + 0x10,local_c8,param_1 + 0x30);
    puVar2 = local_c8;
    puVar3 = (undefined8 *)(*param_2 + lVar4 + 0x10);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7dc4 FUN_146ce7dc4 body=165 status=ok
// SIG undefined FUN_146ce7dc4(void)

void FUN_146ce7dc4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_140a2844e(param_2,param_1 + 0x20);
  FUN_1400f4f7e(param_2,param_1 + 0x30);
  FUN_14480c34d(param_2,param_1 + 0x50);
  FUN_14480c34d(param_2,param_1 + 0x70);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN_140d03e72(param_2,param_1 + 0x90);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7e6a FUN_146ce7e6a body=48 status=ok
// SIG undefined FUN_146ce7e6a(void)

void FUN_146ce7e6a(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_146ce8424(param_1 + 0x30);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x100))();
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146ce7e9a FUN_146ce7e9a body=24 status=ok
// SIG undefined FUN_146ce7e9a(void)

int FUN_146ce7e9a(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x118))();
  return iVar1 + 1;
}



// FUNCTION 146ce7eb2 FUN_146ce7eb2 body=247 status=ok
// SIG undefined FUN_146ce7eb2(void)

undefined8
FUN_146ce7eb2(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,int *param_5,
             undefined8 *param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  int *local_c8;
  undefined8 *local_c0;
  longlong local_b8 [12];
  undefined4 local_54;
  int local_50;
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = *param_4;
  local_c0 = (undefined8 *)local_4c;
  local_4c._0_4_ = 0xffffffff;
  local_c8 = &local_50;
  local_b8[0] = param_1;
  local_54 = param_3;
  cVar2 = (*(code *)*param_6)(param_6[1],local_b8,param_2);
  *param_4 = *param_4 + 1;
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x20);
    FUN_1447dc19e(param_1 + 0x30,local_b8,param_2);
    local_c0 = param_6;
    local_c8 = param_5;
    uVar3 = (**(code **)(*plVar1 + 0x138))(plVar1,local_b8,param_3,param_4);
  }
  if ((local_4c._4_8_ ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce7faa FUN_146ce7faa body=89 status=ok
// SIG undefined FUN_146ce7faa(void)

void FUN_146ce7faa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449c5bc8(param_2,local_48,param_1 + 0x30);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x140))(*(longlong **)(param_1 + 0x20),local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce8004 FUN_146ce8004 body=1055 status=ok
// SIG undefined FUN_146ce8004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146ce8004(longlong param_1,double *param_2,double *param_3,double *param_4,
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
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar5 = *param_3 - *(double *)(param_1 + 0x50);
  dVar14 = param_3[1] - *(double *)(param_1 + 0x58);
  dVar4 = param_3[2] - *(double *)(param_1 + 0x60);
  dVar15 = *(double *)(param_1 + 0x30);
  dVar10 = -dVar15;
  dVar11 = -*(double *)(param_1 + 0x38);
  dVar8 = *(double *)(param_1 + 0x40) * -1.0;
  dVar9 = *(double *)(param_1 + 0x48) * 1.0;
  dVar13 = dVar14 * dVar10 - dVar5 * dVar11;
  dVar6 = dVar4 * dVar11 - dVar14 * dVar8;
  dVar16 = dVar5 * dVar8 - dVar4 * dVar10;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar21 = divpd(_DAT_149934d80,auVar1);
  auVar18 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_1 + 0x80));
  dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar21._0_8_);
  dStack_c0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar21._8_8_);
  local_b8 = (double)(-(ulonglong)
                       (9.99999993922529e-09 < ABS(SUB168(*(undefined1 (*) [16])(param_1 + 0x80),0))
                       ) & auVar18._0_8_);
  dVar17 = *param_4 - *(double *)(param_1 + 0x50);
  dVar19 = param_4[1] - *(double *)(param_1 + 0x58);
  dVar12 = param_4[2] - *(double *)(param_1 + 0x60);
  dVar2 = dVar19 * dVar10 - dVar11 * dVar17;
  dVar3 = dVar12 * dVar11 - dVar8 * dVar19;
  dVar20 = dVar17 * dVar8 - dVar12 * dVar10;
  dVar3 = dVar3 + dVar3;
  dVar20 = dVar20 + dVar20;
  dVar2 = dVar2 + dVar2;
  dVar14 = (dVar15 * dVar13 + dVar8 * dVar6 + dVar9 * dVar16 + dVar14) * dStack_c0;
  local_c8 = ((dVar2 * dVar11 - dVar20 * dVar8) + dVar9 * dVar3 + dVar17) * dVar7;
  dStack_c0 = (dVar15 * dVar2 + dVar8 * dVar3 + dVar9 * dVar20 + dVar19) * dStack_c0;
  local_d8 = (dVar13 * dVar9 + dVar4 + (dVar16 * dVar10 - dVar6 * dVar11)) * local_b8;
  local_b8 = (dVar2 * dVar9 + dVar12 + (dVar20 * dVar10 - dVar3 * dVar11)) * local_b8;
  local_e8._8_4_ = SUB84(dVar14,0);
  local_e8._0_8_ = ((dVar13 * dVar11 - dVar16 * dVar8) + dVar9 * dVar6 + dVar5) * dVar7;
  local_e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_f8 = param_5;
  FUN_146dae232(*(undefined8 *)(param_1 + 0x20));
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar16 = *param_2 * *(double *)(param_1 + 0x70);
    dVar12 = param_2[1] * *(double *)(param_1 + 0x78);
    dVar7 = param_2[2] * *(double *)(param_1 + 0x80);
    dVar5 = *(double *)(param_1 + 0x30);
    dVar13 = *(double *)(param_1 + 0x38);
    dVar6 = *(double *)(param_1 + 0x40);
    dVar3 = *(double *)(param_1 + 0x48);
    dVar2 = *(double *)(param_1 + 0x48);
    dVar14 = dVar12 * dVar5 - dVar16 * dVar13;
    dVar15 = dVar7 * dVar13 - dVar12 * dVar6;
    dVar8 = dVar16 * dVar6 - dVar5 * dVar7;
    dVar15 = dVar15 + dVar15;
    dVar8 = dVar8 + dVar8;
    dVar14 = dVar14 + dVar14;
    dVar4 = *(double *)(param_1 + 0x58);
    dVar20 = *(double *)(param_1 + 0x60);
    *param_2 = (dVar14 * dVar13 - dVar8 * dVar6) + dVar3 * dVar15 + dVar16 +
               *(double *)(param_1 + 0x50);
    param_2[1] = (dVar6 * dVar15 - dVar5 * dVar14) + dVar2 * dVar8 + dVar12 + dVar4;
    param_2[2] = dVar14 * dVar3 + dVar7 + (dVar8 * dVar5 - dVar15 * dVar13) + dVar20;
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce8424 FUN_146ce8424 body=210 status=ok
// SIG undefined FUN_146ce8424(void)

void FUN_146ce8424(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = param_1[8];
  uStack_30 = param_1[9];
  local_28 = param_1[10];
  uVar1 = FUN_1448eb174(&local_38,0x18,0);
  local_78 = *param_1;
  uStack_70 = param_1[1];
  local_68 = *(undefined4 *)(param_1 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1449413b4(&local_78,local_50);
  uVar2 = FUN_1448eb174(local_50,0x18,0);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  local_98 = param_1[4];
  uStack_90 = param_1[5];
  local_88 = param_1[6];
  uVar2 = FUN_1448eb174(&local_98,0x18,0);
  FUN_144a78877(uVar2,uVar1);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce84f8 FUN_146ce84f8 body=188 status=ok
// SIG undefined FUN_146ce84f8(void)

longlong FUN_146ce84f8(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_146ce8597;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146ce85b6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_146ce8597:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146ce85b6 FUN_146ce85b6 body=272 status=ok
// SIG undefined FUN_146ce85b6(void)

undefined4 * FUN_146ce85b6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146ce86c8(param_1,local_48);
  FUN_146ce886c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_146ce87b6(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146ce8b02(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce86c8 FUN_146ce86c8 body=238 status=ok
// SIG undefined FUN_146ce86c8(void)

int * FUN_146ce86c8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146ce87b6 FUN_146ce87b6 body=182 status=ok
// SIG undefined FUN_146ce87b6(void)

undefined8 FUN_146ce87b6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_146ce7320((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146ce72a6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ce886c FUN_146ce886c body=147 status=ok
// SIG undefined FUN_146ce886c(void)

undefined4 * FUN_146ce886c(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined4 *)*param_1;
  FUN_146ce8900(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_146ce7320(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce8900 FUN_146ce8900 body=123 status=ok
// SIG undefined FUN_146ce8900(void)

undefined8 * FUN_146ce8900(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146ce897c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146ce897c FUN_146ce897c body=389 status=ok
// SIG undefined FUN_146ce897c(void)

longlong * FUN_146ce897c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce8b02 FUN_146ce8b02 body=423 status=ok
// SIG undefined FUN_146ce8b02(void)

void FUN_146ce8b02(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce8caa FUN_146ce8caa body=181 status=ok
// SIG undefined FUN_146ce8caa(void)

longlong FUN_146ce8caa(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146ce8d42;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146ce8d60(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146ce8d42:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146ce8d60 FUN_146ce8d60 body=275 status=ok
// SIG undefined FUN_146ce8d60(void)

undefined4 * FUN_146ce8d60(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146ce8e74(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_146ce8f5a(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146ce906c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce8e74 FUN_146ce8e74 body=229 status=ok
// SIG undefined FUN_146ce8e74(void)

int * FUN_146ce8e74(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146ce8f5a FUN_146ce8f5a body=159 status=ok
// SIG undefined FUN_146ce8f5a(void)

undefined8 FUN_146ce8f5a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146ce8ffa(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ce8ffa FUN_146ce8ffa body=114 status=ok
// SIG undefined FUN_146ce8ffa(void)

void FUN_146ce8ffa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 146ce906c FUN_146ce906c body=422 status=ok
// SIG undefined FUN_146ce906c(void)

void FUN_146ce906c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce9214 FUN_146ce9214 body=67 status=ok
// SIG undefined FUN_146ce9214(void)

void FUN_146ce9214(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140d9cf5a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146ce8b02(param_1);
    return;
  }
  FUN_146ce9258(param_1);
  FUN_140d9cf5a(param_1,0);
  return;
}



// FUNCTION 146ce9258 FUN_146ce9258 body=326 status=ok
// SIG undefined FUN_146ce9258(void)

void FUN_146ce9258(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 146ce93a0 FUN_146ce93a0 body=587 status=ok
// SIG undefined FUN_146ce93a0(void)

void FUN_146ce93a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    uStack_7c = 0x80;
    uStack_78 = 0xffffffff;
    uStack_74 = 0;
    FUN_146ce7356(&local_a8,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    local_c0 = param_1 + 2;
    local_c8 = 0x100000000;
    local_b8 = 0xffffffff;
    local_b0 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_c8);
    }
    uStack_60 = local_c8;
    local_58 = local_c0;
    uStack_50 = local_b8;
    uVar3 = uStack_50;
    local_48 = CONCAT44(local_ac,local_b0);
    uStack_50._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
    if (uStack_50._4_4_ < (int)local_c0[3]) {
      local_68 = param_1;
      uStack_50 = uVar3;
      do {
        FUN_146ce8e74(&local_a8,&local_c8);
        lVar1 = *local_68;
        lVar4 = (longlong)uStack_50._4_4_ * 0x20;
        *(undefined4 *)local_c0 = *(undefined4 *)(lVar1 + lVar4);
        local_c0[1] = 0;
        local_c0[1] = *(longlong *)(lVar1 + 8 + lVar4);
        *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
        *(undefined4 *)(local_c0 + 2) = *(undefined4 *)(lVar1 + 0x10 + lVar4);
        *(undefined4 *)((longlong)local_c0 + 0x14) = *(undefined4 *)(lVar1 + 0x14 + lVar4);
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0;
        local_c0[3] = *(longlong *)(lVar1 + 0x18 + lVar4);
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_60._4_4_);
        FUN_1449c0562(&uStack_60);
      } while (uStack_50._4_4_ < (int)local_58[3]);
    }
    local_38 = param_1[6];
    local_68 = (longlong *)*param_1;
    uStack_60 = param_1[1];
    lVar1 = param_1[2];
    lVar4 = param_1[3];
    local_48 = param_1[4];
    lVar2 = param_1[5];
    param_1[6] = CONCAT44(uStack_74,uStack_78);
    param_1[4] = local_88;
    param_1[5] = CONCAT44(uStack_7c,uStack_80);
    param_1[2] = CONCAT44(uStack_94,local_98);
    param_1[3] = CONCAT44(uStack_8c,uStack_90);
    *param_1 = local_a8;
    param_1[1] = lStack_a0;
    uStack_78 = (undefined4)local_38;
    uStack_74 = (undefined4)((ulonglong)local_38 >> 0x20);
    local_58._0_4_ = (undefined4)lVar1;
    local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_50._0_4_ = (uint)lVar4;
    uStack_50._4_4_ = (int)((ulonglong)lVar4 >> 0x20);
    uStack_40._0_4_ = (undefined4)lVar2;
    uStack_40._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (uint)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = (longlong)local_68;
    lStack_a0 = uStack_60;
    local_88 = local_48;
    local_58 = (longlong *)lVar1;
    uStack_50 = lVar4;
    uStack_40 = lVar2;
    FUN_146ce7320();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce95ec FUN_146ce95ec body=326 status=ok
// SIG undefined FUN_146ce95ec(void)

undefined4 * FUN_146ce95ec(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146ce9734(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146ce981a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146ce992a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce9734 FUN_146ce9734 body=230 status=ok
// SIG undefined FUN_146ce9734(void)

int * FUN_146ce9734(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146ce981a FUN_146ce981a body=134 status=ok
// SIG undefined FUN_146ce981a(void)

undefined8 FUN_146ce981a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146ce98a0((int)lVar3,*param_4,1);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ce98a0 FUN_146ce98a0 body=138 status=ok
// SIG undefined FUN_146ce98a0(void)

void FUN_146ce98a0(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ce992a FUN_146ce992a body=474 status=ok
// SIG undefined FUN_146ce992a(void)

void FUN_146ce992a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ce9b06 FUN_146ce9b06 body=132 status=ok
// SIG undefined FUN_146ce9b06(void)

void FUN_146ce9b06(longlong param_1,int param_2)

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



// FUNCTION 146ce9b8c FUN_146ce9b8c body=344 status=ok
// SIG undefined FUN_146ce9b8c(void)

undefined4 *
FUN_146ce9b8c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146ce9ce6(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_146ce9dcc(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146ce9eea(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ce9ce6 FUN_146ce9ce6 body=230 status=ok
// SIG undefined FUN_146ce9ce6(void)

int * FUN_146ce9ce6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146ce9dcc FUN_146ce9dcc body=148 status=ok
// SIG undefined FUN_146ce9dcc(void)

void FUN_146ce9dcc(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_146ce9e60((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_146ce9e36;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_146ce9e36:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 146ce9e60 FUN_146ce9e60 body=138 status=ok
// SIG undefined FUN_146ce9e60(void)

void FUN_146ce9e60(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ce9eea FUN_146ce9eea body=474 status=ok
// SIG undefined FUN_146ce9eea(void)

void FUN_146ce9eea(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cea0c6 FUN_146cea0c6 body=68 status=ok
// SIG undefined FUN_146cea0c6(void)

void FUN_146cea0c6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146cea10a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146cea10a FUN_146cea10a body=322 status=ok
// SIG undefined FUN_146cea10a(void)

void FUN_146cea10a(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 146cea24e FUN_146cea24e body=132 status=ok
// SIG undefined FUN_146cea24e(void)

void FUN_146cea24e(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_146cea2d2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146cea2d2 FUN_146cea2d2 body=93 status=ok
// SIG undefined FUN_146cea2d2(void)

void FUN_146cea2d2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_146ce9e60(param_1,param_2,1);
  return;
}



// FUNCTION 146cea330 FUN_146cea330 body=139 status=ok
// SIG undefined FUN_146cea330(void)

void FUN_146cea330(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x90) == param_2) {
          FUN_146cea3bc(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x90 + *param_1 + 0x80);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146cea3bc FUN_146cea3bc body=106 status=ok
// SIG undefined FUN_146cea3bc(void)

void FUN_146cea3bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x84 + (longlong)param_2 * 0x90);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x80 + lVar5 * 0x90);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x90 + 0x80);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x90 + 0x80);
  FUN_146cea426();
  return;
}



// FUNCTION 146cea426 FUN_146cea426 body=122 status=ok
// SIG undefined FUN_146cea426(void)

void FUN_146cea426(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 146cea4a0 FUN_146cea4a0 body=188 status=ok
// SIG undefined FUN_146cea4a0(void)

longlong FUN_146cea4a0(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_146cea53f;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146cea55e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_146cea53f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146cea55e FUN_146cea55e body=272 status=ok
// SIG undefined FUN_146cea55e(void)

undefined4 * FUN_146cea55e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146cea670(param_1,local_48);
  FUN_146cea814(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_146cea75e(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146ceaa38(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cea670 FUN_146cea670 body=238 status=ok
// SIG undefined FUN_146cea670(void)

int * FUN_146cea670(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146cea75e FUN_146cea75e body=182 status=ok
// SIG undefined FUN_146cea75e(void)

undefined8 FUN_146cea75e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140a356f6((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_146cea9be(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146cea814 FUN_146cea814 body=154 status=ok
// SIG undefined FUN_146cea814(void)

undefined4 * FUN_146cea814(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_146cea8b0(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cea8b0 FUN_146cea8b0 body=123 status=ok
// SIG undefined FUN_146cea8b0(void)

undefined8 * FUN_146cea8b0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146cea92c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146cea92c FUN_146cea92c body=146 status=ok
// SIG undefined FUN_146cea92c(void)

longlong * FUN_146cea92c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 146cea9be FUN_146cea9be body=122 status=ok
// SIG undefined FUN_146cea9be(void)

void FUN_146cea9be(longlong *param_1,int param_2)

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



// FUNCTION 146ceaa38 FUN_146ceaa38 body=423 status=ok
// SIG undefined FUN_146ceaa38(void)

void FUN_146ceaa38(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ceabe0 FUN_146ceabe0 body=138 status=ok
// SIG undefined FUN_146ceabe0(void)

void FUN_146ceabe0(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146ceac6a FUN_146ceac6a body=48 status=ok
// SIG undefined FUN_146ceac6a(void)

void FUN_146ceac6a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146ceac9a FUN_146ceac9a body=209 status=ok
// SIG undefined FUN_146ceac9a(void)

void FUN_146ceac9a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = (int)param_2[1];
  if (iVar3 != 0) {
    uVar5 = *(uint *)*param_2;
    uVar2 = 1;
    if (1 < iVar3) {
      lVar4 = 1;
      do {
        uVar1 = *(uint *)(*param_2 + lVar4 * 4);
        if (uVar1 != uVar5) {
          if ((0 < (int)uVar2) && ((int)(uVar5 + 1) < (int)uVar1)) {
            lVar6 = (longlong)(int)(uVar5 + 1);
            iVar3 = ~uVar5 + uVar1;
            do {
              *(undefined8 *)((ulonglong)uVar2 * -8 + *param_1 + lVar6 * 8) =
                   *(undefined8 *)(*param_1 + lVar6 * 8);
              lVar6 = lVar6 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            iVar3 = (int)param_2[1];
          }
          uVar2 = uVar2 + 1;
          uVar5 = uVar1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    iVar3 = (int)param_1[1];
    if ((0 < (int)uVar2) && ((int)(uVar5 + 1) < iVar3)) {
      lVar4 = (longlong)(int)(uVar5 + 1);
      iVar3 = ~uVar5 + iVar3;
      do {
        *(undefined8 *)((ulonglong)uVar2 * -8 + *param_1 + lVar4 * 8) =
             *(undefined8 *)(*param_1 + lVar4 * 8);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = (int)param_1[1];
    }
    FUN_146cead6c(param_1,iVar3 - uVar2,0);
    return;
  }
  return;
}



// FUNCTION 146cead6c FUN_146cead6c body=123 status=ok
// SIG undefined FUN_146cead6c(void)

void FUN_146cead6c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1406b7a4a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1400ca182(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ceade8 FUN_146ceade8 body=294 status=ok
// SIG undefined FUN_146ceade8(void)

void FUN_146ceade8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  
  iVar6 = *(int *)(param_2 + 0x18);
  if (iVar6 == -1) {
    uVar9 = *(uint *)(param_2 + 0x1c);
    piVar2 = (int *)(param_1 + (ulonglong)uVar9 * 4);
    *piVar2 = *piVar2 + 1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    lVar5 = param_1 + (ulonglong)uVar9 * 0x10;
    iVar6 = *(int *)(lVar5 + 0x40);
    *(int *)(param_2 + 0x18) = iVar6;
    *(uint *)(lVar5 + 0x40) = iVar6 + 1U;
    if (*(uint *)(lVar5 + 0x44) < iVar6 + 1U) {
      FUN_140431d5c((longlong *)(lVar5 + 0x38),iVar6);
    }
    lVar5 = *(longlong *)(lVar5 + 0x38);
    lVar7 = (longlong)iVar6 * 0x20;
    *(longlong *)(lVar5 + lVar7) = param_2;
    *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
    puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar7);
    *puVar3 = 0;
    puVar3[1] = 0;
    iVar6 = *(int *)(param_2 + 0x18);
  }
  lVar5 = *(longlong *)(param_1 + 0x38 + (ulonglong)*(uint *)(param_2 + 0x1c) * 0x10);
  lVar7 = (longlong)iVar6 * 0x20;
  uVar9 = *(uint *)(lVar5 + 0x18 + lVar7);
  if ((int)uVar9 <= param_3) {
    lVar1 = lVar5 + lVar7;
    plVar8 = (longlong *)(lVar5 + lVar7 + 0x10);
    do {
      iVar6 = *(int *)(param_1 + 0x110);
      *(uint *)(param_1 + 0x110) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x114) < iVar6 + 1U) {
        FUN_140105448((longlong *)(param_1 + 0x108),iVar6);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 8) = (ulonglong)uVar9;
      iVar4 = *(int *)(lVar1 + 0x18);
      *(uint *)(lVar1 + 0x18) = iVar4 + 1U;
      if (*(uint *)(lVar1 + 0x1c) < iVar4 + 1U) {
        FUN_1446f48e2(plVar8,iVar4);
      }
      *(int *)(*plVar8 + (longlong)iVar4 * 4) = iVar6;
      uVar9 = uVar9 + 1;
    } while (param_3 + 1U != uVar9);
  }
  return;
}



// FUNCTION 146ceaf0e FUN_146ceaf0e body=200 status=ok
// SIG undefined FUN_146ceaf0e(void)

longlong FUN_146ceaf0e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x90;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x90) == *param_3) {
          if (lVar3 != 0) goto LAB_146ceafb9;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x80);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_146ceafd8(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x90 + *param_1;
LAB_146ceafb9:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 146ceafd8 FUN_146ceafd8 body=382 status=ok
// SIG undefined FUN_146ceafd8(void)

undefined4 *
FUN_146ceafd8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_146ceb158(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[2] = 0;
  local_50[3] = 0;
  *(undefined4 *)(local_50 + 4) = 0;
  *(undefined4 *)((longlong)local_50 + 0x24) = 0;
  *(undefined4 *)(local_50 + 5) = 0;
  *(undefined4 *)((longlong)local_50 + 0x2c) = 0x3ff00000;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  *(undefined4 *)(local_50 + 10) = 0;
  *(undefined4 *)((longlong)local_50 + 0x54) = 0x3ff00000;
  *(undefined4 *)(local_50 + 0xb) = 0;
  *(undefined4 *)((longlong)local_50 + 0x5c) = 0x3ff00000;
  local_50[0xc] = 0x3ff0000000000000;
  local_50[0xd] = 0;
  local_50[0xe] = 0xffffffff00000000;
  local_50[0xf] = 0;
  *(undefined4 *)(local_50 + 0x10) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_146ceb248(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x84) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x10) =
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
      FUN_146ceb382(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ceb158 FUN_146ceb158 body=240 status=ok
// SIG undefined FUN_146ceb158(void)

int * FUN_146ceb158(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_146ceb2ee(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 146ceb248 FUN_146ceb248 body=166 status=ok
// SIG undefined FUN_146ceb248(void)

void FUN_146ceb248(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x90);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x80);
          FUN_146cea426(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146ceb2c0;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146ceb2c0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146ceb2ee FUN_146ceb2ee body=147 status=ok
// SIG undefined FUN_146ceb2ee(void)

void FUN_146ceb2ee(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ceb382 FUN_146ceb382 body=484 status=ok
// SIG undefined FUN_146ceb382(void)

void FUN_146ceb382(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x90;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x84 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x80 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ceb568 FUN_146ceb568 body=181 status=ok
// SIG undefined FUN_146ceb568(void)

longlong FUN_146ceb568(longlong *param_1,uint param_2,int *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == *param_3) {
          if (lVar3 != 0) goto LAB_146ceb600;
          break;
        }
        iVar1 = *(int *)(lVar3 + 8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146ceb61e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x10 + *param_1;
LAB_146ceb600:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 4;
}



// FUNCTION 146ceb61e FUN_146ceb61e body=275 status=ok
// SIG undefined FUN_146ceb61e(void)

undefined4 * FUN_146ceb61e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146ceb732(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff00000000;
  cVar1 = FUN_146ceb818(param_1,param_3,local_40,local_48);
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
      local_40[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[2] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146ceb90a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ceb732 FUN_146ceb732 body=229 status=ok
// SIG undefined FUN_146ceb732(void)

int * FUN_146ceb732(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_144869a3c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146ceb818 FUN_146ceb818 body=127 status=ok
// SIG undefined FUN_146ceb818(void)

undefined8 FUN_146ceb818(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146ceb898(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ceb898 FUN_146ceb898 body=114 status=ok
// SIG undefined FUN_146ceb898(void)

void FUN_146ceb898(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 146ceb90a FUN_146ceb90a body=422 status=ok
// SIG undefined FUN_146ceb90a(void)

void FUN_146ceb90a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146cebab2 FUN_146cebab2 body=328 status=ok
// SIG undefined FUN_146cebab2(void)

undefined4 *
FUN_146cebab2(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409bc900(param_1,local_50);
  FUN_146cebbfc(param_3,local_48);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_68 = param_4;
  cVar2 = FUN_1409bc7bc(param_1,uVar3,local_48,&local_54);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cebbfc FUN_146cebbfc body=99 status=ok
// SIG undefined FUN_146cebbfc(void)

undefined8 * FUN_146cebbfc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 146cebc60 FUN_146cebc60 body=313 status=ok
// SIG undefined FUN_146cebc60(void)

void FUN_146cebc60(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_68 = (void *)0x0;
  uStack_60._4_4_ = 0;
  uStack_60._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_1447a1bd6(&local_68);
    memset(local_68,0,(longlong)(int)uVar2 << 4);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        pvVar1 = local_68;
        puVar4 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar3 * 4) * 0x10 + param_1[2]);
        if ((undefined8 *)(lVar5 + (longlong)local_68) != puVar4) {
          if (*(longlong *)((longlong)local_68 + lVar5) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)((longlong)pvVar1 + lVar5) = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 8) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)pvVar1 + lVar5 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 != uVar3);
    }
  }
  local_58 = (void *)param_1[2];
  uStack_50 = param_1[3];
  param_1[2] = (longlong)local_68;
  *(uint *)(param_1 + 3) = (uint)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  local_68 = local_58;
  uStack_60 = uStack_50;
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cebd9a FUN_146cebd9a body=105 status=ok
// SIG undefined FUN_146cebd9a(void)

void FUN_146cebd9a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_144a787a6(param_1[2] + lVar2,param_2[2] + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  return;
}



// FUNCTION 146cebe04 FUN_146cebe04 body=94 status=ok
// SIG undefined FUN_146cebe04(void)

void FUN_146cebe04(longlong *param_1,longlong *param_2,undefined4 param_3,int param_4,int param_5)

{
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((int)param_1[3] < param_5 + param_4) {
    return;
  }
  FUN_146cebf9d(param_1 + 2,param_2,param_3,param_4);
  return;
}



// FUNCTION 146cebe6c FUN_146cebe6c body=172 status=ok
// SIG undefined FUN_146cebe6c(void)

void FUN_146cebe6c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar5 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar3 = (int *)*param_2;
      iVar4 = piVar3[uVar5 - 1];
      for (; uVar5 != 1; uVar5 = uVar5 - 1) {
        iVar1 = piVar3[uVar5 - 1];
        if ((iVar1 != piVar3[uVar5 - 2] + 1) &&
           (iVar2 = (iVar4 - iVar1) + 1, iVar4 = piVar3[uVar5 - 2], iVar2 != 0)) {
          FUN_1468548c8(param_1 + 0x10,iVar1,iVar2);
          piVar3 = (int *)*param_2;
          iVar4 = piVar3[uVar5 - 2];
        }
      }
      if (iVar4 - *piVar3 != -1) {
        FUN_1468548c8(param_1 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_1408be2c4(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146cebf1c FUN_146cebf1c body=59 status=ok
// SIG undefined FUN_146cebf1c(void)

void FUN_146cebf1c(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1408be2c4(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146cebf58 FUN_146cebf58 body=69 status=ok
// SIG undefined FUN_146cebf58(void)

undefined8 * FUN_146cebf58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f4b720;
  FUN_1447a1747(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cebf9d FUN_146cebf9d body=150 status=ok
// SIG undefined FUN_146cebf9d(void)

void FUN_146cebf9d(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  if (param_3 < iVar1) {
    lVar4 = (longlong)param_3;
    lVar5 = (longlong)(param_3 + param_5);
    lVar2 = lVar4 << 4;
    lVar3 = lVar5 << 4;
    do {
      if ((int)param_1[1] <= lVar5) {
        return;
      }
      if (param_4 <= lVar4) {
        return;
      }
      FUN_144a787a6(*param_1 + lVar3,param_2[2] + lVar2);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar1);
  }
  return;
}



// FUNCTION 146cec034 FUN_146cec034 body=211 status=ok
// SIG undefined FUN_146cec034(void)

void FUN_146cec034(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_1447403be(&local_48);
    memset(local_48,0,(longlong)(int)uVar1);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined1 *)((longlong)local_48 + uVar2) =
             *(undefined1 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cec108 FUN_146cec108 body=149 status=ok
// SIG undefined FUN_146cec108(void)

void FUN_146cec108(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined1 *)(param_1[2] + lVar2) = *(undefined1 *)(param_2[2] + lVar3);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146cec1a4 FUN_146cec1a4 body=122 status=ok
// SIG undefined FUN_146cec1a4(void)

void FUN_146cec1a4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cec220 FUN_146cec220 body=231 status=ok
// SIG undefined FUN_146cec220(void)

void FUN_146cec220(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)iVar5 + (longlong)pvVar2),(longlong)iVar7);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)iVar6 + (longlong)pvVar2),(longlong)iVar7);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_144893a1c(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146cec30c FUN_146cec30c body=206 status=ok
// SIG undefined FUN_146cec30c(void)

void FUN_146cec30c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_144a681b6(param_2,param_1 + 0x10);
  }
  else {
    FUN_140d270aa(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cec3f6 FUN_146cec3f6 body=57 status=ok
// SIG undefined FUN_146cec3f6(void)

undefined8 * FUN_146cec3f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f4b7f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146cec42f FUN_146cec42f body=3488 status=ok
// SIG undefined FUN_146cec42f(void)

void FUN_146cec42f(longlong param_1,longlong param_2,double *param_3,double *param_4,double *param_5
                  ,double *param_6,double *param_7,double *param_8,undefined8 param_9,
                  undefined8 param_10,double *param_11,longlong *param_12,double *param_13,
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
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong *local_160;
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
  local_2e0 = *(double *)(param_1 + 8);
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146cec621:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_1404b5d90(param_1,&local_228,local_278,*(undefined8 *)(param_1 + 8));
  FUN_146ced448(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cec86c;
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
  local_168 = FUN_146cee764;
  local_170 = local_278;
  local_178 = FUN_146cee7cc;
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
    goto LAB_146cecb5d;
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
  goto LAB_146cec8ef;
code_r0x000146cec86c:
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
LAB_146cec8ef:
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
LAB_146cecb5d:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cec621;
}



// FUNCTION 146ced1d0 FUN_146ced1d0 body=631 status=ok
// SIG undefined FUN_146ced1d0(void)

void FUN_146ced1d0(longlong param_1,double *param_2,undefined4 *param_3,longlong param_4,
                  double *param_5,double *param_6,double param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  double dVar3;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_3 = 0;
  if (0 < *(int *)(param_1 + 0xe0)) {
    local_a0 = param_1 + 0x60;
    lVar13 = 0;
    lVar14 = 0;
    do {
      pdVar1 = (double *)(param_1 + 0x60 + lVar13);
      dVar8 = *pdVar1;
      dVar9 = pdVar1[1];
      dVar15 = *(double *)(param_1 + 0x70 + lVar13);
      dVar10 = *param_2;
      dVar11 = param_2[1];
      dVar12 = param_2[2];
      dVar2 = param_2[3];
      dVar3 = param_2[3];
      dVar16 = dVar9 * dVar10 - dVar8 * dVar11;
      dVar17 = dVar15 * dVar11 - dVar9 * dVar12;
      dVar18 = dVar8 * dVar12 - dVar10 * dVar15;
      dVar17 = dVar17 + dVar17;
      dVar18 = dVar18 + dVar18;
      dVar16 = dVar16 + dVar16;
      dVar15 = *(double *)(param_1 + 0x70 + lVar13);
      dVar7 = param_2[5];
      dVar4 = param_2[6];
      dVar5 = *(double *)(param_1 + 0x10 + lVar13);
      dVar6 = *(double *)(param_1 + 8 + lVar13);
      *(double *)(param_4 + lVar13) =
           *(double *)(param_1 + lVar13) -
           ((dVar16 * dVar11 - dVar18 * dVar12) + dVar2 * dVar17 + dVar8 + param_2[4]);
      *(double *)(param_4 + 8 + lVar13) =
           dVar6 - ((dVar12 * dVar17 - dVar10 * dVar16) + dVar3 * dVar18 + dVar9 + dVar7);
      *(double *)(param_4 + 0x10 + lVar13) =
           dVar5 - (dVar16 * dVar2 + dVar15 + (dVar18 * dVar10 - dVar17 * dVar11) + dVar4);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar14 < *(int *)(param_1 + 0xe0));
    local_a8 = param_1;
    FUN_146ced5ca(&local_98,param_4,(undefined4 *)(param_1 + 0xe0),param_1 + 0xc0);
    dVar15 = local_88 * local_88 + local_98 * local_98 + local_90 * local_90;
    if (param_7 * param_7 < dVar15) {
      dVar15 = SQRT(dVar15);
      *param_3 = *(undefined4 *)(param_1 + 0xe0);
      *param_5 = local_98 / dVar15;
      param_5[1] = local_90 / dVar15;
      param_5[2] = local_88 / dVar15;
      *param_6 = dVar15;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ced448 FUN_146ced448 body=385 status=ok
// SIG undefined FUN_146ced448(void)

undefined8 FUN_146ced448(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,param_2,&local_78,*(undefined8 *)(*param_1 + 8));
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ced5ca FUN_146ced5ca body=159 status=ok
// SIG undefined FUN_146ced5ca(void)

undefined8 *
FUN_146ced5ca(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  switch(*param_3) {
  case 1:
    *param_4 = 0x3ff0000000000000;
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    break;
  case 2:
    FUN_146ced669(param_1);
    break;
  case 3:
    FUN_146ced80a(param_1);
    break;
  case 4:
    FUN_146cedea3(param_1);
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}



// FUNCTION 146ced669 FUN_146ced669 body=417 status=ok
// SIG undefined FUN_146ced669(void)

void FUN_146ced669(double *param_1,double *param_2,undefined4 *param_3,double *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = param_2[2];
  dVar10 = param_2[5] - dVar1;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar12 = param_2[4] - dVar3;
  dVar4 = param_2[3] - dVar2;
  dVar11 = (-dVar2 * dVar4 - dVar12 * dVar3) - dVar1 * dVar10;
  if (dVar11 <= 0.0) {
    *param_3 = 1;
    *param_4 = 1.0;
    param_1[2] = param_2[2];
    uVar6 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)((longlong)param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 1);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0xc);
  }
  else {
    dVar5 = dVar10 * dVar10 + dVar4 * dVar4 + dVar12 * dVar12;
    if ((dVar11 < dVar5) && (2.2250738585072014e-308 < dVar5)) {
      dVar11 = dVar11 / dVar5;
      if (1.0 <= dVar11) {
        dVar11 = 1.0;
      }
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      *param_1 = dVar2 + dVar4 * dVar11;
      param_1[1] = dVar3 + dVar12 * dVar11;
      param_1[2] = dVar1 + dVar10 * dVar11;
      *param_4 = 1.0 - dVar11;
      param_4[1] = dVar11;
      return;
    }
    *param_3 = 1;
    *param_4 = 1.0;
    param_2[2] = param_2[5];
    *param_2 = param_2[3];
    param_2[1] = param_2[4];
    param_5[2] = param_5[5];
    *param_5 = param_5[3];
    param_5[1] = param_5[4];
    param_6[2] = param_6[5];
    *param_6 = param_6[3];
    param_6[1] = param_6[4];
    param_1[2] = param_2[5];
    uVar6 = *(undefined4 *)(param_2 + 3);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x24);
  }
  *(undefined4 *)param_1 = uVar6;
  *(undefined4 *)((longlong)param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
  return;
}



// FUNCTION 146ced80a FUN_146ced80a body=1689 status=ok
// SIG undefined FUN_146ced80a(void)

void FUN_146ced80a(double *param_1,double *param_2,undefined4 *param_3,double *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar3 = param_2[5];
  dVar4 = param_2[2];
  dVar17 = dVar3 - dVar4;
  dVar16 = param_2[4];
  dVar18 = *param_2;
  dVar5 = param_2[1];
  dVar9 = dVar16 - dVar5;
  dVar15 = param_2[3] - dVar18;
  dVar6 = param_2[8];
  dVar7 = param_2[7];
  dVar19 = param_2[6] - dVar18;
  dVar8 = (dVar15 * -dVar18 - dVar9 * dVar5) - dVar17 * dVar4;
  dVar20 = dVar7 - dVar5;
  dVar21 = dVar6 - dVar4;
  dVar4 = (-dVar18 * dVar19 - dVar5 * dVar20) - dVar4 * dVar21;
  if ((0.0 < dVar8) || (0.0 < dVar4)) {
    dVar18 = -param_2[3];
    pdVar1 = param_2 + 3;
    dVar5 = (dVar15 * dVar18 - dVar9 * dVar16) - dVar17 * dVar3;
    dVar3 = (dVar18 * dVar19 - dVar16 * dVar20) - dVar3 * dVar21;
    if ((dVar5 < 0.0) || (dVar5 < dVar3)) {
      dVar16 = dVar8 * dVar3 - dVar4 * dVar5;
      if ((((0.0 < dVar8 - dVar5) && (dVar5 <= 0.0)) && (0.0 <= dVar8)) && (dVar16 <= 0.0)) {
        *param_3 = 2;
        dVar8 = dVar8 / (dVar8 - dVar5);
        *param_4 = 1.0 - dVar8;
        param_4[1] = dVar8;
        dVar3 = param_2[2];
        dVar4 = param_2[1];
        *param_1 = dVar15 * dVar8 + *param_2;
        param_1[1] = dVar9 * dVar8 + dVar4;
        param_1[2] = dVar17 * dVar8 + dVar3;
        return;
      }
      dVar18 = -param_2[6];
      pdVar2 = param_2 + 6;
      dVar10 = (dVar15 * dVar18 - dVar9 * dVar7) - dVar17 * dVar6;
      dVar18 = (dVar18 * dVar19 - dVar7 * dVar20) - dVar6 * dVar21;
      if ((dVar18 < 0.0) || (dVar18 < dVar10)) {
        dVar6 = dVar10 * dVar4 - dVar8 * dVar18;
        if (((0.0 < dVar4 - dVar18) && ((dVar18 <= 0.0 && (0.0 <= dVar4)))) && (dVar6 <= 0.0)) {
          dVar4 = dVar4 / (dVar4 - dVar18);
          *param_3 = 2;
          *param_4 = 1.0 - dVar4;
          param_4[1] = dVar4;
          param_2[5] = param_2[8];
          *pdVar1 = *pdVar2;
          param_2[4] = param_2[7];
          param_5[5] = param_5[8];
          param_5[3] = param_5[6];
          param_5[4] = param_5[7];
          param_6[5] = param_6[8];
          param_6[3] = param_6[6];
          param_6[4] = param_6[7];
          dVar3 = param_2[2];
          dVar16 = param_2[1];
          *param_1 = dVar19 * dVar4 + *param_2;
          param_1[1] = dVar20 * dVar4 + dVar16;
          param_1[2] = dVar21 * dVar4 + dVar3;
          return;
        }
        dVar4 = dVar5 * dVar18 - dVar10 * dVar3;
        dVar3 = dVar3 - dVar5;
        dVar5 = dVar3 + (dVar10 - dVar18);
        if ((((0.0 < dVar5) && (0.0 <= dVar10 - dVar18)) && (0.0 <= dVar3)) && (dVar4 <= 0.0)) {
          dVar3 = dVar3 / dVar5;
          *param_3 = 2;
          *param_4 = 1.0 - dVar3;
          param_4[1] = dVar3;
          dVar4 = param_2[8];
          dVar16 = param_2[5];
          dVar18 = param_2[7];
          dVar5 = param_2[4];
          *param_1 = (param_2[6] - param_2[3]) * dVar3 + param_2[3];
          param_1[1] = (dVar18 - dVar5) * dVar3 + dVar5;
          param_1[2] = (dVar4 - dVar16) * dVar3 + dVar16;
          param_2[2] = param_2[5];
          *param_2 = *pdVar1;
          param_2[1] = param_2[4];
          param_2[5] = param_2[8];
          *pdVar1 = *pdVar2;
          param_2[4] = param_2[7];
          param_5[2] = param_5[5];
          *param_5 = param_5[3];
          param_5[1] = param_5[4];
          param_6[2] = param_6[5];
          *param_6 = param_6[3];
          param_6[1] = param_6[4];
          param_5[5] = param_5[8];
          param_5[3] = param_5[6];
          param_5[4] = param_5[7];
          param_6[3] = param_6[6];
          param_6[4] = param_6[7];
          param_6[5] = param_6[8];
          return;
        }
        dVar3 = 1.0 / (dVar4 + dVar6 + dVar16);
        *param_3 = 3;
        *param_4 = dVar4 * dVar3;
        param_4[1] = dVar6 * dVar3;
        param_4[2] = dVar3 * dVar16;
        dVar16 = dVar15 * dVar20 - dVar19 * dVar9;
        dVar3 = dVar17 * dVar19 - dVar21 * dVar15;
        dVar4 = dVar9 * dVar21 - dVar20 * dVar17;
        dVar18 = dVar16 * dVar16 + dVar4 * dVar4 + dVar3 * dVar3;
        if (2.2250738585072014e-308 < dVar18) {
          dVar18 = (dVar16 / dVar18) * param_2[2] +
                   (dVar4 / dVar18) * *param_2 + (dVar3 / dVar18) * param_2[1];
          *param_1 = dVar18 * dVar4;
          param_1[1] = dVar3 * dVar18;
          param_1[2] = dVar16 * dVar18;
          return;
        }
        *param_1 = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        return;
      }
      *param_3 = 1;
      *param_4 = 1.0;
      param_2[2] = param_2[8];
      *param_2 = *pdVar2;
      param_2[1] = param_2[7];
      param_5[2] = param_5[8];
      *param_5 = param_5[6];
      param_5[1] = param_5[7];
      param_6[2] = param_6[8];
      *param_6 = param_6[6];
      param_6[1] = param_6[7];
      param_1[2] = param_2[8];
      uVar11 = *(undefined4 *)pdVar2;
      uVar12 = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar13 = *(undefined4 *)(param_2 + 7);
      uVar14 = *(undefined4 *)((longlong)param_2 + 0x3c);
    }
    else {
      *param_3 = 1;
      *param_4 = 1.0;
      param_2[2] = param_2[5];
      *param_2 = *pdVar1;
      param_2[1] = param_2[4];
      param_5[2] = param_5[5];
      *param_5 = param_5[3];
      param_5[1] = param_5[4];
      param_6[2] = param_6[5];
      *param_6 = param_6[3];
      param_6[1] = param_6[4];
      param_1[2] = param_2[5];
      uVar11 = *(undefined4 *)pdVar1;
      uVar12 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar13 = *(undefined4 *)(param_2 + 4);
      uVar14 = *(undefined4 *)((longlong)param_2 + 0x24);
    }
  }
  else {
    *param_3 = 1;
    *param_4 = 1.0;
    param_1[2] = param_2[2];
    uVar11 = *(undefined4 *)param_2;
    uVar12 = *(undefined4 *)((longlong)param_2 + 4);
    uVar13 = *(undefined4 *)(param_2 + 1);
    uVar14 = *(undefined4 *)((longlong)param_2 + 0xc);
  }
  *(undefined4 *)param_1 = uVar11;
  *(undefined4 *)((longlong)param_1 + 4) = uVar12;
  *(undefined4 *)(param_1 + 1) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar14;
  return;
}



// FUNCTION 146cedea3 FUN_146cedea3 body=2237 status=ok
// SIG undefined FUN_146cedea3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146cedea3(undefined8 *param_1,double *param_2,undefined4 *param_3,double *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
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
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double *pdVar25;
  double dVar26;
  double dVar27;
  undefined1 local_5e8 [32];
  longlong local_5c8;
  longlong local_5c0;
  int local_5b8;
  undefined4 uStack_5b4;
  undefined8 *local_5b0;
  double *local_5a8;
  undefined4 *local_5a0;
  undefined1 local_598 [16];
  double local_580;
  double dStack_578;
  double local_570;
  undefined8 local_568 [16];
  double dStack_4e8;
  undefined4 auStack_4e0 [2];
  undefined8 auStack_4d8 [10];
  undefined8 local_488 [6];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368 [6];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  double local_248 [6];
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128;
  double adStack_120 [6];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_5e8;
  dVar2 = param_2[6];
  dVar3 = param_2[10];
  dVar4 = param_2[7];
  dVar5 = param_2[9];
  dVar26 = dVar2 * dVar3 - dVar5 * dVar4;
  dVar6 = param_2[8];
  dVar7 = param_2[0xb];
  dVar27 = dVar6 * dVar5 - dVar7 * dVar2;
  dVar15 = dVar4 * dVar7 - dVar3 * dVar6;
  dVar8 = param_2[3];
  dVar9 = param_2[4];
  dVar10 = param_2[5];
  local_5b0 = (undefined8 *)(dVar2 * dVar9);
  dVar14 = dVar10 * dVar26 + dVar8 * dVar15 + dVar9 * dVar27;
  adStack_120[1] = (double)((ulonglong)dVar14 ^ DAT_149931e80);
  local_598._8_4_ = DAT_149931e80._8_4_;
  local_598._0_8_ = adStack_120[1];
  local_598._12_4_ = DAT_149931e80._12_4_;
  dVar11 = param_2[1];
  dVar12 = *param_2;
  dVar13 = param_2[2];
  dVar27 = dVar26 * dVar13 + dVar15 * dVar12 + dVar27 * dVar11;
  dVar5 = (dVar8 * dVar3 - dVar5 * dVar9) * dVar13 +
          (dVar9 * dVar7 - dVar3 * dVar10) * dVar12 + (dVar10 * dVar5 - dVar7 * dVar8) * dVar11;
  adStack_120[2] = dVar27;
  dVar3 = -dVar5;
  adStack_120[3] = dVar3;
  dVar2 = (dVar8 * dVar4 - (double)local_5b0) * dVar13 +
          (dVar9 * dVar6 - dVar4 * dVar10) * dVar12 + (dVar10 * dVar2 - dVar6 * dVar8) * dVar11;
  adStack_120[4] = dVar2;
  dVar5 = (dVar2 - dVar5) + (dVar27 - dVar14);
  local_128 = 0x300000003;
  adStack_120[0] = 6.36598737437801e-314;
  local_248[2] = param_2[5];
  local_248[0] = param_2[3];
  local_248[1] = param_2[4];
  local_248[5] = param_2[8];
  local_248[3] = param_2[6];
  local_248[4] = param_2[7];
  local_208 = param_2[0xb];
  local_218 = param_2[9];
  dStack_210 = param_2[10];
  local_1f0 = param_2[2];
  local_200 = *param_2;
  dStack_1f8 = param_2[1];
  local_1d8 = param_2[8];
  local_1e8 = param_2[6];
  dStack_1e0 = param_2[7];
  local_1d0 = param_2[9];
  dStack_1c8 = param_2[10];
  local_1c0 = param_2[0xb];
  local_1b8 = *param_2;
  dStack_1b0 = param_2[1];
  local_1a8 = param_2[2];
  local_1a0 = param_2[3];
  dStack_198 = param_2[4];
  local_190 = param_2[5];
  local_188 = param_2[9];
  dStack_180 = param_2[10];
  local_178 = param_2[0xb];
  local_170 = *param_2;
  dStack_168 = param_2[1];
  local_160 = param_2[2];
  local_158 = param_2[3];
  dStack_150 = param_2[4];
  local_148 = param_2[5];
  local_140 = param_2[6];
  dStack_138 = param_2[7];
  local_130 = param_2[8];
  local_368[2] = param_5[5];
  local_368[0] = param_5[3];
  local_368[1] = param_5[4];
  local_368[5] = param_5[8];
  local_368[3] = param_5[6];
  local_368[4] = param_5[7];
  local_328 = param_5[0xb];
  local_338 = param_5[9];
  uStack_330 = param_5[10];
  local_310 = param_5[2];
  local_320 = *param_5;
  uStack_318 = param_5[1];
  local_2f8 = param_5[8];
  local_308 = param_5[6];
  uStack_300 = param_5[7];
  local_2f0 = param_5[9];
  uStack_2e8 = param_5[10];
  local_2e0 = param_5[0xb];
  local_2d8 = *param_5;
  uStack_2d0 = param_5[1];
  local_2c8 = param_5[2];
  local_2c0 = param_5[3];
  uStack_2b8 = param_5[4];
  local_2b0 = param_5[5];
  local_2a8 = param_5[9];
  uStack_2a0 = param_5[10];
  local_298 = param_5[0xb];
  local_290 = *param_5;
  uStack_288 = param_5[1];
  local_280 = param_5[2];
  local_278 = param_5[3];
  uStack_270 = param_5[4];
  local_268 = param_5[5];
  local_260 = param_5[6];
  uStack_258 = param_5[7];
  local_250 = param_5[8];
  local_488[2] = param_6[5];
  local_488[0] = param_6[3];
  local_488[1] = param_6[4];
  local_488[5] = param_6[8];
  local_488[3] = param_6[6];
  local_488[4] = param_6[7];
  local_448 = param_6[0xb];
  local_458 = param_6[9];
  uStack_450 = param_6[10];
  local_430 = param_6[2];
  local_440 = *param_6;
  uStack_438 = param_6[1];
  local_418 = param_6[8];
  local_428 = param_6[6];
  uStack_420 = param_6[7];
  local_410 = param_6[9];
  uStack_408 = param_6[10];
  local_400 = param_6[0xb];
  local_3f8 = *param_6;
  uStack_3f0 = param_6[1];
  local_3e8 = param_6[2];
  local_3e0 = param_6[3];
  uStack_3d8 = param_6[4];
  local_3d0 = param_6[5];
  local_3c8 = param_6[9];
  uStack_3c0 = param_6[10];
  local_3b8 = param_6[0xb];
  local_3b0 = *param_6;
  uStack_3a8 = param_6[1];
  local_3a0 = param_6[2];
  local_398 = param_6[3];
  uStack_390 = param_6[4];
  local_388 = param_6[5];
  local_380 = param_6[6];
  uStack_378 = param_6[7];
  local_370 = param_6[8];
  bVar20 = true;
  uStack_5b4 = (undefined4)((ulonglong)(dVar4 * dVar10) >> 0x20);
  local_5b8 = -1;
  dVar4 = 0.0;
  lVar23 = 0;
  local_5a8 = param_4;
  do {
    lVar24 = lVar23 + 1;
    pdVar25 = &dStack_4e8 + lVar23 * 3;
    lVar21 = lVar23 * -0x48;
    lVar22 = lVar23 * -4;
    lVar23 = lVar23 * -0x20;
    while ((0.0 < dVar5 && 0.0 < adStack_120[lVar24] || (dVar5 < 0.0 && adStack_120[lVar24] < 0.0)))
    {
      lVar24 = lVar24 + 1;
      pdVar25 = pdVar25 + 3;
      lVar21 = lVar21 + -0x48;
      lVar22 = lVar22 + -4;
      lVar23 = lVar23 + -0x20;
      if (lVar24 == 5) {
        if (bVar20) {
          *local_5a8 = (double)local_598._0_8_ / dVar5;
          local_5a8[1] = dVar27 / dVar5;
          local_5a8[2] = dVar3 / dVar5;
          local_5a8[3] = dVar2 / dVar5;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_f0 ^ (ulonglong)local_5e8);
        }
        goto LAB_146cee675;
      }
    }
    local_5c0 = (longlong)local_488 - lVar21;
    local_5c8 = (longlong)local_368 - lVar21;
    local_5b0 = param_1;
    local_5a0 = param_3;
    FUN_146ced80a(&local_580,(longlong)local_248 - lVar21,(longlong)&local_128 - lVar22,
                  (longlong)local_568 - lVar23);
    pdVar25[2] = local_570;
    *pdVar25 = local_580;
    pdVar25[1] = dStack_578;
    dVar6 = pdVar25[2] * pdVar25[2] + *pdVar25 * *pdVar25 + pdVar25[1] * pdVar25[1];
    if (dVar6 < dVar4 || local_5b8 == -1) {
      local_5b8 = (int)lVar24 + -1;
      dVar4 = dVar6;
    }
    bVar20 = false;
    lVar23 = lVar24;
    param_3 = local_5a0;
    param_1 = local_5b0;
  } while (lVar24 != 4);
LAB_146cee675:
  lVar24 = (longlong)local_5b8;
  *param_3 = *(undefined4 *)((longlong)&local_128 + lVar24 * 4);
  lVar23 = lVar24 * 0x48;
  lVar21 = 0;
  lVar22 = 0;
  do {
    *(undefined8 *)((longlong)local_5a8 + lVar21) =
         *(undefined8 *)((longlong)local_568 + lVar21 + lVar24 * 0x20);
    *(undefined8 *)((longlong)param_2 + lVar22 + 0x10) =
         *(undefined8 *)((longlong)local_248 + lVar22 + lVar23 + 0x10);
    puVar1 = (undefined8 *)((longlong)local_248 + lVar22 + lVar23);
    uVar19 = puVar1[1];
    *(undefined8 *)((longlong)param_2 + lVar22) = *puVar1;
    ((undefined8 *)((longlong)param_2 + lVar22))[1] = uVar19;
    *(undefined8 *)((longlong)param_5 + lVar22 + 0x10) =
         *(undefined8 *)((longlong)local_368 + lVar22 + lVar23 + 0x10);
    puVar1 = (undefined8 *)((longlong)local_368 + lVar22 + lVar23);
    uVar19 = puVar1[1];
    *(undefined8 *)((longlong)param_5 + lVar22) = *puVar1;
    ((undefined8 *)((longlong)param_5 + lVar22))[1] = uVar19;
    *(undefined8 *)((longlong)param_6 + lVar22 + 0x10) =
         *(undefined8 *)((longlong)local_488 + lVar22 + lVar23 + 0x10);
    puVar1 = (undefined8 *)((longlong)local_488 + lVar22 + lVar23);
    uVar19 = puVar1[1];
    *(undefined8 *)((longlong)param_6 + lVar22) = *puVar1;
    ((undefined8 *)((longlong)param_6 + lVar22))[1] = uVar19;
    lVar22 = lVar22 + 0x18;
    lVar21 = lVar21 + 8;
  } while (lVar22 != 0x48);
  param_1[2] = auStack_4d8[lVar24 * 3];
  uVar16 = auStack_4e0[lVar24 * 6 + -1];
  uVar17 = auStack_4e0[lVar24 * 6];
  uVar18 = auStack_4e0[lVar24 * 6 + 1];
  *(undefined4 *)param_1 = *(undefined4 *)(&dStack_4e8 + lVar24 * 3);
  *(undefined4 *)((longlong)param_1 + 4) = uVar16;
  *(undefined4 *)(param_1 + 1) = uVar17;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar18;
  if ((local_f0 ^ (ulonglong)local_5e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cee764 FUN_146cee764 body=102 status=ok
// SIG undefined FUN_146cee764(void)

undefined8 FUN_146cee764(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cee7cc FUN_146cee7cc body=28 status=ok
// SIG undefined FUN_146cee7cc(void)

undefined8 FUN_146cee7cc(undefined8 param_1,undefined8 param_2)

{
  FUN_146cee7e8(param_2,param_1);
  return param_1;
}



// FUNCTION 146cee7e8 FUN_146cee7e8 body=601 status=ok
// SIG undefined FUN_146cee7e8(void)

double * FUN_146cee7e8(longlong *param_1,double *param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,&local_88,&local_a0,*(undefined8 *)(*param_1 + 8));
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



// FUNCTION 146ceea42 FUN_146ceea42 body=3488 status=ok
// SIG undefined FUN_146ceea42(void)

void FUN_146ceea42(longlong param_1,longlong param_2,double *param_3,double *param_4,double *param_5
                  ,double *param_6,double *param_7,double *param_8,undefined8 param_9,
                  undefined8 param_10,double *param_11,longlong *param_12,double *param_13,
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
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong *local_160;
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
  local_2e0 = *(double *)(param_1 + 8);
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146ceec34:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_1404b5d90(param_1,&local_228,local_278,*(undefined8 *)(param_1 + 8));
  FUN_146cef7e4(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146ceee7f;
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
  local_168 = FUN_146cef966;
  local_170 = local_278;
  local_178 = FUN_146cef9ce;
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
    goto LAB_146cef170;
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
  goto LAB_146ceef02;
code_r0x000146ceee7f:
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
LAB_146ceef02:
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
LAB_146cef170:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146ceec34;
}



// FUNCTION 146cef7e4 FUN_146cef7e4 body=385 status=ok
// SIG undefined FUN_146cef7e4(void)

undefined8 FUN_146cef7e4(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,param_2,&local_78,((undefined8 *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cef966 FUN_146cef966 body=102 status=ok
// SIG undefined FUN_146cef966(void)

undefined8 FUN_146cef966(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cef9ce FUN_146cef9ce body=28 status=ok
// SIG undefined FUN_146cef9ce(void)

undefined8 FUN_146cef9ce(undefined8 param_1,undefined8 param_2)

{
  FUN_146cef9ea(param_2,param_1);
  return param_1;
}



// FUNCTION 146cef9ea FUN_146cef9ea body=604 status=ok
// SIG undefined FUN_146cef9ea(void)

double * FUN_146cef9ea(longlong *param_1,double *param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,&local_88,&local_a0,((undefined8 *)*param_1)[1]);
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



// FUNCTION 146cefc47 FUN_146cefc47 body=3489 status=ok
// SIG undefined FUN_146cefc47(void)

void FUN_146cefc47(undefined8 *param_1,longlong param_2,double *param_3,double *param_4,
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
  undefined8 *local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined8 **local_160;
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
LAB_146cefe39:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*param_1,&local_228,local_278,param_1[1]);
  FUN_146cf09ea(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf0085;
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
  local_168 = FUN_146cf0b6c;
  local_170 = local_278;
  local_178 = FUN_146cf0bd6;
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
    goto LAB_146cf0376;
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
  goto LAB_146cf0108;
code_r0x000146cf0085:
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
LAB_146cf0108:
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
LAB_146cf0376:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cefe39;
}



// FUNCTION 146cf09ea FUN_146cf09ea body=385 status=ok
// SIG undefined FUN_146cf09ea(void)

undefined8 FUN_146cf09ea(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,param_2,&local_78,*(undefined8 *)(*param_1 + 8));
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cf0b6c FUN_146cf0b6c body=105 status=ok
// SIG undefined FUN_146cf0b6c(void)

undefined8 FUN_146cf0b6c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf0bd6 FUN_146cf0bd6 body=28 status=ok
// SIG undefined FUN_146cf0bd6(void)

undefined8 FUN_146cf0bd6(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf0bf2(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf0bf2 FUN_146cf0bf2 body=601 status=ok
// SIG undefined FUN_146cf0bf2(void)

double * FUN_146cf0bf2(longlong *param_1,double *param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,&local_88,&local_a0,*(undefined8 *)(*param_1 + 8));
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



// FUNCTION 146cf0e4c FUN_146cf0e4c body=3488 status=ok
// SIG undefined FUN_146cf0e4c(void)

void FUN_146cf0e4c(longlong param_1,longlong param_2,double *param_3,double *param_4,double *param_5
                  ,double *param_6,double *param_7,double *param_8,undefined8 param_9,
                  undefined8 param_10,double *param_11,longlong *param_12,double *param_13,
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
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong *local_160;
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
  local_2e0 = *(double *)(param_1 + 8);
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146cf103e:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_1404b5d90(param_1,&local_228,local_278,*(undefined8 *)(param_1 + 8));
  FUN_146cf1bee(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf1289;
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
  local_168 = FUN_146cf1d74;
  local_170 = local_278;
  local_178 = FUN_146cf1ddc;
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
    goto LAB_146cf157a;
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
  goto LAB_146cf130c;
code_r0x000146cf1289:
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
LAB_146cf130c:
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
LAB_146cf157a:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf103e;
}



// FUNCTION 146cf1bee FUN_146cf1bee body=389 status=ok
// SIG undefined FUN_146cf1bee(void)

undefined8 FUN_146cf1bee(longlong *param_1,undefined8 param_2,double *param_3)

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



// FUNCTION 146cf1d74 FUN_146cf1d74 body=102 status=ok
// SIG undefined FUN_146cf1d74(void)

undefined8 FUN_146cf1d74(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf1ddc FUN_146cf1ddc body=28 status=ok
// SIG undefined FUN_146cf1ddc(void)

undefined8 FUN_146cf1ddc(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf1df8(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf1df8 FUN_146cf1df8 body=608 status=ok
// SIG undefined FUN_146cf1df8(void)

double * FUN_146cf1df8(longlong *param_1,double *param_2,double *param_3)

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



// FUNCTION 146cf2059 FUN_146cf2059 body=3493 status=ok
// SIG undefined FUN_146cf2059(void)

void FUN_146cf2059(longlong *param_1,longlong param_2,double *param_3,double *param_4,
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
LAB_146cf224b:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_228,local_278,param_1[1]);
  FUN_146cf2e00(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf249b;
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
  local_168 = FUN_146cf2f82;
  local_170 = local_278;
  local_178 = FUN_146cf2ff0;
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
    goto LAB_146cf278c;
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
  goto LAB_146cf251e;
code_r0x000146cf249b:
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
LAB_146cf251e:
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
LAB_146cf278c:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf224b;
}



// FUNCTION 146cf2e00 FUN_146cf2e00 body=385 status=ok
// SIG undefined FUN_146cf2e00(void)

undefined8 FUN_146cf2e00(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,param_2,&local_78,*(undefined8 *)(*param_1 + 8));
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cf2f82 FUN_146cf2f82 body=109 status=ok
// SIG undefined FUN_146cf2f82(void)

undefined8 FUN_146cf2f82(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf2ff0 FUN_146cf2ff0 body=28 status=ok
// SIG undefined FUN_146cf2ff0(void)

undefined8 FUN_146cf2ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf300c(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf300c FUN_146cf300c body=601 status=ok
// SIG undefined FUN_146cf300c(void)

double * FUN_146cf300c(longlong *param_1,double *param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,&local_88,&local_a0,*(undefined8 *)(*param_1 + 8));
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



// FUNCTION 146cf3266 FUN_146cf3266 body=3488 status=ok
// SIG undefined FUN_146cf3266(void)

void FUN_146cf3266(longlong param_1,longlong param_2,double *param_3,double *param_4,double *param_5
                  ,double *param_6,double *param_7,double *param_8,undefined8 param_9,
                  undefined8 param_10,double *param_11,longlong *param_12,double *param_13,
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
  longlong local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong *local_160;
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
  local_2e0 = *(double *)(param_1 + 8);
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146cf3458:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_1404b5d90(param_1,&local_228,local_278,*(undefined8 *)(param_1 + 8));
  FUN_146cf4008(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf36a3;
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
  local_168 = FUN_146cf41a0;
  local_170 = local_278;
  local_178 = FUN_146cf4208;
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
    goto LAB_146cf3994;
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
  goto LAB_146cf3726;
code_r0x000146cf36a3:
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
LAB_146cf3726:
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
LAB_146cf3994:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf3458;
}



// FUNCTION 146cf4008 FUN_146cf4008 body=407 status=ok
// SIG undefined FUN_146cf4008(void)

undefined8 FUN_146cf4008(longlong *param_1,undefined8 param_2,double *param_3)

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



// FUNCTION 146cf41a0 FUN_146cf41a0 body=102 status=ok
// SIG undefined FUN_146cf41a0(void)

undefined8 FUN_146cf41a0(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf4208 FUN_146cf4208 body=28 status=ok
// SIG undefined FUN_146cf4208(void)

undefined8 FUN_146cf4208(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf4224(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf4224 FUN_146cf4224 body=620 status=ok
// SIG undefined FUN_146cf4224(void)

double * FUN_146cf4224(longlong *param_1,double *param_2,double *param_3)

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



// FUNCTION 146cf4491 FUN_146cf4491 body=3505 status=ok
// SIG undefined FUN_146cf4491(void)

void FUN_146cf4491(longlong *param_1,longlong param_2,double *param_3,double *param_4,
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
LAB_146cf4683:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_318 = (double *)(*param_1 + 0x20);
  local_308 = param_9;
  local_310 = &local_180;
  FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_228,local_278,param_1[1]);
  FUN_146cf5244(&local_1e8,local_278,&local_200);
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
  if (param_13 <= dVar22) goto code_r0x000146cf48df;
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
  local_168 = FUN_146cf53c6;
  local_170 = local_278;
  local_178 = FUN_146cf5440;
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
    goto LAB_146cf4bd0;
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
  goto LAB_146cf4962;
code_r0x000146cf48df:
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
LAB_146cf4962:
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
LAB_146cf4bd0:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf4683;
}



// FUNCTION 146cf5244 FUN_146cf5244 body=385 status=ok
// SIG undefined FUN_146cf5244(void)

undefined8 FUN_146cf5244(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,param_2,&local_78,*(undefined8 *)(*param_1 + 8));
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cf53c6 FUN_146cf53c6 body=121 status=ok
// SIG undefined FUN_146cf53c6(void)

undefined8 FUN_146cf53c6(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf5440 FUN_146cf5440 body=28 status=ok
// SIG undefined FUN_146cf5440(void)

undefined8 FUN_146cf5440(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf545c(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf545c FUN_146cf545c body=601 status=ok
// SIG undefined FUN_146cf545c(void)

double * FUN_146cf545c(longlong *param_1,double *param_2,double *param_3)

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
  FUN_1404b5d90(*param_1,&local_88,&local_a0,*(undefined8 *)(*param_1 + 8));
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



// FUNCTION 146cf56b6 FUN_146cf56b6 body=3489 status=ok
// SIG undefined FUN_146cf56b6(void)

void FUN_146cf56b6(undefined8 *param_1,longlong param_2,double *param_3,double *param_4,
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
  undefined8 *local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined8 **local_160;
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
LAB_146cf58a8:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*param_1,&local_228,local_278,param_1[1]);
  FUN_146cf6458(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf5af4;
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
  local_168 = FUN_146cf65da;
  local_170 = local_278;
  local_178 = FUN_146cf6644;
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
    goto LAB_146cf5de5;
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
  goto LAB_146cf5b77;
code_r0x000146cf5af4:
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
LAB_146cf5b77:
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
LAB_146cf5de5:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf58a8;
}



// FUNCTION 146cf6458 FUN_146cf6458 body=385 status=ok
// SIG undefined FUN_146cf6458(void)

undefined8 FUN_146cf6458(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,param_2,&local_78,((undefined8 *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cf65da FUN_146cf65da body=105 status=ok
// SIG undefined FUN_146cf65da(void)

undefined8 FUN_146cf65da(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf6644 FUN_146cf6644 body=28 status=ok
// SIG undefined FUN_146cf6644(void)

undefined8 FUN_146cf6644(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf6660(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf6660 FUN_146cf6660 body=604 status=ok
// SIG undefined FUN_146cf6660(void)

double * FUN_146cf6660(longlong *param_1,double *param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,&local_88,&local_a0,((undefined8 *)*param_1)[1]);
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



// FUNCTION 146cf68bd FUN_146cf68bd body=3493 status=ok
// SIG undefined FUN_146cf68bd(void)

void FUN_146cf68bd(longlong *param_1,longlong param_2,double *param_3,double *param_4,
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
LAB_146cf6aaf:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_228,local_278,param_1[1]);
  FUN_146cf7664(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf6cff;
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
  local_168 = FUN_146cf77e6;
  local_170 = local_278;
  local_178 = FUN_146cf7854;
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
    goto LAB_146cf6ff0;
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
  goto LAB_146cf6d82;
code_r0x000146cf6cff:
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
LAB_146cf6d82:
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
LAB_146cf6ff0:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf6aaf;
}



// FUNCTION 146cf7664 FUN_146cf7664 body=385 status=ok
// SIG undefined FUN_146cf7664(void)

undefined8 FUN_146cf7664(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,param_2,&local_78,((undefined8 *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cf77e6 FUN_146cf77e6 body=109 status=ok
// SIG undefined FUN_146cf77e6(void)

undefined8 FUN_146cf77e6(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf7854 FUN_146cf7854 body=28 status=ok
// SIG undefined FUN_146cf7854(void)

undefined8 FUN_146cf7854(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf7870(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf7870 FUN_146cf7870 body=604 status=ok
// SIG undefined FUN_146cf7870(void)

double * FUN_146cf7870(longlong *param_1,double *param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,&local_88,&local_a0,((undefined8 *)*param_1)[1]);
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



// FUNCTION 146cf7acd FUN_146cf7acd body=3505 status=ok
// SIG undefined FUN_146cf7acd(void)

void FUN_146cf7acd(longlong *param_1,longlong param_2,double *param_3,double *param_4,
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
LAB_146cf7cbf:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_318 = (double *)(*param_1 + 0x20);
  local_308 = param_9;
  local_310 = &local_180;
  FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_228,local_278,param_1[1]);
  FUN_146cf8880(&local_1e8,local_278,&local_200);
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
  if (param_13 <= dVar22) goto code_r0x000146cf7f1b;
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
  local_168 = FUN_146cf8a02;
  local_170 = local_278;
  local_178 = FUN_146cf8a7c;
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
    goto LAB_146cf820c;
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
  goto LAB_146cf7f9e;
code_r0x000146cf7f1b:
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
LAB_146cf7f9e:
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
LAB_146cf820c:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf7cbf;
}



// FUNCTION 146cf8880 FUN_146cf8880 body=385 status=ok
// SIG undefined FUN_146cf8880(void)

undefined8 FUN_146cf8880(longlong *param_1,undefined8 param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,param_2,&local_78,((undefined8 *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cf8a02 FUN_146cf8a02 body=121 status=ok
// SIG undefined FUN_146cf8a02(void)

undefined8 FUN_146cf8a02(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf8a7c FUN_146cf8a7c body=28 status=ok
// SIG undefined FUN_146cf8a7c(void)

undefined8 FUN_146cf8a7c(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf8a98(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf8a98 FUN_146cf8a98 body=604 status=ok
// SIG undefined FUN_146cf8a98(void)

double * FUN_146cf8a98(longlong *param_1,double *param_2,double *param_3)

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
  FUN_144916780(*(undefined8 *)*param_1,&local_88,&local_a0,((undefined8 *)*param_1)[1]);
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



// FUNCTION 146cf8cf5 FUN_146cf8cf5 body=3489 status=ok
// SIG undefined FUN_146cf8cf5(void)

void FUN_146cf8cf5(undefined8 *param_1,longlong param_2,double *param_3,double *param_4,
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
  undefined8 *local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined8 **local_160;
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
LAB_146cf8ee7:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*param_1,&local_228,local_278,param_1[1]);
  FUN_146cf9a98(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cf9133;
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
  local_168 = FUN_146cf9c1e;
  local_170 = local_278;
  local_178 = FUN_146cf9c88;
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
    goto LAB_146cf9424;
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
  goto LAB_146cf91b6;
code_r0x000146cf9133:
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
LAB_146cf91b6:
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
LAB_146cf9424:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cf8ee7;
}



// FUNCTION 146cf9a98 FUN_146cf9a98 body=389 status=ok
// SIG undefined FUN_146cf9a98(void)

undefined8 FUN_146cf9a98(longlong *param_1,undefined8 param_2,double *param_3)

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



// FUNCTION 146cf9c1e FUN_146cf9c1e body=105 status=ok
// SIG undefined FUN_146cf9c1e(void)

undefined8 FUN_146cf9c1e(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cf9c88 FUN_146cf9c88 body=28 status=ok
// SIG undefined FUN_146cf9c88(void)

undefined8 FUN_146cf9c88(undefined8 param_1,undefined8 param_2)

{
  FUN_146cf9ca4(param_2,param_1);
  return param_1;
}



// FUNCTION 146cf9ca4 FUN_146cf9ca4 body=608 status=ok
// SIG undefined FUN_146cf9ca4(void)

double * FUN_146cf9ca4(longlong *param_1,double *param_2,double *param_3)

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



// FUNCTION 146cf9f05 FUN_146cf9f05 body=3489 status=ok
// SIG undefined FUN_146cf9f05(void)

void FUN_146cf9f05(undefined8 *param_1,longlong param_2,double *param_3,double *param_4,
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
  undefined8 *local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined8 **local_160;
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
LAB_146cfa0f7:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*param_1,&local_228,local_278,param_1[1]);
  FUN_146cfaca8(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cfa343;
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
  local_168 = FUN_146cfae40;
  local_170 = local_278;
  local_178 = FUN_146cfaeaa;
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
    goto LAB_146cfa634;
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
  goto LAB_146cfa3c6;
code_r0x000146cfa343:
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
LAB_146cfa3c6:
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
LAB_146cfa634:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cfa0f7;
}



// FUNCTION 146cfaca8 FUN_146cfaca8 body=407 status=ok
// SIG undefined FUN_146cfaca8(void)

undefined8 FUN_146cfaca8(longlong *param_1,undefined8 param_2,double *param_3)

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



// FUNCTION 146cfae40 FUN_146cfae40 body=105 status=ok
// SIG undefined FUN_146cfae40(void)

undefined8 FUN_146cfae40(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cfaeaa FUN_146cfaeaa body=28 status=ok
// SIG undefined FUN_146cfaeaa(void)

undefined8 FUN_146cfaeaa(undefined8 param_1,undefined8 param_2)

{
  FUN_146cfaec6(param_2,param_1);
  return param_1;
}



// FUNCTION 146cfaec6 FUN_146cfaec6 body=620 status=ok
// SIG undefined FUN_146cfaec6(void)

double * FUN_146cfaec6(longlong *param_1,double *param_2,double *param_3)

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



// FUNCTION 146cfb133 FUN_146cfb133 body=3493 status=ok
// SIG undefined FUN_146cfb133(void)

void FUN_146cfb133(longlong *param_1,longlong param_2,double *param_3,double *param_4,
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
LAB_146cfb325:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_228,local_278,param_1[1]);
  FUN_146cfcca6(&local_1e8,local_278,&local_200);
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
  if ((double)param_13 <= dVar22) goto code_r0x000146cfb575;
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
  local_168 = FUN_146cfce2c;
  local_170 = local_278;
  local_178 = FUN_146cfce9a;
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
    goto LAB_146cfb866;
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
  goto LAB_146cfb5f8;
code_r0x000146cfb575:
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
LAB_146cfb5f8:
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
LAB_146cfb866:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cfb325;
}



// FUNCTION 146cfbed9 FUN_146cfbed9 body=3531 status=ok
// SIG undefined FUN_146cfbed9(void)

void FUN_146cfbed9(longlong *param_1,longlong param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8,undefined8 param_9
                  ,undefined8 param_10,double *param_11,longlong *param_12,double *param_13,
                  undefined8 param_14)

{
  double *pdVar1;
  bool bVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double *pdVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
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
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  undefined4 uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_358 [32];
  double *local_338;
  double *local_330;
  double *local_328;
  double *local_320;
  undefined8 local_318;
  longlong local_308;
  double local_300;
  double local_2f8;
  double *local_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [16];
  double *local_288;
  double *local_280;
  undefined8 local_278;
  longlong local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double local_220;
  double dStack_218;
  double dStack_210;
  longlong local_208;
  double *local_200;
  double *local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  longlong *local_1c0;
  double *local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  code *local_198;
  undefined1 *local_190;
  code *local_188;
  longlong **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
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
  local_330 = &local_228;
  local_228 = 3.4028234663852886e+38;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_328 = param_13;
  local_338 = &local_220;
  local_2f0 = param_4;
  local_208 = param_2;
  local_1c0 = param_1;
  FUN_144917018(param_11,param_3,&local_178,local_158);
  uVar30 = (uint)((ulonglong)dStack_210 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dStack_210,0);
  dVar23 = -local_220;
  dVar24 = -dStack_218;
  local_300 = (double)param_1[1];
  local_2f8 = *(double *)(param_2 + 8);
  local_2d8 = local_300 + local_2f8;
  pdVar7 = param_11 + 0xc;
  iVar9 = 0x1e;
  dVar13 = local_228;
  local_308 = param_2;
LAB_146cfc0e1:
  local_288 = (double *)((ulonglong)dStack_210 ^ 0x8000000000000000);
  local_298._8_4_ = SUB84(dStack_218,0);
  local_298._0_8_ = -local_220;
  local_298._12_4_ = (uint)((ulonglong)dStack_218 >> 0x20) ^ 0x80000000;
  local_330 = (double *)param_9;
  local_338 = &local_1a0;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_248,local_298,param_1[1]);
  FUN_146cfd118(&local_208,local_298,&local_220);
  dVar21 = local_1a0;
  dVar3 = local_1a8;
  dVar18 = *param_3;
  dVar32 = param_3[1];
  dVar33 = param_3[2];
  dVar20 = param_3[3];
  dVar11 = param_3[3];
  dVar15 = (double)local_298._8_8_ * dVar18 - (double)local_298._0_8_ * dVar32;
  dVar17 = (double)local_288 * dVar32 - (double)local_298._8_8_ * dVar33;
  dVar19 = (double)local_298._0_8_ * dVar33 - dVar18 * (double)local_288;
  dVar17 = dVar17 + dVar17;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar14 = param_3[4];
  dVar16 = param_3[5];
  dVar12 = param_3[6];
  uVar25 = SUB84(local_1a0,0);
  uVar26 = (undefined4)((ulonglong)local_1a0 >> 0x20);
  lVar5 = (longlong)(int)(uint)local_178;
  param_11[lVar5 * 3 + 2] = local_238;
  param_11[lVar5 * 3] = local_248;
  (param_11 + lVar5 * 3)[1] = dStack_240;
  param_11[lVar5 * 3 + 0xe] = (double)local_288;
  pdVar7[lVar5 * 3] = (double)local_298._0_8_;
  (pdVar7 + lVar5 * 3)[1] = (double)local_298._8_8_;
  *(uint *)((longlong)&local_178 + lVar5 * 4 + 4) = (uint)local_178;
  local_178 = CONCAT44(local_178._4_4_,(uint)local_178 + 1);
  local_158[lVar5 * 3] =
       local_248 -
       ((dVar15 * dVar32 - dVar19 * dVar33) + dVar20 * dVar17 + (double)local_298._0_8_ + dVar14);
  local_158[lVar5 * 3 + 1] =
       dStack_240 -
       ((dVar33 * dVar17 - dVar18 * dVar15) + dVar11 * dVar19 + (double)local_298._8_8_ + dVar16);
  local_158[lVar5 * 3 + 2] =
       local_238 -
       (dVar15 * dVar20 + (double)local_288 + (dVar19 * dVar18 - dVar17 * dVar32) + dVar12);
  local_338 = param_11;
  local_330 = pdVar7;
  FUN_1449162b1(&local_220,local_158,&local_178,param_11 + 0x18);
  dVar20 = SQRT(dStack_210 * dStack_210 + local_220 * local_220 + dStack_218 * dStack_218);
  uVar22 = 0;
  uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if ((double)param_13 <= dVar20) goto code_r0x000146cfc33e;
  uStack_2e0 = 0;
  *(uint *)(param_11 + 0x1c) = (uint)local_178;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_2e8 = dVar20;
  FUN_140268ec4(&local_258,8);
  FUN_140268ec4(&local_268,8);
  if (0 < (int)(uint)local_178) {
    pdVar7 = param_11 + 0xe;
    lVar5 = 0;
    do {
      uVar6 = uStack_250;
      lVar8 = (longlong)(int)uStack_250;
      uVar4 = (int)uStack_250 + 1;
      uStack_250 = CONCAT44(uStack_250._4_4_,uVar4);
      if (uStack_250._4_4_ < uVar4) {
        FUN_14026a4e8(&local_258,uVar6 & 0xffffffff);
      }
      uVar6 = uStack_260;
      *(double *)(local_258 + 0x10 + lVar8 * 0x18) = pdVar7[-0xc];
      dVar13 = pdVar7[-0xd];
      pdVar1 = (double *)(local_258 + lVar8 * 0x18);
      *pdVar1 = pdVar7[-0xe];
      pdVar1[1] = dVar13;
      dVar32 = pdVar7[-2];
      dVar33 = pdVar7[-1];
      dVar15 = *param_3;
      dVar17 = param_3[1];
      dVar19 = param_3[2];
      dVar20 = param_3[3];
      dVar13 = param_3[3];
      dVar18 = dVar33 * dVar15 - dVar32 * dVar17;
      dVar31 = *pdVar7 * dVar17 - dVar33 * dVar19;
      dVar28 = dVar32 * dVar19 - dVar15 * *pdVar7;
      dVar31 = dVar31 + dVar31;
      dVar28 = dVar28 + dVar28;
      dVar18 = dVar18 + dVar18;
      dVar14 = param_3[4];
      dVar16 = param_3[5];
      dVar11 = *pdVar7;
      dVar12 = param_3[6];
      lVar8 = (longlong)(int)uStack_260;
      uVar4 = (int)uStack_260 + 1;
      uStack_260 = CONCAT44(uStack_260._4_4_,uVar4);
      if (uStack_260._4_4_ < uVar4) {
        FUN_14026a4e8(&local_268,uVar6 & 0xffffffff);
      }
      pdVar1 = (double *)(local_268 + lVar8 * 0x18);
      *pdVar1 = (dVar18 * dVar17 - dVar28 * dVar19) + dVar20 * dVar31 + dVar32 + dVar14;
      pdVar1[1] = (dVar19 * dVar31 - dVar15 * dVar18) + dVar13 * dVar28 + dVar33 + dVar16;
      *(double *)(local_268 + 0x10 + lVar8 * 0x18) =
           dVar18 * dVar20 + dVar11 + (dVar28 * dVar15 - dVar31 * dVar17) + dVar12;
      lVar5 = lVar5 + 1;
      pdVar7 = pdVar7 + 3;
    } while (lVar5 < (int)(uint)local_178);
  }
  if (dVar21 <= dVar3) {
    uVar25 = SUB84(dVar3,0);
    uVar26 = uVar27;
  }
  local_298._8_8_ = param_3;
  local_298._0_8_ = local_308;
  local_288 = &local_1e8;
  local_280 = &local_1a8;
  local_278 = param_10;
  local_180 = &local_1c0;
  local_188 = FUN_146cfd29e;
  local_190 = local_298;
  local_198 = FUN_146cfd30c;
  local_318 = param_14;
  local_320 = &local_2d0;
  local_328 = &local_2b8;
  local_330 = &local_248;
  local_338 = &local_2a0;
  uVar4 = FUN_144918d86(&local_258,&local_268);
  if (uVar4 < 2) {
    param_7[2] = local_238;
    *param_7 = local_248;
    param_7[1] = dStack_240;
    dVar13 = *param_3;
    dVar20 = -dVar13;
    dVar11 = -param_3[1];
    dVar23 = param_3[2] * -1.0;
    dVar24 = param_3[3] * 1.0;
    dVar12 = dStack_240 * dVar20 - local_248 * dVar11;
    dVar16 = local_238 * dVar11 - dStack_240 * dVar23;
    dVar14 = local_248 * dVar23 - dVar20 * local_238;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    *param_8 = (dVar12 * dVar11 - dVar14 * dVar23) + dVar24 * dVar16 + local_248;
    param_8[1] = dVar13 * dVar12 + dVar23 * dVar16 + dVar24 * dVar14 + dStack_240;
    param_8[2] = dVar24 * dVar12 + local_238 + (dVar14 * dVar20 - dVar16 * dVar11);
    *local_2f0 = local_2a0 + local_300 + local_2f8;
    *param_5 = local_300 * local_248 + local_2b8;
    param_5[1] = local_300 * dStack_240 + local_2b0;
    param_5[2] = local_300 * local_238 + local_2a8;
    dVar11 = (local_2d0 - local_2f8 * local_248) - param_3[4];
    dVar12 = (local_2c8 - dStack_240 * local_2f8) - param_3[5];
    dVar20 = (local_2c0 - local_238 * local_2f8) - param_3[6];
    dVar24 = *param_3;
    dVar13 = param_3[2] * -1.0;
    dVar23 = param_3[3] * 1.0;
    dVar32 = -dVar24;
    dVar33 = -param_3[1];
    dVar18 = dVar11 * dVar13 - dVar32 * dVar20;
    dVar14 = dVar12 * dVar32 - dVar11 * dVar33;
    dVar16 = dVar20 * dVar33 - dVar12 * dVar13;
    dVar16 = dVar16 + dVar16;
    dVar18 = dVar18 + dVar18;
    dVar14 = dVar14 + dVar14;
    *param_6 = (dVar14 * dVar33 - dVar18 * dVar13) + dVar23 * dVar16 + dVar11;
    param_6[1] = dVar24 * dVar14 + dVar13 * dVar16 + dVar23 * dVar18 + dVar12;
    param_6[2] = dVar23 * dVar14 + dVar20 + (dVar18 * dVar32 - dVar16 * dVar33);
    *param_12 = CONCAT44(uVar26,uVar25);
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    goto LAB_146cfc61f;
  }
  dVar20 = local_2e8;
  uVar22 = uStack_2e0;
  if (uVar4 == 3) {
    uVar29 = SUB84(local_238,0);
    uVar30 = (uint)((ulonglong)local_238 >> 0x20);
    uVar22 = 0x8000000000000000;
    dVar20 = -local_2a0;
    dVar23 = local_248;
    dVar24 = dStack_240;
  }
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  goto LAB_146cfc3b9;
code_r0x000146cfc33e:
  bVar2 = dVar13 <= dVar20;
  dVar13 = 1.0 / dVar20;
  local_220 = local_220 * dVar13;
  dStack_218 = dStack_218 * dVar13;
  dStack_210 = dStack_210 * dVar13;
  uVar30 = (uint)((ulonglong)dStack_210 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dStack_210,0);
  dVar23 = -local_220;
  dVar24 = -dStack_218;
  bVar10 = iVar9 == 0;
  iVar9 = iVar9 + -1;
  dVar13 = dVar20;
  if (bVar10 || bVar2) {
    if (dVar21 <= dVar3) {
      uVar25 = SUB84(dVar3,0);
      uVar26 = uVar27;
    }
    *(uint *)(param_11 + 0x1c) = (uint)local_178;
LAB_146cfc3b9:
    local_308 = CONCAT44(uVar26,uVar25);
    if ((int)(uint)local_178 < 1) {
      dVar11 = 0.0;
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar16 = 0.0;
      dVar18 = 0.0;
    }
    else {
      pdVar7 = param_11 + 0xe;
      dVar18 = 0.0;
      uVar6 = 0;
      dVar16 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
      dVar12 = 0.0;
      dVar11 = 0.0;
      do {
        dVar32 = (param_11 + 0x18)[uVar6];
        dVar18 = dVar18 + pdVar7[-0xc] * dVar32;
        dVar16 = dVar16 + pdVar7[-0xd] * dVar32;
        dVar14 = dVar14 + pdVar7[-0xe] * dVar32;
        dVar13 = dVar13 + *pdVar7 * dVar32;
        dVar12 = dVar12 + pdVar7[-1] * dVar32;
        dVar11 = dVar11 + dVar32 * pdVar7[-2];
        uVar6 = uVar6 + 1;
        pdVar7 = pdVar7 + 3;
      } while ((uint)local_178 != uVar6);
    }
    *param_7 = dVar23;
    param_7[1] = dVar24;
    param_7[2] = (double)CONCAT44(uVar30,uVar29);
    dVar3 = *param_3;
    dVar32 = -dVar3;
    dVar33 = -param_3[1];
    dVar21 = param_3[2] * -1.0;
    dVar15 = param_3[3] * 1.0;
    dVar31 = dVar23 * dVar21 - dVar32 * (double)CONCAT44(uVar30,uVar29);
    dVar17 = dVar24 * dVar32 - dVar23 * dVar33;
    dVar19 = (double)CONCAT44(uVar30,uVar29) * dVar33 - dVar24 * dVar21;
    dVar19 = dVar19 + dVar19;
    dVar31 = dVar31 + dVar31;
    dVar17 = dVar17 + dVar17;
    *param_8 = (dVar17 * dVar33 - dVar31 * dVar21) + dVar15 * dVar19 + dVar23;
    param_8[1] = dVar3 * dVar17 + dVar21 * dVar19 + dVar15 * dVar31 + dVar24;
    param_8[2] = dVar15 * dVar17 + (double)CONCAT44(uVar30,uVar29) +
                 (dVar31 * dVar32 - dVar19 * dVar33);
    *local_2f0 = local_2d8 - dVar20;
    dVar23 = param_7[2];
    dVar24 = param_7[1];
    *param_5 = local_300 * *param_7 + dVar14;
    param_5[1] = dVar24 * local_300 + dVar16;
    param_5[2] = dVar23 * local_300 + dVar18;
    dVar23 = param_8[2];
    dVar24 = param_8[1];
    *param_6 = dVar11 - local_2f8 * *param_8;
    param_6[1] = dVar12 - dVar24 * local_2f8;
    param_6[2] = dVar13 - dVar23 * local_2f8;
    *param_12 = local_308;
    local_2e8 = dVar20;
    uStack_2e0 = uVar22;
LAB_146cfc61f:
    if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cfc0e1;
}



// FUNCTION 146cfcca6 FUN_146cfcca6 body=389 status=ok
// SIG undefined FUN_146cfcca6(void)

undefined8 FUN_146cfcca6(longlong *param_1,undefined8 param_2,double *param_3)

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



// FUNCTION 146cfce2c FUN_146cfce2c body=109 status=ok
// SIG undefined FUN_146cfce2c(void)

undefined8 FUN_146cfce2c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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



// FUNCTION 146cfce9a FUN_146cfce9a body=28 status=ok
// SIG undefined FUN_146cfce9a(void)

undefined8 FUN_146cfce9a(undefined8 param_1,undefined8 param_2)

{
  FUN_146cfceb6(param_2,param_1);
  return param_1;
}



// FUNCTION 146cfceb6 FUN_146cfceb6 body=608 status=ok
// SIG undefined FUN_146cfceb6(void)

double * FUN_146cfceb6(longlong *param_1,double *param_2,double *param_3)

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



// FUNCTION 146cfd118 FUN_146cfd118 body=389 status=ok
// SIG undefined FUN_146cfd118(void)

undefined8 FUN_146cfd118(longlong *param_1,undefined8 param_2,double *param_3)

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



// FUNCTION 146cfd29e FUN_146cfd29e body=109 status=ok
// SIG undefined FUN_146cfd29e(void)

undefined8 FUN_146cfd29e(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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


